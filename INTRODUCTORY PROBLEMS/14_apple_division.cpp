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
#define INF 1000000007

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    TC(t);
    ll x;
    vll a;
    ll suma, sumb;
    ll min_sum = INF;
    while(cin >> x){
        a.PB(x);
    }

    for(int msk = 0; msk < (1<<t); ++msk){
        suma = sumb = 0;
        for(int i=0;i<t;i++){
            if(msk & (1<<i)){
                suma += a[i];
            }
            else{
                sumb += a[i];
            }
        }
        x = abs(suma - sumb);
        min_sum = min(min_sum, x);
    }
    cout << min_sum;
    cout << "\n";
    return 0;

    /*
        BITMASK METHOD
        https://stackoverflow.com/questions/41028859/looping-over-a-bitmask
    */
}