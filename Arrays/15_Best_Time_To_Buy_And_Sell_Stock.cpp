#include<iostream>
using namespace std;

int main(){

    int prices[]={7,1,5,3,6,4};
    int n=6;


    int buy=prices[0];
    int profit=0;


    for(int i=1;i<n;i++){

        buy=min(buy,prices[i]);

        profit=max(profit,prices[i]-buy);
    }


    cout<<"Maximum Profit: "<<profit;


    return 0;
}