/*
  Q1 & Q2:
  Create a file called utils.js and write a function generateOrderId() that returns a
  random 8-character order ID string. Export this function using a named export, then
  import and use it in a separate file order.js to log a new order ID.
*/

// Named export
export function generateOrderId() {
  const chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  let id = "";
  for (let i = 0; i < 8; i++) {
    id += chars[Math.floor(Math.random() * chars.length)];
  }
  return id;
}
