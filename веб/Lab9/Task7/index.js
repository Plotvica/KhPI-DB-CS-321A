let first = document.getElementsByTagName("img")[0];
document.getElementById("start").onclick = () => {
    nIntervId = setInterval(() => {
        let idx = first.parentNode.id
        idx = Number(idx.replace("e", ""));
        idx!=3?idx++:idx=0;
        console.log(idx);
        document.getElementById(`e${idx}`).appendChild(first);
    }, 1000);
    document.getElementById("start").disabled = true;
}

document.getElementById("stop").onclick = () => {
    clearInterval(nIntervId)
    document.getElementById("start").disabled = false;
}

