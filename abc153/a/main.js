const fs = require("fs");

const [h, a] = fs.readFileSync(0, "utf8").trim().split(" ").map(Number);
console.log(Math.floor((h + a - 1) / a));
