package com.example.radiobutton;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.RadioButton;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;


public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);
        RadioButton radioButton1 = findViewById(R.id.option1);
        RadioButton radioButton2 = findViewById(R.id.option2);
        Button btn = findViewById(R.id.result);
        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String ans = "Nothing Selected";
                if(radioButton1.isChecked())
                {
                    ans = radioButton1.getText().toString();
                } else if (radioButton2.isChecked()) {
                    ans = radioButton2.getText().toString();
                }
                if(ans.equals("JavaScript Object Notation")){
                    Toast.makeText(MainActivity.this, "Correct Answer", Toast.LENGTH_SHORT).show();
                } else{
                    Toast.makeText(MainActivity.this, "Wrong Answer", Toast.LENGTH_SHORT).show();
                }
            }
        });

    }
}