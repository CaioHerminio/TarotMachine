# 🎴 TAROT MACHINE - Python Edition

import random

# --- Tarot Cards ---

major_arcana = {
    "The Fool": ["beginnings", "innocence", "spontaneity"],
    "The Magician": ["manifestation", "skill", "power"],
    "The High Priestess": ["intuition", "mystery", "subconscious"],
    "The Empress": ["nurturing", "abundance", "creativity"],
    "The Emperor": ["authority", "structure", "control"],
    "The Hierophant": ["tradition", "spirituality", "conformity"],
    "The Lovers": ["connection", "choice", "harmony"],
    "The Chariot": ["determination", "willpower", "victory"],
    "Strength": ["courage", "inner strength", "compassion"],
    "The Hermit": ["introspection", "solitude", "wisdom"],
    "Wheel of Fortune": ["fate", "cycles", "change"],
    "Justice": ["truth", "fairness", "accountability"],
    "The Hanged Man": ["suspension", "sacrifice", "perspective"],
    "Death": ["endings", "transformation", "rebirth"],
    "Temperance": ["balance", "moderation", "healing"],
    "The Devil": ["addiction", "materialism", "shadow self"],
    "The Tower": ["upheaval", "revelation", "awakening"],
    "The Star": ["hope", "guidance", "inspiration"],
    "The Moon": ["illusion", "intuition", "uncertainty"],
    "The Sun": ["joy", "success", "vitality"],
    "Judgement": ["rebirth", "reckoning", "awakening"],
    "The World": ["completion", "integration", "wholeness"]
}

minor_numbered = {
    # Wands
    "Ace of Wands": ["inspiration", "potential", "creation"],
    "Two of Wands": ["planning", "decisions", "discovery"],
    "Three of Wands": ["expansion", "progress", "foresight"],
    "Four of Wands": ["celebration", "harmony", "homecoming"],
    "Five of Wands": ["conflict", "competition", "tension"],
    "Six of Wands": ["victory", "recognition", "success"],
    "Seven of Wands": ["defense", "challenge", "perseverance"],
    "Eight of Wands": ["speed", "movement", "momentum"],
    "Nine of Wands": ["resilience", "persistence", "courage"],
    "Ten of Wands": ["burden", "responsibility", "stress"],

    # Cups
    "Ace of Cups": ["love", "compassion", "new feelings"],
    "Two of Cups": ["union", "partnership", "attraction"],
    "Three of Cups": ["friendship", "celebration", "community"],
    "Four of Cups": ["apathy", "contemplation", "discontent"],
    "Five of Cups": ["grief", "regret", "disappointment"],
    "Six of Cups": ["nostalgia", "innocence", "memories"],
    "Seven of Cups": ["choices", "illusion", "imagination"],
    "Eight of Cups": ["withdrawal", "searching", "letting go"],
    "Nine of Cups": ["contentment", "satisfaction", "gratitude"],
    "Ten of Cups": ["happiness", "fulfillment", "emotional harmony"],

    # Swords
    "Ace of Swords": ["clarity", "truth", "breakthrough"],
    "Two of Swords": ["indecision", "stalemate", "choices"],
    "Three of Swords": ["heartbreak", "sorrow", "separation"],
    "Four of Swords": ["rest", "recovery", "reflection"],
    "Five of Swords": ["conflict", "betrayal", "defeat"],
    "Six of Swords": ["transition", "healing", "moving on"],
    "Seven of Swords": ["deception", "strategy", "secrecy"],
    "Eight of Swords": ["restriction", "fear", "entrapment"],
    "Nine of Swords": ["anxiety", "worry", "nightmares"],
    "Ten of Swords": ["pain", "endings", "surrender"],

    # Pentacles
    "Ace of Pentacles": ["opportunity", "prosperity", "manifestation"],
    "Two of Pentacles": ["balance", "adaptability", "time management"],
    "Three of Pentacles": ["teamwork", "collaboration", "skill"],
    "Four of Pentacles": ["control", "stability", "possessiveness"],
    "Five of Pentacles": ["loss", "struggle", "poverty"],
    "Six of Pentacles": ["generosity", "charity", "giving and receiving"],
    "Seven of Pentacles": ["patience", "assessment", "investment"],
    "Eight of Pentacles": ["diligence", "apprenticeship", "practice"],
    "Nine of Pentacles": ["independence", "abundance", "self-worth"],
    "Ten of Pentacles": ["legacy", "inheritance", "long-term success"]
}

