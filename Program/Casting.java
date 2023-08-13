public class Casting {
        public static void main(String args[]) {
            int i;
            float sum;
            sum = 0.0F;
            for (i = 1; i <= 10; i++) {
                sum = sum + 1 / (float) i;
                System.out.print("i = " + i);
                System.out.println(" Sum = " + sum);
    }
    }
}
    
