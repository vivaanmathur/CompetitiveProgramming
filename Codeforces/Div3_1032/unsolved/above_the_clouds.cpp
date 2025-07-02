#include <bits/stdc++.h>

using namespace std;

int main()
{
    int run;
    cin >> run;

    while(run--)
    {
      int n;
      cin >> n;

      string s;
      cin >> s;



      if(n < 3){
        cout << "NO\n";
        continue;
      }
      if(n==3){
char a = s[0];
char b = s[1];
char c = s[2];

string x = {a, c};

if(x.find(b) != string::npos){
    cout << "YES\n";
}
else{
    cout << "NO\n";
}
continue;


      }






    }   
}

// b is in a + c 
// a + b + c = s