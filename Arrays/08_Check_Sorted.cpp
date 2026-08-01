#include<iostream>
using namespace std;

int main(){

    int arr[]={10,20,30,40};
    int n=4;

    bool sorted=true;


    for(int i=1;i<n;i++){

        if(arr[i]<arr[i-1]){
            sorted=false;
            break;
        }
    }


    if(sorted)
        cout<<"Array is sorted";
    else
        cout<<"Array is not sorted";


    return 0;
}