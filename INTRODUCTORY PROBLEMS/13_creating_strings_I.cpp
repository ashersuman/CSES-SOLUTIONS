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
#define PRT(v) for(auto i:v) cout << i << "\n";
#define TC(t) string t; cin >> t;

set<string> s;

void gen_permutations(bool c[], vi perm, string x){
    if(perm.size() == x.length()){
        string permres(perm.begin(),perm.end());
        s.insert(permres);
    }
    else{
        REP(i,0,x.length()) {
            if (c[i]) continue;
            c[i] = true;
            perm.push_back(x[i]);
            gen_permutations(c,perm,x);
            c[i] = false;
            perm.pop_back();
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    TC(t);
    sort(t.begin(), t.end());
    bool chosn[t.length()] = {0};
    vi perm;

    gen_permutations(chosn,perm,t);

    cout << s.size() << "\n";
    PRT(s);
    return 0;
}