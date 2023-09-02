#include<iostream>
using namespace std ;

int factorial( int n ){
    int fact = 1;

    for (int i = 1 ; i <= n ; i++ ){
        fact = fact * i ;

    }
    return fact ;
}

int nCr (int n, int r){
    int num = factorial(n);

    int deno = factorial(r)* factorial(n- r);
    
    return  num / deno ;
}

int main (){
    int n , r ;
    cin >> n >> r ;

    cout<< "Answer is : "<< nCr ( n , r )<< endl;

}

/*~~~~~~~~~~~~~~~~~~~~ output ~~~~~~~~~~~~~~~~~~~~
5 0
Answer is : 1
--------------------------------------------------------------------------------*/


void printCounting (int n){

    for ( int i = 1 ; i <= n ; i++){
        cout << i << " ";
    }

    cout << endl;

}

int main (){

    cout << "Enter number : ";
    int n ;
    cin >> n ;
    
    printCounting(n);

    return 0;
}

/*~~~~~~~~~~~~~~~~ output ~~~~~~~~~~~~~~~~~~~~~
Enter number : 9
1 2 3 4 5 6 7 8 9 

------------------------------------------------------*/
