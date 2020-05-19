#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector< pair<string,int> >v;
    vector< pair<string,int> >::iterator it;
    string s;
    cin>>s;
    v.push_back(make_pair(s,0));
    cout<<"OK"<<endl;
    n--;
    int i,c=0;
    while(n--)
    {
        cin>>s;
        c=0;
        for(it=v.begin();it!=v.end();it++)
        {
            if(it->first!=s)
            {
                c++;
                if(c==v.size())
                {
                    v.push_back(make_pair(s,0));
                    cout<<"OK"<<endl;
                    break;
                }
            }
            else if(it->first==s)
            {
                it->second++;
                cout<<s<<it->second<<endl;
                break;
            }
        }
    }
}
