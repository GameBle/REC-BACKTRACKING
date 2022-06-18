#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n;cin>>n;
  vector<ll> v(n);
  for(auto &i : v){
    cin>>i;
  }
  int len = (1<<n);
  vector<vector<ll>> subsets;
  for(int i=0;i<len;i++){
    vector<ll> subset;
    for(int j = 0;j<n;j++){
      if((i&(1<<j))!=0){
        subset.push_back(v[j]);
      }
    }
    subsets.push_back(subset);
    subset.clear();
  }
  for(auto sub : subsets){
    for(auto i : sub){
      cout<<i<<" ";
    }
    cout<<"\n";
  }
    return 0;
}