import java.util.Scanner;
class Multiplication_Table4{
public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
int num;
System.out.println("Enter the number: ");
num=sc.nextInt();
int i=1;
do{
System.out.println(num+"x"+i+"="+num*i);
 i++;
}while( i<=10);
}
   }

