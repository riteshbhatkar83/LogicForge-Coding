class program63
{   
    

    public static void main(String A[])
    {   
        Iteration iteration = new Iteration();
        iteration.Display();
    }
}

class Iteration
{
    
    public void Display()
    {
        int icnt = 0;

        for(icnt = 6; icnt <= 6 ; icnt--)               //infinite loop it is issue
        {
            System.out.println("Jay Ganesh...");
        }
    }
}

//56 che copy
//ctrl + c =>abbortion


