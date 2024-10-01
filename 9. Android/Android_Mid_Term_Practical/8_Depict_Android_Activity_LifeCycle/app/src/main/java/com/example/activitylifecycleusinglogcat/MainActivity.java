package com.example.activitylifecycleusinglogcat;

import android.os.Bundle;
import android.util.Log;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    public static final String status = MainActivity.class.getSimpleName();
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Log.e(status, "onCreate: Inside onCreate method");
    }

    @Override
    protected void onStart() {
        super.onStart();
        Log.e(status, "onStart: Inside onStart method");
    }

    @Override
    protected void onRestart() {
        super.onRestart();
        Log.e(status, "onRestart: Inside onRestart method");
    }

    protected void onResume() {
        super.onResume();
        Log.e(status, "onResume: Inside onResume method");
    }

    protected void onPause(){
        super.onPause();
        Log.e(status, "onResume: Inside onPause method");
    }

    @Override
    protected void onStop() {
        super.onStop();
        Log.e(status, "onStop: Inside onStop method");
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        Log.e(status, "onDestroy: Inside onDestroy method");
    }
}