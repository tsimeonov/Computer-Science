import { defineConfig } from 'vite';
import react from '@vitejs/plugin-react';

// https://vite.dev/config/
export default defineConfig({
	plugins: [react()],
	server: {
		proxy: {
			'/api': {
				// Corrected the protocol to http://
				target: 'http://localhost:5000',
				// Optional: Add these if you encounter issues
				// changeOrigin: true, // Recommended for virtual hosted sites
				// secure: false,      // If your backend is not HTTPS
			},
		},
	},
});
