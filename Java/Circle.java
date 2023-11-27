import sacco.*;
public class Circle implements Comparable<Circle>
{
    private int x,y,radius;
    private Color color;

    public Circle(int x, int y)
    {
        this.x = x;
        this.y = y;

        radius = (int)(Math.random()*180)+20;
        color = new Color((int)(Math.random()*256),(int)(Math.random()*256),(int)(Math.random()*256));

    }

    public int getX()
    {
        return x;
    }

    public int getY()
    {
        return y;    
    }

    public int getRadius()
    {
        return radius;
    }

    public Color getColor()
    {
        return color;
    }
    
    public int compareTo(Circle x)
    {
        return x.getRadius();
    }
}