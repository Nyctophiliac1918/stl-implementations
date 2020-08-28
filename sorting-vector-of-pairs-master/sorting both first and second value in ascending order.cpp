# sorting-vector-of-pairs
#include<bits/stdc++.h>
using namespace std;

bool sortbyfandsecasc(const pair <string,int> &a, const pair <string,int> &b)
{
    return (a.second < b.second || (a.second == b.second && a.first < b.first));
}

int main() {
    vector< pair <string,int> > vect;
    int n,m;
    string s;
    cin>>n;

    for (int i=0; i<n; i++)
    {
        cin>>s>>m;
        vect.push_back( make_pair(s,m) );
    }

    sort(vect.begin(), vect.end(), sortbyfandsecasc); 

    for (int i=0; i<n; i++) 
    { 
        cout << vect[i].first << " " << vect[i].second << endl; 
    } 
    return 0; 
}
