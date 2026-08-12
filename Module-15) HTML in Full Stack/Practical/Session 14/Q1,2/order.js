// Import named export from utils.js
import { generateOrderId } from "./utils.js";

const orderId = generateOrderId();
console.log("New Order ID:", orderId);

// Display on page
document.getElementById("order-id").textContent = "Order ID: " + orderId;
