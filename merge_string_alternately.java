class Solution {
    public String mergeAlternately(String word1, String word2) {
        int w1_len=word1.length();
        int w2_len=word2.length();
        char[] f_word=new char[w1_len+w2_len];
        int i=0,j=0,k=0;
        while(i<w1_len && j<w2_len){             // in a new char array insert word1 and word2 alternately 
            f_word[k++]=word1.charAt(i++);
            f_word[k++]=word2.charAt(j++);
        }
 
        while(i<w1_len){                        // then insert left letters of word1
            f_word[k++]=word1.charAt(i++);
            
        }

        while(j<w2_len){                      // then insert  left letters of word2
            f_word[k++]=word2.charAt(j++);
        }

        String result=new String(f_word);     // convert char array to string 
        return result;
    }
}
