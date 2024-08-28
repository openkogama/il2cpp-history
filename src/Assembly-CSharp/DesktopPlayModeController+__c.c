
/* Void <Initialize>b__36_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DesktopPlayModeController+<>c::
     DesktopPlayModeController_c__Initialize_b__36_0
               (DesktopPlayModeController_c *this,IUIStack *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    pIVar1 = handler->klass;
    uVar2 = 0;
    uVar3._0_1_ = (pIVar1->_1).rank;
    uVar3._1_1_ = (pIVar1->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar1->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
          iVar4 = pIVar1->interfaceOffsets[uVar2].offset;
          (*(code *)(&(handler->klass->vtable).PopGroups)[iVar4].method)
                    (handler,0xc,(&(handler->klass->vtable).PopToGroup)[iVar4].methodPtr);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)func_?(handler,TypeInfo__UnityEngine__EventSystems__IUIStack,3);
    (*(code *)*puVar5)(handler,0xc,puVar5[1]);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* DesktopPlayModeController+<>c() */

void Assembly-CSharp.dll::DesktopPlayModeController+<>c::DesktopPlayModeController_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DesktopPlayModeController____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__DesktopPlayModeController____c;
  value = (DesktopPlayModeController_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__DesktopPlayModeController____c->static_fields->__9 = value;
  func_?(TypeInfo__DesktopPlayModeController____c->static_fields,value);
  return;
}

