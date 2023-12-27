#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
using namespace std;
 
int main(){_
    int n, m;
    cin>>n>>m;
    vector<int> ingressos(n), customer(m);
    set<pair<int,int> > s;
    for(int i=0; i < n; i++){
        cin>>ingressos[i];
        s.insert({ingressos[i],i});
    }
    for(int i=0; i < m; i++) cin>>customer[i];
    pair<int,int> aux;
    for(int i=0; i < m; i++){
        auto match = s.lower_bound({customer[i]+1, 0});
        if (match == s.begin()){
            cout<<-1<<endl;
        }else{
            match--;
            cout<<(*match).first<<endl;
            s.erase(match);
        }
    }
}