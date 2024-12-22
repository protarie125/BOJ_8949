#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

string A, B;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> A >> B;
  const auto& al = static_cast<ll>(A.length());
  const auto& bl = static_cast<ll>(B.length());

  auto ret = vl(max(al, bl), 0);
  ll i = 0;
  while (0 <= (al - 1 - i) && 0 <= (bl - 1 - i)) {
    ret[i] = (A[al - 1 - i] - '0') + (B[bl - 1 - i] - '0');
    ++i;
  }

  while (0 <= (al - 1 - i)) {
    ret[i] = (A[al - 1 - i] - '0');
    ++i;
  }

  while (0 <= (bl - 1 - i)) {
    ret[i] = (B[bl - 1 - i] - '0');
    ++i;
  }

  reverse(ret.begin(), ret.end());
  for (const auto& x : ret) cout << x;

  return 0;
}