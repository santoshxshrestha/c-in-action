# FILE HANDLING

`File handling` in C++ refers to the process of creating, opening, reading, writing, and closing files using special classes provided by the C++ Standard Library.

There are variables which store the data temporarily but we can use the
file handling to store and retrive the data `permanently` from the storage device.

# File operation in c++

There are three main steps in file handling

1. opening a file
2. Reading / writing operation in the file
3. closing a file

❓ Why Do We Need to Close a File?

Umm... closing? But why?

Well, when we open a file, it consumes system resources such as file descriptors and memory buffers. If we don’t close it properly, several problems can occur:

    🔄 Buffered data might not be saved:
    File systems use buffers to temporarily hold data. If you don’t close the file, some data may remain unwritten.

    🧠 Resources are not freed:
    An open file keeps using memory and OS-level resources. If too many files are left open, it can lead to resource leaks or even program crashes.

    🚫 File locks may remain:
    Some systems lock files during access. If not closed, other programs may not be able to use that file.

---

Flow of file handling

         +------------------+
         |  Open the File   |
         +--------+---------+
                  |
                  v
       +----------+-----------+
       | Read from / Write to |
       |      the File        |
       +----------+-----------+
                  |
                  v
         +--------+--------+
         |  Close the File |
         +-----------------+

---

# What are Stream(sequence of bytes) classes in c++

In C++, a stream is simply an abstraction for input and output (I/O) operations.
It represents a flow of data—either input (from keyboard, file, etc.) or output (to screen, file, etc.).

Stream classes are C++ standard library classes that handle this data flow.
They are defined in headers like `<iostream>`, `<fstream>`, etc.

Examples: cin (input), cout (output) from <iostream>.

# why do we use stream

well ,
Using streams abstracts away the details of how data is read or written, making code simpler and more portable.

## File Streams:

C++ uses file stream classes for file I/O.
These are available in the <fstream> header.

### Common File Stream Classes:

- ifstream – for reading files (input).

- ofstream – for writing files (output).

- fstream – for both reading and writing.

---

# 📂 Opening a File in C++

Before reading from or writing to a file, it must be opened.
Opening a file loads it into RAM and links it to a `stream object` that allows interaction with the file.

## How to open a file

In C++, we open a file using the `fstream`, `ifstream`, or `ofstream` classes provided in the `<fstream>` header.

### Syntax for opening file

```cpp
fstream str("file_name_goes_here.ext", mode);
```

> `str` -> The name of th stream object that you create it can be any thing,

> `file_name_goes_here.ext` -> The name of the file you want to open .ext is just a of extension of the file,

> `mode` -> The file mode (how you want to open or access the file ),

### Comon file modes

| Mode          | Description                                                              |
| ------------- | ------------------------------------------------------------------------ |
| `ios::in`     | Open file for reading. If the file does not exist, open operation fails. |
| `ios::out`    | Open file for writing. Creates the file if it doesn’t exist.             |
| `ios::binary` | Open file in binary mode (instead of text mode).                         |
| `ios::ate`    | Open file and move the file pointer to the end immediately.              |
| `ios::app`    | Open file in append mode. All output is written at the end of the file.  |
| `ios::trunc`  | If file exists, discard previous contents (used with `ios::out`).        |

> The mode `ios::trunc` means truncate the file — in other words, erase all existing content as soon as the file is opened.

> It is used with `ios::out` (write mode) to ensure you start with a clean, empty file.

### Other File Streams

There are two more specialized streams too
`ifstream`: Stands for input file stream. It is equivalent to open `fstream` in `ios::in` mode.
`ofstream`: Stands for output file stream. It is equivalent to opening `fstream` in `ios::out` mode.

### Examples

- Opening a file for reading

```c
fstream filein("file.txt", ios::in);
```

- for writing

```c
fstream fileout("file.txt", ios::out);

```

> [!NOTE]
> we can also use `OR` operator (|) for combining these modes

### example

```c
fstream str("file.txt", ios::in | ios::out);
```

where it happening here
well,

> If the file opened in write mode does not exists, a new file is created.
> But if the file opened in read mode doesn't exists, then no new file is created, and an exception(error message) is thrown

### another one

