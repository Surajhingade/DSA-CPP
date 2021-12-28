// Character Array and String deep down.

#include<iostream>
using namespace std;

// reverse a string function

void reverseString(char name[], int n){
    int start = 0;
    int end = n -1;

    while(start<end){
        swap(name[start++], name[end--]);
    }
    
}


// Calculate length of character array

int getCharArrayLength(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0'){
        count++;
    }
    return count;
}


int main() {
 // creating character array 
 char name[20];
 cout<<"Enter your name"<<endl;
 cin>>name;
 cout<<"Your Name is " + name;
 cout<<"Length of Character array name is : "<<getCharArrayLength(name)<<endl;
 

 // output is 
 // Your Name is hello
 // Length of Character array name is : 5 



    return 0;
}