# Structure

This document describes directory/archive structure of dumbgine games.
Currently it is just a core idea and everything can be changed anytime.

## Root

```
game.ini
scenes/
textures/
audio/
scripts/
```

## game.ini

ini-like config file with following fields:
- `name` -- game name, used for window title;
- `minimum-resolution` -- minimal resolution supported;
- `maximum-resolution` -- maximum resolution supported.
