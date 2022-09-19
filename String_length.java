import java.util.Scanner;
public class String_length{
      public static void main(String args[]){
          Scanner sc_input = new Scanner(System.in); // sc_input is a object name for getting input
          
          String str = sc_input.next(); // To get input string and store string value in 'str'
          
          int len = str.length(); // length() is a method, which returns length of a string
          
          System.out.println(len); // print length of the string
      }
}
