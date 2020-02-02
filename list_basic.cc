#include<iostream>
#include<list> //use this header file
using namespace std;
int main()
{
  int n;
  list<int> vc; //creating a list same as templetes
  while(cin>>n && n!=0)
  {
    vc.push_back(n);  //inserting elements in list
  }


  list<int>::iterator itr;
  for(itr=vc.begin();itr!=vc.end();itr++)
  {
    cout<<*itr<<endl;                         //to access the elements we need to derefrence the variables
  }
  cout<<"--------------"<<endl;
  for(int i:vc)                               //accessing elements via for loop
  {
    cout<<i<<endl;
  }


}
