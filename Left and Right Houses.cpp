// Problem: C. Left and Right Houses
// Contest: Codeforces - Codeforces Round 935 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1945/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// ============================================================================ //
// ||                         Md.Mahmudul Hasan Rabbi                        || //
// ||                           ... A Day Dreamer...                         || //
// ============================================================================ //

#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

#define FASTio                     ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl                         <<'\n'

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    vector<int> pref(n+2);
    
    for(int i = 1; i <= n; i++) pref[i] = pref[i-1] + s[i-1]-'0';
    
    pref[n+1] = pref[n];
    
    for(int l = n/2, r = (n+1)/2; l >= 0 and r <= n+1; l--, r++) {
        if((l-pref[l])*2 >= l and (pref[n]-pref[l])*2 >= n-l) {
            cout << l nl;
            return;
        }
        if((r-pref[r])*2 >= r and (pref[n]-pref[r])*2 >= n-r) {
            cout << r nl;
            return;
        }
 
    }

}

int main() {
    FASTio

//without testcase:
	//solve();

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