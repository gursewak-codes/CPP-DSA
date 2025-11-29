  //1__print  sum of square of first n natural number .

#include<iostream>
using namespace std;

int main()
{
    int  n , i , sum;
    cout<<"enter";
    cin>>n;
    sum=0;

   for(i=1;i<=n;i=i+1)
    {
        sum= sum + i*i ;
         
    }

    cout<< "total sum of square of first n number : " ;
    cout<<sum;
    return 0;


}  



//2__print  sum of cube of first n natural number .

#include<iostream>
using namespace std;

int main()
{
    int  n , i , sum;
    cout<<"enter";
    cin>>n;
    sum=0;

   for(i=1;i<=n;i=i+1)
    {
        sum= sum + i*i*i ;
         
    }

    cout<< "total sum of cube of first n number : " ;
    cout<<sum;
    return 0;


}  



// 3__print  nth number of fibonacci series .

#include<iostream>
using namespace std;

int main()
{
    int  prev , curr , next ,n ;
    cout<<"enter number for fibonacci series : ";
    cin>>n;
    prev = 0;
    curr = 1;


   for( int i=1;i<=n;i=i+1)
    {
        next = prev + curr ;
        prev = curr ;
        curr = next ;

         
    }

    cout<< "fibonacci series nth number is  : " ;
    cout<< curr;
    return 0;


}  


 // 3__print  fibonacci series till nth number.
#include<iostream>
using namespace std;

int main()
{
    int  prev , curr , next ,n ;
    cout<<"enter number for fibonacci series : ";
    cin>>n;
    prev = 0;
    curr = 1;

    cout<<"fibonacci series till nth number is  : " << endl;

   for( int i=1;i<=n;i=i+1)
    {
        next = prev + curr ;
        cout<< next << " ";
        prev = curr ;
        curr = next ;

         
    }

   
   
    return 0;


}  