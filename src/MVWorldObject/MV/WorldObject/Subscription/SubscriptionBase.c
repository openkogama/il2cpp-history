
/* Boolean HasBenefit(SubscriptionBenefit) */

bool MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionBase::SubscriptionBase_HasBenefit
               (SubscriptionBase *this,SubscriptionBenefit__Enum subscriptionBenefit,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).benefits;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_MV_WorldObject_Subscription_SubscriptionRule_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::Subscription::
            SubscriptionBenefit,System::Object]::
            Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object_
                        *)this_00,subscriptionBenefit,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean TryGetRule[Object](SubscriptionBenefit, Object ByRef) */

bool MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionBase::SubscriptionBase_TryGetRule
               (SubscriptionBase *this,SubscriptionBenefit__Enum subscriptionBenefit,Object **rule,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIStack_1 = (Il2CppType *)0x0;
  this_00 = (this->fields).benefits;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_MV_WorldObject_Subscription_SubscriptionRule_
       *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::Subscription::
            SubscriptionBenefit,System::Object]::
            Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object__TryGetValue
                      ((Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object_
                        *)this_00,subscriptionBenefit,(Object **)&pIStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__TryGetValue_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule__
                      );
    unaff_ESI = pIStack_1;
    if (bVar2 == 0) {
      *rule = (Object *)0x0;
      return 0;
    }
    unaff_EDI = *method->parameters;
    if ((unaff_EDI[0x17].type & 1) == 0) {
      pIStack_1 = unaff_EDI;
      func_?();
    }
    if (unaff_ESI == (Il2CppType *)0x0) {
      pOVar3 = (Object *)0x0;
    }
    else {
      pIStack_1 = unaff_EDI;
      pOVar3 = (Object *)func_?(unaff_ESI);
      if (pOVar3 == (Object *)0x0) goto code_?;
    }
    *rule = pOVar3;
    unaff_EDI = *method->parameters;
    if ((unaff_EDI[0x17].type & 1) == 0) {
      pIStack_1 = unaff_EDI;
      func_?();
    }
    if (unaff_ESI != (Il2CppType *)0x0) {
      pIStack_1 = unaff_EDI;
      iVar4 = func_?(unaff_ESI);
      if (iVar4 == 0) goto code_?;
    }
    return 1;
  }
  func_?(0);
code_?:
  pIStack_1 = unaff_EDI;
  func_?(unaff_ESI);
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}

