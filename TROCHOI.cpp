#include<bits/stdc++.h>
using namespace std;
#define ishowspeed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Task ""
#define N 1000006
#define INF 1000000000
#define MOD 1000000007
#define ll long long
template < class T > bool minimize(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template < class T > bool maximize(T& a, const T& b) { return a < b ? a = b, 1 : 0; }  
template<typename T> inline T gcd(T a,T b) { while (b != 0) swap(b, a %= b); return a; }
long long readLL() { long long x; return cin >> x, x; }
int readInt() { int x; return cin >> x, x; }
int isPrime[N];
void snt() {
    isPrime[0] = isPrime[1] = 1;
    for (int i = 2; i * i <= N; i++)
        if (isPrime[i] == 0)
            for (int j = i * i; j <= N; j += i)
                isPrime[j] = 1;
}
bool ngto(int x) {
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return x >= 2;
}
void giai(){
    long long a = readLL(), b = readLL();
    long long ans = 0;
    for(long long i = 1; i <= 2; i++){
        if(a > b){
            ans += a;
            a--;
            continue;
        }
        else{
            ans += b;
            b--;
            continue;
        }
    }	
    cout << ans;
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