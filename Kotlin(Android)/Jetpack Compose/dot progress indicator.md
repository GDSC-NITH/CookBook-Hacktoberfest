# Preview:

![ezgif com-gif-maker](https://user-images.githubusercontent.com/76812499/172554676-5b740379-20fc-44a1-8c07-d0af019bfd2d.gif)

# Code:

```kotlin
@Composable
private fun LoadingDot(
    color: Color,
    modifier: Modifier = Modifier,
){
    Box(
        modifier = modifier
            .clip(shape = CircleShape)
            .background(color = color)
    )
}


@Composable
fun rememberDotAlphaState(
    dotIndex: Int,
    totalDots: Int,
    animationDurationMillis: Int
) = rememberInfiniteTransition().animateFloat(
    initialValue = 0f,
    targetValue = 1f,
    animationSpec = infiniteRepeatable(
        animation = tween(animationDurationMillis),
        repeatMode = RepeatMode.Reverse,
        initialStartOffset = StartOffset(offsetMillis = (animationDurationMillis/totalDots) * dotIndex)
    )
)




@Composable
private fun LoadingIndicator(
    modifier: Modifier = Modifier,
    color: Color = MaterialTheme.colors.onPrimary,
    indicatorSpacing: Dp = 16.dp,
    indicatorSize: Dp = 20.dp,
    numberOfDots: Int = 3,
    animationDurationMillis: Int = 300
) {
    val dotAlphaStates = List(numberOfDots){
        rememberDotAlphaState(
            dotIndex = it,
            totalDots = numberOfDots,
            animationDurationMillis = animationDurationMillis
        )
    }

    Row(modifier = modifier, verticalAlignment = Alignment.CenterVertically) {
        repeat(numberOfDots) { index ->
            LoadingDot(
                modifier = Modifier
                    .padding(horizontal = indicatorSpacing)
                    .size(indicatorSize)
                    .alpha(dotAlphaStates[index].value),
                color = color,
            )
        }
    }
}
```
