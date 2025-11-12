
/* Object GetRule[Object](SubscriptionBenefit) */

Object * MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
         SubscriptionRulesWrapper_GetRule
                   (SubscriptionRulesWrapper *this,SubscriptionBenefit__Enum subscriptionBenefit,
                   MethodInfo *method)

{
  SStackX_10 = subscriptionBenefit;
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(method);
  }
  this_00 = (this->fields).subscriptionBase;
  pOStackX_8 = (Object *)0x0;
  if (this_00 != (SubscriptionBase *)0x0) {
    bVar1 = SubscriptionBase::SubscriptionBase_TryGetRule
                      (this_00,subscriptionBenefit,&pOStackX_8,
                       ((method->field7_0x38).rgctx_data)->method);
    if (bVar1 == 0) {
      this_01 = (this->fields).subscriptionDefault;
      if (this_01 == (SubscriptionDefault *)0x0) goto code_?;
      bVar1 = SubscriptionBase::SubscriptionBase_TryGetRule
                        ((SubscriptionBase *)this_01,subscriptionBenefit,&pOStackX_8,
                         ((method->field7_0x38).rgctx_data)->method);
      if (bVar1 == 0) {
        func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionBenefit);
        func_?(aEStack_2);
        pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(aEStack_2,(MethodInfo *)0x0);
        str0 = (String *)func_?(&StringLiteral_SubscriptionDefault_must_impleme);
        pSVar3 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar3,(MethodInfo *)0x0);
        uVar4 = func_?(&TypeInfo__System__Exception);
        this_02 = (Exception *)func_?(uVar4);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_02,pSVar3,(MethodInfo *)0x0);
        FUN_?(this_02,method);
        pcVar5 = (code *)swi(3);
        pOVar6 = (Object *)(*pcVar5)();
        return pOVar6;
      }
    }
    return pOStackX_8;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  pOVar6 = (Object *)(*pcVar5)();
  return pOVar6;
}


/* SubscriptionBase GetSubscription(SubscriptionType) */

