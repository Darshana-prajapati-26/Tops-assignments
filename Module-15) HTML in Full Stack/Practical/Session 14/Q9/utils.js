/*
  Q9:
  Refactor your cart.js so that getDiscountedPrice is imported as a default export from
  utils.js, while formatPrice remains a named export.
  Hint: You will need to change the export style in utils.js for getDiscountedPrice to
  use 'export default'.
*/

// Named export — unchanged
export function formatPrice(price) {
  return `₹${parseFloat(price).toFixed(2)}`;
}

// Default export — refactored from named to default
export default function getDiscountedPrice(price, discount) {
  const discountAmount = (price * discount) / 100;
  return parseFloat((price - discountAmount).toFixed(2));
}
