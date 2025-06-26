#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c;
    cin >> c;
    
    while (c--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        // Precompute bit counts for each bit position
        vector<int> bit_count(64, 0);
        for (int i = 0; i < n; i++) {
            for (int bit = 0; bit < 64; bit++) {
                if (arr[i] & (1LL << bit)) {
                    bit_count[bit]++;
                }
            }
        }
        
        long long max_sum = 0;
        
        // For each element, calculate sum of XOR with all elements
        for (int i = 0; i < n; i++) {
            long long current_sum = 0;
            
            // Process each bit position
            for (int bit = 0; bit < 64; bit++) {
                long long bit_value = 1LL << bit;
                
                // For XOR: bit is set in result if exactly one operand has it set
                int result_ones;
                if (arr[i] & bit_value) {
                    // arr[i] has this bit set
                    // XOR result has bit set for numbers that don't have this bit
                    result_ones = n - bit_count[bit];
                } else {
                    // arr[i] doesn't have this bit set
                    // XOR result has bit set for numbers that have this bit
                    result_ones = bit_count[bit];
                }
                
                current_sum += (long long)result_ones * bit_value;
            }
            
            max_sum = max(max_sum, current_sum);
        }
        
        cout << max_sum << "\n";
    }
    
    return 0;
}