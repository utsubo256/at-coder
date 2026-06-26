const fs = require("fs");

const [X, A, B] = fs.readFileSync(0, "utf8").trim().split(/\s+/).map(Number);
console.log((X - A) % B);
