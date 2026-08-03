#include<iostream>
using namespace std;
// int main(){
    // declaation
    // int laxman[109];
    // int arr[4];
    // initialization
    // int arr[5] = {1,2,3,4,5}; 
    // int arr[] = {4,5,6,7,8};
//     int multipleof2[10] = {2,4,6,8,10,12,14,16,18,20};
//     for (int index = 0; index <= 9; index++){
//     cout << multipleof2[index] << endl;
//     return 0;

// }

// Input in Array

// int arr[5];
// for(int index = 0; index <= 4; index++){
// cout << "Enter the value of an Index" << endl;
// cin >> arr[index];
// cout << endl;
//    }
//     return 0;
// }

// int arr[] = {10,20,30,40,50};
// int sum = 0;
// for (int index = 0; index <= 5; index++){
//     sum = sum + arr[index];
//     cout << "total sum : " << sum << endl;
// }
// return 0;
// }

// Can we pass array in function?

void printArray(int arr[],int size){
    for (int index = 0; index <= size - 1; index++){
    cout << arr[index] << endl;
   }
}  
int maim(){
    int arr[] = {10,20,30,40};
    int size = 4;
   printArray(arr,size);
   return 0;
} 