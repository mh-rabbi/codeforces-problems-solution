// Problem: A. Simple Palindrome
// Contest: Codeforces - Codeforces Round 972 (Div. 2)
// URL: https://codeforces.com/contest/2005/problem/A
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

typedef long long ll;

#define FASTio                     ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl                         <<'\n'

void solve()
{
    int n;
    cin >> n;

    string c = "aeiou";

    string s = "";

    for(int i = 0; i < 5; i++) {
        int j = n/5;
        while(j) {
            s += c[i];
            j--;
        }
        if(i < n%5) s += c[i];

    }

    cout << s nl;
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