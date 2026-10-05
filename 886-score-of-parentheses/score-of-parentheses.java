class Solution {
    public int scoreOfParentheses(String s) {
        Stack<Integer> stack = new Stack<>();
        stack.push(0);
        for (char c : s.toCharArray()) {
            if (c == '(') {
                stack.push(0);
            } else {
                int inside = stack.pop();
                if (inside == 0) {
                    stack.push(stack.pop() + 1);
                } else {
                    stack.push(stack.pop() + 2 * inside);
                }
            }
        }
        return stack.pop();
    }
}