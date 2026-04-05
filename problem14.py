class Solution(object):
    def longestCommonPrefix(self, strs):
        if not strs:
            return ""

        if len(strs) == 1:
            return strs[0]
        
        strs.sort()
        s1 = strs[0] 
        sn = strs[len(strs)-1]
        index = 0
        pre=""
        while (index < len(s1) and index < len(sn)):
            if s1[index] == sn[index]:
                pre = pre + s1[index]
                index+=1
            else:
                break
        n = len(pre)
        
        for i in range(1 , len(strs)-1):
            s2 = strs[i]
            if pre != s2[:n]:
                pre=""
                break
        
        return pre


        