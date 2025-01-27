#include <iostream>
using namespace std;

int main()
{
    int i,j,k;
    int arr[]= {7,1,14,59,55,36,34};
    int size=sizeof(arr)/sizeof(arr[0]);
    int arr2[size];
    for ( i=0; i<size; i++)
    {
        arr2[i]=arr[i];
    }//copy of main aray created


    for ( i = 0; i < size - 1; i++)
    {
        for ( j = 0; j < size - 1 - i; j++)
        {
            if(arr2[j]>arr2[j+1])
            {
                int temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;

            }// sorted second array
        }
    }
    for( i=0; i<size; i++)
    {
        if(arr2[0]==arr[size-1])
        {
            cout<<"don't buy";


            return 0;
        }
    }


    for( i=0; i<size; i++)
    {
        if(arr2[0]!=arr[size-1])
        {
            if(arr2[0]==arr[i])
            {
                cout<<"purchasse at price "<<arr[i]<<" on day "<<i;
                break;
            }
        }

    }

    int max=arr[i];
    for(j=i+1,k=i;j<size;j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
            k++;
        }

    }

    cout<<endl<<"sell at price "<<max<<"on day"<<k;
//7,1,6,4,3

}
