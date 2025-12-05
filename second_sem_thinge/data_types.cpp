#include <cmath>
#include <cstdint>
#include <iostream>

// using namespace std;
int main() {
    int a = 53;
    int size_of_int = sizeof(a);
    std::cout <<"size of integer is " << size_of_int<<".\n";

    char character = 'a';
    std::cout <<"size of character is " <<sizeof(character)<< ".\n";

    float float_val = 424.23;
    std::cout <<"size of float value is " <<sizeof(float_val) << ".\n";

    double double_val = 423.423224232;
    std::cout <<"size of double value is " <<sizeof(double_val) << ".\n";


    bool bool_val = true; 
    std::cout <<"size of boolean value is " <<sizeof(bool_val) << ".\n";

    float float_in_exponential_form = 8e-4;
    std::cout <<"The float in exponential form of 8e-4 is "<< float_in_exponential_form <<".\n";


    //one liner is here
    std::cout <<"The size of the int is "<<sizeof(int)<<", The size of float is "<<sizeof(float)<<", The size of the double is "<<sizeof(double) <<" and the size of char is "<<sizeof(char)<<".\n";


    //At least 32 bits (could be 32, 64, etc., whichever is fastest on your machine)
    int_fast32_t val = 131;
    std::cout << "The size of int_fast32_t val = 131 (fast i32) is "<<sizeof(val)<<".\n";

    // Exactly 32 bits (always 4 bytes)
    int32_t val_of_i32 = 313;
    std::cout << "The size of int32_t val_of_i32 = 313(exactly 32 bits) is "<<sizeof(val_of_i32)<<".\n";
}
