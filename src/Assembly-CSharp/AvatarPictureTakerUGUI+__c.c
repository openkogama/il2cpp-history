
/* Void <OnPostRender>b__7_0(MeshRenderer) */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI+<>c::AvatarPictureTakerUGUI_c__OnPostRender_b__7_0
               (AvatarPictureTakerUGUI_c *this,MeshRenderer *mr,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (mr != (MeshRenderer *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)0x0;
    pMStack_2 = mr;
    (*pcRam_?)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnPreCull>b__6_0(MeshRenderer) */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI+<>c::AvatarPictureTakerUGUI_c__OnPreCull_b__6_0
               (AvatarPictureTakerUGUI_c *this,MeshRenderer *mr,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (mr != (MeshRenderer *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)0x1;
    pMStack_2 = mr;
    (*pcRam_?)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* AvatarPictureTakerUGUI+<>c() */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI+<>c::AvatarPictureTakerUGUI_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarPictureTakerUGUI____c);
    cRam_? = '\x01';
  }
  value = (AvatarPictureTakerUGUI_c *)func_?(TypeInfo__AvatarPictureTakerUGUI____c);
  if (value != (AvatarPictureTakerUGUI_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9 = value;
    func_?(TypeInfo__AvatarPictureTakerUGUI____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

