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

void swap(ll *x, ll *y){
    ll temp;
    temp = *x;
    x = y;
    *y = temp;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    TC(t);
    ll x,y;
    while(t--){
        cin >> x >> y;
        if (2*x-y>=0 && (2*x-y)%3==0 && 2*y-x>=0 && (2*y-x)%3==0){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    
    cout << "\n";
    return 0;
}