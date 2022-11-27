import java.net.*;
import java.io.*;

public class client
{
    public static void main(String A[]) throws Exception
    {
        System.out.println("Server Application Is Running...");

        Socket s = new Socket("localhost",2100);
        System.out.println("Client Is Waiting For The Server To Accept The Request");

        PrintStream ps = new PrintStream(s.getOutputStream());

        BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

        String str1,str2;

        while(!(str1 = br2.readLine()).equals("end"))
        {
            ps.println(str1);
            System.out.print("Enter Message For Server : ");
            str2 = br1.readLine();
            System.out.print("Server Says : "+str2);

        }
    }
}