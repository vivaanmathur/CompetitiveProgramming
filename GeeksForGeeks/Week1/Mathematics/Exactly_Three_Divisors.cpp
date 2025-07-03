class Solution {
  public:
    int exactly3Divisors(int n) {
        if(n < 4){
            return 0;
        }
        int count = 0;
        
        for(int s = 2; s * s <= n; s++){
            
            bool isPrime = true;
            
            for(int j = 2; j * j <= s; j++){
                if(s % j == 0){
                    isPrime = false;
                    break;
                    
                }
            }
            if(isPrime){
                count++;
            }
            
        }
        
        return count;
    }
};