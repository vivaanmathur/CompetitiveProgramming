#include <bits/stdc++.h>

using namespace std;

int main()
{
    int run;
    cin >> run;

    while(run--){
        int n, s;
        cin >> n >> s;

        vector<int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        if(n == 1){
            cout << abs(s - arr[0]) << "\n";
            continue;
        }

        if(s <= arr[0]){
            cout << arr[n - 1] - s << "\n";
            continue;
        }

        if(s >= arr[n - 1]){
            cout << s - arr[0] << "\n";
            continue;
        }

        int count_l = 2 * (s - arr[0]) + (arr[n - 1] - s);
        int count_r = 2 * (arr[n - 1] - s) + (s - arr[0]);

        cout << min(count_l, count_r) << "\n";
    }
}
