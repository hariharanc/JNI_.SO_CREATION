package com.hello.jni;

import android.content.Context;

/**
 * Created by hariharan on 14-07-2017.
 */

public class JniUtil {

    private Context mContext;

    public JniUtil(Context mContext){
        this.mContext=mContext;
    }

    public  String getString(){
       return sayHello();
    }

    static {
        System.loadLibrary("cbsnative-lib");
    }

    //public native String stringFromJNI();

    private native String sayHello();
}
