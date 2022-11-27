//collections - collection of datastructures
//LinkedList Of String

import java.util.*;

class Collections2
{
    public static void main(String arg[])
    {
        LinkedList<String>lobj = new LinkedList<String>();

        lobj.add("Kapil");
        lobj.add("Aditya");
        lobj.add("Rohan");
        lobj.add("Rutik");
        lobj.add("Tejas");
        System.out.println("Elements Of Linked List Are : "+lobj);

        lobj.addFirst("Sandesh");
        System.out.println("Elements Of Linked List Are : "+lobj);

        lobj.addLast("Shobhesh");
        System.out.println("Elements Of Linked List Are : "+lobj);

        Iterator iobj = lobj.iterator();
        System.out.println("Data Using Iterator Is : ");
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }
        if(lobj.contains("Shobhesh"))
        {
            System.out.println("Shobhesh Is Present in The Linked List ");
        }
        else
        {
            System.out.println("Shobhesh Is Not Present in The Linked List ");
        }

        lobj.remove();
        System.out.println("Elements Of Linked List Are : "+lobj);

        lobj.remove(1);
        System.out.println("Elements Of Linked List Are : "+lobj);

        lobj.removeLast();
        System.out.println("Elements Of Linked List Are : "+lobj);

        System.out.println("Number Of In Elements : "+lobj.size());

        lobj.set(1,"Sneha");
        System.out.println("Elements Of Linked List Are : "+lobj);

        lobj.clear();
        System.out.println("Elements Of Linked List Are : "+lobj);
    }
}   