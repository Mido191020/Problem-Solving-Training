class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
     int n=points.size();
     int mn=INT_MAX;
     int res=-1;int manh;
     for(int i=0;i<n;i++){
         if(points[i][0]==x||points[i][1]==y){
             manh=abs(x-points[i][0])+abs(y-points[i][1]);
             if(manh<mn){
  mn=manh;res=i;
             }
           
         }
     }
           return res;

}


};