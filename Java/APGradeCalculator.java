import javax.swing.JOptionPane;

public class APGradeCalculator
{
    public static void main()
    {
        String testPES = JOptionPane.showInputDialog("How many points earned in test?");
        String testTPES = JOptionPane.showInputDialog("Out of how many points possible?");
        String classPES = JOptionPane.showInputDialog("How many points earned in classwork?");
        String classTPES = JOptionPane.showInputDialog("Out of how many points possible?");
        
        double testPE = Double.parseDouble(testPES);
        double testTPE = Double.parseDouble(testTPES);
        double classPE = Double.parseDouble(classPES);
        double classTPE = Double.parseDouble(classTPES);
        
        double testP = (testPE/testTPE)*100;
        double classP = (classPE/classTPE)*100;
        double total = (testP*.60)+(classP*.40);
        
        JOptionPane.showMessageDialog(null,"Your AP grade is " +total +"%");
    }
}