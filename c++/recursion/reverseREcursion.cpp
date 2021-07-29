#include<iostream>
using namespace std;
 
void rev(string s)
{
    if(s.length()==0)
    return;

    rev(s.substr(1));
    cout<<s[0];
}
int main()
{
string c;
cin>>c;    
rev(c);
return 0;
}