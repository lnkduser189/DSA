#include<iostream>
using namespace std;

int main(){

    int nums[]={1,2,3,4};
    int n=4;


    int result[4];


    for(int i=0;i<n;i++){

        int product=1;


        for(int j=0;j<n;j++){

            if(i!=j)
                product*=nums[j];
        }


        result[i]=product;
    }


    for(int i=0;i<n;i++)
        cout<<result[i]<<" ";


    return 0;
}