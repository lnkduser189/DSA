#include<iostream>
using namespace std;

int main(){

    int arr[]={1,1,2,2,3};
    int n=5;


    int index=1;


    for(int i=1;i<n;i++){

        if(arr[i]!=arr[i-1]){
            arr[index]=arr[i];
            index++;
        }
    }


    for(int i=0;i<index;i++)
        cout<<arr[i]<<" ";

    return 0;
}