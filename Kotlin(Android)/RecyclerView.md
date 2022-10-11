
# **About Text RecyclerView**

[Click here to check in official docs about RecyclerView](https://developer.android.com/develop/ui/views/layout/recyclerview#:~:text=RecyclerView%20is%20the%20ViewGroup%20that,by%20a%20view%20holder%20object.)

RecyclerView is the ViewGroup that contains the views corresponding to your data.Displaying a list or grid of data is one of the most common UI tasks in Android. Lists vary from simple to very complex. A list of text views might show simple data, such as a shopping list. A complex list, such as an annotated list of vacation destinations, might show the user many details inside a scrolling grid with headers.

***

## The greatest benefit of RecyclerView is that it is very efficient for large lists

1. By default, RecyclerView only does work to process or draw items that are currently visible on the screen. For example, if your list has a thousand elements but only 10 elements are visible, RecyclerView does only enough work to draw 10 items on the screen. When the user scrolls, RecyclerView figures out what new items should be on the screen and does just enough work to display those items.
2. When an item scrolls off the screen, the item's views are recycled. That means the item is filled with new content as it scrolls onto the screen. This RecyclerView behavior saves a lot of processing time and helps lists scroll smoothly.
3. When an item changes, instead of redrawing the entire list, RecyclerView can update that one item. This is a huge efficiency gain when displaying long lists of complex items!

![RecyclerView Graphical Representation](/Kotlin(Android)/assets/image-2.png)

<!--  image 1  -->

***

## The adapter pattern

If you ever travel between countries that use different electric sockets, you probably know how you can plug your devices into foreign outlets by using an adapter. The adapter lets you convert one type of plug to another, which is really converting one interface into another.

The **adapter pattern** in software engineering uses a similar concept. This pattern allows the API of one class to be used as another API. RecyclerView uses an adapter to transform app data into something the RecyclerView can display, without changing how the app stores and processes the data. For the sleep-tracker app, you build an adapter that adapts data from the Room database into something that RecyclerView knows how to display, without changing the ViewModel

***

# Implementing a RecyclerView

![RecyclerView work-flow](/Kotlin(Android)/assets/image-3.png)

<!-- image 2 -->

## To display your data in a RecyclerView, you need the following parts

- Data to display.
- A RecyclerView instance defined in your layout file, to act as the container for the views.
- A layout for one item of data. If all the list items look the same, you can use the same layout for all of them, but that is not mandatory. The item layout has to be created separately from the fragment's layout, so that one item view at a time can be created and filled with data.
- A layout manager. The layout manager handles the organization (the layout) of UI components in a view.
- A view holder. The view holder extends the ViewHolder class. It contains the view information for displaying one item from the item's layout. View holders also add information that RecyclerView uses to efficiently move views around the screen.
- An adapter. The adapter connects your data to the RecyclerView. It adapts the data so that it can be displayed in a ViewHolder. A RecyclerView uses the adapter to figure out how to display the data on the screen.

![RecyclerView Graphical Representation](/Kotlin(Android)/assets/image-1.png)
