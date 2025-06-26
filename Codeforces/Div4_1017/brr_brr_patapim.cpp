#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
	
	int count;
	cin >> count;
	
	for(int i = 0; i < count; i++){
	
	
	int n;
		cin >> n;
			
	vector<int> p(n*2);
	
	vector<bool> isThere(n*2, false);
	
 
	for(int i =0; i < n; i++){
		for(int j = 0; j < n; j++){
			int num;
			cin >> num;
			p[i+j+1] = num;
			isThere[num-1] = true;
		}
	}
	
	
	auto it = find(isThere.begin(), isThere.end(), false);
 
    p[0] = distance(isThere.begin(), it) +1;
	
	
	
	for(int i = 0; i < (2*n); i++){
	cout << p[i] << " ";
	}
	
}
	
}
