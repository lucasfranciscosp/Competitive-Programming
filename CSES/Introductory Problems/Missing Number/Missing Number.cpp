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
    int i;
    vector<int> v;
    int n, m; cin>>n;
    forn(i, n - 1){
        int num; cin>>num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    int aux = 1;
    forn(i, n){
        if(v[i]!= aux){
            cout<<aux;
            return 0;
        }
        aux++;
    }
}
