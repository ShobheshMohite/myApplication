//Abstract class = 0 OR More abstract method
abstract class Arithmetic
{
    public int Addition(int No1,int No2)                //Concrete Method
    {
        return No1 + No2;
    }
    public abstract int Substraction(int No1 , int No2); //Abstract Method
}

class Marevllous extends Arithmetic
{
    public int Substraction(int No1 , int No2)
    {
        return No1 - No2;
    }

}

class AbstractDemo
{
    public static void main(String A[])
    {
        Marevllous mobj = new Marevllous(); 
        int Ret = 0;

        Ret = mobj.Addition(11,10);
        System.out.println("Addtion Is : "+Ret);

        Ret = mobj.Substraction(11,10);
        System.out.println("Addtion Is : "+Ret);
    }
}