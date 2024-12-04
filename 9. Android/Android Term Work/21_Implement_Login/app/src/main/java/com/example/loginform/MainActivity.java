package com.example.loginform;
import androidx.appcompat.app.AppCompatActivity;
import android.database.sqlite.SQLiteDatabase;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    EditText e3,e4;
    Button b3;
    SQLiteDatabase db;
    String qry="";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        EditText e3 = findViewById(R.id.editText3);
        EditText e4 = findViewById(R.id.editText4);
        Button b3 = findViewById(R.id.button3);

        SQLiteDatabase db = openOrCreateDatabase("LOGINFORM",MODE_PRIVATE,null);
        db.execSQL("create table if not exists logindata(username varchar(20),password varchar(20))");

        b3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

                qry="insert into logindata values ('" + e3.getText().toString() + "','" + e4.getText().toString() +"')";

                try{

                    db.execSQL(qry);
                    Toast.makeText(getApplicationContext(),"DATA INSERTED",Toast.LENGTH_LONG).show();

                }
                catch(Exception e){}

            }
        });
    }
}