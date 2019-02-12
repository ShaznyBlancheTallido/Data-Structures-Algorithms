public class Timestables{

  public static void main(String[] args) {
    System.out.println("Hello World");
    int n = 2;
    while (n <= 12) {
    printTimestables(n);
    n = n + 1; }
  }

 public static void printTimestables(int chicken) {
 System.out.println("This is the" + chicken + " times table:");
 int m = 1;
 while (m <= 12) {
 int a = chicken * m;
 System.out.println(chicken + " times " + m + " is " + a);
 m=m+1;
  }
  System.out.println();
}

}
