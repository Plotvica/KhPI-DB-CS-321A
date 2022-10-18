window.addEventListener("load", function (event) {
    let data = this.document.getElementById("result").innerText.split(" ");
    let spaned = data.map((e) => `<span>${e}</span>`);
    document.getElementById("result").innerHTML = spaned.join(" ");
});


document.getElementById("data").onkeyup = (event) => {
    ClearFounded();
    let example = event.target.value;
    let spans = document.getElementById("result").children
    if (example == "") {
        return
    }
    for (const i of spans) {
        if (i.innerHTML.includes(example)) {
            i.className = "find";
        }
    }
}

function ClearFounded() {
    for (const i of document.getElementById("result").children) {
        i.className = "";
    }
}


document.getElementById("stat").onclick=()=>{
    let spans = document.getElementById("result").children;
    let sum=0;
    Array.from(spans).forEach(e => {
        sum+=e.innerHTML.length;
    });
    alert(`Середня довжина слів ${Math.floor(sum/spans.length)} символів.`)

}