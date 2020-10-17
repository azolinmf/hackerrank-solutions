import java.util.Scanner;
public class substring 
{

    public static String getSmallestAndLargest(String s, int k) 
    {
        String S=s;
        int c =k;
        int l= S.length();
        String smallest = S.substring(0,c);
        String largest ="";
        if(c!=l)
        {
            largest = S.substring(1,1+c);

            if(largest.compareTo(smallest)<0)
            {
                String ic = smallest;
                smallest =largest;
                largest =ic;
            }
            String d="";
            String e="";

            //welcometojava

            for(int i=2;i<=(l-c);i++)
            {
                d=S.substring(i,i+c);
                if(d.compareTo(smallest)<0)
                    smallest=d;
                if(d.compareTo(largest)>0)
                    largest=d;
            }
        }

        else
            largest = smallest;
        return smallest + "\n" + largest;
    }

    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();

        System.out.println(getSmallestAndLargest(s, k));
    }
}
