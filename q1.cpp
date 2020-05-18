#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    n*=2;
    cin>>a;
    v.push_back(a);
    n--;
    int c=1,max=1;
    while(n--)
    {
        cin>>a;
        if(v.empty())
        {
            v.push_back(a);
            c=1;
        }
        else
        {
            if(find(v.begin(),v.end(),a)!=v.end())
            {
                v.erase(find(v.begin(),v.end(),a));
                c--;
            }
            else
            {
                v.push_back(a);
                c++;
            }
        }
        if(c>max)
            max=c;
    }
    cout<<max;
}
