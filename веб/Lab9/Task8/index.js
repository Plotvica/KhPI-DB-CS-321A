/* 
document.getElementById("start").onclick = () => {
    nIntervId = setInterval(() => {
        let idx = first.parentNode.id
        idx = Number(idx.replace("e", ""));
        idx!=3?idx++:idx=0;
        console.log(idx);
        document.getElementById(`e${idx}`).appendChild(first);
    }, 1000);
    document.getElementById("start").disabled = true;
} */
let square = document.getElementById("sq");
let coord = [[0, 0], [0, 50], [50, 50], [50, 0]]
let pos = 0;
let curr = [0, 0]
nIntervId = setInterval(() => {
    console.log(curr);
    switch (true) {
        case curr[1] < 50 && curr[0] == 0:
            square.style.marginTop = curr[1] + 1 + "%";
            curr[1]++
            break;
        case curr[0] < 50 && curr[1] != 0:
            square.style.marginLeft = curr[0] + 1 + "%";
            curr[0]++
            break;
        case curr[1] > 0:
            square.style.marginTop = curr[1] - 1 + "%";
            curr[1]--
            break;
        case curr[0] > 0:
            square.style.marginLeft = curr[0] - 1 + "%";
            curr[0]--
            break;

    }

}, 20);

