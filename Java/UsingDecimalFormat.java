import java.text.DecimalFormat;
public class UsingDecimalFormat
{
    public static void main()
    {
        DecimalFormat df = new DecimalFormat();
        String cash = cashFormat(.5);
        System.out.println(cash);
    }

    public static String MMDDYY(int m, int d, int y)
    {
        DecimalFormat df = new DecimalFormat();
        df.setMinimumIntegerDigits(2);
        df.setMaximumIntegerDigits(2);
        String MM = df.format(m);
        String DD = df.format(d);
        String YY = df.format(y);
        return MM +"/" +DD +"/" +YY;
    }

    public static String cashFormat(double value)
    {
        DecimalFormat d = new DecimalFormat();
        d.setPositivePrefix("$");
        d.setNegativePrefix("$");
        d.setMinimumIntegerDigits(1);
        d.setMaximumFractionDigits(2);
        d.setMinimumFractionDigits(2);
        String val = d.format(value);
        return val;
    }
}