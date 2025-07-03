class Solution {
  public:
    int modMultiply(long long a, long long b) {
        const long long M = 1000000007;
        return ((a%M)*(b%M))%M;
    }
};