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
    if (document.getElementById("list").childElementCount==1) {
        return;
    }
    document.getElementById("list").removeChild(document.getElementById("list").lastChild);
}