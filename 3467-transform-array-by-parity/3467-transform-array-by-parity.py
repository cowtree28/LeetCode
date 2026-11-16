
class Solution:
    def transformArray(self, nums: List[int]) -> List[int]:
        return sorted(map(lambda x:1 if x % 2 else 0, nums))