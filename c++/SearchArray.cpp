#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    int array[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }

    cout<<"matrix is:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<"\n";
    }

   int x;
   cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(array[i][j]==x)
            {
                cout<<i<<""<<j<<"\n";
                flag=true;
            }
        }
    }
    if(flag)
    {
        cout<<"element is found!\n";
    }
    else{
        cout<<"element not found!\n";
    }

}    