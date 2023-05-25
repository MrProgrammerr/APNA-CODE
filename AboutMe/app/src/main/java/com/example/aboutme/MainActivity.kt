package com.example.aboutme

import android.content.Context
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.view.inputmethod.InputMethodManager
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import androidx.databinding.DataBindingUtil
import com.example.aboutme.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    private val myName : MyName = MyName("Designed by CHANDAN\n\nWELCOME TO MY BIO")

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
//        setContentView(R.layout.activity_main)
//        val enter : Button = findViewById(R.id.enter_button)
//        enter.setOnClickListener {
//            mainLogic(it)
//        }
        /*
         *  find..id() takes a lot time as it executes at runtime
         *  Its solution is made by binding object that does same job during compile time and reduces the time
         *  That is done in the 1. build.Gradle(Module:app) 2. root layout set in xml and 3. above and below part
         *
         *  Same binding we can do for our datas (String.xml etc)
         *  First Make a kotlin class (MyName.kt) and define all the data member with there datatypes
         *  Then inside Layout we add <data> <variable ... /> </data>
         *  Then above and below
         */

        binding = DataBindingUtil.setContentView(this, R.layout.activity_main)
        binding.enterButton.setOnClickListener {
            mainLogic(it)
        }

        binding.myName = myName

    }

    private fun mainLogic(view: View) // View is needed as already output is set as gone and we have to show
    {
//        val userinp : EditText = findViewById(R.id.user_name)
//        val userout : TextView = findViewById(R.id.use_name_text)

//        userout.text= "Hello "+userinp.text + " !"
//        userinp.visibility = View.GONE
//        view.visibility = View.GONE
//        userout.visibility = View.VISIBLE

//        OR

//  //    binding.userNameText.text = "Hello " + binding.userName.text + " !"
//        binding.myName.username= binding.userName.text.toString()
//        binding.invalidateAll()  // Refreshes all the Bindings just to avoid anonymous error
//        binding.userName.visibility = View.GONE
//        binding.enterButton.visibility = View.GONE
//        binding.userNameText.visibility = View.VISIBLE
//        binding.myPhoto.visibility = View.VISIBLE
//        binding.scroll.visibility = View.VISIBLE

//        OR

        binding.apply {
//            userNameText.text = "Hi " + userName.text + " !"
            myName?.username= "Hi  "+userName.text.toString()+" !"
            invalidateAll()  // Refreshes all the Bindings just to avoid anonymous error
            userName.visibility = View.GONE
            enterButton.visibility = View.GONE
            userNameText.visibility = View.VISIBLE
            myPhoto.visibility = View.VISIBLE
            scroll.visibility = View.VISIBLE
        }

        val lmm = getSystemService(Context.INPUT_METHOD_SERVICE) as InputMethodManager // to hide keyboard on click
        lmm.hideSoftInputFromWindow(view.windowToken, 0)

    }

}