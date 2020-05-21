#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    char ch;
    string s;
    cin>>s;
    stringstream ss(s);
    ss>>a;
    long long k=a;
    while( ! ss.eof() )
    {
        ss>>ch;
        if(ch=='+')
        {
            ss>>a;
            k+=a;
        }
        else if(ch=='-')
        {
            ss>>a;
            k-=a;
        }
    }
    cout<< k;
}
