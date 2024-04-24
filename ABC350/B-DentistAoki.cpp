#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, Q;
	cin >> N >> Q;
	bool Tooth[N]; //全部falseで初期化 false:虫歯あり

	for(int i=0; i<Q; i++) {
		int T;
		cin >> T;
		Tooth[T-1] = !Tooth[T-1];
	}

	int answer=0;
	for(int i=0; i<N; i++) {
		if(!Tooth[i]){
			answer++;
		}
	}

	cout << answer << endl;
	return 0;
}