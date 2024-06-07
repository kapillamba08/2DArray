#include <iostream>
using namespace std;

int MaxElement(int arr[][3],int rows,int cols){
    int max = INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>max){
                max = arr[i][j];

            }
        }
    }
    return max;
}

int MinElement(int arr[][3],int rows,int cols){
    int min = INT_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]<min){
                min = arr[i][j];

            }
        }
    }
    return min;
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
    cout<<"Maximum Element is: "<<MaxElement(arr,rows,cols)<<endl;
    cout<<"Minimum Element is: "<<MinElement(arr,rows,cols);

    return 0;
}