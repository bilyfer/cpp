#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int a = 0;
  int b = 0;
  int c = 0;

  cout << "Igrese el valor de a:";
  cin >> a;
  cout << endl;

  cout << "Igrese el valor de b:";
  cin >> b;
  cout << endl;

  cout << "Igrese el valor de c:";
  cin >> c;
  cout << endl;

  // a = 10
  // b = 70
  // c = 300
  
  //  false    true
  if (a > b && a > c)
  {
    cout << "a es el mayor";
  }

  //  true     false
  if (b > a && b > c)
  {
    cout << "b es el mayor";
  }

  //  true     true
  if (c > a && c > b)
  {
    cout << "c es el mayor";
  }

  if (a > b)
  {
    if (a > c)
    {
      cout << "a es el mayor";
    }
    else
    {
      cout << "c es el mayor";
    }
  }
  else
  {
    if (b > c)
    {
      cout << "b es el mayor";
    }
    else
    {
      cout << "c es el mayor";
    }
  }


  bool resultado = a > b && a > c;

  if (resultado)
  {
    // true
  }




  return 0;
}
