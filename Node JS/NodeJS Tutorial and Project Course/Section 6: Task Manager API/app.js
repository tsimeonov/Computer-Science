const express = require('express');
const app = express();

const port = 5000;

// routes

app.get('/hello', (req, res) => {
	res.send('Task manager app');
});

// app.get("api/v1/tasks") => get all the tasks
// app.post("api/v1/tasks") => create a new task
// app.get("api/v1/tasks/:id") => get single tasks
// app.patch("api/v1/tasks/:id") => update task
// app.delete("api/v1/tasks/:id") => delete taks

app.listen(port, () => {
	console.log(`Server is listening on port ${port}....`);
});
