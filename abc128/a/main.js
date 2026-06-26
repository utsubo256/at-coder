const fs = require("fs");

const [a, p] = fs.readFileSync(0, "utf8").trim().split(" ").map(Number);
console.log(Math.floor((a * 3 + p) / 2));
