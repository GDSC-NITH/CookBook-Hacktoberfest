# KOTLIN DATEPICKER

Android DatePicker is used to select the date by day, month and year in our android application. DatePicker is used to ensure that the users will select a valid date through an interactive interface.
In android DatePickers are of two modes
1 The complete calendar
2 Spinner view.

## #XML Attributes for Date Picker

|XML Attributes| Description                |
| :--------    | :------------------------- |
| android:id   | Used to uniquely identify the control. |
| android:datePickerMode |Used to specify the mode of datepicker(spinner or calendar) |
|  android:calendarTextColor| Used to specify the color of the text.       |
| android:calendarViewShown| Used to specify whether view of the calendar is shown or not. |
| android:background| Used to set background color of the Text View. |
| android:padding| Used to set the padding from left, right, top and bottom. |

## #DatePicker with complete Calendar mode

### XML Code

```XML
<DatePicker
        android:id="@+id/datePicker"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:datePickerMode="calendar" />
```

### Output

![image](https://user-images.githubusercontent.com/98453503/194721651-b06773c8-6958-4ada-8c15-0a85295a17ea.png)

## #DatePicker with Spinner mode

### XML Code

```XML
<DatePicker
 android:id="@+id/datePicker"
 android:layout_width="wrap_content"
 android:layout_height="wrap_content"
 android:datePickerMode="spinner"
 android:calendarViewShown="false"/>

```

### Output

![image](https://user-images.githubusercontent.com/98453503/194721761-a4bd84ac-5d60-45b3-90b4-2633e3faa93a.png)

## **Accessing the DatePicker in Kotlin file(MainActivity.kt)**

``` Kotlin
package com.opensource.app

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.*
import java.util.*

class MainActivity : AppCompatActivity() {
 override fun onCreate(savedInstanceState: Bundle?) {
  super.onCreate(savedInstanceState)
  setContentView(R.layout.activity_main)
  
    // Declaring variable to access DatePicker widget from xml file
  val datePicker = findViewById<DatePicker>(R.id.datePicker)
  
 //Getting the current date and storing it a variable
  val today = Calendar.getInstance()
  datePicker.init(today.get(Calendar.YEAR), 
                  today.get(Calendar.MONTH),
               today.get(Calendar.DAY_OF_MONTH)
  ) 
  
  //Displaing the selected date from the calendar in a toast
  { view, year, month, day ->
   val month = month + 1
   val message = "You Selected: $day/$month/$year"
   Toast.makeText(this@MainActivity, message, Toast.LENGTH_SHORT).show()
  }
 }
}
```

### Output

![image](https://user-images.githubusercontent.com/98453503/194723084-d147c217-d337-4129-acc2-3ff8004339ec.png)

## Links for further information

[Official Documentation](https://developer.android.com/reference/kotlin/android/widget/DatePicker)

[GFG](https://www.geeksforgeeks.org/datepicker-in-kotlin/)
