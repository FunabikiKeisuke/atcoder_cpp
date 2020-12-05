#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int v, w = 0;
  while (n--) {
    cin >> v;
    // 過去の入力と今回の入力の論理和を取る
    // 例えば 8(1000) |= 2(10) の場合，それぞれの位で論理和を取る事により 10(1010) を得る
    w |= v;  
    // cout << "w |= v; " << w << endl;  // デバッグ用
  }
  // gcc のビルトイン関数 __builtin_ctz() は，64ビット整数の末尾のゼロビットをカウントする
  // 例えば 20(10100) の場合，末尾から 2 つがゼロビットのため 2 を返す
  cout << __builtin_ctz(w) << endl;  

  return 0;
}

