
/* Boolean HasBenefit(SubscriptionBenefit) */

bool MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionBase::SubscriptionBase_HasBenefit
               (SubscriptionBase *this,SubscriptionBenefit__Enum subscriptionBenefit,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).benefits;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)subscriptionBenefit,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean TryGetRule[Object](SubscriptionBenefit, Object ByRef) */

bool MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionBase::SubscriptionBase_TryGetRule
               (SubscriptionBase *this,SubscriptionBenefit__Enum subscriptionBenefit,Object **rule,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__TryGetValue_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule__
                   );
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).benefits;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (this_00,(Object *)subscriptionBenefit,&pOStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__TryGetValue_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule__
                      );
    unaff_ESI = pOStack_1;
    if (bVar2 == 0) {
      *rule = (Object *)0x0;
      return 0;
    }
    unaff_EDI = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if (((uint)unaff_EDI[0x17].klass & 0x10000) == 0) {
      pOStack_1 = unaff_EDI;
      unaff_EDI = (Object *)func_?();
    }
    if (unaff_ESI == (Object *)0x0) {
      pOVar3 = (Object *)0x0;
    }
    else {
      pOStack_1 = unaff_EDI;
      pOVar3 = (Object *)func_?(unaff_ESI);
      if (pOVar3 == (Object *)0x0) goto code_?;
    }
    *rule = pOVar3;
    unaff_EDI = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
    if (((uint)unaff_EDI[0x17].klass & 0x10000) == 0) {
      pOStack_1 = unaff_EDI;
      unaff_EDI = (Object *)func_?();
    }
    if (unaff_ESI == (Object *)0x0) {
      pOStack_1 = (Object *)0x0;
    }
    else {
      pOStack_1 = unaff_EDI;
      pOStack_1 = (Object *)func_?(unaff_ESI);
      if (pOStack_1 == (Object *)0x0) goto code_?;
    }
    func_?(rule);
    return 1;
  }
  func_?();
code_?:
  pOStack_1 = unaff_EDI;
  func_?(unaff_ESI);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* SubscriptionBase() */

void MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionBase::SubscriptionBase__ctor
               (SubscriptionBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_MV_WorldObject_Subscription_SubscriptionRule_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>
                              );
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_MV_WorldObject_Subscription_SubscriptionRule_
       *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Dictionary__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).benefits = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

