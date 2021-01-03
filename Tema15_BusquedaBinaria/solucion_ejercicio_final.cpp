#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int N, M, X, Y;

bool fun(int k) { return 1LL * k * X <= (1LL * (N - k) * Y) + M; }

int binary_search(int left, int right){
  int mid;
  while(left < right){
    mid = (left+right)/2;
    if(fun(mid)){
      left = mid + 1;
    }else{
      right = mid;
    }
  }
  return left-1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> N >> M >> X >> Y;
  cout << binary_search(0, N + 1) << "\n";

  return 0;
}