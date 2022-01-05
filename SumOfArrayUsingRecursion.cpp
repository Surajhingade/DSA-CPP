#include<iostream>
using namespace std;


int getSum(int arr[], int size){
    
   if(size==0){
       return 0;
   }
   if(size == 1){
       return arr[0];
   }
   
   int reameaningPart = getSum(arr+1,size-1);
   int sum = arr[0] + reameaningPart;
        return sum;
    
}

int main(){
    int arr[5] = {2,3,4,5,16};
    int size = 5;
    
    int sum = getSum(arr,size);
    
    cout<<sum<<endl;
    
    
    
    return 0;
}