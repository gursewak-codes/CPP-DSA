/* 1. print this pattern.


        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
 
*/


   #include<iostream>
   using namespace std;

   int main (){
    int j ,i ,space ;
    for(j=1 ; j<= 5 ; j=j+1){ // row


        for(space=5 ; space>j ; space=space-1){//space
            cout<<" " ;
         }

         
        for(  i=1 ; i<=2*j-1 ;i=i+1){ //column
        cout<< "*" ;
       
        }
          cout<< endl;
    }

}

/* 2. print this pattern.


        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
 
*/


   #include<iostream>
   using namespace std;

   int main (){
    int j ,i ,space ;
    for(j=1 ; j<= 5 ; j=j+1){ // row


        for(space=5 ; space>j ; space=space-1){//space
            cout<<" " ;
         }

         
        for(  i=1 ; i<=j ;i=i+1){ //column
        cout<< i ;
       
        }

        for( i=j-1; i>=1 ;i=i-1){
            cout<<i;
        }
          cout<< endl;


        }

    }       


/* 3. print this pattern.

   * * * * * * * * 
   * * *     * * *
   * *         * *
   *             *
   *             *
   * *         * *
   * * *     * * *
   * * * * * * * *
*/    


#include<iostream>
using namespace std;

int main(){
    
    int i,j,space;
    for(j=1;j<=4;j=j+1){
    for(i=4;i>=j;i=i-1){
        cout<<"*" <<" ";
    }

    for(space=1;space<=2*j-2;space=space+1){
        cout<<" "<<" ";

    }

    for(i=4;i>=j;i=i-1){
        cout<<"*"<<" ";
    }

    cout<<endl;

}
    for(j=4;j>=1;j=j-1){
    for(i=4;i>=j;i=i-1){
        cout<<"*" <<" ";
    }

    for(space=1;space<=2*j-2;space=space+1){
        cout<<" "<<" ";

    }

    for(i=4;i>=j;i=i-1){
        cout<<"*"<<" ";
    }

    
   cout<<endl;
    }

}


/* 4.print this pattern.

          *
         * * 
        * * *
       * * * *
       * * * *
        * * *
         * *
          *       
*/

#include<iostream>
using namespace std;

int main(){
    
    int i,j,space;
    for(j=1;j<=4;j=j+1){
    
    for(space=3;space>=j;space=space-1){
        cout<<" "<<" ";
    }

    for(i=1;i<=j;i=i+1){
        cout<<"*"<<" "<<" "<<" ";
    }

    cout<<endl;

}


for(j=4;j>=1;j=j-1){
    
    for(space=3;space>=j;space=space-1){
        cout<<" "<<" ";
    }

    for(i=1;i<=j;i=i+1){
        cout<<"*"<<" "<<" "<<" ";
    }

    cout<<endl;

}


}