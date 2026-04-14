class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for ch in s:
            if ch == '(' or ch == '{' or ch == '[':
                stack.append(ch)
            
            else:
                if not stack:
                    return False

                char_pop = stack.pop()
                if ch == ')'and char_pop != '(':
                    return False
                if ch == '}' and char_pop != '{':
                    return False
                if ch == ']' and char_pop != '[':
                    return False
                 
        if len(stack) == 0:
            return True
        return False

        