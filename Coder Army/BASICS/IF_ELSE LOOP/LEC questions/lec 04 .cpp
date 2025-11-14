/* PRINT ADULT IF AGE IS MORE THAN OR EQUALS TO 18 OTHERWISE PRINT MINOR */



#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter your age : ";
    cin>>n;

    if(n=>18){
        cout<<"ADULT";

    }
    else
    cout<<"minor";

    return 0;
}
