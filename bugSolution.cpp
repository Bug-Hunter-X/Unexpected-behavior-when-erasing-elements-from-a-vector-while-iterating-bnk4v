#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<int> vec;
  for (int i = 0; i < 10; ++i) {
    vec.push_back(i);
  }

  // Correct way to remove elements using iterators:
  for (auto it = vec.begin(); it != vec.end(); ) {
    if (*it % 2 == 0) { 
      it = vec.erase(it); //erase returns next valid iterator
    } else {
      ++it;
    }
  }

  //Correct way using std::remove
  vec.erase(std::remove_if(vec.begin(), vec.end(), [](int i){ return i % 2 == 0;}), vec.end());

  for (int i : vec) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}
