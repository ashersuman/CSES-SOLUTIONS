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
#define PRT(v) for(int i=0; i<v.size(); i++) cout << v[i] << " "

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll x;
    vi v;
    cin >> x;
    if( x == 1 )
        cout << "1";
    else if( x == 2 || x == 3 )
        cout << "NO SOLUTION";
    else{
        for(int i=2; i<=x; i+=2){
            v.push_back(i);
        }
        for(int i=1; i<=x; i+=2){
            v.push_back(i);
        }
        PRT(v);
    }
    cout << "\n";
    return 0;
}