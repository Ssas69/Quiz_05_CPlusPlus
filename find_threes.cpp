#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;

int find_threes(int number[], int numNumbers){
    int sum = 0;
    for(int i = 0; i < numNumbers; i++){
    if (number[i] % 3 == 0)
    {
          sum += number[i];
    }
    else
    {

    }
  }
    return sum;
}

int main(){
  const int NUM_NUMBERS=8;
  int x[NUM_NUMBERS];
  for (int i = 0; i < NUM_NUMBERS; i++){
    cout << "Dame un número ";
    cin >> x[i];
  }
  int sum = find_threes(x,8);
  cout << "La suma es " << sum << endl;
}
