
/* BoxColliderGizmo3DHotkeys() */

void Assembly-CSharp.dll::RTG::BoxColliderGizmo3DHotkeys::BoxColliderGizmo3DHotkeys__ctor
               (BoxColliderGizmo3DHotkeys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Hotkeys);
    func_?(&StringLiteral_Enable_snapping);
    func_?(&StringLiteral_Scale_from_Center);
    cRam_? = '\x01';
  }
  HVar1.CanHaveMouseButtons = 0;
  pHVar2 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
  Hotkeys::Hotkeys__ctor_1(pHVar2,StringLiteral_Enable_snapping,HVar1,(MethodInfo *)0x0);
  if (pHVar2 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(pHVar2,KeyCode__Enum_None,(MethodInfo *)0x0);
    (pHVar2->fields)._lCtrl = 1;
    (this->fields)._enableSnapping = pHVar2;
    func_?(&this->fields,pHVar2);
    HVar1.CanHaveMouseButtons = 0;
    pHVar2 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
    Hotkeys::Hotkeys__ctor_1(pHVar2,StringLiteral_Scale_from_Center,HVar1,(MethodInfo *)0x0);
    if (pHVar2 != (Hotkeys *)0x0) {
      Hotkeys::Hotkeys_set_Key(pHVar2,KeyCode__Enum_None,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)&(this->fields)._scaleFromCenter;
      (pHVar2->fields)._lShift = 1;
      *(Hotkeys **)method_00 = pHVar2;
      func_?(method_00,pHVar2);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

