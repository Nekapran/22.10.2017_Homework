# 22.10.2017_Homework
#include<iostream>
using namespace std;
int main()
{
  int a, n;
  int i = 0;
  cout << "Ввод n:";
  cin >> n;
  while(i <= n)
  {
    cout << "Ввод числа:";
    cin >> a;
    if (a % 2 == 0)
    {
      i++;
      cout << "Even " << a << endl;
    }
    else
    {
      i++;   
      cout << "Odd " << a << endl;
    }
  }
  return 0;
}
