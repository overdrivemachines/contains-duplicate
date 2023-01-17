#include <iostream>
#include <vector>
#include <map>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
  map<int, bool> nums_map;
  for (int num: nums) {
    if (nums_map[num] == true)
      return true;
    nums_map[num] = true;
  }
  return false;
}

int main(int argc, char const *argv[]) {
  vector<int> input = {1,1,1,3,3,4,3,2,4,2};
  cout << containsDuplicate(input);

  return 0;
}
