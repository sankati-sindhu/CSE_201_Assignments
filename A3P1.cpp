/*==============================|-problem statement-|==============================*/
/*
    Implement prefix average problem with the time complexity O(N^2) and O(N)
*/

/*===================================|-solution-|===================================*/

#include<iostream>

using namespace std;

//displaying the array of size n
void display(int sol[], int n){
    for(int i =0 ;i <n;i++){
        cout<<sol[i]<<" ";
    }
  
}
/* we can achieve o(n^2) using two loops
*/
void nSquareComplexitySolution(int arr[], int n){
    int sol[n];
    
    /*we use outer loop to run n times to find all the prefix sums in array*/
    for(int i =0 ;i <n;i++){
        sol[i] = 0;

        /*inner loop to compute the sum from 0 to the ith element in the array*/
        for(int j = 0 ;j<=i;j++)
            sol[i] += arr[j];
    }
    display(sol, n);

}

/*we can achieve this with dynamic programming
*/
void nComplexitySolution(int arr[], int n){

    for(int i =1 ;i <n;i++)
        arr[i] += arr[i-1];
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
    int arr[n];

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
2 6 11 18 19 23 32 
2 6 11 18 19 23 32
*/