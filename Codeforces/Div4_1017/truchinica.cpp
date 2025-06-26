#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> res(n, vector<int>(m, 0));
        vector<int> q;

        int ptr = 1;

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {

                if (!q.empty())
                {
                    int index = 0;
                    while (index < q.size() && ((i >= 1 && (q[index] == res[i - 1][j])) || (j >= 1 && (q[index] == res[i][j - 1])) || (i < (n - 1) && (q[index] == res[i + 1][j])) || (j < (m - 1) && (q[index] == res[i][j + 1]))))
                    {

                        index++;
                    }
                    if (index < q.size())
                    {
                        res[i][j] = q[index];
                        q.erase(q.begin() + index);
                        continue;
                    }
                }

                int tries = 0;
                int chosen = 0;

                while (tries < k)
                {
                    if (!((i > 0 && ptr == res[i - 1][j]) ||
                          (j > 0 && ptr == res[i][j - 1]) ||
                          (i < n - 1 && ptr == res[i + 1][j]) ||
                          (j < m - 1 && ptr == res[i][j + 1])))
                    {
                        chosen = ptr;
                        break;
                    }
                    q.push_back(ptr);
                    if (ptr == k)
                    {
                        ptr = 1;
                    }
                    else
                    {
                        ptr++;
                    }
                    tries++;
                }

                if (chosen)
                {
                    res[i][j] = chosen;
                    if (ptr == k)
                    {
                        ptr = 1;
                    }
                    else
                    {
                        ptr++;
                    }
                }
                else
                {
                    res[i][j] = q.back();
                    q.pop_back();
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
