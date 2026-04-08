class Solution(object):
    def letterCombinations(self, digits):
        sym = {
            '2': {'a' , 'b' , 'c'},
            '3': {'d' , 'e' , 'f'},
            '4': {'g' , 'h' , 'i'},
            '5': {'j' , 'k' , 'l'},
            '6': {'m' , 'n' , 'o'},
            '7': {'p' , 'q' , 'r' , 's'},
            '8': {'t' , 'u' , 'v'},
            '9': {'w' , 'x' , 'y' , 'z'},
        }
        res = list(sym[digits[0]])
        
        for i in range(1 , len(digits)):
            arr = sym[digits[i]]
            new_comb = []
            for res_item in res:
                for letter in arr:
                    new_comb.append(res_item + letter)
            res = new_comb

        return res

            


