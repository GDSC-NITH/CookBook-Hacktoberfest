# Compose
So our app is divided into modules and modules in units.
Coupling is when we change cide in one module how much that causes changes in code of other modules: coupling needs to be minimized
Cohesion is how good uits of a module relate to each other: we wanna maximize it
Seperation of concern is grouping related code together as much as possible


Declarative: using already provided functions (more abstraction)
Like for email app icon we want to show a paper if there are unread messages, show a badge of number of unread messages
In imperative ui we use bunch of if-else block to manually describe how we want the ui to look
In declarative we use something like
```kotlin
@Composable
fun IconEnvelope(unreadMsgCnt){
    Envelope(paper = unreadMsgCnt > 0){
        Badge(text = "$count")
    }
}
```
We describe the ui with the given parameters
So we say what we wanna show not how(something is not usually imperative  or declarative but on a spectrum of these)

So with declarative ui we have to care about
  - when given data, what ui to show
  - how to respond to events
  - ~~how ui changes over time~~(the framework control how to handle the data state change)

Inheritance vs composition
  - one example  
ValidatedInput: Input
DateInput: ValidatedInput
DateRangeInput: ??
  - another example
FancyBox: View
TechForum: Forum
FancyTechForum: ??

Also composables have decomposition ability.
With the xml ui, views are updated by getters and setters for view properties being called. Composables on the other hand are modified by recalling the composable function(recomposition)
Under the hood, gap buffers are used. During recomposition the composables some components may not be redrawn, drawn in parallel. 
So keep composables idempotent and side effects free(Don't rely on variable modification in composable function, its also nit thread safe).
Pass data for composables as parameters and keep updation of variables out of composables



State
  - when state value changes recomposition is fone where  `state.value` is used
- `remember` helps you retain state across recompositions.
```kotlin
@Composable
fun HelloContent() {
   Column(modifier = Modifier.padding(16.dp)) {
       var name by remember { mutableStateOf("") }
       if (name.isNotEmpty()) {
           Text(
               text = "Hello, $name!",
               modifier = Modifier.padding(bottom = 8.dp),
               style = MaterialTheme.typography.h5
           )
       }
       OutlinedTextField(
           value = name,
           onValueChange = { name = it },
           label = { Text("Name") }
       )
   }
}
```
- `rememberSaveable` helps you retain state across recompositions and across configuration changes. 
- `rememberSaveable` automatically saves any value that can be saved in a Bundle. For other values, you can pass in a custom saver object.
  - parcelize the class
  - mapSaver
```kotlin
data class City(val name: String, val country: String)
val CitySaver = run {
    val nameKey = "Name"
    val countryKey = "Country"
    mapSaver(
        save = { mapOf(nameKey to it.name, countryKey to it.country) },
        restore = { City(it[nameKey] as String, it[countryKey] as String) }
    )
}
@Composable
fun CityScreen() {
    var selectedCity = rememberSaveable(stateSaver = CitySaver) {
        mutableStateOf(City("Madrid", "Spain"))
    }
}
```
  - listSaver
```kotlin
val CitySaver = listSaver<City, Any>(
    save = { listOf(it.name, it.country) },
    restore = { City(it[0] as String, it[1] as String) }
)
```


  - for others type of state observables, they must to changed to `State<T>` to use as state in composable for example
```kotlin
var state by liveData.observeAsState()
//Coroutine context can be passed in the delegate
val state: String by stateFlow.collectAsState()
```

  - A composable that uses `remember` to store an object creates internal state, making the composable stateful. 
  - state hoisting: pattern of moving state to a composable's caller to make a composable stateless. 
  - general pattern is to replace the state variable with two parameters:
      - value: T:
      - onValueChange: (T) -> Unit
  - state goes down, and events go up: is called a unidirectional data flow.

  - State holders/hoisted state objects manage logic and state of composables.
