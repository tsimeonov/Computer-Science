const postContainer = document.getElementById('post-container');
const loading = document.querySelector('.loader');
const filter = document.getElementById('filter');

let limit = 5;
let page = 1;

// Fetch posts from API
async function getPosts() {
	const res = await fetch(
		`https://jsonplaceholder.typicode.com/posts?_limit=${limit}&_page=${page}`
	);

	const data = await res.json();

	return data;
}

// Show posts on DOM
async function showPosts() {
	const posts = await getPosts();

	posts.foreEach((post) => {
		const postEl = document.createElement('div');
		postEl.classList.add('post');
		postEl.innerHTML = `
			<div class="number">${post.id}</div>
			<div class="post-info">
				<h2 class="post-title">${post.title}</h2>
				<p class="post-body">${post.body}</p>
			</div>
		`;

		postContainer.appendChild(postEl);
	});
}

// Show loader & fetch more posts
function showLoading() {
	loading.classList.add('show');

	setTimeout(() => {
		loading.classList.remove('show');

		setTimeout(() => {
			page++;
			showPosts();
		}, 300);
	}, 1000);
}

// Filter posts by input
function filterPosts(e) {
	const term = e.target.value.upperCase();
	const posts = document.querySelectorAll('.post');

	posts.forEach((post) => {
		const title = post.querySelector('.post-title').innerText.toUpperCase();
		const body = post.querySelector('.post-body').innerText.toUpperCase();

		if (title.indexOf(term) > -1 || body.indexOf(term) > -1) {
			post.computedStyleMap.display = 'flex';
		} else {
			post.computedStyleMap.display = 'none';
		}
	});
}
