#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n ;

    int i = 1 ;
    while (i<=n){
        int j =1;
        while (j<=n){
            cout<<n-j+1 <<" ";
             
            j =j + 1;

        }
        cout<<endl;
        i = i + 1;
    }
 

/*~~~~~~~ output ~~~~~~~
5
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
*/

/*--------------------------------------------------------------*/



    int n;
    cin>>n;

    int i = 1;
    while (i<=n){
        int j = 1 ;
        while (j<=n){
            cout<<j <<" ";
            j = j + 1 ;

        }
        cout<<endl ;
        i = i + 1;
    }



/*~~~~~~~~~~~~~~~~ output ~~~~~~~~~~~~~~

6
1 2 3 4 5 6 
1 2 3 4 5 6 
1 2 3 4 5 6 
1 2 3 4 5 6 
1 2 3 4 5 6 
1 2 3 4 5 6
 */

/*-------------------------------------------------------------------------------*/


    int n;
    cin>>n;

    int i = 1;
    int count = 1;

    while(i<=n){

        int j = 1 ;
        while(j<=n){
            cout<<count<<" ";
            count = count + 1;
            j = j + 1 ;
        }
        cout<<endl;
        i = i + 1;
    }



/*~~~~~~~~~~~~~~~ output ~~~~~~~~~~~~~~~~

6
1 2 3 4 5 6 
7 8 9 10 11 12 
13 14 15 16 17 18 
19 20 21 22 23 24 
25 26 27 28 29 30 
31 32 33 34 35 36 
*/

/*---------------------------------------------------------------*/


    int n;
    cin>>n;

    int row = 1 ;
    
    while (row<=n){
        int col = 1 ;
        while(col<=row){
            cout<<"*";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }

}

/*~~~~~~~~~~~~~~ output ~~~~~~~~~~~~~~~~

5
*
**
***
****
*****
*/























