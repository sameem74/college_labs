public class Time24 {
    int hour,minute,second;
    Time24 (int h, int m, int s)
    {
        hour = h ;
        minute = m ;
        second = s ;
    }
}
class Time12 extends Time24{
    String str;
    Time12(int h, int m, int s)
    {
        super(h,m,s);
        if(h>11) str = "PM" ;
        else str = "AM" ;
    }
}
class super1{
    public static void main(String args[ ])
    {
        System.out.println("<---super1java--->");
        Time12 t1 = new Time12(9,15,0);
        System.out.println(t1.str);
    };
}
