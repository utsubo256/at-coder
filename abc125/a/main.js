const fs = require("fs");

const [a, b, t] = fs.readFileSync(0, "utf8").trim().split(" ").map(Number);
console.log(Math.floor(t / a) * b);
