/*==============================|-problem statement-|==============================*/
/*
Read an integer K and find the sum of all odd digits and even digits in the given integer.*/

/*===================================|-solution-|===================================*/

#include <iostream>

using namespace std;

int main(){
    int n, num, sumOdd=0, sumEven=0;

    //n is the number of elements we are going to input
    cin>>n;


    //we run the loop for inputting numbers n  times
    while(n--){
        cin>>num;
        //adding to sumEven if sum is even otherwise adding to sumOdd
        (num%2 == 0)?(sumEven += num):(sumOdd+=num);
        
    }
    //displaying the sums
    cout<<sumOdd<<" "<<sumEven;
    return 0;
}

/*==================================|-sample output-|=================================*/
/*
6
1 5 1 2 3 9
19 2
*/
