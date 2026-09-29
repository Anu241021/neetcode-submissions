class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        r = [defaultdict(int) for _ in range(len(board))]
        c = [defaultdict(int) for _ in range(len(board[0]))]
        for i in range(len(board)):
            for j in range(len(board[0])):
                if board[i][j] != ".":
                    r[i][board[i][j]] += 1
            for k in r[i]:
                if r[i][k]>1:
                    return False
        for i in range(len(board[0])):
            for j in range(len(board)):
                if board[j][i] != ".":
                    c[i][board[j][i]] += 1
            for k in c[i]:
                if c[i][k]>1:
                    return False
        b = [defaultdict(int) for _ in range(9)]
        for i in range(len(board)):
            for j in range(len(board[0])):
                if board[i][j] != ".":
                    block_num = (i // 3) * 3 + (j // 3)
                    b[block_num][board[i][j]] += 1
                    if b[block_num][board[i][j]] > 1:
                        return False
        return True
        