
/* Boolean HasBenefit(SubscriptionBenefit) */

bool MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionBase::SubscriptionBase_HasBenefit
               (SubscriptionBase *this,SubscriptionBenefit__Enum subscriptionBenefit,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).benefits;
  if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this_00,subscriptionBenefit,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean TryGetRule[Object](SubscriptionBenefit, Object ByRef) */

bool MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionBase::SubscriptionBase_TryGetRule
               (SubscriptionBase *this,SubscriptionBenefit__Enum subscriptionBenefit,Object **rule,
               MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__TryGetValue_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule__
                 );
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)(this->fields).benefits;
  pOVar1 = (Object *)0x0;
  pOStackX_8 = (Object *)0x0;
  if (this_00 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__TryGetValue
                    (this_00,subscriptionBenefit,&pOStackX_8,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__TryGetValue_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule__
                    );
  pOVar4 = pOStackX_8;
  if (bVar3 == 0) {
    bVar3 = 0;
    *rule = (Object *)0x0;
  }
  else {
    pIVar5 = (method->field7_0x38).rgctx_data[1].klass;
    if ((pIVar5->field_0x135 & 1) == 0) {
      pIVar5 = (Il2CppClass *)FUN_?(pIVar5);
    }
    pOVar6 = pOVar1;
    if (pOVar4 != (Object *)0x0) {
      pOVar7 = pOVar4->klass;
      cVar8 = FUN_?(pIVar5,pOVar7);
      pOVar6 = pOVar4;
      if (cVar8 == '\0') {
        if (((pOVar7->_1).field_0x6e & 0x10) == 0) {
code_?:
          FUN_?(pOVar4,pIVar5);
          pcVar2 = (code *)swi(3);
          bVar3 = (*pcVar2)();
          return bVar3;
        }
        if (((((pIVar5->token & 0x20) == 0) && ((pIVar5->byval_arg).type != 0x13)) &&
            ((pIVar5->byval_arg).type != 0x1e)) ||
           (((pIVar5->interopData == (Il2CppInteropData *)0x0 ||
             (pIVar5->interopData->guid == (Il2CppGuid *)0x0)) ||
            (lVar9 = FUN_?(pOVar4), lVar9 == 0)))) {
          pOVar6 = pOVar1;
          if (pIVar5 == pIRam0000000182dc2ee0) {
            pOVar6 = pOVar4;
          }
          if (pOVar6 == (Object *)0x0) goto code_?;
        }
      }
    }
    *rule = pOVar6;
    pIVar5 = (method->field7_0x38).rgctx_data[1].klass;
    if ((pIVar5->field_0x135 & 1) == 0) {
      pIVar5 = (Il2CppClass *)FUN_?(pIVar5);
    }
    if (pOVar4 != (Object *)0x0) {
      pOVar7 = pOVar4->klass;
      cVar8 = FUN_?(pIVar5,pOVar7);
      if (cVar8 == '\0') {
        if (((pOVar7->_1).field_0x6e & 0x10) == 0) {
DAT_?:
          FUN_?(pOVar4,pIVar5);
          pcVar2 = (code *)swi(3);
          bVar3 = (*pcVar2)();
          return bVar3;
        }
        if (((((pIVar5->token & 0x20) == 0) && ((pIVar5->byval_arg).type != 0x13)) &&
            ((pIVar5->byval_arg).type != 0x1e)) ||
           (((pIVar5->interopData == (Il2CppInteropData *)0x0 ||
             (pIVar5->interopData->guid == (Il2CppGuid *)0x0)) ||
            (lVar9 = FUN_?(pOVar4), lVar9 == 0)))) {
          if (pIVar5 == pIRam0000000182dc2ee0) {
            pOVar1 = pOVar4;
          }
          if (pOVar1 == (Object *)0x0) goto DAT_?;
        }
      }
    }
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)rule >> 0xc);
      puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar12 = *puVar11;
        LOCK();
        uVar13 = *puVar11;
        if (uVar12 == uVar13) {
          *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (uVar12 != uVar13);
    }
    bVar3 = 1;
  }
  return bVar3;
}


/* SubscriptionBase() */

void MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionBase::SubscriptionBase__ctor
               (SubscriptionBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).benefits =
       (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_MV_WorldObject_Subscription_SubscriptionRule_
        *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

