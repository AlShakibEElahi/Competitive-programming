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
        string s;
        cin>>s;
        int nr,ng,nb,nR,nG,nB;
        For(i,0,s.length()){
            if(s[i]=='r') nr=i;
            if(s[i]=='g') ng=i;
            if(s[i]=='b') nb=i;
            if(s[i]=='R') nR=i;
            if(s[i]=='G') nG=i;
            if(s[i]=='B') nB=i;
        }
        if(nr<nR && ng<nG && nb<nB) yes;
        else no;
    }
    return 0;
}