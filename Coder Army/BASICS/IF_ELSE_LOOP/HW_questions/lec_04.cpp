  /* 1__print greater value  */


#include<iostream>
using namespace std;

int main()
{   int a,b ;
    cout<<"enter a value : ";
    cin>>a;

    cout<<"enter b value : ";
     cin>>b;

    
    if(a>b)
    {
        cout<<"a is greater";
    } 

    else
    {
        cout<<"b is greater";
    }


}


/* 2__print month acc to its corespomding month number */  


#include<iostream>
using namespace std;

int main()
{   int a ;
    cout<<"enter a value : ";
    cin>>a;

   
    
    if(a==1)
    {
        cout<<"january";
    } 

    else if (a==2)
    {
        cout<<"febuary";
    }
    
     else if (a==3)
    {
        cout<<"march";
    }
     else if (a==4)
    {
        cout<<"april";
    }
    
     else if (a==5)
    {
        cout<<"may";
    }
    
     else if (a==6)
    {
        cout<<"june";
    }
    
     else if (a==7)
    {
        cout<<"july";
    }
    
     else if (a==8)
    {
        cout<<"august";
    }
    
     else if (a==9)
    {
        cout<<"september";
    }
    
     else if (a==10)
    {
        cout<<"october";
    }
    
     else if (a==11)
    {
        cout<<"november";
    }
    
    
     else
    {
        cout<<"december";
    }


}


/* 3__print "yes" is age is more than 12 and less than 65 otherwise print "no"*/

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"ENTER YOUR AGE :  ";
    cin>>age;

    if(age<12)
    cout<<"YES";

    else if(age>65)
    cout<<"YES";

    else
    cout<<"NO";





}