#include<iostream>
using namespace std ;

int main(){
    int x ;
    cout<<"input value of x :";
    cin>>x;

    int ans  = 0;
    while ( x != 0){
        int digit = x % 10;
        ans = (ans * 10)+ digit ;
        x = x/ 10;
    }
    cout <<" reverse value is:"<< ans <<endl;
    

}

/* ~~~~~~~~~~~~~~ output ~~~~~~~~~~~~~~~~~~~
input value of x :12345
 reverse value is:54321
*/

int main(){
    int n;
    
    cout<< "value of n :";
    cin>>n;
    int m = n;

    int mask =0;
    if (n == 0){
        cout<< 1;


    }

    while (m != 0){
        mask =( mask << 1) | 1;
        m = m >> 1;

    }
    int ans = (~n)& mask;
    cout<<"output is :" <<ans ;


}

/*~~~~~~~~~~~~~~~~ output ~~~~~~~~~~~~~~
value of n :7
output is :0  

value of n :5
output is :2
*/

int main (){
    int n;
    cout <<"value of n :";
    cin>>n;

    int ans = 1;
    for (int i = 0; i<=30 ; i++){
        if (ans == n ){
            cout<<"true ";

        }
        
        ans = ans * 2;

    }
    cout << "false";

}