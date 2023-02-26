#include<bits/stdc++.h>
using namespace std;
#define ishowspeed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Task ""
#define N 1000006
#define INF 1000000000
#define MOD 1000000000
#define ll long long
template < class T > bool minimize(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template < class T > bool maximize(T& a, const T& b) { return a < b ? a = b, 1 : 0; }  
template<typename T> inline T gcd(T a,T b) { while (b != 0) swap(b, a %= b); return a; }
long long readLL() { long long x; return cin >> x, x; }
int readInt() { int x; return cin >> x, x; }
long long sqr(long long x) {return x*x;}
long long a[100000007];
long long t = 1;
long long mul(long long a, long long n){
    if(n == 1) return a;
    long long tmp = mul(a, n / 2);
    if(n % 2 == 0) return (sqr(tmp) % MOD);
    else return (sqr(tmp) % MOD) * a;
}
void giai(){
    long long n = readLL();
    long long ans = 0;
    if(n == 1){
        cout << 1;
        return;
    }
    if(n == 2){
        cout << 3;
        return;
    }
    long long x = mul(2, n - 2);
    ans = (n + 1) * x % MOD;
    cout << ans;
}
int main(){
	ishowspeed;
     // freopen(Task".inp","r",stdin);
     // freopen(Task".out","w",stdout);
	long long test=1;
	//cin>>test;
	while(test--){
	giai();
	}
}