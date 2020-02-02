#include<iostream>
#include<vector> //use this header file
using namespace std;
int main()
{
  int n;
  vector<int> vc; //creating a vector same as templetes
  while(cin>>n && n!=0)
  {
    vc.push_back(n);  //inserting elements in vector
  }
  // we have two ways of accessing elements of vectos
  //method 1 - using iterators:-
  vector<int>::iterator itr;
  for(itr=vc.begin();itr<vc.end();itr++)
  {
    cout<<*itr<<endl;                         //to access the elements we need to derefrence the variables
  }
  cout<<"--------------"<<endl;
  for(int i:vc)                               //accessing elements via for loop
  {
    cout<<i<<endl;
  }


}
