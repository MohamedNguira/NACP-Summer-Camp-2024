#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i=0; i<n-1; i++){
		cout << "#";
	}
	cout << "." << endl;
	
	for (int i=0; i<n-2; i++){
		cout << "#";
		for (int j=0; j<n-2; j++){
			cout << ".";
		}
		cout << "#" << endl;
	}
	
	for (int i=0; i<n-1; i++){
		cout << "#";
	}
	cout << "." << endl;	
	
	for (int i=0; i<n-1; i++){
		cout << "#";
		for (int j=0; j<i; j++){
			cout << ".";
		}
		cout << "#";
		for (int j=0; j<n-i-2; j++){
			cout << ".";
		}
		cout << endl;
	}
	return 0;
}