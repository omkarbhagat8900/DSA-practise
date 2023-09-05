#include<iostream>
using namespace std ;

void printArray(int arr[] , int n){
    for (int i = 0; i < n ; i++){
        cout<<arr [i] << " ";
    }cout<< endl ;
}

void swapAlternate(int arr[] , int size){

    for (int i = 0 ; i< size; i =i+2 ){

        if (i+1 < size ){
            swap(arr[i ], arr[i+1]);
        }
    }
}

int main(){
    int odd[5] = {2,44,15,89,0};
    int even[6] = {23,12,90,2,89,7};

    swapAlternate( odd , 5);
    printArray(odd , 5);

    cout<< endl;

    swapAlternate(even , 6);
    printArray(even , 6);

}