/*==============================|-problem statement-|==============================*/
/*
    Read 3 integers from the user and print the GCD.
*/

/*===================================|-solution-|===================================*/

#include <iostream>

using namespace std;

//function finds gcd using Euclid algorithm
int gcd(int a, int b) { 
    return b ? gcd(b, a%b) : a;
}

int main(){
    int a,b,c;
    //inputting three variables
    cin>>a>>b>>c;

    //printing gcd
    /* 
    The GCD of three or more numbers equals the product of the prime factors common to all the numbers
    therefore: gcd(a,b,c) = gcd(gcd(a,b), c) = gcd(a, gcd(b,c)) = gc(b, gcd(a,c))
    */
    cout<<gcd(gcd(a, b), c);
    
    return 0;
}

/*==================================|-sample output-|=================================*/
/*
16 8 32
8
*/
