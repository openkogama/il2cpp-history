
/* UniversalGizmoHotkeys() */

void Assembly-CSharp.dll::RTG::UniversalGizmoHotkeys::UniversalGizmoHotkeys__ctor
               (UniversalGizmoHotkeys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Hotkeys);
    func_?(&StringLiteral_Enable_2D_mode);
    func_?(&StringLiteral_Enable_snapping);
    func_?(&StringLiteral_Enable_vertex_snapping);
    cRam_? = '\x01';
  }
  HVar1.CanHaveMouseButtons = 0;
  pHVar2 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
  Hotkeys::Hotkeys__ctor_1(pHVar2,StringLiteral_Enable_2D_mode,HVar1,(MethodInfo *)0x0);
  if (pHVar2 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar2,KeyCode__Enum_None,(MethodInfo *)0x0);
    (pHVar2->fields)._lShift = 1;
    (this->fields)._enable2DMode = pHVar2;
    func_?(&(this->fields)._enable2DMode,pHVar2);
    HVar1.CanHaveMouseButtons = 0;
    pHVar2 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
    Hotkeys::Hotkeys__ctor_1(pHVar2,StringLiteral_Enable_snapping,HVar1,(MethodInfo *)0x0);
    if (pHVar2 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar2,KeyCode__Enum_None,(MethodInfo *)0x0);
      (pHVar2->fields)._lCtrl = 1;
      (this->fields)._enableSnapping = pHVar2;
      func_?(&(this->fields)._enableSnapping,pHVar2);
      HVar1.CanHaveMouseButtons = 0;
      pHVar2 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
      Hotkeys::Hotkeys__ctor_1(pHVar2,StringLiteral_Enable_vertex_snapping,HVar1,(MethodInfo *)0x0);
      if (pHVar2 != (Hotkeys *)0x0) {
        (pHVar2->fields)._useStrictModifierCheck = 0;
        Hotkeys::Hotkeys_set_Key(pHVar2,KeyCode__Enum_V,(MethodInfo *)0x0);
        (this->fields)._enableVertexSnapping = pHVar2;
        func_?(&(this->fields)._enableVertexSnapping,pHVar2);
        Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

