// imp133.java
interface std // std = standard
{
    void define ();
    void show ();
};
class money implements std{
    int rupee;
    int paise;
    public void init(int a, int b)
    {
        rupee =a; paise =b;
    };
    public void show()
    {
        System.out.println("Rs "+ rupee + "="+paise);
    };
    public void define (){ rupee =100; paise = 0;};
};
class imp133{
    public static void main(String args[ ])
    {
        //int total;
        money amt1= new money();
        money amt2= new money();
        System.out.println("---impl33.java---");
        amt1.init(20,30);
        amt2.define();
        System.out.println(amt1.rupee + " " + amt1.paise);
        System.out.println("amt2 is ");
        amt2.show();
    };
}