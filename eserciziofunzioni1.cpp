#include <iostream>

using namespace std;
int x = 0;
int y = 0;
int
dispari (int x, int y)
{
  int i = 0;
  int s = 0;

  for (i = x; i <= y; i++)
    {
      if (i % 2 != 0)
	{
	  s = s + i;
	}
    }
  return s;
}

int
main ()
{
  int x;
  int y;
  int s = 0;
  int somma;
  cout << "inserire il numero minore" << "\n";
  cin >> x;
  cout << "inserire il numero maggiore limite" << "\n";
  cin >> y;

  somma = dispari (x, y);
  cout << "la somma dei numeri dispari e'" << "\n";
  cout << somma;

}