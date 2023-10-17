
/* Object GetRule[Object](SubscriptionBenefit) */

Object * MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
         SubscriptionRulesWrapper_GetRule
                   (SubscriptionRulesWrapper *this,SubscriptionBenefit__Enum subscriptionBenefit,
                   MethodInfo *method)

{
  pMVar1 = method;
  SVar2 = subscriptionBenefit;
  pSVar3 = this;
  pOStack_4 = (Object *)0x0;
  pSVar5 = (this->fields).subscriptionBase;
  if (pSVar5 != (SubscriptionBase *)0x0) {
    cVar6 = (*((method->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                      (pSVar5,subscriptionBenefit,&pOStack_4,
                       ((method->field7_0x1c).rgctx_data)->rgctxDataDummy);
    if (cVar6 != '\0') {
      return pOStack_4;
    }
    pSVar7 = (pSVar3->fields).subscriptionDefault;
    unaff_EBX = (SubscriptionRulesWrapper *)SVar2;
    if (pSVar7 != (SubscriptionDefault *)0x0) {
      cVar6 = (*((pMVar1->field7_0x1c).rgctx_data)->method->virtualMethodPointer)
                        (pSVar7,SVar2,&pOStack_4,((pMVar1->field7_0x1c).rgctx_data)->rgctxDataDummy)
      ;
      if (cVar6 != '\0') {
        return pOStack_4;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  this = unaff_EBX;
  uVar8 = func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionBenefit,&this);
  pOVar9 = (Object *)func_?(uVar8);
  pMVar1 = (MethodInfo *)0x0;
  arg0 = (Object *)func_?(&StringLiteral_SubscriptionDefault_must_impleme);
  message = mscorlib.dll::System::String::String_Concat(arg0,pOVar9,pMVar1);
  uVar8 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar8);
  func_?(this_00);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
  func_?(&
                  System__Object_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<System::Object>_MV__WorldObject__Subscription__SubscriptionBenefit_
                 );
  func_?();
  pcVar10 = (code *)swi(3);
  pOVar9 = (Object *)(*pcVar10)();
  return pOVar9;
}


/* SubscriptionBase GetSubscription(SubscriptionType) */

SubscriptionBase *
MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
SubscriptionRulesWrapper_GetSubscription(SubscriptionType__Enum subscriptionType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__SubscriptionMember1
                   );
    func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__SubscriptionMember2
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__BuiltInTypes__SubscriptionNone
                   );
    cRam_? = '\x01';
  }
  if (subscriptionType == SubscriptionType__Enum_None) {
    pSVar1 = (SubscriptionBase *)
             func_?(
                            TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__BuiltInTypes__SubscriptionNone
                            );
    if (pSVar1 != (SubscriptionBase *)0x0) {
      SubscriptionBase::SubscriptionBase__ctor(pSVar1,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  else if (subscriptionType == SubscriptionType__Enum_Membership1) {
    pSVar1 = (SubscriptionBase *)
             func_?(
                            TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__SubscriptionMember1
                            );
    if (pSVar1 != (SubscriptionBase *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                       );
        func_?(&
                        TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                       );
        func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster);
        cRam_? = '\x01';
      }
      SubscriptionBase::SubscriptionBase__ctor(pSVar1,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(pSVar1->fields).benefits;
      pMVar3 = (MethodInfo *)&UNK_?;
      pOVar4 = (Object *)
               func_?(TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster
                              );
      if (pOVar4 != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (pOVar4,ExceptionArgument__Enum_obj,pMVar3);
        pOVar4[1].klass = (Object__Class *)0x32;
        pOVar4[1].monitor = (MonitorData *)0xa;
        pOVar4[2].klass = (Object__Class *)0xa;
        pOVar4[2].monitor = (MonitorData *)0x190;
        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar2,(Object *)0x1,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                    );
          pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(pSVar1->fields).benefits;
          pMVar3 = (MethodInfo *)&UNK_?;
          pOVar4 = (Object *)
                   func_?(
                                  TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                                  );
          if (pOVar4 != (Object *)0x0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (pOVar4,ExceptionArgument__Enum_obj,pMVar3);
            *(undefined1 *)&pOVar4[1].klass = 1;
            if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar2,(Object *)0x3,pOVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                        );
              pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(pSVar1->fields).benefits;
              pMVar3 = (MethodInfo *)&UNK_?;
              pOVar4 = (Object *)
                       func_?(
                                      TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                                      );
              if (pOVar4 != (Object *)0x0) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          (pOVar4,ExceptionArgument__Enum_obj,pMVar3);
                *(undefined1 *)&pOVar4[1].klass = 1;
                if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (pDVar2,(Object *)0x4,pOVar4,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                            );
                  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(pSVar1->fields).benefits;
                  pMVar3 = (MethodInfo *)&UNK_?;
                  pOVar4 = (Object *)
                           func_?(
                                          TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                                          );
                  if (pOVar4 != (Object *)0x0) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                              (pOVar4,ExceptionArgument__Enum_obj,pMVar3);
                    *(undefined1 *)&pOVar4[1].klass = 1;
                    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                (pDVar2,(Object *)0x5,pOVar4,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                                );
                      return pSVar1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (subscriptionType != SubscriptionType__Enum_Membership2) goto code_?;
    pSVar1 = (SubscriptionBase *)
             func_?(
                            TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__SubscriptionMember2
                            );
    if (pSVar1 != (SubscriptionBase *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                       );
        func_?(&
                        TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                       );
        func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster);
        cRam_? = '\x01';
      }
      SubscriptionBase::SubscriptionBase__ctor(pSVar1,(MethodInfo *)0x0);
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(pSVar1->fields).benefits;
      pMVar3 = (MethodInfo *)&UNK_?;
      pOVar4 = (Object *)
               func_?(TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster
                              );
      if (pOVar4 != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (pOVar4,ExceptionArgument__Enum_obj,pMVar3);
        pOVar4[1].klass = (Object__Class *)0x32;
        pOVar4[1].monitor = (MonitorData *)0xa;
        pOVar4[2].klass = (Object__Class *)0x2;
        pOVar4[2].monitor = (MonitorData *)0x190;
        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar2,(Object *)0x1,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                    );
          pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(pSVar1->fields).benefits;
          pMVar3 = (MethodInfo *)&UNK_?;
          pOVar4 = (Object *)
                   func_?(
                                  TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                                  );
          if (pOVar4 != (Object *)0x0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (pOVar4,ExceptionArgument__Enum_obj,pMVar3);
            *(undefined1 *)&pOVar4[1].klass = 1;
            if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (pDVar2,(Object *)0x3,pOVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                        );
              return pSVar1;
            }
          }
        }
      }
    }
  }
  func_?();
  subscriptionType = extraout_ECX;
