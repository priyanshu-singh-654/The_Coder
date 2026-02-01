public class ternaryop {
    public static void main(String[] args) {
        int number = 4;

        //ternary op
        String type = ((number%2) == 0) ? "even" : "odd";
        System.out.println(type);
    }
}
