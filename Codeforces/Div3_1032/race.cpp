#include <bits/stdc++.h>

using namespace std;

int main()
{
    int run;
    cin >> run;
    while(run--){
        int a, x, y;
        cin >> a >> x >> y;

    int distance_ax = abs(x-a);
    int distance_ay = abs(y-a);

    int flag = 0;
    for(int i = 1;i<=100;i++){
        if(i==a)
        continue;
        
        int distance_bx = abs(x-i);
        int distance_by = abs(y-i);
        
        if(distance_ax > distance_bx && distance_ay > distance_by){
            flag = 1;
            break;
        }
    }
    
    if(flag == 1){
        cout<<"YES"<<endl;
        continue;
    }else{
        cout<<"NO"<<endl;
        continue;
    }
 
    }
}