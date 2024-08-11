#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
string getAlienLanguage(vector<string> &dictionary, int k) {
  unordered_map<char, int> mpp;
  string ans;
  int count=0;
  for (int i = 0; i < dictionary.size(); i++) {
    for (int j = 0; j < dictionary[i].length(); j++) {
     if(mpp.find(dictionary[i][j])==mpp.end())
{
        mpp[dictionary[i][j]] = count;
        count++;
        ans.push_back(dictionary[i][j]);
}
    }
  }
  return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<string> dictionary(n);
    for(int i=0;i<n;i++){
        cin>>dictionary[i];
        }
        cout<<getAlienLanguage(dictionary,k);
        return 0;
}