#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Введите размер массива ";
  cin >> n;
  int* array1 = new int[n];
  for (int i = 0; i < n; i++)
  {
    int m;
    cout << "Введите число ";
    cin >> m;
    array1[i] = m;
  }
  int max = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      int p = array1[i] * array1[j];
      int s = array1[i] + array1[j];
      if (s % 7 == 0 && p % 3 == 0 && s > max)
      {
        max = s;
       }
     }
  }
  if (max == 0)
  {
    cout << "Fail";
  }
  else
  {
    cout << max;
  }
  return 0;
}
