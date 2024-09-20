package com.example.trafficlightsignal;

import android.os.Bundle;
import android.os.Handler;
import android.view.View;
import android.widget.Button;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    private View redLight, yellowLight, greenLight;
    private Button controlButton;
    private int lightIndex = 0;  // 0 -> Red, 1 -> Yellow, 2 -> Green
    private final Handler handler = new Handler();
    private boolean isRunning = false;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        redLight = findViewById(R.id.redLight);
        yellowLight = findViewById(R.id.yellowLight);
        greenLight = findViewById(R.id.greenLight);
        controlButton = findViewById(R.id.controlButton);

        controlButton.setOnClickListener(v -> {
            if (!isRunning) {
                isRunning = true;
                controlButton.setText("Stop Signal");
                changeLight();
            } else {
                isRunning = false;
                handler.removeCallbacksAndMessages(null);
                controlButton.setText("Start Signal");
                resetLights();
            }
        });
    }

    private void changeLight() {
        if (!isRunning) return;

        resetLights();

        switch (lightIndex) {
            case 0:
                redLight.setBackgroundColor(0xFFFF0000);  // Red
                break;
            case 1:
                yellowLight.setBackgroundColor(0xFFFFFF00);  // Yellow
                break;
            case 2:
                greenLight.setBackgroundColor(0xFF00FF00);  // Green
                break;
        }

        // Move to the next light
        lightIndex = (lightIndex + 1) % 3;

        // Schedule the next light change after 2 seconds
        handler.postDelayed(this::changeLight, 2000);
    }

    private void resetLights() {
        // Reset all lights to dim
        redLight.setBackgroundColor(0x88FF0000);
        yellowLight.setBackgroundColor(0x88FFFF00);
        greenLight.setBackgroundColor(0x8800FF00);
    }
}
