package com.example.myapplication

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView

class SecondActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_second)
        val name = intent.getStringExtra("USER")
        val textView2 = findViewById<TextView>(R.id.textView2)
        val msg = "$name , You will get free access for one month "
        textView2.text=msg
    }
}