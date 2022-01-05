#include<iostream>
using namespace std;


bool isSorted(int arr[], int size){
    
    // base case 
    if((size ==0) || (size == 1)){
        return true;
    }
    
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool reameaning = isSorted(arr+1, size-1);
        return reameaning;
    }
    
    
}

int main(){
    int arr[5] = {2,12,4,5,6};
    int size = 5;
    
    int sorted = isSorted(arr,5);
    
   if(sorted){
       cout<<"array is sorted"<<endl;
   }
   else{
       cout<<"array is not sorted"<<endl;
   }
    
    
    
    return 0;
}