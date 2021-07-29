#include<iostream>
using namespace std;                                //(        DIVIDE   &   CONQUER     )

void merge(int arr[],int l,int mid,int h)
{
    //creting temporary arrays

    int n1=mid-l+1;   //declaring thier size
    int n2=h-mid;

    int a[n1]; //temp arrays 
    int b[n2];

    for (int i=0;i<n1;i++)//storing the values in them
    {
        a[i]=arr[l+i];
    }

    for (int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }

    int i=0;  //declaring pointers to compare the value in both sorted piece of array 
    int j=0;  //and to arrange them in ascending order
    int k=l;

    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++; i++;
        }
        else
        {
            arr[k]=b[j];
            k++; j++;
        }
    }

    while(i<n1)  //to ensure that if one pointer reaches its end then the other numbers of second array will be left
    {                //therefore to traverse the left element we will again run these conditions
        arr[k]=a[i];
            k++; i++;

    }
     while(j<n2)
    {
        arr[k]=b[j];
            k++; j++;
    }

}

void mergeSort(int arr[],int l,int h)
{
    if(l<h)
    {
     int mid=(l+h)/2; 
     mergeSort(arr,l,mid);
     mergeSort(arr,mid+1,h);

     merge(arr,l,mid,h);
    }
}

int main()
{
    int arr[]={7,9,5,1,0,3};
    mergeSort(arr,0,5);
    for(int i=0;i<6;i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}