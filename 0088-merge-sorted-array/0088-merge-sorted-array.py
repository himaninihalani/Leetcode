class Solution(object):
    def merge(self, nums1, m, nums2, n):
        k = len(nums1)
        j = 0
        
        for i in range(m,k):
            if j<n:
                nums1[i] = nums2[j]
                j += 1

        nums1.sort()
        