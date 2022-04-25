class Solution {
public:
    int countLatticePoints(vector<vector<int>>& v) {
        // we have to find out whether the coordinnates are present inside the circle or not
        // treaverse through -r to r in the x direction and -r to r in the y direction covering the whole coordinate systems and find whether it si presesnt in the circle or not 
        set<pair<int,int>>s;
        for(int i=0;i<v.size();i++)
        {
            int a=v[i][0],b=v[i][1];int r=v[i][2];
            for(int x=-r;x<=r;x++)
                for(int y=-r;y<=r;y++)
                    if((x*x)+(y*y)<=(r*r))
                        s.insert({x+a,y+b});
        }
        return s.size();
    }
};