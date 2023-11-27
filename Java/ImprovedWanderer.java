import sacco.*;
import sacco.Point;
public class ImprovedWanderer extends Wanderer
{
    public static final int UP=0;
    public static final int DOWN=1;
    public static final int LEFT=2;
    public static final int RIGHT=3;

    public ImprovedWanderer(double x,double y)
    {
        super(x,y);
    }

    public void run()
    {
        if(getState()==4)
        {
            setState(0);
        }
        else if(getState()==5)
        {
            setState(1);
        }
        else if(getState()==6)
        {
            setState(2);
        }
        else if(getState()==7)
        {
            setState(3);
        }
    }

    public void stand()
    {
        if(getState()==0)
        {
            setState(4);
        }
        else if(getState()==1)
        {
            setState(5);
        }
        else if(getState()==2)
        {
            setState(6);
        }
        else if(getState()==3)
        {
            setState(7);
        }
    }

    public void faceDirection(int dir)
    {
        if(isRunning()==true)
        {
            if(dir==UP)
            {
                setState(0);
            }
            else if(dir==DOWN)
            {
                setState(1);
            }
            else if(dir==LEFT)
            {
                setState(2);
            }
            else if(dir==RIGHT)
            {
                setState(3);
            }
        }
        else if(isRunning()==false)
        {
            if(dir==UP)
            {
                setState(4);
            }
            else if(dir==DOWN)
            {
                setState(5);
            }
            else if(dir==LEFT)
            {
                setState(6);
            }
            else  if(dir==RIGHT)
            {
                setState(7);
            }
        }
    }
}