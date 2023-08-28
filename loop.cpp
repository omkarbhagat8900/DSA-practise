#include<iostream>
using namespace std ;

// int main (){
//     int n;
//     cout<<"input digit is :";
//     cin>>n;
//     int product= 1;
//     int sum = 0;

//     while (n!=0){
//         int digit= n%10;
//         product= product* digit;
//         sum = sum+ digit;
        
//         n = n/10;



//     }
//     int answer = product - sum ;
//     cout<<answer;


// }


/*~~~~~~~~~~~~~~~~~~~~~~~~~ outout ~~~~~~~~~~~~~~~~~~~~~
input digit is :87
41
*/


int main (){
    int n;
    cout<<"input no :";
    cin>>n;

    int count = 0;
    while(n!=0){
    if (n&1){
        n ++;
    }
    n = n>>1;
    
    cout<<n;
    }
    

}