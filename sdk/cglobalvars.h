#pragma once
#include "../menu/base/controls.h"
#include "headers/vector.h"

bool checkExists( string file );
void SaveToJson();
void LoadFromJson();

struct CGlobalVariables {
  int aim_index = -1;
  int backtrack_tick = 0;
  int backtrack_arr = 0;
  bool spyalert = false;
  Vector aim;
  int hitbox = -1;
  
  Checkbox Aimbot_enable{ "Enable Aimbot", true };
  Slider   Aimbot_fov{ "Fov", 5, 1, 180, 1 };
  Checkbox Aimbot_proj{ "Loose fov for proj", true };
  Listbox  Aimbot_hitbox{ "Hitbox", { "nearest mouse", "first visible", "head", "body" }, 1, 130 };
  Checkbox Aimbot_silent{ "Silent", true };
  Slider   Aimbot_smooth{ "Smooth", 0, 0, 4, 1 };
  Checkbox Aimbot_range{ "range check", true };
  Slider   Aimbot_ranges{ "shotgun wpn range", 26, 1, 100, 1, 160 };
  Checkbox Backtrack{ "backtrack", true };
  Checkbox Aimbot_melee{ "melee aim", true };
  KeyBind  Aimbot_auto_aim{ "Aim key", VK_SHIFT, e_kbmode::always };
  KeyBind  Aimbot_auto_shoot{ "Shoot key", VK_SHIFT, e_kbmode::always };
  
  Tab Aimbot{ "Aimbot", {
      &Aimbot_enable,
      &Aimbot_fov, &Aimbot_proj, &Aimbot_hitbox, &Aimbot_silent, &Aimbot_smooth,
      &Aimbot_range, &Aimbot_ranges,
      &Backtrack,
      &Aimbot_melee,
      
      &Aimbot_auto_aim, &Aimbot_auto_shoot,
    }
  };
  
  Checkbox Trigger_enable{ "Enable triggerbot" };
  KeyBind  Trigger_key{ "trigger key", VK_SHIFT, e_kbmode::always };
  Checkbox Trigger_head{ "Head only" };
  Checkbox Trigger_zoom{ "Zoom only" };
  Checkbox Trigger_melee{ "Melee", true };
  
  Tab Trigger{ "Trigger", {
      &Trigger_enable,
      &Trigger_key,
      &Trigger_head,
      &Trigger_zoom,
      &Trigger_melee
    }
  };
  
  Checkbox Pyro{ "Pyro", comment };
  Checkbox Aimbot_pyro{ "lazy pyro primary", true };
  Checkbox Airblast_enable{ "Enable airblast", true };
  Checkbox Airblast_silent{ "Silent aim", true };
  Checkbox Airblast_rage{ "Rage aim" };
  Checkbox Demoman{ "Demoman", comment };
  Checkbox auto_sticky{ "auto sticky", true };
  Checkbox Sniper{ "Sniper", comment };
  Checkbox Aimbot_zoom{ "Zoomed only", true };
  Checkbox head_body{ "sniper bodyshot if kill", true };
  Checkbox Nozoom{ "No zoom" };
  Checkbox Noscope{ "No scope", true };
  
  Tab Class{ "Class", {
      &Pyro,
      &Aimbot_pyro,
      &Airblast_enable, &Airblast_silent, &Airblast_rage,
      &Demoman,
      &auto_sticky,
      &Sniper,
      &Aimbot_zoom,
      &head_body,
      &Nozoom,
      &Noscope,
    }
  };
  
  Checkbox ESP_enable    { "Enable ESP", true };
  Checkbox ESP_enemy     { "Enemy only" };
  Checkbox ESP_build_text{ "building text", true };
  Checkbox ESP_item_text { "pickup names", true };
  Listbox  ESP_cham_mat  { "cham material", { "shaded", "glow", "shiny"}, 0 };
  Checkbox ESP_obj       { "Object cham", true};
  Checkbox ESP_cham      { "Player cham", true };
  Checkbox ESP_backtrack { "Backtrack cham", true };
  Checkbox ESP_proj_cham { "projectile cham", true };
  Listbox  ESP_fov       { "Fov circle", {"none", "normal", "dotted" }, 2 };
  Listbox  ESP_target    { "target highlight", { "Off", "line", "color", "both" }, 1 };
  Checkbox ESP_hat       { "No hats" };
  Listbox  ESP_hand      { "Hands", { "Normal", "None", "transparent", "fill", "wireframe" }, 0 };
  
