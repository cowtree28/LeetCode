"""word1 word2 받고, word1부터 하나씩 집어넣기, 만약에 한쪽이 다 떨어지면 남은거 다 넣기"""

class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        answer = ""
        word1 = list(word1)
        word2 = list(word2)
        while word1 and word2:
            answer += word1.pop(0)
            answer += word2.pop(0)
        answer += "".join(word1)
        answer += "".join(word2)
        return answer
        