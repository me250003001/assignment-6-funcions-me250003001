#include <iostream>
using namespace std;

/* Recursive function to find GCD of two numbers */
int gcd(int a, int b) {
    // TODO: complete the function as per instructions
  if(b==0){
      return a;
}
return gcd(b, a % b)
    }
int main() {
    int num1, num2;
    cin >> num1 >> num2;

    cout << gcd(num1, num2) << "\n";

    return 0;
}

