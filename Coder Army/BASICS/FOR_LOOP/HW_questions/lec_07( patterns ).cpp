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
    int j ,i  ;
    for(j=1 ; j<= 5 ; j=j+1){ // row

        for(  i=1 ; i<= j ;i++){ //column
            cout<< '*' << " ";
          }
          cout<< endl;
    }

}

/* 2. print this pattern.


1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5 

*/

   #include<iostream>
   using namespace std;

    int main (){
    int j ,i  ;
    for(j=1 ; j<= 5 ; j=j+1){ // row

        for(  i=1 ; i<= j ;i++){ //column
            cout<< i << " ";
          }
          cout<< endl;
    }

}

/* 3. print this pattern.


1
2 1
3 2 1
4 3 2 1 
5 4 3 2 1

*/


   #include<iostream>
   using namespace std;


   int main (){
    int j ,i  ;
    for(j=1 ; j<= 5 ; j=j+1){ // row

        for(  i= j  ; i>=1;i=i-1){ //column
            cout<< i << " ";
          }
          cout<< endl;
    }

}


/* 4. print this pattern.

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/

    #include<iostream>
    using namespace std;

   int main (){
    int j ,i  ;
    for(j=1 ; j<= 5 ; j=j+1){ // row

        for(  i=1 ; i<=j ;i=i+1){ //column
            cout<< j << " ";
          }
          cout<< endl;
    }

}

/* 5. print this pattern.


a
b b
c c c
d d d d 
e e e e e 

*/

    #include<iostream>
    using namespace std;

 
   int main (){

    int j ,i  ;
    char name ;
    name = 'a';
    for(j=1 ; j<= 5 ; j=j+1){ // row

        for(  i= 1 ; i<=j;i=i+1){ //column
            cout<< name << " ";
          }
          name=name+1;
          cout<< endl;
    }

}