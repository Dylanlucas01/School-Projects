import javax.swing.JOptionPane;

public class GasRemaining
{
    public static void main()
    {
        String gasS = JOptionPane.showInputDialog("How much gas is in your tank (in gallons)?");
        String mpgS = JOptionPane.showInputDialog("How many miles per gallon does your car get?");
        String distanceS = JOptionPane.showInputDialog("How far do you want to drive (in miles)?");
        
        double gas = Double.parseDouble(gasS);
        double mpg = Double.parseDouble(mpgS);
        double distance = Double.parseDouble(distanceS);
        //gas-distance/mpg=gas leftover
        double remG = gas-(distance/mpg);
        //gas*mpg-distance=miles leftover
        double remD = (gas*mpg)-distance;
        
        JOptionPane.showMessageDialog(null,"After starting with " +gas +" gallons, and driving for " +distance +" miles at " +mpg +" mpg there will be " +remG +" gallons remaining in the tank. That is enough for " +remD +" more miles.");
    }
}