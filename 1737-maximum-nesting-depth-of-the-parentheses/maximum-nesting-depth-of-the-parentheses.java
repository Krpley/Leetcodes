class Solution {
    public int maxDepth(String s) {
        int n = s.length();
        int m = 0;
        int k = 0;
        char p = ' ';
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == '(' || s.charAt(i) == ')') {
                if (s.charAt(i) == '(') {
                    m++;
                } else if (s.charAt(i) == ')') {
                    if (m > k) {
                        k = m;
                    }
                    m--;
                }
                p = s.charAt(i);
            }
        }
        return k;
    }
}