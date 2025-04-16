// 🎴 TAROT MACHINE - C++ Edition

#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
#include <ctime>
#include <algorithm>

// --- Tarot Cards ---

std::map<std::string, std::vector<std::string>> major_arcana = {
    {"The Fool", {"beginnings", "innocence", "spontaneity"}},
    {"The Magician", {"manifestation", "skill", "power"}},
    {"The High Priestess", {"intuition", "mystery", "subconscious"}},
    {"The Empress", {"nurturing", "abundance", "creativity"}},
    {"The Emperor", {"authority", "structure", "control"}},
    {"The Hierophant", {"tradition", "spirituality", "conformity"}},
    {"The Lovers", {"connection", "choice", "harmony"}},
    {"The Chariot", {"determination", "willpower", "victory"}},
    {"Strength", {"courage", "inner strength", "compassion"}},
    {"The Hermit", {"introspection", "solitude", "wisdom"}},
    {"Wheel of Fortune", {"fate", "cycles", "change"}},
    {"Justice", {"truth", "fairness", "accountability"}},
    {"The Hanged Man", {"suspension", "sacrifice", "perspective"}},
    {"Death", {"endings", "transformation", "rebirth"}},
    {"Temperance", {"balance", "moderation", "healing"}},
    {"The Devil", {"addiction", "materialism", "shadow self"}},
    {"The Tower", {"upheaval", "revelation", "awakening"}},
    {"The Star", {"hope", "guidance", "inspiration"}},
    {"The Moon", {"illusion", "intuition", "uncertainty"}},
    {"The Sun", {"joy", "success", "vitality"}},
    {"Judgement", {"rebirth", "reckoning", "awakening"}},
    {"The World", {"completion", "integration", "wholeness"}}
};

std::map<std::string, std::vector<std::string>> minor_numbered = {
    // Wands
    {"Ace of Wands", {"inspiration", "potential", "creation"}},
    {"Two of Wands", {"planning", "decisions", "discovery"}},
    {"Three of Wands", {"expansion", "progress", "foresight"}},
    {"Four of Wands", {"celebration", "harmony", "homecoming"}},
    {"Five of Wands", {"conflict", "competition", "tension"}},
    {"Six of Wands", {"victory", "recognition", "success"}},
    {"Seven of Wands", {"defense", "challenge", "perseverance"}},
    {"Eight of Wands", {"speed", "movement", "momentum"}},
    {"Nine of Wands", {"resilience", "persistence", "courage"}},
    {"Ten of Wands", {"burden", "responsibility", "stress"}},

    // Cups
    {"Ace of Cups", {"love", "compassion", "new feelings"}},
    {"Two of Cups", {"union", "partnership", "attraction"}},
    {"Three of Cups", {"friendship", "celebration", "community"}},
    {"Four of Cups", {"apathy", "contemplation", "discontent"}},
    {"Five of Cups", {"grief", "regret", "disappointment"}},
    {"Six of Cups", {"nostalgia", "innocence", "memories"}},
    {"Seven of Cups", {"choices", "illusion", "imagination"}},
    {"Eight of Cups", {"withdrawal", "searching", "letting go"}},
    {"Nine of Cups", {"contentment", "satisfaction", "gratitude"}},
    {"Ten of Cups", {"happiness", "fulfillment", "emotional harmony"}},

    // Swords
    {"Ace of Swords", {"clarity", "truth", "breakthrough"}},
    {"Two of Swords", {"indecision", "stalemate", "choices"}},
    {"Three of Swords", {"heartbreak", "sorrow", "separation"}},
    {"Four of Swords", {"rest", "recovery", "reflection"}},
    {"Five of Swords", {"conflict", "betrayal", "defeat"}},
    {"Six of Swords", {"transition", "healing", "moving on"}},
    {"Seven of Swords", {"deception", "strategy", "secrecy"}},
    {"Eight of Swords", {"restriction", "fear", "entrapment"}},
    {"Nine of Swords", {"anxiety", "worry", "nightmares"}},
    {"Ten of Swords", {"pain", "endings", "surrender"}},

    // Pentacles
    {"Ace of Pentacles", {"opportunity", "prosperity", "manifestation"}},
    {"Two of Pentacles", {"balance", "adaptability", "time management"}},
    {"Three of Pentacles", {"teamwork", "collaboration", "skill"}},
    {"Four of Pentacles", {"control", "stability", "possessiveness"}},
    {"Five of Pentacles", {"loss", "struggle", "poverty"}},
    {"Six of Pentacles", {"generosity", "charity", "giving and receiving"}},
    {"Seven of Pentacles", {"patience", "assessment", "investment"}},
    {"Eight of Pentacles", {"diligence", "apprenticeship", "practice"}},
    {"Nine of Pentacles", {"independence", "abundance", "self-worth"}},
    {"Ten of Pentacles", {"legacy", "inheritance", "long-term success"}}
};

