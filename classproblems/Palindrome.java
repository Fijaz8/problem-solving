public class Palindrome {
    public static int Palindrome(String word ,int i , int len) {
        if (i >= len) {
            return 1;
        }
    
        //checking weather iterating value getting zero    
        if (word.charAt(i) != word.charAt(len)) {
            return 0;
        }      

        return Palindrome(word ,i+1 ,len-1);
        
    }

    public static void main(String[] args) {
        String word ="malayalam";
        int len = word.length()-1;
        int val = Palindrome(word, 0,len );
        if (val==1){
            System.out.println("palindrome");

        }else{
            System.out.println("not palindrome");
        }

    }
}
