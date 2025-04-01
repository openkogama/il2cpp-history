
/* CameraHotkeys() */

void Assembly-CSharp.dll::RTG::CameraHotkeys::CameraHotkeys__ctor
               (CameraHotkeys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Hotkeys);
    func_?(&StringLiteral_Strafe_right);
    func_?(&StringLiteral_Pan);
    func_?(&StringLiteral_Move_down);
    func_?(&StringLiteral_Strafe_left);
    func_?(&StringLiteral_Move_up);
    func_?(&StringLiteral_Orbit);
    func_?(&StringLiteral_Move_forward);
    func_?(&StringLiteral_Move_back);
    func_?(&StringLiteral_Look_around);
    cRam_? = '\x01';
  }
  pHVar1 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
  Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Move_forward,(MethodInfo *)0x0);
  if (pHVar1 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_W,(MethodInfo *)0x0);
    ppHVar2 = &(this->fields)._moveForward;
    (pHVar1->fields)._useStrictModifierCheck = 0;
    (pHVar1->fields)._rMouseBtn = 1;
    *ppHVar2 = pHVar1;
    func_?(ppHVar2,pHVar1);
    pHVar1 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
    Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Move_back,(MethodInfo *)0x0);
    if (pHVar1 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_S,(MethodInfo *)0x0);
      ppHVar2 = &(this->fields)._moveBack;
      (pHVar1->fields)._useStrictModifierCheck = 0;
      (pHVar1->fields)._rMouseBtn = 1;
      *ppHVar2 = pHVar1;
      func_?(ppHVar2,pHVar1);
      pHVar1 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
      Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Strafe_left,(MethodInfo *)0x0);
      if (pHVar1 != (Hotkeys *)0x0) {
        Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_A,(MethodInfo *)0x0);
        ppHVar2 = &(this->fields)._strafeLeft;
        (pHVar1->fields)._useStrictModifierCheck = 0;
        (pHVar1->fields)._rMouseBtn = 1;
        *ppHVar2 = pHVar1;
        func_?(ppHVar2,pHVar1);
        pHVar1 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
        Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Strafe_right,(MethodInfo *)0x0);
        if (pHVar1 != (Hotkeys *)0x0) {
          Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_D,(MethodInfo *)0x0);
          ppHVar2 = &(this->fields)._strafeRight;
          (pHVar1->fields)._useStrictModifierCheck = 0;
          (pHVar1->fields)._rMouseBtn = 1;
          *ppHVar2 = pHVar1;
          func_?(ppHVar2,pHVar1);
          pHVar1 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
          Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Move_up,(MethodInfo *)0x0);
          if (pHVar1 != (Hotkeys *)0x0) {
            Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_E,(MethodInfo *)0x0);
            ppHVar2 = &(this->fields)._moveUp;
            (pHVar1->fields)._useStrictModifierCheck = 0;
            (pHVar1->fields)._rMouseBtn = 1;
            *ppHVar2 = pHVar1;
            func_?(ppHVar2,pHVar1);
            pHVar1 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
            Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Move_down,(MethodInfo *)0x0);
            if (pHVar1 != (Hotkeys *)0x0) {
              Hotkeys::Hotkeys_set_Key(pHVar1,KeyCode__Enum_Q,(MethodInfo *)0x0);
              ppHVar2 = &(this->fields)._moveDown;
              (pHVar1->fields)._useStrictModifierCheck = 0;
              (pHVar1->fields)._rMouseBtn = 1;
              *ppHVar2 = pHVar1;
              func_?(ppHVar2,pHVar1);
              pHVar1 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
              Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Pan,(MethodInfo *)0x0);
              if (pHVar1 != (Hotkeys *)0x0) {
                ppHVar2 = &(this->fields)._pan;
                (pHVar1->fields)._useStrictModifierCheck = 0;
                (pHVar1->fields)._mMouseBtn = 1;
                *ppHVar2 = pHVar1;
                func_?(ppHVar2,pHVar1);
                pHVar1 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
                Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Look_around,(MethodInfo *)0x0);
                if (pHVar1 != (Hotkeys *)0x0) {
                  ppHVar2 = &(this->fields)._lookAround;
                  (pHVar1->fields)._useStrictModifierCheck = 0;
                  (pHVar1->fields)._rMouseBtn = 1;
                  *ppHVar2 = pHVar1;
                  func_?(ppHVar2,pHVar1);
                  pHVar1 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
                  Hotkeys::Hotkeys__ctor(pHVar1,StringLiteral_Orbit,(MethodInfo *)0x0);
                  if (pHVar1 != (Hotkeys *)0x0) {
                    ppHVar2 = &(this->fields)._orbit;
                    (pHVar1->fields)._useStrictModifierCheck = 0;
                    (pHVar1->fields)._lAlt = 1;
                    (pHVar1->fields)._rMouseBtn = 1;
                    *ppHVar2 = pHVar1;
                    func_?(ppHVar2,pHVar1);
                    if (cRam_? == '\0') {
                      func_?(&StringLiteral_Settings);
                      cRam_? = '\x01';
                    }
                    (this->fields)._._canBeDisplayed = 1;
                    (this->fields)._._isExpanded = 1;
                    method_00 = (MethodInfo *)&(this->fields)._._foldoutLabel;
                    *(String **)method_00 = StringLiteral_Settings;
                    func_?(method_00,StringLiteral_Settings);
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

