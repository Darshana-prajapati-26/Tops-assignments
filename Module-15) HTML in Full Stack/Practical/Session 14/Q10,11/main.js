// Import all cart functions from cartUtils.js — no function definitions here
import { addToCart, removeFromCart, calculateTotal } from "./cartUtils.js";

let cart = [];

const products = [
  { id: 1, name: "Wireless Headphones", price: 1999 },
  { id: 2, name: "Mechanical Keyboard", price: 3499 },
  { id: 3, name: "Laptop Stand",        price: 1299 },
];

function renderCart() {
  const cartEl  = document.getElementById("cart-list");
  const totalEl = document.getElementById("total");
  cartEl.innerHTML = "";

  if (cart.length === 0) {
    cartEl.innerHTML = "<p style='color:#aaa;font-style:italic;'>Cart is empty</p>";
  } else {
    cart.forEach(item => {
      const div = document.createElement("div");
      div.style.cssText = "padding:8px 0;border-bottom:1px solid #eee;font-size:15px;";
      div.innerHTML = `${item.name} × ${item.quantity} — ₹${item.price * item.quantity}
        <button onclick="handleRemove(${item.id})" style="margin-left:10px;background:#c62828;color:#fff;border:none;border-radius:4px;padding:3px 10px;cursor:pointer;">Remove</button>`;
      cartEl.appendChild(div);
    });
  }
  totalEl.textContent = `Total: ₹${calculateTotal(cart)}`;
}

window.handleAdd = (id) => {
  cart = addToCart(cart, products.find(p => p.id === id));
  renderCart();
};
window.handleRemove = (id) => {
  cart = removeFromCart(cart, id);
  renderCart();
};

// Render product list
const productList = document.getElementById("product-list");
products.forEach(p => {
  const div = document.createElement("div");
  div.style.cssText = "background:#fff;border:1px solid #ddd;border-radius:8px;padding:12px 18px;margin:8px 0;max-width:440px;display:flex;justify-content:space-between;align-items:center;font-size:15px;";
  div.innerHTML = `<span><strong>${p.name}</strong> — ₹${p.price}</span>
    <button onclick="handleAdd(${p.id})" style="background:#ff9f00;color:#fff;border:none;border-radius:4px;padding:6px 14px;cursor:pointer;">Add to Cart</button>`;
  productList.appendChild(div);
});

renderCart();
