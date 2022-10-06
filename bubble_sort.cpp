//Bubble Sort
//Repeatedly swap two adjacent element if they are in wrong order
#include<iostream>
using namespace std;

void buubbleSort(int arr[],int n)
{
    int counter = 1;
    while(counter<n)
    {
        for(int i=0; i<n-counter; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
}

int main()
{
    int arr[] = {12,45,23,51,19,8};
    buubbleSort(arr,6);

    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
}