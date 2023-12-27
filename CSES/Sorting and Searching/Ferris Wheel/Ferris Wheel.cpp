#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
using namespace std;
 
int main(){_
    int n, m;cin>>n>>m;
    vector<int> v;
    for(int i=0; i < n; i++){
        int num;cin>>num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    int comeco = 0, fim = n-1, ans = 0;
    int atual = v[fim];
    while (comeco <= fim){
        if(v[fim]+ v[comeco] <= m){
            ans++;
            fim--;
            comeco++;
        }else{
            ans++;
            fim--;
        }
    }
    cout<<ans<<endl;
    return 0;
}