const fs = require("fs");

const [k, a, b] = fs.readFileSync(0, "utf8").trim().split(/\s+/).map(Number);
console.log(Math.floor((b / k)) * k >= a ? "OK" : "NG");
