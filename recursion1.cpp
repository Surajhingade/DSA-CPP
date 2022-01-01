// Impliment recursive function
// Defination of recursive function : When function call itself is called recursive function || Big problem is depend upon small problem 


#include<iostream>
using namespace std;

// recursive function for find factorial 

int factorial(n){

    // base case 0! = 1
    if(n==0)
        return 1;

    int smallproblem = factorial(n-1);
    int bigproblem = n * smallproblem ;

    return bigproblem;     


}



// recursive function for find power on (n) tern


int power(int n){
    // base case power of any number 0 = 1;
    if(n==0)
        return 1;


        int smallproblem = power(n-1);
        int bigproblem = 2 * smallproblem;


        return bigproblem;
}



int main(){



int n;
cin>>n;

// function call for find factorial of any number.
int ans = factorial(n);

cout<<"the factorial of number"<<n<<"is"<<ans<<endl;

// fucntion call for find power of any number.

int ans2 = power(n);

cout<<"the power of " << n << "is"<<ans2<<endl;



    return 0;
}