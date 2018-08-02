import java.util.Scanner;

class basic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter an integer");
        int a = sc.nextInt();     
        System.out.println("The integer is "+a);

         System.out.println("Enter a character");
        String s = sc.next();
        char c = s.charAt(0);
        System.out.println(c);

        System.out.println("Enter a float number");
        float g = sc.nextFloat();
        System.out.println(g);
    }
}