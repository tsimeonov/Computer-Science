// File and directory name

import { dirname } from 'path';
import { fileURLToPath } from 'url';

const _filename = fileURLToPath(import.meta.url);
const _dirname = dirname(_filename);

console.log(_filename);
console.log(_dirname);
