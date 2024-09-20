package com.example.recyclerview;
import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {
    ArrayList <ContactModel> arrContacts = new ArrayList<>();
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        RecyclerView recyclerView = findViewById(R.id.recyclerContact);
        recyclerView.setLayoutManager(new LinearLayoutManager(this));

        arrContacts.add(new ContactModel(R.drawable.a, "A", "9876543210"));
        arrContacts.add(new ContactModel(R.drawable.b, "B", "9876543210"));
        arrContacts.add(new ContactModel(R.drawable.c, "C", "9876543210"));
        arrContacts.add(new ContactModel(R.drawable.d, "D", "9876543210"));
        arrContacts.add(new ContactModel(R.drawable.e, "E", "9876543210"));
        arrContacts.add(new ContactModel(R.drawable.f, "F", "9876543210"));
        arrContacts.add(new ContactModel(R.drawable.g, "G", "9876543210"));
        arrContacts.add(new ContactModel(R.drawable.h, "H", "9876543210"));
        arrContacts.add(new ContactModel(R.drawable.i, "I", "9876543210"));
        arrContacts.add(new ContactModel(R.drawable.j, "J", "9876543210"));
        arrContacts.add(new ContactModel(R.drawable.k, "K", "9876543210"));
        arrContacts.add(new ContactModel(R.drawable.l, "L", "9876543210"));
        arrContacts.add(new ContactModel(R.drawable.m, "M", "9876543210"));
        arrContacts.add(new ContactModel(R.drawable.n, "N", "9876543210"));
        arrContacts.add(new ContactModel(R.drawable.o, "N", "9876543210"));

        RecyclerContactAdapter adapter = new RecyclerContactAdapter(this, arrContacts);
        recyclerView.setAdapter(adapter);
    }
}