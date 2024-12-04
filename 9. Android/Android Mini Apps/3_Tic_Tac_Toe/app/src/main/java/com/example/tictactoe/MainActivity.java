package com.example.tictactoe;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    int flag = 0;
    int count = 0;
    String b1, b2, b3, b4, b5, b6, b7, b8, b9;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void check(View view)
    {
        Button btn1 = findViewById(R.id.btn1);
        Button btn2 = findViewById(R.id.btn2);
        Button btn3 = findViewById(R.id.btn3);
        Button btn4 = findViewById(R.id.btn4);
        Button btn5 = findViewById(R.id.btn5);
        Button btn6 = findViewById(R.id.btn6);
        Button btn7 = findViewById(R.id.btn7);
        Button btn8 = findViewById(R.id.btn8);
        Button btn9 = findViewById(R.id.btn9);
        Button currentBtn = (Button) view;
        if (currentBtn.getText().toString().isEmpty()) {
            if (flag == 0) {
                currentBtn.setText("X");
                flag = flag + 1;
            } else {
                currentBtn.setText("O");
                flag = flag - 1;
            }
            count++;
            if (count >= 5) {
                b1 = btn1.getText().toString();
                b2 = btn2.getText().toString();
                b3 = btn3.getText().toString();
                b4 = btn4.getText().toString();
                b5 = btn5.getText().toString();
                b6 = btn6.getText().toString();
                b7 = btn7.getText().toString();
                b8 = btn8.getText().toString();
                b9 = btn9.getText().toString();

                if (!b1.isEmpty() && b1.equals(b2) && b2.equals(b3)) {
                    Toast.makeText(this, "Winner is : " + b1, Toast.LENGTH_SHORT).show();
                    restart();
                } else if (!b4.isEmpty() && b4.equals(b5) && b5.equals(b6)) {
                    Toast.makeText(this, "Winner is : " + b4, Toast.LENGTH_SHORT).show();
                    restart();
                } else if (!b7.isEmpty() && b7.equals(b8) && b8.equals(b9)) {
                    Toast.makeText(this, "Winner is : " + b7, Toast.LENGTH_SHORT).show();
                    restart();
                } else if (!b1.isEmpty() && b1.equals(b4) && b4.equals(b7)) {
                    Toast.makeText(this, "Winner is : " + b1, Toast.LENGTH_SHORT).show();
                    restart();
                } else if (!b2.isEmpty() && b2.equals(b5) && b5.equals(b8)) {
                    Toast.makeText(this, "Winner is : " + b2, Toast.LENGTH_SHORT).show();
                    restart();
                } else if (!b3.isEmpty() && b3.equals(b6) && b4.equals(b9)) {
                    Toast.makeText(this, "Winner is : " + b3, Toast.LENGTH_SHORT).show();
                    restart();
                } else if (!b1.isEmpty() && b1.equals(b5) && b5.equals(b9)) {
                    Toast.makeText(this, "Winner is : " + b1, Toast.LENGTH_SHORT).show();
                    restart();
                } else if (!b3.isEmpty() && b3.equals(b5) && b5.equals(b7)) {
                    Toast.makeText(this, "Winner is : " + b3, Toast.LENGTH_SHORT).show();
                    restart();
                } else if (!b1.isEmpty() && !b2.isEmpty() && !b3.isEmpty() && !b4.isEmpty() && !b5.isEmpty() && !b6.isEmpty() && !b7.isEmpty() && !b8.isEmpty() && !b9.isEmpty()){
                    Toast.makeText(this, "Match Draw", Toast.LENGTH_SHORT).show();
                    restart();
                }
            }
        }
   }
   public void restart(){
       Button btn1 = findViewById(R.id.btn1);
       Button btn2 = findViewById(R.id.btn2);
       Button btn3 = findViewById(R.id.btn3);
       Button btn4 = findViewById(R.id.btn4);
       Button btn5 = findViewById(R.id.btn5);
       Button btn6 = findViewById(R.id.btn6);
       Button btn7 = findViewById(R.id.btn7);
       Button btn8 = findViewById(R.id.btn8);
       Button btn9 = findViewById(R.id.btn9);
       count = 0;
       flag = 0;
       btn1.setText("");
       btn2.setText("");
       btn3.setText("");
       btn4.setText("");
       btn5.setText("");
       btn6.setText("");
       btn7.setText("");
       btn8.setText("");
       btn9.setText("");
   }
}