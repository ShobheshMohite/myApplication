import javax.swing.*;
import java.awt.event.*;

class Calculator extends WindowAdapter
{
    public JFrame mainframe;

    public Calculator(int Widhth ,int Height, String Title)
    {
        mainframe = new JFrame(Title);
        mainframe.setSize(Widhth,Height);
        mainframe.setVisible(true);

        mainframe.addWindowListener(this);
    }

    public void windowClosing (WindowEvent obj)
    {
        System.exit(0);
    }
}

class Marvellous_Calculator
{
    public static void main(String arg[])
    {
        Calculator cobj = new Calculator(400,400,"Marvellous Calculator");
    }
}