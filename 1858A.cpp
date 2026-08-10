#include <iostream>
using namespace std;

int main() {
  int t, a, b, c;
  cin >> t;
  
  while(t--) {
    cin >> a >> b >> c;
    
    if (a > b) {
      cout << "First" << endl;
    } else if (a < b) {
      cout << "Second" << endl;
    } else if (a == b && c % 2 == 1) {
      cout << "First" << endl;
    } else if (a == b && c % 2 == 0) {
      cout << "Second"<< endl;
    }
  }

  return 0; 
}
