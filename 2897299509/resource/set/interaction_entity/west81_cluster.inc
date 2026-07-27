;SDL


(define "cluster_spreader_1gen"
	{on spawn
		{volumes "body" disable contact blast}
		{impulse up 5 com}
		{delay 0.1 {spawn %0}}
		{delay 0.2 {spawn %0}}
		{delay 0.3 {spawn %0}}
		{delay 0.4 {spawn %0}}
		{delay 0.5 {spawn %0}}
		{delay 0.6 {spawn %0}}
		{delay 0.7 {spawn %0}}
		{delay 0.8 {spawn %0}}
		{delay 0.9 {spawn %0}
		{delete}}
		{delay 1 {delete}	}
	}
)

(define "cluster_spreader_2gen_big"
	{on spawn
		{volumes "body" disable contact blast}
		{impulse up 5 com}
		{delay 0.1 {spawn %0 {impulse up 2 rnd_dir 10}}}
		{delay 0.2 {spawn %0 {impulse up 2 rnd_dir 10}}}
		{delay 0.3 {spawn %0 {impulse up 2 rnd_dir 10}}}
		{delay 0.4 {spawn %0 {impulse up 2 rnd_dir 10}}}
		{delay 0.5 {spawn %0 {impulse up 2 rnd_dir 10}}}
		{delay 0.6 {spawn %0 {impulse up 2 rnd_dir 10}}}
		{delay 0.7 {spawn %0 {impulse up 2 rnd_dir 10}}}
		{delay 0.8 {spawn %0 {impulse up 2 rnd_dir 10}}}
		{delay 0.9 {spawn %0 {impulse up 2 rnd_dir 10}}
		{delete}}
		{delay 1 {delete}	}
	}
)

(define "cluster_spreader_2gen_small"
	{on spawn
		{volumes "body" disable contact blast}
		{impulse up 5 com}
		{delay 0.1 {spawn %0 {impulse up 3 rnd_dir 10}}}
		{delay 0.2 {spawn %0 {impulse up 3 rnd_dir 10}}}
		{delay 0.3 {spawn %0 {impulse up 3 rnd_dir 10}}}
		{delay 0.4 {spawn %0 {impulse up 3 rnd_dir 10}}}
		{delay 0.5 {spawn %0 {impulse up 3 rnd_dir 10}}}
		{delay 0.6 {spawn %0 {impulse up 3 rnd_dir 10}}
		{delete}}
		{delay 0.7 {delete}	}
	}
)

(define "cluster_shell_1up"
	{spawn %subm  no_position no_normal {impulse up 15 0.5 dir %forward rnd_dir %spread com}}
)

(define "cluster_shell_2up"
	{spawn %subm  no_position no_normal {impulse up 15 0.5 dir %forward rnd_dir %spread com}}
	{spawn %subm  no_position no_normal {impulse up 22 0.5 dir (+ %forward 15) rnd_dir %spread com}}
)

(define "cluster_shell_5"
	{delay 0.1 {spawn %subm {impulse up 1 0.5 dir 25 0.5 rnd_dir (* 0.5 %spread)}}}
	{delay 0.2 {spawn %subm {impulse up 1 0.5 dir 25 0.5 rnd_dir (* 1.0 %spread)}}}
	{delay 0.3 {spawn %subm {impulse up 1 0.5 dir 25 0.5 rnd_dir (* 1.0 %spread)}}}
	{delay 0.4 {spawn %subm {impulse up 1 0.5 dir 25 0.5 rnd_dir (* 1.5 %spread)}}}
	{delay 0.5 {spawn %subm {impulse up 1 0.5 dir 25 0.5 rnd_dir (* 2 %spread)}}}
)

(define "cluster_shell_10"
	("cluster_shell_5" subm(%subm) spread(%spread))
	("cluster_shell_5" subm(%subm) spread(%spread))
)

(define "cluster_shell_20"
	("cluster_shell_10" subm(%subm) spread(%spread))
	("cluster_shell_10" subm(%subm) spread(%spread))
)

(define "cluster_shell_30"
	("cluster_shell_20" subm(%subm) spread(%spread))
	("cluster_shell_10" subm(%subm) spread(%spread))
)

(define "cluster_shell_40"
	("cluster_shell_20" subm(%subm) spread(%spread))
	("cluster_shell_20" subm(%subm) spread(%spread))
	("cluster_shell_20" subm(%subm) spread(%spread))
	("cluster_shell_20" subm(%subm) spread(%spread))
	("cluster_shell_20" subm(%subm) spread(%spread))
	("cluster_shell_20" subm(%subm) spread(%spread))
)

(define "cluster_shell_50"
	("cluster_shell_20" subm(%subm) spread(%spread))
	("cluster_shell_30" subm(%subm) spread(%spread))
)

(define "cluster_shell_60"
	("cluster_shell_30" subm(%subm) spread(%spread))
	("cluster_shell_30" subm(%subm) spread(%spread))
)

(define "cluster_shell_70"
	("cluster_shell_20" subm(%subm) spread(%spread))
	("cluster_shell_50" subm(%subm) spread(%spread))
)

(define "cluster_shell_100"
	("cluster_shell_50" subm(%subm) spread(%spread))
	("cluster_shell_50" subm(%subm) spread(%spread))
	("cluster_shell_50" subm(%subm) spread(%spread))
	("cluster_shell_50" subm(%subm) spread(%spread))
	("cluster_shell_50" subm(%subm) spread(%spread))
	("cluster_shell_50" subm(%subm) spread(%spread))
)