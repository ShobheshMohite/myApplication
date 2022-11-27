
final class Base
{

}
                                                /*Final3.java:7: error: cannot inherit from final Base
                                                    class derived extends Base
                                                  1 error */
class derived extends Base
{

}

class Final2
{
    public static void main(String A[])
    {
        Base demo = new derived();
        
    }
}
