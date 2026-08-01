
#include<iostream>
using namespace std;

int main(){

    int arr[]={1,12,-5,-6,50,3};
    int n=6;

    int k=4;


    int sum=0;


    for(int i=0;i<k;i++)
        sum+=arr[i];


    int maxSum=sum;


    for(int i=k;i<n;i++){

        sum+=arr[i]-arr[i-k];

        maxSum=max(maxSum,sum);
    }


    cout<<"Maximum Average: "<<(double)maxSum/k;


    return 0;
}