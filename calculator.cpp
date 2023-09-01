#include<iostream>
using namespace std ;

int main(){
    int a , b;

    cout<< "enter value of  a:"<< endl;
    cin>> a ;

    cout<<" enter value of b: "<< endl;
    cin>> b;

    char op ;
    cout<< " enter your problem statement which like to execute :"<< endl;
    cin>> op;

    switch (op)
    {
    case '+' : cout<< a + b <<endl;
        break;

    case '-' : cout<< a - b << endl;
        break;

    case '*' : cout<< a* b << endl ;
        break;

    case '/' : cout<< a / b << endl ;
        break;

    default: cout << " enter the valid condition .";
        break;
    }

}

/* ~~~~~~~~~~~~~~~~~ output ~~~~~~~~~~~~~~~~~~~~
enter value of  a:
8
 enter value of b: 
9
 enter your problem statement which like to execute :
*
72

----------------------------------------------------------------------*/
