#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    FAST
    int t,x,y,z,e,f,g;
    cin>>t;
    vector<int>v(t);
    for(int i=0;i<t;i++)
        cin>>v[i];
    vector<int>l(v);
    int k=0;
    sort(l.begin(),l.end());
    for(int i=0;i<l.size()-2;i++)
    {
        for(int j=i+1;j<l.size()-1;j++)
        {
            for(int p=j+1;p<l.size();p++)
            {
                if(l[p]==l[i]+l[j])
                {
                    k++;
                    x=l[p];
                    y=l[i];
                    z=l[j];
                }
                else if(l[p]>l[i]+l[j])
                    break;
            }
            if(k)
                break;
        }
        if(k)
            break;
    }
    if(k==0)
        cout<<-1;
    else
    {
        for(int i=0;i<v.size();i++)
        {
            if(x==v[i])
                e=i+1;
            if(z==v[i])
                f=i+1;
            if(y==v[i] && k)
            {
                g=i+1;
                k--;
            }
        }
        cout<<e<<" "<<f<<" "<<g;
    }
}
