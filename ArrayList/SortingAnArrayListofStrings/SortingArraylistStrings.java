//ArrayList SortingAnArraylistofString 150pts Justin Hsu
import java.util.*;
import java.util.Random;
import java.util.Collections;
public class SortingArraylistStrings {
    public static void main( String[] args ) {
        Random r = new Random();
        ArrayList<String> str = new ArrayList<String>();
        str.add("ask");
        str.add("not");
        str.add("what");
        str.add("your");
        str.add("country");
        str.add("can");
        str.add("do");
        str.add("for");
        str.add("you");
        str.add("but");
        System.out.println("ArrayList Before: " + str);
        
        Collections.sort(str);
        System.out.println("ArrayList After: " + str);

    }

}
