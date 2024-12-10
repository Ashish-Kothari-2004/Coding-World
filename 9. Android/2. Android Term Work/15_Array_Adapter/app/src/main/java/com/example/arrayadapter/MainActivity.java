package com.example.arrayadapter;

import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        String nameList[] = {"Aiden", "Alexander", "Ethan", "Leo",
                "James", "Robert", "John", "David", "William", "Thomas", "Daniel", "Mark"};
        ListView nameListView = (ListView) findViewById(R.id.name_listView);

        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<String>(this, R.layout.name, R.id.name_textView, nameList);
        nameListView.setAdapter(arrayAdapter);
    }
}
