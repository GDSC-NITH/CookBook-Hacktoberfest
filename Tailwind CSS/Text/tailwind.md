# **Get started with Tailwind CSS**

<br>

Tailwind CSS works by scanning all of your HTML files, JavaScript components, and any other templates for class names, generating the corresponding styles and then writing them to a static CSS file.
<br>
<br>
It's fast, flexible, and reliable — with zero-runtime.

<br>

***
***

<br>

# **Installation**
<br>

***
<br>

### **Tailwind CLI**
The simplest and fastest way to get up and running with Tailwind CSS from scratch is with the Tailwind CLI tool. The CLI is also available as [a standalone executable](https://tailwindcss.com/blog/standalone-cli) if you want to use it without installing Node.js.

1. **Install Tailwind CSS**
<br>

Install `tailwindcss` via npm, and create your `tailwind.config.js` file.

```
npm install -D tailwindcss
npx tailwindcss init
```

2. **Configure your template paths**
<br>

Add the paths to all of your template files in your `tailwind.config.js` file.

```
/** @type {import('tailwindcss').Config} */
module.exports = {
  content: ["./src/**/*.{html,js}"],
  theme: {
    extend: {},
  },
  plugins: [],
}
```

3. **Add the Tailwind directives to your CSS**

<br>

Add the `@tailwind` directives for each of Tailwind’s layers to your main CSS file.

```
@tailwind base;
@tailwind components;
@tailwind utilities;
```

4. **Start the Tailwind CLI build process**

<br>

Run the CLI tool to scan your template files for classes and build your CSS.

```
npx tailwindcss -i ./src/input.css -o ./dist/output.css --watch
```

5. **Start using Tailwind in your HTML**

<br>

Add your compiled CSS file to the `<head>` and start using Tailwind’s utility classes to style your content.

```
<!doctype html>
<html>
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link href="/dist/output.css" rel="stylesheet">
</head>
<body>
  <h1 class="text-3xl font-bold underline">
    Hello world!
  </h1>
</body>
</html>
```

<br>

***
<br>

### **Using PostCSS**

Installing Tailwind CSS as a PostCSS plugin is the most seamless way to integrate it with build tools like webpack, Rollup, Vite, and Parcel.

1. **Install Tailwind CSS**

<br>

Install `tailwindcss` and its peer dependencies via npm, and create your `tailwind.config.js` file.

```
npm install -D tailwindcss postcss autoprefixer
npx tailwindcss init
```

2. **Add Tailwind to your PostCSS configuration**

<br>

Add `tailwindcss` and `autoprefixer` to your `postcss.config.js` file, or wherever PostCSS is configured in your project.

```
module.exports = {
  plugins: {
    tailwindcss: {},
    autoprefixer: {},
  }
}
```

3. **Configure your template paths**

<br>

Add the paths to all of your template files in your `tailwind.config.js` file.

```
/** @type {import('tailwindcss').Config} */
module.exports = {
  content: ["./src/**/*.{html,js}"],
  theme: {
    extend: {},
  },
  plugins: [],
}
```

4. **Add the Tailwind directives to your CSS**

<br>

Add the `@tailwind` directives for each of Tailwind’s layers to your main CSS file.

```
@tailwind base;
@tailwind components;
@tailwind utilities;
```

5. **Start your build process**

<br>

Run your build process with `npm run dev` or whatever command is configured in your `package.json` file.

```
npm run dev
```

6. **Start using Tailwind in your HTML**

<br>

Make sure your compiled CSS is included in the `<head>` (your framework might handle this for you), then start using Tailwind’s utility classes to style your content.

```
<!doctype html>
<html>
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link href="/dist/main.css" rel="stylesheet">
</head>
<body>
  <h1 class="text-3xl font-bold underline">
    Hello world!
  </h1>
</body>
</html>
```

<br>

***
<br>

### **Play CDN**

Use the Play CDN to try Tailwind right in the browser without any build step. The Play CDN is designed for development purposes only, and is not the best choice for production.

1. **Add the Play CDN script to your HTML**

<br>

Add the Play CDN script tag to the `<head>` of your HTML file, and start using Tailwind’s utility classes to style your content.

```
<!doctype html>
<html>
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <script src="https://cdn.tailwindcss.com"></script>
</head>
<body>
  <h1 class="text-3xl font-bold underline">
    Hello world!
  </h1>
</body>
</html>
```

2. **Try customizing your config**

<br>

Edit the `tailwind.config` object to [customize your configuration](https://tailwindcss.com/docs/configuration) with your own design tokens.

```
<!doctype html>
<html>
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <script src="https://cdn.tailwindcss.com"></script>
  <script>
    tailwind.config = {
      theme: {
        extend: {
          colors: {
            clifford: '#da373d',
          }
        }
      }
    }
  </script>
</head>
<body>
  <h1 class="text-3xl font-bold underline **text-clifford**">
    Hello world!
  </h1>
</body>
</html>
```

3. **Try adding some custom CSS**

<br>

Use `type="text/tailwindcss"` to add custom CSS that supports all of Tailwind's CSS features.

```
<!doctype html>
<html>
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <script src="https://cdn.tailwindcss.com"></script>
  <style type="text/tailwindcss">
    @layer utilities {
      .content-auto {
        content-visibility: auto;
      }
    }
  </style>
</head>
<body>
  <div class="lg:content-auto">
    <!-- ... -->
  </div>
</body>
</html>
```

4. **Try using a first-party plugin**

<br>

Enable first-party plugins, like forms and typography, using the `plugins` query parameter.

```
<!doctype html>
<html>
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <script src="https://cdn.tailwindcss.com?plugins=forms,typography,aspect-ratio,line-clamp"></script>
</head>
<body>
  <div class="prose">
    <!-- ... -->
  </div>
</body>
</html>
```

<br>

***
***

<br>


# **Editor Setup**

## Plugins and configuration settings that can improve the developer experience when working with Tailwind CSS. ##

<br><br>

## **Syntax support**

<br>

Tailwind CSS uses a lot of custom CSS at-rules like `@tailwind`, `@apply`, and `@screen`, and in many editors this can trigger warnings or errors where these rules aren’t recognized.

<br>

The solution to this is almost always to install a plugin for your editor/IDE for PostCSS language support instead of regular CSS.

<br>

If you’re using VS Code, our official [Tailwind CSS IntelliSense](https://marketplace.visualstudio.com/items?itemName=bradlc.vscode-tailwindcss) plugin includes a dedicated Tailwind CSS language mode that has support for all of the custom at-rules and functions Tailwind uses.

<br>

In some cases, you may need to disable native CSS linting/validations if your editor is very strict about the syntax it expects in your CSS files.

<br>

## **IntelliSense for VS Code**

<br>

The official [Tailwind CSS IntelliSense](https://marketplace.visualstudio.com/items?itemName=bradlc.vscode-tailwindcss) extension for Visual Studio Code enhances the Tailwind development experience by providing users with advanced features such as autocomplete, syntax highlighting, and linting.

<br>

<p align="center">
  <img src="https://tailwindcss.com/_next/static/media/intellisense.c22de782.png" alt="Text Widget Output" width="500" height="250">
</p>

<br>

- **Autocomplete.**

 Intelligent suggestions for class names, as well as [CSS functions and directives](https://tailwindcss.com/docs/functions-and-directives).

- **Linting.**

 Highlights errors and potential bugs in both your CSS and your markup.

- **Hover Previews.**

 See the complete CSS for a Tailwind class name by hovering over it.

- **Syntax Highlighting.**

 Provides syntax definitions so that Tailwind features are highlighted correctly.

<br>

Check out the project [on GitHub](https://github.com/tailwindcss/intellisense) to learn more, or [add it to Visual Studio Code](vscode:extension/bradlc.vscode-tailwindcss) to get started now.

<br>

## **Automatic class sorting with Prettier**

<br>

We maintain an official [Prettier plugin](https://github.com/tailwindlabs/prettier-plugin-tailwindcss) for Tailwind CSS that automatically sorts your classes following our [recommended class order](https://tailwindcss.com/blog/automatic-class-sorting-with-prettier#how-classes-are-sorted).

<br>

<p align="center">
  <img src="https://tailwindcss.com/_next/static/media/prettier-banner.79c40690.jpg" alt="Text Widget Output" width="500" height="220">
</p>

<br>

It works seamlessly with custom Tailwind configurations, and because it’s just a Prettier plugin, it works anywhere Prettier works — including every popular editor and IDE, and of course on the command line.

<br>

```
<!-- Before -->
<button class="text-white px-4 sm:px-8 py-2 sm:py-3 bg-sky-700 hover:bg-sky-800">...</button>

<!-- After -->
<button class="bg-sky-700 px-4 py-2 text-white hover:bg-sky-800 sm:px-8 sm:py-3">...</button>
```
<br>

Check out the plugin on [GitHub](https://github.com/tailwindlabs/prettier-plugin-tailwindcss) learn more and get started.

<br>

## **JetBrains IDEs**

<br>

JetBrains IDEs like WebStorm, PhpStorm, and others include support for intelligent Tailwind CSS completions in your HTML and when using `@apply`.

[**Learn more about Tailwind CSS support in JetBrains IDEs →**](https://www.jetbrains.com/help/webstorm/tailwind-css.html)

 

