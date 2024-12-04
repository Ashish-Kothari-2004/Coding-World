package com.example.bmi;

import android.annotation.SuppressLint;
import android.graphics.Color;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        EditText edt1 = findViewById(R.id.weight);
        EditText edt2 = findViewById(R.id.feet);
        EditText edt3 = findViewById(R.id.inch);
        TextView txt = findViewById(R.id.result);
        Button btn = findViewById(R.id.btn);
        LinearLayout background = findViewById(R.id.main);

        btn.setOnClickListener(new View.OnClickListener() {
            @SuppressLint("SetTextI18n")
            @Override
            public void onClick(View view) {
                int wt = Integer.parseInt(edt1.getText().toString());
                int ft = Integer.parseInt((edt2.getText().toString()));
                int in = Integer.parseInt(edt3.getText().toString());
                int totalInch = ft * 12 + in;
                double totalCm = totalInch * 2.53;
                double totalMeter = totalCm / 100;

                double bmi = wt/(totalMeter*totalMeter);
                if(bmi > 25){
                    txt.setText("You're Overweight !");
                    background.setBackgroundColor(Color.RED);

                } else if (bmi < 18) {
                    txt.setText("You're Underweight !");
                    background.setBackgroundColor(Color.YELLOW);
                } else {
                    txt.setText("You're Healthy");
                    background.setBackgroundColor(Color.GREEN);
                }
            }
        });
    }

}