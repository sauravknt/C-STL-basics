#include<iostream>
#include<set>
using namespace std;
int main()
{
  int n;
  set<int> st;
  while(cin>>n && n!=0)
  {
    st.insert(n);
  }
  set<int>::iterator it;
  for(it=st.begin();it!=st.end();it++)
  {
    cout<<*it<<endl;
  }
  cout<<"----------"<<endl;
  for(int i:st)
  {
    cout<<i<<endl;
  }
}
