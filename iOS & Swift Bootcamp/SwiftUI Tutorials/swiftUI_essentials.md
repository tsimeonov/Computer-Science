## SwiftUI essentials

### Section 1: Create a new project and explore the canvas

Step 1:
Open Xcode and either click "Create New Project" in Xcode's startup window, or choose File -> New -> Project.

Step 2:
In the template selector, select iOS as the platform, select the App template, and then click Next.

Step 3:
Enter "Landmarks" ase the product name, select "SwiftUI" for the interface and "Swift" for the language, and click NEXT Choose a location to save the Landmarks project on your Mac.

Step 4:
In the Project navigator, select `LandmarksApp`.

An app that uses the SwiftUI app life cycle has a structure that conforms to the App protocol. The structure's body property returns one or more scenes, which in turn provide content for display.
The @main attribute identifies the app's entry point.

Step 5:
In the Project navigator, select `ContentView`.

By default, SwiftUI view files declare a structure and a preview. The structure conforms to the View protocol and describes the view's content and layout. The preview declaration creates a preview for that view.

Step 6:
The canvas displays a preview automatically.

<span style="color: teal">Tip</span>

If the canvas isn't visible, select Editor > Canvas to show it.

Step 7:

Inside the body property, remove everything but the Text declaration and change "Hello, world!" to a greeting for yourself.

As you change the code in a view's body property, the preview updates to reflect your changes.

## Section 2: Customize the text view

Step 1:
Change the canvas mode to Selectable.
The canvas displays previews in Live mode by default so that you can interact with them, but you can use the Selectable mode to enable editing instead.

<img src="./img/section_2_step_1.png" style="border-radius:10px" width="400px"/>

Step 2:
In the prview, Command-Control-click the greeting to bring up the structured editing popover, and choose "Show SwiftUI Inspector".
The popover shows different attributes that you can customize, depanding on the type of view you inspect.

<img src="./img/section_2_step_2.png" style="border-radius:10px" width="400px"/>

Step 3:
Use the inspector to change the text to "Turtle Rock", the name of the first landmark you'll show in your app.

Step 4:
Change the Font modifier to "Title".
This applies the system font to the text so that it responds correctly to the user's preferred font sizes and settings.

Step 5:
Edit the code by hand to add the foregroundColor(.green) modifier; this changes the text color to green.

Step 6:
This time, open the inspector by Control-clicking on the Text declaration in the code editor, and then choose “Show SwiftUI Inspector” from the popover. Click the Color pop-up menu and choose Inherited to change the text color to black again.

Step 7:
Notice that Xcode updates your code automatically to reflect the changes, remove the foregroundColor(.green) modifier.

Step 8:
Set the preview back to Live mode.
Working in Live mode makes it easy to keep track of view behavior as you make edits in source.

## Section 3: Combine views using stacks

In this section, you'll use a vertical stack to place the title above a horizontal stack that contains details about the park.

Step 1:
Control-click the text view's initializer to show a context menu, and then choose "Embed in VStack"

Step 2:
Open the library by clicking the plus button (+) at the top-right of the Xcode window, and then drag a Text view to the place in your code immediately below the "Turtle Rock" text view.

<img src="./img/section_3_step_2.png" style="border-radius:10px" width="500px"/>

Step 3:
Replace the Text view's placeholder text with "Joshua Tree National Park"

Step 4:
Set the location's font to subheadline.

```swift
import SwiftUI

struct ContentView: View {
    var body: some View {
        VStack {
            Text("Turtle Rock")
            Text("Joshua Tree National Park").font(.subheadline)
        }
    }
}

#Preview {
    ContentView()
}
```

Step 5:
Edit the VSStack initializer to align the views by their leading edges.
By default, stacks center their contents along their axis and provide context-appropriate spacing.

```swift
VSta§ck (alignment: .leading) {
    Text("Turtle Rock")
    Text("Joshua Tree National Park").font(.subheadline)
}
```

Step 6:
Embed the "Joshua Tree National Park" text view in an HStack.

```swift
HStack {
    Text("Joshua Tree National Park").font(.subheadline)
}
```
