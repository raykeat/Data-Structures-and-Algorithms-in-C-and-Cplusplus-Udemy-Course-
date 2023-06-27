class Solution:
    def __init__(self, s):
        self.start = 0
        self.end = 0
        self.s = s
        self.maxlen = 0
    
    def longest(self):
        unique_chars = []
        while self.end < len(self.s):
            if self.s[self.end] not in unique_chars:
                unique_chars.append(self.s[self.end])
                self.end += 1
                self.maxlen = max(self.maxlen, self.end - self.start)
            else:
                unique_chars.remove(self.s[self.start])
                self.start += 1
        return self.maxlen

s = "abcadehfera"
sol = Solution(s)
print(sol.longest())
