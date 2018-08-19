import java.util.Scanner;

class basic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter an integer");
        int a = sc.nextInt();     
        System.out.println("The integer is "+a);

        /*The following call works perfectly because next() will skip over
        delimiter and return next token. The first input is integer and the
        newline. Integer is consumed by the nextInt() where next will skip
        over the newline as it is considered whitespace(delimiter). Then it
        returns next token which is the string until another delimiter is
        encountered. Note that when you enter a string with space it will
        throw an error as the word after the space will be consumed by
        next float.*/

        System.out.println("Enter a character");
        String s = sc.next();
        char c = s.charAt(0);
        System.out.println(c);

        System.out.println("Enter a float number");
        float g = sc.nextFloat();
        System.out.println(g);

        //The following nextLine is to consume the newline from previous input
        sc.nextLine();

        System.out.println("Enter a sentence");
        String str = sc.nextLine();
        System.out.println("String is "+str);
    }
}