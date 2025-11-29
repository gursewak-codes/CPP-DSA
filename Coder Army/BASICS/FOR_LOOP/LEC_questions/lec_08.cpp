/* 1. print this pattern.


* * * * *
* * * *
* * *
* *  
*  
 
*/


   #include<iostream>
   using namespace std;

   int main (){
    int j ,i  ;
    for(j=1 ; j<= 5 ; j=j+1){ // row

        for(  i=5 ; i>= j ;i=i-1){ //column
            cout<< '*' << " ";
          }
          cout<< endl;
    }

}

/* 2. print this pattern.


1 2 3 4 5
1 2 3 4
1 2 3 
1 2
1
 
*/


   #include<iostream>
   using namespace std;

   int main (){
    int j ,i  ;
    for(j=5 ; j>= 1 ; j=j-1){ // row

        for(  i=1 ; i<= j ;i=i+1){ //column
            cout<< i << " ";
          }
          cout<< endl;
    }

}

/* 3. print this pattern.


5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
 
*/


   #include<iostream>
   using namespace std;

   int main (){
    int j ,i  ;
    for(j=5 ; j>= 1 ; j=j-1){ // row

        for(  i=5 ; i>=j ;i=i-1){ //column
            cout<< i << " ";
          }
          cout<< endl;
    }

}