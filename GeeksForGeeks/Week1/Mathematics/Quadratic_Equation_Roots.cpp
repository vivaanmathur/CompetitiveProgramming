class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        int d = (b*b) - (4*a*c);
        if(d < 0){
            return {-1};
        }
        
        double s = sqrt(d);
        int r1 = int(floor((-b + s) / (2.0 *a)));
        int r2 = int(floor((-b - s) / (2.0 *a)));
        
        if(r1 > r2){
            return {r1, r2};
        }
  
            return {r2, r1};
   
        
    }
};