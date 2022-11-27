
class StaticDemo
{
        static
        {
                System.out.println("Value Of Static Block Of StaticDemo class which contains main");
        }
        public StaticDemo()
        {
                System.out.println("Inside Constructor of StaticDemo");
        }
        public static void main (String Arg[])
        {
                System.out.println("Inside Main");
                Demo.gun();
                System.out.println("Value Of Static No3 :"+Demo.No3);
                System.out.println("Value Of Static No4 :"+Demo.No4);

                Demo obj1 = new Demo();
                Demo obj2 = new Demo();

                obj1.fun();
                obj2.gun();
        }
}

class Demo
{
        public int No1;         //non-Static Char
        public int No2;         // Non-Static Char
        public static int No3;  //Static Char
        public static int No4;  //Static Char
        
        static
        {
                System.out.println("Inside Static Block");
                No3 = 11;
                No4 = 21;
        }
        public Demo()
        {
                System.out.println("Inside Constructor Block");       
                No1 = 51;
                No2 = 41;
        }
        public void fun()
        {
                //It Can Access All the Data i.e., Static & Non Static
                System.out.println("Inside Non - Static fun");
                System.out.println("Value of No1: "+this.No1);
                System.out.println("Value of No2: "+this.No2);
                System.out.println("Value of No3: "+this.No3);
                System.out.println("Value of No4: "+this.No4);
        }
        public static void gun()
        {
                //It Can't Access All the Data i.e., only Static can accessed 
                System.out.println("Inside Static Method gun");
                //System.out.println("Value of No1: "+No1);
                //System.out.println("Value of No2: "+No2);
                System.out.println("Value of No3: "+No3);
                System.out.println("Value of No4: "+No4);
        }

}
