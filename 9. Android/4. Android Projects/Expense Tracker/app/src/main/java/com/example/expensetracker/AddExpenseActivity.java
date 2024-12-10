package com.example.expensetracker;


import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import androidx.appcompat.app.AppCompatActivity;

public class AddExpenseActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_add_expense);

        EditText expenseAmountEditText, expenseDescriptionEditText;
        expenseAmountEditText = findViewById(R.id.expenseAmountEditText);
        expenseDescriptionEditText = findViewById(R.id.expenseDescriptionEditText);
        Button saveExpenseButton = findViewById(R.id.saveExpenseButton);

        saveExpenseButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String description = expenseDescriptionEditText.getText().toString();
                double amount = Double.parseDouble(expenseAmountEditText.getText().toString());

                Intent returnIntent = new Intent(); // Create an Intent to hold data
                returnIntent.putExtra("description", description);
                returnIntent.putExtra("amount", amount);

                // Set the result with data and finish the activity
                setResult(RESULT_OK, returnIntent);
                finish();
            }
        });
    }
}

