#include<iostream>
using namespace std ;

//linear search of array :

int search(int arr[] , int size , int key){

    for ( int i = 0 ; i< size ; i++){
        if ( arr[i ] == key ){
            return 1;
        }

    }
    return 0 ;
}

int main ( ){

    int arr[5]= {2 , 18 , 6 , 7 , 0 };

    cout << " Enter the element for search "<< endl ;
    int key ;
    cin >> key ;

    bool found = search(arr, 10 , key );

    if (found ){
        cout << " key is present "<< endl;

    }
    else {
        cout << " key is absent "<< endl ;
    }


}


/*~~~~~~~~~~~~~~~~~~~~ output ~~~~~~~~~~~~~~~~~~~~
 Enter the element for search 
18
 key is present 

 Enter the element for search 
99
 key is absent
----------------------------------------------------------------
*/

//Reverse the array :

void printArray( int arr[], int n){

    for(int i = 0; i< n ; i++){
        cout<< arr[i]<< " ";
    }
    cout << endl ;
}

void reverse ( int arr[] , int n){
    int start = 0;
    int end = n-1 ;

    while ( start<= end ){
        swap(arr[start],arr[end ]);
        start++;
        end-- ;
    }
}



int main (){
    int arr[5 ] = {2,4,66,7,9};
    int newarr[6 ] = { 5, 0,-4,90,89,12};

    reverse( arr , 5 );
    reverse( newarr , 6);

    printArray( arr , 5);
    printArray( newarr , 6);

    return 0 ;


    
}

/*~~~~~~~~~~~~~~~ output ~~~~~~~~~~~~~~~~~~~
9 7 66 4 2 
12 89 90 -4 0 5 
-----------------------------------------------------------------*/