
/* Void <FadeOutAndPop>b__37_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd+<>c::
     GeneralPromotionAd_c__FadeOutAndPop_b__37_1
               (GeneralPromotionAd_c *this,IUIStack *x,BaseEventData *_,MethodInfo *method)

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


/* Void <OnContinueClicked>b__35_0(ITouristAdController, BaseEventData) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd+<>c::
     GeneralPromotionAd_c__OnContinueClicked_b__35_0
               (GeneralPromotionAd_c *this,ITouristAdController *x,BaseEventData *_,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (ITouristAdController *)&TypeInfo__ITouristAdController;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (ITouristAdController *)0x0) {
    pIStack_1 = x;
    pIStack_2 = TypeInfo__ITouristAdController;
    uStack_3 = 0;
    func_?();
    return;
  }
  pIStack_1 = (ITouristAdController *)&stack0xfffffffc;
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* GeneralPromotionAd+<>c() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd+<>c::
     GeneralPromotionAd_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c;
  value = (GeneralPromotionAd_c *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->__9 = value;
  func_?(TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields,value);
  return;
}

