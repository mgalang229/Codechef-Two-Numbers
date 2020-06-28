#include <bits/stdc++.h>

using namespace std;

typedef long long ll; 

ll a, b, n;

void decode() {
	cin >> a >> b >> n;
	if(n % 2 == 0) {
		cout << max(a, b) / min(a, b);
	}
	else {
		cout << max(2 * 1LL * a, b) / min(2 * 1LL * a, b);
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
