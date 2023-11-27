public class Sorter
{
    //Helper method for selectionSort
    public static int indexOfLowest(Comparable[] arr, int startIndex)
    {
        int lowest = startIndex;
        for(int i = startIndex; i<arr.length;i++)
        {
            if(arr[lowest].compareTo(arr[i])>0)
            {
                lowest=i;
            }
        }
        return lowest;
    }

    //uses a selection sort to put the parameter array in order
    public static void selectionSort(Comparable[] arr)
    {
        for(int i = 0; i<arr.length;i++)
        {
            int index = indexOfLowest(arr,i);
            Comparable hold = arr[i];
            arr[i]=arr[index];
            arr[index]=hold;
        }
    }

    //returns the ‘greatest’ value in the array.  You should not change the order of the array to do so
    public static Comparable findGreatest(Comparable[] arr)
    {
        Comparable highest = arr[0];
        for(int i = 1; i<arr.length;i++)
        {
            if(arr[i].compareTo(highest)>0)
            {
                highest=arr[i];
            }
        }
        return highest;
    }

    //returns the ‘lowest’ value in the array  You should not change the order of the array to do so
    public static Comparable findLowest(Comparable[] arr)
    {
        Comparable lowest = arr[0];
        for(int i = 1; i<arr.length;i++)
        {  
            if((arr[i].compareTo(lowest))<0)
            {
                lowest=arr[i];
            }
        }
        return lowest;
    }

    public static void stringTest()
    {
        String[] strs = new String[20];

        for( int i =0; i < strs.length;i++)
        {
            int val = (int)(Math.random()*26)+65;
            strs[i] = (char)val+"";
        }

        System.out.println("Before sort: "+java.util.Arrays.toString(strs));
        System.out.println("Lowest Value: "+Sorter.findLowest(strs));
        System.out.println("Greatest Value: "+ Sorter.findGreatest(strs)); 
        System.out.println("Unchanged Array: "+java.util.Arrays.toString(strs));
        Sorter.selectionSort(strs);
        System.out.println("Sorted Array: "+java.util.Arrays.toString(strs)); 
    }

    public static void integerTest()
    {
        Integer[] ints = new Integer[10];

        for( int i =0; i < ints.length;i++)
        {
            ints[i] = new Integer((int)(Math.random()*100)); 
        }

        System.out.println("Before sort: "+java.util.Arrays.toString(ints));
        System.out.println("Lowest Value: "+Sorter.findLowest(ints));
        System.out.println("Greatest Value: "+ Sorter.findGreatest(ints)); 
        System.out.println("Unchanged Array: "+java.util.Arrays.toString(ints));
        Sorter.selectionSort(ints);
        System.out.println("Sorted Array: "+java.util.Arrays.toString(ints)); 
    }

    public static void doubleTest()
    {
        Double[] dubs = new Double[10];

        for( int i =0; i < dubs.length;i++)
        {
            dubs[i] = new Double(Math.random()*100); 
        }

        System.out.println("Before sort: "+java.util.Arrays.toString(dubs));
        System.out.println("Lowest Value: "+Sorter.findLowest(dubs));
        System.out.println("Greatest Value: "+ Sorter.findGreatest(dubs)); 
        System.out.println("Unchanged Array: "+java.util.Arrays.toString(dubs));
        Sorter.selectionSort(dubs);
        System.out.println("Sorted Array: "+java.util.Arrays.toString(dubs));
    }
}