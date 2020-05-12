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
}
