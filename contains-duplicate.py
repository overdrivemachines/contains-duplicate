from typing import List


class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        if len(nums) <= 1:
            return False
        my_set = set()
        for num in nums:
            if num in my_set:
                return True
            else:
                my_set.add(num)

        return False


s = Solution()
result = s.containsDuplicate([1, 2, 3, 1])
print(result)
