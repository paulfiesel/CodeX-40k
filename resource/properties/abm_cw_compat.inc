; CX40K compatibility bridge for the Cold War vehicle stabilizer family.
; These definitions are kept together because modern vehicle entities mix and
; match the family across roster previews, campaign creation, and tactical load.

(define "CW_stab_2D_0_2class"
    {AccuracyByMotion
        {MaxLinearSpeed 25} {ByLinearSpeed 0.8}
        {MaxAngularSpeed 20} {ByAngularSpeed 1}
        {DisorderTime 3} {OrderTime 0}
    }
)

(define "CW_stab_2D_0_5class"
    {AccuracyByMotion
        {MaxLinearSpeed 20} {ByLinearSpeed 0.6}
        {MaxAngularSpeed 15} {ByAngularSpeed 0.9}
        {DisorderTime 3} {OrderTime 0}
    }
)

(define "CW_stab_2D_1_0class"
    {AccuracyByMotion
        {MaxLinearSpeed 15} {ByLinearSpeed 0.4}
        {MaxAngularSpeed 10} {ByAngularSpeed 0.8}
        {DisorderTime 3} {OrderTime 0}
    }
)

(define "CW_stab_no_stabiliser"
    {AccuracyByMotion
        {MaxLinearSpeed 10} {ByLinearSpeed 0.2}
        {MaxAngularSpeed 10} {ByAngularSpeed 0.4}
        {DisorderTime 3} {OrderTime 0}
    }
)

(define "CW_stab_no_stabiliser_grad"
    {AccuracyByMotion
        {MaxLinearSpeed 15} {ByLinearSpeed 0.04}
        {MaxAngularSpeed 15} {ByAngularSpeed 0.08}
        {DisorderTime 3} {OrderTime 0}
    }
)

(define "CW_stab_abm"
    {AccuracyByMotion
        {ByLinearSpeed %abm}
        {ByAngularSpeed (- 1 (* (- 1 %abm) 0.5))}
    }
)

(define "CW_stab_no_suo"
    {AccuracyByMotion
        {MaxLinearSpeed 15} {MaxAngularSpeed 12}
        {DisorderTime 3} {OrderTime 0}
    }
)

(define "CW_stab_ld_suo"
    {AccuracyByMotion
        {MaxLinearSpeed 25} {MaxAngularSpeed 15}
        {DisorderTime 4.5} {OrderTime 0}
    }
)

(define "CW_stab_ldwind_suo"
    {AccuracyByMotion
        {MaxLinearSpeed 30} {MaxAngularSpeed 20}
        {DisorderTime 6} {OrderTime 0}
    }
)

(define "CW_stab_autotrack_suo"
    {AccuracyByMotion
        {MaxLinearSpeed 25} {MaxAngularSpeed 30}
        {DisorderTime 6} {OrderTime 0}
    }
)

(define "CW_stab_autotrack_wind_suo"
    {AccuracyByMotion
        {MaxLinearSpeed 30} {MaxAngularSpeed 35}
        {DisorderTime 6} {OrderTime 0}
    }
)
