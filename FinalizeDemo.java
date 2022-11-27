
class Demo
{
    int Size;
    int Arr[];

    public Demo(int No)
    {
        System.out.println("Inside Constructor");
        Size = No;
        Arr = new int[Size];
    }

    protected void finalize()
    {
        System.out.println("Inside Finalize Method");
        Arr = null;
    }
}

class FinalizeDemo
{
    public static void main(String A[])
    {
        Demo obj = new Demo(4);
        obj = null;     //dont Want That Object
        System.gc();    //Explicite Call To Garbage Collector
    }
}