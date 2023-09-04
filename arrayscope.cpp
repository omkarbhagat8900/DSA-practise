#include<iostream>
using namespace std ;

void update(int arr[], int n){
    cout<< endl << "Inside the function " << endl ;

    for (int i = 0 ; i < n ; i++ ){
        cout<< arr[i]<< " ";

    }
    cout<< endl ;

    cout << " Going back to the function "<< endl ;
}

int main (){

    int arr[3] = { 1,2 ,3};

    update (arr , 3);

    cout << endl << " Printing in the main function "<< endl ;
    for ( int i = 0 ; i <3 ; i++ ){
        cout << arr[i]<< ' ' ;

}
cout << endl ;
    
}

/*~~~~~~~~~~~~~~~~~~~~~ output ~~~~~~~~~~~~~~~~~~~~~~
Inside the function 
1 2 3 
 Going back to the function 

 Printing in the main function 
1 2 3 
--------------------------------------------------------------------------------*/




