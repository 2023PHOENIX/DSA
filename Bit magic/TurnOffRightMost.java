/**
 * TurnOffRightMost
 */
import java.util.*;


public class TurnOffRightMost {

    static int TurnOff(int n)
    {
        return n & (n-1);
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int n = scan.nextInt();
        scan.close();
        
        System.out.println(TurnOff(n));

    }
}