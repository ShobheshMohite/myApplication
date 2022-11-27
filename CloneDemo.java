
class Employee implements Cloneable
{
    public int Eid;
    public String Name;
    public int Salary;

    public Employee(int No,String str,int Value)
    {
        this.Eid = No;
        this.Name = str;
        this.Salary = Value;
    }

    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }

}
class CloneDemo
{
    public static void main(String A[])
    {
        try
        {
            Employee eobj1 = new Employee(101,"Rahul",13000);
            Employee eobj2 = (Employee)eobj1.clone();   //(---typecasting--)eobj1.clone() -> return value is Object of clone method

            System.out.println("Name Of The First Employee   : "+eobj1.Name);
            System.out.println("Name Of The Second Employee  : "+eobj2.Name);

            System.out.println("Salary Of The First Employee : "+eobj1.Salary);
            System.out.println("Salary Of The Second Employee: "+eobj2.Salary);

            eobj1.Name = "Sagar";
            eobj2.Salary = 20000;

            System.out.println("Name Of The First Employee   : "+eobj1.Name);
            System.out.println("Name Of The Second Employee  : "+eobj2.Name);
            System.out.println("------------------------------------------");

            System.out.println("Salary Of The First Employee : "+eobj1.Salary);
            System.out.println("Salary Of The Second Employee: "+eobj2.Salary);
        }
        catch(CloneNotSupportedException obj)
        {}    
    }

}