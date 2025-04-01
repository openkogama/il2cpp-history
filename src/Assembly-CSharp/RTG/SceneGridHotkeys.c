
/* SceneGridHotkeys() */

void Assembly-CSharp.dll::RTG::SceneGridHotkeys::SceneGridHotkeys__ctor
               (SceneGridHotkeys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Hotkeys);
    func_?(&StringLiteral_Grid_down);
    func_?(&StringLiteral_Grid_up);
    func_?(&StringLiteral_Snap_to_cursor_pick_point);
    cRam_? = '\x01';
  }
  HVar1.CanHaveMouseButtons = 0;
  pHVar2 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
  Hotkeys::Hotkeys__ctor_1(pHVar2,StringLiteral_Grid_up,HVar1,(MethodInfo *)0x0);
  if (pHVar2 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar2,KeyCode__Enum_RightBracket,(MethodInfo *)0x0);
    ppHVar3 = &(this->fields)._gridUp;
    *ppHVar3 = pHVar2;
    func_?(ppHVar3,pHVar2);
    HVar1.CanHaveMouseButtons = 0;
    pHVar2 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
    Hotkeys::Hotkeys__ctor_1(pHVar2,StringLiteral_Grid_down,HVar1,(MethodInfo *)0x0);
    if (pHVar2 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar2,KeyCode__Enum_LeftBracket,(MethodInfo *)0x0);
      ppHVar3 = &(this->fields)._gridDown;
      *ppHVar3 = pHVar2;
      func_?(ppHVar3,pHVar2);
      HVar1.CanHaveMouseButtons = 0;
      pHVar2 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
      Hotkeys::Hotkeys__ctor_1
                (pHVar2,StringLiteral_Snap_to_cursor_pick_point,HVar1,(MethodInfo *)0x0);
      if (pHVar2 != (Hotkeys *)0x0) {
        ppHVar3 = &(this->fields)._snapToCursorPickPoint;
        (pHVar2->fields)._lAlt = 1;
        *ppHVar3 = pHVar2;
        func_?(ppHVar3,pHVar2);
        Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

