package com.example.toolbar;

import android.os.Bundle;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.widget.Toolbar;

import java.util.Objects;

public class MainActivity extends AppCompatActivity {
    Toolbar toolbar;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        toolbar = findViewById(R.id.toolbar);

        // Step 1
        setSupportActionBar(toolbar);

        // Step 2
        Objects.requireNonNull(getSupportActionBar()).setDisplayHomeAsUpEnabled(true);
        toolbar.setTitle("New Toolbar");// First set the title attribute in XML file
        toolbar.setSubtitle("Sub Title");
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        new MenuInflater(this).inflate(R.menu.option_menu, menu);
        return super.onCreateOptionsMenu(menu);

    }

    @Override
    public boolean onOptionsItemSelected(@NonNull MenuItem item) {
        int itemId = item.getItemId();
        if (itemId == R.id.opt_new)
        {
            Toast.makeText(this, "Created new file", Toast.LENGTH_SHORT).show();
        }
        else if(itemId == R.id.opt_open)
        {
            Toast.makeText(this, "File Open", Toast.LENGTH_SHORT).show();
        }
        else if(itemId == R.id.opt_save)
        {
            Toast.makeText(this, "File Saved", Toast.LENGTH_SHORT).show();
        }
        else if(itemId == android.R.id.home)
        {
            super.onBackPressed();
        }
        return super.onOptionsItemSelected(item);

    }
}