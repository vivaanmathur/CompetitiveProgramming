#include <iostream>
#include <sstream>
#include <vector>
 
using namespace std;
 
int main(){
	
	int n;
	cin >> n;
	
	vector<string> str(n);
	
	cin.ignore();
	
	for(int i = 0; i < n; i++){
		getline (cin, str[i]);
	}	
 
	for(int i = 0; i < n; i++){
		stringstream ss(str[i]);
		
		string word;
		
		while(ss >> word){
			cout << word[0];
		}
		cout << endl;
	}
}