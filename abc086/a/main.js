const fs = require("fs");
const [a, b] = fs.readFileSync(0, "utf8").trim().split(" ").map(Number);
console.log(a * b % 2 === 0 ? "Even" : "Odd");
