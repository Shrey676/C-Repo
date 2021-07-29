#include<iostream>
using namespace std;

int Pow(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    return n * Pow(n,p-1);
}

int main()
{
    int n,p;
    cout<<"enter the numbers: ";
    cin>>n>>p;

    cout<<"answer is: "<<Pow(n,p)<<endl;
    return 0;
}