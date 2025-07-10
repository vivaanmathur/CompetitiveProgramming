class Solution {
  public:
    int sumUnderModulo(int a, int b, int M) {
        // code here
        return ((a%M) + (b%M)) % M;
    }
};