#include<iostream>
using namespace std;

int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
   return fib(n-1)+fib(n-2);
}

int main()
{
    int a;
    cout<<"enter a number";
    cin>>a;

    cout<<"the sequence of the given no. is"<<fib(a)<<endl;
    
    return 0;
    
}