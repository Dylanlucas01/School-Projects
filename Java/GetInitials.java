import javax.swing.JOptionPane;

public class GetInitials
{
public static void main()
    {
      String name = JOptionPane.showInputDialog("Enter your full name");
      
      String fi = name.substring(0,1);
     
      int space1 = name.indexOf(" ");
      String midname = name.substring(space1+1);
      String mi = midname.substring(0,1);
      
      int space2 = midname.indexOf(" ");
      String lasname = midname.substring(space2+1);
      String li = lasname.substring(0,1);
      
      System.out.println("Your initals are: " +fi +"." +mi +"." +li +".");
    }
}
