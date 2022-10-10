# HTML
Hypertext Markup Language, a standardized system for tagging text files to achieve font, colour, graphic, and hyperlink effects on World Wide Web pages.
## Tags in HTML
An HTML tag is a piece of markup language used to indicate the beginning and end of an HTML element in an HTML document. Some basic tags in html are : <head>, <body>,<br>, <a>.
But there are also some rare tags which can be very usefull in devlopment of any site.
### Some Rare Tags in HTML
| Tag  | Function|
|:----------|:------------------------|
|<cite>|It allows you to define the text inside the element as a reference.|
|<optgroup>|This tag is a great way to add a little definition between groups of options inside a select box.|
|<acronym>|This tag is a way to define or further explain a group of words|
|<address>|It allows you to semantically mark up addresses in HTML.|
|<label>| These tags are great for styling, and also allow you to make the caption clickable for the associated element.|
|<fieldset>| This tag draws a box around the elements within the fieldset. |
|<details>|The details tag is used to provide or hide more information about the content on a website.|
### Breif explanation of above tags
### 1. <cite>
All of us will be familiar with the <blockquote> tag, but did you know about <blockquote>'s little brother <cite>? <cite> allows you to define the text inside the element as a reference. Typically, the browser will render the text inside the <cite> tag in italics, but this can be changed with a touch of CSS.

The <cite> tag is really useful for citing bibliographic and other site references. Here's an example of how to use the cite tag in a paragraph:
```
<p>Github <cite>is a distributed version-control platform</cite> where users can collaborate on or adopt open source code projects,fork code , share ideas and more</p>
```
### output:
![image](https://user-images.githubusercontent.com/97960380/194769564-b3900eae-288a-464d-bd15-38aaaa53769f.png)

### 2. <optgroup>
The <optgroup> tag is a great way to add a little definition between groups of options inside a select box. This allows the select list to visually separate the items.

If you needed to group movie listings by time, for example, then it would look like this:
```
<label for="showtimes">Showtimes</label>
<select id="showtimes" name="showtimes"> 
    <optgroup label="1PM">
        <option value="titanic">Twister</option> 
        <option value="nd">Napoleon Dynamite</option> 
        <option value="wab">What About Bob?</option> 
    </optgroup> 
    <optgroup label="2PM">
        <option value="bkrw">Be Kind Rewind</option> 
        <option value="stf">Stranger Than Fiction</option> 
    </optgroup> 
</select>
```
### Output:
![image](https://user-images.githubusercontent.com/97960380/194769721-6311f274-8241-42ae-b294-5c1a5f03c1f0.png)
### 3. <acronym>
The <acronym> tag is a way to define or further explain a group of words. When you hover over text that has the <acronym> tag used, a box appears below with the text from the title tag. For example:
```
The microblogging site <code><acronym title="Founded in 2006"></code> Twitter</acronym> has recently struggled with downtimes.
```
### 4. <address>
The <address> tag is quite an obscure little tag, but that doesn't mean it isn't useful! As the name implies, <address> allows you to semantically mark up addresses in HTML. The nifty little tag will also italicize all of the data within the brackets, though the style can easily be changed through simple CSS.
```
<address>Glen Stansberry
1234 Web Dev Lane
Anywhere, USA
</address>
```
### 5. <label>
Form elements seem the easiest to forget when marking up a document. Of the form elements, one of the most forgotten is the <label> tag. Not only is it a quick way to note the label's text, but the <label> tag can also pass a "for" attribute to specify which element is to be given the label. These <label> tags are great for styling, and they also allow you to make the caption clickable for the associated element.
```
<label for="username">Username</label>
<input id="username" type="text" />
```
### Output
![image](https://user-images.githubusercontent.com/97960380/194840662-b841c3ea-b3b9-4e9b-aca6-6466c21a74fc.png)
### 6. <fieldset>
Fieldset is a nifty little attribute that you can add to your forms to logically group form elements. Once applied, the <fieldset> tag draws a box around the elements within the fieldset. Bonus points for adding a <label> tag within the fieldset to define the title of the group.
```
<form><fieldset>
<legend>Are You Smarter Than a 5th Grader?</legend>
Yes <input name="yes" type="radio" value="yes" />

No <input name="no" type="radio" value="no" />
</fieldset>
</form>
```
### Output :
![image](https://user-images.githubusercontent.com/97960380/194840972-eaf394c3-0b50-4c54-8ccb-1165e0a862e6.png)

### 7.<details>
The details tag is used to provide or hide more information about the content on a website. It is used to create an interactive widget that the user can open or close. The content of the details tag is visible when opening the set attributes.

The details element is combined with the <summary> tag to create a headline that can be clicked to open or close the information you wish to learn more about.
```
p>
<p>I'm Ekansh Verma, a software developer who has more development experience in frontend building responsive website sites using these web technologies like Javascript, Vue Js, HTML and CSS, Bootstrap Tailwind CSS.</p>
</p>
<details>

  <summary>Click to read more about me</summary>

  <p>I love sharing how to use the latest technology tools to solve problems and my technical experience through an article.</p>
<
</details>
```
### Output:
![image](https://user-images.githubusercontent.com/97960380/194841634-37b64906-a4fd-4acc-9181-435d6b344a79.png)





