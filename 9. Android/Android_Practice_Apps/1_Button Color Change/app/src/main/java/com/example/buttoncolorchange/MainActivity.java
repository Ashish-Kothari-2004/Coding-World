package com.example.buttoncolorchange;

import android.graphics.Color;
import android.os.Bundle;
import android.text.Layout;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends  AppCompatActivity{
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Button btn1 = findViewById(R.id.btn1);// Find R.java file in project
        Button btn2 = findViewById(R.id.btn2);
        Button btn3 = findViewById(R.id.btn3);
        LinearLayout myLayout = findViewById(R.id.main);

        btn1.setOnClickListener(new View.OnClickListener() { // OnClickListener is a functional interface and Here, you’re creating an anonymous inner class that implements the OnClickListener interface.
            @Override
            public void onClick(View view) {
                btn2.setBackgroundColor(Color.RED);
            }
        });
        btn2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                btn1.setBackgroundColor(Color.CYAN);
            }
        });
        btn3.setOnClickListener(new View.OnClickListener() {// Change the layout background color on button click
            @Override
            public void onClick(View view) {
                myLayout.setBackgroundColor(Color.YELLOW);
            }
        });

    }
}