#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int run;
    cin >> run;

    while (run--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> res(n, vector<int>(m, 0));
        vector<pair<int, int>> q;
        for (int i = 0; i < k; i++)
        {
            q.emplace_back(i + 1, (n * m) / k);
        }

        int ptr = 0;

        for (int i = 0; i < m; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    int max_attempts = q.size();
                    while (max_attempts &&
                           ((j > 0 && q[ptr].first == res[j - 1][i]) ||
                            (i > 0 && q[ptr].first == res[j][i - 1]) ||
                            (j < n - 1 && q[ptr].first == res[j + 1][i]) ||
                            (i < m - 1 && q[ptr].first == res[j][i + 1])))
                    {

                        if (ptr == q.size() - 1)
                        {
                            ptr = 0;
                        }
                        else
                        {
                            ptr++;
                        }
                        max_attempts--;
                    }

                    if (!q.empty())
                    {
                        res[j][i] = q[ptr].first;
                        if (q[ptr].second == 1)
                        {
                            q.erase(q.begin() + ptr);
                            if (ptr == q.size() && ptr > 0)
                            {
                                ptr = 0;
                            }
                        }
                        else
                        {
                            q[ptr].second--;
                        }
                    }
                }
            }
            else
            {
                for (int j = n-1; j >= 0; j--)
                {
                    int max_attempts = q.size();
                    while (max_attempts &&
                           ((j > 0 && q[ptr].first == res[j - 1][i]) ||
                            (i > 0 && q[ptr].first == res[j][i - 1]) ||
                            (j < n - 1 && q[ptr].first == res[j + 1][i]) ||
                            (i < m - 1 && q[ptr].first == res[j][i + 1])))
                    {

                        if (ptr == q.size() - 1)
                        {
                            ptr = 0;
                        }
                        else
                        {
                            ptr++;
                        }
                        max_attempts--;
                    }

                    if (!q.empty())
                    {
                        res[j][i] = q[ptr].first;
                        if (q[ptr].second == 1)
                        {
                            q.erase(q.begin() + ptr);
                            if (ptr == q.size() && ptr > 0)
                            {
                                ptr = 0;
                            }
                        }
                        else
                        {
                            q[ptr].second--;
                        }
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << "\n";
        }
    }
}
