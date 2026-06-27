const fs = require("fs");

const n = Number(fs.readFileSync(0, "utf8").trim());
console.log(Math.floor((n + 1) / 2));
