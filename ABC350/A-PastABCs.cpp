#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;

	string numS = S.substr(3);
	int numI=0;
	for(int i=0; i<3; i++) {
		numI += (numS[i] - '0') * pow(10, 2-i);
	}

	string answer;
	if(numI==0){
		answer = "No";
	}else if(numI<=315){
		answer = "Yes";
	}else if(numI==316){
		answer = "No";
	}else if(numI<=349){
		answer = "Yes";
	}else if(350<=numI){
		answer = "No";
	}

	cout << answer << endl;
	return 0;
}