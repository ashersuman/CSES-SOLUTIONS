#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pi;

//MACROS
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; i<b; i++)
#define PRT(v) for(auto i:v) cout << i << ' ';
#define SQ(x) (x*x)


ll findSol(ll n){
    ll tot = SQ(n)*(SQ(n)-1);
    ll res = (tot - (4 * 2) - (8 * 3) - ((n-4)*4*4) - 4*4 - ((n-4)*6*4) - (n-4)*(n-4)*8)/2;
    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin >> t;
    ll i = 1;
    while(i<=t){
        cout << findSol(i) << "\n";
        i++;
    }

    return 0;
}