package edu.una.arisher.now;

import android.content.DialogInterface;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

import java.util.Date;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {
    Button but;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        //setContentView(R.layout.activity_main);
        but = new Button(this);
        but.setOnClickListener(this);
        but.setText("Click for Fun");
        setContentView(but);

    }
    @Override
    public void onClick(View v){
        updateTime();
    }
    private void updateTime(){
        Date dateobject = new Date();
        but.setText (dateobject.toString());

    }

}
