public class invertedhalfpyramid {
    public static void inverted_half_puramid_no(int n) {
         for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n-i+1 ; j++){
                System.out.print(j+" ");
            }
            for(int k =1; k <= i; k++){
                System.out.print(" ");
            }
            System.out.println();
        }
    }
        public static void main(String[] args) {
            inverted_half_puramid_no(5);   

    }
}
