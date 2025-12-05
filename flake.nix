{
  description = "C/C++ DevShell";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs =
    {
      self,
      nixpkgs,
      flake-utils,
    }:
    flake-utils.lib.eachDefaultSystem (
      system:
      let
        pkgs = import nixpkgs {
          inherit system;
        };
      in
      {
        devShells.default = pkgs.mkShell {
          name = "cpp-dev-shell";

          buildInputs = [
            pkgs.clang # includes clang++
            pkgs.libcxx # standard library for clang++
            pkgs.clang-tools # clangd, clang-format, etc.
            pkgs.cmake
            pkgs.gcc
          ];

          shellHook = ''
            export CC=clang
            export CXX=clang++
          '';
        };
      }
    );
}
