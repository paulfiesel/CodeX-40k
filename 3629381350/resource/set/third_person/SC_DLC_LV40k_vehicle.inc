
("SC_Plataform_Vehicle_Default_S1" name(ork_warbuggy) camera_bone0(Visor1) camera_bone1(Visor1) zoom(tank_open_top) d_max(375) min(16) max(40) zoom_level(level0)
	fx(0) fy(10) fz(27)
	nx(8) ny(10) nz(10)
	zx(0) zy(1) zz(0.5)
)

{"evz_warbuggy_rokkits" inherit "vehicle sc.ork_warbuggy"}
{"evz_warbuggy_shootas" inherit "vehicle sc.ork_warbuggy"}
{"evz_warbuggy_zzap" inherit "vehicle sc.ork_warbuggy"}
{"evz_warbuggy_burnas" inherit "vehicle sc.ork_warbuggy"}

("SC_Plataform_Vehicle_Default_S1" name(ork_wartrukk) camera_bone0(visor_gunner) camera_bone1(visor_gunner) zoom(tank_open_top) d_max(400) min(20) max(36) zoom_level(level0)
	fx(0) fy(10) fz(27)
	nx(5) ny(10) nz(10)
	zx(15) zy(0) zz(3)
)

{"evz_wartrukk" inherit "vehicle sc.ork_wartrukk"}
{"evz_wartrukk_ammo" inherit "vehicle sc.ork_wartrukk"}
{"evz_wartrukk_burna" inherit "vehicle sc.ork_wartrukk"}

("SC_Plataform_Vehicle_Default_S1" name(ork_deff_dread) camera_bone0(fx_eye_mad_dread) camera_bone1(fx_eye_mad_dread) zoom(tank_default) d_max(425) min(24) max(40) zoom_level(level3) dsb_1(body) dsb_2(mad_dread)
	fx(0) fy(10) fz(27)
	nx(5) ny(10) nz(10)
	zx(25) zy(0) zz(10)
)

{"evz_deff_dread_shoota" inherit "vehicle sc.ork_deff_dread"}
{"evz_deff_dread_burna" inherit "vehicle sc.ork_deff_dread"}
{"evz_deff_dread_rokkit" inherit "vehicle sc.ork_deff_dread"}
{"evz_deff_dread_kannon" inherit "vehicle sc.ork_deff_dread"}
{"evz_deff_dread_autocannon" inherit "vehicle sc.ork_deff_dread"}
{"evz_deff_dread_zzap" inherit "vehicle sc.ork_deff_dread"}
{"evz_deff_dread_megablasta" inherit "vehicle sc.ork_deff_dread"}

("SC_Plataform_Vehicle_Default_S1" name(ork_gunwagon_kannon) camera_bone0(Visor2) camera_bone1(Visor2) zoom(tank_default) d_max(425) min(18) max(40) zoom_level(level5)
	fx(0) fy(10) fz(27)
	nx(5) ny(10) nz(10)
	zx(28.5) zy(-1.5) zz(1.75)
)

{"evz_gunwagon_kannon" inherit "vehicle sc.ork_gunwagon_kannon"}

("SC_Plataform_Vehicle_Default_S1" name(ork_gunwagon_generic) camera_bone0(foresight3) camera_bone1(foresight3) zoom(tank_default) d_max(425) min(18) max(40) zoom_level(level3)
	fx(0) fy(10) fz(27)
	nx(5) ny(10) nz(10)
	zx(55) zy(1) zz(3)
)
{"evz_gunwagon_zzap" inherit "vehicle sc.ork_gunwagon_generic"}
{"evz_gunwagon_flakk" inherit "vehicle sc.ork_gunwagon_generic"}
{"evz_gunwagon_transport" inherit "vehicle sc.ork_gunwagon_generic"}

("SC_Plataform_Vehicle_Default_S1" name(ork_battlewagon_1) camera_bone0(visor_driver) camera_bone1(visor_driver) zoom(tank_default) d_max(900) min(26) max(34) zoom_level(level5) dsb_1(basis)
	fx(50) fy(0) fz(105)
	nx(55) ny(0) nz(80)
	zx(-30) zy(0) zz(80)
)

{"evz_battlewagon_liftadrop" inherit "vehicle sc.ork_battlewagon_1"}
{"evz_battlewagon_kannon" inherit "vehicle sc.ork_battlewagon_1"}
{"evz_battlewagon_transport" inherit "vehicle sc.ork_battlewagon_1"}


