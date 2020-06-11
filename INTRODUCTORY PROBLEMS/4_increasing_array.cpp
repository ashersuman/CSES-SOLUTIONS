#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<int, int> pi;

//MACROS
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; i<=b; i++)
#define PRT(v) for(auto i:v) cout << i << " ";

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    ll x;
    vi list;
    ll count = 0;
    while(cin >> x){
        list.PB(x);
    }

    for(int i=0; i<t-1; i++){
        if(list[i] > list[i+1]){
            count += list[i] - list[i+1];
            list[i+1] = list[i];
        }
    }

    cout << count;
    cout << "\n";
    return 0;
}