public class ApnaPattern2 {
    public static void main(String[] args) {
        int n = 20;
        // for(int i=0;i<=n-1;i++){
        //     for(int j=0;j<i;j++){
        //         System.out.print("  ");
        //     }
        //     for(int k=i;k<=n-1;k++){
        //         System.out.print("* " + "  ");
        //     }
        //     System.out.println("  ");
        // }
        // for(int i=n-1;i>=0;i--){
        //     for(int j=0;j<i;j++){
        //         System.out.print("  ");
        //     }
        //     for(int k=i;k<=n-1;k++){
        //         System.out.print("* " + "  ");
        //     }
        //     System.out.println("  ");
        // }
        for(int i=1;i<=n/2;i++){
            for(int j=1;j<=n/2-10+i-1;j++){
                System.out.print("  ");

            }
            for(int k=1;k<=n/2-i+1;k++){
                System.out.print("*   ");
            }
            System.out.println();
        }
        for(int i=n/2;i>=1;i--){
            for(int j=1;j<=n/2-10+i-1;j++){
                System.out.print("  ");

            }
            for(int k=1;k<=n/2-i+1;k++){
                System.out.print("*   ");
            }
            System.out.println();
        }
    }
}
