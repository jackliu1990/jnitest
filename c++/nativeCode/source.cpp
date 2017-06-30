#include<iostream>
#include "com_wwj_nativecode_TestNativeCode.h"
#include "windows.h"
using namespace std;

JNIEXPORT void JNICALL Java_com_wwj_nativecode_TestNativeCode_sayHello
	(JNIEnv *, jobject){
		cout<<"Hello world ÎÒÊÇÇÕÅå°¡°¡"<<endl; 
}