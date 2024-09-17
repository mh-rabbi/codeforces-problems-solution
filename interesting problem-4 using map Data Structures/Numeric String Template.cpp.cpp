// Problem: C. Numeric String Template
// Contest: Codeforces - Codeforces Round 966 (Div. 3)
// URL: https://codeforces.com/contest/2000/problem/C
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


void solve()
{
    ll n;
    cin >> n;
    
    unordered_map<char, ll> ump1;
    unordered_map<ll, char> ump2;
    
    ll a[n];
    for(ll i = 0; i < n; i++) {
    	cin >> a[i];
    }
    
    ll m;
    cin >> m;
    
    while(m--) {
    	string s;
    	cin >> s;
    	if(s.size() != n) {
    		no;
    	}
    	else {
            bool ok = true;
            for (int i = 0; i < n; i++) {
                if (ump1.find(s[i]) == ump1.end() and ump2.find(a[i]) == ump2.end()) {
                    ump1[s[i]] = a[i];
                    ump2[a[i]] = s[i];
                }
                else if ((ump1.find(s[i]) != ump1.end() and ump1[s[i]] != a[i]) or
                         (ump2.find(a[i]) != ump2.end() and ump2[a[i]] != s[i])) {
                    ok = false;
                    break;
                }
            }
            if(ok) yes;
            else no;
            
            ump1.clear();
            
            ump2.clear();
    }
    	
    
   }

    
}

int main()
{
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
