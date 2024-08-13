#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <queue>
#include <string>
#include "combo.h"
using namespace std;
typedef long long ll;

string guess_sequence(int N) {
	string moves = "ABXY";
	char first = '?';
	int k = press("AB");
	if (k) {
		if (press("A")) first = 'A';
		else first = 'B';
	}
	else {
		if (press("X")) first = 'X';
		else first = 'Y';
	}
	moves.erase(moves.begin() + moves.find(first), moves.begin() + moves.find(first) + 1);
	string ans = string(1, first);
	if (N == 1) return ans;
	for (int i = 2; i < N; i++) {
		string k = ans;
		k.push_back(moves[0]);
		k += ans;
		k.push_back(moves[1]);
		k.push_back(moves[0]);
		k += ans;
		k.push_back(moves[1]);
		k.push_back(moves[1]);
		k += ans;
		k.push_back(moves[1]);
		k.push_back(moves[2]);
		int q = press(k);
		if (q == i) ans.push_back(moves[0]);
		else if (q == i + 1) ans.push_back(moves[1]);
		else ans.push_back(moves[2]);
	}
	string s = ans;
	s.push_back(moves[0]);
	s += ans;
	s.push_back(moves[1]);
	if (press(s) == N) {
		if (press(ans + string(1, moves[0])) == N) ans.push_back(moves[0]);
		else ans.push_back(moves[1]);
	}
	else ans.push_back(moves[2]);
	return ans;
}