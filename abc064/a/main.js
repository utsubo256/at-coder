const fs = require("fs");

const [r, g, b] = fs.readFileSync(0, "utf8").trim().split(" ");
const n = [r, g, b].join("");
console.log(n % 4 === 0 ? "YES" : "NO");
