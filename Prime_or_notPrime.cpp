// WAP to check the progrm is Prime or NOt Prime :

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    
    bool isPrime=1;

    for(int i=2;i<n;i++)
    {
        //rem = 0, Not a Prime
        if(n%i==0)
        {
            isPrime = 0;
            break;
        }
    }
    if(isPrime==0)
    {
        cout<<"Number is not Prime";
    }
    else
    {
        cout<<"Number is Prime";
    }

}  