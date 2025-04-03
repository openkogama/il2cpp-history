
/* SpotLightGizmo3DHotkeys() */

void Assembly-CSharp.dll::RTG::SpotLightGizmo3DHotkeys::SpotLightGizmo3DHotkeys__ctor
               (SpotLightGizmo3DHotkeys *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__Hotkeys);
    func_?(&StringLiteral_Enable_snapping);
    cRam_? = '\x01';
  }
  staticData.CanHaveMouseButtons = 0;
  this_00 = (Hotkeys *)func_?(TypeInfo__RTG__Hotkeys);
  Hotkeys::Hotkeys__ctor_1(this_00,StringLiteral_Enable_snapping,staticData,(MethodInfo *)0x0);
  if (this_00 != (Hotkeys *)0x0) {
    Hotkeys::Hotkeys_set_Key(this_00,KeyCode__Enum_None,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&this->fields;
    (this_00->fields)._lCtrl = 1;
    ((SpotLightGizmo3DHotkeys__Fields *)method_00)->_enableSnapping = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

