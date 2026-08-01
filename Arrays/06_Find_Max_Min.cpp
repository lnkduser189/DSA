#include<iostream>
using namespace std;

int main(){

    int arr[]={5,2,9,1,7};
    int n=5;

    int maximum=arr[0];
    int minimum=arr[0];


    for(int i=1;i<n;i++){

        if(arr[i]>maximum)
            maximum=arr[i];

        if(arr[i]<minimum)
            minimum=arr[i];
    }


    cout<<"Maximum: "<<maximum<<endl;
    cout<<"Minimum: "<<minimum;

    return 0;
}