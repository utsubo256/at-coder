const fs = require("fs");

const [n, a] = fs.readFileSync(0, "utf8").trim().split(/\s+/).map(Number);
console.log(n % 500 <= a ? "Yes" : "No");
