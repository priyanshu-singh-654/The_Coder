import java.util.*;
public class parameters {
    public static void printhelloworld() {
       System.out.println("hello world"); 
    }
    public static int calculateSum(int num1 , int num2) {
        int Sum = num1 + num2;
        return Sum;
        
    }
    public static int calculatesubt(int a ,int b) {
        int subt = a - b;
        return subt;     
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        sc.close();
        int Sum = calculateSum(a,b);
        System.out.println("sum is : " + Sum);
        int subt = calculatesubt(a,b);
        System.out.println("the subt is : " + subt);
    }
}
