#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define vi vector<ll>
#define pb push_back

void solve()
{
    int t,n,k,x;
    vi a,b;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            a.pb(x);
            b.pb(x);
        }
        sort(b.begin(),b.end());
        int count=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++){
                while(a[i]==b[j]){
                    i++;
                    j++;
                }
                count++;
            }
        }
        cout<<count<<endl;
        
        
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}