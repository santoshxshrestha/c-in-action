#include<iostream>
int main(){
  int arr[] = {5, 2, 9, 1, 5, 6};
  int length = sizeof(arr)/sizeof(arr[0]);

  for (int i = 0 ; i<length; i++){

    for (int j = 0; j<length-i-1; j++){
      if (arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }

  }
}