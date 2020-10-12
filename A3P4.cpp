/*==============================|-problem statement-|==============================*/
/*
    Implement both the recursive and non-recursive versions to get the Nth Fibonacci number.
*/
/*===================================|-solution-|===================================*/
#include<iostream>

using namespace std;


//fibnocci iterative solution 
int fib(int n){
    int a = 0, b =1,c;
    for(int i = 0;i <n;i++){
        c = a+b;
        a = b;
        b = c;
    }
    return a;
}

//recursive solution for fibanocci
int recFib(int n){
    if(n == 1 || n== 0){
        return n;
    }
    return recFib(n-1) + recFib(n-2);
}
int main(){
    int n;

    cout<<"Enter n: ";
    cin>>n;
    cout<<"Nth fibonnaci is: ";
    cout<<recFib(n)<<"(recursive) \n";
    cout<<fib(n)<<"(iterative) \n";  

}
/*==================================|-sample output-|=================================*/
/*
Enter n: 3
Nth fibonnaci is: 2(recursive) 
2(iterative) 
*/