import javax.servlet.*;
import javax.servlet.http.*;
import java.io.*;
import java.util.*;

public class TestingServlet extends HttpServlet
{
     public void doGet(HttpServletRequest request,HttpServletResponse response)throws ServletException ,IOException
     {
          PrintWriter out = response.getWriter();
          out.println("<HTML>");
          out.println("<HEAD>");
          out.println("<TITLE> MARVELLOUS SERVLET </TITLE>");
          out.println("</HEAD>");
          out.println("<BODY>");
          out.println("Marvellous Infosystem");
          out.println("</BODY>");
          out.println("</HTML>");
     }
}