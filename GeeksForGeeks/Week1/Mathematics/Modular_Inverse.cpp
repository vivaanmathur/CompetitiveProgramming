class Solution {
  public:
    int modInverse(int n, int m) {
        for(int i = 0; i < m; i++){
            if((n * i) % m == 1){
                return i;
            }   
        }
        return -1;
    }
};