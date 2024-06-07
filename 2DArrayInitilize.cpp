#include <iostream>
using namespace std;

int main(){
    int arr[4][5];
    int rows = 4;
    int columns = 5;

    // taking input
    cout<<"Enter elements: ";
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }

    // printing row-wise
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}