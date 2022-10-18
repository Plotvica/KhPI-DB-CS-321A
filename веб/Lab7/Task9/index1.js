document.getElementById("add").onclick = () => {
    tr = document.createElement("tr");
    let country = document.getElementById("country").value;
    let age = document.getElementById("age").value;
    let genre = document.getElementById("genre").value;
    let surname = document.getElementById("surname").value;
    let notes = document.getElementById("notes").value;
    if (country == "" || age == "" || genre == "" || surname == "") {
        alert("Заповніть усі поля!");
        return;
    }
    tr.innerHTML = `<td>${country}</td>
    <td>${age}</td>
    <td>${genre}</td>
    <td>${surname}</td>
    <td>${notes}</td>`;
    document.getElementById("list").appendChild(tr);
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
    if (document.getElementsByClassName("toRm").length==0) {
        document.getElementById("rm").disabled = true;
    }else{
        document.getElementById("rm").disabled = false;
    }

}

document.getElementById("list").addEventListener("click", (event) => {
    let target = event.target;
    while (target.tagName != "TR") {
        target = target.parentNode
    }
    if (target.tagName == "TD") {
        target = target.parentNode
    } else if (target.tagName != "TR") {
        return
    }
    target.style.backgroundColor = "black";
    target.style.color = "white";
    target.className = "toRm";
    if (document.getElementsByClassName("toRm").length==0) {
        document.getElementById("rm").disabled = true;
    }else{
        document.getElementById("rm").disabled = false;
    }
});

document.getElementById("list").addEventListener("dblclick", (event) => {
    let target = event.target;
    while (target.tagName != "TR") {
        target = target.parentNode
    }
    if (target.tagName == "TD") {
        target = target.parentNode
    } else if (target.tagName != "TR") {
        return
    }
    let arr=[];
    console.log(target.children);
    for (e of target.children) {
        arr.push(e.innerHTML);
    }
    target.className="toEdit";
    document.getElementById("country").value=arr[0];
    document.getElementById("age").value=arr[1];
    document.getElementById("genre").value=arr[2];
    document.getElementById("surname").value=arr[3];
    document.getElementById("notes").value=arr[4];
    document.getElementById("rm").disabled = true;
    document.getElementById("add").disabled = true;
    document.getElementById("sv").disabled = false;

});

document.getElementById("container").addEventListener("keyup", (event) => {
    let target = event.target;
    for (let item of document.getElementById("container").getElementsByTagName("input")) {
        if (item.value == "") {
            document.getElementById("add").disabled = true;
            return;
        }
        document.getElementById("add").disabled = false;
    }
});


document.getElementById("sv").onclick = () => {
    let l = document.getElementById("list").children;
    if (l == null) {
        return;
    }
    for (let item of l) {
        if (item.className == "toEdit") {
            let arr=item.children;
            arr[0].innerHTML=document.getElementById("country").value;
            arr[1].innerHTML=document.getElementById("age").value;
            arr[2].innerHTML=document.getElementById("genre").value;
            arr[3].innerHTML=document.getElementById("surname").value;
            arr[4].innerHTML=document.getElementById("notes").value;
            item.style.color="black";
            item.style.backgroundColor="white";
            item.className="";
        }
    }
    document.getElementById("sv").disabled = true;
}