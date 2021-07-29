#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str="asasasadfgkmfsgvksof";  //for converting lower into upper

    transform(str.begin(),str.end(),str.begin(), ::toupper); //another method
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(), ::tolower);

    // for(int i=0;i<str.size();i++)
    // {
    //     if(str[i]>='a' && str[i]<='z')
    //     str[i]=str[i]-32;
    // }
    // cout<<str<<endl;


    // for(int i=0;i<str.size();i++)    //vice versa
    // {
    //     if(str[i]>='A' && str[i]<='Z')
    //     str[i]+=32;
    // }
    cout<<str<<endl;
    return 0;
}