
;/*========================= COD Skin ==========================*/

{"ghosthelmet"
	{on spawn
		{bone hide "guanng"}
		{if not sunlight	
			{ani_play "Night_vision_off"}
			{bone show "guanng"}
		}
	}
}

;/*============================== Weapon Define Begin ====================================*/

{"stuff weapon"					;手枪换弹时专用动画
	{on ground_hit
		{delay (* 60 8)
			{delete}
		}
	}
}

{"stuff weapon pistol"					;手枪换弹时专用动画
	{on "weapon_reload"
		{ani_play "reload" 1}
		{delay 1.4
			{ani_play "reload" -1}
		}
	}
}

(define "shell_bullets_fx"				;新的stuff抛弹壳tags——细化弹壳
	{"stuff weapon %tag"
		{on spawn
			{add_view "%shell" "shell" "FXshell"}
		}
	}
)
("shell_bullets_fx" tag(25_shell)		shell(shell_25s))
("shell_bullets_fx" tag(127_shell)		shell(shell_127s))
("shell_bullets_fx" tag(939_shell)		shell(shell_9x39s))
("shell_bullets_fx" tag(9mm_shell)		shell(shell_9x19s))
("shell_bullets_fx" tag(338_shell)		shell(shell_338s))
("shell_bullets_fx" tag(545_shell)		shell(shell_545s))
("shell_bullets_fx" tag(556_shell)		shell(shell_556s))
("shell_bullets_fx" tag(58_shell)		shell(shell_58s))
("shell_bullets_fx" tag(762_shell)		shell(shell_762s))
("shell_bullets_fx" tag(sg_shell)		shell(shell_sgs))

(define "ejectsmokes_fx"
	{"stuff weapon %tag"				;退弹壳产生烟尘
		{on spawn
			{add_view "%ejectsmokes" "ejectsmokes" "FXshell"}
		}
		{on "fire"
			{delay 0.05 {view start "ejectsmokes"}}
			{delay 0.2 {view pause "ejectsmokes"}}
		}
	}
)

("ejectsmokes_fx" tag(pistol)	ejectsmokes(ejectsmoke_small))
("ejectsmokes_fx" tag(smg)		ejectsmokes(ejectsmoke_small))
("ejectsmokes_fx" tag(rifle)	ejectsmokes(ejectsmoke_mid))
("ejectsmokes_fx" tag(shotgun)	ejectsmokes(ejectsmoke_mid))
("ejectsmokes_fx" tag(mgun)		ejectsmokes(ejectsmoke_big))
("ejectsmokes_fx" tag(sniper)	ejectsmokes(ejectsmoke_big))

(define "flash_muzzle_fx"					;增加的新3种开火特效 消炎/消音/普通
	{"stuff weapon %tag"					;特效有时不显示，正在查明原因（可能是没注册进tga吧）
		{on spawn
			{add_view "%flash" "flash_muzzle" "foresight3"}
			{add_view "%flash" "flash_muzzle" "foresight11"}
			{add_view "%flash" "flash_muzzle" "foresight12"}
			{add_view "%flash" "flash_muzzle" "foresight14"}
			;{add_view "muzzle_smoke" "smoke_muzzle" "foresight"}
			{view pause "flash_muzzle"}{view stop "flash_muzzle"}
		}
		{on "fire"
			{if prop "silenced"
				{delay 0.01 {view start "flash_muzzle"}}
				{delay 3 {view pause "flash_muzzle"}{view stop "flash_muzzle"}}
			}
			;{kill_delay "smoke_muzzle"}		;中断冒烟
			;{delay 1.8 "smoke_muzzle"		;熄火一阵枪口冒烟
			;	{view start "smoke_muzzle"}
			;}
		}
	}
)
;------------------------------------------------------------------------------------------
("flash_muzzle_fx" tag(flash_ak)			flash(flash_muzzle_ak))
("flash_muzzle_fx" tag(flash_ar)			flash(flash_muzzle_ar))
("flash_muzzle_fx" tag(flash_m16)			flash(flash_muzzle_m16))
("flash_muzzle_fx" tag(flash_m4)			flash(flash_muzzle_m4))
("flash_muzzle_fx" tag(flash_g2)			flash(flash_muzzle_g2))
;------------------------------------------------------------------------------------------
("flash_muzzle_fx" tag(flash_smg)			flash(flash_muzzle_smg))
("flash_muzzle_fx" tag(flash_smgs)			flash(flash_muzzle_smgs))
;------------------------------------------------------------------------------------------
("flash_muzzle_fx" tag(flash_mg)			flash(flash_muzzle_mg))
;------------------------------------------------------------------------------------------
("flash_muzzle_fx" tag(flash_suppressed)	flash(flash_muzzle_suppressed))
("flash_muzzle_fx" tag(flash_suppresseds)	flash(flash_muzzle_suppresseds))
;------------------------------------------------------------------------------------------
("flash_muzzle_fx" tag(flash_pstl)			flash(flash_muzzle_pistol))
("flash_muzzle_fx" tag(flash_pstls)			flash(flash_muzzle_pistols))
("flash_muzzle_fx" tag(flash_sg)			flash(flash_muzzle_shotgun))
;------------------------------------------------------------------------------------------
(define "sounds_fx"
	{"stuff weapon %tag"
		{on "fire"								;枪口回声
			{if not prop "silenced"
				{play_sound "tails"}			;新添代码
			}
		}
	}
)
("sounds_fx" tag(pistol))
("sounds_fx" tag(smg))
("sounds_fx" tag(rifle))
("sounds_fx" tag(mgun))
("sounds_fx" tag(at_rifle))
("sounds_fx" tag(shotgun))

{"bullet_sound"
	{on spawn
		{link_sound "bullet"				"projectile/bullet/bullet/"}
		{link_sound "rpg"				"projectile/bullet/rpg_rocket/"}

		{delay 0.01 ;必须
			{if bone "sound_bullet"			;检查stuff内view中连接的骨骼是否有对应的bone名
				{play_sound "bullet"}				;为子弹增加划过耳边的咻咻声
			}
			{if bone "sound_rocket_rpg"
				{play_sound "rpg"}
			}
		}
	}
	{on ground_hit
		{view stop "tail"}
	}
}
;/*==================================================================*/
{"ic tbb"		;温压弹针对建筑的特殊攻击
		;{call "break_windows"}
}

