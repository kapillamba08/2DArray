#include <iostream>
using namespace std;

int main(){
    //declare
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[2][2]<<endl;

    //printing row-wise
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //printing column-wise
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}