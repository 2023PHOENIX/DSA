import java.util.Scanner;

/**
 * countBit
 */
public class countBit {

    static int count(int n)
    {
        if(n==0)
            return 0;
        else
            return (n & 1) + count(n>>1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        sc.close();

        System.out.println(count(n));

    

    }
}