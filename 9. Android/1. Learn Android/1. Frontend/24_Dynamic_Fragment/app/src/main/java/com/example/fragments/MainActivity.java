package com.example.fragments;

import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;

import com.example.fragments.FragmentOne;
import com.example.fragments.R;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Load FragmentOne initially
        if (savedInstanceState == null) {
            getSupportFragmentManager().beginTransaction()
                    .replace(R.id.fragment_container, new FragmentOne())
                    .commit();
        }
    }
}