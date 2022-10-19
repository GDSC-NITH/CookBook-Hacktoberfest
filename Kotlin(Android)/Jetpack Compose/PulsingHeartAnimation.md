# Pulsing Heart Animation

Jetpack Compose provides powerful and extensible APIs that make it easy to implement various animations in your app's UI. So, here is a simple and cool animation for android using animations in Jetpack Compose.

[See Animations in Jetpack Compose](https://developer.android.com/jetpack/compose/animation)

## rememberInfiniteTransition
InfiniteTransition holds one or more child animations like Transition, but the animations start running as soon as they enter the composition and do not stop unless they are removed. You can create an instance of InfiniteTransition with rememberInfiniteTransition. Child animations can be added with animateColor, animatedFloat, or animatedValue. You also need to specify an infiniteRepeatable to specify the animation specifications.

Example:
```Kotlin
val infiniteTransition = rememberInfiniteTransition()
val color by infiniteTransition.animateColor(
    initialValue = Color.Red,
    targetValue = Color.Green,
    animationSpec = infiniteRepeatable(
        animation = tween(1000, easing = LinearEasing),
        repeatMode = RepeatMode.Reverse
    )
)

Box(Modifier.fillMaxSize().background(color))
```
## Requirement:
Need a smooth animation of Pulsing/Pumping Heart in Jetpack compose.💓

## Code:
```Kotlin
package //your package name here..

import androidx.compose.animation.core.*
import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.*
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Favorite
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp

@Composable//mark it aas composable function
fun PulsingHeart() {
    //change it according to your preference
    val initialPulseSize = 40f//heart pulse lower bound value
    val targetPulseSize = 50f//heart pulse upper bound value

    val infiniteTransition = rememberInfiniteTransition()//create a infinite transition object
    val pulseMagnitude by infiniteTransition.animateFloat(//start animating value for heart size
        initialValue = initialPulseSize,
        targetValue = targetPulseSize,
        animationSpec = infiniteRepeatable(//our animation in infinite
            animation = tween(500, easing = FastOutSlowInEasing),//tween animation for smoothness
            repeatMode = RepeatMode.Restart//(removable) as it is by default restart
        )
    )

    //just a simple layout to show the animation
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .height(55.dp),
        horizontalArrangement = Arrangement.Center
    ) {
        Image(
            modifier = Modifier
                .align(Alignment.CenterVertically)
                .height(pulseMagnitude.dp)//animate the size
                .width(pulseMagnitude.dp),//animate the size
            imageVector = Icons.Default.Favorite,
            contentDescription = "",
            colorFilter = ColorFilter.tint(color = Color.Red)
        )
    }
}
```

## Output:
![PulsingHeart-preview](https://user-images.githubusercontent.com/85388413/194552002-978d0734-1cc5-4b61-b70a-f7a68354b437.gif)

## Reference:
[Animation](https://developer.android.com/jetpack/compose/animation) | 
[rememberInfiniteTransition](https://developer.android.com/jetpack/compose/animation#rememberinfinitetransition) | 
[Compose](https://developer.android.com/jetpack/compose)
