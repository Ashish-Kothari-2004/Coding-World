package com.example.animation;

import android.os.Bundle;
import android.view.View;
import android.view.animation.Animation;
import android.view.animation.AnimationUtils;
import android.widget.Button;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView textAnim = findViewById(R.id.textAnim);

        Button btn1, btn2, btn3, btn4;
        btn1 = findViewById(R.id.scale);
        btn2 = findViewById(R.id.rotate);
        btn3 = findViewById(R.id.translate);
        btn4 = findViewById(R.id.alpha);

        btn1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Animation scale = AnimationUtils.loadAnimation(getApplicationContext(), R.anim.scale);
                textAnim.startAnimation(scale);
            }
        });
        btn2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Animation rotate = AnimationUtils.loadAnimation(getApplicationContext(), R.anim.rotate);
                textAnim.startAnimation(rotate);
            }
        });
        btn3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Animation translate = AnimationUtils.loadAnimation(getApplicationContext(), R.anim.translate);
                textAnim.startAnimation(translate);
            }
        });
        btn4.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Animation alpha = AnimationUtils.loadAnimation(getApplicationContext(), R.anim.alpha);
                textAnim.startAnimation(alpha);
            }
        });
    }
}