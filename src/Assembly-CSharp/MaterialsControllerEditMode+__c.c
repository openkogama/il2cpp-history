
/* Void <OnPop>b__12_0(IShortcutKeyUnRegister, BaseEventData) */

void Assembly-CSharp.dll::MaterialsControllerEditMode+<>c::
     MaterialsControllerEditMode_c__OnPop_b__12_0
               (MaterialsControllerEditMode_c *this,IShortcutKeyUnRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister);
    cRam_? = '\x01';
  }
  if (x != (IShortcutKeyUnRegister *)0x0) {
    uVar1 = 0;
    uVar2 = (x->klass->_1).interface_offsets_count;
    if (uVar2 != 0) {
      do {
        if (x->klass->interfaceOffsets[uVar1].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister) {
          pIVar3 = &x->klass->vtable + x->klass->interfaceOffsets[uVar1].offset;
          (*(pIVar3->UnRegisterShortcutKey).methodPtr)
                    (x,0x16,0,(pIVar3->UnRegisterShortcutKey).method);
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
    }
    puVar4 = (undefined4 *)
             func_?(x,TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister,0);
    (*(code *)*puVar4)(x,0x16,0,puVar4[1]);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Open>b__8_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::MaterialsControllerEditMode+<>c::
     MaterialsControllerEditMode_c__Open_b__8_1
               (MaterialsControllerEditMode_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    uVar1 = 0;
    uVar2 = (handler->klass->_1).interface_offsets_count;
    if (uVar2 != 0) {
      do {
        if (handler->klass->interfaceOffsets[uVar1].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
          pVVar3 = &(handler->klass->vtable).PopGroups +
                   handler->klass->interfaceOffsets[uVar1].offset;
          (*pVVar3->methodPtr)(handler,0x12,pVVar3->method);
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
    }
    puVar4 = (undefined4 *)func_?(handler,TypeInfo__UnityEngine__EventSystems__IUIStack,3);
    (*(code *)*puVar4)(handler,0x12,puVar4[1]);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MaterialsControllerEditMode+<>c() */

void Assembly-CSharp.dll::MaterialsControllerEditMode+<>c::MaterialsControllerEditMode_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MaterialsControllerEditMode____c);
    cRam_? = '\x01';
  }
  value = (MaterialsControllerEditMode_c *)
          func_?(TypeInfo__MaterialsControllerEditMode____c);
  if (value != (MaterialsControllerEditMode_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__MaterialsControllerEditMode____c->static_fields->__9 = value;
    func_?(TypeInfo__MaterialsControllerEditMode____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

