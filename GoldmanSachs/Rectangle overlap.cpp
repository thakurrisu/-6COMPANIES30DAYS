class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
       
        if(rec1[2]<=rec2[0]|| rec1[0]>=rec2[2])
            return false; // left 
        if(rec2[1]>=rec1[3] || rec1[1]>=rec2[3])// up
        return false;
        return true;
    }
};
