#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define f first
#define s second
#define ou ||
#define dbg(x) cout << #x << " = " << x << endl
#define forn(i, n) for (int i = 0; i < int(n); i++)
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
using namespace std;
 
int main(){_
    vector<pair<int,int>> v;
    int i, j, k = 0;
    ll n, m; cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2 == 0){
            n = n/2;
            cout<<n<<" ";
        }else{
            n = (n*3) + 1;
            cout<<n<<" ";
        }
    }
}
