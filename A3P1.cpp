/*==============================|-problem statement-|==============================*/
/*
    Implement prefix average problem with the time complexity O(N^2) and O(N)
*/

/*===================================|-solution-|===================================*/

#include<iostream>

using namespace std;

//displaying the array of size n
void display(float a[], int n){
    for(int i =0 ;i <n;i++){
        cout<<a[i]<<" ";
    }
  
}
/* we can achieve o(n^2) using two loops
*/
void nSquareComplexitySolution(float arr[], int n){
    float sol[n];
    for(int i = 0;i< n;i++){
        float sum =0;
        for(int j=0;j<=i;j++){
            sum += arr[j];
        }
        sol[i] = sum/(i+1);
    }
    display(sol, n);
}

/*we can achieve this with dynamic programming
*/
void nComplexitySolution(float arr[], int n){
    for(int i = 1;i< n;i++){
        arr[i] = ((i*arr[i-1]) + arr[i])/(i+1);
    }
    display(arr, n);
}

int main(){
    int n;
    /*
    for prefix average sum the problem statement is 
    prefixSum of nth element = ∑array i th element, where i goes from 0 to n
    */

    //the size of the array
    cin>>n;
    float arr[n];

    //inputting the array elements
    for(int i =0 ;i <n;i++){
        cin>>arr[i];
    }
    //solving using O(n^2) complexity
    nSquareComplexitySolution(arr, n);

    cout<<"\n";

    //solving using O(n) complexity
    nComplexitySolution(arr, n);

    return 0;
}
/*==================================|-sample output-|=================================*/
/*
7
2 4 5 7 1 4 9
2 3 3.66667 4.5 3.8 3.83333 4.57143 
2 3 3.66667 4.5 3.8 3.83333 4.57143
*/