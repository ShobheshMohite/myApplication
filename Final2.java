
class Base
{
    public void fun()
    {
        System.out.println("Base Fun");
    }
    public final void gun()
    {
        System.out.println("Base final gun");
    }


}

class derived extends Base
{

    public void fun()
    {
        System.out.println("Derived Fun");
    }
    public void gun()
    {
        System.out.println("Derived gun");
    }
}

class Final2
{
    public static void main(String A[])
    {
        Base demo = new derived();
        
    }
}
