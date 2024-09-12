package com.example.intentandbundlepassing;

import android.annotation.SuppressLint;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;


public class SecondActivity extends AppCompatActivity {
    @SuppressLint("SetTextI18n")
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_second);
        Intent fetchIntent = getIntent();
        String name = fetchIntent.getStringExtra("Username");
        String sec = fetchIntent.getStringExtra("Section");
        int roll = fetchIntent.getIntExtra("Roll No", 0);
        TextView details = findViewById(R.id.textView2);
        details.setText("NAME: " + name + "\nSECTION: " + sec + "\nROLL NO: " + roll);

    }
}