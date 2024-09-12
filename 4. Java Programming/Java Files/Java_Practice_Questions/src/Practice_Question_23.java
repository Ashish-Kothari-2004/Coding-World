/*
Problem Statement 23: Create a swing application using Applet and awt to add and subtract two numbers using TextField,
                      Label and Button.
 */


import java.awt.*;
import java.awt.event.*;
import java.applet.*;
public class Practice_Question_23 extends Applet implements ActionListener {
    Label l1, l2, l3;
    TextField t1, t2, t3;
    Button b1, b2;
    public void init()
    {
        l1 = new Label("Number 1:");
        t1 = new TextField(10);
        l2 = new Label("Number 2:");
        t2 = new TextField(10);
        l3 = new Label("Result:");
        t3 = new TextField(10);
        b1 = new Button("Add");
        b2 = new Button("Subtract");
        l1.setBounds(50, 50, 80, 20);
        t1.setBounds(150, 50, 80, 20);
        l2.setBounds(50, 100, 80, 20);
        t2.setBounds(150, 100, 80, 20);
        l3.setBounds(50, 150, 80, 20);
        t3.setBounds(150, 150, 80, 20);
        b1.setBounds(50, 200, 80, 20);
        b2.setBounds(150, 200, 80, 20);
        add(l1);
        add(t1);
        add(l2);
        add(t2);
        add(l3);
        add(t3);
        add(b1);
        add(b2);
        b1.addActionListener(this);
        b2.addActionListener(this);
        setLayout(null);
    }
    public void actionPerformed(ActionEvent e)
    {
        try {
            int num1 = Integer.parseInt(t1.getText());
            int num2 = Integer.parseInt(t2.getText());
            int result = 0;
            if (e.getSource() == b1) {
                result = num1 + num2;
            } else if (e.getSource() == b2) {
                result = num1 - num2;
            }
            t3.setText(String.valueOf(result));
        } catch (NumberFormatException ex) {
            t3.setText("Invalid input");
        }
    }
}