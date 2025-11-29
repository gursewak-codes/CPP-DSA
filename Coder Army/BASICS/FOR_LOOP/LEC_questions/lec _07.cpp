// From [ lec 07 -- lec 09 ] patterns begin from basic to advance.

/* 1. print this pattern.


   444444
   444444
   444444
   444444
   444444     */

   #include<iostream>
   using namespace std;

   int main (){
    int j , i ;
    for(j=1 ; j<= 5 ; j=j+1){

        for(i=1 ; i<=6 ;i++){
            cout<< 4 ;
          }
          cout<< endl;
    }

}

/* 2. print this pattern.

1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25     */  

   #include<iostream>
   using namespace std;

   int main (){
    int j , i ;
    for(j=1 ; j<= 6 ; j=j+1){

        for(i=1 ; i<=5 ;i++){
            cout<< i*i << " ";
          }
          cout<< endl;
    }

}

/* 3. print this pattern.

1 8 27 64 125 216 
1 8 27 64 125 216     
1 8 27 64 125 216    
1 8 27 64 125 216    
1 8 27 64 125 216    
1 8 27 64 125 216   */  


   #include<iostream>
   using namespace std;

   int main (){
    int j , i ;
    for(j=1 ; j<= 6 ; j=j+1){

        for(i=1 ; i<=6 ;i++){
            cout<< i*i*i << " ";
          }
          cout<< endl;
    }

}


/* 4. print this pattern.


F G H I J K  
F G H I J K 
F G H I J K 
F G H I J K 
F G H I J K   
F G H I J K   */


   #include<iostream>
   using namespace std;

   int main (){
    int j  ;
    for(j=1 ; j<= 6 ; j=j+1){

        for( char i='F' ; i<='K' ;i++){
            cout<< i << " ";
          }
          cout<< endl;
    }

}