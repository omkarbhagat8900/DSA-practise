#include<iostream>
using namespace std ;

int main (){
    int amount ;
    int n10 , n20 , n50 , n100 , n200 , n500 ;
    n10 = n20 = n50 = n100 = n200 = n500 = 0;

    cout << "enter your amount :"<< endl;
    cin>> amount ;

    switch (amount>= 500)
    {
    case 1 : 
        n500 = amount / 500;
        amount = amount - n500*500 ;
        break;
    }

    switch (amount>= 200)
    {
    case 1 :
        n200 = amount / 200;
        amount = amount - 200 * n200;
        break;
    }

    switch (amount >= 100)
    {
    case 1: 
        n100 = amount / 100;
        amount = amount - n100*100 ; 
        break;
    }

    switch (amount >= 50)
    {
    case 1 :
        n50 = amount / 50 ;
        amount = amount - n50*50 ;
        break;
    }

    switch (amount>= 20)
    {
    case 1 :
        n20 = amount / 20 ;
        amount = amount - n20*20 ;
        break;
    }

    switch (amount>= 10)
    {
    case 1 :
        n10 = amount / 10 ;
        break;
    }

    cout << " 500 = "<< n500 << endl<<"200 = "<<n200<< endl<<"100 = "<<n100<<endl<<"50 = "<<n50<<endl<<"20 = "<<n20<<endl<<"10 = "<<n10<<endl;
}


/*~~~~~~~~~~~~~~~~~~ output ~~~~~~~~~~~~~~~~~~~~~~~~
enter your amount :
22790
 500 = 45
200 = 1
100 = 0
50 = 1
20 = 2
10 = 0
-----------------------------------------------------------------------------*/