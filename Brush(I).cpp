#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int tc;
	cin >> tc;
	for( int ti = 1; ti <= tc; ti++ ) {
		int n, w, x, y[100];
		cin >> n >> w;
		for( int i = 0; i < n; i++ ) {
			cin >> x >> y[i];
		}
		sort( y, y + n );
		int i, j, ans = 0;
		for( i = 0; i < n; i = j ) {
			int lim = y[i] + w;
			ans++;
			for( j = i + 1; j < n; j++ ) {
				if( y[j] <= lim ) { 
					continue;
				}
				else {
					
					break;
				}
			}
		}
		cout << "Case " << ti << ": " << ans << endl;
	}
	return 0;
}