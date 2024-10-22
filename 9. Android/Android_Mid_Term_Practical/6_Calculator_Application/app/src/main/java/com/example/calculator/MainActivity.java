package com.example.calculator;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;
public class MainActivity extends AppCompatActivity {
    // TextView to display the result
    TextView resultText;
    String currentOperator = "";
    String currentNumber = "";
    double operand1 = 0, operand2 = 0;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        resultText = findViewById(R.id.resultText);
        // Numeric buttons (0-9)
        int[] numberButtons = {R.id.btn0, R.id.btn1, R.id.btn2, R.id.btn3, R.id.btn4, R.id.btn5, R.id.btn6, R.id.btn7, R.id.btn8, R.id.btn9};
        // Set OnClickListener for numeric buttons
        for (int id : numberButtons) {
            findViewById(id).setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View view) {
                    Button button = (Button) view;
                    currentNumber += button.getText().toString();
                    resultText.setText(currentNumber);
                }
            });
        }
        // Operator buttons
        findViewById(R.id.btnAdd).setOnClickListener(new OperatorClickListener("+"));
        findViewById(R.id.btnSubtract).setOnClickListener(new OperatorClickListener("-"));
        findViewById(R.id.btnMultiply).setOnClickListener(new OperatorClickListener("*"));
        findViewById(R.id.btnDivide).setOnClickListener(new OperatorClickListener("/"));
        // Clear button
        findViewById(R.id.btnClear).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                currentNumber = "";
                currentOperator = "";
                operand1 = 0;
                operand2 = 0;
                resultText.setText("0");
            }
        });
        // Equal button to perform calculation
        findViewById(R.id.btnEqual).setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                if (!currentNumber.equals("") && !currentOperator.equals("")) {
                    operand2 = Double.parseDouble(currentNumber);
                    double result = 0;
                    switch (currentOperator) {
                        case "+":
                            result = operand1 + operand2;
                            break;
                        case "-":
                            result = operand1 - operand2;
                            break;
                        case "*":
                            result = operand1 * operand2;
                            break;
                        case "/":
                            if (operand2 != 0) {
                                result = operand1 / operand2;
                            } else {
                                resultText.setText("Error");
                                return;
                            }
                            break;
                    }
                    resultText.setText(String.valueOf(result));
                    currentNumber = "";
                    currentOperator = "";
                    operand1 = result;
                }
            }
        });
    }
    // Custom OnClickListener for operator buttons
    private class OperatorClickListener implements View.OnClickListener {
        private final String operator;
        OperatorClickListener(String operator) {
            this.operator = operator;
        }
        @Override
        public void onClick(View view) {
            if (!currentNumber.equals("")) {
                operand1 = Double.parseDouble(currentNumber);
                currentOperator = operator;
                currentNumber = "";
            }
        }
    }
}
