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

bool col[15], dia1[15], dia2[15], reserved[8][8];
int cnt = 0;
//i = col 
//k = row
void search(int k){
    if(k == 8){
        cnt += 1;
    }
    else{
        REP(i,0,8){
            if(col[i] || dia1[i+k] || dia2[i-k+7] || reserved[i][k]) continue;
            col[i] = dia1[i+k] = dia2[i-k+7] = 1;
            search(k+1);
            col[i] = dia1[i+k] = dia2[i-k+7] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    REP(i,0,15){
        col[i] = dia1[i] = dia2[i] = 0;
    }

    string s;

    REP(i,0,8){
        cin >> s;
        REP(j,0,8){
            if(s[j]=='*'){
                reserved[i][j] = 1;
            }
            else{
                reserved[i][j] = 0;
            }
        }
    }

    search(0);
    cout << cnt;
    cout << "\n";
    return 0;
}
/* INPUT */
/*

........
........
..*.....
........
........
.....**.
...*....
........

*/