
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_AddModifier
               (AvatarModifierPackages *this,AvatarModifierPackageType__Enum modifierPackageType,
               int32_t id,AvatarModifierPackage_AvatarModifier__Array *additionalModifers,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackageFactory);
    func_?(&
                    AvatarModifierPackage__AvatarModifier__MethodInfo__System__Linq__Enumerable__ToArray<AvatarModifierPackage::AvatarModifier>_System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_____
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_MethodInfo__System__Linq__Enumerable__Union<AvatarModifierPackage::AvatarModifier>_System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>__System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_
                   );
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  func_?(&iStack_1,0,0x44);
  if (modifierPackageType != AvatarModifierPackageType__Enum_None) {
    if ((TypeInfo__AvatarModifierPackageFactory->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarModifierPackageFactory);
    }
    pAVar2 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                       (&AStack_3,modifierPackageType,(MethodInfo *)0x0);
    iStack_1 = pAVar2->id;
    iStack_4 = (pAVar2->duration).currentCryptoKey;
    AStack_5 = (pAVar2->duration).hiddenValue;
    pBStack_6 = (pAVar2->duration).hiddenValueOld;
    fStack_7 = (pAVar2->duration).fakeValue;
    uStack_8 = *(undefined4 *)&(pAVar2->duration).inited;
    pAStack_9 = pAVar2->avatarModifiers;
    pDStack_10 = pAVar2->actionsToTakeVsTypes;
    iStack_11 = (pAVar2->timeStamp).currentCryptoKey;
    AStack_12 = (pAVar2->timeStamp).hiddenValue;
    pBStack_13 = (pAVar2->timeStamp).hiddenValueOld;
    fStack_14 = (pAVar2->timeStamp).fakeValue;
    uStack_15 = *(undefined4 *)&(pAVar2->timeStamp).inited;
    uStack_16 = *(undefined4 *)&pAVar2->persistant;
    fStack_17 = pAVar2->lastTimeStamp;
    iStack_18 = pAVar2->avatarModifierPackageType;
    iStack_19 = pAVar2->avatarModifierPackageAdditionPolicy;
    if (additionalModifers != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
      pAStack_20 = (AvatarModifierPackages *)pAVar2->id;
      pEStack_21 = (EventArgs *)(pAVar2->duration).currentCryptoKey;
      AStack_22 = (pAVar2->duration).hiddenValue;
      pBStack_23 = (pAVar2->duration).hiddenValueOld;
      iStack_24 = (pAVar2->timeStamp).currentCryptoKey;
      AStack_25 = (pAVar2->timeStamp).hiddenValue;
      pBStack_26 = (pAVar2->timeStamp).hiddenValueOld;
      fStack_27 = (pAVar2->timeStamp).fakeValue;
      uStack_28 = *(undefined4 *)&(pAVar2->timeStamp).inited;
      uStack_29 = *(undefined4 *)&pAVar2->persistant;
      fStack_30 = pAVar2->lastTimeStamp;
      iStack_31 = pAVar2->avatarModifierPackageType;
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_Union_1
                         ((IEnumerable_1_AvatarModifierPackage_AvatarModifier_ *)
                          pAVar2->avatarModifiers,
                          (IEnumerable_1_AvatarModifierPackage_AvatarModifier_ *)additionalModifers,
                          System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_MethodInfo__System__Linq__Enumerable__Union<AvatarModifierPackage::AvatarModifier>_System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>__System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_
                         );
      pAStack_9 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_4
                             (source,
                              AvatarModifierPackage__AvatarModifier__MethodInfo__System__Linq__Enumerable__ToArray<AvatarModifierPackage::AvatarModifier>_System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_____
                             );
      func_?(&pAStack_9,pAStack_9);
    }
    modifierPackage.duration.currentCryptoKey = iStack_4;
    modifierPackage.id = iStack_1;
    modifierPackage.duration.hiddenValue = AStack_5;
    modifierPackage.duration.hiddenValueOld = pBStack_6;
    modifierPackage.duration.fakeValue = fStack_7;
    modifierPackage.duration._16_4_ = uStack_8;
    modifierPackage.avatarModifiers = pAStack_9;
    modifierPackage.actionsToTakeVsTypes = pDStack_10;
    modifierPackage.timeStamp.currentCryptoKey = iStack_11;
    modifierPackage.timeStamp.hiddenValue = AStack_12;
    modifierPackage.timeStamp.hiddenValueOld = pBStack_13;
    modifierPackage.timeStamp.fakeValue = fStack_14;
    modifierPackage.timeStamp._16_4_ = uStack_15;
    modifierPackage._52_4_ = uStack_16;
    modifierPackage.lastTimeStamp = fStack_17;
    modifierPackage.avatarModifierPackageType = iStack_18;
    modifierPackage.avatarModifierPackageAdditionPolicy = iStack_19;
    AvatarModifierPackages_AddModifierPackage(this,modifierPackage,id,(MethodInfo *)0x0);
    uVar32 = 0;
    pAStack_33 = pAStack_9;
    if (pAStack_9 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
code_?:
      func_?();
      pcVar34 = (code *)swi(3);
      (*pcVar34)();
      return;
    }
    pAVar35 = pAStack_9->vector;
    for (; (int)uVar32 < (int)pAStack_33->max_length; uVar32 = uVar32 + 1) {
      if (pAStack_33 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
      if (pAStack_33->max_length <= uVar32) {
        func_?();
        goto code_?;
      }
      uVar36._0_4_ = pAVar35->avatarModifierType;
      uVar36._4_4_ = pAVar35->avatarModifierEffect;
      uStack_37 = uVar36;
      if (((uVar36._4_4_ == 7) || (uVar36._4_4_ == 8)) &&
         ((this->fields).OnUnequipItemEvent != (EventHandler_1_EventArgs_ *)0x0)) {
        pEStack_38 = (this->fields).OnUnequipItemEvent;
        if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
          AStack_22 = (ACTkByte4)TypeInfo__System__EventArgs;
          func_?();
        }
        AStack_22 = (ACTkByte4)(pEStack_38->fields)._._.method;
        pEStack_21 = TypeInfo__System__EventArgs->static_fields->Empty;
        pAStack_20 = this;
        AStack_3.avatarModifierPackageAdditionPolicy = (int32_t)(pEStack_38->fields)._._.method_code
        ;
        AStack_3.avatarModifierPackageType = (int32_t)&UNK_?;
        (*(pEStack_38->fields)._._.invoke_impl)();
      }
      if ((uVar36._4_4_ == 9) &&
         ((this->fields).OnDisableVehiclesEvent != (EventHandler_1_EventArgs_ *)0x0)) {
        pEVar39 = (this->fields).OnDisableVehiclesEvent;
        if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
          AStack_22 = (ACTkByte4)TypeInfo__System__EventArgs;
          func_?();
        }
        AStack_22 = (ACTkByte4)(pEVar39->fields)._._.method;
        pEStack_21 = TypeInfo__System__EventArgs->static_fields->Empty;
        pAStack_20 = this;
        AStack_3.avatarModifierPackageAdditionPolicy = (int32_t)(pEVar39->fields)._._.method_code;
        AStack_3.avatarModifierPackageType = (int32_t)&UNK_?;
        (*(pEVar39->fields)._._.invoke_impl)();
      }
      pAVar35 = pAVar35 + 1;
    }
  }
  return;
}


