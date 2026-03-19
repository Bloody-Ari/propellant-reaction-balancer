struct ReactionData createEmptyReactionStruct();

void defineMainReactionData(struct ReactionData *main_reaction);

void recalculateFromFuelMol(struct ReactionData *main_reaction, float new_fuel_ammount_mol);

float massToMol(float mass, float uma);
float molToMass(float mol, float uma);
