class Solution {
  public:
    int modmul(int a, int b, int M) {
        return ((a%M) * (b%M)) % M;
    }
};