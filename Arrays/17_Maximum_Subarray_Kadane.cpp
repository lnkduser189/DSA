#include<iostream>
using namespace std;

int main(){

    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=9;


    int current=arr[0];
    int maximum=arr[0];


    for(int i=1;i<n;i++){

        current=max(arr[i],current+arr[i]);

        maximum=max(maximum,current);
    }


    cout<<"Maximum Subarray Sum: "<<maximum;


    return 0;
}