This approach doesn't abandon material theme color,typography etc. classes but adds extra classes for extra attribute. This sample is from an [app that I worked on](https://github.com/rahul-gill/android-client-mifos).

# Opacity values
```kotlin
object Alpha{
    const val low = 0.7f
    const val lowest = 0.4f
}
```

# Extra color attributes
```kotlin

class ColorsSchemeExtra(
    success: Color,
    onSuccess: Color,
    successContainer: Color,
    onSuccessContainer: Color,
    warning: Color,
    onWarning: Color,
    warningContainer: Color,
    onWarningContainer: Color,
    isLight: Boolean
) {
    var success by mutableStateOf(success)
        private set
    var onSuccess by mutableStateOf(onSuccess)
        private set
    var successContainer by mutableStateOf(successContainer)
        private set
    var onSuccessContainer by mutableStateOf(onSuccessContainer)
        private set
    var warning by mutableStateOf(warning)
        private set
    var onWarning by mutableStateOf(onWarning)
        private set
    var warningContainer by mutableStateOf(warningContainer)
        private set
    var onWarningContainer by mutableStateOf(onWarningContainer)
        private set
    var isLight by mutableStateOf(isLight)
        internal set

    fun copy(
        success: Color = this.success,
        onSuccess: Color = this.onSuccess,
        successContainer: Color = this.successContainer,
        onSuccessContainer: Color = this.onSuccessContainer,
        warning: Color = this.warning,
        onWarning: Color = this.onWarning,
        warningContainer: Color = this.warningContainer,
        onWarningContainer: Color = this.onWarningContainer,
        isLight: Boolean = this.isLight
    ): ColorsSchemeExtra = ColorsSchemeExtra(
        success,
        onSuccess,
        successContainer,
        onSuccessContainer,
        warning,
        onWarning,
        warningContainer,
        onWarningContainer,
        isLight
    )

    fun updateColorSchemeFrom(other: ColorsSchemeExtra) {
        success = other.success
        onSuccess = other.onSuccess
        successContainer = other.successContainer
        onSuccessContainer = other.onSuccessContainer
        warning = other.warning
        onWarning = other.onWarning
        warningContainer = other.warningContainer
        onWarningContainer = other.onWarningContainer
    }
}


/**
  The default values are defined somewhere
**/
fun lightColorSchemeExtra(
    success: Color = light_success,
    onSuccess: Color = light_onsuccess,
    successContainer: Color = light_successContainer,
    onSuccessContainer: Color = light_onsuccessContainer,
    warning: Color = light_warning,
    onWarning: Color = light_onwarning,
    warningContainer: Color = light_warningContainer,
    onWarningContainer: Color = light_onwarningContainer
): ColorsSchemeExtra = ColorsSchemeExtra(
    success,
    onSuccess,
    successContainer,
    onSuccessContainer,
    warning,
    onWarning,
    warningContainer,
    onWarningContainer,
    true
)

fun darkColorSchemeExtra(
    success: Color = dark_success,
    onSuccess: Color = dark_onsuccess,
    successContainer: Color = dark_successContainer,
    onSuccessContainer: Color = dark_onsuccessContainer,
    warning: Color = dark_warning,
    onWarning: Color = dark_onwarning,
    warningContainer: Color = dark_warningContainer,
    onWarningContainer: Color = dark_onwarningContainer
): ColorsSchemeExtra = ColorsSchemeExtra(
    success,
    onSuccess,
    successContainer,
    onSuccessContainer,
    warning,
    onWarning,
    warningContainer,
    onWarningContainer,
    false
)

internal val LocalColorSchemeExtra = staticCompositionLocalOf { lightColorSchemeExtra() }

val MaterialTheme.colorSchemeExtra: ColorsSchemeExtra
    @Composable
    @ReadOnlyComposable
    get() = LocalColorSchemeExtra.current
```

# Size values
```kotlin
@Immutable
data class Size(
    val thinLine: Dp = 1.dp,
    val iconSmall: Dp = 15.dp,
    val iconMedium: Dp = 24.dp,
    val iconLarge: Dp = 39.dp,
    val imageSmall: Dp = 64.dp,
    val imageMedium: Dp = 120.dp,
    val imageLarge: Dp = 170.dp,
    val cardSmall: Dp = 90.dp,
    val cardMedium: Dp = 180.dp,
    val cardLarge: Dp = 300.dp
)

internal val LocalSize = staticCompositionLocalOf { Size() }

val MaterialTheme.size: Size
    @Composable
    @ReadOnlyComposable
    get() = LocalSize.current
```

