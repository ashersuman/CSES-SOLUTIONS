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
#define REP(i,a,b) for(auto i=a; i<b; i++)
#define PRT(v) for(int i=0; i<v.size(); i++) cout << v[i] << " ";

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll c = 0, ans = 0;
    string s;
    getline(cin,s);
    int prev = s[0];

    REP(i,0,s.length()){
        if(s[i] == prev){
            c++;
        }
        else{
            c = 1;
        }
        ans = max(ans,c);
        prev = s[i];
    }

    cout << ans;
    
    cout << "\n";
    return 0;
}