  Tab ESP{ "ESP", {
      &ESP_enable,
      &ESP_enemy,
      &ESP_build_text,
      &ESP_item_text,
      &ESP_cham_mat,
      &ESP_obj,
      &ESP_cham,
      &ESP_backtrack,
      &ESP_proj_cham,
      &ESP_fov,
      &ESP_target,
      &ESP_hat,
      &ESP_hand
    }
  };
  
  ColorPicker color_pickup        { "pickups", Colors::Green };
  ColorPicker color_building      { "buildings", Colors::White };
  Listbox     color_type          { "cham color type", { "red/blue", "enemy/ally" } };
  ColorPicker color_red           { "red", Colors::Red };
  ColorPicker color_blue          { "blue", Colors::Blue };
  ColorPicker color_enemy         { "enemy", Colors::Orange };
  ColorPicker color_ally          { "ally", Colors::Indigo };
  ColorPicker color_cham_history  { "backtrack history", Colors::White };
  ColorPicker color_cham_tick     { "backtrack tick", Colors::Green };
  ColorPicker color_aim           { "target color", Colors::Violet };
  ColorPicker color_fov           { "fov circle", Colors::Yellow, true };
  Checkbox    world_enabled       { "world/sky color" };
  ColorPicker world_clr           { "World color", Color( 200 ) };
  ColorPicker sky_clr             { "Sky color", Color( 200 ) };
  
  Tab Colors { "Color", {
      &color_pickup,
      &color_building,
      &color_type,
      &color_red,
      &color_blue,
      &color_enemy,
      &color_ally,
      &color_cham_history,
      &color_cham_tick,
      &color_aim,
      &color_fov,
      &world_enabled,
      &world_clr,
      &sky_clr
    }
  };
  
  Checkbox Ignore_A{ "Aimbot", comment };
  Checkbox Ignore_A_cloak{ "Aimbot ignores cloak", true };
  Checkbox Ignore_A_disguise{ "Aimbot ignores disguise", true };
  Checkbox Ignore_A_taunt{ "Aimbot ignores taunt" };
  Checkbox Ignore_T{ "Trigger", comment };
  Checkbox Ignore_T_cloak{ "Trigger ignores cloak", true };
  Checkbox Ignore_T_disguise{ "Trigger ignores disguise", true };
  Checkbox Ignore_T_taunt{ "Trigger ignores taunt" };
  Checkbox Ignore_E{ "ESP", comment };
  Checkbox Ignore_E_cloak{ "ESP ignores cloak", true };
  Checkbox Ignore_E_disguise{ "ESP ignores disguise" };
  
  Tab Ignore{ "Ignore", {
      &Ignore_A, &Ignore_A_cloak, &Ignore_A_disguise, &Ignore_A_taunt,
      &Ignore_T, &Ignore_T_cloak, &Ignore_T_disguise, &Ignore_T_taunt,
      &Ignore_E, &Ignore_E_cloak, &Ignore_E_disguise
    }
  };
  
  Checkbox Bunnyhop{ "Bunny hop", true };
  Checkbox Autostrafe{ "Auto strafe", true };
  Checkbox Norecoil{ "No recoil", true };
  Checkbox NoPush{ "No push", true };
  
  Tab Misc{ "Misc", {
      &Bunnyhop, &Autostrafe,
      &Norecoil,
      &NoPush
    }
  };
  
  Checkbox loadbyclass{ "load based on class"};
  func_switch savejson{ "save to json", SaveToJson };
  func_switch loadjson{ "load from json", LoadFromJson };
  
  Tab Config{ "Config", {
      &loadbyclass,
      &savejson,
      &loadjson
    }
  };
  
  Checkbox Sv_cheat{ "sv_cheat 1" };
  Checkbox Thirdperson{ "Third person" };
  Checkbox latency{ "latency test" };
  Slider latency_amount{ "added latency", 0, 0, 800, 10, 120 };
  Tab Testing{ "Testing", {
      &Sv_cheat,
      &Thirdperson,
      &latency,
      &latency_amount
    }
  };
  
  TabGroup tf2{ {
      &Aimbot,
      &Trigger,
      &ESP,
      &Colors,
      &Ignore,
      &Class,
      &Misc,
      &Config,
      &Testing
    }
  };
};