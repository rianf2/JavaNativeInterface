public class ExamplePatametersJNI
{
    static
    {
        System.load("/home/rian/Workspace/JavaNativeInterface/Parameters/libparameters.so");
    }

    public static void main(String [] args)
    {
        long sum = new ExamplePatametersJNI().sumIntegers(1, 1);
        String person = new ExamplePatametersJNI().sayHelloTo("John Doe", false);

        System.out.println(sum);
        System.out.println(person);
    }

    private native long sumIntegers(int first, int second);

    private native String sayHelloTo(String name, boolean isFemale);

}
