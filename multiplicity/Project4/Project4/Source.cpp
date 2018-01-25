#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	map <string, string> s;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string first, second;
		cin >> first >> second;
		s[first] = second;
		s[second] = first;
	};
	string word;
	cin >> word;
	cout << s[word];
	return 0;
}