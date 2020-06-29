class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int,int>,int> m;
        map<pair<int,int>,int>::iterator it;
        int x=0,y=0;
        bool l=false;
        pair<int,int> v=make_pair(x,y);
        m[v]=1;
        for(int i=0;i<path.size();i++)
        {
            if(path[i]=='N')
                y++;
            else if(path[i]=='S')
                y--;
            else if(path[i]=='E')
                x++;
            else x--;
            v=make_pair(x,y);
            if(m.find(v)!=m.end())
            {
                l=true;
                break;
            }
            else m[v]=1;
        }
        return l;
    }
};

auto speedUp = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
