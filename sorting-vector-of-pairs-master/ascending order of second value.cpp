# sorting-vector-of-pairs
#include<bits/stdc++.h> 
using namespace std; 
  
bool sortbysec(const pair<string,int> &a, const pair<string,int> &b) 
{ 
       return a.second<b.second; 
} 
  
  
int main() 
{ 
    vector< pair <string,int> > vect; 
    int n,m;
    string s;
    cin>>n;
    
    for (int i=0; i<n; i++)
    {
        cin>>s>>m;
        vect.push_back( make_pair(s,m) );
    }
  
    sort(vect.begin(), vect.end(), sortbysec); 
  
    for (int i=0; i<n; i++) 
    { 
        // "first" and "second" are used to access 
        // 1st and 2nd element of pair respectively 
        cout << vect[i].first << " " 
             << vect[i].second << endl; 
    } 
    return 0; 
} 
