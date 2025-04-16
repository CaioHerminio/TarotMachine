// 🎴 TAROT MACHINE - JavaScript Edition

const readline = require('readline');

// --- Tarot Cards ---

const majorArcana = {
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
};

const minorNumbered = {
    // Wands
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

    // Cups
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

    // Swords
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

    // Pentacles
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
};

const minorCourt = {
    // Wands
    "Page of Wands": ["exploration", "enthusiasm", "discovery"],
    "Knight of Wands": ["passion", "action", "adventure"],
    "Queen of Wands": ["confidence", "determination", "vibrancy"],
    "King of Wands": ["leadership", "vision", "inspiration"],

    // Cups
    "Page of Cups": ["imagination", "sensitivity", "message"],
    "Knight of Cups": ["romance", "idealism", "journey"],
    "Queen of Cups": ["compassion", "intuition", "emotion"],
    "King of Cups": ["balance", "wisdom", "diplomacy"],

    // Swords
    "Page of Swords": ["curiosity", "observation", "vigilance"],
    "Knight of Swords": ["determination", "ambition", "impulsiveness"],
    "Queen of Swords": ["clarity", "perception", "independence"],
    "King of Swords": ["intellect", "authority", "truth"],

    // Pentacles
    "Page of Pentacles": ["opportunity", "study", "manifestation"],
    "Knight of Pentacles": ["hard work", "routine", "responsibility"],
    "Queen of Pentacles": ["nurturing", "practicality", "abundance"],
    "King of Pentacles": ["security", "wealth", "stability"]
};

// --- Card Drawing ---

function drawCards(deck, n = 1) {
    const keys = Object.keys(deck);
    const drawnCards = [];
    for (let i = 0; i < n; i++) {
        const cardName = keys[Math.floor(Math.random() * keys.length)];
        drawnCards.push([cardName, deck[cardName]]);
    }
    return drawnCards;
}

// --- Tarot Reader Machine ---

function tarotReader() {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    console.log(" ");
    console.log("╔══════════════════════════════════════╗");
    console.log("║      🃏  The Tarot Machine  🃏       ║");
    console.log("╚══════════════════════════════════════╝");
    console.log(" ");
    console.log("With my help, you can interact with your subconscious by using the symbols in the tarot cards as a reference, like a guided dream.");
    console.log("The images will trigger your mind to find answers to your own questions. We don't need to call spirits or make a pact;");
    console.log("we are just going to use symbols to guide our own mind to find the answers by itself.\n");
    console.log("You can do this any time with anything! When you look to a cloud and it reminds you of the face of a person,");
    console.log("which makes you notice that you have repressed feelings or unresolved issues with this person, you are basically playing tarot with the clouds, allowing your mind to find the answers by itself using triggers!\n");
    console.log("These triggers need to be symbolical, not literal, just like your dreams (yes, dreams are basically a biological tarot). This is the language of the subconscious.");
    console.log("By using an alphabet for this language, which can be anything, you can talk with your subconscious mind.\n");
    console.log("✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦\n");
    console.log("Let's try it with the Tarot cards today!\n");
    console.log("✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦\n");

    function askQuestion() {
        rl.question("Start by choosing your card spread:\n1. 1 Random Card\n2. 1 Major Arcana + 1 Minor Arcana\n3. 2 Major Arcana\n4. 1 Court Card + 1 Major Arcana + 1 Minor Arcana\nEnter your choice (1-4): ", function (choice) {
            rl.question("Write your question here: ", function () {
                console.log("\nYour Cards:\n");

                let card;
                if (choice === "1") {
                    card = drawCards({ ...majorArcana, ...minorNumbered, ...minorCourt }, 1);
                } else if (choice === "2") {
                    card = [...drawCards(majorArcana, 1), ...drawCards({ ...minorNumbered, ...minorCourt }, 1)];
                } else if (choice === "3") {
                    card = drawCards(majorArcana, 2);
                } else if (choice === "4") {
                    card = [...drawCards(minorCourt, 1), ...drawCards(majorArcana, 1), ...drawCards(minorNumbered, 1)];
                } else {
                    console.log("Invalid choice. Let's try again.\n");
                    askQuestion();
                    return;
                }

                card.forEach(([name, keywords]) => {
                    console.log(`🔮 ${name} - Keywords: ${keywords.join(', ')}`);
                });

                rl.question("\nWould you like to draw again? (Y/N): ", function (again) {
                    if (again.toLowerCase() !== 'y') {
                        console.log("\n✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦\n");
                        console.log("Thank you for using the Tarot Machine!");
                        console.log("\n✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦✦\n");
                        console.log("REMEMBER: the best insights come from the balance between logic and intuition.");
                        console.log("Too much of one without the other can lead to superstition hurting your common sense and blockages hurting your connection with yourself.");
                        console.log("Trust both your heart and your mind.");
                        console.log("\n🌟 Until next time! 🌟\n");
                        rl.close();
                    } else {
                        askQuestion();
                    }
                });
            });
        });
    }

    askQuestion();
}

// --- Machine Starts ---

tarotReader();
