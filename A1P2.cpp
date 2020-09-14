/*==============================|-problem statement-|==============================*/
/*
Read an integer K and find the sum of all odd digits and even digits in the given integer.*/

/*===================================|-solution-|===================================*/

#include <iostream>

using namespace std;

int main(){
    int k, num, sumOdd=0, sumEven=0;

    cin>>k;

    //we run the loop for till the k becomes 0
    while(k){
        num = k%10;//num is the digit on tenth place

        //adding to sumEven if num is even otherwise adding to sumOdd
        (num%2 == 0)?(sumEven += num):(sumOdd+=num);

        k = k/10;//we update k
        
    }
    //displaying the sums
    cout<<sumOdd<<" "<<sumEven;
    return 0;
}

/*==================================|-sample output-|=================================*/
/*
9887267 
23 24
*/
