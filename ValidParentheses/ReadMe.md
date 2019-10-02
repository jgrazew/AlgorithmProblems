Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example:

Input: "{[]}"
Output: true

i initially solved this with a stack and if statements BUT i think that i could solve this using a hash map 

something like this....

bool isValid(string s) {
	vector<char> counter;
	std::unordered_map <char, char> pairs {{')', '('}, {'}', '{'}, {']', '['}};
	counter.reserve(s.length());
	for (auto c: s) {
		auto it = pairs.find(c);
		if (it == pairs.end()) { // it's an opening bracket
			counter.push_back(c);
		} else {
			// the closing bracket does not have a matching
			if (counter.empty() or counter.back() != it->second) {
				return false;
			}
			counter.pop_back();
		}
	}
	return counter.empty();
}