("SC_Plataform_Vehicle_Default_S1" name(ork_gorkanaut) camera_bone0(Visor_Around) camera_bone1(Visor_Around) zoom(tank_default) d_max(1400) min(34) max(34) zoom_level(level5)
	fx(0) fy(10) fz(40)
	nx(36) ny(50) nz(31.5)
	zx(24) zy(1) zz(-11.5)
)

{"evz_gorkanaut" inherit "vehicle sc.ork_gorkanaut"}
{"evz_morkanaut" inherit "vehicle sc.ork_gorkanaut"}


("SC_Plataform_Vehicle_Default_S1" name(sm_dreadnought) camera_bone0(visor1) camera_bone1(visor_eyes) zoom(tank_default) d_max(400) min(24) max(40) zoom_level(level3)
	fx(0) fy(10) fz(27)
	nx(5) ny(10) nz(10)
	zx(25) zy(0) zz(10)
)

{"sm_Dreadnought" inherit "vehicle sc.sm_dreadnought"}

("SC_Plataform_Vehicle_Default_S1" name(sm_land_raider) camera_bone0(visor_around) camera_bone1(visor_around) zoom(tank_default) d_max(800) min(17) max(34) zoom_level(level5) dsb_1(basis)
	fx(0) fy(10) fz(27)
	nx(6) ny(10) nz(18.5)
	zx(15) zy(1) zz(0.5)
)
{"SM_landraider" inherit "vehicle sc.sm_land_raider"}


("SC_Plataform_Vehicle_Default_S1" name(ig_knight) camera_bone0(Visor_eyes) camera_bone1(visor_eyes) zoom(tank_default) d_max(1400) min(34) max(34) zoom_level(level3) dsb_1(basis)
	fx(0) fy(90) fz(40)
	nx(15) ny(75) nz(25)
	zx(24) zy(1) zz(-11.5)
)

{"IG_knight" inherit "vehicle sc.ig_knight"}

("SC_Plataform_Vehicle_Default_S1" name(ig_lemanruss) camera_bone0(visor_gun) camera_bone1(visor_gun) zoom(tank_default) d_max(600) min(20) max(30) zoom_level(level5) dsb_1(basis)
	fx(0) fy(0) fz(60)
	nx(10) ny(0) nz(45)
	zx(15) zy(1) zz(0.8)
)
{"ig_lemanruss" inherit "vehicle sc.ig_lemanruss"}

("SC_Plataform_Vehicle_Default_S1" name(ork_Wartrakk) camera_bone0(camera_artillery) camera_bone1(camera_artillery) zoom(tank_default) d_max(600) min(35) max(35) zoom_level(level5)
	fx(0) fy(0) fz(30)
	nx(10) ny(0) nz(10)
	zx(15) zy(0) zz(5)
)
{"EVZ_ork_wartrakk" inherit "vehicle sc.ork_Wartrakk"}

("SC_Plataform_Vehicle_Default_S1" name(sm_rhino) camera_bone0(visor2) camera_bone1(visor2) zoom(tank_default) d_max(700) min(22) max(34) zoom_level(level5) dsb_1(basis)
	fx(0) fy(15) fz(50)
	nx(6) ny(10) nz(40)
	zx(15) zy(1) zz(0.8)
)
{"SM_Rhino" inherit "vehicle sc.sm_rhino"}

("SC_Plataform_Vehicle_Default_S1" name(sm_predator_tank) camera_bone0(visor3) camera_bone1(visor3) zoom(tank_default) d_max(700) min(17) max(34) zoom_level(level5) dsb_1(basis)
	fx(0) fy(0) fz(40)
	nx(6) ny(0) nz(25)
	zx(15) zy(1) zz(2)
)
{"SM_predator" inherit "vehicle sc.sm_predator_tank"}

("SC_Plataform_Vehicle_Default_S1" name(sm_whirlwind) camera_bone0(camera_artillery) camera_bone1(camera_artillery) zoom(tank_default) d_max(700) min(35) max(35) zoom_level(level5) dsb_1(basis)
	fx(0) fy(0) fz(75)
	nx(6) ny(0) nz(50)
	zx(15) zy(1) zz(0)
)
{"SM_whirlwind_artillery" inherit "vehicle sc.sm_whirlwind"}
