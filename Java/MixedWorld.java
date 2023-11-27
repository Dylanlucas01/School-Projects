import sacco.*;
public class MixedWorld extends WanderWorld
{

    public void onMousePress(MouseEvent m)
    {
        for(Wanderer w: getWanderers())
        {

           PointSeeker p = (PointSeeker)w;
           p.randomizeDestination();

        }
    }

    public static void main()
    {
        MixedWorld world = new MixedWorld();

        for(int i = 0; i < 40; i++)
        {
            int rand = (int)(Math.random()*2);
            if(rand == 0)
            {
                Bomber b = new Bomber(220,220);
                b.setCharacterNumber(1);         //All Bombers are Mega-Man
                b.randomizeDestination();
                world.add(b);
            }
            else 
            {
                PointSeeker p = new PointSeeker(220,220);
                p.setCharacterNumber(0);        //All PointSeekers are Mario
                p.randomizeDestination(); 
                world.add(p);
            }
        }

        world.launch();
    }

}