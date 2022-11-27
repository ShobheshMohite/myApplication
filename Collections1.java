//collections - collection of datastructures
//LinkedList Of integer

import java.util.*;

class Collections1
{
    public static void main(String arg[])
    {
        LinkedList<Integer>lobj = new LinkedList<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);
        lobj.add(111);
        System.out.println("Elements Of Linked List Are : "+lobj);

        lobj.addFirst(1);
        System.out.println("Elements Of Linked List Are : "+lobj);

        lobj.addLast(121);
        System.out.println("Elements Of Linked List Are : "+lobj);

        Iterator iobj = lobj.iterator();
        System.out.println("Data Using Iterator Is : ");
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }
        if(lobj.contains(121))
        {
            System.out.println("121 Is Present in The Linked List ");
        }
        else
        {
            System.out.println("121 Is Not Present in The Linked List ");
        }

        lobj.remove();
        System.out.println("Elements Of Linked List Are : "+lobj);

        lobj.remove(1);
        System.out.println("Elements Of Linked List Are : "+lobj);

        lobj.removeLast();
        System.out.println("Elements Of Linked List Are : "+lobj);

        System.out.println("Number Of In Elements : "+lobj.size());

        lobj.set(1,500);
        System.out.println("Elements Of Linked List Are : "+lobj);

        lobj.clear();
        System.out.println("Elements Of Linked List Are : "+lobj);
    }
}