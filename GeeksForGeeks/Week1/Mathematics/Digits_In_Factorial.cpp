class Solution {
  public:
    int digitsInFactorial(int n) {
        if(n < 0){
            return 0;
        }
        if(n == 0 || n == 1){
            return 1;
        }
        double x = n * log10(n/M_E) + 0.5 * log10(2*M_PI*n);
        
        return (int)x + 1;
        
        
    }
};