{"stuff weapon rounds"					;六发转轮弹仓换弹专用.357 mgl
	{on spawn {tags add "fire0"}}
	{on "fire"
		{if tagged "fire0"
			{tags remove "fire0"}
			{tags add "fire1"}
		else tagged "fire1"
			{tags remove "fire1"}
			{tags add "fire2"}
		else tagged "fire2"
			{tags remove "fire2"}
			{tags add "fire3"}
		else tagged "fire3"
			{tags remove "fire3"}
			{tags add "fire4"}
		else tagged "fire4"
			{tags remove "fire4"}
			{tags add "fire5"}
		else tagged "fire5"
			{tags remove "fire5"}
			{tags add "fire6"}
		else tagged "fire6"
			{tags remove "fire6"}
			{tags add "fire0"}
		}
	}
	{on "weapon_reload" overload
		{bone show "mag"}
		{ani_play "reload"}
		{delay 0.2
			{call "bullet_tear"}
		}
		{delay 2.4
			{bone hide "mag"}
			{ani_play "reload" -1}
		}
		{delay 0.4
			{tags remove "fire1"}
			{tags remove "fire2"}
			{tags remove "fire3"}
			{tags remove "fire4"}
			{tags remove "fire5"}
			{tags remove "fire6"}
			{tags add "fire0"}
		}
	}
		{on "bullet_tear"
			{if tagged "fire1"
				{tear "piece_tiny_steel" bone "bullet1" copy 
					{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
			else tagged "fire2"
				{tear "piece_tiny_steel" bone "bullet1" copy 
				{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
				{tear "piece_tiny_steel" bone "bullet2" copy 
				{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
			else tagged "fire3"
				{tear "piece_tiny_steel" bone "bullet1" copy 
				{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
				{tear "piece_tiny_steel" bone "bullet2" copy 
				{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
			else tagged "fire4"
				{tear "piece_tiny_steel" bone "bullet1" copy
				{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
				{tear "piece_tiny_steel" bone "bullet2" copy 
				{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
				{tear "piece_tiny_steel" bone "bullet3" copy 
				{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
				{tear "piece_tiny_steel" bone "bullet4" copy 
				{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
			else tagged "fire5"
				{tear "piece_tiny_steel" bone "bullet1" copy 
				{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
				{tear "piece_tiny_steel" bone "bullet2" copy 
				{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
				{tear "piece_tiny_steel" bone "bullet3" copy 
				{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
				{tear "piece_tiny_steel" bone "bullet4" copy 
				{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
				{tear "piece_tiny_steel" bone "bullet5" copy 
				{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
			else tagged "fire6"
				{tear "piece_tiny_steel" bone "bullet1" copy
					{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
				{tear "piece_tiny_steel" bone "bullet2" copy
					{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
				{tear "piece_tiny_steel" bone "bullet3" copy
					{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
				{tear "piece_tiny_steel" bone "bullet4" copy
					{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
				{tear "piece_tiny_steel" bone "bullet5" copy
					{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
				{tear "piece_tiny_steel" bone "bullet6" copy
					{impulse up -0.01 -0.02 rnd_dir 0.01 com}}
			}
			{delay 0.24
				{view hide "bullet1"}
				{view hide "bullet2"}
				{view hide "bullet3"}
				{view hide "bullet4"}
				{view hide "bullet5"}
				{view hide "bullet6"}
			}
			{delay 1.8
				{view show "bullet1"}
				{view show "bullet2"}
				{view show "bullet3"}
				{view show "bullet4"}
				{view show "bullet5"}
				{view show "bullet6"}
			}
		}
}

{"stuff weapon m202a1"					;4发弹仓换弹专用M202A1
	{on spawn {tags add "fire0"}}
	{on "fire"
		{if tagged "fire0"
			{tags remove "fire0"}
			{view hide "rocket1"}
			{tags add "fire1"}
		else tagged "fire1"
			{tags remove "fire1"}
			{view hide "rocket2"}
			{tags add "fire2"}
		else tagged "fire2"
			{tags remove "fire2"}
			{view hide "rocket3"}
			{tags add "fire3"}
		else tagged "fire3"
			{tags remove "fire3"}
			{view hide "rocket4"}
			{tags add "fire4"}
		else tagged "fire4"
			{tags remove "fire4"}
			{tags add "fire0"}
		}
	}
	{on "weapon_reload"
		{delay 8
			{view show "rocket1"}
			{view show "rocket2"}
			{view show "rocket3"}
			{view show "rocket4"}
		}
		{delay 0.4
			{tags remove "fire1"}
			{tags remove "fire2"}
			{tags remove "fire3"}
			{tags remove "fire4"}
			{tags add "fire0"}
		}
	}
}
	
{"stuff weapon fo12a1"							;开火弹鼓弹药旋转——动画法
		{on spawn
			{tags add "fire1"}
		}
		{on "weapon_reload"			;换弹重新计数
			{tags add "fire1"}
			{ani_play "fire24"}
			{tags remove "fire2"}	{tags remove "fire3"}	{tags remove "fire4"}	{tags remove "fire5"}	{tags remove "fire6"}	{tags remove "fire7"}	
			{tags remove "fire9"}	{tags remove "fire10"}	{tags remove "fire11"}	{tags remove "fire12"}	{tags remove "fire13"}	{tags remove "fire14"} 
			{tags remove "fire17"}	{tags remove "fire18"}	{tags remove "fire19"}	{tags remove "fire20"}	{tags remove "fire21"}	{tags remove "fire22"} 
			{tags remove "fire24"}	{tags remove "fire23"}	{tags remove "fire15"}	{tags remove "fire8"}	
			{delay 1.8 {ani_play "fire1" -1}}
		}
		{on "fire"					;粗糙的计数法
			{view start "shell"}
			{if tagged "fire1"
				{tags remove "fire1"}
				{view hide "fire1"}
				{tags add "fire2"}
			else tagged "fire2"
				{tags remove "fire2"}
				{view hide "fire1"}
				{tags add "fire3"}
			else tagged "fire3"
				{tags remove "fire3"}
				{ani_play "fire3"}
				{tags add "fire4"}
			else tagged "fire4"
				{tags remove "fire4"}
				{ani_play "fire4"}
				{tags add "fire5"}
			else tagged "fire5"
				{tags remove "fire5"}
				{ani_play "fire5"}
				{tags add "fire6"}
			else tagged "fire6"
				{tags remove "fire6"}
				{ani_play "fire6"}
				{tags add "fire7"}
			else tagged "fire7"
				{tags remove "fire7"}
				{ani_play "fire7"}
				{tags add "fire8"}
			else tagged "fire8"
				{tags remove "fire8"}
				{ani_play "fire8"}
				{tags add "fire9"}
			else tagged "fire9"
				{tags remove "fire9"}
				{ani_play "fire9"}
				{tags add "fire10"}
			else tagged "fire10"
				{tags remove "fire10"}
				{ani_play "fire10"}
				{tags add "fire11"}
			else tagged "fire11"
				{tags remove "fire11"}
				{ani_play "fire11"}
				{tags add "fire12"}
			else tagged "fire12"
				{tags remove "fire12"}
				{ani_play "fire12"}
				{tags add "fire13"}
			else tagged "fire13"
				{tags remove "fire13"}
				{ani_play "fire13"}
				{tags add "fire14"}
			else tagged "fire14"
				{tags remove "fire14"}
				{ani_play "fire14"}
				{tags add "fire15"}
			else tagged "fire15"
				{tags remove "fire15"}
				{ani_play "fire15"}
				{tags add "fire16"}
			else tagged "fire16"
				{tags remove "fire16"}
				{ani_play "fire16"}
				{tags add "fire17"}
			else tagged "fire17"
				{tags remove "fire17"}
				{ani_play "fire17"}
				{tags add "fire18"}
			else tagged "fire18"
				{tags remove "fire18"}
				{ani_play "fire18"}
				{tags add "fire19"}
			else tagged "fire19"
				{tags remove "fire19"}
				{ani_play "fire19"}
				{tags add "fire20"}
			else tagged "fire20"
				{tags remove "fire20"}
				{ani_play "fire20"}
				{tags add "fire21"}
			else tagged "fire21"
				{tags remove "fire21"}
				{ani_play "fire21"}
				{tags add "fire22"}
			else tagged "fire22"
				{tags remove "fire22"}
				{ani_play "fire22"}
				{tags add "fire23"}
			else tagged "fire23"
				{tags remove "fire23"}
				{ani_play "fire23"}
				{tags add "fire24"}
			else tagged "fire24"
				{tags remove "fire24"}
				{ani_play "fire24"}
				{tags add "fire1"}
			}
		}
}
	
;/*=============================== ATGM Begin =============================*/

{"stuff weapon nokeeps"
	{on "fire"
		(define "drop_launch"
			{delay %1
				{tear "piece_tiny_steel" bone "%0"
					{impulse forward 0.5 0.05 up -0.1 0.1 no_position}
					{delay 120 {delete}}
				}
				{delay 2{delete}}
			}
		)
		("drop_launch" args nlaw 10)
		("drop_launch" args m47_dragon 9)
	}
}

{"9k111"
	{on fire "gun"
		{delay 0.68
			{bone hide "rocket"}
			{delay 8
				{bone hide "gun"}
			}
		}
		{delay 5 
			{ani_wind "recoil" Begin}
		}
		{delay 11
			{bone show "rocket"}
			{bone show "gun"}
			{ani_wind "recoil" Begin}
		}
	}
}

;/*=============================== ShotGun Begin =============================*/

(define "tiny_piece_shell"				;定义霰弹的各种子弹接触不同材质所产生的特效
	{"tiny_piece_%tiny"
		{on contact sync
			{if not under_water
				{if effector "human"
					%special
					{spawn "blood_small"}
					{delay (* 0.1 %t)
						{delete}
					}
				else effector "vehicle"
					%special
					{delay (* 0.1 %t)
						{delete}
					}
				else effector "airborne"
					%special
					{delay (* 0.1 %t)
						{delete}
					}
				}
			}
		}
		{on ground_hit sync overload				;定义霰弹的子弹接触不同地面所产生的特效
			{if terrain_fx "snow"
				{spawn "%winter"}
				%special
			else terrain_fx "ice"
				{spawn "ex_bul_sm_snow"}
				%special
			else terrain_fx "water"
				{spawn "%water"}
				{delete}
			else terrain_fx "shallow_water"
				{spawn "%water"}
				{delete}
			else terrain_fx "deep_water"
				{spawn "ex_bul_sm_w"}
				{delete}
			else			
				{if rain
					{spawn "%mud"}%special
				else season "winter"
					{spawn "%winter"}%special
				else
					{spawn "%ground"}%special
				}
			}
			{delay (* 0.1 %t)
				{delete}
			}
		}
	}
)
					;弹种tag		打雪地产生特效			打水产生特效		打泥地产生特效				打地面产生特效				消失时间	伤害+特殊效果|blastwave第一个数值是伤害 其它俩个是范围值
("tiny_piece_shell" tiny(nor)	winter(ex_bul_sm_snow)	water(ex_bul_sm_w)	mud(ex_bul_sm_mud)			ground(ex_bul_sm_dust)		t(1)	special({blastwave c4 0.48 r0 0.1 r1 0.5 position}))
("tiny_piece_shell" tiny(flechette)	winter(ex_bul_sm_snow)	water(ex_bul_sm_w)	mud(ex_bul_sm_mud)		ground(ex_bul_sm_dust)		t(2.5)	special({blastwave c4 0.32 r0 0.1 r1 0.25 position}))
("tiny_piece_shell" tiny(db)	winter(ex_bul_heavy_ex) water(ex_bul_sm_w)	mud(ex_bul_heavy_ex)		ground(ex_bul_heavy_ex) 	t(1)	special({blastwave c4 0.16 r0 0.1 r1 0.5 position}{fire radius 1 time 0.01 heating 0.01}))
("tiny_piece_shell" tiny(exp)	winter(ex_he_15mm_snow) water(ex_bul_big_w) mud(ex_he_autocannon_mud)	ground(ex_he_15mm)			t(0.5)	special({blastwave c4 0.8 r0 1 r1 2 position}))
("tiny_piece_shell" tiny(sg1)	winter(ex_bul_sm_snow)	water(ex_bul_sm_w)	mud(ex_bul_sm_mud)			ground(ex_bul_sm_dust)		t(1)	special({blastwave c4 0.48 r0 0.1 r1 0.5 position}))
{"stuff weapon rifle shotgun shotgun_doubles"			;针对M725双管霰弹的特殊换弹
	{on "weapon_reload" overload
		(define "double_shots"
			{delay %0
				{tear "piece_tiny_steel" bone "bullet%1" copy		;从枪膛退出两发弹壳
					{impulse up 1.5 1 dir 1 1 cx 1 1 cy 1 1 rnd_dir %1 no_position}
				}
				{play_sound "eject_clip"}
			}
		)
		("double_shots" args 0.5 1)
		("double_shots" args 0.6 2)
		{delay 2.2
			{ani_play "reload" -1}
		}
	}
}

;/*========================= Knife Begin ==========================*/

{"stuff weapon grenade melee"
	{on spawn
		{link_sound "throw"	"weapon/shot/small-arms/s1/d1/knife"}
	}
	{on contact sync
		{if effector "human"
			{with_effector
				{if not dead
					{if contact_velocity 5
						{start_sound "hit/human/knife/soft/"}
					}
					{if contact_velocity 10
						{start_sound "hit/human/knife/hard/"}
					}
				}
			}
		}
	}
}

;/*================================== GAS Shell =========================================*/	;毒气弹定义

{"gas_volume_cylinder"					;毒气碰撞体接触人后使人掉血并使其咳嗽
	{on contact
		{if effector "human"
			{with_effector
				{if not dead
						{health_damage_count 20
							{effects "hit" "hit" "hit" "hit" "hit"}
						}
						{if rand 0.05 {knockdown 5 2}}
						{start_sound "talk/human/cough/"}
					;{tags add "gas"}
				}
			}
		}
	}
}

{"gas"
	{on spawn			;触地开始激发
		{add_view 	"smoke_green_small" 	"gas_smoke"		"root"}		;毒气弹特效
		{add_view 	"smoke_green_small" 	"gas_smoke"		"fx_smoke"}		;毒气弹特效
		{add_view 	"smoke_green_big" 		"gas"			"root"}

		{link_sound "smoke_pop"		"detonation/grenade_smoke/generic/pop"}		;喷烟音效
		{link_sound "smoke_loop"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"		"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}
	{on ground_hit			;触地开始激活
		{delay_effect 5 "activate"}
	}

	{on "activate" overload
		{view start "gas_smoke"}
		{play_sound "smoke_pop"}
		{play_sound "smoke_loop" 1}
		(define "spawn_gas_volume"
			{spawn "gas_volume_cylinder" offset %0 %1 2}		;产生碰撞体
		)
		{delay 2
			{view start "gas"}
		}
		{set "gas" 1}				;开始循环条件
		{delay 0.5 
			("spawn_gas_volume" args 0 0)
		}
		{delay 1.5 
			("spawn_gas_volume" args 0 0)
		}
		{delay 2.5 
			("spawn_gas_volume" args 0 0)
		}
		{delay 5 
			{call "spawn_gas_volume"}	;开始循环
			
		}
		{delay 30
			{view stop "gas_smoke"}
			{stop_sound "smoke_loop"}
			{play_sound "smoke_end"}
		}
		{delay 45
			{view stop "gas"}
		}
		{delay 50
			{set "gas" 0}		;循环终止
			{delete}
		}
	}

	{on "spawn_gas_volume"			;产生毒气碰撞体
		{delay 0.5
			("spawn_gas_volume" args 0 0)
			("spawn_gas_volume" args 100 0)
			("spawn_gas_volume" args -100 0)
			("spawn_gas_volume" args 0 100)
			("spawn_gas_volume" args 0 -100)
			("spawn_gas_volume" args 75 75)
			("spawn_gas_volume" args -75 -75)
			("spawn_gas_volume" args -75 75)
			("spawn_gas_volume" args 75 -75)
		}
		{if "gas"			;持续循环条件
			{delay_effect 1 "spawn_gas_volume"}		;自己触发自己导致循环
		else				
			{set "gas" 0}	;终止循环条件
		}
	}
}

;/*========================= Grenade Begin ==========================*/

{"grenade flash"					;闪光弹的定义
	{on spawn
		{link_sound "flash_impact"	"detonation/grenade_flash/impact/"}
		{link_sound "flash_collision"	"detonation/grenade_flash/collision/"}
		{link_sound "flash_start"	"detonation/grenade_flash/start/"}
		
		{add_view "spark_wire_break"			"flash1" "root"}		
	}
	{on "onThrow"
		{volumes disable touch select}
		{play_sound "flash_impact"}
	}
	{on ground_hit			;触地开始激发
		{if stuff_activated
			{if not name "water"
				{if not tagged "activated"
					{tags add "activated"}
					{delay 1
						{call "activate"}
					}
				}
			{play_sound "flash_collision"}
			else
				{hide 1}
			}
		}
	}
	{on contact			;接触开始激发
		{if stuff_activated
			{if not tagged "activated"
				{if effector "human"
					;do nothing
				else 
					{tags add "activated"}
					{delay 1
						{call "activate"}
					}
					{play_sound "flash_collision"}
				}
			}
		}
	}
	{on "activate"					;激发后产生特殊碰撞体+特效
		{view start "flash1"}
		{spawn "ex_grenade_flash"}
		{play_sound "flash_start"}

		(define "spawn_volumes"
			{spawn "flash_volume_box" offset %0 %1 0
				{hide 2}
			}
		)
		{delay 0.01
			("spawn_volumes" args 0 0)
			("spawn_volumes" args 55 0)
			("spawn_volumes" args -55 0)
			("spawn_volumes" args 0 55)
			("spawn_volumes" args 0 -55)
			("spawn_volumes" args 55 55)
			("spawn_volumes" args -55 -55)
			("spawn_volumes" args -55 55)
			("spawn_volumes" args 55 -55)
		}
		{delay 3
			{hide 1}
		}
	}
	{on blast_hit overload}			;// keeps smoke grenades from deleting by blast damage after being thrown
	{on bullet_hit overload}		;// keeps smoke grenades from deleting by bullet hit after being thrown
}
{"flash_volume_box"					;闪光弹碰撞体接触人后使人昏迷倒地(120±1)s
	{on contact
		{if effector "human"
			{with_effector
				{if not dead
					{knockdown 120 1}
				}
			}
		}
	}
}

{"grenade pullout"				;投掷手雷时拉环	抛环+音效
	{on "onThrow" overload
		{link_sound "pullout"	"detonation/grenade_flash/pullout/pull"}
		{tear "piece_tiny_steel" bone "pull" {impulse up -0.2}}
		{delay 1.5
			{call "show_marker1"}
		}
		{delay 3.5
			{call "show_marker2"}
		}
		{play_sound "pullout"}
		{view hide "bullet"}
		{delay 1
			{view hide "pull"}
		}
	}
}

{"grenade contact trap"
	{on contact overload
		{if stuff_activated
			{if not tagged "mine_planted"		;IED陷阱被载具压到后引爆
				{if tagged "grounded"			;投掷后启动
					{if effector "cannon"
						{delay 0.01 0.01
							{call "detonate"}
						}
					else effector "moto"
						{delay 0.01 0.01
							{call "detonate"}
						}
					else effector "vehicle"
						{delay 0.01 0.01
							{call "detonate"}
						}
					else effector "tank"
						{delay 0.01 0.01
							{call "detonate"}
						}
					}
				}
			}
		}
	}
	{on "detonate"				;引爆
		{volumes disable all}
		{stuff_detonate}
	}
}

{"rdg2"
	{on "add_smoke" overload
		{add_view "spark_grenade"				"sparks" "fx_smoke1"}
		{add_view "smoke_grenade_launcher_init"	"smoke0" "fx_smoke1"}
		{add_view "smoke_grenade_launcher"		"smoke1" "fx_smoke1"}
		{add_view "spark_grenade"				"sparks" "fx_smoke2"}
		{add_view "smoke_grenade_launcher_init"	"smoke0" "fx_smoke2"}
		{add_view "smoke_grenade_launcher"		"smoke1" "fx_smoke2"}
		{add_view "smoke_cover_norm"			"smoke2" "root"}
		{add_view "smoke_cover_big"				"smoke3" "root"}
	}
	{on "add_grenade_sound"
		{link_sound "smoke_loop"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}
	("smoke_time" args 25 20)
}
{"rdgm"
	{on ground_hit			;触地开始激发，击水无效
		{if not terrain_fx "water"
			{link_sound "grenadehit" "hit/ground/grenade/"}
			{play_sound "grenadehit"}
			{call "activate"}
		}
	}
}
{"rgn"
	{on spawn
		{volumes disable contact}
	}
	{on contact
		{volumes enable contact}
	}
}
{"rgo"
	{on spawn
		{volumes disable contact}
	}
	{on contact
		{delay 0.5
			{volumes enable contact}
		}
	}
}
{"molotov"
	{on spawn
		{add_view "fire_fueltank_pierce" "fireing" "fire"}	;着火特效
		{delay 0.8 "fireing"
			{view start	"fireing"}			;拿出并点燃瓶口的布
		}
	}
	{on "add_grenade_sound" overload
		{link_sound "equip" "weapon/equip/grenade/molotov_equip"}
		{link_sound "throw" "weapon/shot/grenade/molotov_throw"}
		{link_sound "loop" "weapon/equip/grenade/molotov_loop"}
	}
}
{"thermo"
	{on "add_grenade_sound"
		{link_sound "smoke_pop"	"detonation/grenade_smoke/generic/pop"}
		{link_sound "smoke_loop"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_loop"}
		{link_sound "smoke_end"	"detonation/grenade_smoke/generic/detonation_misc_s1_smoke_generic_end_01"}
	}
	("smoke_time" args 20 24)
}
{"zarya"							;接触立即激发
	{on ground_hit overload
		{if stuff_activated
			{if not name "water"
				{call "activate"}
				{play_sound "flash_collision"}
			else
				{hide 1}
			}
		}
	}
}


;/*========================= Offmap BOMB  ==========================*/

{"offmap_mortar_82mm_gas"		;禁止毒气迫击炮弹消失
	{on "explosion" overload}
}

{"offmap_dummy thermite_bomb"
	{on spawn
		{add_view "grenade_debris_air2" "tail" "root"}
		{call "tail"}
	}
	{on "tail"
		{view start "tail"}
		{delay 1.5 "tail"
			{call "tail"}
		}
	}
}

{"offmap_air_ic"
	{on "explosion"			;航空汽油弹新特效
		{spawn "ex_ic_bomb"}
		{spawn "burned_spot01" scale 8 offset -75 0 0 random_orientation}
		{spawn "burned_spot01" scale 8 offset 75 0 0 random_orientation}
		{spawn "burned_spot01" scale 8 offset 0 75 0 random_orientation}
		{spawn "burned_spot01" scale 8 offset 0 -75 0 random_orientation}
		{spawn "burned_spot_round" scale 8 offset -75 75 0 random_orientation}
		{spawn "burned_spot_round" scale 8 offset 75 75 0 random_orientation}
		{spawn "burned_spot_round" scale 8 offset -75 -75 0 random_orientation}
		{spawn "burned_spot_round" scale 8 offset 75 -75 0 random_orientation}
	}
}
{"offmap_arty_105mm_vt"
	{on spawn
		{if air				;延时空爆
			{delay 2.8 0.2
				{call "explosion"}
			}
		}
	}
}
{"offmap_arty_155mm_vt"
	{on spawn
		{if air				;延时空爆
			{delay 2.7 0.3
				{call "explosion"}
			}
		}
	}
}
(define "ammo"				;子母弹小炸弹定义
	{spawn "%shell" random_position %position random_orientation
		{impulse forward 0 2.5 dir 5 10 rnd_dir (* 0.5 %position)}
	}
)
{"offmap_air_cm"
	{on spawn
			{delay 8.4			;空投子母弹在高空生成后延时8.4s在40x40m的区域内产生80个小炸弹并爆炸
				("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400))
				("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400))
				("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400))
				("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400))
				("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400))
				("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400))
				("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400))
				("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400)) ("ammo" shell(cm_bomb) position(400))
				{call "explosion"}
			}
	}
}
{"offmap_rocket_cm"
	{on spawn
			{delay 0.35			;火箭子母弹在高空生成后延时2.6s在25x25m的区域内产生20个小炸弹并爆炸
				("ammo" shell(cm_bomb) position(250)) ("ammo" shell(cm_bomb) position(250))
				("ammo" shell(cm_bomb) position(250)) ("ammo" shell(cm_bomb) position(250))
				("ammo" shell(cm_bomb) position(250)) ("ammo" shell(cm_bomb) position(250))
				("ammo" shell(cm_bomb) position(250)) ("ammo" shell(cm_bomb) position(250))
				("ammo" shell(cm_bomb) position(250)) ("ammo" shell(cm_bomb) position(250))
				("ammo" shell(cm_bomb) position(250)) ("ammo" shell(cm_bomb) position(250))
				("ammo" shell(cm_bomb) position(250)) ("ammo" shell(cm_bomb) position(250))
				("ammo" shell(cm_bomb) position(250)) ("ammo" shell(cm_bomb) position(250))
				("ammo" shell(cm_bomb) position(250)) ("ammo" shell(cm_bomb) position(250))
				("ammo" shell(cm_bomb) position(250)) ("ammo" shell(cm_bomb) position(250))
				{call "explosion"}
			}
	}
}
{"offmap_arty_152mm_thermite"
	{on spawn
			{delay 2.0			;空投子母弹在高空生成后延时8.4s在40x40m的区域内产生80个小炸弹并爆炸
				("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400))
				("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400))
				("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400))
				("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400)) ("ammo" shell(thermite_bomb) position(400))
				{call "explosion"}
			}
	}
}
;/*=========================  Shell Reinforcement Sound ==========================*/

{"arty_shell"		;场外支援音效
	{on spawn
		{start_sound "weapon/shot/ambient_cannon"}
		{delay 2
			{start_sound "weapon/shot/mortar/whistle"}
			{delay 0.5
				{start_sound "weapon/shot/artillery"}
			}
		}
	}
}

{"mortar_shell"		;场外支援音效
	{on spawn
		{link_sound "Incoming" "projectile/Mortar/Incoming/"}
		{start_sound "weapon/shot/cannon/s2/d3/Shared/Mortar/" ambient}
		{delay 5 1
			{play_sound "Incoming"}
		}
	}
}

{"bomb_shell"		;场外支援音效
	{on spawn
		{link_sound "Incoming" "projectile/bomb/Incoming/"}
		{delay 0.1
			{play_sound "Incoming"}
		}
	}
}

{"rocket_shell"		;场外支援音效+尾迹
	{on spawn
		{add_view "rocket_smoke" "trace" "tail"}
		{view start "trace"}
		{impulse up -56.25 forward 15 rnd_dir 3 com}
		{start_sound "projectile/shell/rocket/"}
	}
	{on ground_hit sync
		{call "explosion"}
	}
	{on contact sync
		{call "explosion"}
	}
	{on "explosion"
		{stuff_detonate}
	}
}

;/*========================= COD OFFmap Reinforcement ==========================*/

{"stuff weapon binocular"
	{on spawn			;随机皮肤
		{if rand 0.5 {tex_mod "camo"}}
		{if rand 0.5 {tex_mod "black"}}
	}
	{on "fire"	sync	;开火抛出一个点位并自我删除(一次性)
		{if rand 0.4
			{spawn "offmap_aim" "root" x		;渐进炮击支援
				{tags add "aiming"}
				{impulse dir 2.05 0.15 com}
				{gravity 0}
				{linear_damping 0}
			}
			{delay_ex 0.1 {delete}}
		else
			{spawn "offmap_ammo" offset 0 0 2		;炮击支援
				{impulse dir 5.4 0.6 com}
				{gravity 0}
				{linear_damping 0}
				{delay 30 5
					{spawn "offmap_aim" "root" x offset 0 0 -10 random_position 25}
				}
			}
			{delay_ex 0.1 {delete}}
		}
	}
}

{"offmap_dummy offmap_aim"				;场外支援
	(define "offmap_bomb"				;空袭专用场外支援炸弹生成
		{delay %delay
			{if tagged "%shell"
				{spawn "%shell" offset 0 0 (* %height 5) random_position %postion}
				{kill_delay "delete"}
				{delay 0.2
					{start_sound "vehicle/airborne/cargo_plane_flyby"}
					{delay 10	"delete"		;延时10s删除场外袭击指示
						{call "delete"}
					}
				}
			}
		}
	)
	(define "offmap_ammo"				;炮击专用场外支援炮弹生成
		{delay %delay
			{if tagged "%shell"
				{spawn "%shell" offset -300 0 (* %height 2.5) random_position (* 2.8 %postion)}
				{kill_delay "delete"}
				{delay 10 "delete"		;延时10s删除场外袭击指示
					{call "delete"}
				}
			}
		}
	)
	(define "offmap_rocket"				;火箭专用场外支援火箭弹生成
		{delay %delay
			{if tagged "%shell"
				{spawn "%shell" offset -500 0 %height random_position (* 2 %postion)
					{impulse forward -90 -25 dir 5 10 rnd_dir %delay com}
					{gravity 2.5}
				}
				{kill_delay "delete"}
				{delay 15 "delete"		;延时15s删除场外袭击指示
					{call "delete"}
				}
			}
		}
	)
	
	(define "rnd_offmap_1x1"		;场外袭击轮次:延时 炮弹高度 弹种 范围
		("offmap_bomb" delay(3) height(1000) shell(%shell) postion(50))
	)

	(define "rnd_offmap_1x3"
		("offmap_ammo" delay(3) height(1500) shell(%shell) postion(250))

		("offmap_ammo" delay(13) height(1500) shell(%shell) postion(150))

		("offmap_ammo" delay(23) height(1500) shell(%shell) postion(50))
	)

	(define "rnd_offmap_2x1"
		("offmap_bomb" delay(4) height(600) shell(%shell) postion(100))
		("offmap_bomb" delay(4.5) height(600) shell(%shell) postion(200))
	)
	(define "rnd_offmap_2x3"
		("offmap_ammo" delay(4) height(1200) shell(%shell) postion(600))
		("offmap_ammo" delay(4.5) height(1200) shell(%shell) postion(500))
		
		("offmap_ammo" delay(14) height(1200) shell(%shell) postion(450))
		("offmap_ammo" delay(14.5) height(1200) shell(%shell) postion(300))
		
		("offmap_ammo" delay(24) height(1200) shell(%shell) postion(250))
		("offmap_ammo" delay(24.5) height(1200) shell(%shell) postion(150))
	)

	(define "rnd_offmap_4x1"
		("offmap_bomb" delay(2) height(600) shell(%shell) postion(125))
		("offmap_bomb" delay(2.5) height(600) shell(%shell) postion(150))
		("offmap_bomb" delay(3) height(600) shell(%shell) postion(175))
		("offmap_bomb" delay(3.5) height(600) shell(%shell) postion(200))
	)

	(define "rnd_offmap_4x6"
		("offmap_ammo" delay(5) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(5.5) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(6) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(6.5) height(1000) shell(%shell) postion(372))
		
		("offmap_ammo" delay(15) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(15.5) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(16) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(16.5) height(1000) shell(%shell) postion(372))
		
		("offmap_ammo" delay(25) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(25.5) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(26) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(26.5) height(1000) shell(%shell) postion(372))
		
		("offmap_ammo" delay(35) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(35.5) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(36) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(36.5) height(1000) shell(%shell) postion(372))
		
		("offmap_ammo" delay(45) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(45.5) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(46) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(46.5) height(1000) shell(%shell) postion(372))
		
		("offmap_ammo" delay(55) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(55.5) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(56) height(1000) shell(%shell) postion(372))
		("offmap_ammo" delay(56.5) height(1000) shell(%shell) postion(372))
	)
	(define "rnd_offmap_8x5"
		("offmap_ammo" delay(3) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(3.5) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(4) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(4.5) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(5) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(5.5) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(6) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(6.5) height(1000) shell(%shell) postion(308))

		("offmap_ammo" delay(13) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(13.5) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(14) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(14.5) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(15) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(15.5) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(16) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(16.5) height(1000) shell(%shell) postion(308))
		
		("offmap_ammo" delay(23) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(23.5) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(24) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(24.5) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(25) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(25.5) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(26) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(26.5) height(1000) shell(%shell) postion(308))
		
		("offmap_ammo" delay(33) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(33.5) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(34) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(34.5) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(35) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(35.5) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(36) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(36.5) height(1000) shell(%shell) postion(308))
		
		("offmap_ammo" delay(43) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(43.5) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(44) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(44.5) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(45) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(45.5) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(46) height(1000) shell(%shell) postion(308))
		("offmap_ammo" delay(46.5) height(1000) shell(%shell) postion(308))
	)

	(define "rnd_offmap_10x3"
		("offmap_ammo" delay(3) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(3.5) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(4) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(4.5) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(5) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(5.5) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(6) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(6.5) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(7) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(7.5) height(1200) shell(%shell) postion(164))
		
		("offmap_ammo" delay(13) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(13.5) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(14) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(14.5) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(15) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(15.5) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(16) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(16.5) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(17) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(17.5) height(1200) shell(%shell) postion(164))
		
		("offmap_ammo" delay(23) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(23.5) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(24) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(24.5) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(25) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(25.5) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(26) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(26.5) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(27) height(1200) shell(%shell) postion(164))
		("offmap_ammo" delay(27.5) height(1200) shell(%shell) postion(164))
	)
	(define "rnd_offmap_10x2"
		("offmap_ammo" delay(2) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(2.5) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(3) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(3.5) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(4) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(4.5) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(5) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(6.5) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(7) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(7.5) height(1200) shell(%shell) postion(240))
		
		("offmap_ammo" delay(12) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(12.5) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(13) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(13.5) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(14) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(14.5) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(15) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(16.5) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(17) height(1200) shell(%shell) postion(240))
		("offmap_ammo" delay(17.5) height(1200) shell(%shell) postion(240))
	)

	(define "rnd_offmap_18x4"
		("offmap_rocket" delay(1) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(2) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(3) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(4) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(5) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(6) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(7) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(8) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(9) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(10) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(11) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(12) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(13) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(14) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(15) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(16) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(17) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(18) height(900) shell(%shell) postion(488))
		
		("offmap_rocket" delay(31) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(32) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(33) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(34) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(35) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(36) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(37) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(38) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(39) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(40) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(41) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(42) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(43) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(44) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(45) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(46) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(47) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(48) height(900) shell(%shell) postion(488))
		
		("offmap_rocket" delay(51) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(52) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(53) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(54) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(55) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(56) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(57) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(58) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(59) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(60) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(61) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(62) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(63) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(64) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(65) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(66) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(67) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(68) height(900) shell(%shell) postion(488))
		
		("offmap_rocket" delay(71) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(72) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(73) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(74) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(75) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(76) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(77) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(78) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(79) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(80) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(81) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(82) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(83) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(84) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(85) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(86) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(87) height(900) shell(%shell) postion(488))
		("offmap_rocket" delay(88) height(900) shell(%shell) postion(488))
	)
	(define "rnd_offmap_8x6"
		("offmap_rocket" delay(2) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(3) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(4) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(5) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(6) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(7) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(8) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(9) height(900) shell(%shell) postion(560))
		
		("offmap_rocket" delay(22) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(23) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(24) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(25) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(26) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(27) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(28) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(29) height(900) shell(%shell) postion(560))
		
		("offmap_rocket" delay(42) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(43) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(44) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(45) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(46) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(47) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(48) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(49) height(900) shell(%shell) postion(560))
		
		("offmap_rocket" delay(62) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(63) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(64) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(65) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(66) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(67) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(68) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(69) height(900) shell(%shell) postion(560))
		
		("offmap_rocket" delay(82) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(83) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(84) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(85) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(86) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(87) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(88) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(89) height(900) shell(%shell) postion(560))
		
		("offmap_rocket" delay(102) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(103) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(104) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(105) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(106) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(107) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(108) height(900) shell(%shell) postion(560))
		("offmap_rocket" delay(109) height(900) shell(%shell) postion(560))
	)
	
	{on spawn
		{delay 0.1
			{call_synced "tagsadd"}			;随机场外袭击 VT空爆弹 IC燃烧弹 WP白磷弹 CM子母弹 GAS毒气弹 SM烟雾弹
			{if tagged "aiming"
				{delay_effect 42 6 "offmap_reinf"}
			else
				{delay_effect 14 2 "offmap_reinf"}
			}
		}
	}

	{on "tagsadd"			;随机且基本只有一种袭击有时可能两种同时出现
		(define "tag_remove"
			;{tags remove "offmap_air_1000lb"}
			;{tags remove "offmap_air_500lb"}
			;{tags remove "offmap_air_wp"}
			;{tags remove "offmap_air_ic"}
			;{tags remove "offmap_air_250lb"}
			;{tags remove "offmap_air_cm"}

			{tags remove "offmap_arty_105mm"}
			{tags remove "offmap_arty_105mm_sm"}
			{tags remove "offmap_arty_105mm_vt"}
			{tags remove "offmap_arty_122mm"}
			{tags remove "offmap_arty_122mm_sm"}
			{tags remove "offmap_arty_152mm"}
			{tags remove "offmap_arty_152mm_thermite"}
			{tags remove "offmap_arty_155mm"}
			{tags remove "offmap_arty_155mm_vt"}
			
			{tags remove "offmap_mortar_240mm"}
			{tags remove "offmap_mortar_203mm"}
			{tags remove "offmap_mortar_82mm"}
			{tags remove "offmap_mortar_82mm_gas"}
			{tags remove "offmap_mortar_82mm_sm"}
			{tags remove "offmap_mortar_120mm"}
			{tags remove "offmap_mortar_120mm_ic"}

			{tags remove "offmap_rocket_227mm"}
			{tags remove "offmap_rocket_122mm"}
			{tags remove "offmap_rocket_140mm"}
			{tags remove "offmap_rocket_ic"}
			{tags remove "offmap_rocket_cm"}
		)
		(define "tag_add"
			{if rand 0.04
				("tag_remove")				;先删除再添加tag如果以下tag都没有随机到则默认105mm炮弹袭击
				{tags add "%reinf"}
			}
		)
		;("tag_add" reinf(offmap_air_1000lb))
		;("tag_add" reinf(offmap_air_500lb))
		;("tag_add" reinf(offmap_air_wp))
		;("tag_add" reinf(offmap_air_ic))
		;("tag_add" reinf(offmap_air_250lb))
		;("tag_add" reinf(offmap_air_cm))

		("tag_add" reinf(offmap_arty_105mm))
		("tag_add" reinf(offmap_arty_105mm_sm))
		("tag_add" reinf(offmap_arty_105mm_vt))
		("tag_add" reinf(offmap_arty_122mm))
		("tag_add" reinf(offmap_arty_122mm_sm))
		("tag_add" reinf(offmap_arty_152mm))
		("tag_add" reinf(offmap_arty_152mm_thermite))
		("tag_add" reinf(offmap_arty_155mm))
		("tag_add" reinf(offmap_arty_155mm_vt))

		("tag_add" reinf(offmap_mortar_240mm))
		("tag_add" reinf(offmap_mortar_203mm))
		("tag_add" reinf(offmap_mortar_82mm))
		("tag_add" reinf(offmap_mortar_82mm_gas))
		("tag_add" reinf(offmap_mortar_82mm_sm))
		("tag_add" reinf(offmap_mortar_120mm))
		("tag_add" reinf(offmap_mortar_120mm_ic))

		("tag_add" reinf(offmap_rocket_227mm))
		("tag_add" reinf(offmap_rocket_122mm))
		("tag_add" reinf(offmap_rocket_140mm))
		("tag_add" reinf(offmap_rocket_ic))
		("tag_add" reinf(offmap_rocket_cm))
	}

	{on "offmap_reinf"
		;("rnd_offmap_1x1" shell(offmap_air_1000lb))				;场外袭击弹种tag和弹药

		;("rnd_offmap_2x1" shell(offmap_air_500lb))
		;("rnd_offmap_2x1" shell(offmap_air_wp))
		;("rnd_offmap_2x1" shell(offmap_air_ic))

		;("rnd_offmap_4x1" shell(offmap_air_250lb))
		;("rnd_offmap_4x1" shell(offmap_air_cm))

		("rnd_offmap_4x6" shell(offmap_arty_105mm))
		("rnd_offmap_4x6" shell(offmap_arty_105mm_sm))
		("rnd_offmap_4x6" shell(offmap_arty_105mm_vt))
		("rnd_offmap_4x6" shell(offmap_arty_122mm))
		("rnd_offmap_4x6" shell(offmap_arty_122mm_sm))

		("rnd_offmap_8x5" shell(offmap_arty_152mm))
		("rnd_offmap_8x5" shell(offmap_arty_152mm_thermite))
		("rnd_offmap_8x5" shell(offmap_arty_155mm))
		("rnd_offmap_8x5" shell(offmap_arty_155mm_vt))
		
		("rnd_offmap_1x3" shell(offmap_mortar_240mm))

		("rnd_offmap_2x3" shell(offmap_mortar_203mm))

		("rnd_offmap_10x3" shell(offmap_mortar_82mm))
		("rnd_offmap_10x3" shell(offmap_mortar_82mm_gas))
		("rnd_offmap_10x3" shell(offmap_mortar_82mm_sm))

		("rnd_offmap_10x2" shell(offmap_mortar_120mm))
		("rnd_offmap_10x2" shell(offmap_mortar_120mm_ic))
		
		("rnd_offmap_1x3" shell(offmap_rocket_227mm))

		("rnd_offmap_18x4" shell(offmap_rocket_122mm))

		("rnd_offmap_8x6" shell(offmap_rocket_140mm))
		("rnd_offmap_8x6" shell(offmap_rocket_ic))
		("rnd_offmap_8x6" shell(offmap_rocket_cm))
	}

	{on "delete" {delete}}
}


;/*=============================================================================*/

;					不同距离枪声的变化,需要在每把枪的def里添加props
;//////////////////////////////////////////////////////////////////////////////////////////////////////

{"stuff weapon m14"						;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/M14/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/M14/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Crack"}
	}
}
{"stuff weapon m16_16in"				;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/M16_16in/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/M16_16in/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Clean"}
	}
}
{"stuff weapon m16_gau5a"				;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/M16_gau5a/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/M16_gau5a/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Dense"}
	}
}
{"stuff weapon m16a2"					;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/M16A2/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/M16A2/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Soft"}
	}
}

{"stuff weapon ak47"					;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/AK47/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/AK47/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_High"}
	}
}
{"stuff weapon ak47_draco"				;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/AK47_draco/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/AK47_draco/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Dense"}
	}
}
{"stuff weapon ak47_krinkov"			;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/AK47_krinkov/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/AK47_krinkov/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
}
{"stuff weapon ak74"					;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/ak74/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/ak74/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Soft"}
	}
}
{"stuff weapon sks"						;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/smallarms/s3/d2/RUS/SVT40/"}
		{link_sound			"far"			"weapon/shot/smallarms/s3/d3/RUS/SVT40/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/soft/AWCK_ADD_Tails_Outdoor_Flanging"}
	}
}

{"stuff weapon f2000"					;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/F2000/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/F2000/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Clean"}
	}
}

{"stuff weapon 98k"						;步枪
	{on spawn
		{link_sound 		"open_bolt"		"weapon/reload/open_bolt/98k"}
		{link_sound 		"close_bolt"		"weapon/reload/close_bolt/98k"}
		{link_sound 		"action_recoil"	"weapon/shot/smallarms/s3/recoil/GER/K98k/"}
		{link_sound 		"mid"				"weapon/shot/smallarms/s3/d2/GER/K98k/"}
		{link_sound 		"far"			"weapon/shot/smallarms/s3/d3/GER/K98k/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Clean"}
	}
}
{"stuff weapon hk53"					;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/HK53/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/HK53/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Crack"}
	}
}
{"stuff weapon hk416"					;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/HK416/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/HK416/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Wood_Hills"}
	}
}
{"stuff weapon sig552"					;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/SIG552/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/SIG552/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Wood_Hills"}
	}
}

{"stuff weapon fal5042"					;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/FAL5042/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/FAL5042/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Soft"}
	}
}
{"stuff weapon fal5062"					;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/FAL5062/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/FAL5062/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Soft"}
	}
}
{"stuff weapon l96a1"					;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/L96A1/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/L96A1/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Crack"}
	}
}
{"stuff weapon malyuk"					;步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/malyuk/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/malyuk"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Crack"}
	}
}

;//////////////////////////////////////////////////////////////////////////////////////////////////////

{"stuff weapon m82a1"					;狙击步枪
	{on spawn
		{link_sound 		"open_bolt"		"weapon/reload/open_bolt/m1895"}
		{link_sound 		"close_bolt"		"weapon/reload/close_bolt/m1895"}
		{link_sound 		"action_recoil"		"weapon/shot/smallarms/s3/recoil/GER/K98k/"}
		{link_sound			"mid"		"weapon/shot/small-arms/s3/d2/M82A1/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/M82A1/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Dense"}
	}
}
{"stuff weapon m24e1"					;狙击步枪
	{on spawn
		{link_sound 		"open_bolt"		"weapon/reload/open_bolt/m24"}
		{link_sound 		"close_bolt"		"weapon/reload/close_bolt/m24"}
		{link_sound 		"action_recoil"		"weapon/action/recoil/sniper/"}
		{link_sound			"mid"		"weapon/shot/small-arms/s3/d2/M24E1/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/M24E1/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Wood_Hills"}
	}
}
{"stuff weapon model700_20in"			;狙击步枪
	{on spawn
		{link_sound 		"open_bolt"		"weapon/reload/open_bolt/ax-50"}
		{link_sound 		"close_bolt"		"weapon/reload/close_bolt/ax-50"}
		{link_sound 		"action_recoil"		"weapon/action/recoil/sniper/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/Model700_20in/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/Model700_20in/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
}
{"stuff weapon model700_338"			;狙击步枪
	{on spawn
		{link_sound 		"open_bolt"		"weapon/reload/open_bolt/hdr"}
		{link_sound 		"close_bolt"		"weapon/reload/close_bolt/hdr"}
		{link_sound 		"action_recoil"		"weapon/action/recoil/sniper/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/Model700_338/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/Model700_338/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_High"}
	}
}

;//////////////////////////////////////////////////////////////////////////////////////////////////////

{"stuff weapon aug"							;冲锋枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/smg/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s1/d2/AUG/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s1/d3/AUG/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/soft/AWCK_ADD_Tails_Outdoor_Flanging"}
	}
}

{"stuff weapon uzi_9mm"						;冲锋枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/smg/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s1/d2/UZI_9mm/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s1/d3/UZI_9mm/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/soft/AWCK_ADD_Tails_Indoor_Shooting_Range_01"}
	}
}
{"stuff weapon uzi_45"						;冲锋枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/smg/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s1/d2/UZI_45/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s1/d3/UZI_45/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/soft/AWCK_ADD_Tails_Indoor_Shooting_Range_02"}
	}
}

{"stuff weapon ppsh"					;冲锋枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/smg/"}
		{link_sound			"mid"			"weapon/shot/smallarms/s1/d2/RUS/PPSh41/"}
		{link_sound			"far"			"weapon/shot/smallarms/s1/d3/RUS/PPSh41/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/soft/AWCK_ADD_Tails_Outdoor_Tiny_Delays"}

	}
}

{"stuff weapon mp5"						;冲锋枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/smg/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s1/d2/MP5/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s1/d3/MP5/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/soft/AWCK_ADD_Tails_Outdoor_Tiny_Delays"}
	}
}
{"stuff weapon ump45"					;冲锋枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/smg/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s1/d2/UMP45/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s1/d3/UMP45/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/soft/AWCK_ADD_Tails_Outdoor_Tiny_Delays"}
	}
}

;//////////////////////////////////////////////////////////////////////////////////////////////////////

{"stuff weapon 357"				;手枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/pistols/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s1/d2/357/"}
		{link_sound			"far"			"weapon/shot/small-arms/s1/d3/357/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/soft/AWCK_ADD_Tails_Indoor_Shooting_Range_01"}
	}
}
{"stuff weapon glock17"			;手枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/pistols/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s1/d2/Glock17/"}
		{link_sound			"far"			"weapon/shot/small-arms/s1/d3/Glock17/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/soft/AWCK_ADD_Tails_Outdoor_Tiny_Delays"}
	}
}
{"stuff weapon glock23"			;手枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/pistols/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s1/d2/Glock23/"}
		{link_sound			"far"			"weapon/shot/small-arms/s1/d3/Glock23/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/soft/AWCK_ADD_Tails_Outdoor_Tiny_Delays"}
	}
}

;//////////////////////////////////////////////////////////////////////////////////////////////////////

{"stuff weapon ithicaM37"				;霰弹枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/shotguns/"}
		{link_sound			"mid"				"weapon/shot/small-arms/s2/d2/IthicaM37/"}
		{link_sound 		"far"				"weapon/shot/small-arms/s2/d3/IthicaM37/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/soft/AWCK_ADD_Tails_Outdoor_Tiny_Delays"}
	}
}
{"stuff weapon maverick88"				;霰弹枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/shotguns/"}
		{link_sound			"mid"				"weapon/shot/small-arms/s2/d2/Maverick_88/"}
		{link_sound 		"far"				"weapon/shot/small-arms/s2/d3/Maverick_88/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Clean"}
	}
}
{"stuff weapon maverick88_fm"			;霰弹枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/shotguns/"}
		{link_sound			"mid"				"weapon/shot/small-arms/s2/d2/Maverick_88_FM/"}
		{link_sound 		"far"				"weapon/shot/small-arms/s2/d3/Maverick_88_FM/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Crack"}
	}
}
{"stuff weapon winchester1300"			;霰弹枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/shotguns/"}
		{link_sound			"mid"				"weapon/shot/small-arms/s2/d2/Winchester1300/"}
		{link_sound 		"far"				"weapon/shot/small-arms/s2/d3/Winchester1300/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/soft/AWCK_ADD_Tails_Outdoor_Forest"}
	}
}

;//////////////////////////////////////////////////////////////////////////////////////////////////////

{"stuff weapon M249"			;机枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/mg/"}
		{link_sound			"mid"				"weapon/shot/small-arms/s4/d2/M249/"}
		{link_sound 		"far"				"weapon/shot/small-arms/s4/d3/M249/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Crack"}
	}
}

{"stuff weapon mg42"					;机枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/mg/"}
		{link_sound		"mid"			"weapon/shot/small-arms/s4/d2/MG42/"}
		{link_sound		"far"			"weapon/shot/small-arms/s4/d3/MG42/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
}
{"stuff weapon mg34"					;机枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/mg/"}
		{link_sound			"mid"			"weapon/shot/smallarms/s3/d2/GER/MG34/"}
		{link_sound			"far"			"weapon/shot/smallarms/s3/d3/GER/MG34/"}
		{link_sound 		"tails"			"weapon/shot/small-arms/Tail/hard/AWCK_ADD_Tails_Outdoor_Rolling"}
	}
}

;//////////////////////////////////////////////////////////////////////////////////////////////////////

{"stuff weapon m16_silence"				;消音步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/M16_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/M16_silence/"}
	}
}
{"stuff weapon ar10_silence"			;消音步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/AR10_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/AR10_silence/"}
	}
}
{"stuff weapon mp15-22_silence"			;消音步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/M&P15-22_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/M&P15-22_silence/"}
	}
}
{"stuff weapon scar_556_silence"		;消音步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/SCAR_556_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/SCAR_556_silence/"}
	}
}
{"stuff weapon scar_762_silence"		;消音步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/SCAR_762_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/SCAR_762_silence/"}
	}
}
{"stuff weapon noveske_8in_silence"		;消音步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/Noveske_8in_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/Noveske_8in_silence/"}
	}
}
{"stuff weapon noveske_10in_silence"	;消音步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/Noveske_10in_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/Noveske_10in_silence/"}
	}
}

{"stuff weapon ak47_silence"			;消音步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/AK47_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/AK47_silence/"}
	}
}

{"stuff weapon g3_silence"				;消音步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/G3_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/G3_silence/"}
	}
}
{"stuff weapon hk416_silence"			;消音步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/HK416_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/HK416_silence/"}
	}
}
{"stuff weapon sig550_silence"			;消音步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/SIG550_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/SIG550_silence/"}
	}
}
{"stuff weapon malyuk_silence"			;消音步枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/rifle_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/malyuk_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/malyuk_silence/"}
	}
}

;//////////////////////////////////////////////////////////////////////////////////////////////////////

{"stuff weapon chiappa_LB_silence"		;消音狙击步枪
	{on spawn
		{link_sound 		"open_bolt"		"weapon/reload/open_bolt/m1895"}
		{link_sound 		"close_bolt"		"weapon/reload/close_bolt/m1895"}
		{link_sound 		"action_recoil"		"weapon/shot/smallarms/s3/recoil/GER/K98k/"}
		{link_sound			"mid"		"weapon/shot/small-arms/s3/d2/Chiappa_LB_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/Chiappa_LB_silence/"}
	}
}
{"stuff weapon tikka_T3_silence"		;消音狙击步枪
	{on spawn
		{link_sound 		"open_bolt"		"weapon/reload/open_bolt/m24"}
		{link_sound 		"close_bolt"		"weapon/reload/close_bolt/m24"}
		{link_sound 		"action_recoil"	"weapon/action/recoil/sniper_silence/"}
		{link_sound			"mid"		"weapon/shot/small-arms/s3/d2/Tikka_T3_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/Tikka_T3_silence/"}
	}
}
{"stuff weapon dta_srs308_silence"		;消音狙击步枪
	{on spawn
		{link_sound 		"open_bolt"		"weapon/reload/open_bolt/ax-50"}
		{link_sound 		"close_bolt"		"weapon/reload/close_bolt/ax-50"}
		{link_sound 		"action_recoil"	"weapon/action/recoil/sniper_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/DTA_SRS308_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/DTA_SRS308_silence/"}
	}
}
{"stuff weapon deviant300_silence"		;消音狙击步枪
	{on spawn
		{link_sound 		"open_bolt"		"weapon/reload/open_bolt/ax-50"}
		{link_sound 		"close_bolt"		"weapon/reload/close_bolt/ax-50"}
		{link_sound 		"action_recoil"	"weapon/action/recoil/sniper_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/Deviant300_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/Deviant300_silence/"}
	}
}
{"stuff weapon sc338_silence"			;消音狙击步枪
	{on spawn
		{link_sound 		"open_bolt"		"weapon/reload/open_bolt/hdr"}
		{link_sound 		"close_bolt"		"weapon/reload/close_bolt/hdr"}
		{link_sound 		"action_recoil"	"weapon/action/recoil/sniper_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s3/d2/SC338_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s3/d3/SC338_silence/"}
	}
}

;//////////////////////////////////////////////////////////////////////////////////////////////////////

{"stuff weapon mp5_silence"						;消音冲锋枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/smg_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s1/d2/MP5_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s1/d3/MP5_silence/"}
	}
}

{"stuff weapon scorpion_silence"				;消音冲锋枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/smg_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s1/d2/Scorpion_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s1/d3/Scorpion_silence/"}
	}
}

;//////////////////////////////////////////////////////////////////////////////////////////////////////

{"stuff weapon glock19_silence"				;消音手枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/pistols_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s1/d2/Glock19_silence/"}
		{link_sound			"far"			"weapon/shot/small-arms/s1/d3/Glock19_silence/"}
	}
}
{"stuff weapon glock21_silence"				;消音手枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/pistols_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s1/d2/Glock21_silence/"}
		{link_sound			"far"			"weapon/shot/small-arms/s1/d3/Glock21_silence/"}
	}
}
{"stuff weapon glock23_silence"				;消音手枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/pistols_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s1/d2/Glock23_silence/"}
		{link_sound			"far"			"weapon/shot/small-arms/s1/d3/Glock23_silence/"}
	}
}
{"stuff weapon m1911_silence"				;消音手枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/pistols_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s1/d2/M1911_silence/"}
		{link_sound			"far"			"weapon/shot/small-arms/s1/d3/M1911_silence/"}
	}
}

{"stuff weapon ruger_sr22_silence"			;消音手枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/pistols_silence/"}
		{link_sound			"mid"			"weapon/shot/smallarms/s1/d2/Ruger_SR22_silence/"}
		{link_sound			"far"			"weapon/shot/smallarms/s1/d3/Ruger_SR22_silence/"}
	}
}
{"stuff weapon usp9_silence"				;消音手枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/pistols_silence/"}
		{link_sound			"mid"			"weapon/shot/smallarms/s1/d2/USP9_silence/"}
		{link_sound			"far"			"weapon/shot/smallarms/s1/d3/USP9_silence/"}
	}
}
{"stuff weapon usp40_silence"				;消音手枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/pistols_silence/"}
		{link_sound			"mid"			"weapon/shot/smallarms/s1/d2/USP40_silence/"}
		{link_sound			"far"			"weapon/shot/smallarms/s1/d3/USP40_silence/"}
	}
}

{"stuff weapon pkk22_silence"				;消音手枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/pistols_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s1/d2/PKK22_silence/"}
		{link_sound			"far"			"weapon/shot/small-arms/s1/d3/PKK22_silence/"}
	}
}

;//////////////////////////////////////////////////////////////////////////////////////////////////////

{"stuff weapon benelli_m2_silence"			;消音霰弹枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/shotguns_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s2/d2/Benelli_M2_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s2/d3/Benelli_M2_silence/"}
	}
}
{"stuff weapon bsbe_silence"				;消音霰弹枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/shotguns_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s2/d2/BSBE_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s2/d3/BSBE_silence/"}
	}
}
{"stuff weapon Remington870_silence"		;消音霰弹枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/shotguns_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s2/d2/Remington870_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s2/d3/Remington870_silence/"}
	}
}

{"stuff weapon saiga12_silence"				;消音霰弹枪
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/shotguns_silence/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s2/d2/Saiga12_silence/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s2/d3/Saiga12_silence/"}
	}
}

;////////////////////////////////////////////////////////////////////////////////////////////////

{"stuff weapon grenadelauncher"				;榴弹发射器
	{on spawn
		{link_sound 		"action_recoil"	"weapon/action/recoil/launcher/"}
		{link_sound			"mid"			"weapon/shot/small-arms/s4/d2/Grenade_Launcher/"}
		{link_sound 		"far"			"weapon/shot/small-arms/s4/d3/Grenade_Launcher/"}
	}
}