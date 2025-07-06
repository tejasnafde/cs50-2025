# CS50 Library Installation Guide (macOS)

## Complete Installation Steps

• **Download and Install**: Download latest release from GitHub, extract, `cd libcs50-*`, then `sudo make install` (installs to `/usr/local/`)

• **Compile with Linking**: Use `gcc -o program program.c -lcs50` instead of just `make` (the `-lcs50` flag is crucial for linking)

• **Set macOS Environment Variable**: Add `export DYLD_LIBRARY_PATH=/usr/local/lib:$DYLD_LIBRARY_PATH` to `~/.zshrc` (macOS uses `DYLD_LIBRARY_PATH`, not `LD_LIBRARY_PATH`)

• **Apply Changes**: Run `source ~/.zshrc` or restart terminal to apply the environment variable

• **Verify Installation**: Check that `/usr/local/lib/libcs50*.dylib` files exist and program runs without "Library not loaded" errors

• **Troubleshooting**: If header not found, add `export C_INCLUDE_PATH=/usr/local/include` to `~/.zshrc`

## Key Differences from cs50 GitHub Instructions
- GitHub mentions `LD_LIBRARY_PATH` but macOS requires `DYLD_LIBRARY_PATH`
- Standard `make` command won't work without proper linking flags
- Environment variables must be set for dynamic library loading on macOS
