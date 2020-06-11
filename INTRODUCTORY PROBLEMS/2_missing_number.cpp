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
#define PRT(v) for(int i=0; i<v.size(); i++) cout << v[i] << " ";

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t,x;
    ll total = 0;
    ll sum = 0;
    cin >> t;
    while(cin >> x){
        total += x;
    }
    
    sum = (t * (1+t))/2;
    cout << sum-total << "\n";

    return 0;
}