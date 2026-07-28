; CX40K compatibility wrapper.
; Preserve Code-X accuracy-by-motion definitions, then restore the zero-argument
; recoil macro required by Code-X tank_unarmed.ext after the actor scope opens.
(include "abm_codex_compat.inc")

(define "recoil_side_volumes"
	{volume "recoil_gun_front" {component "recoil_gun"} {thickness 30} {tags "gun_recoil"} {able clear {NoWoundDecal}}}
	{volume "recoil_gun_left" {component "recoil_gun"} {thickness 30} {tags "gun_recoil"} {able clear {NoWoundDecal}}}
	{volume "recoil_gun_right" {component "recoil_gun"} {thickness 30} {tags "gun_recoil"} {able clear {NoWoundDecal}}}
	{volume "recoil_gun_back" {component "recoil_gun"} {thickness 30} {tags "gun_recoil"} {able clear {NoWoundDecal}}}
	{volume "recoil_gun_baleft" {component "recoil_gun"} {thickness 30} {tags "gun_recoil"} {able clear {NoWoundDecal}}}
	{volume "recoil_gun_baright" {component "recoil_gun"} {thickness 30} {tags "gun_recoil"} {able clear {NoWoundDecal}}}
	{volume "recoil_gun_frright" {component "recoil_gun"} {thickness 30} {tags "gun_recoil"} {able clear {NoWoundDecal}}}
	{volume "recoil_gun_frleft" {component "recoil_gun"} {thickness 30} {tags "gun_recoil"} {able clear {NoWoundDecal}}}
	{component "recoil_gun"}
)
