#include <iostream>
 
using namespace std;
 
int main(){
	int len;
	cin >> len;
	
	for(int i = 0; i < len; i++){
	int l, r, n, m, count = 0, new_l = 0, new_r = 0;
	
	cin >> n >> m >> l >> r;
	
	while (count < m){
		if((new_r + 1)<=r && count+1 <= m){
			new_r++;
			count++;
		}
		if((new_l -1)>=l && count+1 <=m){
			new_l--;
			count++;
		}
	}
	
	cout << new_l << " " << new_r << "\n";
	
}
 
	return 0;
}