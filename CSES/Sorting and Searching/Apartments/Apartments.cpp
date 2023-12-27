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
 
int saida=0;
 
int main(){_
    int n, m, k; cin>>n>>m>>k;
    vector<int> v1, v2;
    for(int i=0;i<n;i++){
        int num;cin>>num;
        v1.push_back(num);
    }
    for(int i=0; i < m; i++){
        int num;cin>>num;
        v2.push_back(num);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int i=0, j=0;
    while (i< v1.size() && j<v2.size()){
        if(abs(v1[i]- v2[j])<=k){
            saida++;
            i++;
            j++;
        }else{
            if(v1[i]-v2[j]>k){
                j++;
            }else{
                i++;
            }
        }
    }
    cout<<saida<<endl;
}