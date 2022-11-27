
interface Circle
{
    float PI = 3.14f;       //public static final char
    
    float Area(float Radius);       //public abstract method
    float Circumference(float Radius); //public abstract method
}

class Marevllous implements Circle
{
    public float Area(float Radius)
    {
        return PI * Radius *Radius;
    }
    public float Circumference(float Radius)
    {
        return 2 * PI * Radius;
    }
}
class interfaceDemo
{
    public static void main(String A[])
    {
        System.out.println("Value Of PI is :"+Circle.PI); //Demonstration Of Public And Static
 
        //Circle.PI = 7.13;     ////Demonstration Of Final
 
        Circle cobj = new Marevllous();
        float Ret = 0.0f;
 
        Ret = cobj.Area(10.3f);
        System.out.println("Area Is :"+Ret);
 
        Ret = cobj.Circumference(10.3f);
        System.out.println("Circumference Is :"+Ret);
    }
}