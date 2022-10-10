# KOTLIN TIMEPICKER

Android TimePicker is a user interface control for selecting the time in either 24-hour format or AM/PM mode. It is used to ensure that users pick the valid time for the day in our application.

In android, TimePicker is available in two modes <br/>
1 Clock mode <br/>
2 Spinner mode.

## #XML Attributes for Time Picker:


|XML Attributes| Description                |
| :--------    | :------------------------- |
| android:id   | Used to uniquely identify the control. |
| android:timePickerMode |Used to specify the mode of TimePickerpicker(spinner or clock)|
| android:visibility|	Used to specify the visibility of the view.       |   
| android:background| Used to set background color of the Text View. | 
| android:padding| Used to set the padding from left, right, top and bottom. | 


## #TimePicker with Clock mode
### XML Code
```XML
<TimePicker
		android:id="@+id/timePicker"
		android:layout_width="wrap_content"
		android:layout_height="wrap_content"
		android:layout_centerHorizontal="true"/>
```
### Output:
![image](https://user-images.githubusercontent.com/98453503/194740053-9308440d-6127-4ae0-a767-ff15f57a282c.png)

## #TimePicker with Spinner mode
### XML Code
```XML
<TimePicker
		android:id="@+id/timePicker1"
		android:layout_width="wrap_content"
		android:layout_height="wrap_content"
		android:layout_centerHorizontal="true"
		android:timePickerMode="spinner"/>


```
### Output:
![image](https://user-images.githubusercontent.com/98453503/194740084-d421348e-aab4-49b6-addc-6e17f84e3475.png)

# Accessing the TimePicker in Kotlin file(MainActivity.kt):

Now let's access the TimePicker that we have just created in the XML file and set the selected time in our app to a textView. We will also display the selected time as a toast message.
### CODE:
``` Kotlin
package com.app.timepicker

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.ViewGroup
import android.widget.*

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        val textView = findViewById<TextView>(R.id.textView)
        val timePicker = findViewById<TimePicker>(R.id.timePicker)

        //Setting on Time changed listener to the timepicker
        timePicker.setOnTimeChangedListener { _, hour, minute -> var hour = hour
            var am_pm = ""

            // AM_PM decider logic
            when {hour == 0 -> { hour += 12
                am_pm = "AM"
            }
                hour == 12 -> am_pm = "PM"
                hour > 12 -> { hour -= 12
                    am_pm = "PM"
                }
                else -> am_pm = "AM"
            }

            if (textView != null) {
                val hour = if (hour < 10) "0" + hour else hour
                val min = if (minute < 10) "0" + minute else minute

                // Getting time in correct format and saving it in a variable
                val msg = "Time is: $hour : $min $am_pm"

                // Setting the time in a textview
                textView.text = msg
                textView.visibility = ViewGroup.VISIBLE

                //Printing the time in a toast message
                Toast.makeText(this,msg,Toast.LENGTH_SHORT).show()
            }
        }
    }

    
}


```
## Output:
![image](https://user-images.githubusercontent.com/98453503/194776832-edc0ae12-ecbd-43cf-8516-c498986988af.png)




## Links for further reference:

[Official Documentation](https://developer.android.com/reference/kotlin/android/widget/TimePicker) <br/>
[GFG](https://www.geeksforgeeks.org/timepicker-in-kotlin/?ref=lbp)
























