//Authors: Aaron Moebius
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string one = "";
  int two;
  string thr = "";
  string four = "";
  string five = "";
  string six = "";
  string sev = "";

  cout<<"Enter a silly word."<<endl;
  cin>>one;
  cout<<"A number"<<endl;
  cin>>two;
  cout<<"An animal"<<endl;
  cin>>thr;
  cout<<"A silly word"<<endl;
  cin>>four;
  cout<<"Another silly word"<<endl;
  cin>>five;
  cout<<"An adjective"<<endl;
  cin>>six;
  cout<<"A food"<<endl;
  cin>>sev;

  cout<<"Our neighbor ";
  cout<<one;
  cout<<" will be gone for ";
  cout<<two;
  cout<<" days. You will need to watch her pet ";
  cout<<thr;
  cout<<", ";
  cout<<four;
  cout<<", while Ms. ";
  cout<<five;
  cout<<" is away.\n";
  cout<<"Note that her pet is ";
  cout<<six;
  cout<<" and that its favourite snack is ";
  cout<<sev;
  cout<<".";
  return 0;
}
