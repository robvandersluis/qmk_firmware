# VIA support (voor real-time keymap aanpassingen via de VIA app)
# https://launcher.keychron.com/#/keymap
VIA_ENABLE = yes

# Link Time Optimization (kleinere firmware, snellere builds)
LTO_ENABLE = yes

# Tap Dance support (enkel/dubbel/hold acties op één toets)
TAP_DANCE_ENABLE = yes

# RGB Matrix ondersteuning (per-key verlichting en effecten)
RGB_MATRIX_ENABLE = yes

# Include custom tapdance implementation
SRC += tapdance.c


