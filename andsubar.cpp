#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		long long int n;
		cin >> n;
		long long int ans {1};
		long long int i {1};
		while (i<n) {
			if (i*2>n) {
				ans = max(ans,n-i+1);
			}
			else {
				ans = max(ans,i*2-i);
			}
			i*=2;
		}
		cout << ans << "\n";
	}

	return 0;
}