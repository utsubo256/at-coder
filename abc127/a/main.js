const fs = require("fs");

const [a, b] = fs.readFileSync(0, "utf8").trim().split(" ").map(Number);
if (a >= 13) {
    console.log(b);
} else if (a <= 5) {
    console.log(0);
} else {
    console.log(b / 2);
}
