document.getElementById("add").onclick = () => {
    li = document.createElement("li");
    let arg = document.getElementById("arg").value;
    if (arg == "") {
        return
    }
    document.getElementById("arg").value = "";
    li.innerHTML = arg;
    document.getElementById("list").appendChild(li);
    document.getElementById("add").disabled = true;
}



document.getElementById("list").addEventListener("click", (event) => {
    let target = event.target;
    if (target.tagName != "LI") {
        return;
    }
    target.style.backgroundColor = "black";
    target.style.color = "white";
    target.className = "toRm"
    document.getElementById("rm").disabled = false;
});


document.getElementById("list").addEventListener("dblclick", (event) => {
    let target = event.target;
    if (target.tagName != "LI") {
        return;
    }
    target.className = "toEdit"
    document.getElementById("arg").value = target.textContent;
    document.getElementById("rm").disabled = true;
    document.getElementById("add").disabled = true;
    document.getElementById("sv").disabled = false;
});

document.getElementById("arg").onkeyup = () => {
    if (document.getElementById("arg").value == ""||document.getElementById("sv").disabled == false) {
        document.getElementById("add").disabled = true;
    } else {
        document.getElementById("add").disabled = false;
    }
}


document.getElementById("rm").onclick = () => {
    let l = document.getElementById("list").children;
    if (l == null) {
        return;
    }
    for (let item of l) {
        if (item.className == "toRm") {
            item.remove();
        }
    }
    document.getElementById("rm").disabled = true;
}

document.getElementById("sv").onclick = () => {
    let l = document.getElementById("list").children;
    if (l == null) {
        return;
    }
    for (let item of l) {
        if (item.className == "toEdit") {
            item.textContent = document.getElementById("arg").value;
            item.style.color="black";
            item.style.backgroundColor="white";
            item.className="";
        }
    }
    document.getElementById("sv").disabled = true;
}
