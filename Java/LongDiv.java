import javax.swing.JOptionPane;
public class LongDiv
{
    public static void main()
    {
        int dividend = getIntFromUser("Enter a Dividend");    
        int divisor =  getIntFromUser("Enter a Divisor");

        int quotient = getQuotient(dividend,divisor);
        int remainder = getRemainder(dividend,divisor);

        output("The quotient is "+quotient+" and the remainder is "+remainder);
    }

    public static int getIntFromUser(String prompt)
    {
        String str = JOptionPane.showInputDialog(prompt);
        int val = Integer.parseInt(str);
        return val;
    }

    public static int getQuotient(int divid, int divis)
    {
        return -1; //dummy return statement
    }

    public static int getRemainder(int divid, int divis)
    {
        return -1; //dummy return statement
    }

    public static void output(String outStr)
    {
        //no return statement needed for void methods
    }
}