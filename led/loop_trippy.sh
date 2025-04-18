#!/bin/bash

while true; do
  sudo ./trippy \
    --led-rows=64 \
    --led-cols=64 \
    --led-parallel=3 \
    --led-slowdown-gpio=2 \
    --led-pwm-bits=8 \
    --led-chain=2 \
    --led-show-refresh \
    --led-brightness=70

  # Attendre un peu avant de relancer (optionnel)
  sleep 1
done
