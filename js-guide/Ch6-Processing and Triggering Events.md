# 6.1 The concept of event-driven Programming

The principle of sending and responding to events is called `event-driven programming`.
After an event has been triggered, it's placed in an `event queue`, which ensures that events that were triggered first are also handled first. The `event` loop continuously checks whether there is a new event queue, and if there is, the corresponding event is forwarded to event `handlers`.

# 6.2 Responding to events

To trigger a function on user interactions within a web page, three steps are required.

1. Select the element on the page.
2. Specify the event that is to be caught.
3. Specify the function to be called.
