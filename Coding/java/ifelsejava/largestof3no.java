public class largestof3no {
    public static void main(String[] args) {
       
        int A = 1;
        int B = 3;
        int C = 6;
        
        if((A >= B) && (A >= C)) {
            System.out.println("A is greatest");
        }
        else if(B > C) {
            System.out.println("B is greatest");
        }
        else{
            System.out.println("C is greatest");
        }
    }
}
