import java.io.*;

class CreateFile
{
    public static void main(String A[]) throws Exception 
    {
        File fobj = new File("Marvellous.txt");

        if(fobj.createNewFile())
        {
            System.out.println("File Is Successfully Created");
        }
        else
        {
            System.out.println("File Is Not Successfully Created");
        }
    }
}