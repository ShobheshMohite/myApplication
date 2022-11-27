
class Demo
{
    public int No1;
    public int No2;

    public Demo(int a,int b)
    {
        No1 = a;
        No2 = b;
    }
}

class EqualsDemo
{
    public static void main(String A[])
    {
        String s1 = "Hello";
        String s2 = "Hello";
    
        System.out.println("Hashcode Of s1 :"+s1.hashCode()); //1100
        System.out.println("Hashcode Of s2 :"+s2.hashCode()); //1100
        if (s1.equals(s2))     // if("Hello" =equals= "Hello")
        {
            System.out.println("Objects Are Same");
        }
        else
        {
            System.out.println("Objects Are Different");
        }

        if (s1 == s2)       //if(1100 == 1100)
        {
            System.out.println("Objects Are Same");
        }
        else
        {
            System.out.println("Objects Are Different");
        }
    }
}