class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int tx=x,ty=y,bx = x + k - 1,by=y;
        while(tx<bx){
            swap(grid[tx][ty],grid[bx][by]);
            ty++;by++;
            if(ty==k+y){
                tx++;bx--;
                ty = y;
                by = y;
            }
        }
        return grid;
    }
};