SubscriptionBase *
MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
SubscriptionRulesWrapper_GetSubscription(SubscriptionType__Enum subscriptionType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__SubscriptionMember1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__SubscriptionMember2);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__BuiltInTypes__SubscriptionNone
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (subscriptionType == SubscriptionType__Enum_None) {
    pSVar1 = (SubscriptionBase *)
             FUN_?(
                          TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__BuiltInTypes__SubscriptionNone
                          );
    SubscriptionBase::SubscriptionBase__ctor(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  if (subscriptionType == SubscriptionType__Enum_Membership1) {
    pSVar1 = (SubscriptionBase *)
             FUN_?(
                          TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__SubscriptionMember1
                          );
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    SubscriptionBase::SubscriptionBase__ctor(pSVar1,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pSVar1->fields).benefits;
    pOVar3 = (Object *)
             FUN_?(TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster);
    *(undefined4 *)&pOVar3[1].klass = 0x32;
    *(undefined4 *)((longlong)&pOVar3[1].klass + 4) = 10;
    *(undefined4 *)&pOVar3[1].monitor = 10;
    *(undefined4 *)((longlong)&pOVar3[1].monitor + 4) = 400;
    if (pDVar2 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
      IVar4 = CONCAT31((int3)((uint)in_R9D >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                (pDVar2,1,pOVar3,IVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                 ->klass->rgctx_data[0x22].method);
      pDVar2 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pSVar1->fields).benefits;
      pOVar3 = (Object *)
               FUN_?(
                            TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                            );
      *(undefined1 *)&pOVar3[1].klass = 1;
      if (pDVar2 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
        IVar4 = CONCAT31((int3)(IVar4 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                  (pDVar2,3,pOVar3,IVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                   ->klass->rgctx_data[0x22].method);
        pDVar2 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pSVar1->fields).benefits;
        pOVar3 = (Object *)
                 FUN_?(
                              TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                              );
        *(undefined1 *)&pOVar3[1].klass = 1;
        if (pDVar2 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
          IVar4 = CONCAT31((int3)(IVar4 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                    (pDVar2,4,pOVar3,IVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                     ->klass->rgctx_data[0x22].method);
          pDVar2 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pSVar1->fields).benefits;
          pOVar3 = (Object *)
                   FUN_?(
                                TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                                );
          *(undefined1 *)&pOVar3[1].klass = 1;
          if (pDVar2 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
            uVar5 = (undefined3)(IVar4 >> 8);
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                        ->klass->rgctx_data[0x22].method;
            key = 5;
            goto code_?;
          }
        }
      }
    }
  }
  else {
    if (subscriptionType != SubscriptionType__Enum_Membership2) {
      func_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionType);
      func_?(aEStack_6);
      pSVar7 = mscorlib.dll::System::Enum::Enum_ToString(aEStack_6,(MethodInfo *)0x0);
      str0 = (String *)func_?(&StringLiteral_Unknown_subscription_type__);
      pSVar7 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar7,(MethodInfo *)0x0);
      uVar8 = func_?(&TypeInfo__System__Exception);
      this = (Exception *)func_?(uVar8);
      mscorlib.dll::System::Exception::Exception__ctor_1(this,pSVar7,(MethodInfo *)0x0);
      uVar8 = func_?(&
                                  MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetSubscription_MV__WorldObject__Subscription__SubscriptionType_
                                 );
      FUN_?(this,uVar8);
      pcVar9 = (code *)swi(3);
      pSVar1 = (SubscriptionBase *)(*pcVar9)();
      return pSVar1;
    }
    pSVar1 = (SubscriptionBase *)
             FUN_?(
                          TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__SubscriptionMember2
                          );
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    SubscriptionBase::SubscriptionBase__ctor(pSVar1,(MethodInfo *)0x0);
    pDVar2 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pSVar1->fields).benefits;
    pOVar3 = (Object *)
             FUN_?(TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster);
    *(undefined4 *)&pOVar3[1].klass = 0x32;
    *(undefined4 *)((longlong)&pOVar3[1].klass + 4) = 10;
    *(undefined4 *)&pOVar3[1].monitor = 2;
    *(undefined4 *)((longlong)&pOVar3[1].monitor + 4) = 400;
    if (pDVar2 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
      IVar4 = CONCAT31((int3)((uint)in_R9D >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                (pDVar2,1,pOVar3,IVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                 ->klass->rgctx_data[0x22].method);
      pDVar2 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pSVar1->fields).benefits;
      pOVar3 = (Object *)
               FUN_?(
                            TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                            );
      *(undefined1 *)&pOVar3[1].klass = 1;
      if (pDVar2 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
        uVar5 = (undefined3)(IVar4 >> 8);
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                    ->klass->rgctx_data[0x22].method;
        key = 3;
code_?:
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                  (pDVar2,key,pOVar3,CONCAT31(uVar5,2),method_00);
        return pSVar1;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pSVar1 = (SubscriptionBase *)(*pcVar9)();
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
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(pSVar1->fields).benefits;
    if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine
              ::Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                        (this_00,subscriptionBenefit,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_
                         ->klass->rgctx_data[0x21].method);
      return (byte)((uint)iVar2 >> 0x1f) ^ 1;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
         SubscriptionRulesWrapper_ToString(SubscriptionRulesWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SubscriptionType__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__MV__WorldObject__Subscription__SubscriptionType;
  iStack_2 = (this->fields).SubscriptionType;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_SubscriptionType__;
  if ((StringLiteral_SubscriptionType__ == (String *)0x0) ||
     ((StringLiteral_SubscriptionType__->fields)._stringLength == 0)) {
    if ((pSVar3 != (String *)0x0) && ((pSVar3->fields)._stringLength != 0)) {
      return pSVar3;
    }
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  if ((pSVar3 == (String *)0x0) || ((pSVar3->fields)._stringLength == 0)) {
    return StringLiteral_SubscriptionType__;
  }
  iVar5 = (StringLiteral_SubscriptionType__->fields)._stringLength;
  pSVar6 = (String *)FUN_?((pSVar3->fields)._stringLength + iVar5,pSVar3,0);
  if (pSVar6 == (String *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar7)();
    return pSVar4;
  }
  if ((pSVar4->fields)._stringLength <= (pSVar6->fields)._stringLength) {
    puVar8 = &(pSVar6->fields)._firstChar;
    puVar9 = &(pSVar4->fields)._firstChar;
    uVar10 = (pSVar4->fields)._stringLength * 2;
    if (((ulonglong)((longlong)puVar8 - (longlong)puVar9) < (ulonglong)uVar10) ||
       ((ulonglong)((longlong)puVar9 - (longlong)puVar8) < (ulonglong)uVar10)) {
      FUN_?();
    }
    else {
      mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                ((uint8_t *)puVar8,(uint8_t *)puVar9,uVar10,(MethodInfo *)0x0);
    }
    if ((pSVar3->fields)._stringLength <= (pSVar6->fields)._stringLength - iVar5) {
      puVar9 = &(pSVar6->fields)._firstChar + iVar5;
      puVar8 = &(pSVar3->fields)._firstChar;
      uVar10 = (pSVar3->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar9 - (longlong)puVar8) < (ulonglong)uVar10) ||
         ((ulonglong)((longlong)puVar8 - (longlong)puVar9) < (ulonglong)uVar10)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar9,(uint8_t *)puVar8,uVar10,(MethodInfo *)0x0);
      }
      return pSVar6;
    }
    uVar11 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar12 = (IndexOutOfRangeException *)func_?(uVar11);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar12,(MethodInfo *)0x0);
    uVar11 = func_?(&
                                MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                               );
    FUN_?(pIVar12,uVar11);
    pcVar7 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar7)();
    return pSVar4;
  }
  uVar11 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  pIVar12 = (IndexOutOfRangeException *)func_?(uVar11);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
            (pIVar12,(MethodInfo *)0x0);
  uVar11 = func_?(&
                              MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                             );
  FUN_?(pIVar12,uVar11);
  pcVar7 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar7)();
  return pSVar4;
}


/* SubscriptionRulesWrapper(SubscriptionType) */

void MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
     SubscriptionRulesWrapper__ctor
               (SubscriptionRulesWrapper *this,SubscriptionType__Enum subscriptionType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__BuiltInTypes__SubscriptionDefault
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).SubscriptionType = subscriptionType;
  this_00 = (SubscriptionDefault *)
            FUN_?(
                         TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__BuiltInTypes__SubscriptionDefault
                         );
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  SubscriptionBase::SubscriptionBase__ctor((SubscriptionBase *)this_00,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this_00->fields)._.benefits;
  pOVar2 = (Object *)
           FUN_?(TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster);
  *(undefined4 *)&pOVar2[1].klass = 0;
  *(undefined4 *)((longlong)&pOVar2[1].klass + 4) = 10;
  *(undefined4 *)&pOVar2[1].monitor = 10;
  *(undefined4 *)((longlong)&pOVar2[1].monitor + 4) = 400;
  if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    IVar3 = CONCAT31((int3)((uint)in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              (pDVar1,1,pOVar2,IVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
               ->klass->rgctx_data[0x22].method);
    pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this_00->fields)._.benefits;
    pOVar2 = (Object *)
             FUN_?(
                          TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster
                          );
    *(undefined4 *)&pOVar2[1].klass = 0;
    if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
      IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                (pDVar1,2,pOVar2,IVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                 ->klass->rgctx_data[0x22].method);
      pDVar1 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this_00->fields)._.benefits;
      pOVar2 = (Object *)
               FUN_?(
                            TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
                            );
      *(undefined1 *)&pOVar2[1].klass = 0;
      if (pDVar1 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                  (pDVar1,3,pOVar2,CONCAT31((int3)(IVar3 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                   ->klass->rgctx_data[0x22].method);
        bVar4 = iRam_? != 0;
        (this->fields).subscriptionDefault = this_00;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&(this->fields).subscriptionDefault >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar4 = uVar7 == *puVar8;
            if (bVar4) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
        pSVar9 = SubscriptionRulesWrapper_GetSubscription(subscriptionType,(MethodInfo *)0x0);
        bVar4 = iRam_? != 0;
        (this->fields).subscriptionBase = pSVar9;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&this->fields >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar4 = uVar7 == *puVar8;
            if (bVar4) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