code_?:
  uVar5 = func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionType,
                          &subscriptionType);
  pOVar4 = (Object *)func_?(uVar5);
  pMVar3 = (MethodInfo *)0x0;
  arg0 = (Object *)func_?(&StringLiteral_Unknown_subscription_type__);
  message = mscorlib.dll::System::String::String_Concat(arg0,pOVar4,pMVar3);
  uVar5 = func_?(&TypeInfo__System__Exception);
  this = (Exception *)func_?(uVar5);
  func_?(this);
  mscorlib.dll::System::Exception::Exception__ctor_1(this,message,(MethodInfo *)0x0);
  subscriptionType =
       func_?(&
                       MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetSubscription_MV__WorldObject__Subscription__SubscriptionType_
                      );
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar1 = (SubscriptionBase *)(*pcVar6)();
  return pSVar1;
}


/* Boolean HasBenefit(SubscriptionBenefit) */

bool MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
     SubscriptionRulesWrapper_HasBenefit
               (SubscriptionRulesWrapper *this,SubscriptionBenefit__Enum subscriptionBenefit,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscriptionBase;
  if (pSVar1 != (SubscriptionBase *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(pSVar1->fields).benefits;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)subscriptionBenefit,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_
                        );
      return bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
         SubscriptionRulesWrapper_ToString(SubscriptionRulesWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionType);
    func_?(&StringLiteral_SubscriptionType__);
    cRam_? = '\x01';
  }
  this = (SubscriptionRulesWrapper *)(this->fields).SubscriptionType;
  arg1 = (Object *)func_?(TypeInfo__MV__WorldObject__Subscription__SubscriptionType,&this);
  pSVar1 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_SubscriptionType__,arg1,(MethodInfo *)0x0);
  return pSVar1;
}


/* SubscriptionRulesWrapper(SubscriptionType) */

void MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
     SubscriptionRulesWrapper__ctor
               (SubscriptionRulesWrapper *this,SubscriptionType__Enum subscriptionType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__BuiltInTypes__SubscriptionDefault
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).SubscriptionType = subscriptionType;
  this_00 = (SubscriptionDefault *)
            func_?(
                           TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__BuiltInTypes__SubscriptionDefault
                           );
  if (this_00 != (SubscriptionDefault *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                     );
      func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster);
      func_?(&
                      TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                     );
      func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster);
      cRam_? = '\x01';
    }
    SubscriptionBase::SubscriptionBase__ctor((SubscriptionBase *)this_00,(MethodInfo *)0x0);
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._.benefits;
    pMVar2 = (MethodInfo *)&UNK_?;
    pOVar3 = (Object *)
             func_?(TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster);
    if (pOVar3 != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (pOVar3,ExceptionArgument__Enum_obj,pMVar2);
      pOVar3[1].klass = (Object__Class *)0x0;
      pOVar3[1].monitor = (MonitorData *)0xa;
      pOVar3[2].klass = (Object__Class *)0xa;
      pOVar3[2].monitor = (MonitorData *)0x190;
      if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar1,(Object *)0x1,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                  );
        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._.benefits;
        pMVar2 = (MethodInfo *)&UNK_?;
        pOVar3 = (Object *)
                 func_?(
                                TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster
                                );
        if (pOVar3 != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (pOVar3,ExceptionArgument__Enum_obj,pMVar2);
          pOVar3[1].klass = (Object__Class *)0x0;
          if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDVar1,(Object *)0x2,pOVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                      );
            pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields)._.benefits;
            pMVar2 = (MethodInfo *)&UNK_?;
            pOVar3 = (Object *)
                     func_?(
                                    TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                                    );
            if (pOVar3 != (Object *)0x0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        (pOVar3,ExceptionArgument__Enum_obj,pMVar2);
              *(undefined1 *)&pOVar3[1].klass = 0;
              if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (pDVar1,(Object *)0x3,pOVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                          );
                (this->fields).subscriptionDefault = this_00;
                func_?(&(this->fields).subscriptionDefault,this_00);
                pSVar4 = SubscriptionRulesWrapper_GetSubscription
                                   (subscriptionType,(MethodInfo *)0x0);
                (this->fields).subscriptionBase = pSVar4;
                func_?(&this->fields,pSVar4);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

