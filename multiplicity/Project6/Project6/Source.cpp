#include <iostream>
#include <set>
#include <string>

using namespace std;

string toSmall(string s) {
	string output = "";
	for (auto c : s) {
		if (c >= 'A' && c <= 'Z') {
			c -=('A' - 'a');
		}
		output += c;
	}
	return output;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int N;
	cin >> N;
	set <string> dict, dictSmall;
	for (int i = 0; i < N; i++) {
		string x;
		cin >> x;
		dict.insert(x);
		x = toSmall(x);
		//словарь в нижнем регистре
		dictSmall.insert(x);
	};

	string text;
	getline(cin, text);
	getline(cin, text);
	text += ' ';
	int p = text.find(' ');
	int k=0,mis=0;
	while (p>0) {
		string word = text.substr(0, text.find(' '));
		if (dict.find(word) == dict.end() && dictSmall.find(toSmall(word)) != dictSmall.end()) {
			//если слово без поставленного ударения(в нижнем регистре) есть в словаре без ударений(все слова в нижнем регистре), но слова с ударением нет в словаре с ударениеми, то ошибка
			mis++;
		}
		else {
			for (auto c : word) {
				//проверяем количество ударений
				if (c >= 'A' && c <= 'Z') {
					k++;
				}
			}
			if (k != 1) mis++;
			k = 0;
		}
		text = text.substr(word.size()+1, text.size() - word.size()-1);
		p = text.find(' ');
	};
	cout << mis << "\n";
	system("pause");
	return 0;
}