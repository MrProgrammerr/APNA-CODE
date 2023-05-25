package com.example.diceroller

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.ImageView
import android.widget.TextView
import android.widget.Toast
import java.util.Random

class MainActivity : AppCompatActivity() {
    lateinit var resultImage : ImageView  // Define ImageView type variable
    lateinit var resultText : TextView  // Define TextView type variable
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)//It Connects with activity_main.xml
        val rollButton : Button = findViewById(R.id.roll_button)
        resultImage = findViewById(R.id.result_image)  // tools.src is used as a preview i.e not used in app
        // "app" namespace is to make the vector image compatible till API version 7 (Initial is 21) and src is changed to srcCompat
        // For this also we have added "vectorDrawables.useSupportLibrary = true" in gradle.build(:app)
        resultText = findViewById(R.id.result_text)
        rollButton.setOnClickListener {
            rollDice()
        }
    }
    private fun rollDice() {

//        val resultText : TextView = findViewById(R.id.result_text)
//        val resultImage : ImageView = findViewById(R.id.result_image)   // These 2 lines are Inefficient as initializes repeatedly

//        Toast.makeText(this, "Button Clicked", Toast.LENGTH_SHORT).show()

        val intvar = Random().nextInt(6)+1 // It will generate from "0 to 5" so we added '1'

        val resoursepath = when(intvar){
            1 -> R.drawable.dice_1
            2 -> R.drawable.dice_2
            3 -> R.drawable.dice_3
            4 -> R.drawable.dice_4
            5 -> R.drawable.dice_5
            else -> R.drawable.dice_6
        }
        resultText.text = intvar.toString() // Always should be in String Format
        resultImage.setImageResource(resoursepath)
    }
}