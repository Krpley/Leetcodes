class Solution {
    public int strStr(String haystack, String needle) {
        if (haystack.contains(needle)) {
            for (int i = 0; i < haystack.length(); i++) {
                try {
                    if ((haystack.substring(i, i + needle.length())).equals(needle)) {
                        return i;
                    }
                } 
                catch (StringIndexOutOfBoundsException e) {
                    return -1;
                }
                
            }
        } 
        return -1;
    }
}