class Solution {
    public void rotate(int[][] matrix) {
        int i, j, l;
        int k;
        int len = matrix.length;
        int temp[][] = new int[len][len];

        for (i = 0; i < len; i++) {
            for (j = 0; j < len; j++) {
                temp[i][j] = matrix[i][j];
            }
        }

        for (i = 0, k = 0; i < len && k < len; i++, k++) {
            for (j = 0, l = len - 1; j < len && l >= 0; j++, l--) {
                matrix[i][j] = temp[l][k];
            }
        }
    }
}
