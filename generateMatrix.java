class Solution {
    public int[][] generateMatrix(int n) {
        int [][] ans = new int[n][n];

        int minr = 0;
        int maxr = n-1;
        int minc = 0;
        int maxc = n-1;
        int tne = 0;
        int el = 1;
        while(tne<n*n){
            //top wall
            for(int i=minr,j=minc;j<=maxc&&tne<n*n;j++){
                ans[i][j] = el;
                el++;
                tne++;
            }
            minr++;
            //rightwall
            for(int i=minr,j=maxc;i<=maxr&&tne<n*n;i++){
                ans[i][j] = el;
                el++;
                tne++;
            }
            maxc--;
            //bottomwall
            for(int i=maxr,j=maxc;j>=minc&&tne<n*n;j--){
                ans[i][j] = el;
                el++;
                tne++;
            }
            maxr--;
            //leftwall
            for(int i=maxr,j=minc;i>=minr&&tne<n*n;i--){
                ans[i][j] = el;
                el++;
                tne++;
            }
            minc++;
        }
        return ans;
    }
}
