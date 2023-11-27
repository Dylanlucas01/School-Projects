import sacco.*;
import sacco.Point;
public class ContainedWanderer extends ImprovedWanderer
{
    public ContainedWanderer(double x, double y)
    {
       super(x,y);
    }
    
    @Override
    public void update()
    {
        super.update();
        //respond to center
        if(getX()+getWidth()<0)
        {
            setX(320);
            setY(320);
        }
        else if(getX()+getWidth()>640)
        {
            setX(320);
            setY(320);
        }
        else if(getY()+getHeight()<0)
        {
            setX(320);
            setY(320);
        }
        else if(getY()+getHeight()>640)
        {
            setX(320);
            setY(320);
        }
    }
}