# Spacing values
```kotlin
@Immutable
data class Spacing(
    val screenHorizontalPadding: Dp = 8.dp,
    val screenVerticalPadding: Dp = 8.dp,
    val marginBetweenItemsSmallest: Dp = 4.dp,
    val marginBetweenItemsSmall: Dp = 8.dp,
    val marginBetweenItemsMedium: Dp = 16.dp,
    val marginBetweenItemsLarge: Dp = 20.dp,
    val marginBetweenSections: Dp = 48.dp,
    val fabPadding: Dp = 16.dp,
    val listBottomPadding: Dp = 100.dp,
    val cardInnerPaddingSmall: Dp = 8.dp,
    val cardInnerPaddingMedium: Dp = 14.dp,
    val cardInnerPaddingLarge: Dp = 20.dp,
    val betweenListItems: Dp = 16.dp
)

internal val LocalSpacing = staticCompositionLocalOf { Spacing() }

val MaterialTheme.spacing: Spacing
    @Composable
    @ReadOnlyComposable
    get() = LocalSpacing.current
```

# Typographt extra attributes
```kotlin

object TypographyExtra {

    val heading: TextStyle
        @Composable @ReadOnlyComposable get() = MaterialTheme.typography.headlineSmall
    val subHeading: TextStyle
        @Composable @ReadOnlyComposable get() = MaterialTheme.typography.titleMedium
    val mainFocusText
        @Composable @ReadOnlyComposable get() = MaterialTheme.typography.headlineSmall.copy(fontWeight = FontWeight.Bold)
    val bodyLarger
        @Composable @ReadOnlyComposable get() = MaterialTheme.typography.bodyLarge.copy(fontWeight = FontWeight.Bold)
    val body: TextStyle
        @Composable @ReadOnlyComposable get() = MaterialTheme.typography.bodyMedium
    val label: TextStyle
        @Composable @ReadOnlyComposable get() = MaterialTheme.typography.labelMedium.copy(
            MaterialTheme.colorScheme.onSurface.copy(
                alpha = Alpha.low
            )
        )
    val cardTitle: TextStyle
        @Composable @ReadOnlyComposable get() = MaterialTheme.typography.bodyLarge
    val cardSubtitle: TextStyle
        @Composable @ReadOnlyComposable get() = MaterialTheme.typography.bodyMedium.copy(
            MaterialTheme.colorScheme.onSurface.copy(
                alpha = Alpha.low
            )
        )
}

val MaterialTheme.typographyExtra: TypographyExtra
    @Composable
    @ReadOnlyComposable
    get() = TypographyExtra
```

# The final theme
```kotlin
private val LightColorPalette = lightColorScheme(
  //provide custom values through arguments
)

private val DarkColorPalette = darkColorScheme(
  //provide custom values through arguments
)


@Composable
fun MifosAndroidTheme(
    darkTheme: Boolean = isSystemInDarkTheme(),
    dynamicColor: Boolean = false,
    content: @Composable () -> Unit
) {
    val colorScheme = when {
        dynamicColor && Build.VERSION.SDK_INT >= Build.VERSION_CODES.S -> {
            val context = LocalContext.current
            if (darkTheme) dynamicDarkColorScheme(context) else dynamicLightColorScheme(context)
        }
        else -> if (darkTheme) DarkColorPalette else LightColorPalette
    }
    val colorSchemeExtra = if (darkTheme) darkColorSchemeExtra() else lightColorSchemeExtra()

    val rememberedColorScheme = remember {
        lightColorSchemeExtra()
    }.apply {
        updateColorSchemeFrom(colorSchemeExtra)
    }

    val rememberSize = remember { Size() }
    val rememberSpacing = remember { Spacing() }


    CompositionLocalProvider(
        LocalColorSchemeExtra provides rememberedColorScheme,
        LocalSize provides rememberSize,
        LocalSpacing provides rememberSpacing
    ) {
        MaterialTheme(
            colorScheme = colorScheme,
            content = content
        )
    }
}
```
