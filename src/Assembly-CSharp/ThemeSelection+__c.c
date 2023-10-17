
/* Void <GoBackToSettings>b__25_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemeSelection+<>c::ThemeSelection_c__GoBackToSettings_b__25_0
               (ThemeSelection_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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


/* Void <OnThemeRemovalWarningResolved>b__24_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemeSelection+<>c::
     ThemeSelection_c__OnThemeRemovalWarningResolved_b__24_0
               (ThemeSelection_c *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

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
          (*pVVar3->methodPtr)(x,4,pVVar3->method);
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
    }
    puVar4 = (undefined4 *)func_?(x,TypeInfo__UnityEngine__EventSystems__IUIStack,3);
    (*(code *)*puVar4)(x,4,puVar4[1]);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ThemeSelection+<>c() */

void Assembly-CSharp.dll::ThemeSelection+<>c::ThemeSelection_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeSelection____c);
    cRam_? = '\x01';
  }
  value = (ThemeSelection_c *)func_?(TypeInfo__ThemeSelection____c);
  if (value != (ThemeSelection_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__ThemeSelection____c->static_fields->__9 = value;
    func_?(TypeInfo__ThemeSelection____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

