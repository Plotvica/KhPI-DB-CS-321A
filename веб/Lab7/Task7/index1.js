document.getElementById("add").onclick=()=>{
    tr=document.createElement("tr");
    let country=document.getElementById("country").value;
    let age=document.getElementById("age").value;
    let genre=document.getElementById("genre").value;
    let surname=document.getElementById("surname").value;
    let notes=document.getElementById("notes").value;
    if (country==""||age==""||genre==""||surname=="") {
        alert("Заповніть усі поля!");
        return;
    }
    tr.innerHTML=`<td>${country}</td>
    <td>${age}</td>
    <td>${genre}</td>
    <td>${surname}</td>
    <td>${notes}</td>`;
    document.getElementById("list").appendChild(tr);
}


document.getElementById("rm").onclick=()=>{
    let l=document.getElementById("list").children;
    if (l==null) {
        return;
    }
    for (let item of l) {
       if (item.className=="toRm") {
        item.remove();
       }
    }
    
}

document.getElementById("list").addEventListener("click", (event)=>{
    let target=event.target;
    while (target.tagName!="TR") {
        target=target.parentNode
    }
    if (target.tagName=="TD") {
        target=target.parentNode
    }else if(target.tagName!="TR"){
        return
    }
    target.style.backgroundColor="black";
    target.style.color="white";
    target.className="toRm"
});