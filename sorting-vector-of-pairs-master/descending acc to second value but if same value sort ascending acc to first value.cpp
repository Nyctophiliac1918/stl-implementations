/*SAMPLE INPUT

3
Eve 78
Bob 99
Alice 78

SAMPLE OUTPUT

Bob 99
Alice 78
Eve 78
*/
# sorting-vector-of-pairs
#include<bits/stdc++.h> 
using namespace std; 
  
bool sortbysecdesc(const pair<string,int> &a, const pair<string,int> &b) 
{ 
       return (a.second > b.second || (a.second == b.second && a.first < b.first)); 
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
  
    sort(vect.begin(), vect.end(), sortbysecdesc); 
  
    for (int i=0; i<n; i++) 
    { 
        // "first" and "second" are used to access 
        // 1st and 2nd element of pair respectively 
        cout << vect[i].first << " " 
             << vect[i].second << endl; 
    } 
    return 0; 
} 
