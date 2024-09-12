package com.example.listviewandrecyclerview;

import android.os.Bundle;
import android.view.View;
import android.widget.Adapter;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.AutoCompleteTextView;
import android.widget.ListView;
import android.widget.Spinner;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

//  1.      This code is for ListView

//        ListView list = findViewById(R.id.list);
//        ArrayList <String>  arrNames = new ArrayList<>();
//        arrNames.add("Aman");
//        arrNames.add("Anuj");
//        arrNames.add("Ashish");
//        arrNames.add("Aditya");
//        arrNames.add("Arun");
//        arrNames.add("Adarsh");
//        arrNames.add("Ayush");
//        arrNames.add("Akshay");
//        arrNames.add("Rohan");
//        arrNames.add("Rohit");
//        arrNames.add("Rahul");
//        arrNames.add("Suraj");
//        arrNames.add("Samir");
//        arrNames.add("Sumit");
//        arrNames.add("Karan");
//        arrNames.add("Aman");
//        arrNames.add("Anuj");
//        arrNames.add("Ashish");
//        arrNames.add("Aditya");
//        arrNames.add("Arun");
//        arrNames.add("Adarsh");
//        arrNames.add("Ayush");
//        arrNames.add("Akshay");
//        arrNames.add("Rohan");
//        arrNames.add("Rohit");
//        arrNames.add("Rahul");
//        arrNames.add("Suraj");
//        arrNames.add("Samir");
//        arrNames.add("Sumit");
//        arrNames.add("Ashish");
//        arrNames.add("Aditya");
//        arrNames.add("Arun");
//        arrNames.add("Adarsh");
//        arrNames.add("Ayush");
//        arrNames.add("Akshay");
//        arrNames.add("Rohan");
//        arrNames.add("Rohit");
//        arrNames.add("Rahul");
//        arrNames.add("Suraj");
//        arrNames.add("Samir");
//        arrNames.add("Sumit");
//        arrNames.add("Karan");
//
//        ArrayAdapter <String> arrAdapter = new ArrayAdapter<String>(getApplicationContext(), android.R.layout.simple_list_item_1, arrNames);
//        list.setAdapter(arrAdapter);
//        list.setOnItemClickListener(new AdapterView.OnItemClickListener() {
//            @Override
//            public void onItemClick(AdapterView<?> adapterView, View view, int position, long l) {
//                if(position == 0){
//                    Toast.makeText(MainActivity.this, "Clicked First Item", Toast.LENGTH_SHORT).show();
//                }
//                else if (position == 1){
//                    Toast.makeText(MainActivity.this, "Clicked Second Item", Toast.LENGTH_SHORT).show();
//                }
//                else if (position == 2){
//                    Toast.makeText(MainActivity.this, "Clicked Third Item", Toast.LENGTH_SHORT).show();
//                }
//                else if(position == 3){
//                    Toast.makeText(MainActivity.this, "Clicked Fourth Item", Toast.LENGTH_SHORT).show();
//                }
//            }
//        });


//  2.    This code is for Spinner
//        Spinner spinner = findViewById(R.id.spinner);
//        ArrayList <String> arrIds = new ArrayList<>();
//        arrIds.add("Aadhar card");
//        arrIds.add("10th marksheet");
//        arrIds.add("12th marksheet");
//        arrIds.add("PAN card");
//
//        ArrayAdapter <String> idAdapter = new ArrayAdapter<String>(this, android.R.layout.simple_spinner_dropdown_item, arrIds);
//        spinner.setAdapter(idAdapter);


//  3.   This code is for AutoCompleteText
        AutoCompleteTextView search = findViewById(R.id.autoComplete);
        ArrayList <String> items = new ArrayList<>();
        items.add("Aadhaar card");
        items.add("10th mark sheet");
        items.add("12th mark sheet");
        items.add("PAN card");

        ArrayAdapter <String> itemsAdapter = new ArrayAdapter<String>(this, android.R.layout.simple_list_item_1, items);
        search.setAdapter(itemsAdapter);
        search.setThreshold(2);

    }
}