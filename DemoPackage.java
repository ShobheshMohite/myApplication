import java.util.*;             //Inbuild Package

import Marvellous.Arithmetic;   //User-Defined Package

import Marvellous.PPA.loop;

class DemoPackage
{
        public static void main(String arr[])
        {
                Scanner sobj = new Scanner (System.in);

                System.out.println("Enter Fisrt Number");
                int iNo1 = sobj.nextInt();

                System.out.println("Enter Second Number");
                int iNo2 = sobj.nextInt();

                Arithmetic aobj = new Arithmetic(iNo1 , iNo2);

                int iResult = aobj.Addtion();
                System.out.println("Addition Is : "+iResult);

                iResult = aobj.Substraction();
                System.out.println("Substraction Is : "+iResult);

                loop lobj  = new loop();
                lobj.Display();

        }
}