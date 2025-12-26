const getAllTasks = (req, res) => {
	res.send('Get all taksks');
};

const createTaks = (req, res) => {
	res.send('Create all task');
};

const getTask = (req, res) => {
	res.send('Get single task');
};

const updateTask = (req, res) => {
	res.send('Update Task');
};

const deleteTaks = (req, res) => {
	res.send('Delete task');
};

module.exports = {
	getAllTasks,
	createTaks,
	getTask,
	updateTask,
	deleteTaks,
};
