#include <iostream>
using namespace std;

void printSum(int arr[][3],int rows,int cols){
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }
}

int main(){
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    printSum(arr,rows,cols);
}