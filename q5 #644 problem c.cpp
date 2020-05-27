#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>e,o;
        vector<int>::iterator it,itr;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==0)
                e.push_back(a);
            else o.push_back(a);
        }
        if(o.size()%2==0 && e.size()%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int p=1,l=0;
            while(p--)
            {
                for(itr=o.begin();itr!=o.end();itr++)
                {
                    for(it=e.begin();it!=e.end();it++)
                    {
                        if(*it+1==*itr || *it-1==*itr)
                        {
                            //cout<<*it;
                            e.erase(it);
                            o.erase(itr);
                            l++;
                            break;
                        }
                    }
                    if(l==1)
                        break;
                }
            }
            if(o.size()%2==0 && e.size()%2==0)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
