#include<bits/stdc++.h>
using namespace std;

#define endl            "\n"
#define BOOST           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll              long long int
#define pb              push_back
#define mp              make_pair
#define yes             cout<<"YES"<<endl
#define no              cout<<"NO"<<endl
#define Gcd(a,b)        __gcd(a, b)
#define Lcm(a,b)        (a*b) / Gcd(a,b)
#define mem(a,b)        memset(a, b, sizeof(a))
#define all(v)          v.begin(), v.end()
#define uniqueArr(x)    x.erase(unique(all(x)),x.end())
#define For(i,j,k)      for(int i=j;i<k;i++)
#define Rev(i,k,n)      for(int (i)=(k-1);(i)>=(n);(i)--)
#define takeArr(x,o,n)  for(int i=o;i<n;i++){cin>>x[i];}
#define printArr(x,o,n) for(int i=o;i<n;i++){cout<<x[i]<<" ";}cout<<endl;

int main(){
    BOOST;
    int tc;
    cin>>tc;
    For(tt,0,tc){
        vector<int> arr;
        int a;
        For(i,0,4){
            int b;
            if(i==0) a==b;
            cin>>b;
            arr.pb(b);
        }
        sort(all(arr));
        if(arr.at(0)==a) cout<<0<<endl;
        else if(arr.at(1)==a) cout<<1<<endl;
        else if(arr.at(2)==a) cout<<2<<endl;
        else cout<<3<<endl;
    }
    return 0;
}