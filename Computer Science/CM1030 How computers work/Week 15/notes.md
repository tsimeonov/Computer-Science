### Lesson 15.0 Introduction

---

### Lesson 15.1 The Internet

<details>
  <summary>Internet Application Protocols</summary>

Internet communication relies on multiple protocol layers.
The `application layer` focuses on what data is send an how it's used. Common Internet applications like `email`, `web browsing` and `voice over IP (VoIP)` use different protocols.

- `Email` uses `SMTP` (to send) , `POP/IMAP` (to fetch) and may also use `HTTP` for webmail.
- `VoIP` (e.g Skype) offten starts with a server to connect usesr, then switches to peer-to-peer connection
- `Web browsing` uses `HTTP/HTTPS`, where browsers (clients) request pages from servers using `URL's`
- URLs are translated to IP addresses by the `DNS` protocol, which uses `UDP` die to its simple request-reply format.

</br>

</details>

</br>

---

### 15.2 The web

<details>
  <summary>Web servers</summary>

Web pages are delivered using the HTTP protocol, where `clients request` and `servers respond` with HTML.

Originallt, URL's pointed directly to `static HTML files` on a server.
Today, most websites are `dynamic`, meaning pages are generated on request using:

- `Templates` for layout and design
- `Databases` for content like titles or user progress
- `Assets` (e.g videos, images) stored as separate files.

Many modern websites use scripts (lik PHO) or `routing engines` to interpret URLs and create pages dynamically. The routing engines determines which template and data to use, and a `templating engine `builds the final HTML pagfe for the browser.

</br>

</details>

</br>
