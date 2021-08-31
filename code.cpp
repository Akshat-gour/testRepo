#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,i; 
    cin >> n;
    string s;
    while(n!=1)
    {
        if(n%2==0)
        {
            s+='B';
            n=n/2;
        }
        else
        {
            s+='A';
            n-=1;
        }
        
    }
    s+='A';
    reverse(s.begin(),s.end());
    cout<<s;
}