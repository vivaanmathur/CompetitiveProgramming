class Solution {
  public:
    double termOfGP(int a, int b, int n) {
        // code here
        return a * pow((double)b/a, (n-1));
    }
};