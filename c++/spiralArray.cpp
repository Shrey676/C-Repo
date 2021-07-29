#include<iostream>
using namespace std;

signed main()
{
    int n,m;
    cin>>n>>m;

    int array[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>array[i][j];
        }
    }


 int Row_start=0 , Row_end=n-1, Column_start=0, Column_end=m-1;
 while(Row_start <= Row_end && Column_start <= Column_end)
  {
     //for row_start
     for(int col=Column_start;col<=Column_end;col++)
        {
          cout<<array[Row_start][col]<<" ";
        }

        Row_start++;

     //for column_end
     for(int row=Row_start;row<=Row_end;row++)
        {
           cout<<array[row][Column_end]<<" ";
        }

        Column_end--;

      //for row_end
     for(int col=Column_end;col>=Column_start;col--)
        {
            cout<<array[Row_end][col]<<" ";
        }

        Row_end--;

      //for column_start
     for(int row=Row_end;row>=Row_start;row--)
        {
            cout<<array[row][Column_start]<<" ";
        }

      Column_start++;
    
    } 
  return 0;
}