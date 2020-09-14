/*==============================|-problem statement-|==============================*/
/*
    Implement the following sorting algorithms 
    •	Selection sort
    •	Insertion sort
    •	Quick sort
*/
/*===================================|-solution-|===================================*/
#include<iostream>

using namespace std;

bool isSmaller(int a , int b){
    return (a < b)?true:false;
}
bool isLarger(int a , int b){
    return (a > b)?true:false;
}
void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n, bool asc = true){
    //param: bool asc is to determine the order assending / descending

    int idx;//index of min/max element

    //outer loop to find right numbers for every i position
    for(int i = 0; i < n;i ++){
        idx = i;
        //finding mix or max number for every iteration
        for (int j = i+1; j<n; j++){
            if(asc){
                if(isSmaller(arr[j], arr[idx]))
                    idx = j;
            }else{
                if(isLarger(arr[j], arr[idx]))
                    idx = j;
            }
        }
        //inserting the found min/max with the ith i
        swap(arr[i], arr[idx]);

    }
}

//displaying the array of size n
void display(int sol[], int n){
    for(int i =0 ;i <n;i++){
        cout<<sol[i]<<" ";
    }
  
}

int main(){
    int n;

    //the size of the array
    cin>>n;
    int arr[n];

    //inputting the array elements
    for(int i =0 ;i <n;i++){
        cin>>arr[i];
    }
    //sorting in ascending using selection sort
    selectionSort(arr, n, false);
    display(arr, n);

}
/*==================================|-sample output-|=================================*/
/*
7
2 4 5 7 1 4 9
2 6 11 18 19 23 32 
2 6 11 18 19 23 32
*/