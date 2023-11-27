import sacco.*;
import sacco.Point;
public abstract class AbstractPointSeeker extends ImprovedWanderer
{
    private Point dest = null;
    AbstractPointSeeker(double x, double y)
    {
        super(x,y);
        setAutomation(false);
    }

    public Point getDestination()
    {
        return dest;
    }

    public void setDestination(Point x)
    {
        dest=x;
    }

    @Override
    public void update()
    {
        super.update();

        if( dest == null)
            return;
        else if(getX()<dest.getX()-getSpeed()/2)
        {
            setState(RUN_RIGHT);
        }
        else if(this.getX()>dest.getX()+getSpeed()/2)
        {
            setState(RUN_LEFT);
        }
        else if(getY()<dest.getY()-getSpeed()/2)
        {
            setState(RUN_DOWN);
        }
        else if(getY()>dest.getY()+getSpeed()/2)
        {
            setState(RUN_UP);
        }
        else  
        {
            setXY(dest.getX(),dest.getY());
            setState(STAND_DOWN);
            dest=null;
        }
    }
    
    public abstract void onArrival();
    
    public void randomizeDestination()
    {
        
    }
}