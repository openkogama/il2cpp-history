
/* Void <ExecuteToggleState>b__3_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::FullscreenToggleExecute+<>c::
     FullscreenToggleExecute_c__ExecuteToggleState_b__3_0
               (FullscreenToggleExecute_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Fullscreen_is_not_supported_in_u000A);
    func_?(&StringLiteral_Error);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Fullscreen_is_not_supported_in_u000A,(MethodInfo *)0x0);
  pSVar1 = TM::TM__(StringLiteral_Error,(MethodInfo *)0x0);
  if (x == (IModalPopupCreator *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        ppMVar6 = &(&(x->klass->vtable).Create_3)[x->klass->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,4);
code_?:
  (*(code *)*ppMVar6)(x,ppMVar6[1],pSVar1);
  return;
}


/* FullscreenToggleExecute+<>c() */

void Assembly-CSharp.dll::FullscreenToggleExecute+<>c::FullscreenToggleExecute_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullscreenToggleExecute____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FullscreenToggleExecute____c;
  value = (FullscreenToggleExecute_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__FullscreenToggleExecute____c->static_fields->__9 = value;
  func_?(TypeInfo__FullscreenToggleExecute____c->static_fields,value);
  return;
}