/* Void AddModifierPackage(AvatarModifierPackage, Int32) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_AddModifierPackage
               (AvatarModifierPackages *this,AvatarModifierPackage modifierPackage,int32_t id,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Add_AvatarModifierPackage_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__FindIndex_System__Predicate<AvatarModifierPackage>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__set_Item_int__AvatarModifierPackage_
                   );
    func_?(&TypeInfo__System__Predicate<AvatarModifierPackage>);
    func_?(&
                    MethodInfo__AvatarModifierPackages____c__DisplayClass20_0___AddModifierPackage_b__0_AvatarModifierPackage_
                   );
    func_?(&TypeInfo__AvatarModifierPackages____c__DisplayClass20_0);
    cRam_? = '\x01';
  }
  func_?(&AStack_1,0,0x44);
  this_00 = (TweenRunner_1_FloatTween_ *)
            func_?(TypeInfo__AvatarModifierPackages____c__DisplayClass20_0);
  if (this_00 != (TweenRunner_1_FloatTween_ *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
    (this_00->fields).m_CoroutineContainer = (MonoBehaviour *)modifierPackage.id;
    (this_00->fields).m_Tween = (IEnumerator *)modifierPackage.duration.currentCryptoKey;
    this_00[1].klass = (TweenRunner_1_FloatTween___Class *)modifierPackage.duration.hiddenValue;
    this_00[1].monitor = (MonitorData *)modifierPackage.duration.hiddenValueOld;
    this_00[1].fields.m_CoroutineContainer = (MonoBehaviour *)modifierPackage.duration.fakeValue;
    this_00[1].fields.m_Tween = (IEnumerator *)modifierPackage.duration._16_4_;
    this_00[2].klass = (TweenRunner_1_FloatTween___Class *)modifierPackage.avatarModifiers;
    this_00[2].monitor = (MonitorData *)modifierPackage.actionsToTakeVsTypes;
    this_00[2].fields.m_CoroutineContainer =
         (MonoBehaviour *)modifierPackage.timeStamp.currentCryptoKey;
    this_00[2].fields.m_Tween = (IEnumerator *)modifierPackage.timeStamp.hiddenValue;
    this_00[3].klass = (TweenRunner_1_FloatTween___Class *)modifierPackage.timeStamp.hiddenValueOld;
    this_00[3].monitor = (MonitorData *)modifierPackage.timeStamp.fakeValue;
    this_00[3].fields.m_CoroutineContainer = (MonoBehaviour *)modifierPackage.timeStamp._16_4_;
    this_00[3].fields.m_Tween = (IEnumerator *)modifierPackage._52_4_;
    this_00[4].klass = (TweenRunner_1_FloatTween___Class *)modifierPackage.lastTimeStamp;
    this_00[4].monitor = (MonitorData *)modifierPackage.avatarModifierPackageType;
    this_00[4].fields.m_CoroutineContainer =
         (MonoBehaviour *)modifierPackage.avatarModifierPackageAdditionPolicy;
    func_?(&this_00[1].monitor,0);
    (this_00->fields).m_CoroutineContainer = (MonoBehaviour *)id;
    bVar2 = AvatarModifierPackages_HandleNewAvatarModifierPackage
                       (this,*(AvatarModifierPackage *)&this_00->fields,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if (this_00[4].fields.m_CoroutineContainer == (MonoBehaviour *)0x1) {
      pLStack_3 = (this->fields).packages;
      this_01 = (Predicate_1_AvatarModifierPackage_ *)
                func_?(TypeInfo__System__Predicate<AvatarModifierPackage>);
      if ((this_01 != (Predicate_1_AvatarModifierPackage_ *)0x0) &&
         (mscorlib.dll::System::Predicate`1[AvatarModifierPackage]::
          Predicate_1_AvatarModifierPackage___ctor
                    (this_01,(Object *)this_00,
                     MethodInfo__AvatarModifierPackages____c__DisplayClass20_0___AddModifierPackage_b__0_AvatarModifierPackage_
                     ,(MethodInfo *)0x0), pLStack_3 != (List_1_AvatarModifierPackage_ *)0x0)) {
        index = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                UnitySynchronizationContext+WorkRequest]::
                List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__FindIndex
                          ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLStack_3,
                           (Predicate_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                           this_01,
                           MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__FindIndex_System__Predicate<AvatarModifierPackage>_
                          );
        if (index == -1) goto code_?;
        pLVar4 = (this->fields).packages;
        if (pLVar4 != (List_1_AvatarModifierPackage_ *)0x0) {
          piVar5 = (int32_t *)
                    func_?(auStack_6,pLVar4,index,
                                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                                   );
          AStack_1.id = *piVar5;
          AStack_1.duration.currentCryptoKey = piVar5[1];
          AStack_1.duration.hiddenValue = *(ACTkByte4 *)(piVar5 + 2);
          AStack_1.duration.hiddenValueOld = (Byte__Array *)piVar5[3];
          AStack_1.duration.fakeValue = (float)piVar5[4];
          AStack_1.duration._16_4_ = piVar5[5];
          AStack_1.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)piVar5[6];
          AStack_1.actionsToTakeVsTypes =
               (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)piVar5[7];
          AStack_1.timeStamp.currentCryptoKey = piVar5[8];
          AStack_1.timeStamp.hiddenValue = *(ACTkByte4 *)(piVar5 + 9);
          AStack_1.timeStamp.hiddenValueOld = (Byte__Array *)piVar5[10];
          AStack_1.timeStamp.fakeValue = (float)piVar5[0xb];
          AStack_1.timeStamp._16_4_ = piVar5[0xc];
          AStack_1._52_4_ = piVar5[0xd];
          AStack_1.lastTimeStamp = (float)piVar5[0xe];
          AStack_1.avatarModifierPackageType = piVar5[0xf];
          AStack_1.avatarModifierPackageAdditionPolicy = piVar5[0x10];
          AvatarModifierPackage::AvatarModifierPackage_Renew(&AStack_1,(MethodInfo *)0x0);
          pLVar4 = (this->fields).packages;
          if (pLVar4 != (List_1_AvatarModifierPackage_ *)0x0) {
            value.duration.currentCryptoKey = AStack_1.duration.currentCryptoKey;
            value.id = AStack_1.id;
            value.duration.hiddenValue = AStack_1.duration.hiddenValue;
            value.duration.hiddenValueOld = AStack_1.duration.hiddenValueOld;
            value.duration.fakeValue = AStack_1.duration.fakeValue;
            value.duration.inited = AStack_1.duration.inited;
            value.duration._17_3_ = AStack_1.duration._17_3_;
            value.avatarModifiers = AStack_1.avatarModifiers;
            value.actionsToTakeVsTypes = AStack_1.actionsToTakeVsTypes;
            value.timeStamp.currentCryptoKey = AStack_1.timeStamp.currentCryptoKey;
            value.timeStamp.hiddenValue = AStack_1.timeStamp.hiddenValue;
            value.timeStamp.hiddenValueOld = AStack_1.timeStamp.hiddenValueOld;
            value.timeStamp.fakeValue = AStack_1.timeStamp.fakeValue;
            value.timeStamp.inited = AStack_1.timeStamp.inited;
            value.timeStamp._17_3_ = AStack_1.timeStamp._17_3_;
            value.persistant = AStack_1.persistant;
            value._53_3_ = AStack_1._53_3_;
            value.lastTimeStamp = AStack_1.lastTimeStamp;
            value.avatarModifierPackageType = AStack_1.avatarModifierPackageType;
            value.avatarModifierPackageAdditionPolicy =
                 AStack_1.avatarModifierPackageAdditionPolicy;
            mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
            List_1_AvatarModifierPackage__set_Item
                      (pLVar4,index,value,
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__set_Item_int__AvatarModifierPackage_
                      );
            return;
          }
        }
      }
    }
    else {
code_?:
      pMVar7 = 
      MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Add_AvatarModifierPackage_
      ;
      pLVar4 = (this->fields).packages;
      pMVar8 = this_00[4].fields.m_CoroutineContainer;
      pMVar9 = (this_00->fields).m_CoroutineContainer;
      pIVar10 = (this_00->fields).m_Tween;
      AVar11 = (ACTkByte4)this_00[1].klass;
      pBVar12 = (Byte__Array *)this_00[1].monitor;
      pMVar13 = this_00[1].fields.m_CoroutineContainer;
      pIVar14 = this_00[1].fields.m_Tween;
      pTVar15 = this_00[2].klass;
      pMVar16 = this_00[2].monitor;
      pMVar17 = this_00[2].fields.m_CoroutineContainer;
      AVar18 = (ACTkByte4)this_00[2].fields.m_Tween;
      pTVar19 = this_00[3].klass;
      pMVar20 = this_00[3].monitor;
      pMVar21 = this_00[3].fields.m_CoroutineContainer;
      pIVar22 = this_00[3].fields.m_Tween;
      pTVar23 = this_00[4].klass;
      pMVar24 = this_00[4].monitor;
      if (pLVar4 != (List_1_AvatarModifierPackage_ *)0x0) {
        piVar5 = &(pLVar4->fields)._version;
        *piVar5 = *piVar5 + 1;
        pAVar25 = (pLVar4->fields)._items;
        if (pAVar25 != (AvatarModifierPackage__Array *)0x0) {
          uVar26 = (pLVar4->fields)._size;
          if (pAVar25->max_length <= uVar26) {
            (*(pMVar7->klass->rgctx_data[0xb].method)->virtualMethodPointer)
                      (pLVar4,pMVar9,pIVar10,AVar11,pBVar12,pMVar13,pIVar14,pTVar15,pMVar16,pMVar17,
                       AVar18,pTVar19,pMVar20,pMVar21,pIVar22,pTVar23,pMVar24,pMVar8,
                       pMVar7->klass->rgctx_data[0xb].rgctxDataDummy);
            return;
          }
          (pLVar4->fields)._size = uVar26 + 1;
          if (uVar26 < pAVar25->max_length) {
            pAVar27 = pAVar25->vector + uVar26;
            pAVar27->id = (int32_t)pMVar9;
            (pAVar27->duration).currentCryptoKey = (int32_t)pIVar10;
            (pAVar27->duration).hiddenValue = AVar11;
            (pAVar27->duration).hiddenValueOld = pBVar12;
            pfVar28 = &pAVar25->vector[uVar26].duration.fakeValue;
            *pfVar28 = (float)pMVar13;
            pfVar28[1] = (float)pIVar14;
            pfVar28[2] = (float)pTVar15;
            pfVar28[3] = (float)pMVar16;
            pOVar29 = &pAVar25->vector[uVar26].timeStamp;
            pOVar29->currentCryptoKey = (int32_t)pMVar17;
            pOVar29->hiddenValue = AVar18;
            pOVar29->hiddenValueOld = (Byte__Array *)pTVar19;
            pOVar29->fakeValue = (float)pMVar20;
            pOVar29 = &pAVar25->vector[uVar26].timeStamp;
            *(MonoBehaviour **)&pOVar29->inited = pMVar21;
            *(IEnumerator **)(pOVar29 + 1) = pIVar22;
            *(TweenRunner_1_FloatTween___Class **)((int)(pOVar29 + 1) + 4) = pTVar23;
            *(MonitorData **)((int)(pOVar29 + 1) + 8) = pMVar24;
            pAVar25->vector[uVar26].avatarModifierPackageAdditionPolicy = (int32_t)pMVar8;
            func_?(&pAVar25->vector[uVar26].duration.hiddenValueOld,0);
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void ClearModifiers() */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_ClearModifiers
               (AvatarModifierPackages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).packages;
  if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  index = (pLVar1->fields)._size;
  do {
    index = index + -1;
    if (index < 0) {
      return;
    }
    if ((this->fields).OnModifierExpired != (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0)
    {
      pLVar1 = (this->fields).packages;
      pAVar3 = (this->fields).OnModifierExpired;
      if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
      puVar4 = (undefined4 *)
               func_?(auStack_5,pLVar1,index,
                               MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                              );
      (*(pAVar3->fields)._._.invoke_impl)
                ((pAVar3->fields)._._.method_code,*puVar4,puVar4[1],puVar4[2],puVar4[3],puVar4[4],
                 puVar4[5],puVar4[6],puVar4[7],puVar4[8],puVar4[9],puVar4[10],puVar4[0xb],
                 puVar4[0xc],puVar4[0xd],puVar4[0xe],puVar4[0xf],puVar4[0x10],
                 (pAVar3->fields)._._.method);
    }
    pLVar1 = (this->fields).packages;
    if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
    List_1_AvatarModifierPackage__RemoveAt
              (pLVar1,index,
               MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__RemoveAt_int_)
    ;
  } while( true );
}


/* Void ClearNonPersistantModifiers() */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_ClearNonPersistantModifiers
               (AvatarModifierPackages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).packages;
  if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  index = (pLVar1->fields)._size;
  do {
    do {
      index = index + -1;
      if (index < 0) {
        return;
      }
      pLVar1 = (this->fields).packages;
      if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
      pAVar3 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
               List_1_AvatarModifierPackage__get_Item
                         (&AStack_4,pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                         );
      iStack_5 = pAVar3->id;
      iStack_6 = (pAVar3->duration).currentCryptoKey;
      AStack_7 = (pAVar3->duration).hiddenValue;
      pBStack_8 = (pAVar3->duration).hiddenValueOld;
      fStack_9 = (pAVar3->duration).fakeValue;
      uStack_10 = *(undefined4 *)&(pAVar3->duration).inited;
      pAStack_11 = pAVar3->avatarModifiers;
      pDStack_12 = pAVar3->actionsToTakeVsTypes;
      iStack_13 = (pAVar3->timeStamp).currentCryptoKey;
      AStack_14 = (pAVar3->timeStamp).hiddenValue;
      pBStack_15 = (pAVar3->timeStamp).hiddenValueOld;
      fStack_16 = (pAVar3->timeStamp).fakeValue;
    } while (pAVar3->persistant != 0);
    if ((this->fields).OnModifierExpired != (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0)
    {
      pLVar1 = (this->fields).packages;
      pAVar17 = (this->fields).OnModifierExpired;
      if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
      AStack_4.id = (int32_t)
                     MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
      ;
      puVar18 = (undefined4 *)func_?(&AStack_4,pLVar1,index);
      AStack_4.id = (int32_t)(pAVar17->fields)._._.method;
      (*(pAVar17->fields)._._.invoke_impl)
                ((pAVar17->fields)._._.method_code,*puVar18,puVar18[1],puVar18[2],puVar18[3],puVar18[4],
                 puVar18[5],puVar18[6],puVar18[7],puVar18[8],puVar18[9],puVar18[10],puVar18[0xb],
                 puVar18[0xc],puVar18[0xd],puVar18[0xe],puVar18[0xf],puVar18[0x10]);
    }
    pLVar1 = (this->fields).packages;
    if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
    List_1_AvatarModifierPackage__RemoveAt
              (pLVar1,index,
               MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__RemoveAt_int_)
    ;
  } while( true );
}