minor_court = {
    # Wands
    "Page of Wands": ["exploration", "enthusiasm", "discovery"],
    "Knight of Wands": ["passion", "action", "adventure"],
    "Queen of Wands": ["confidence", "determination", "vibrancy"],
    "King of Wands": ["leadership", "vision", "inspiration"],

    # Cups
    "Page of Cups": ["imagination", "sensitivity", "message"],
    "Knight of Cups": ["romance", "idealism", "journey"],
    "Queen of Cups": ["compassion", "intuition", "emotion"],
    "King of Cups": ["balance", "wisdom", "diplomacy"],

    # Swords
    "Page of Swords": ["curiosity", "observation", "vigilance"],
    "Knight of Swords": ["determination", "ambition", "impulsiveness"],
    "Queen of Swords": ["clarity", "perception", "independence"],
    "King of Swords": ["intellect", "authority", "truth"],

    # Pentacles
    "Page of Pentacles": ["opportunity", "study", "manifestation"],
    "Knight of Pentacles": ["hard work", "routine", "responsibility"],
    "Queen of Pentacles": ["nurturing", "practicality", "abundance"],
    "King of Pentacles": ["security", "wealth", "stability"]
}


# --- Card Drawing ---

def draw_cards(deck, n=1):
    return random.sample(list(deck.items()), n)


# --- Tarot Reader Machine ---

def tarot_reader():
    print(" ")
    print("╔══════════════════════════════════════╗")
    print("║      🃏  The Tarot Machine  🃏       ║")
    print("╚══════════════════════════════════════╝")
    print(" ")
    print("With my help, you can interact with your subconscious by using the symbols in the tarot cards as a reference, like a guided dream.")
    print("The images will trigger your mind to find answers to your own questions. We don't need to call spirits or make a pact;")
    print("we are just going to use symbols to guide our own mind to find the answers by itself.\n")
    print("You can do this any time with anything! When you look to a cloud and it reminds you of the face of a person,")
    print("which makes you notice that you have repressed feelings or unresolved issues with this person, you are basically playing tarot with the clouds, allowing your mind to find the answers by itself using triggers!\n")
    print("These triggers need to be symbolical, not literal, just like your dreams (yes, dreams are basically a biological tarot). This is the language of the subconscious.")
    print("By using an alphabet for this language, which can be anything, you can talk with your subconscious mind.\n")
    print("✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦\n")
    print("Let's try it with the Tarot cards today!\n")
    print("✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦\n")

    while True:
        print("Start by choosing your card spread:")
        print("1. 1 Random Card")
        print("2. 1 Major Arcana + 1 Minor Arcana")
        print("3. 2 Major Arcana")
        print("4. 1 Court Card + 1 Major Arcana + 1 Minor Arcana")

        choice = input("Enter your choice (1-4): ").strip()
        input("Write your question here: ")

        print("\nYour Cards:\n")

        if choice == "1":
            card = draw_cards({**major_arcana, **minor_numbered, **minor_court}, 1)
        elif choice == "2":
            card = draw_cards(major_arcana, 1) + draw_cards({**minor_numbered, **minor_court}, 1)
        elif choice == "3":
            card = draw_cards(major_arcana, 2)
        elif choice == "4":
            card = draw_cards(minor_court, 1) + draw_cards(major_arcana, 1) + draw_cards(minor_numbered, 1)
        else:
            print("Invalid choice. Let's try again.\n")
            continue

        for name, keywords in card:
            print(f"🔮 {name} - Keywords: {', '.join(keywords)}")

        again = input("\nWould you like to draw again? (Y/N): ").strip().lower()
        if again != 'y':
            print("\n✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦\n")
            print("Thank you for using the Tarot Machine!")
            print("\n✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦\n")
            print("REMEMBER: the best insights come from the balance between logic and intuition.")
            print("Too much of one without the other can lead to superstition hurting your common sense and blockages hurting your connection with yourself.")
            print("Trust both your heart and your mind.")
            print("\n🌟 Until next time! 🌟\n")
            break


# --- Machine Starts ---

if __name__ == "__main__":
    tarot_reader()
