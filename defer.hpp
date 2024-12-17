#pragma once

namespace dts {

template <typename T>
class defer {
public:
  explicit defer(T&& lambda_) : lambda(std::forward<T>(lambda_)) {}
  ~defer() { lambda(); }
private:
  T lambda;
};

template <typename T>
defer<T> make_defer(T&& lambda) {
  return defer<T>(std::forward<T>(lambda));
}

} // namespace dts