/* Dictionary`2[System.Int32,System.Single] ComputeModifierEffectGroupedById(AvatarModifierEffect,
   Single) */

Dictionary_2_System_Int32_System_Single_ *
Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_ComputeModifierEffectGroupedById
          (AvatarModifierPackages *this,AvatarModifierEffect__Enum modifierEffect,float baseValue,
          MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  pFStack_3 = (Func_1_Single_ *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pFStack_3;
  puStack_4 = &stack0xfffffebc;
  puVar5 = &stack0xfffffebc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Comparison<AvatarModifierPackage::AvatarModifier>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Add_int__float_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__Add_int__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_float>);
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Add_AvatarModifierPackage__AvatarModifier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Sort_System__Comparison<AvatarModifierPackage::AvatarModifier>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__get_Item_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>
                   );
    func_?(&
                    MethodInfo__AvatarModifierPackages____c___ComputeModifierEffectGroupedById_b__29_0_AvatarModifierPackage__AvatarModifier__AvatarModifierPackage__AvatarModifier_
                   );
    func_?(&TypeInfo__AvatarModifierPackages____c);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(auStack_6,0,0x50);
  DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  pCVar8 = (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>
                          );
  pCStack_9 = pCVar8;
  if (pCVar8 != (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pCVar8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__Dictionary__
              );
    this_00 = (this->fields).packages;
    pCStack_10 = pCVar8;
    if (this_00 != (List_1_AvatarModifierPackage_ *)0x0) {
      pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
               List_1_AvatarModifierPackage__GetEnumerator
                         ((List_1_T_Enumerator_AvatarModifierPackage_ *)auStack_12,this_00,
                          MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                         );
      iStack_13 = 0;
      auStack_6._0_4_ = pLVar11->_list;
      auStack_6._4_4_ = pLVar11->_index;
      auStack_6._8_4_ = pLVar11->_version;
      auStack_6._12_4_ = (pLVar11->_current).id;
      auStack_6._16_4_ = (pLVar11->_current).duration.currentCryptoKey;
      auStack_6._20_4_ = (pLVar11->_current).duration.hiddenValue;
      auStack_6._24_4_ = (pLVar11->_current).duration.hiddenValueOld;
      auStack_6._28_4_ = (pLVar11->_current).duration.fakeValue;
      auStack_6._32_4_ = *(undefined4 *)&(pLVar11->_current).duration.inited;
      auStack_6._36_4_ = (pLVar11->_current).avatarModifiers;
      auStack_6._40_4_ = (pLVar11->_current).actionsToTakeVsTypes;
      auStack_6._44_4_ = (pLVar11->_current).timeStamp.currentCryptoKey;
      auStack_6._48_4_ = (pLVar11->_current).timeStamp.hiddenValue;
      auStack_6._52_4_ = (pLVar11->_current).timeStamp.hiddenValueOld;
      auStack_6._56_4_ = (pLVar11->_current).timeStamp.fakeValue;
      auStack_6._60_4_ = *(undefined4 *)&(pLVar11->_current).timeStamp.inited;
      iStack_14 = *(int32_t *)&(pLVar11->_current).persistant;
      fStack_15 = (pLVar11->_current).lastTimeStamp;
      pFStack_16 = (Func_1_Single_ *)(pLVar11->_current).avatarModifierPackageType;
      iStack_17 = (pLVar11->_current).avatarModifierPackageAdditionPolicy;
      iStack_1 = 1;
      pAStack_18 = (AvatarModifierPackage_AvatarModifier__Array *)auStack_6;
      while( true ) {
        bVar19 = mscorlib.dll::System::Collections::Generic::
                List`1[T]+Enumerator[AvatarModifierPackage]::
                List_1_T_Enumerator_AvatarModifierPackage__MoveNext
                          ((List_1_T_Enumerator_AvatarModifierPackage_ *)auStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                          );
        if (bVar19 == 0) break;
        auStack_12._12_4_ = auStack_6._12_4_;
        auStack_12._16_4_ = auStack_6._16_4_;
        auStack_12._20_4_ = auStack_6._20_4_;
        auStack_12._24_4_ = auStack_6._24_4_;
        auStack_12._28_4_ = auStack_6._28_4_;
        auStack_12._32_4_ = auStack_6._32_4_;
        auStack_12._36_4_ = auStack_6._36_4_;
        auStack_12._40_4_ = auStack_6._40_4_;
        auStack_12._44_4_ = auStack_6._44_4_;
        auStack_12._48_4_ = auStack_6._48_4_;
        auStack_12._52_4_ = auStack_6._52_4_;
        auStack_12._56_4_ = auStack_6._56_4_;
        auStack_12._60_4_ = auStack_6._60_4_;
        iStack_20 = iStack_14;
        fStack_21 = fStack_15;
        pFStack_22 = pFStack_16;
        pAStack_23 = (AvatarModifierPackage_AvatarModifier__Array *)auStack_6._36_4_;
        pLStack_24 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0;
        if ((AvatarModifierPackage_AvatarModifier__Array *)auStack_6._36_4_ ==
            (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
        while (pLVar25 = pLStack_24, (int)pLStack_24 < (int)pAStack_23->max_length) {
          func_?();
          if (pFStack_26 == (Func_1_Single_ *)modifierEffect) {
            bVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,GUILoginHandler+PlanetData]::
                    Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                              ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)pCStack_9,
                               (Object *)auStack_12._12_4_,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__ContainsKey_int_
                              );
            if (bVar19 == 0) {
              this_01 = (LowLevelList_1_System_Object_ *)func_?();
              if (this_01 == (LowLevelList_1_System_Object_ *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
              LowLevelList_1_System_Object___ctor
                        (this_01,
                         MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__List__
                        );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)pCStack_9,
                         (Object *)auStack_12._12_4_,(Object *)this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__Add_int__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>_
                        );
              pLVar25 = pLStack_24;
            }
            pOVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pCStack_9,
                                auStack_12._12_4_,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__get_Item_int_
                               );
            if (pOVar27 == (Object *)0x0) goto code_?;
            func_?();
          }
          pLStack_24 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                       ((int)&pLVar25->klass + 1);
        }
      }
      iStack_1 = -1;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)auStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                 ,in_stack_28);
      pCVar8 = pCStack_9;
      iStack_1 = -1;
      pAVar29 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
      pAStack_23 = pAVar29;
      if (pAVar29 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)pAVar29,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__);
        pAStack_18 = pAVar29;
        pDVar30 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            &stack0xfffffec8,(Dictionary_2_System_Object_System_Object_ *)pCVar8,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__GetEnumerator__
                           );
        pFStack_26 = (Func_1_Single_ *)0x0;
        DStack_7._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar30->_dictionary;
        DStack_7._version = pDVar30->_version;
        DStack_7._index = pDVar30->_index;
        DStack_7._current.key = (int32_t)(pDVar30->_current).key;
        DStack_7._16_8_ = *(undefined8 *)&(pDVar30->_current).value;
        iStack_1 = 4;
        pAVar29 = pAStack_23;
        pDStack_31 = &DStack_7;
        do {
          bVar19 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                            (&DStack_7,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__MoveNext__
                            );
          if (bVar19 == 0) {
            iStack_1 = -1;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&DStack_7,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__Dispose__
                       ,in_stack_32);
            *unaff_FS_OFFSET = pFStack_3;
            return (Dictionary_2_System_Int32_System_Single_ *)pAVar29;
          }
          pOVar27 = DStack_7._current.value;
          pOStack_33 = (Object *)DStack_7._current.key;
          pLStack_24 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                       DStack_7._current.value;
          if ((TypeInfo__AvatarModifierPackages____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCVar8 = TypeInfo__AvatarModifierPackages____c->static_fields->__9__29_0;
          if (pCVar8 == (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
            if ((TypeInfo__AvatarModifierPackages____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pCStack_10 = (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)
                         TypeInfo__AvatarModifierPackages____c->static_fields->__9;
            pCStack_9 = (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
            if (pCStack_9 == (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)0x0) break;
            mscorlib.dll::System::Comparison`1[UnityEngine::UnitySynchronizationContext+WorkRequest]
            ::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor
                      ((Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                       pCStack_9,(Object *)pCStack_10,
                       MethodInfo__AvatarModifierPackages____c___ComputeModifierEffectGroupedById_b__29_0_AvatarModifierPackage__AvatarModifier__AvatarModifierPackage__AvatarModifier_
                       ,(MethodInfo *)0x0);
            TypeInfo__AvatarModifierPackages____c->static_fields->__9__29_0 = pCStack_9;
            func_?();
            pCVar8 = pCStack_9;
          }
          if ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pOVar27 ==
              (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          UnitySynchronizationContext+WorkRequest]::
          List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Sort_1
                    ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pOVar27,
                     (Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pCVar8,
                     MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Sort_System__Comparison<AvatarModifierPackage::AvatarModifier>_
                    );
          pCStack_9 = (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)baseValue;
          iVar34 = 0;
          while( true ) {
            pAVar29 = pAStack_23;
            if (pLStack_24 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0)
            goto code_?;
            if ((pLStack_24->fields)._size <= iVar34) break;
            piVar35 = (int *)func_?();
            iVar36 = *piVar35;
            if (iVar36 == 0) {
              iVar36 = func_?();
              if (*(int *)(iVar36 + 8) == 0) goto code_?;
              pCStack_10 = *(Comparison_1_AvatarModifierPackage_AvatarModifier_ **)
                            (*(int *)(iVar36 + 8) + 0xc);
              fVar37 = (float10)(*(code *)pCStack_10)();
              pCStack_10 = (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)(float)fVar37;
              pCStack_9 = (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)
                           ((float)pCStack_10 * (float)pCStack_9);
              iVar34 = iVar34 + 1;
            }
            else if (iVar36 == 1) {
              iVar36 = func_?();
              if (*(int *)(iVar36 + 8) == 0) goto code_?;
              pCStack_10 = *(Comparison_1_AvatarModifierPackage_AvatarModifier_ **)
                            (*(int *)(iVar36 + 8) + 0xc);
              fVar37 = (float10)(*(code *)pCStack_10)();
              pCStack_10 = (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)(float)fVar37;
              pCStack_9 = (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)
                           ((float)pCStack_10 + (float)pCStack_9);
              iVar34 = iVar34 + 1;
            }
            else if (iVar36 == 2) {
              iVar36 = func_?();
              if (*(int *)(iVar36 + 8) == 0) goto code_?;
              pCStack_10 = *(Comparison_1_AvatarModifierPackage_AvatarModifier_ **)
                            (*(int *)(iVar36 + 8) + 0xc);
              fVar37 = (float10)(*(code *)pCStack_10)();
              pCStack_9 = (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)(float)fVar37;
              iVar34 = iVar34 + 1;
              pCStack_10 = pCStack_9;
            }
            else {
              iVar34 = iVar34 + 1;
            }
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]
          ::Dictionary_2_System_Int32Enum_System_Single__Add
                    ((Dictionary_2_System_Int32Enum_System_Single_ *)pAStack_23,
                     (Int32Enum__Enum)pOStack_33,(float)pCStack_9,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Add_int__float_
                    );
        } while( true );
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar38 = (code *)swi(3);
  pDVar39 = (Dictionary_2_System_Int32_System_Single_ *)(*pcVar38)();
  return pDVar39;
}


/* ModifierActions GetActionToTakeWithPackageType(AvatarModifierPackageType) */

ModifierActions__Enum
Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
          (AvatarModifierPackages *this,AvatarModifierPackageType__Enum modifierPackageType,
          MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  auStack_2._40_4_ = &DAT_?;
  auStack_2._36_4_ = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (uint32_t)(auStack_2 + 0x24);
  auStack_2._32_4_ = &stack0xffffff08;
  _Var2.genericMethod = (Il2CppGenericMethod *)&stack0xffffff08;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_ModifierActions>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                   );
    cRam_? = '\x01';
    _Var2 = (_union_155)auStack_2._32_4_;
  }
  auStack_2._32_4_ = _Var2;
  func_?(&LStack_3,0,0x50);
  auStack_2._0_4_ = (Dictionary_2_System_Int32Enum_System_Single_ *)0x0;
  auStack_2._4_4_ = (Il2CppMethodPointer)0x0;
  auStack_2._8_4_ = (InvokerMethod)0x0;
  auStack_2._12_4_ = (char *)0x0;
  this_00 = (this->fields).packages;
  if (this_00 != (List_1_AvatarModifierPackage_ *)0x0) {
    pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
             List_1_AvatarModifierPackage__GetEnumerator
                       ((List_1_T_Enumerator_AvatarModifierPackage_ *)&stack0xffffff24,this_00,
                        MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                       );
    auStack_2._24_4_ = (Il2CppType **)0x0;
    LStack_3._list = pLVar4->_list;
    LStack_3._index = pLVar4->_index;
    LStack_3._version = pLVar4->_version;
    LStack_3._current.id = (pLVar4->_current).id;
    LStack_3._current.duration.currentCryptoKey = (pLVar4->_current).duration.currentCryptoKey;
    LStack_3._current.duration.hiddenValue = (pLVar4->_current).duration.hiddenValue;
    LStack_3._current.duration.hiddenValueOld = (pLVar4->_current).duration.hiddenValueOld;
    LStack_3._current.duration.fakeValue = (pLVar4->_current).duration.fakeValue;
    LStack_3._current.duration.inited = (pLVar4->_current).duration.inited;
    LStack_3._current.duration._17_3_ = *(undefined3 *)&(pLVar4->_current).duration.field_0x11;
    LStack_3._current.avatarModifiers = (pLVar4->_current).avatarModifiers;
    LStack_3._current.actionsToTakeVsTypes = (pLVar4->_current).actionsToTakeVsTypes;
    LStack_3._current.timeStamp.currentCryptoKey = (pLVar4->_current).timeStamp.currentCryptoKey;
    LStack_3._current.timeStamp.hiddenValue = (pLVar4->_current).timeStamp.hiddenValue;
    LStack_3._current.timeStamp.hiddenValueOld = (pLVar4->_current).timeStamp.hiddenValueOld;
    LStack_3._current.timeStamp.fakeValue = (pLVar4->_current).timeStamp.fakeValue;
    LStack_3._current.timeStamp.inited = (pLVar4->_current).timeStamp.inited;
    LStack_3._current.timeStamp._17_3_ = *(undefined3 *)&(pLVar4->_current).timeStamp.field_0x11;
    LStack_3._current.persistant = (pLVar4->_current).persistant;
    LStack_3._current._53_3_ = *(undefined3 *)&(pLVar4->_current).field_0x35;
    LStack_3._current.lastTimeStamp = (pLVar4->_current).lastTimeStamp;
    LStack_3._current.avatarModifierPackageType = (pLVar4->_current).avatarModifierPackageType;
    LStack_3._current.avatarModifierPackageAdditionPolicy =
         (pLVar4->_current).avatarModifierPackageAdditionPolicy;
    uStack_1._0_2_ = 0;
    uStack_1._2_1_ = 0;
    uStack_1._3_1_ = 0;
    auStack_2._28_4_ = ((Il2CppRGCTXData *)&LStack_3).rgctx_data;
    while( true ) {
      uStack_1._0_1_ = 1;
      do {
        bVar5 = mscorlib.dll::System::Collections::Generic::
                List`1[T]+Enumerator[AvatarModifierPackage]::
                List_1_T_Enumerator_AvatarModifierPackage__MoveNext
                          (&LStack_3,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                          );
        this_01 = LStack_3._current.actionsToTakeVsTypes;
        if (bVar5 == 0) {
          uStack_1._0_2_ = 0xffff;
          uStack_1._2_1_ = 0xff;
          uStack_1._3_1_ = 0xff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&LStack_3,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                     ,in_stack_6);
          *unaff_FS_OFFSET = auStack_2._36_4_;
          return ModifierActions__Enum_Add;
        }
      } while ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)LStack_3._current.actionsToTakeVsTypes ==
               (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)0x0);
      method_00 = (MethodInfo *)LStack_3._current.id;
      method_01 = LStack_3._current.duration.hiddenValue;
      pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                         ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)LStack_3._current.actionsToTakeVsTypes,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                         );
      if (pDVar7 == (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)0x0) break;
      puVar8 = (undefined4 *)func_?();
      in_stack_6 = (MethodInfo *)auStack_2;
      auStack_2._16_4_ = (Il2CppClass *)0x0;
      auStack_2._0_4_ = *puVar8;
      auStack_2._4_4_ = puVar8[1];
      auStack_2._8_4_ = puVar8[2];
      auStack_2._12_4_ = puVar8[3];
      uStack_1._0_1_ = 3;
      auStack_2._20_4_ = in_stack_6;
      while( true ) {
        bVar5 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                Int32Enum,System::Single]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                            *)auStack_2,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__MoveNext__
                          );
        if (bVar5 == 0) break;
        if (auStack_2._12_4_ == modifierPackageType) {
          if ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )this_01 !=
              (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )0x0) {
            pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                                auStack_2._12_4_,
                                MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                               );
            uStack_1._0_1_ = 1;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)in_stack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__Dispose__
                       ,method_00);
            uStack_1._0_2_ = 0xffff;
            uStack_1._2_1_ = 0xff;
            uStack_1._3_1_ = 0xff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&LStack_3,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                       ,(MethodInfo *)method_01);
            *unaff_FS_OFFSET = auStack_2._36_4_;
            return (ModifierActions__Enum)pOVar9;
          }
          goto code_?;
        }
      }
      uStack_1._0_1_ = 1;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)in_stack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__Dispose__
                 ,in_stack_10);
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  MVar12 = (*pcVar11)();
  return MVar12;
}


/* AvatarModifierPackageType GetPackageToActWith(AvatarModifierPackageType, ModifierActions) */

AvatarModifierPackageType__Enum
Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
          (AvatarModifierPackages *this,AvatarModifierPackageType__Enum modifierPackageType,
          ModifierActions__Enum action,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffef0;
  puVar5 = &stack0xfffffef0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackageFactory);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_ModifierActions>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentKey = 0;
  if ((TypeInfo__AvatarModifierPackageFactory->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarModifierPackageFactory);
  }
  pAVar7 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                     ((AvatarModifierPackage *)&stack0xfffffefc,modifierPackageType,
                      (MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)pAVar7->actionsToTakeVsTypes;
  if (pAVar7->actionsToTakeVsTypes != (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0
     ) {
    if ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
        pAVar7->actionsToTakeVsTypes !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                          ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                            *)pAVar7->actionsToTakeVsTypes,
                           MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                          );
      if (this_01 !=
          (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
           *)0x0) {
        pDVar8 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                 Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                           (&DStack_9,
                            (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                             *)this_01,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_ModifierActions>__GetEnumerator__
                           );
        DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)pDVar8->_dictionary;
        DStack_6._index = pDVar8->_index;
        DStack_6._version = pDVar8->_version;
        DStack_6._currentKey = (int32_t)pDVar8->_currentValue;
        DStack_9._version = 0;
        uStack_1 = 1;
        DStack_9._currentValue = (Object *)&DStack_6;
        while( true ) {
          bVar10 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                  Int32Enum,System::Single]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                            (&DStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__MoveNext__
                            );
          iVar11 = DStack_6._currentKey;
          if (bVar10 == 0) break;
          if (this_00 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) goto code_?;
          pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             (this_00,DStack_6._currentKey,
                              MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                             );
          if (pOVar12 == (Object *)action) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&DStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__Dispose__
                       ,in_stack_13);
            *unaff_FS_OFFSET = uStack_3;
            return (AvatarModifierPackageType__Enum)(Object *)iVar11;
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__Dispose__
                   ,in_stack_14);
        goto code_?;
      }
    }
code_?:
    func_?();
    pcVar15 = (code *)swi(3);
    AVar16 = (*pcVar15)();
    return AVar16;
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return AvatarModifierPackageType__Enum_None;
}


/* Single HandleModifierEffect(AvatarModifierEffect, Single) */

float Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_HandleModifierEffect
                (AvatarModifierPackages *this,AvatarModifierEffect__Enum modifierEffect,
                float baseValue,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffef0;
  puVar5 = &stack0xfffffef0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Comparison<AvatarModifierPackage::AvatarModifier>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Add_AvatarModifierPackage__AvatarModifier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Sort_System__Comparison<AvatarModifierPackage::AvatarModifier>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__List__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__get_Item_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>
                   );
    func_?(&
                    MethodInfo__AvatarModifierPackages____c___HandleModifierEffect_b__27_0_AvatarModifierPackage__AvatarModifier__AvatarModifierPackage__AvatarModifier_
                   );
    func_?(&TypeInfo__AvatarModifierPackages____c);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(&LStack_6,0,0x50);
  pLVar7 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>
                          );
  pLStack_8 = pLVar7;
  if (pLVar7 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar7,
               MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__List__
              );
    this_00 = (this->fields).packages;
    pLStack_9 = pLVar7;
    pLStack_10 = pLVar7;
    if (this_00 != (List_1_AvatarModifierPackage_ *)0x0) {
      pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
               List_1_AvatarModifierPackage__GetEnumerator
                         ((List_1_T_Enumerator_AvatarModifierPackage_ *)&stack0xfffffefc,this_00,
                          MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                         );
      UStack_12.m_DelagateState = (Object *)0x0;
      LStack_6._list = pLVar11->_list;
      LStack_6._index = pLVar11->_index;
      LStack_6._version = pLVar11->_version;
      LStack_6._current.id = (pLVar11->_current).id;
      LStack_6._current.duration.currentCryptoKey = (pLVar11->_current).duration.currentCryptoKey;
      LStack_6._current.duration.hiddenValue = (pLVar11->_current).duration.hiddenValue;
      LStack_6._current.duration.hiddenValueOld = (pLVar11->_current).duration.hiddenValueOld;
      LStack_6._current.duration.fakeValue = (pLVar11->_current).duration.fakeValue;
      LStack_6._current.duration.inited = (pLVar11->_current).duration.inited;
      LStack_6._current.duration._17_3_ = *(undefined3 *)&(pLVar11->_current).duration.field_0x11;
      LStack_6._current.avatarModifiers = (pLVar11->_current).avatarModifiers;
      LStack_6._current.actionsToTakeVsTypes = (pLVar11->_current).actionsToTakeVsTypes;
      LStack_6._current.timeStamp.currentCryptoKey = (pLVar11->_current).timeStamp.currentCryptoKey;
      LStack_6._current.timeStamp.hiddenValue = (pLVar11->_current).timeStamp.hiddenValue;
      LStack_6._current.timeStamp.hiddenValueOld = (pLVar11->_current).timeStamp.hiddenValueOld;
      LStack_6._current.timeStamp.fakeValue = (pLVar11->_current).timeStamp.fakeValue;
      LStack_6._current.timeStamp.inited = (pLVar11->_current).timeStamp.inited;
      LStack_6._current.timeStamp._17_3_ = *(undefined3 *)&(pLVar11->_current).timeStamp.field_0x11;
      LStack_6._current.persistant = (pLVar11->_current).persistant;
      LStack_6._current._53_3_ = *(undefined3 *)&(pLVar11->_current).field_0x35;
      LStack_6._current.lastTimeStamp = (pLVar11->_current).lastTimeStamp;
      LStack_6._current.avatarModifierPackageType = (pLVar11->_current).avatarModifierPackageType;
      LStack_6._current.avatarModifierPackageAdditionPolicy =
           (pLVar11->_current).avatarModifierPackageAdditionPolicy;
      uStack_1 = 1;
      UStack_12.m_WaitHandle = (ManualResetEvent *)&LStack_6;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::
                List`1[T]+Enumerator[AvatarModifierPackage]::
                List_1_T_Enumerator_AvatarModifierPackage__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                          );
        if (bVar13 == 0) break;
        pAStack_14 = LStack_6._current.avatarModifiers;
        iVar15 = 0;
        if (LStack_6._current.avatarModifiers == (AvatarModifierPackage_AvatarModifier__Array *)0x0
           ) goto code_?;
        for (; iVar15 < (int)pAStack_14->max_length; iVar15 = iVar15 + 1) {
          func_?();
          if (uStack_16._4_4_ == modifierEffect) {
            func_?();
          }
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&LStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                 ,in_stack_17);
      pLVar7 = pLStack_8;
      uStack_1 = 0xffffffff;
      if ((TypeInfo__AvatarModifierPackages____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_01 = TypeInfo__AvatarModifierPackages____c->static_fields->__9__27_0;
      if (this_01 == (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
        if ((TypeInfo__AvatarModifierPackages____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pLStack_10 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                     TypeInfo__AvatarModifierPackages____c->static_fields->__9;
        this_01 = (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
        if (this_01 == (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Comparison`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::
        Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest___ctor
                  ((Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_01,
                   (Object *)pLStack_10,
                   MethodInfo__AvatarModifierPackages____c___HandleModifierEffect_b__27_0_AvatarModifierPackage__AvatarModifier__AvatarModifierPackage__AvatarModifier_
                   ,(MethodInfo *)0x0);
        TypeInfo__AvatarModifierPackages____c->static_fields->__9__27_0 = this_01;
        func_?();
      }
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Sort_1
                (pLVar7,(Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_01
                 ,
                 MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Sort_System__Comparison<AvatarModifierPackage::AvatarModifier>_
                );
      iVar15 = 0;
      pLStack_8 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)baseValue;
      while( true ) {
        while( true ) {
          if ((pLStack_9->fields)._size <= iVar15) {
            *unaff_FS_OFFSET = uStack_3;
            return (float)pLStack_8;
          }
          pUVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                   UnitySynchronizationContext+WorkRequest]::
                   List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                             (&UStack_12,pLVar7,iVar15,
                              MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__get_Item_int_
                             );
          uStack_16._0_4_ = pUVar18->m_DelagateCallback;
          uStack_16._4_4_ = (AvatarModifierEffect__Enum)pUVar18->m_DelagateState;
          if ((undefined4)uStack_16 == 0) break;
          if ((undefined4)uStack_16 == 1) {
            iVar19 = func_?();
            if (*(int *)(iVar19 + 8) == 0) goto code_?;
            pLStack_10 = *(List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ **)
                          (*(int *)(iVar19 + 8) + 0xc);
            fVar20 = (float10)(*(code *)pLStack_10)();
            iVar15 = iVar15 + 1;
            pLStack_8 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                         (float)(fVar20 + (float10)(float)pLStack_8);
          }
          else {
            if ((undefined4)uStack_16 != 2) goto code_?;
            iVar19 = func_?();
            if (*(int *)(iVar19 + 8) == 0) goto code_?;
            pLStack_10 = *(List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ **)
                          (*(int *)(iVar19 + 8) + 0xc);
            fVar20 = (float10)(*(code *)pLStack_10)();
            iVar15 = iVar15 + 1;
            pLStack_8 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)(float)fVar20
            ;
          }
        }
        iVar19 = func_?();
        if (*(int *)(iVar19 + 8) == 0) break;
        pLStack_10 = *(List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ **)
                      (*(int *)(iVar19 + 8) + 0xc);
        fVar20 = (float10)(*(code *)pLStack_10)();
        pLStack_8 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                     (float)(fVar20 * (float10)(float)pLStack_8);
code_?:
        iVar15 = iVar15 + 1;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar21 = (code *)swi(3);
  fVar20 = (float10)(*pcVar21)();
  return (float)fVar20;
}


/* Boolean HandleNewAvatarModifierPackage(AvatarModifierPackage) */

bool Assembly-CSharp.dll::AvatarModifierPackages::
     AvatarModifierPackages_HandleNewAvatarModifierPackage
               (AvatarModifierPackages *this,AvatarModifierPackage newAvatarModifierPackage,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff1c;
  puVar5 = &stack0xffffff1c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_ModifierActions>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(auStack_6 + 0x10,0,0x44);
  bStack_7 = 1;
  index = 0;
  DStack_8._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)0x0;
  DStack_8._index = 0;
  DStack_8._version = 0;
  DStack_8._currentKey = 0;
code_?:
  this_00 = (this->fields).packages;
  iStack_9 = index;
  if (this_00 != (List_1_AvatarModifierPackage_ *)0x0) {
    if ((this_00->fields)._size <= index) {
      *unaff_FS_OFFSET = uStack_3;
      return bStack_7;
    }
    if (this_00 != (List_1_AvatarModifierPackage_ *)0x0) {
      pAVar10 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
               List_1_AvatarModifierPackage__get_Item
                         ((AvatarModifierPackage *)&stack0xffffff28,this_00,index,
                          MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                         );
      pOStack_11 = (Object *)0x0;
      auStack_6._16_4_ = pAVar10->id;
      pIStack_12 = (Il2CppType *)(pAVar10->duration).currentCryptoKey;
      AStack_13 = (pAVar10->duration).hiddenValue;
      _Stack_78 = (_union_154)(pAVar10->duration).hiddenValueOld;
      _Stack_74 = (_union_155)(pAVar10->duration).fakeValue;
      uStack_14 = *(uint32_t *)&(pAVar10->duration).inited;
      pAStack_15 = pAVar10->avatarModifiers;
      pDStack_16 = pAVar10->actionsToTakeVsTypes;
      iStack_17 = (pAVar10->timeStamp).currentCryptoKey;
      AStack_18 = (pAVar10->timeStamp).hiddenValue;
      pBStack_19 = (pAVar10->timeStamp).hiddenValueOld;
      fStack_20 = (pAVar10->timeStamp).fakeValue;
      uStack_21 = *(undefined4 *)&(pAVar10->timeStamp).inited;
      uStack_22 = *(undefined4 *)&pAVar10->persistant;
      fStack_23 = pAVar10->lastTimeStamp;
      IStack_24 = pAVar10->avatarModifierPackageType;
      iStack_25 = pAVar10->avatarModifierPackageAdditionPolicy;
      if (newAvatarModifierPackage.actionsToTakeVsTypes ==
          (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0) goto code_?;
      pDVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                         ((Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)newAvatarModifierPackage.actionsToTakeVsTypes,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                         );
      if (pDVar26 != (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)0x0) goto code_?;
    }
  }
  goto code_?;
code_?:
  method_00 = (MethodInfo *)auStack_6;
  puVar27 = (undefined4 *)func_?();
  uStack_28 = 0;
  DStack_8._dictionary = (Dictionary_2_System_Int32Enum_System_Single_ *)*puVar27;
  DStack_8._index = puVar27[1];
  DStack_8._version = puVar27[2];
  DStack_8._currentKey = puVar27[3];
  uStack_1 = 1;
  pDStack_29 = &DStack_8;
  do {
    bVar30 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Int32Enum,System
            ::Single]::
            Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                      (&DStack_8,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__MoveNext__
                      );
    if (bVar30 == 0) {
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__Dispose__
                 ,unaff_EDI);
      uStack_1 = 0xffffffff;
      index = index + 1;
      goto code_?;
    }
  } while (DStack_8._currentKey != IStack_24);
  if (newAvatarModifierPackage.actionsToTakeVsTypes ==
      (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0) {
code_?:
    uVar31 = func_?();
    func_?(uVar31);
    pcVar32 = (code *)swi(3);
    bVar30 = (*pcVar32)();
    return bVar30;
  }
  pOStack_33 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)
                          newAvatarModifierPackage.actionsToTakeVsTypes,DStack_8._currentKey,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                         );
  uStack_1 = 0xffffffff;
  unaff_EDI = (MethodInfo *)&UNK_?;
  pOStack_11 = pOStack_33;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)&DStack_8,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__Dispose__
             ,method_00);
  uStack_1 = 0xffffffff;
  if (pOStack_33 == (Object *)0x1) {
    AvatarModifierPackage::AvatarModifierPackage_Renew
              ((AvatarModifierPackage *)(auStack_6 + 0x10),(MethodInfo *)0x0);
  }
  else {
    if (pOStack_33 == (Object *)0x2) {
      unaff_EDI = (MethodInfo *)&UNK_?;
      AvatarModifierPackages_RemoveModifier(this,IStack_24,auStack_6._16_4_,(MethodInfo *)0x0);
      index = index + 1;
      goto code_?;
    }
    if (pOStack_33 == (Object *)0x3) {
      unaff_EDI = (MethodInfo *)&UNK_?;
      AvatarModifierPackages_RemoveModifier(this,IStack_24,auStack_6._16_4_,(MethodInfo *)0x0);
      bStack_7 = 0;
      index = index + 1;
      goto code_?;
    }
  }
code_?:
  index = index + 1;
  goto code_?;
}


/* Boolean HasModifier(AvatarModifierPackageType) */

bool Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_HasModifier
               (AvatarModifierPackages *this,AvatarModifierPackageType__Enum type,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Exists_System__Predicate<AvatarModifierPackage>_
                   );
    func_?(&TypeInfo__System__Predicate<AvatarModifierPackage>);
    func_?(&
                    MethodInfo__AvatarModifierPackages____c__DisplayClass19_0___HasModifier_b__0_AvatarModifierPackage_
                   );
    func_?(&TypeInfo__AvatarModifierPackages____c__DisplayClass19_0);
    cRam_? = '\x01';
  }
  this_01 = (TweenRunner_1_FloatTween_ *)
            func_?(TypeInfo__AvatarModifierPackages____c__DisplayClass19_0);
  if (this_01 != (TweenRunner_1_FloatTween_ *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0);
    (this_01->fields).m_CoroutineContainer = (MonoBehaviour *)type;
    this_00 = (this->fields).packages;
    this_02 = (Predicate_1_AvatarModifierPackage_ *)
              func_?(TypeInfo__System__Predicate<AvatarModifierPackage>);
    if (this_02 != (Predicate_1_AvatarModifierPackage_ *)0x0) {
      mscorlib.dll::System::Predicate`1[AvatarModifierPackage]::
      Predicate_1_AvatarModifierPackage___ctor
                (this_02,(Object *)this_01,
                 MethodInfo__AvatarModifierPackages____c__DisplayClass19_0___HasModifier_b__0_AvatarModifierPackage_
                 ,(MethodInfo *)0x0);
      if (this_00 != (List_1_AvatarModifierPackage_ *)0x0) {
        bVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                UnitySynchronizationContext+WorkRequest]::
                List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Exists
                          ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_00,
                           (Predicate_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                           this_02,
                           MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Exists_System__Predicate<AvatarModifierPackage>_
                          );
        return bVar1;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean HasModifierEffect(AvatarModifierEffect) */

bool Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_HasModifierEffect
               (AvatarModifierPackages *this,AvatarModifierEffect__Enum modifierEffect,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff28;
  puVar5 = &stack0xffffff28;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(&LStack_6,0,0x50);
  this_00 = (this->fields).packages;
  if (this_00 != (List_1_AvatarModifierPackage_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
             List_1_AvatarModifierPackage__GetEnumerator
                       ((List_1_T_Enumerator_AvatarModifierPackage_ *)&stack0xffffff34,this_00,
                        MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                       );
    uStack_8 = 0;
    LStack_6._list = pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current.id = (pLVar7->_current).id;
    LStack_6._current.duration.currentCryptoKey = (pLVar7->_current).duration.currentCryptoKey;
    LStack_6._current.duration.hiddenValue = (pLVar7->_current).duration.hiddenValue;
    LStack_6._current.duration.hiddenValueOld = (pLVar7->_current).duration.hiddenValueOld;
    LStack_6._current.duration.fakeValue = (pLVar7->_current).duration.fakeValue;
    LStack_6._current.duration.inited = (pLVar7->_current).duration.inited;
    LStack_6._current.duration._17_3_ = *(undefined3 *)&(pLVar7->_current).duration.field_0x11;
    LStack_6._current.avatarModifiers = (pLVar7->_current).avatarModifiers;
    LStack_6._current.actionsToTakeVsTypes = (pLVar7->_current).actionsToTakeVsTypes;
    LStack_6._current.timeStamp.currentCryptoKey = (pLVar7->_current).timeStamp.currentCryptoKey;
    LStack_6._current.timeStamp.hiddenValue = (pLVar7->_current).timeStamp.hiddenValue;
    LStack_6._current.timeStamp.hiddenValueOld = (pLVar7->_current).timeStamp.hiddenValueOld;
    LStack_6._current.timeStamp.fakeValue = (pLVar7->_current).timeStamp.fakeValue;
    LStack_6._current.timeStamp.inited = (pLVar7->_current).timeStamp.inited;
    LStack_6._current.timeStamp._17_3_ = *(undefined3 *)&(pLVar7->_current).timeStamp.field_0x11;
    LStack_6._current.persistant = (pLVar7->_current).persistant;
    LStack_6._current._53_3_ = *(undefined3 *)&(pLVar7->_current).field_0x35;
    LStack_6._current.lastTimeStamp = (pLVar7->_current).lastTimeStamp;
    LStack_6._current.avatarModifierPackageType = (pLVar7->_current).avatarModifierPackageType;
    LStack_6._current.avatarModifierPackageAdditionPolicy =
         (pLVar7->_current).avatarModifierPackageAdditionPolicy;
    uStack_1 = 1;
    pLStack_9 = &LStack_6;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::
              List`1[T]+Enumerator[AvatarModifierPackage]::
              List_1_T_Enumerator_AvatarModifierPackage__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                        );
      pAVar11 = LStack_6._current.avatarModifiers;
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                   ,in_stack_12);
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      iVar13 = 0;
      if (LStack_6._current.avatarModifiers == (AvatarModifierPackage_AvatarModifier__Array *)0x0)
      break;
      for (; iVar13 < (int)pAVar11->max_length; iVar13 = iVar13 + 1) {
        func_?();
        if (AStack_14 == modifierEffect) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                     ,in_stack_15);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  bVar10 = (*pcVar16)();
  return bVar10;
}


/* Void RemoveModifier(AvatarModifierPackageType, Int32) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_RemoveModifier
               (AvatarModifierPackages *this,AvatarModifierPackageType__Enum modifierPackageType,
               int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackageFactory);
    cRam_? = '\x01';
  }
  if (modifierPackageType != AvatarModifierPackageType__Enum_None) {
    if ((TypeInfo__AvatarModifierPackageFactory->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarModifierPackageFactory);
    }
    pAVar1 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                       (&AStack_2,modifierPackageType,(MethodInfo *)0x0);
    pMStack_3 = (MonoBehaviour *)pAVar1->id;
    pIStack_4 = (IEnumerator *)(pAVar1->duration).currentCryptoKey;
    AStack_5 = (pAVar1->duration).hiddenValue;
    pBStack_6 = (pAVar1->duration).hiddenValueOld;
    pMVar7 = (MonoBehaviour *)pAVar1->avatarModifierPackageAdditionPolicy;
    pMStack_8 = (MonoBehaviour *)(pAVar1->duration).fakeValue;
    pIStack_9 = *(IEnumerator **)&(pAVar1->duration).inited;
    pAStack_10 = pAVar1->avatarModifiers;
    pDStack_11 = pAVar1->actionsToTakeVsTypes;
    pMStack_12 = (MonoBehaviour *)(pAVar1->timeStamp).currentCryptoKey;
    AStack_13 = (pAVar1->timeStamp).hiddenValue;
    pTStack_14 = (TweenRunner_1_FloatTween___Class *)(pAVar1->timeStamp).hiddenValueOld;
    pMStack_15 = (MonitorData *)(pAVar1->timeStamp).fakeValue;
    pMStack_16 = *(MonoBehaviour **)&(pAVar1->timeStamp).inited;
    pIStack_17 = *(IEnumerator **)&pAVar1->persistant;
    pTStack_18 = (TweenRunner_1_FloatTween___Class *)pAVar1->lastTimeStamp;
    pMStack_19 = (MonitorData *)pAVar1->avatarModifierPackageType;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__FindIndex_System__Predicate<AvatarModifierPackage>_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__set_Item_int__AvatarModifierPackage_
                     );
      func_?(&TypeInfo__System__Predicate<AvatarModifierPackage>);
      func_?(&
                      MethodInfo__AvatarModifierPackages____c__DisplayClass25_0___RemoveModifierPackage_b__0_AvatarModifierPackage_
                     );
      func_?(&TypeInfo__AvatarModifierPackages____c__DisplayClass25_0);
      cRam_? = '\x01';
    }
    func_?(&AStack_2,0,0x44);
    this_00 = (TweenRunner_1_FloatTween_ *)
              func_?(TypeInfo__AvatarModifierPackages____c__DisplayClass25_0);
    if (this_00 != (TweenRunner_1_FloatTween_ *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
      TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
      (this_00->fields).m_CoroutineContainer = pMStack_3;
      (this_00->fields).m_Tween = pIStack_4;
      this_00[1].klass = (TweenRunner_1_FloatTween___Class *)AStack_5;
      this_00[1].monitor = (MonitorData *)pBStack_6;
      this_00[1].fields.m_CoroutineContainer = pMStack_8;
      this_00[1].fields.m_Tween = pIStack_9;
      this_00[2].klass = (TweenRunner_1_FloatTween___Class *)pAStack_10;
      this_00[2].monitor = (MonitorData *)pDStack_11;
      this_00[2].fields.m_CoroutineContainer = pMStack_12;
      this_00[2].fields.m_Tween = (IEnumerator *)AStack_13;
      this_00[3].klass = pTStack_14;
      this_00[3].monitor = pMStack_15;
      this_00[3].fields.m_CoroutineContainer = pMStack_16;
      this_00[3].fields.m_Tween = pIStack_17;
      this_00[4].klass = pTStack_18;
      this_00[4].monitor = pMStack_19;
      this_00[4].fields.m_CoroutineContainer = pMVar7;
      func_?(&this_00[1].monitor,0);
      (this_00->fields).m_CoroutineContainer = (MonoBehaviour *)id;
      pLVar20 = (this->fields).packages;
      this_01 = (Predicate_1_AvatarModifierPackage_ *)
                func_?(TypeInfo__System__Predicate<AvatarModifierPackage>);
      if ((this_01 != (Predicate_1_AvatarModifierPackage_ *)0x0) &&
         (mscorlib.dll::System::Predicate`1[AvatarModifierPackage]::
          Predicate_1_AvatarModifierPackage___ctor
                    (this_01,(Object *)this_00,
                     MethodInfo__AvatarModifierPackages____c__DisplayClass25_0___RemoveModifierPackage_b__0_AvatarModifierPackage_
                     ,(MethodInfo *)0x0), pLVar20 != (List_1_AvatarModifierPackage_ *)0x0)) {
        index = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                UnitySynchronizationContext+WorkRequest]::
                List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__FindIndex
                          ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLVar20,
                           (Predicate_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                           this_01,
                           MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__FindIndex_System__Predicate<AvatarModifierPackage>_
                          );
        if (index == -1) {
          return;
        }
        pLVar20 = (this->fields).packages;
        if (pLVar20 != (List_1_AvatarModifierPackage_ *)0x0) {
          pAVar1 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
                   List_1_AvatarModifierPackage__get_Item
                             (&AStack_21,pLVar20,index,
                              MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                             );
          AStack_2.id = pAVar1->id;
          AStack_2.duration.currentCryptoKey = (pAVar1->duration).currentCryptoKey;
          AStack_2.duration.hiddenValue = (pAVar1->duration).hiddenValue;
          AStack_2.duration.hiddenValueOld = (pAVar1->duration).hiddenValueOld;
          AStack_2.duration.fakeValue = (pAVar1->duration).fakeValue;
          AStack_2.duration.inited = (pAVar1->duration).inited;
          AStack_2.duration._17_3_ = *(undefined3 *)&(pAVar1->duration).field_0x11;
          AStack_2.avatarModifiers = pAVar1->avatarModifiers;
          AStack_2.actionsToTakeVsTypes = pAVar1->actionsToTakeVsTypes;
          AStack_2.timeStamp.currentCryptoKey = (pAVar1->timeStamp).currentCryptoKey;
          AStack_2.timeStamp.hiddenValue = (pAVar1->timeStamp).hiddenValue;
          AStack_2.timeStamp.hiddenValueOld = (pAVar1->timeStamp).hiddenValueOld;
          AStack_2.timeStamp.fakeValue = (pAVar1->timeStamp).fakeValue;
          AStack_2.timeStamp.inited = (pAVar1->timeStamp).inited;
          AStack_2.timeStamp._17_3_ = *(undefined3 *)&(pAVar1->timeStamp).field_0x11;
          AStack_2.persistant = pAVar1->persistant;
          AStack_2._53_3_ = *(undefined3 *)&pAVar1->field_0x35;
          AStack_2.lastTimeStamp = pAVar1->lastTimeStamp;
          AStack_2.avatarModifierPackageType = pAVar1->avatarModifierPackageType;
          AStack_2.avatarModifierPackageAdditionPolicy =
               pAVar1->avatarModifierPackageAdditionPolicy;
          AvatarModifierPackage::AvatarModifierPackage_set_IsExpired(&AStack_2,1,(MethodInfo *)0x0)
          ;
          pLVar20 = (this->fields).packages;
          if (pLVar20 != (List_1_AvatarModifierPackage_ *)0x0) {
            value.duration.currentCryptoKey = AStack_2.duration.currentCryptoKey;
            value.id = AStack_2.id;
            value.duration.hiddenValue = AStack_2.duration.hiddenValue;
            value.duration.hiddenValueOld = AStack_2.duration.hiddenValueOld;
            value.duration.fakeValue = AStack_2.duration.fakeValue;
            value.duration.inited = AStack_2.duration.inited;
            value.duration._17_3_ = AStack_2.duration._17_3_;
            value.avatarModifiers = AStack_2.avatarModifiers;
            value.actionsToTakeVsTypes = AStack_2.actionsToTakeVsTypes;
            value.timeStamp.currentCryptoKey = AStack_2.timeStamp.currentCryptoKey;
            value.timeStamp.hiddenValue = AStack_2.timeStamp.hiddenValue;
            value.timeStamp.hiddenValueOld = AStack_2.timeStamp.hiddenValueOld;
            value.timeStamp.fakeValue = AStack_2.timeStamp.fakeValue;
            value.timeStamp.inited = AStack_2.timeStamp.inited;
            value.timeStamp._17_3_ = AStack_2.timeStamp._17_3_;
            value.persistant = AStack_2.persistant;
            value._53_3_ = AStack_2._53_3_;
            value.lastTimeStamp = AStack_2.lastTimeStamp;
            value.avatarModifierPackageType = AStack_2.avatarModifierPackageType;
            value.avatarModifierPackageAdditionPolicy =
                 AStack_2.avatarModifierPackageAdditionPolicy;
            mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
            List_1_AvatarModifierPackage__set_Item
                      (pLVar20,index,value,
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__set_Item_int__AvatarModifierPackage_
                      );
            return;
          }
        }
      }
    }
    func_?();
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  return;
}


/* Void RemoveModifierPackage(AvatarModifierPackage, Int32) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_RemoveModifierPackage
               (AvatarModifierPackages *this,AvatarModifierPackage modifierPackage,int32_t id,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__FindIndex_System__Predicate<AvatarModifierPackage>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__set_Item_int__AvatarModifierPackage_
                   );
    func_?(&TypeInfo__System__Predicate<AvatarModifierPackage>);
    func_?(&
                    MethodInfo__AvatarModifierPackages____c__DisplayClass25_0___RemoveModifierPackage_b__0_AvatarModifierPackage_
                   );
    func_?(&TypeInfo__AvatarModifierPackages____c__DisplayClass25_0);
    cRam_? = '\x01';
  }
  func_?(&AStack_1,0,0x44);
  this_00 = (TweenRunner_1_FloatTween_ *)
            func_?(TypeInfo__AvatarModifierPackages____c__DisplayClass25_0);
  if (this_00 != (TweenRunner_1_FloatTween_ *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
    TweenRunner_1_FloatTween___ctor(this_00,(MethodInfo *)0x0);
    (this_00->fields).m_CoroutineContainer = (MonoBehaviour *)modifierPackage.id;
    (this_00->fields).m_Tween = (IEnumerator *)modifierPackage.duration.currentCryptoKey;
    this_00[1].klass = (TweenRunner_1_FloatTween___Class *)modifierPackage.duration.hiddenValue;
    this_00[1].monitor = (MonitorData *)modifierPackage.duration.hiddenValueOld;
    this_00[1].fields.m_CoroutineContainer = (MonoBehaviour *)modifierPackage.duration.fakeValue;
    this_00[1].fields.m_Tween = (IEnumerator *)modifierPackage.duration._16_4_;
    this_00[2].klass = (TweenRunner_1_FloatTween___Class *)modifierPackage.avatarModifiers;
    this_00[2].monitor = (MonitorData *)modifierPackage.actionsToTakeVsTypes;
    this_00[2].fields.m_CoroutineContainer =
         (MonoBehaviour *)modifierPackage.timeStamp.currentCryptoKey;
    this_00[2].fields.m_Tween = (IEnumerator *)modifierPackage.timeStamp.hiddenValue;
    this_00[3].klass = (TweenRunner_1_FloatTween___Class *)modifierPackage.timeStamp.hiddenValueOld;
    this_00[3].monitor = (MonitorData *)modifierPackage.timeStamp.fakeValue;
    this_00[3].fields.m_CoroutineContainer = (MonoBehaviour *)modifierPackage.timeStamp._16_4_;
    this_00[3].fields.m_Tween = (IEnumerator *)modifierPackage._52_4_;
    this_00[4].klass = (TweenRunner_1_FloatTween___Class *)modifierPackage.lastTimeStamp;
    this_00[4].monitor = (MonitorData *)modifierPackage.avatarModifierPackageType;
    this_00[4].fields.m_CoroutineContainer =
         (MonoBehaviour *)modifierPackage.avatarModifierPackageAdditionPolicy;
    func_?(&this_00[1].monitor,0);
    (this_00->fields).m_CoroutineContainer = (MonoBehaviour *)id;
    pLVar2 = (this->fields).packages;
    this_01 = (Predicate_1_AvatarModifierPackage_ *)
              func_?(TypeInfo__System__Predicate<AvatarModifierPackage>);
    if ((this_01 != (Predicate_1_AvatarModifierPackage_ *)0x0) &&
       (mscorlib.dll::System::Predicate`1[AvatarModifierPackage]::
        Predicate_1_AvatarModifierPackage___ctor
                  (this_01,(Object *)this_00,
                   MethodInfo__AvatarModifierPackages____c__DisplayClass25_0___RemoveModifierPackage_b__0_AvatarModifierPackage_
                   ,(MethodInfo *)0x0), pLVar2 != (List_1_AvatarModifierPackage_ *)0x0)) {
      index = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              UnitySynchronizationContext+WorkRequest]::
              List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__FindIndex
                        ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLVar2,
                         (Predicate_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_01
                         ,
                         MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__FindIndex_System__Predicate<AvatarModifierPackage>_
                        );
      if (index == -1) {
        return;
      }
      pLVar2 = (this->fields).packages;
      if (pLVar2 != (List_1_AvatarModifierPackage_ *)0x0) {
        pAVar3 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
                 List_1_AvatarModifierPackage__get_Item
                           (&AStack_4,pLVar2,index,
                            MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                           );
        AStack_1.id = pAVar3->id;
        AStack_1.duration.currentCryptoKey = (pAVar3->duration).currentCryptoKey;
        AStack_1.duration.hiddenValue = (pAVar3->duration).hiddenValue;
        AStack_1.duration.hiddenValueOld = (pAVar3->duration).hiddenValueOld;
        AStack_1.duration.fakeValue = (pAVar3->duration).fakeValue;
        AStack_1.duration.inited = (pAVar3->duration).inited;
        AStack_1.duration._17_3_ = *(undefined3 *)&(pAVar3->duration).field_0x11;
        AStack_1.avatarModifiers = pAVar3->avatarModifiers;
        AStack_1.actionsToTakeVsTypes = pAVar3->actionsToTakeVsTypes;
        AStack_1.timeStamp.currentCryptoKey = (pAVar3->timeStamp).currentCryptoKey;
        AStack_1.timeStamp.hiddenValue = (pAVar3->timeStamp).hiddenValue;
        AStack_1.timeStamp.hiddenValueOld = (pAVar3->timeStamp).hiddenValueOld;
        AStack_1.timeStamp.fakeValue = (pAVar3->timeStamp).fakeValue;
        AStack_1.timeStamp.inited = (pAVar3->timeStamp).inited;
        AStack_1.timeStamp._17_3_ = *(undefined3 *)&(pAVar3->timeStamp).field_0x11;
        AStack_1.persistant = pAVar3->persistant;
        AStack_1._53_3_ = *(undefined3 *)&pAVar3->field_0x35;
        AStack_1.lastTimeStamp = pAVar3->lastTimeStamp;
        AStack_1.avatarModifierPackageType = pAVar3->avatarModifierPackageType;
        AStack_1.avatarModifierPackageAdditionPolicy = pAVar3->avatarModifierPackageAdditionPolicy;
        AvatarModifierPackage::AvatarModifierPackage_set_IsExpired(&AStack_1,1,(MethodInfo *)0x0);
        pLVar2 = (this->fields).packages;
        if (pLVar2 != (List_1_AvatarModifierPackage_ *)0x0) {
          value.duration.currentCryptoKey = AStack_1.duration.currentCryptoKey;
          value.id = AStack_1.id;
          value.duration.hiddenValue = AStack_1.duration.hiddenValue;
          value.duration.hiddenValueOld = AStack_1.duration.hiddenValueOld;
          value.duration.fakeValue = AStack_1.duration.fakeValue;
          value.duration.inited = AStack_1.duration.inited;
          value.duration._17_3_ = AStack_1.duration._17_3_;
          value.avatarModifiers = AStack_1.avatarModifiers;
          value.actionsToTakeVsTypes = AStack_1.actionsToTakeVsTypes;
          value.timeStamp.currentCryptoKey = AStack_1.timeStamp.currentCryptoKey;
          value.timeStamp.hiddenValue = AStack_1.timeStamp.hiddenValue;
          value.timeStamp.hiddenValueOld = AStack_1.timeStamp.hiddenValueOld;
          value.timeStamp.fakeValue = AStack_1.timeStamp.fakeValue;
          value.timeStamp.inited = AStack_1.timeStamp.inited;
          value.timeStamp._17_3_ = AStack_1.timeStamp._17_3_;
          value.persistant = AStack_1.persistant;
          value._53_3_ = AStack_1._53_3_;
          value.lastTimeStamp = AStack_1.lastTimeStamp;
          value.avatarModifierPackageType = AStack_1.avatarModifierPackageType;
          value.avatarModifierPackageAdditionPolicy = AStack_1.avatarModifierPackageAdditionPolicy;
          mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
          List_1_AvatarModifierPackage__set_Item
                    (pLVar2,index,value,
                     MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__set_Item_int__AvatarModifierPackage_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_Update
               (AvatarModifierPackages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  func_?(&AStack_1,0,0x44);
  pLVar2 = (this->fields).packages;
  if (pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  index = (pLVar2->fields)._size;
  do {
    do {
      while( true ) {
        index = index + -1;
        if (index < 0) {
          return;
        }
        pLVar2 = (this->fields).packages;
        if ((this->fields)._InPause_k__BackingField == 0) break;
        if (pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
        piVar4 = (int32_t *)
                 func_?(auStack_5,pLVar2,index,
                                 MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                                );
        AStack_1.id = *piVar4;
        AStack_1.duration.currentCryptoKey = piVar4[1];
        AStack_1.duration.hiddenValue = *(ACTkByte4 *)(piVar4 + 2);
        AStack_1.duration.hiddenValueOld = (Byte__Array *)piVar4[3];
        AStack_1.duration.fakeValue = (float)piVar4[4];
        AStack_1.duration._16_4_ = piVar4[5];
        AStack_1.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)piVar4[6];
        AStack_1.actionsToTakeVsTypes =
             (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)piVar4[7];
        AStack_1.timeStamp.currentCryptoKey = piVar4[8];
        AStack_1.timeStamp.hiddenValue = *(ACTkByte4 *)(piVar4 + 9);
        AStack_1.timeStamp.hiddenValueOld = (Byte__Array *)piVar4[10];
        AStack_1.timeStamp.fakeValue = (float)piVar4[0xb];
        AStack_1.timeStamp._16_4_ = piVar4[0xc];
        AStack_1._52_4_ = piVar4[0xd];
        AStack_1.lastTimeStamp = (float)piVar4[0xe];
        AStack_1.avatarModifierPackageType = piVar4[0xf];
        AStack_1.avatarModifierPackageAdditionPolicy = piVar4[0x10];
        AvatarModifierPackage::AvatarModifierPackage_InPause(&AStack_1,(MethodInfo *)0x0);
      }
      if (pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
      piVar4 = (int32_t *)
               func_?(auStack_5,pLVar2,index,
                               MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                              );
      AStack_1.id = *piVar4;
      AStack_1.duration.currentCryptoKey = piVar4[1];
      AStack_1.duration.hiddenValue = *(ACTkByte4 *)(piVar4 + 2);
      AStack_1.duration.hiddenValueOld = (Byte__Array *)piVar4[3];
      AStack_1.duration.fakeValue = (float)piVar4[4];
      AStack_1.duration._16_4_ = piVar4[5];
      AStack_1.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)piVar4[6];
      AStack_1.actionsToTakeVsTypes =
           (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)piVar4[7];
      AStack_1.timeStamp.currentCryptoKey = piVar4[8];
      AStack_1.timeStamp.hiddenValue = *(ACTkByte4 *)(piVar4 + 9);
      AStack_1.timeStamp.hiddenValueOld = (Byte__Array *)piVar4[10];
      AStack_1.timeStamp.fakeValue = (float)piVar4[0xb];
      AStack_1.timeStamp._16_4_ = piVar4[0xc];
      AStack_1._52_4_ = piVar4[0xd];
      AStack_1.lastTimeStamp = (float)piVar4[0xe];
      AStack_1.avatarModifierPackageType = piVar4[0xf];
      AStack_1.avatarModifierPackageAdditionPolicy = piVar4[0x10];
      bVar6 = AvatarModifierPackage::AvatarModifierPackage_get_IsExpired
                        (&AStack_1,(MethodInfo *)0x0);
    } while (bVar6 == 0);
    if ((this->fields).OnModifierExpired != (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0)
    {
      pLVar2 = (this->fields).packages;
      pAVar7 = (this->fields).OnModifierExpired;
      if (pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
      puVar8 = (undefined4 *)
               func_?(auStack_5,pLVar2,index,
                               MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                              );
      (*(pAVar7->fields)._._.invoke_impl)
                ((pAVar7->fields)._._.method_code,*puVar8,puVar8[1],puVar8[2],puVar8[3],puVar8[4],
                 puVar8[5],puVar8[6],puVar8[7],puVar8[8],puVar8[9],puVar8[10],puVar8[0xb],
                 puVar8[0xc],puVar8[0xd],puVar8[0xe],puVar8[0xf],puVar8[0x10],
                 (pAVar7->fields)._._.method);
    }
    pLVar2 = (this->fields).packages;
    if (pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
    List_1_AvatarModifierPackage__RemoveAt
              (pLVar2,index,
               MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__RemoveAt_int_)
    ;
  } while( true );
}


/* AvatarModifierPackages() */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages__ctor
               (AvatarModifierPackages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AvatarModifierPackages__OnPause__);
    func_?(&MethodInfo__AvatarModifierPackages__OnResume__);
    func_?(&MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<AvatarModifierPackage>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (List_1_AvatarModifierPackage_ *)
            func_?(TypeInfo__System__Collections__Generic__List<AvatarModifierPackage>);
  if (this_00 != (List_1_AvatarModifierPackage_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__List__);
    (this->fields).packages = this_00;
    func_?(&(this->fields).packages,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,in_stack_1);
    (this->fields)._InPause_k__BackingField = 0;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
               func_?(TypeInfo__UnityEngine__Events__UnityAction);
      if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar3,(Object *)this,MethodInfo__AvatarModifierPackages__OnPause__,
                   (MethodInfo *)0x0);
        pUVar4 = (UnityAction *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)0x0,(Delegate *)pNVar3,(MethodInfo *)0x0);
        if (pUVar4 == (UnityAction *)0x0) {
          (pMVar2->fields)._.OnPause = (UnityAction *)0x0;
        }
        else {
          pUVar5 = (UnityAction *)0x0;
          if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar5 = pUVar4;
          }
          if (pUVar5 == (UnityAction *)0x0) goto code_?;
          (pMVar2->fields)._.OnPause = pUVar5;
          pUVar5 = (UnityAction *)0x0;
          if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
            pUVar5 = pUVar4;
          }
          if (pUVar5 == (UnityAction *)0x0) goto code_?;
        }
        func_?();
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar2 != (MVLocalPlayer *)0x0) {
          pUVar4 = (pMVar2->fields)._.OnResume;
          pNVar3 = (NavMesh_OnNavMeshPreUpdate *)
                   func_?(TypeInfo__UnityEngine__Events__UnityAction);
          if (pNVar3 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar3,(Object *)this,MethodInfo__AvatarModifierPackages__OnResume__,
                       (MethodInfo *)0x0);
            pUVar4 = (UnityAction *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pUVar4,(Delegate *)pNVar3,(MethodInfo *)0x0);
            if (pUVar4 == (UnityAction *)0x0) {
              (pMVar2->fields)._.OnResume = (UnityAction *)0x0;
              func_?();
              return;
            }
            pUVar5 = (UnityAction *)0x0;
            if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
              pUVar5 = pUVar4;
            }
            if (pUVar5 != (UnityAction *)0x0) {
              (pMVar2->fields)._.OnResume = pUVar5;
              pUVar5 = (UnityAction *)0x0;
              if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                pUVar5 = pUVar4;
              }
              if (pUVar5 != (UnityAction *)0x0) {
                func_?();
                return;
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void add_OnDisableVehiclesEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_add_OnDisableVehiclesEvent
               (AvatarModifierPackages *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnDisableVehiclesEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)
             func_?(&(this->fields).OnDisableVehiclesEvent,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Void add_OnUnequipItemEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_add_OnUnequipItemEvent
               (AvatarModifierPackages *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnUnequipItemEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(&this->fields,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnDisableVehiclesEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::AvatarModifierPackages::
     AvatarModifierPackages_remove_OnDisableVehiclesEvent
               (AvatarModifierPackages *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnDisableVehiclesEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)
             func_?(&(this->fields).OnDisableVehiclesEvent,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnUnequipItemEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_remove_OnUnequipItemEvent
               (AvatarModifierPackages *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnUnequipItemEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(&this->fields,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}

