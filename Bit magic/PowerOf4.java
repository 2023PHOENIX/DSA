import java.util.*;


public class PowerOf4 {
    
    static int Ispow4(int n)
    {
        if(n==0)
            return 0;
        while(n!=1)
        {
            if(n%4!=0)
                return 0;
            n = n/4;

        }
        return 1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        sc.close();

        System.out.println(Ispow4(n));

        


    }
}
