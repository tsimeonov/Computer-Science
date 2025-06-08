### Lesson 4.1 Web applications

---

#### `Websites`

The `Internet` is the global network that connects computers, while the `World Wide Web` is a way of sharing information using that network, mainly through web pages viewed in browsers.
The web is just one part of the internet - others include email and video conferencing, which use different protocols.

A `webpage` is single document, and website is a collection of related pages.
Moders webistes arte far more than static pages- they are interactive, data-driven and constantly changing based on user actions.

#### `Networks and the web`

Modern webistes are complex, `networked applications` that rely on core computer science concepts like `networks, state, modularity and security`.
They operate over the `Internet`, using `clients` (like your browser) to sent HTTP requersts to servets, which respond with web pages.
Web communication uses protocols like `IP` and `HTTP`. A URL in a request includes the protocol, domain name and page location.
Web pages are often `dynamically generated` and sent in multiple packets, especially images ans text, which explains why texts may load before pictures on slow connections.

#### `Security and the web`

`Websites security `is crucial because web dat travels over the internet and can be intercepted or targeted by hackers. Websites often handle sensitive information like personal photos, banking details and business data.

To protect this information, websites use `HTTPs`, the secure version of HTTP, which encrypts all data sent between your browser and the server. You can recognize it by the "HTTPS" in the URL and the padlock icon in your browser.

Websites also use `access control`, requiring users to log in to access private information

#### `State and the web`

Webistes have `state`, which refers to changing conditions like the page you are on, whether you are logged in, or which products you've viewd.
This state affectsd how you interact with the site.
Interestingly, `web servers themselves are stateless` - they respond the same way to the same requests. The user's state is tracked mostly through cookies, ehich are small pieces of data stored in your browser. Cookies help websites remember login status, browsing history, and preferences

#### `Clients and servers`

`Modularity` is key to how websites work -built from many parts that work together. The main components are the `client` (your browser) and the `server` (which handles requests). Modern webistes don't store full page but `generate them dynamically` using:

- `Database` to store user date
- `Templates` with placeholders for content
- `HTML/CSS` for stucture and desing

The server fills templates with data from the database to create pages on demand.
