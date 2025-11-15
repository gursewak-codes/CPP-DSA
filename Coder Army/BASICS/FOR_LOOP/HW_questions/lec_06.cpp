/* 1__print  sum of square of first n natural number */

#include<iostream>
using namespace std;

int main()
{
    int  n , i , sum;
    cin>>n;
    sum=0;

   for(i=1;i<=n;i=i+1)
    {
        sum= sum + i*i ;
        cout<<sum ;
    }

    cout<< "total sum of square of first n number : " ;
    cout<< sum ;
    return 0;


}  