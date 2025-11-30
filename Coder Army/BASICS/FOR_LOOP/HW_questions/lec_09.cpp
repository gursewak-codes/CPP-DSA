/* 1. print this pattern.


 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *
 
*/


   #include<iostream>
   using namespace std;

   int main (){
    int j ,i ,space ;
    for(j=1 ; j<= 5 ; j=j+1){ // row


        for(space=1 ; space<j ; space=space+1){//space
            cout<<" " ;
         }

         
        for(  i=5 ; i>=j ;i=i-1){ //column
        cout<< "*" ;
       
        }

        for(i=1;i<=5-j;i=i+1){
            cout<<"*";
        }
          cout<< endl;
    }

}
