import java.io.*;

class BufferdInput
{
    public static void main(String Arr[])
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        System.out.println("Enter Your Name : ");
        String name  =bobj.readline();

        System.out.println("Enter Your Age : ");
        int Age  = Integer.parseInt(bobj.readline());


    }
}