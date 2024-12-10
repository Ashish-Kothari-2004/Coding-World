package com.example.sqlitecrudoperation;

import android.database.sqlite.SQLiteDatabase;
import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        MyDB db = new MyDB(this);
        SQLiteDatabase database = db.getWritableDatabase();
        db.addContact("Rahul", "9876543210");
        db.addContact("Rohit", "9876543210");
        db.addContact("Karan", "9876543210");
    }
}