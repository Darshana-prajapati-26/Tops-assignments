/*
  Q6:
  In a new file called cart.js, import the formatPrice and getDiscountedPrice functions
  from utils.js and use them to display the original and discounted prices for three items
  as console output.
*/

import { formatPrice, getDiscountedPrice } from "./utils.js";

const cartItems = [
  { name: "Running Shoes",    price: 3499, discount: 20 },
  { name: "Denim Jacket",     price: 1999, discount: 15 },
  { name: "Wireless Earbuds", price: 2499, discount: 30 },
];

const container = document.getElementById("cart-output");

cartItems.forEach(item => {
  const final = getDiscountedPrice(item.price, item.discount);

  // Console output as required
  console.log(`${item.name}: Original ${formatPrice(item.price)} → Discounted ${formatPrice(final)}`);

  // Also display on page
  const div = document.createElement("div");
  div.style.cssText = "background:#fff;border:1px solid #ddd;border-radius:8px;padding:12px 18px;margin:8px 0;max-width:480px;font-size:15px;";
  div.innerHTML = `<strong>${item.name}</strong><br/>
    Original: <s>${formatPrice(item.price)}</s> &nbsp;
    Discount: ${item.discount}% &nbsp;
    <span style="color:green;font-weight:bold;">Final: ${formatPrice(final)}</span>`;
  container.appendChild(div);
});
