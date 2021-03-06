#include <string>
#include <vector>
#include <unordered_map>

/// Class that provides various information regarding the contents of a text document ///

class TextAnalyser {
private:
    using entry = std::pair<std::string, int>;

    std::string path;   

    size_t max_length {};   // Max length a word can have based on input

    std::vector<std::string> words; // Words of the text
    
    std::unordered_map<std::string, int> occurrences;   // Maps each word to its no_occurrences in the text
    
    std::vector<entry> entries; // Stores the pairs of occurences, because we want to sort them in decreasing order based on value

    static std::unordered_map<std::string, std::string> contractions;

public:
    explicit TextAnalyser(const std::string& in_path);

    size_t get_no_words() const { return entries.size(); }  // Returns number of different words

    size_t get_max_length() const { return max_length; }

    std::string get_most_used_word() const { return entries[0].first; }  // entries is sorted in decreasing order

    size_t get_no_occurrences(const std::string& word);

    // At most we return all the different words - inserted in the vector in decreasing order based on no_occurrences
    std::vector<std::string> get_most_used_words(size_t limit); 
    
    void print_histogram() const;
};
