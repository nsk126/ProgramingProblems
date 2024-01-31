class Node:
    def __init__(self) -> None:
        self.child = {}
        self.end = False

class WordDictionary:
    def __init__(self):
        self.node = Node()

    def addWord(self, word: str) -> None:
        pntr = self.node
        for x in word:
            if x not in pntr.child:
                pntr.child[x] = Node()
            pntr = pntr.child[x]
        pntr.end = True

    def search(self, word: str) -> bool:
        def dfs(j, root):
            pntr = root

            for i in range(j ,len(word)):
                p = word[i]

                if p == ".":
                    for child in pntr.child.values():
                        if dfs(i + 1, child):
                            return True
                    return False
                else:
                    if p not in pntr.child:
                        return False
                    pntr = pntr.child[p]

            return pntr.end
        return dfs(0, self.node)




# Your WordDictionary object will be instantiated and called as such:
# obj = WordDictionary()
# obj.addWord(word)
# param_2 = obj.search(word)