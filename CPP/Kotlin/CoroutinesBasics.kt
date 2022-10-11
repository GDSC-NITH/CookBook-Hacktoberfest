import kotlinx.coroutines.*

fun main() = runBlocking {//Runs a new coroutine and blocks the current thread interruptibly until its completion.
    doWorld()
}

suspend fun doWorld() = coroutineScope {  //Creates a CoroutineScope and calls the specified suspend block with this scope.
    launch { //Launches a new coroutine without blocking the current thread and returns a reference to the coroutine as a Job.
        delay(1000L) //Delays coroutine for a given time without blocking a thread and resumes it after a specified time
        println("World!")
    }
    println("Hello")
}

/*
Output:
Hello
World!
*/
