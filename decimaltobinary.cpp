#include<iostream>
#include<math.h>
using namespace std ;

int main(){
     int n ;
     cout<<" input no is :";
     cin>>n;

    int ans = 0 ;
    int i = 0 ;

    while (n != 0 )
    {
        int bit = n & 1;
        ans = (bit *pow(10,i)) + ans ;
         n = n >> 1;
         i ++;

    }
    cout<<"Answer is :"<<ans << endl;

}

/*~~~~~~~~~~~~~~~~~ output ~~~~~~~~~~~~~~~~~
 input no is :8
Answer is :1000
*/

