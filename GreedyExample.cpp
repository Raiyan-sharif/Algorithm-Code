#include<iostream>
#include<algorithm>

using namespace std;

struct knapsack {
    int unitPrice, quantity;
};

bool cmp( knapsack A, knapsack B ) {
    return A.unitPrice < B.unitPrice;
}

int main() {
    int i, n, k, res;
    knapsack knap[100];
    cin >> n >> k;
    for( i = 0; i < n; i++ ) {
        cin >> knap[i].unitPrice >> knap[i].quantity;
    }
    sort( knap, knap + n, cmp );
    cout << endl << "Sorted List:" << endl;
    for( int i = 0; i < n; i++ ) {
        cout << knap[i].unitPrice << " " << knap[i].quantity << endl;
    }
    cout << endl;
    i = 0;
    res = 0;
    for( i = 0, res= 0; k > 0 && i < n; i++ ) {
        int taking;
        if( knap[i].quantity <= k ) {
            k -= knap[i].quantity;
            taking = knap[i].quantity;
        }
        else {
            taking = k;
            k = 0;
        }
        res += ( taking * knap[i].unitPrice );
    }
    cout << "Minimum Cost: " << res << endl;
    return 0;
}
