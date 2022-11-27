
class ArrayDemo 
{
        public static void main(String arg[])
        {
                int Arr1[] = {10,20,30,40};
                //int Arr1[] = {10,20,30,40}; Explicite size not allowed

                int Arr3[] = new int[4];
                Arr3[0] = 10;
                Arr3[1] = 20; 
                Arr3[2] = 30;
                Arr3[3] = 40;

                int Arr4[] = new int[]{10,20,30,40}; //Dynamic Memory Allocation
        }        
}