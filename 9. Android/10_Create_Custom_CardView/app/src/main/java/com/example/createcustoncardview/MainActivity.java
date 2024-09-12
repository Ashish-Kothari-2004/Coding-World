package com.example.createcustoncardview;

import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;
import androidx.cardview.widget.CardView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
//      We can also set cardView attribute in java
        CardView myCardView = findViewById(R.id.MyCardView);
        myCardView.setCardElevation(8.0f);
        myCardView.setRadius(30.0f);
        myCardView.setUseCompatPadding(true);
    }
}