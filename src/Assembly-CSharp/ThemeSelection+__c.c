
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
    pIVar1 = x->klass;
    uVar2 = 0;
    uVar3._0_1_ = (pIVar1->_1).rank;
    uVar3._1_1_ = (pIVar1->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar1->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
          iVar4 = pIVar1->interfaceOffsets[uVar2].offset;
          (*(code *)(&(x->klass->vtable).PopGroups)[iVar4].method)
                    (x,4,(&(x->klass->vtable).PopToGroup)[iVar4].methodPtr);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)func_?(x,TypeInfo__UnityEngine__EventSystems__IUIStack,3);
    (*(code *)*puVar5)(x,4,puVar5[1]);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* ThemeSelection+<>c() */

void Assembly-CSharp.dll::ThemeSelection+<>c::ThemeSelection_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeSelection____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ThemeSelection____c;
  value = (ThemeSelection_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__ThemeSelection____c->static_fields->__9 = value;
  func_?(TypeInfo__ThemeSelection____c->static_fields,value);
  return;
}

