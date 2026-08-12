/*
  Q10 & Q11:
  Refactor an existing file where you have three functions: addToCart, removeFromCart,
  and calculateTotal (all related to a Flipkart-style shopping cart) into a separate file
  cartUtils.js. Use named exports and update your main.js to import and use these functions.
  Hint: Make sure you remove the original function definitions from main.js and only use
  the imported versions.
*/

// Named export: add a product to cart (or increase quantity if already exists)
export function addToCart(cart, product) {
  const existing = cart.find(item => item.id === product.id);
  if (existing) {
    existing.quantity += 1;
    return cart;
  }
  return [...cart, { ...product, quantity: 1 }];
}

// Named export: remove a product by id
export function removeFromCart(cart, productId) {
  return cart.filter(item => item.id !== productId);
}

// Named export: sum price × quantity for all cart items
export function calculateTotal(cart) {
  return cart.reduce((sum, item) => sum + item.price * item.quantity, 0);
}
