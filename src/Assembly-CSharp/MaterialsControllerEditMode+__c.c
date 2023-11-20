
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
    pIVar1 = x->klass;
    uVar2 = 0;
    uVar3._0_1_ = (pIVar1->_1).rank;
    uVar3._1_1_ = (pIVar1->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar1->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister) {
          pIVar1 = x->klass;
          iVar4 = pIVar1->interfaceOffsets[uVar2].offset;
          (*(code *)(&pIVar1->vtable)[iVar4].UnRegisterShortcutKey.method)
                    (x,0x16,0,(&pIVar1[1]._0.image)[iVar4 * 2]);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)
             func_?(x,TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister,0);
    (*(code *)*puVar5)(x,0x16,0,puVar5[1]);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <Open>b__8_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::MaterialsControllerEditMode+<>c::
     MaterialsControllerEditMode_c__Open_b__8_1
               (MaterialsControllerEditMode_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?();
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    ppIStack_1 = (IUIStack__Class **)0x12;
    pIStack_2 = handler;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IUIStack;
    func_?(3);
    return;
  }
  ppIStack_1 = (IUIStack__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
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
  method_00 = TypeInfo__MaterialsControllerEditMode____c;
  value = (MaterialsControllerEditMode_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__MaterialsControllerEditMode____c->static_fields->__9 = value;
  func_?(TypeInfo__MaterialsControllerEditMode____c->static_fields,value);
  return;
}

