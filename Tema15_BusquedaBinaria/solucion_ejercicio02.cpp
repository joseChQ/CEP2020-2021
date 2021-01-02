#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<int> elements;

int binary_search(int left, int right, int key) {
  int mid;
  while (left < right) {
    mid = (left + right) / 2;
    if (elements[mid] < key) {
      left = mid + 1;
    } else {
      right = mid;
    }
  }
  return (left == elements.size() ? -1 : elements[left]);
}

int main() {
  int n, key;
  cin >> n;  // Tamaño del conjunto
  elements.resize(n);
  for (int &e : elements) {
    cin >> e;
  }
  sort(elements.begin(), elements.end());
  cin >> key;  // Elemento a buscar
  cout << binary_search(0, n, key) << "\n";
  // Para comprobar
  auto lowerbound = lower_bound(elements.begin(), elements.end(), key);
  cout << (lowerbound == elements.end() ? -1 : *lowerbound) << "\n";
  return 0;
}