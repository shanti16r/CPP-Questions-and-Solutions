#include <iostream>
#include <vector>
using namespace std;

int Missing(vector<int> v){
  int n = 10;
  int l = v[0];

  int diff = l - 0;
  for (int k = 0; k < n; k++){
      if((v[k] - k) != diff)
      {
        while (diff < v[k] - k) {
          cout << "missing element is found: " << k + diff <<endl;
          diff++;
        }
      }
  }
  return 0;
}

int main() {
    vector<int>v;
  for(int j=0; j < 9; j++){
      int a;
      cout << "enter element" << j+1 << ":"  << endl;
      cin >> a;
      v.push_back(a);
  }
  for(int i = 0; i < 9; i++){
      cout << v[i] << " "<<endl;
  }
  Missing(v);

}
