#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<int> elements;

bool binary_search(int left, int right, int key) {
  int mid;
  while (left < right) {
    mid = (left + right) / 2;
    if (elements[mid] < key) {
      left = mid + 1;
    } else {
      right = mid;
    }
  }
  return (elements[left] == key);
}

int main() {
  int n, key;
  cin >> n;  // Tamaño del conjunto 
  elements.resize(n);
  for (int &e : elements) {
    cin >> e;
  }
  sort(elements.begin(), elements.end());
  cin >> key; // Elemento a buscar
  cout << (binary_search(0, n, key) ? "Elemento encontrado"
                                    : "Elemento no encontrado")
       << "\n";
  return 0;
}