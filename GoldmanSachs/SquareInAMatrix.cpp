class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        long long temp=N*(N+1)*(2*N+1);
        return temp/6;
    }
};
