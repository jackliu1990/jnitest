# JNI 调用 C++库
## eclispe 新建java工程，如java文件夹
1、新建TestNativeCode.java，并创建sayHello方法
2、找到编译后的classes目录下，cmd进入到该目录,运行javah com.wwj.nativecode.TestNativeCode。生成C++头文件。
## Vs2012创建C++工程，如c++文件夹
1、在该工程下新建lib目录将com_wwj_nativecode_TestNativeCode，jni,jni_md的C++头文件拷贝当前目录下
2、配置附加目录，用于引用C++头文件
![](http://i.imgur.com/pAVrW4H.png)
>参考链接： http://blog.csdn.net/wwj_748/article/details/28136061

