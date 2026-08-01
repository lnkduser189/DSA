#include<iostream>
#include<string>
using namespace std;


bool checkInclusion(string s1, string s2) {

    if(s1.length() > s2.length())
        return false;

    int freq1[26] = {0};
    int freq2[26] = {0};


    for(int i = 0; i < s1.length(); i++)
    {
        freq1[s1[i]-'a']++;
    }


    int k=s1.length();


    for(int i=0;i<k;i++)
    {
        freq2[s2[i]-'a']++;
    }


    if(equal(freq1,freq1+26,freq2))
        return true;



    for(int i=k;i<s2.length();i++)
    {

        freq2[s2[i-k]-'a']--;

        freq2[s2[i]-'a']++;


        if(equal(freq1,freq1+26,freq2))
            return true;
    }


    return false;
}



int main(){

    string s1="ab";
    string s2="eidbaooo";


    if(checkInclusion(s1,s2))
        cout<<"Permutation exists";

    else
        cout<<"Permutation does not exist";


    return 0;
}