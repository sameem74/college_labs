public class Time {
    int hour;
    int minute;
    int second;
    Time (int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    Time ()
    {
        second = 0;
        minute = 15;
        hour = 9;
    }
    void display()
    {
        System.out.print("Time -->");
        System.out.print(hour+":");
        System.out.print(minute+":");
        System.out.println(second);
    }
}
class const3{
    public static void main(String args[]) {
        System.out.println("<---const3.java--->");
        Time t1 = new Time () ;
        t1.display();
        Time t2 = new Time(5,45,0);
        t2.display();
    }
}
