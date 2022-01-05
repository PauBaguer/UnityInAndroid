package com.example.rogelike_launcher;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;

import com.unity3d.player.UnityPlayerActivity;

public class RogeLikeLauncher extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_roge_like_launcher);
    }
    public void launchGameClick(View view) {
        Intent intent = new Intent(getApplicationContext(), UnityPlayerActivity.class);
        startActivity(intent);
    }
}