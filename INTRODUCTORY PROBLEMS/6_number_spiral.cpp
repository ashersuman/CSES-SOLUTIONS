#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

//MACROS
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; i<=b; i++)
#define PRT(v) for(auto i:v) cout << i << ' ';

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    ll y, x;
    ll res;
    while(t--){
        cin >> y >> x;
        ll m = max(y,x);
        ll dia = m * m - m +1;
        if(m % 2 == 0){
            res = dia + (y - x); 
        }
        else{
            res = dia - (y - x);
        }
        cout << res << "\n";
    }

    cout << "\n";
    return 0;
}