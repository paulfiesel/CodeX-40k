; CX40K compatibility wrapper.
; Preserve Code-X accuracy-by-motion definitions and vehicle macro contracts,
; restore the Cold War stabilizer family used by modern vehicle entities,
; then restore the zero-argument recoil macro required by tank_unarmed.ext.
(include "abm_codex_compat.inc")
(include "abm_cw_compat.inc")
(include "vehicle_codex_compat.inc")

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
