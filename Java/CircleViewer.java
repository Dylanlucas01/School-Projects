import sacco.*;

public class CircleViewer extends SaccoWindow
{
    private Circle[] circles;

    public CircleViewer(Circle[] myCircles)
    {
        circles = myCircles;
    }

    public void paintWindow(Canvas c)
    {
        for(int i=circles.length-1; i>=0; i--)
        {
            paintCircle(c,circles[i]);
        }
    }

    public void paintCircle(Canvas can, Circle circ)
    {
        int radius = circ.getRadius();
        int x = circ.getX();
        int y = circ.getY();
        Color color = circ.getColor();

        can.setColor(color);
        can.fillOval(x-radius,y-radius,2*radius,2*radius);

        can.setColor(Color.BLACK);
        can.drawOval(x-radius,y-radius,2*radius,2*radius);
    }

    public static void main()
    {
        Circle[] circs = new Circle[50];

        for(int i=0; i<circs.length; i++)
        {
            circs[i] = new Circle(250,250);
        }

        CircleViewer c = new CircleViewer(circs);
        c.setVisible(true);
    }

    public void onMousePress(MouseEvent m)
    {
        Sorter.selectionSort(circles);
    }
}