std::map<std::string, std::vector<std::string>> minor_court = {
    // Wands
    {"Page of Wands", {"exploration", "enthusiasm", "discovery"}},
    {"Knight of Wands", {"passion", "action", "adventure"}},
    {"Queen of Wands", {"confidence", "determination", "vibrancy"}},
    {"King of Wands", {"leadership", "vision", "inspiration"}},

    // Cups
    {"Page of Cups", {"imagination", "sensitivity", "message"}},
    {"Knight of Cups", {"romance", "idealism", "journey"}},
    {"Queen of Cups", {"compassion", "intuition", "emotion"}},
    {"King of Cups", {"balance", "wisdom", "diplomacy"}},

    // Swords
    {"Page of Swords", {"curiosity", "observation", "vigilance"}},
    {"Knight of Swords", {"determination", "ambition", "impulsiveness"}},
    {"Queen of Swords", {"clarity", "perception", "independence"}},
    {"King of Swords", {"intellect", "authority", "truth"}},

    // Pentacles
    {"Page of Pentacles", {"opportunity", "study", "manifestation"}},
    {"Knight of Pentacles", {"hard work", "routine", "responsibility"}},
    {"Queen of Pentacles", {"nurturing", "practicality", "abundance"}},
    {"King of Pentacles", {"security", "wealth", "stability"}}
};

// --- Card Drawing ---

std::vector<std::pair<std::string, std::vector<std::string>>> draw_cards(
    const std::map<std::string, std::vector<std::string>>& deck, int n = 1) {

    std::vector<std::pair<std::string, std::vector<std::string>>> deck_vec(deck.begin(), deck.end());
    std::vector<std::pair<std::string, std::vector<std::string>>> drawn_cards;

    srand(time(0));

    for (int i = 0; i < n; ++i) {
        int index = rand() % deck_vec.size();
        drawn_cards.push_back(deck_vec[index]);
        deck_vec.erase(deck_vec.begin() + index);  // Remove the card after drawing
    }

    return drawn_cards;
}

// --- Tarot Reader Machine ---

void tarot_reader() {
    std::cout << "\n╔══════════════════════════════════════╗\n";
    std::cout << "║      🃏  The Tarot Machine  🃏       ║\n";
    std::cout << "╚══════════════════════════════════════╝\n";
    std::cout << "\nWith my help, you can interact with your subconscious by using the symbols in the tarot cards as a reference...\n";
    std::cout << "You can do this any time with anything!...\n";
    std::cout << "Let's try it with the Tarot cards today!\n";
    std::cout << "✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦\n";

    while (true) {
        std::cout << "Start by choosing your card spread:\n";
        std::cout << "1. 1 Random Card\n";
        std::cout << "2. 1 Major Arcana + 1 Minor Arcana\n";
        std::cout << "3. 2 Major Arcana\n";
        std::cout << "4. 1 Court Card + 1 Major Arcana + 1 Minor Arcana\n";

        int choice;
        std::cin >> choice;
        std::cin.ignore();  // Ignore newline after integer input
        std::cout << "Write your question here: ";
        std::string question;
        std::getline(std::cin, question);  // Ensure the question input is captured

        std::cout << "\nYour Cards:\n";

        std::vector<std::pair<std::string, std::vector<std::string>>> cards;

        if (choice == 1) {
            std::map<std::string, std::vector<std::string>> all_cards(major_arcana);
            all_cards.insert(minor_numbered.begin(), minor_numbered.end());
            all_cards.insert(minor_court.begin(), minor_court.end());
            cards = draw_cards(all_cards, 1);
        } else if (choice == 2) {
            cards = draw_cards(major_arcana, 1);
            auto minor_cards = draw_cards(minor_numbered, 1);
            cards.insert(cards.end(), minor_cards.begin(), minor_cards.end());
        } else if (choice == 3) {
            cards = draw_cards(major_arcana, 2);
        } else if (choice == 4) {
            auto court_card = draw_cards(minor_court, 1);
            auto major_card = draw_cards(major_arcana, 1);
            auto minor_card = draw_cards(minor_numbered, 1);
            cards.push_back(court_card[0]);
            cards.push_back(major_card[0]);
            cards.push_back(minor_card[0]);
        } else {
            std::cout << "Invalid choice. Let's try again.\n";
            continue;
        }

        for (const auto& [name, keywords] : cards) {
            std::cout << "🔮 " << name << " - Keywords: ";
            for (const auto& keyword : keywords) {
                std::cout << keyword << " ";
            }
            std::cout << "\n";
        }

        std::cout << "\nWould you like to draw again? (Y/N): ";
        char again;
        std::cin >> again;

        if (again != 'Y' && again != 'y') {
            std::cout << "\n✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦\n";
            std::cout << "Thank you for using the Tarot Machine!\n";
            std::cout << "REMEMBER: the best insights come from the balance between logic and intuition.\n";
            std::cout << "🌟 Until next time! 🌟\n";
            break;  // Break out of the loop when the user chooses not to continue
        }
    }
}

// --- Machine Starts ---

int main() {
    tarot_reader();
    system("pause");
    return 0;
}


