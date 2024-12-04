// R.java file : Android R.java is an auto-generated file by aapt (Android Asset Packaging Tool)
//               that contains resource IDs for all the resources of res/ directory. If you create
//               any component in the activity_main.xml file, id for the corresponding component is automatically
//               created in this file. This id can be used in the activity source file to perform any action
//               on the component.
//               Note: If you delete R.jar file, android creates it automatically.

package com.example.myfirstapp;
import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    private EditText editText;
    private TextView textView;
    private Button button;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        editText = findViewById(R.id.editTextNumber);
        textView = findViewById(R.id.textView3);
        button = findViewById(R.id.button);
        button.setOnClickListener(new View.OnClickListener(){
            public void onClick(View view){
                Toast.makeText(MainActivity.this, "Thank you for using this App", Toast.LENGTH_SHORT).show();
                String s = editText.getText().toString();
                int kg = Integer.parseInt(s);
                double pound = kg * 2.20462;
                textView.setText(String.format("The corresponding pound value is :%s", pound));
            }
        }
        );
        }
    }