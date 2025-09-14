class test {
    int x;
    test(int x) {
        this.x = x;
    }
    static void access () {
        System.out.println("x = " + x);
    }
}
class Demo {
    public static void main(String[] args) {
        test obj1 = new test(50);
        test.access();
    }
}
