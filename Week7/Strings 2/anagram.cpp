#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
    string s="sakshamsharma";
    string t="sharmasksham";
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)
    {
        cout<<"Anagram";
    }
    else{
        cout<<"Not Anagram";
    }

}