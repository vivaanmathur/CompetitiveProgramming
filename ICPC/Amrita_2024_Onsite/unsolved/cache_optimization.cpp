#include <bits/stdc++.h>

using namespace std;

int main()
{
    int run;
    cin >> run;

    while (run--)
    {
        int n;
        cin >> n;

        vector<int> inputs(n);
        for (int i = 0; i < n; i++)
        {
            cin >> inputs[i];
        }

        for (int k = 1; k <= n; k++)
        {
            vector<int> cache;
            int cycles = 0;
            for (int i = 0; i < inputs.size(); i++)
            {
                auto it = find(cache.begin(), cache.end(), inputs[i]);
                int index = (it != cache.end()) ? distance(cache.begin(), it) : -1;

                if (index > -1)
                {
                    cycles++;
                    if (index != 0)
                    {
                        int val = cache[index];
                        cache.erase(cache.begin() + index);
                        cache.insert(cache.begin(), val);
                    }
                }
                else
                {
                    if (cache.size() == k)
                    {
                        cache.pop_back();
                    }
                    cycles += 2;
                    cache.insert(cache.begin(), inputs[i]);
                }
           
            }
            cout << cycles << "\n";
        }
    }
}