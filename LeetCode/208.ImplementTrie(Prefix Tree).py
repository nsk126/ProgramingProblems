class Trie:
    def __init__(self):
        # a char key will map to a new node
        self.keys = {}
        self.endofString = False

    def insert(self, word: str) -> None:
        pointer = self.keys
        while word:
            if word[0] in pointer:
                if word[1:]:
                    pointer = pointer[word[0]].keys
                else:
                    pointer[word[0]].endofString = True

                word = word[1:]
            else: # if char not in set
                if word[1:]:
                    # next char exists
                    pointer[word[0]] = Trie()
                    pointer = pointer[word[0]].keys
                else:
                    pointer[word[0]] = Trie()
                    pointer[word[0]].endofString = True

                word = word[1:]

    def search(self, word: str) -> bool:
        pntr = self.keys
        while word:
            if word[0] in pntr:
                if word[1:]:
                    pntr = pntr[word[0]].keys
                else:
                    pntr = pntr[word[0]]
                word = word[1:]
            else:
                return False
        return True if pntr.endofString == True else False

    def startsWith(self, prefix: str) -> bool:
        pntr = self.keys
        while prefix:
            if prefix[0] in pntr:
                if prefix[1:]:
                    pntr = pntr[prefix[0]].keys
                prefix = prefix[1:]
            else:
                return False
        return True

# Your Trie object will be instantiated and called as such:
trie = Trie()
trie.insert("apple")
trie.search("apple")
trie.search("app")
trie.startsWith("app")
trie.insert("app")
trie.search("app")
