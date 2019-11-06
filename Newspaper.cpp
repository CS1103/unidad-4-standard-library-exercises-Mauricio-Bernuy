#include <map>
#include <iostream>
#include <string>
#include <iterator>

using namespace std;

int main() {

	int n;
	cin>> n;
	

	for(int i=0; i<n; i++) {

		//cout << "ok";
		map<char, int> CharValues;
		map<char, int>::iterator CharIt;
		float result = 0;
		char c = 0;
		int v = 0;
		int q = 0;
		cin >> q;
		for(int i=0; i<q; i++) {
			//cout << "ok";
			cin>> c >> v;
			CharValues[c] = v;
		}
		int m; //no of lines for input
		cin >> m;

		for (int i = 0; i <= m; i++) {
			string text = { "" };
			getline(cin, text);
			//cout << text;
			if( text.size() <= 10000){
				for (auto i = 0; i < text.size(); i++) {
					CharIt = CharValues.find(text[i]);
					if(CharIt != CharValues.end())
						result += CharIt->second;
				}
			}
		}
	result /= 100;
	cout << result << "$"<<endl;
	CharValues.clear();

	}
}