class Solution {
    public String removeOuterParentheses(String s) {
        int d = 0;
        String res = "";
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ')') {
                d --;
            }
            if (d != 0) {
                res = res + s.charAt(i);
            }
            if (s.charAt(i) == '(') {
                d ++;
            } 
        }

        return res;
    }
}