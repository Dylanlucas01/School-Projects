import javax.swing.JOptionPane;

public class MAX
{
    public static void main()
    {
        String oneS = JOptionPane.showInputDialog("Enteer first integer");
        String twoS = JOptionPane.showInputDialog("Enter second integer");
        String threeS = JOptionPane.showInputDialog("Enter third integer");
        
        int one = Integer.parseInt(oneS);
        int two = Integer.parseInt(twoS);
        int three = Integer.parseInt(threeS);
        
        int m1 = Math.max(one,two);
        int m2 = Math.max(m1, three);
        
        JOptionPane.showMessageDialog(null, "The largest value of the data set " +one +", " +two +", and " +three +" is " +m2);
    }
}