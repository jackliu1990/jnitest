package main;
import com.wwj.nativecode.TestNativeCode;

public class app {
	public static void main(String[] args) {  
	     // ���ض�̬���ӿ�  
	      System.loadLibrary("nativeCode");  
	      TestNativeCode nativeCode = new TestNativeCode();  
	      nativeCode.sayHello();   
	    }
}
