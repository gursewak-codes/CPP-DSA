/* 1. print this pattern.


        *
      * *
    * * *
  * * * *
* * * * *
 
*/


   #include<iostream>
   using namespace std;

   int main (){
    int j ,i ,space ;
    for(j=1 ; j<= 5 ; j=j+1){ // row


        for(space=5 ; space>j ; space=space-1){//space
            cout<<" " ;
         }


        for(  i=1 ; i<= j ;i=i+1){ //column
            cout<< '*' ;
          }
          cout<< endl;
    }

}


/* 2. print this pattern.


        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5
 
*/


   #include<iostream>
   using namespace std;

   int main (){
    int j ,i ,space ;
    for(j=1 ; j<= 5 ; j=j+1){ // row


        for(space=5 ; space>j ; space=space-1){//space
            cout<<" " ;
         }


        for(  i=1 ; i<= j ;i=i+1){ //column
            cout<< j ;
          }
          cout<< endl;
    }

}

/* 3. print this pattern.


        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
 
*/


   #include<iostream>
   using namespace std;

   int main (){
    int j ,i ,space ;
    for(j=1 ; j<= 5 ; j=j+1){ // row


        for(space=5 ; space>j ; space=space-1){//space
            cout<<" " ;
         }


        for(  i=1 ; i<= j ;i=i+1){ //column
            cout<< i ;
          }
          cout<< endl;
    }

}

/* 4. print this pattern.


        A
      A B
    A B C
  A B C D
A B C D E
 
*/


   #include<iostream>
   using namespace std;

   int main (){
    int j ,i ,space ;
    for(j=1 ; j<= 5 ; j=j+1){ // row


        for(space=5 ; space>j ; space=space-1){//space
            cout<<" " ;
         }

         char name ='A' ;
        for(  i=1 ; i<= j ;i=i+1){ //column
        cout<< name ;
        name=name+1;
          }
          cout<< endl;
    }

}


/* 5. print this pattern.


        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
 
*/


   #include<iostream>
   using namespace std;

   int main (){
    int j ,i ,space ;
    for(j=1 ; j<= 5 ; j=j+1){ // row


        for(space=5 ; space>j ; space=space-1){//space
            cout<<" " ;
         }

         
        for(  i=j ; i>=1 ;i=i-1){ //column
        cout<< i ;
       
        }
          cout<< endl;
    }

}