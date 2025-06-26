#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int n;
    cin >> n;
 
    for (int run = 0; run < n; run++)
    {
 
        bool yes = true;
        string s, p;
 
        cin >> p;
        cin >> s;
 
        if (p[0] != s[0])
        {
            cout << "NO" << "\n";
            continue;
        }
 
        vector<pair<char, int>> p_count;
        char compare = p[0];
        int count = 1;
 
        for (int i = 1; i < p.length(); i++)
        {
            if (compare == p[i])
            {
                count++;
            }
            else
            {
                p_count.push_back({compare, count});
                compare = p[i];
                count = 1;
            }
        }
        p_count.push_back({compare, count});
 
        vector<pair<char, int>> s_count;
        compare = s[0];
        count = 1;
        int index = 0;
 
        for (int i = 1; i < s.length(); i++)
        {
            if (compare == s[i])
            {
                count++;
            }
            else
            {
                s_count.push_back({compare, count});
                compare = s[i];
                count = 1;
            }
        }
        s_count.push_back({compare, count});
 
       
 
        if (p_count.size() != s_count.size())
        {
            cout << "NO" << "\n";
            continue;
        }
 
        for (int i = 0; i < p_count.size(); i++)
        {
            if (p_count[i].first != s_count[i].first)
            {
                yes = false;
            }
            else if (s_count[i].second > (2 * p_count[i].second))
            {
                yes = false;
            }
            else if (s_count[i].second < p_count[i].second)
            {
                yes = false;
            }
        }
 
        if (yes)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
}