
class Base
{

        public int A ,B;
        public Base(int No1,int No2)
        {
                this.A = No1;
                this.B = No2;
        }
        public void fun()
        {
                System.out.println("Inside Base Fun");
                System.out.println("Value Of A From Fun :"+this.A);
        }
}

class derived extends Base
{
        public int X, Y;
        public derived(int No1 , int No2,int k ,int l)
        {
                super(k,l);     //1
                this.X = No1;
                this.Y = No2;       
        }

        public void gun()
        {
                System.out.println("Value Of A From gun method is : "+super.A);//2
                super.fun();    //3usecase
        }
}

class SuperDemo
{
        public static void main(String a[])
        {
                derived dobj = new derived(11,21,51,61);
                dobj.gun();
        }
}