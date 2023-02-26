#include<bits/stdc++.h>
using namespace std;
#define ishowspeed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Task "SPP"
#define MAX 1000007
#define INF 1000000000
#define MOD 1000000007
#define ll long long
template < class T > bool minimize(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template < class T > bool maximize(T& a, const T& b) { return a < b ? a = b, 1 : 0; }  
template<typename T> inline T gcd(T a,T b) { while (b != 0) swap(b, a %= b); return a; }
long long readLL() { long long x; return cin >> x, x; }
int readInt() { int x; return cin >> x, x; }
long long f[MAX+5];
void sanguoc(){
    for( int i = 1; i <= MAX; ++i ) 
        for( int j = i+i; j <= MAX; j += i ) f[j] += i;
}
void giai(){
    // sanguoc();
    // long long n = readLL();
    // for(long long i = 1; i <= n; i++) cin >> f[i];
    string s;
    cin >> s;
    long long le = 0, chan = 0;
    for(long long i = 0; i < s.size(); i++){
        if(i % 2 == 0){
            chan += s[i] - '0';
        }
        else le += s[i] - '0';
    }
    long long ans = abs(chan - le);
    if(ans % 11 == 0) cout << ans << " " << "Yes";
    else cout << ans << " " << "No";

}
int main(){
	ishowspeed;
     // freopen(Task".inp","r",stdin);
     // freopen(Task".out","w",stdout);
	long long test=1;
	// cin>>test;
	while(test--){
	giai();
	}
}
