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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    TC(t);
    ll sum = 0;
    ll x;
    int e = 1;
    while(1){
        x = t/pow(5,e);
        if(x == 0) break;
        sum += x;
        e++;
    }
    cout << sum;
    cout << "\n";
    return 0;
}