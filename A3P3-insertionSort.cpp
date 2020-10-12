
/*==============================|-problem statement-|==============================*/
/*
    Implement the following sorting algorithms 
   •	Insertion sort
*/
/*===================================|-solution-|===================================*/
#include<iostream>

using namespace std;

void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i =1;i<n;i++) 
    {  
        key = arr[i];  
        j = i- 1;  
  
        while(j >= 0 && arr[j]>key) 
        {  
            arr[j+1] =arr[j];  
            j =j- 1;  
        }  
        arr[j+1]=key;  
    }  
}  
int main(){
    int n;

    //the size of the array
    cout<<"enter size of array \n";
    cin>>n;
    int arr[n];

     cout<<"elements in array are \n";
    //inputting the array elements
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The sorrted array in ascending order\n";
    insertionSort(arr, n);
     for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*==================================|-sample output-|=================================*/

/*
enter size of array 
4
elements in array are 
3 2 4 5
The sorrted array in ascending order
2 3 4 5
*/