package com.example.myapplication

import android.content.Context
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.View
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import android.widget.Toast

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        Log.i("MY-TAG","MainActivity : OnCreate")
        val greet = findViewById<TextView>(R.id.textView)
        val input = findViewById<EditText>(R.id.editTextName)
        val submit = findViewById<Button>(R.id.button1)
        val next = findViewById<Button>(R.id.button2)
        var name = ""
        submit.setOnClickListener{
            name = input.text.toString()
            if(name=="")
            {
                next.visibility=View.INVISIBLE
                Toast.makeText(
                    this,
                    "Empty Text",
                    Toast.LENGTH_SHORT
                ).show()
                greet.text= "Hello From Android!"
            }
            else {
                val message = "Welcome $name"
                Log.i("MY-TAG",message)
                greet.text = message
                Log.i("MY-TAG","After displaying the message in text View")
                input.text.clear()
                next.visibility=View.VISIBLE
            }
        }
        next.setOnClickListener {
            val intent = Intent(this,SecondActivity::class.java)
            intent.putExtra("USER",name)
            startActivity(intent)
        }
    }
}