// Problem: A. Primary Task
// Contest: Codeforces - Codeforces Round 966 (Div. 3)
// URL: https://codeforces.com/contest/2000/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// ============================================================================ //
// ||                         Md.Mahmudul Hasan Rabbi                        || //
// ||                           ... A Day Dreamer...                         || //
// ============================================================================ //

#include "bits/stdc++.h"
using namespace std;

//------------------------DEFINED--------------------------//

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vii;
typedef vector<ll> vll;


#define FASTio                     ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp                         " "
#define nl                         <<'\n'
#define yes                        cout<<"YES" nl
#define no                         cout<<"NO" nl

vll imp(10010,0);
void solve() {
    ll n;
    cin >> n;
    
    if(imp[n]) yes;
    else no;

}
int main() {
    FASTio
    
    for(ll i = 2; i <= 9; i++) {
            imp[100+i] = 1;
    }
    for(ll i = 10; i <= 99; i++) {
            imp[1000+i] = 1;
    }
    
//With testcase:
    ll t;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
// ============================================================================ //
// ||                                                                        || //
// ||                   ***NEVER GIVE UP ON YOUR DREAMS***                   || //
// ||                   "Say ALHAMDULILLAH for everything"                   || //
// ||                      ^_^<<<<Happy CODING>>>>^_^                        || //
// ||                                                                        || //
// ============================================================================ //
