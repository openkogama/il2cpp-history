
/* Void <OnAdFinished>b__8_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::BoostMenuController+<>c::BoostMenuController_c__OnAdFinished_b__8_0
               (BoostMenuController_c *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_No_Ad_Available);
    cRam_? = '\x01';
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar1 != (IAdManager *)0x0) {
    uVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1);
    pSVar3 = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,uVar2,pSVar3);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* BoostMenuController+<>c() */

void Assembly-CSharp.dll::BoostMenuController+<>c::BoostMenuController_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BoostMenuController____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__BoostMenuController____c;
  value = (BoostMenuController_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__BoostMenuController____c->static_fields->__9 = value;
  func_?(TypeInfo__BoostMenuController____c->static_fields,value);
  return;
}

