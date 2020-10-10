#include<iostream>

using namespace std;

int partition(int arr[], int l, int n){
    int pivot = l;
    int i = l;
    for(int j = l+1;j<n;j++){
        if(arr[j] < arr[pivot]){
            i++;
            int t = arr[j];
            arr[j] = arr[i];
            arr[i] = t;
        }
    }
    int t = arr[i];
    arr[i] = arr[pivot];
    arr[pivot] = t;
    return i;

}
void quickSort(int arr[], int l, int n){

    if(l < n){
        int q = partition(arr, l, n);
        quickSort(arr, l, q);
        quickSort(arr, q+1, n);

    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr, 0, n);
     for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}