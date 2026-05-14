{
  lib,
  hyprland,
  hyprlandPlugins,
}:
hyprlandPlugins.mkHyprlandPlugin {
  pluginName = "hyprexpo";
  version = "0.1";
  src = ./.;

  inherit (hyprland) nativeBuildInputs;

  meta = with lib; {
    homepage = "https://github.com/abs3ntdev/hyprexpo";
    description = "Hyprland workspaces overview plugin";
    license = licenses.bsd3;
    platforms = platforms.linux;
  };
}
