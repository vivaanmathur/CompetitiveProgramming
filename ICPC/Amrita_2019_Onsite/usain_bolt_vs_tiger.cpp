#include <bits/stdc++.h>
using namespace std;

int main()
{
    int run;
    cin >> run;

    while (run--)
    {
        string s;
        int k, a = 96, place = 0;
        cin >> s;
        cin >> k;
        string t;

        sort(s.begin(), s.end());

        for (int i = 1; i <= 26; i++)
        {

            if (char(a + i) == s[place])
            {
                if (k > 0)
                {
                    t = t + char(a + i);
                    k--;
                }
                place++;
            }
            else
                t = t + char(a + i);
        }

        if (t.length() < s.length())
        {
            cout << "NOPE\n";
        }
        else
        {
            cout << t.substr(0, s.length()) << "\n";
        }
    }
}