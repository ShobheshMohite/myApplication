import java.net.*;
import java.io.*;

public class server
{
    public static void main(String a[]) throws Exception
    {
        System.out.println("Server Application Is Running...");

        ServerSocket ss = new ServerSocket(2100);
        System.out.println("Server Is Running At Port No 2100 And Waiting For Client Request..");
        
        Socket s = ss.accept();
        System.out.println("Request Of Client Gets Accepted");

        PrintStream ps = new PrintStream(s.getOutputStream());

        BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

        String str1,str2;

        while((str1 = br1.readLine()) != null)
        {
            System.out.println("Client Says : "+str1);
            System.out.print("Enter Message For Client : ");
            str2 = br2.readLine();
            ps.println(str2);
        }   

    }
}