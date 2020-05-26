#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[200000]={0};
        int c[n];
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
            a[c[i]-1]++;
        }
        set<int>s(c,c+n);
        set<int>::iterator it=s.end();
        it--;
        for(int i=0;i<*it;i++)
            sum+=a[i];
        int o=s.size();
        while(o--)
        {
            if(sum>=*it)
                break;
            i=*it-1;
            sum-=a[i];
            it--;
        }
        if(o==-1)
            cout<<1<<endl;
        else cout<<sum+1<<endl;
    }
}
