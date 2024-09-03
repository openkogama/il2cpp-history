
/* Void <DontEquip>b__10_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup+<>c::
     AvatarAccessoryEquipPopup_c__DontEquip_b__10_0
               (AvatarAccessoryEquipPopup_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IUIStack *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Equip>b__9_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup+<>c::AvatarAccessoryEquipPopup_c__Equip_b__9_1
               (AvatarAccessoryEquipPopup_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (IUIStack *)&TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    uStack_3 = 2;
    func_?();
    return;
  }
  pIStack_1 = (IUIStack *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* AvatarAccessoryEquipPopup+<>c() */

void Assembly-CSharp.dll::AvatarAccessoryEquipPopup+<>c::AvatarAccessoryEquipPopup_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarAccessoryEquipPopup____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarAccessoryEquipPopup____c;
  value = (AvatarAccessoryEquipPopup_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__AvatarAccessoryEquipPopup____c->static_fields->__9 = value;
  func_?(TypeInfo__AvatarAccessoryEquipPopup____c->static_fields,value);
  return;
}

