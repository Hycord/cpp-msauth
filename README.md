# MSAuth - A C++ Library to make signing in with Microsoft easy! 

## Authentication flow 

> [!CAUTION]
> The commonly followed Microsoft Documentation linked on Wiki.vg is not followed.

### Overview

1. Request `Device Code` and pass `User Code` to the authenticating user.
2. Poll Microsoft to see what the user has done with the code
3. If they authorized, recieve the `Microsoft Access Token` and `Refresh Token`
4. Pass the `Microsoft Access Token` to the Xbox Live server to retrive an `XboxLive Access Token`
5. Pass the `XboxLive Access Token` to the XboxLive XTXS server to retrive an `XTXS Token`
6. Pass the `XTXS Token` to Minecraft to retrive a `Minecraft Access Token`
7. Validate access to the game
8. Retrive profile information

