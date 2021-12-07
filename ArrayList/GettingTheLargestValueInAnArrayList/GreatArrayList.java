// ArrayList GettingTheLargestValueInAnArrayList 100 ptsJustin Hsu
import java.util.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
public class GreatArrayList {
    public static void main (String[] args)  throws Exception{
        Random r = new Random();
        System.out.print("Array: ");
        ArrayList<Integer> list = new ArrayList<Integer>();
		for ( int i=0; i<10; i++ ) {
            list.add(1 + r.nextInt(100));
        }
			
        Integer max = Collections.max(list);
        System.out.println("ArrayList values : " + list);
        System.out.println("ArrayList max value : " + max);  
    }
}
