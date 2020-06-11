#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

//MACROS
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; i<b; i++)
#define PRT(v) for(auto i:v) cout << i << ' ';
#define TC(t) ll t; cin >> t;

ll bitpow(ll b, ll e, ll md){
    ll ans = 1;

    for(ll i=0; i<e; i++)
        ans = ans * b % md;

    return ans; 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    TC(t);
    
    cout << bitpow(2,t,1e9+7);

    cout << "\n";
    return 0;
}