
/* Boolean HasBenefit(SubscriptionBenefit) */

bool MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionBase::SubscriptionBase_HasBenefit
               (SubscriptionBase *this,SubscriptionBenefit__Enum subscriptionBenefit,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).benefits;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_MV_WorldObject_Subscription_SubscriptionRule_
       *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,subscriptionBenefit,
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
  pIVar1 = (Il2CppClass *)method;
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__TryGetValue_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule__
                   );
    if ((((MethodInfo *)pIVar1)->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(pIVar1);
    }
  }
  method = (MethodInfo *)0x0;
  this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).benefits;
  if (this_00 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    func_?();
    rule = (Object **)unaff_EBX;
  }
  else {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__TryGetValue
                      (this_00,subscriptionBenefit,(Object **)&method,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__TryGetValue_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule__
                      );
    unaff_ESI = method;
    if (bVar2 == 0) {
      *rule = (Object *)0x0;
      return 0;
    }
    pIVar3 = (((MethodInfo *)pIVar1)->field7_0x1c).rgctx_data[1].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    if (unaff_ESI == (MethodInfo *)0x0) {
      pOVar4 = (Object *)0x0;
    }
    else {
      pOVar4 = (Object *)func_?(unaff_ESI,pIVar3);
      if (pOVar4 == (Object *)0x0) goto code_?;
    }
    *rule = pOVar4;
    pIVar1 = (((MethodInfo *)pIVar1)->field7_0x1c).rgctx_data[1].klass;
    if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    if (unaff_ESI == (MethodInfo *)0x0) {
      func_?(rule,0);
      return 1;
    }
    iVar5 = func_?(unaff_ESI,pIVar1);
    if (iVar5 != 0) {
      func_?(rule,iVar5);
      return 1;
    }
  }
  func_?(unaff_ESI,pIVar1);
  pIVar3 = (Il2CppClass *)rule;
code_?:
  func_?(unaff_ESI,pIVar3);
  pcVar6 = (code *)swi(3);
  bVar2 = (*pcVar6)();
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
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Dictionary__
            );
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).benefits =
       (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_MV_WorldObject_Subscription_SubscriptionRule_
        *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

