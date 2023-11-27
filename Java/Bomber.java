import sacco.*;
import sacco.Point;
public class Bomber extends AbstractPointSeeker
{
    WanderWorld myWorld = getWorld();
    Bomber(double x, double y)
    {
        super(x,y);    
    }

    @Override
    public void onArrival()
    {
        ImprovedWanderer d = new ImprovedWanderer(getX(), getY());
        d.setCharacterNumber(7);
        d.setScale(.6);
        d.setAutomation(false);
        //d.setState(STAND_DOWN);
        d.stand();
        randomizeDestination();
        WanderWorld myWorld = getWorld();
        myWorld.add(d);
    }
}