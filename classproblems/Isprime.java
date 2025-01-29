public class Isprime {
    public static boolean Isprime(int num) {
        if (num<2){
            return false;
        }
        for (int i =2;i<Math.sqrt(num);i++){
            if (num%i==0){
                return false;
            }
        }
        return true;

    }

    public static void main(String[] args) {
        int num =13;
        boolean val=Isprime(num);
        if (val) {
            System.out.println("prime");
        }else{
            System.out.println("not ");
        }

    }
}
