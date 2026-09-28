class NumMatrix:
    m=[]
    ps=[]
    def __init__(self, matrix: List[List[int]]):
        for i in matrix:
            self.m.append(i)
        n = len(matrix)
        self.ps = [[0 for _ in range(len(matrix[0])+1)] for _ in range (n)]
        for i in range(n):
            for j in range(len(matrix[0])):
                self.ps[i][j+1]=self.ps[i][j]+matrix[i][j]
        
    def sumRegion(self, row1: int, col1: int, row2: int, col2: int) -> int:
        len = row2-row1+1
        ans = 0
        for i in range(row1,row1+len):
            ans+=self.ps[i][col2+1]-self.ps[i][col1]
        return ans
        


# Your NumMatrix object will be instantiated and called as such:
# obj = NumMatrix(matrix)
# param_1 = obj.sumRegion(row1,col1,row2,col2)