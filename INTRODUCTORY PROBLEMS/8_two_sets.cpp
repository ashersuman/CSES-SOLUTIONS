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

void print(vll set1, vll set2){
    cout << "YES" << "\n";
    cout << set1.size() << "\n";
    PRT(set1);
    cout << "\n";
    cout << set2.size() << "\n";
    PRT(set2);
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    string mask = "00101101"; //if n is odd
    string emask = "01100110"; //if n is even
    vll set1;
    vll set2;
    int mc = 0; //mask counter
    ll tot = (n * (n+1))/2;
    if(tot%2 == 1){
        cout << "NO" << "\n";
    }
    else{
        if(n%2 == 1){
            REP(i,0,n){
                if(mc>7) mc=0;

                if(mask[mc] == '0')
                    set1.PB(i+1);

                else if(mask[mc] == '1')
                    set2.PB(i+1);
                mc++;
            }
            print(set1,set2);
        }
        else
        {
            REP(i,0,n){
                if(mc>7) mc=0;

                if(emask[mc] == '0')
                    set1.PB(i+1);

                else if(emask[mc] == '1')
                    set2.PB(i+1);
                mc++;
            }
            print(set1, set2);
        }  
    }
    return 0;
}