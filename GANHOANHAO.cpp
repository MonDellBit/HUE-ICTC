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
long long f[MAX];
void sanguoc(){
    for(int i=2;i<=MAX;i++)
        for(int j=1;j<=MAX/i;j++)
            f[i*j]+=i;
}
bool check[MAX];
long long a[1000007];
void giai(){
    sanguoc();
    long long n = readLL();
    long long ans = 1;
    for(long long i = 1; i <= n; i++){
        long long x = readLL();
        if(x * 2 <= f[x]+1) {
            a[ans] = x;
            ans++;
        }
    }
    ans--;
    cout << ans << "\n";
    for(long long i = 1; i <= ans; i++){
        cout << a[i] << "\n";
    }

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