/* 1__Prinr "INDIA WILL WIN THE WORLD CUP 2023"  for 20 times */

#include<iostream>
using namespace std;

int main()
{
    int count;

    for(count=1;count<=20;count=count+1)
    {
        cout<<"INDIA WILL WIN THE WORLD CUP 2023" << endl ;

    }



}

/* 2__print n number */

#include<iostream>
using namespace std;

int main()
{
    int count, n;
    cout<<"enter value : ";
    cin>>n;

    for(count=1;count<=n; count=count+1)
    {
        cout<<count << endl;

    }


}

/* 3__print odd num till n */

#include<iostream>
using namespace std;

int main()
{
    int count, n;
    cout<<"enter value : ";
    cin>>n;

    for(count=1;count<=n; count=count+2)
    {
        cout<<count << endl;

    }


}  


/* 3__print number divisible by 3 till n */


#include<iostream>
using namespace std;

int main()
{
    int count, n;
    cout<<"enter value : ";
    cin>>n;

    for(count=1;count<=n; count=count+1)
    {   if(count%3==0)
       {cout<<count << endl;}

    }


}

/* 4__print number divisible by 4 till n */

#include<iostream>
using namespace std;

int main()
{
    int count, n;
    cout<<"enter value : ";
    cin>>n;

    for(count=1;count<=n; count=count+1)
    {   if(count%4==0)
       {cout<<count << endl;}

    }


}