```cpp
#include <iostream>
#include <fstream>

int main() {
    // Open a file for both reading and writing in binary mode
    std::fstream file("example.dat", std::ios::in | std::ios::out | std::ios::binary);

    if (!file.is_open()) {
        std::cout << "Failed to open the file.\n";
        return 1;
    }

    // Use the file stream for input/output operations here

    file.close(); // Always close the file
    return 0;
}
```

Explanation:

1. std::ios::in — open for reading
2. std::ios::out — open for writing
3. std::ios::binary — open in binary mode (no text translations)

   _Using `|` combines these flags so all three modes apply simultaneously._

   that is pretty much it for the opening of the file .

   what after it ?

---

# write data to file

```cpp
#include <iostream>
#include <fstream>

int main() {
    // Open file for writing and reading in binary mode
    std::fstream file("example.dat", std::ios::out | std::ios::binary);

    // here we are doing some error handling when file is not opened
    if (!file.is_open()) {
        std::cout << "Failed to open the file.\n";
        return 1;
    }

    // Write data to the file
    std::string data = "Hello, file!";
    file.write(data.c_str(), data.size());

    std::cout << "Data written to file successfully.\n";

    file.close(); // Close the file

    return 0;
}
```

> [!NOTE]
> std::ios::out | std::ios::binary opens file for writing in binary mode.
> file.write() writes raw bytes to the file.
> We use data.c_str() and data.size() to write the string as bytes.

### 📂 well, Why Open a File in Binary Mode?

    Binary mode means the file is read or written exactly as-is, byte by byte, without any translation or modification.

    Without ios::binary (i.e., in text mode), the system may:

        Convert newline characters (\n) to the platform-specific line endings (\r\n on Windows).

        Interpret certain byte values differently (like EOF characters).

        This can corrupt binary data or cause unexpected changes.

### When Not to Use Binary Mode?

    For plain text files (e.g., .txt), you usually don’t need binary mode because you want newline translations to happen automatically.

### same program in abstracted way

```cpp
#include <iostream>
#include <fstream>

int main() {
// Open file in write mode (text mode by default)
std::ofstream file("example.txt");

    if (!file) {
        std::cout << "Failed to open the file.\n";
        return 1;
    }

    // Write text data to the file
    file << "Hello, file!" << std::endl;

    std::cout << "Data written successfully using ofstream.\n";

    // Automatically closes the file when 'file' goes out of scope,
    // but we can close it explicitly too:
    file.close();

    return 0;

}
```

### 🧠 Why this is more abstracted:

    ✅ No need to worry about modes (ios::out is default for ofstream)

    ✅ Uses the << operator like cout

    ✅ Works with text naturally (adds \n in a platform-specific way)

    ✅ Handles buffering internally

### ⚠️ Note:

> If you want to append to a file using `ofstream,` use:
> `std::ofstream` file("example.txt", std::ios::app);

what is next
well lets read it , the file

---

# 📘 Reading Data from a File in C++ (Using ifstream)

Once a file is opened in read mode using ifstream or fstream, you can read from it just like using cin, with the >> operator.

### ✅ Example Code

```cpp
#include <iostream>
#include <fstream>
#include <string>

int main() {
// Open the file in read mode
std::ifstream file("example.txt");

    if (!file.is_open()) {
        std::cout << "Failed to open the file.\n";
        return 1;
    }

    std::string s;

    // Read a word from the file
    file >> s;

    std::cout << "Read String: " << s << std::endl;

    file.close(); // Close the file

    return 0;

}
```

📌 Explanation

    std::ifstream file("example.txt"); → Opens the file for reading.
    file >> s; → Reads a word from the file (stops at space/newline).
    file.close(); → Always close the file after use.

## we are not done yet lets close the file

# Closing the File in C++

Closing a file means closing the associated stream and freeing the system resources used during file access.
In C++, we use the `.close()` member function, which is available in all file stream classes (`ifstream,` `ofstream`, `fstream`).

last example

```cpp
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Open a file in read mode
    ifstream file("GFG.txt");
    string s;

    // Read a full line from the file
    getline(file, s);

    cout << "Read String: " << s << endl;

    // Close the file to release resources
    file.close();

    return 0;
}
```
