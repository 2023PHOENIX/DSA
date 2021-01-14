import java.util.Scanner;

public class PowerOf2 {

    static boolean IsPower2(int n){
        if(n==0)
            return false;
        while(n!=1)
        {
            if(n%2!=0)
                return false;
            n = n/2;

        }
        return true;
    }
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        scanner.close();
        System.out.println(IsPower2(n));
        

    }
}
