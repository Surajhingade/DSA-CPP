// Creating 2D dynamic array using Heap memory

#include<iostream>
using namespace std;



int main(){
    
// Take input of row and column    
    int row;
    cin>>row;
    int col;
    cin>>col;
    
    // create 2d array using Heap dynamically memory allocation
    
    int **arr = new int *[row];
    
    for(int i=0; i<row; i++){
        for(int j=0; j<row; j++){
            arr[i] = new int[row];
        }
    }
    
    // take input 
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    
    
    // give output 
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // release memory manually  after use 
    
    for(int i=0; i<row; i++){
        delete []arr[i];
    }
    
    delete []arr;
    
    return 0;
    
}