
/* Object GetRule[Object](SubscriptionBenefit) */

Object * MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
         SubscriptionRulesWrapper_GetRule
                   (SubscriptionRulesWrapper *this,SubscriptionBenefit__Enum subscriptionBenefit,
                   MethodInfo *method)

{
  pMVar1 = method;
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(method);
  }
  SVar2 = subscriptionBenefit;
  method = (MethodInfo *)0x0;
  pSVar3 = (this->fields).subscriptionBase;
  if (pSVar3 != (SubscriptionBase *)0x0) {
    cVar4 = func_?(pSVar3,subscriptionBenefit,&method,
                            ((pMVar1->field7_0x1c).rgctx_data)->rgctxDataDummy);
    if (cVar4 != '\0') {
      return (Object *)method;
    }
    pSVar5 = (this->fields).subscriptionDefault;
    if (pSVar5 != (SubscriptionDefault *)0x0) {
      cVar4 = func_?(pSVar5,SVar2,&method,
                              ((pMVar1->field7_0x1c).rgctx_data)->rgctxDataDummy);
      if (cVar4 != '\0') {
        return (Object *)method;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar6 = func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionBenefit,
                          &subscriptionBenefit);
  func_?(uVar6);
  pSVar7 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_8,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  str0 = (String *)func_?(&StringLiteral_SubscriptionDefault_must_impleme);
  pSVar7 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar7,method_00);
  uVar6 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar6);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar7,(MethodInfo *)0x0);
  pMStack_9 = pMVar1;
  EStack_8.klass = (Enum__Class *)&UNK_?;
  EStack_8.monitor = (MonitorData *)this_00;
  func_?();
  pcVar10 = (code *)swi(3);
  pOVar11 = (Object *)(*pcVar10)();
  return pOVar11;
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
  if (subscriptionType != SubscriptionType__Enum_None) {
    if (subscriptionType == SubscriptionType__Enum_Membership1) {
      pSVar1 = (SubscriptionBase *)
               func_?(
                              TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__SubscriptionMember1
                              );
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
      pDVar2 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pSVar1->fields).benefits;
      pXVar3 = TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster;
      pMVar4 = (MethodInfo *)func_?();
      pMVar5 = pMVar4;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pMVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pXVar3);
      pMVar4->invoker_method = (InvokerMethod)0x32;
      pMVar4->name = (char *)0xa;
      pMVar4->klass = (Il2CppClass *)0xa;
      pMVar4->return_type = (Il2CppType *)0x190;
      if (pDVar2 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Add
                  (pDVar2,1,(Object *)pMVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                  );
        pDVar2 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pSVar1->fields).benefits;
        pOVar6 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOVar6,ExceptionArgument__Enum_obj,pMVar5);
        *(undefined1 *)&pOVar6[1].klass = 1;
        if (pDVar2 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__Add
                    (pDVar2,3,pOVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                    );
          pDVar2 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pSVar1->fields).benefits;
          pOVar6 = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (pOVar6,ExceptionArgument__Enum_obj,pMVar5);
          *(undefined1 *)&pOVar6[1].klass = 1;
          if (pDVar2 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                      (pDVar2,4,pOVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                      );
            pDVar2 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pSVar1->fields).benefits;
            pOVar6 = (Object *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      (pOVar6,ExceptionArgument__Enum_obj,pMVar5);
            *(undefined1 *)&pOVar6[1].klass = 1;
            if (pDVar2 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__Add
                        (pDVar2,5,pOVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                        );
              return pSVar1;
            }
          }
        }
      }
    }
    else if (subscriptionType == SubscriptionType__Enum_Membership2) {
      pSVar1 = (SubscriptionBase *)
               func_?(
                              TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__SubscriptionMember2
                              );
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
      pDVar2 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pSVar1->fields).benefits;
      pXVar3 = TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster;
      pMVar4 = (MethodInfo *)func_?();
      pMVar5 = pMVar4;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)pMVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pXVar3);
      pMVar4->invoker_method = (InvokerMethod)0x32;
      pMVar4->name = (char *)0xa;
      pMVar4->klass = (Il2CppClass *)0x2;
      pMVar4->return_type = (Il2CppType *)0x190;
      if (pDVar2 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Add
                  (pDVar2,1,(Object *)pMVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                  );
        pDVar2 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pSVar1->fields).benefits;
        pOVar6 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOVar6,ExceptionArgument__Enum_obj,pMVar5);
        *(undefined1 *)&pOVar6[1].klass = 1;
        if (pDVar2 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__Add
                    (pDVar2,3,pOVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                    );
          return pSVar1;
        }
      }
    }
    else {
      uVar7 = func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionType,
                              &subscriptionType);
      func_?(uVar7);
      pSVar8 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0)
      ;
      pMVar5 = (MethodInfo *)0x0;
      str0 = (String *)func_?(&StringLiteral_Unknown_subscription_type__);
      pSVar8 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar8,pMVar5);
      uVar7 = func_?(&TypeInfo__System__Exception);
      this = (Exception *)func_?(uVar7);
      mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar8,(MethodInfo *)0x0);
      func_?(&
                      MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetSubscription_MV__WorldObject__Subscription__SubscriptionType_
                     );
      func_?();
    }
    func_?();
    pcVar9 = (code *)swi(3);
    pSVar1 = (SubscriptionBase *)(*pcVar9)();
    return pSVar1;
  }
  pSVar1 = (SubscriptionBase *)
           func_?(
                          TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__BuiltInTypes__SubscriptionNone
                          );
  SubscriptionBase::SubscriptionBase__ctor(pSVar1,(MethodInfo *)0x0);
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
    this_00 = (pSVar1->fields).benefits;
    if (this_00 !=
        (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_MV_WorldObject_Subscription_SubscriptionRule_
         *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,subscriptionBenefit
                         ,
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
  EStack_1.klass = (Enum__Class *)TypeInfo__MV__WorldObject__Subscription__SubscriptionType;
  EStack_1.monitor = (MonitorData *)0xffffffff;
  iStack_2 = (this->fields).SubscriptionType;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_SubscriptionType__,pSVar3,(MethodInfo *)0x0);
  return pSVar3;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).SubscriptionType = subscriptionType;
  this_00 = (SubscriptionDefault *)
            func_?(
                           TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__BuiltInTypes__SubscriptionDefault
                           );
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
  pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this_00->fields)._.benefits;
  method_01 = TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster;
  value = (MethodInfo *)func_?();
  method_00 = value;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  value->invoker_method = (InvokerMethod)0x0;
  value->name = (char *)0xa;
  value->klass = (Il2CppClass *)0xa;
  value->return_type = (Il2CppType *)0x190;
  if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              (pDVar1,1,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
              );
    pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this_00->fields)._.benefits;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar2,ExceptionArgument__Enum_obj,method_00);
    pOVar2[1].klass = (Object__Class *)0x0;
    if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                (pDVar1,2,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                );
      pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this_00->fields)._.benefits;
      pOVar2 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar2,ExceptionArgument__Enum_obj,method_00);
      *(undefined1 *)&pOVar2[1].klass = 0;
      if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Add
                  (pDVar1,3,pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                  );
        (this->fields).subscriptionDefault = this_00;
        func_?();
        pSVar3 = SubscriptionRulesWrapper_GetSubscription(subscriptionType,(MethodInfo *)0x0);
        (this->fields).subscriptionBase = pSVar3;
        func_?(&this->fields,pSVar3);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

