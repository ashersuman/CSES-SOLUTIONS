#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<char> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

//MACROS
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i=a; i<b; i++)
#define PRT(v) for(auto i:v) cout << i;
#define TC(t) ll t; cin >> t;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //TC(t);
    char c;
    int od = 0;
    vi pali;
    ll s[26] = {0};
    while(cin>>c){
        s[c-'A'] += 1;
    }

    REP(i,0,26){
       if(s[i]%2==1) od+=1; 
    }
    if(od > 1){
        cout << "NO SOLUTION" << "\n";
    }
    else{
        REP(i,0,26){
            if(s[i]%2 == 0){
                REP(j,0,s[i]/2){
                    pali.PB('A'+i);
                }
            }
        }
        REP(i,0,26){
            if(s[i]%2 == 1){
                REP(j,0,s[i])
                    pali.PB('A'+i);
            }
        }
        for(int i=25; i>=0; i--){
            if(s[i]%2 == 0){
                REP(j,0,s[i]/2){
                    pali.PB('A'+i);
                }
            }
        }
    }
    PRT(pali);
    cout << "\n";
    return 0;
}