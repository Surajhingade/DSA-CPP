// Impliment recursive function
// Defination of recursive function : When function call itself is called recursive function || Big problem is depend upon small problem 


#include<iostream>
using namespace std;

// recursive function

int factorial(n){

    // base case 0! = 1
    if(n==0)
        return 1;

    int smallproblem = factorial(n-1);
    int bigproblem = n * smallproblem ;

    return bigproblem;     


}



int main(){

int n;
cin>>n;


int ans = factorial(n);

cout<<"the factorial of number"<<n<<"is"<<ans<<endl;



    return 0;
}