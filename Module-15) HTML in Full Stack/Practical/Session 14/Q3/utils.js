/*
  Q3:
  Create a file called utils.js and write two functions: formatPrice(price) that returns
  a string like '₹199.00', and getDiscountedPrice(price, discount) that returns the price
  after applying the discount percentage. Export both functions as named exports.
*/

// Named export: format a number as ₹XX.XX
export function formatPrice(price) {
  return `₹${parseFloat(price).toFixed(2)}`;
}

// Named export: return price after applying discount percent
export function getDiscountedPrice(price, discount) {
  const discountAmount = (price * discount) / 100;
  return parseFloat((price - discountAmount).toFixed(2));
}
