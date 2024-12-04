package com.example.checkbox;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.Toast;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        CheckBox ch1 = findViewById(R.id.id_burger);
        CheckBox ch2 = findViewById(R.id.id_pizza);
        CheckBox ch3 = findViewById(R.id.id_pasta);
        Button btn = findViewById(R.id.btn_submit);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                if(ch1.isChecked() && !ch2.isChecked() && !ch3.isChecked()){
                    Toast.makeText(MainActivity.this, "Selected food is Burger", Toast.LENGTH_SHORT).show();
                }
                if(ch2.isChecked() && !ch1.isChecked() && !ch3.isChecked()){
                    Toast.makeText(MainActivity.this, "Selected food is Pizza", Toast.LENGTH_SHORT).show();
                }
                if(ch3.isChecked() && !ch1.isChecked() && !ch2.isChecked()){
                    Toast.makeText(MainActivity.this, "Selected food is Pasta", Toast.LENGTH_SHORT).show();
                }

                if(ch1.isChecked() && ch2.isChecked() && !ch3.isChecked()){
                    Toast.makeText(MainActivity.this, "Selected food is Burger and Pasta", Toast.LENGTH_SHORT).show();
                }
                if(ch2.isChecked() && ch3.isChecked() && !ch1.isChecked()){
                    Toast.makeText(MainActivity.this, "Selected food is Pasta and Pizza", Toast.LENGTH_SHORT).show();
                }
                if(ch1.isChecked() && ch3.isChecked() && !ch2.isChecked()){
                    Toast.makeText(MainActivity.this, "Selected food is Burger and Pizza", Toast.LENGTH_SHORT).show();
                }
                if(ch1.isChecked() && ch2.isChecked() && ch3.isChecked()){
                    Toast.makeText(MainActivity.this, "Selected food is Burger, Pasta and Pizza", Toast.LENGTH_SHORT).show();
                }

            }
        });
    }
}