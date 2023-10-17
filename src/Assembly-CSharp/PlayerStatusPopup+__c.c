
/* Void <Update>b__5_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerStatusPopup+<>c::PlayerStatusPopup_c__Update_b__5_0
               (PlayerStatusPopup_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    uVar1 = 0;
    uVar2 = (x->klass->_1).interface_offsets_count;
    if (uVar2 != 0) {
      do {
        if (x->klass->interfaceOffsets[uVar1].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
          pVVar3 = &(x->klass->vtable).PopGroups + x->klass->interfaceOffsets[uVar1].offset;
          (*pVVar3->methodPtr)(x,0x40,pVVar3->method);
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
    }
    puVar4 = (undefined4 *)func_?(x,TypeInfo__UnityEngine__EventSystems__IUIStack,3);
    (*(code *)*puVar4)(x,0x40,puVar4[1]);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PlayerStatusPopup+<>c() */

void Assembly-CSharp.dll::PlayerStatusPopup+<>c::PlayerStatusPopup_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlayerStatusPopup____c);
    cRam_? = '\x01';
  }
  value = (PlayerStatusPopup_c *)func_?(TypeInfo__PlayerStatusPopup____c);
  if (value != (PlayerStatusPopup_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__PlayerStatusPopup____c->static_fields->__9 = value;
    func_?(TypeInfo__PlayerStatusPopup____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

