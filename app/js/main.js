/* -*- Mode: js; js-indent-level: 2; indent-tabs-mode: nil -*- */
/* vim: set shiftwidth=2 tabstop=2 autoindent cindent expandtab: */

'use strict';

const HOST = "192.168.134.126";
//const HOST = "192.168.134.124";

const PORT = 9750;

document.getElementById("led-on").addEventListener("click", function(e) {
  send("1");
});

document.getElementById("led-off").addEventListener("click", function(e) {
  send("0");
});

function send(content) {
  var connection = navigator.mozTCPSocket.open(HOST, PORT);
  connection.onopen = function(e) {
    connection.send(content);
  }
  connection.ondata = function(e) {
    connection.close();
  }
  connection.ondrain = function(e) {
  }    
  connection.onerror = function(e) {
    alert(e.type);
  }
  connection.onclose = function(e) {
  }
}