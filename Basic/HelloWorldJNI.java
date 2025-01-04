public class HelloWorldJNI
{
    static
    {
        System.load("/home/rian/Workspace/JavaNativeInterface/Basic/libhello.so");
    }

    public static void main(String [] args)
    {
        new HelloWorldJNI().sayHello();
    }

    private native void sayHello();

}
