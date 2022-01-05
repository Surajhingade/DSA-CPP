#include<iostream>
using namespace std;

// created linearSearch function

bool linearSearch(int arr[], int size, int key){
    
    // base case
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
    
    bool reameaningPart = linearSearch(arr+1,size-1,key);
    return reameaningPart; 
    }
    
}

int main(){
    
    // array
    int arr[5] = {1,5,3,4,8};
    // size of array
    int size = 5;
    // which element search that is key
    int key = 18;
    
    
    
    int ans = linearSearch(arr,size,key);
    
    if(ans){
        cout<<"element is present in array"<<endl;
    }
    else{
        cout<<"element is not present"<<endl;
    }
    
    return 0;
}