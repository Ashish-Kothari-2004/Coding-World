package com.example.intentandbundlepassing;

import android.annotation.SuppressLint;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Button nextBtn = findViewById(R.id.nextBtn);
        nextBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent nextIntent = new Intent(MainActivity.this, SecondActivity.class);
                nextIntent.putExtra("Username", "Ashish");
                nextIntent.putExtra("Roll No", 17);
                nextIntent.putExtra("Section", "D1");
                startActivity(nextIntent);// Intent passing
            }
        });
    }
}