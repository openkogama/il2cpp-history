
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
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_Union_2
                         ((IEnumerable_1_AvatarModifierPackage_AvatarModifier_ *)
                          pAVar2->avatarModifiers,
                          (IEnumerable_1_AvatarModifierPackage_AvatarModifier_ *)additionalModifers,
                          System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_MethodInfo__System__Linq__Enumerable__Union<AvatarModifierPackage::AvatarModifier>_System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>__System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_
                         );
      pAStack_9 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_5
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
    func_?(&TypeInfo__AvatarModifierPackage);
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
  method_00 = TypeInfo__AvatarModifierPackages____c__DisplayClass20_0;
  value_00 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value_00 == (Object *)0x0) goto code_?;
  value_00[1].klass = (Object__Class *)modifierPackage.id;
  value_00[1].monitor = (MonitorData *)modifierPackage.duration.currentCryptoKey;
  value_00[2].klass = (Object__Class *)modifierPackage.duration.hiddenValue;
  value_00[2].monitor = (MonitorData *)modifierPackage.duration.hiddenValueOld;
  value_00[3].klass = (Object__Class *)modifierPackage.duration.fakeValue;
  value_00[3].monitor = (MonitorData *)modifierPackage.duration._16_4_;
  value_00[4].klass = (Object__Class *)modifierPackage.avatarModifiers;
  value_00[4].monitor = (MonitorData *)modifierPackage.actionsToTakeVsTypes;
  value_00[5].klass = (Object__Class *)modifierPackage.timeStamp.currentCryptoKey;
  value_00[5].monitor = (MonitorData *)modifierPackage.timeStamp.hiddenValue;
  value_00[6].klass = (Object__Class *)modifierPackage.timeStamp.hiddenValueOld;
  value_00[6].monitor = (MonitorData *)modifierPackage.timeStamp.fakeValue;
  value_00[7].klass = (Object__Class *)modifierPackage.timeStamp._16_4_;
  value_00[7].monitor = (MonitorData *)modifierPackage._52_4_;
  value_00[8].klass = (Object__Class *)modifierPackage.lastTimeStamp;
  value_00[8].monitor = (MonitorData *)modifierPackage.avatarModifierPackageType;
  value_00[9].klass = (Object__Class *)modifierPackage.avatarModifierPackageAdditionPolicy;
  func_?(&value_00[2].monitor,0);
  value_00[1].klass = (Object__Class *)id;
  bVar2 = AvatarModifierPackages_HandleNewAvatarModifierPackage
                    (this,*(AvatarModifierPackage *)(value_00 + 1),(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AvatarModifierPackage);
  }
  if (value_00[9].klass == (Object__Class *)0x1) {
    pLVar3 = (this->fields).packages;
    modifierPackage.avatarModifierPackageAdditionPolicy =
         func_?(TypeInfo__System__Predicate<AvatarModifierPackage>);
    mscorlib.dll::System::Predicate`1[AvatarModifierPackage]::
    Predicate_1_AvatarModifierPackage___ctor
              ((Predicate_1_AvatarModifierPackage_ *)
               modifierPackage.avatarModifierPackageAdditionPolicy,value_00,
               MethodInfo__AvatarModifierPackages____c__DisplayClass20_0___AddModifierPackage_b__0_AvatarModifierPackage_
               ,(MethodInfo *)0x0);
    if (pLVar3 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
    index = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
            List_1_AvatarModifierPackage__FindIndex
                      (pLVar3,(Predicate_1_AvatarModifierPackage_ *)
                              modifierPackage.avatarModifierPackageAdditionPolicy,
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__FindIndex_System__Predicate<AvatarModifierPackage>_
                      );
    if (index != -1) {
      pLVar3 = (this->fields).packages;
      if (pLVar3 != (List_1_AvatarModifierPackage_ *)0x0) {
        piVar4 = (int32_t *)
                 func_?(&modifierPackage,pLVar3,index,
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
        if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__AvatarModifierPackage);
        }
        AvatarModifierPackage::AvatarModifierPackage_Renew(&AStack_1,(MethodInfo *)0x0);
        pLVar3 = (this->fields).packages;
        if (pLVar3 != (List_1_AvatarModifierPackage_ *)0x0) {
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
                    (pLVar3,index,value,
                     MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__set_Item_int__AvatarModifierPackage_
                    );
          return;
        }
      }
      goto code_?;
    }
  }
  pLVar3 = (this->fields).packages;
  if (pLVar3 != (List_1_AvatarModifierPackage_ *)0x0) {
    func_?(pLVar3,value_00[1].klass,value_00[1].monitor,value_00[2].klass,
                    value_00[2].monitor,value_00[3].klass,value_00[3].monitor,value_00[4].klass,
                    value_00[4].monitor,value_00[5].klass,value_00[5].monitor,value_00[6].klass,
                    value_00[6].monitor,value_00[7].klass,value_00[7].monitor,value_00[8].klass,
                    value_00[8].monitor,value_00[9].klass,
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Add_AvatarModifierPackage_
                   );
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  pFStack_2 = (Func_1_Single_ *)&DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xfffffec0;
  puVar5 = &stack0xfffffec0;
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
  DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  pFVar8 = (Func_1_Single_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>
                          );
  pFStack_9 = pFVar8;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            ((Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
              *)pFVar8,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__Dictionary__
            );
  this_00 = (this->fields).packages;
  pFStack_10 = pFVar8;
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
      iVar24 = 0;
      if ((AvatarModifierPackage_AvatarModifier__Array *)auStack_6._36_4_ ==
          (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
      for (; iVar24 < (int)pAStack_23->max_length; iVar24 = iVar24 + 1) {
        func_?();
        if (pFStack_25 == (Func_1_Single_ *)modifierEffect) {
          if (pFStack_9 == (Func_1_Single_ *)0x0) goto code_?;
          bVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32_System_Single_ *)pFStack_9,
                             auStack_12._12_4_,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__ContainsKey_int_
                            );
          if (bVar19 == 0) {
            this_01 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                      func_?();
            mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      (this_01,
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__List__
                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)pFStack_9,auStack_12._12_4_,
                       (Object *)this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__Add_int__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>_
                      );
          }
          pOVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pFStack_9,
                              auStack_12._12_4_,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__get_Item_int_
                             );
          if (pOVar26 == (Object *)0x0) goto code_?;
          func_?();
        }
      }
    }
    iStack_1 = -1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)auStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
               ,in_stack_27);
    pFVar8 = pFStack_9;
    iStack_1 = -1;
    pAVar28 = (AvatarModifierPackage_AvatarModifier__Array *)func_?();
    pAStack_23 = pAVar28;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              ((Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
                *)pAVar28,
               MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__);
    pAStack_18 = pAVar28;
    if (pFVar8 != (Func_1_Single_ *)0x0) {
      pDVar29 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &stack0xfffffecc,(Dictionary_2_System_UInt32_System_Object_ *)pFVar8,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__GetEnumerator__
                         );
      pFStack_25 = (Func_1_Single_ *)0x0;
      DStack_7._dictionary = pDVar29->_dictionary;
      DStack_7._version = pDVar29->_version;
      DStack_7._index = pDVar29->_index;
      DStack_7._current.key = (pDVar29->_current).key;
      DStack_7._16_8_ = *(undefined8 *)&(pDVar29->_current).value;
      iStack_1 = 4;
      pAVar28 = pAStack_23;
      pDStack_30 = &DStack_7;
      while( true ) {
        bVar19 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_7,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__MoveNext__
                          );
        if (bVar19 == 0) {
          iStack_1 = -1;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&DStack_7,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__Dispose__
                     ,in_stack_31);
          *unaff_FS_OFFSET = iStack_3;
          return (Dictionary_2_System_Int32_System_Single_ *)pAVar28;
        }
        pOVar26 = DStack_7._current.value;
        uStack_32 = DStack_7._current.key;
        pFStack_9 = (Func_1_Single_ *)DStack_7._current.value;
        if ((TypeInfo__AvatarModifierPackages____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_02 = TypeInfo__AvatarModifierPackages____c->static_fields->__9__29_0;
        if (this_02 == (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
          if ((TypeInfo__AvatarModifierPackages____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pFStack_10 = (Func_1_Single_ *)TypeInfo__AvatarModifierPackages____c->static_fields->__9;
          this_02 = (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
          mscorlib.dll::System::Comparison`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::
          Comparison_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                    ((Comparison_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_02,
                     (Object *)pFStack_10,
                     MethodInfo__AvatarModifierPackages____c___ComputeModifierEffectGroupedById_b__29_0_AvatarModifierPackage__AvatarModifier__AvatarModifierPackage__AvatarModifier_
                     ,(MethodInfo *)0x0);
          TypeInfo__AvatarModifierPackages____c->static_fields->__9__29_0 = this_02;
          func_?();
        }
        if ((Func_1_Single_ *)pOVar26 == (Func_1_Single_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage+AvatarModifier]::
        List_1_AvatarModifierPackage_AvatarModifier__Sort_1
                  ((List_1_AvatarModifierPackage_AvatarModifier_ *)pOVar26,this_02,
                   MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Sort_System__Comparison<AvatarModifierPackage::AvatarModifier>_
                  );
        this = (AvatarModifierPackages *)baseValue;
        iVar24 = 0;
        while( true ) {
          pAVar28 = pAStack_23;
          if (pFStack_9 == (Func_1_Single_ *)0x0) goto code_?;
          if ((int)(pFStack_9->fields)._._.invoke_impl <= iVar24) break;
          piVar33 = (int *)func_?();
          iVar34 = *piVar33;
          if (iVar34 == 0) {
            iVar34 = func_?();
            if (*(int *)(iVar34 + 8) == 0) goto code_?;
            pFStack_10 = *(Func_1_Single_ **)(*(int *)(iVar34 + 8) + 0xc);
            fVar35 = (float10)(*(code *)pFStack_10)();
            pFStack_10 = (Func_1_Single_ *)(float)fVar35;
            this = (AvatarModifierPackages *)((float)pFStack_10 * (float)this);
            iVar24 = iVar24 + 1;
          }
          else if (iVar34 == 1) {
            iVar34 = func_?();
            if (*(int *)(iVar34 + 8) == 0) goto code_?;
            pFStack_10 = *(Func_1_Single_ **)(*(int *)(iVar34 + 8) + 0xc);
            fVar35 = (float10)(*(code *)pFStack_10)();
            pFStack_10 = (Func_1_Single_ *)(float)fVar35;
            this = (AvatarModifierPackages *)((float)pFStack_10 + (float)this);
            iVar24 = iVar24 + 1;
          }
          else if (iVar34 == 2) {
            iVar34 = func_?();
            if (*(int *)(iVar34 + 8) == 0) goto code_?;
            fVar35 = (float10)(**(code **)(*(int *)(iVar34 + 8) + 0xc))();
            this = (AvatarModifierPackages *)(float)fVar35;
            iVar24 = iVar24 + 1;
          }
          else {
            iVar24 = iVar24 + 1;
          }
        }
        if (pAStack_23 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
        Dictionary_2_System_Int32_System_Single__Add
                  ((Dictionary_2_System_Int32_System_Single_ *)pAStack_23,uStack_32,(float)this,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Add_int__float_
                  );
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar36 = (code *)swi(3);
  pDVar37 = (Dictionary_2_System_Int32_System_Single_ *)(*pcVar36)();
  return pDVar37;
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
  auStack_2._0_4_ = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_3,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                     ,in_stack_6);
          *unaff_FS_OFFSET = auStack_2._36_4_;
          return ModifierActions__Enum_Add;
        }
      } while ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)LStack_3._current.actionsToTakeVsTypes ==
               (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)0x0);
      method_00 = (MethodInfo *)LStack_3._current.id;
      method_01 = LStack_3._current.duration.hiddenValue;
      pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                         ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)LStack_3._current.actionsToTakeVsTypes,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                         );
      if (pDVar7 == (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
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
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                            *)auStack_2,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__MoveNext__
                          );
        if (bVar5 == 0) break;
        if (auStack_2._12_4_ == modifierPackageType) {
          if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)this_01 !=
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                                auStack_2._12_4_,
                                MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                               );
            uStack_1._0_1_ = 1;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)in_stack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__Dispose__
                       ,method_00);
            uStack_1._0_2_ = 0xffff;
            uStack_1._2_1_ = 0xff;
            uStack_1._3_1_ = 0xff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
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
    if ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)pAVar7->actionsToTakeVsTypes !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                          ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                            *)pAVar7->actionsToTakeVsTypes,
                           MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                          );
      if (this_01 !=
          (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        pDVar8 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                 StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                           (&DStack_9,
                            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)this_01,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_ModifierActions>__GetEnumerator__
                           );
        DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar8->_dictionary;
        DStack_6._index = pDVar8->_index;
        DStack_6._version = pDVar8->_version;
        DStack_6._currentKey = (uint32_t)pDVar8->_currentValue;
        DStack_9._version = 0;
        uStack_1 = 1;
        DStack_9._currentValue = (Object *)&DStack_6;
        while( true ) {
          bVar10 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (&DStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__MoveNext__
                            );
          uVar11 = DStack_6._currentKey;
          if (bVar10 == 0) break;
          if (this_00 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) goto code_?;
          pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             (this_00,DStack_6._currentKey,
                              MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                             );
          if (pOVar12 == (Object *)action) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&DStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__Dispose__
                       ,in_stack_13);
            *unaff_FS_OFFSET = uStack_3;
            return (AvatarModifierPackageType__Enum)(Object *)uVar11;
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  puStack_4 = &stack0xfffffef8;
  puVar5 = &stack0xfffffef8;
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
  pLVar7 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>
                          );
  pLStack_8 = pLVar7;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar7,
             MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__List__
            );
  this_00 = (this->fields).packages;
  pLStack_9 = pLVar7;
  if (this_00 != (List_1_AvatarModifierPackage_ *)0x0) {
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
             List_1_AvatarModifierPackage__GetEnumerator
                       ((List_1_T_Enumerator_AvatarModifierPackage_ *)&stack0xffffff04,this_00,
                        MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                       );
    VStack_11.path = (String *)0x0;
    LStack_6._list = pLVar10->_list;
    LStack_6._index = pLVar10->_index;
    LStack_6._version = pLVar10->_version;
    LStack_6._current.id = (pLVar10->_current).id;
    LStack_6._current.duration.currentCryptoKey = (pLVar10->_current).duration.currentCryptoKey;
    LStack_6._current.duration.hiddenValue = (pLVar10->_current).duration.hiddenValue;
    LStack_6._current.duration.hiddenValueOld = (pLVar10->_current).duration.hiddenValueOld;
    LStack_6._current.duration.fakeValue = (pLVar10->_current).duration.fakeValue;
    LStack_6._current.duration.inited = (pLVar10->_current).duration.inited;
    LStack_6._current.duration._17_3_ = *(undefined3 *)&(pLVar10->_current).duration.field_0x11;
    LStack_6._current.avatarModifiers = (pLVar10->_current).avatarModifiers;
    LStack_6._current.actionsToTakeVsTypes = (pLVar10->_current).actionsToTakeVsTypes;
    LStack_6._current.timeStamp.currentCryptoKey = (pLVar10->_current).timeStamp.currentCryptoKey;
    LStack_6._current.timeStamp.hiddenValue = (pLVar10->_current).timeStamp.hiddenValue;
    LStack_6._current.timeStamp.hiddenValueOld = (pLVar10->_current).timeStamp.hiddenValueOld;
    LStack_6._current.timeStamp.fakeValue = (pLVar10->_current).timeStamp.fakeValue;
    LStack_6._current.timeStamp.inited = (pLVar10->_current).timeStamp.inited;
    LStack_6._current.timeStamp._17_3_ = *(undefined3 *)&(pLVar10->_current).timeStamp.field_0x11;
    LStack_6._current.persistant = (pLVar10->_current).persistant;
    LStack_6._current._53_3_ = *(undefined3 *)&(pLVar10->_current).field_0x35;
    LStack_6._current.lastTimeStamp = (pLVar10->_current).lastTimeStamp;
    LStack_6._current.avatarModifierPackageType = (pLVar10->_current).avatarModifierPackageType;
    LStack_6._current.avatarModifierPackageAdditionPolicy =
         (pLVar10->_current).avatarModifierPackageAdditionPolicy;
    uStack_1 = 1;
    VStack_11.asset = (VisualTreeAsset *)&LStack_6;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              List`1[T]+Enumerator[AvatarModifierPackage]::
              List_1_T_Enumerator_AvatarModifierPackage__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                        );
      pAVar13 = LStack_6._current.avatarModifiers;
      if (bVar12 == 0) break;
      iVar14 = 0;
      if (LStack_6._current.avatarModifiers == (AvatarModifierPackage_AvatarModifier__Array *)0x0)
      goto code_?;
      for (; iVar14 < (int)pAVar13->max_length; iVar14 = iVar14 + 1) {
        func_?();
        if (uStack_15._4_4_ == modifierEffect) {
          if (pLStack_9 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
          goto code_?;
          in_stack_16 = pMStack_17;
          func_?();
        }
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
               ,in_stack_16);
    uStack_1 = 0xffffffff;
    if ((TypeInfo__AvatarModifierPackages____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_01 = TypeInfo__AvatarModifierPackages____c->static_fields->__9__27_0;
    if (this_01 == (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
      if ((TypeInfo__AvatarModifierPackages____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__AvatarModifierPackages____c->static_fields->__9;
      this_01 = (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
      mscorlib.dll::System::Comparison`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::
      Comparison_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                ((Comparison_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_01,
                 (Object *)object,
                 MethodInfo__AvatarModifierPackages____c___HandleModifierEffect_b__27_0_AvatarModifierPackage__AvatarModifier__AvatarModifierPackage__AvatarModifier_
                 ,(MethodInfo *)0x0);
      TypeInfo__AvatarModifierPackages____c->static_fields->__9__27_0 = this_01;
      func_?();
    }
    pLVar7 = pLStack_9;
    if (pLStack_9 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage+AvatarModifier]::
      List_1_AvatarModifierPackage_AvatarModifier__Sort_1
                ((List_1_AvatarModifierPackage_AvatarModifier_ *)pLStack_9,this_01,
                 MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Sort_System__Comparison<AvatarModifierPackage::AvatarModifier>_
                );
      iVar14 = 0;
      this = (AvatarModifierPackages *)baseValue;
      while( true ) {
        while( true ) {
          if ((pLStack_8->fields)._size <= iVar14) {
            *unaff_FS_OFFSET = uStack_3;
            return (float)this;
          }
          pVVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                   VisualTreeAsset+UsingEntry]::
                   List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                             (&VStack_11,pLVar7,iVar14,
                              MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__get_Item_int_
                             );
          uStack_15._0_4_ = pVVar18->alias;
          uStack_15._4_4_ = (AvatarModifierEffect__Enum)pVVar18->path;
          if ((undefined4)uStack_15 == 0) break;
          if ((undefined4)uStack_15 == 1) {
            iVar19 = func_?();
            if (*(int *)(iVar19 + 8) == 0) goto code_?;
            pLStack_9 = *(List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ **)
                          (*(int *)(iVar19 + 8) + 0xc);
            fVar20 = (float10)(*(code *)pLStack_9)();
            iVar14 = iVar14 + 1;
            this = (AvatarModifierPackages *)(float)(fVar20 + (float10)(float)this);
          }
          else {
            if ((undefined4)uStack_15 != 2) goto code_?;
            iVar19 = func_?();
            if (*(int *)(iVar19 + 8) == 0) goto code_?;
            fVar20 = (float10)(**(code **)(*(int *)(iVar19 + 8) + 0xc))();
            iVar14 = iVar14 + 1;
            this = (AvatarModifierPackages *)(float)fVar20;
          }
        }
        iVar19 = func_?();
        if (*(int *)(iVar19 + 8) == 0) break;
        pLStack_9 = *(List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ **)
                      (*(int *)(iVar19 + 8) + 0xc);
        fVar20 = (float10)(*(code *)pLStack_9)();
        this = (AvatarModifierPackages *)(float)(fVar20 * (float10)(float)this);
code_?:
        iVar14 = iVar14 + 1;
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
  puStack_4 = &stack0xffffff20;
  puVar5 = &stack0xffffff20;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackage);
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
  iStack_8 = 0;
  DStack_9._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_9._index = 0;
  DStack_9._version = 0;
  DStack_9._currentKey = 0;
code_?:
  this_00 = (this->fields).packages;
  if (this_00 != (List_1_AvatarModifierPackage_ *)0x0) {
    if ((this_00->fields)._size <= iStack_8) {
      *unaff_FS_OFFSET = uStack_3;
      return bStack_7;
    }
    if (this_00 != (List_1_AvatarModifierPackage_ *)0x0) {
      pAVar10 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
               List_1_AvatarModifierPackage__get_Item
                         ((AvatarModifierPackage *)&stack0xffffff2c,this_00,iStack_8,
                          MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                         );
      pOStack_11 = (Object *)0x0;
      auStack_6._16_4_ = pAVar10->id;
      pIStack_12 = (Il2CppType *)(pAVar10->duration).currentCryptoKey;
      AStack_13 = (pAVar10->duration).hiddenValue;
      _Stack_74 = (_union_154)(pAVar10->duration).hiddenValueOld;
      _Stack_70 = (_union_155)(pAVar10->duration).fakeValue;
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
      pDVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                         ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)newAvatarModifierPackage.actionsToTakeVsTypes,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                         );
      if (pDVar26 != (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) goto code_?;
    }
  }
  goto code_?;
code_?:
  method_01 = (MethodInfo *)auStack_6;
  method_00 = (MethodInfo *)&UNK_?;
  puVar27 = (undefined4 *)func_?();
  uStack_28 = 0;
  DStack_9._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)*puVar27;
  DStack_9._index = puVar27[1];
  DStack_9._version = puVar27[2];
  DStack_9._currentKey = puVar27[3];
  uStack_1 = 1;
  pDStack_29 = &DStack_9;
  do {
    bVar30 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::UInt32,System::
            Object]::
            Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                      (&DStack_9,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__MoveNext__
                      );
    key = DStack_9._currentKey;
    if (bVar30 == 0) {
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_9,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      iStack_8 = iStack_8 + 1;
      goto code_?;
    }
    if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
  } while (key != IStack_24);
  if (newAvatarModifierPackage.actionsToTakeVsTypes ==
      (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0) {
code_?:
    uVar31 = func_?();
    func_?(uVar31);
    pcVar32 = (code *)swi(3);
    bVar30 = (*pcVar32)();
    return bVar30;
  }
  pOVar33 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
           Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                     ((Dictionary_2_System_Int32Enum_System_Object_ *)
                      newAvatarModifierPackage.actionsToTakeVsTypes,key,
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                     );
  uStack_1 = 0xffffffff;
  pOStack_11 = pOVar33;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)&DStack_9,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__Dispose__
             ,method_01);
  uStack_1 = 0xffffffff;
  if (pOVar33 == (Object *)0x1) {
    if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    AvatarModifierPackage::AvatarModifierPackage_Renew
              ((AvatarModifierPackage *)(auStack_6 + 0x10),(MethodInfo *)0x0);
  }
  else {
    if (pOVar33 == (Object *)0x2) {
      if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      AvatarModifierPackages_RemoveModifier(this,IStack_24,auStack_6._16_4_,(MethodInfo *)0x0);
      iStack_8 = iStack_8 + 1;
      goto code_?;
    }
    if (pOVar33 == (Object *)0x3) {
      if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      AvatarModifierPackages_RemoveModifier(this,IStack_24,auStack_6._16_4_,(MethodInfo *)0x0);
      bStack_7 = 0;
      iStack_8 = iStack_8 + 1;
      goto code_?;
    }
  }
code_?:
  iStack_8 = iStack_8 + 1;
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
  method_00 = TypeInfo__AvatarModifierPackages____c__DisplayClass19_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)type;
    this_00 = (this->fields).packages;
    this_01 = (Predicate_1_AvatarModifierPackage_ *)
              func_?(TypeInfo__System__Predicate<AvatarModifierPackage>);
    mscorlib.dll::System::Predicate`1[AvatarModifierPackage]::
    Predicate_1_AvatarModifierPackage___ctor
              (this_01,value,
               MethodInfo__AvatarModifierPackages____c__DisplayClass19_0___HasModifier_b__0_AvatarModifierPackage_
               ,(MethodInfo *)0x0);
    if (this_00 != (List_1_AvatarModifierPackage_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
              List_1_AvatarModifierPackage__Exists
                        (this_00,this_01,
                         MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Exists_System__Predicate<AvatarModifierPackage>_
                        );
      return bVar1;
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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


/* Void OnResume() */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_OnResume
               (AvatarModifierPackages *this,MethodInfo *method)

{
  (this->fields)._InPause_k__BackingField = 0;
  return;
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
                       ((AvatarModifierPackage *)&stack0xffffffb8,modifierPackageType,
                        (MethodInfo *)0x0);
    AvatarModifierPackages_RemoveModifierPackage(this,*pAVar1,id,(MethodInfo *)0x0);
  }
  return;
}


/* Void RemoveModifierPackage(AvatarModifierPackage, Int32) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_RemoveModifierPackage
               (AvatarModifierPackages *this,AvatarModifierPackage modifierPackage,int32_t id,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffe20;
  puVar5 = &stack0xfffffe20;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackage);
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
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Add_AvatarModifierPackage_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__FindIndex_System__Predicate<AvatarModifierPackage>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__IndexOf_AvatarModifierPackage_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__set_Item_int__AvatarModifierPackage_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<AvatarModifierPackage>);
    func_?(&TypeInfo__System__Predicate<AvatarModifierPackage>);
    func_?(&
                    MethodInfo__AvatarModifierPackages____c__DisplayClass25_0___RemoveModifierPackage_b__0_AvatarModifierPackage_
                   );
    func_?(&TypeInfo__AvatarModifierPackages____c__DisplayClass25_0);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(&AStack_6,0,0x44);
  func_?(&AStack_7,0,0x44);
  func_?(&LStack_8,0,0x50);
  method_00 = TypeInfo__AvatarModifierPackages____c__DisplayClass25_0;
  value_00 = (Object *)func_?();
  pOStack_9 = value_00;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value_00 == (Object *)0x0) goto code_?;
  value_00[1].klass = (Object__Class *)modifierPackage.id;
  value_00[1].monitor = (MonitorData *)modifierPackage.duration.currentCryptoKey;
  value_00[2].klass = (Object__Class *)modifierPackage.duration.hiddenValue;
  value_00[2].monitor = (MonitorData *)modifierPackage.duration.hiddenValueOld;
  value_00[3].klass = (Object__Class *)modifierPackage.duration.fakeValue;
  value_00[3].monitor = (MonitorData *)modifierPackage.duration._16_4_;
  value_00[4].klass = (Object__Class *)modifierPackage.avatarModifiers;
  value_00[4].monitor = (MonitorData *)modifierPackage.actionsToTakeVsTypes;
  value_00[5].klass = (Object__Class *)modifierPackage.timeStamp.currentCryptoKey;
  value_00[5].monitor = (MonitorData *)modifierPackage.timeStamp.hiddenValue;
  value_00[6].klass = (Object__Class *)modifierPackage.timeStamp.hiddenValueOld;
  value_00[6].monitor = (MonitorData *)modifierPackage.timeStamp.fakeValue;
  value_00[7].klass = (Object__Class *)modifierPackage.timeStamp._16_4_;
  value_00[7].monitor = (MonitorData *)modifierPackage._52_4_;
  value_00[8].klass = (Object__Class *)modifierPackage.lastTimeStamp;
  value_00[8].monitor = (MonitorData *)modifierPackage.avatarModifierPackageType;
  value_00[9].klass = (Object__Class *)modifierPackage.avatarModifierPackageAdditionPolicy;
  func_?();
  if (id == -1) {
    this_00 = (Predicate_1_AvatarModifierPackage_ *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
               MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__List__);
    pLVar10 = (this->fields).packages;
    pPStack_11 = this_00;
    if (pLVar10 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
    pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
              List_1_AvatarModifierPackage__GetEnumerator
                        (&LStack_13,pLVar10,
                         MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                        );
    uStack_14 = 0;
    LStack_8._list = pLVar12->_list;
    LStack_8._index = pLVar12->_index;
    LStack_8._version = pLVar12->_version;
    LStack_8._current.id = (pLVar12->_current).id;
    LStack_8._current.duration.currentCryptoKey = (pLVar12->_current).duration.currentCryptoKey;
    LStack_8._current.duration.hiddenValue = (pLVar12->_current).duration.hiddenValue;
    LStack_8._current.duration.hiddenValueOld = (pLVar12->_current).duration.hiddenValueOld;
    LStack_8._current.duration.fakeValue = (pLVar12->_current).duration.fakeValue;
    LStack_8._current.duration.inited = (pLVar12->_current).duration.inited;
    LStack_8._current.duration._17_3_ = *(undefined3 *)&(pLVar12->_current).duration.field_0x11;
    LStack_8._current.avatarModifiers = (pLVar12->_current).avatarModifiers;
    LStack_8._current.actionsToTakeVsTypes = (pLVar12->_current).actionsToTakeVsTypes;
    LStack_8._current.timeStamp.currentCryptoKey = (pLVar12->_current).timeStamp.currentCryptoKey;
    LStack_8._current.timeStamp.hiddenValue = (pLVar12->_current).timeStamp.hiddenValue;
    LStack_8._current.timeStamp.hiddenValueOld = (pLVar12->_current).timeStamp.hiddenValueOld;
    LStack_8._current.timeStamp.fakeValue = (pLVar12->_current).timeStamp.fakeValue;
    LStack_8._current.timeStamp.inited = (pLVar12->_current).timeStamp.inited;
    LStack_8._current.timeStamp._17_3_ = *(undefined3 *)&(pLVar12->_current).timeStamp.field_0x11;
    LStack_8._current.persistant = (pLVar12->_current).persistant;
    LStack_8._current._53_3_ = *(undefined3 *)&(pLVar12->_current).field_0x35;
    LStack_8._current.lastTimeStamp = (pLVar12->_current).lastTimeStamp;
    LStack_8._current.avatarModifierPackageType = (pLVar12->_current).avatarModifierPackageType;
    LStack_8._current.avatarModifierPackageAdditionPolicy =
         (pLVar12->_current).avatarModifierPackageAdditionPolicy;
    uStack_1 = 1;
    pLStack_15 = &LStack_8;
    while (bVar16 = mscorlib.dll::System::Collections::Generic::
                    List`1[T]+Enumerator[AvatarModifierPackage]::
                    List_1_T_Enumerator_AvatarModifierPackage__MoveNext
                              (&LStack_8,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                              ), bVar16 != 0) {
      modifierPackage.avatarModifierPackageAdditionPolicy =
           LStack_8._current.avatarModifierPackageAdditionPolicy;
      iStack_17 = LStack_8._current.id;
      iStack_18 = LStack_8._current.duration.currentCryptoKey;
      AStack_19 = LStack_8._current.duration.hiddenValue;
      pBStack_20 = LStack_8._current.duration.hiddenValueOld;
      fStack_21 = LStack_8._current.duration.fakeValue;
      bStack_22 = LStack_8._current.duration.inited;
      uStack_23 = LStack_8._current.duration._17_3_;
      pAStack_24 = LStack_8._current.avatarModifiers;
      pDStack_25 = LStack_8._current.actionsToTakeVsTypes;
      iStack_26 = LStack_8._current.timeStamp.currentCryptoKey;
      AStack_27 = LStack_8._current.timeStamp.hiddenValue;
      pBStack_28 = LStack_8._current.timeStamp.hiddenValueOld;
      fStack_29 = LStack_8._current.timeStamp.fakeValue;
      bStack_30 = LStack_8._current.timeStamp.inited;
      uStack_31 = LStack_8._current.timeStamp._17_3_;
      bStack_32 = LStack_8._current.persistant;
      uStack_33 = LStack_8._current._53_3_;
      fStack_34 = LStack_8._current.lastTimeStamp;
      pMStack_35 = (MonitorData *)LStack_8._current.avatarModifierPackageType;
      if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AvatarModifierPackage);
      }
      if (pMStack_35 == pOStack_9[8].monitor) {
        if (this_00 == (Predicate_1_AvatarModifierPackage_ *)0x0) goto code_?;
        func_?(this_00,iStack_17,iStack_18,AStack_19,pBStack_20,fStack_21,_bStack_12c,
                        pAStack_24,pDStack_25,iStack_26,AStack_27,pBStack_28,fStack_29,
                        _bStack_110,_bStack_10c,fStack_34,pMStack_35);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
               ,in_stack_36);
    uStack_1 = 0xffffffff;
    if (this_00 == (Predicate_1_AvatarModifierPackage_ *)0x0) goto code_?;
    if (1 < (int)(this_00->fields)._._.invoke_impl) goto code_?;
    modifierPackage.avatarModifierPackageAdditionPolicy = (int32_t)(this->fields).packages;
    pAVar37 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
              List_1_AvatarModifierPackage__get_Item
                        (&LStack_13._current,(List_1_AvatarModifierPackage_ *)this_00,0,
                         MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                        );
    if (modifierPackage.avatarModifierPackageAdditionPolicy == 0) goto code_?;
    index = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
            List_1_AvatarModifierPackage__IndexOf
                      ((List_1_AvatarModifierPackage_ *)
                       modifierPackage.avatarModifierPackageAdditionPolicy,*pAVar37,
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__IndexOf_AvatarModifierPackage_
                      );
    pLVar10 = (this->fields).packages;
    if (pLVar10 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
    pAVar37 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
              List_1_AvatarModifierPackage__get_Item
                        (&AStack_38,pLVar10,index,
                         MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                        );
    AStack_7.id = pAVar37->id;
    AStack_7.duration.currentCryptoKey = (pAVar37->duration).currentCryptoKey;
    AStack_7.duration.hiddenValue = (pAVar37->duration).hiddenValue;
    AStack_7.duration.hiddenValueOld = (pAVar37->duration).hiddenValueOld;
    AStack_7.duration.fakeValue = (pAVar37->duration).fakeValue;
    AStack_7.duration.inited = (pAVar37->duration).inited;
    AStack_7.duration._17_3_ = *(undefined3 *)&(pAVar37->duration).field_0x11;
    AStack_7.avatarModifiers = pAVar37->avatarModifiers;
    AStack_7.actionsToTakeVsTypes = pAVar37->actionsToTakeVsTypes;
    AStack_7.timeStamp.currentCryptoKey = (pAVar37->timeStamp).currentCryptoKey;
    AStack_7.timeStamp.hiddenValue = (pAVar37->timeStamp).hiddenValue;
    AStack_7.timeStamp.hiddenValueOld = (pAVar37->timeStamp).hiddenValueOld;
    AStack_7.timeStamp.fakeValue = (pAVar37->timeStamp).fakeValue;
    AStack_7.timeStamp.inited = (pAVar37->timeStamp).inited;
    AStack_7.timeStamp._17_3_ = *(undefined3 *)&(pAVar37->timeStamp).field_0x11;
    AStack_7.persistant = pAVar37->persistant;
    AStack_7._53_3_ = *(undefined3 *)&pAVar37->field_0x35;
    AStack_7.lastTimeStamp = pAVar37->lastTimeStamp;
    AStack_7.avatarModifierPackageType = pAVar37->avatarModifierPackageType;
    AStack_7.avatarModifierPackageAdditionPolicy = pAVar37->avatarModifierPackageAdditionPolicy;
    if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarModifierPackage);
    }
    AvatarModifierPackage::AvatarModifierPackage_set_IsExpired(&AStack_7,1,(MethodInfo *)0x0);
    pLVar10 = (this->fields).packages;
    iVar39 = AStack_7.id;
    iVar40 = AStack_7.duration.currentCryptoKey;
    AVar41 = AStack_7.duration.hiddenValue;
    pBVar42 = AStack_7.duration.hiddenValueOld;
    fVar43 = AStack_7.duration.fakeValue;
    uVar44 = AStack_7.duration._16_4_;
    pAVar45 = AStack_7.avatarModifiers;
    pDVar46 = AStack_7.actionsToTakeVsTypes;
    iVar47 = AStack_7.timeStamp.currentCryptoKey;
    AVar48 = AStack_7.timeStamp.hiddenValue;
    pBVar49 = AStack_7.timeStamp.hiddenValueOld;
    fVar50 = AStack_7.timeStamp.fakeValue;
    uVar51 = AStack_7.timeStamp._16_4_;
    uVar52 = AStack_7._52_4_;
    fVar53 = AStack_7.lastTimeStamp;
    iVar54 = AStack_7.avatarModifierPackageType;
    iVar55 = AStack_7.avatarModifierPackageAdditionPolicy;
  }
  else {
    value_00[1].klass = (Object__Class *)id;
    modifierPackage.avatarModifierPackageAdditionPolicy = (int32_t)(this->fields).packages;
    pPStack_11 = (Predicate_1_AvatarModifierPackage_ *)func_?();
    mscorlib.dll::System::Predicate`1[AvatarModifierPackage]::
    Predicate_1_AvatarModifierPackage___ctor
              (pPStack_11,value_00,
               MethodInfo__AvatarModifierPackages____c__DisplayClass25_0___RemoveModifierPackage_b__0_AvatarModifierPackage_
               ,(MethodInfo *)0x0);
    if (modifierPackage.avatarModifierPackageAdditionPolicy == 0) goto code_?;
    index = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
            List_1_AvatarModifierPackage__FindIndex
                      ((List_1_AvatarModifierPackage_ *)
                       modifierPackage.avatarModifierPackageAdditionPolicy,pPStack_11,
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__FindIndex_System__Predicate<AvatarModifierPackage>_
                      );
    if (index == -1) goto code_?;
    pLVar10 = (this->fields).packages;
    if (pLVar10 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
    pAVar37 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
              List_1_AvatarModifierPackage__get_Item
                        (&modifierPackage,pLVar10,index,
                         MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                        );
    AStack_6.id = pAVar37->id;
    AStack_6.duration.currentCryptoKey = (pAVar37->duration).currentCryptoKey;
    AStack_6.duration.hiddenValue = (pAVar37->duration).hiddenValue;
    AStack_6.duration.hiddenValueOld = (pAVar37->duration).hiddenValueOld;
    AStack_6.duration.fakeValue = (pAVar37->duration).fakeValue;
    AStack_6.duration.inited = (pAVar37->duration).inited;
    AStack_6.duration._17_3_ = *(undefined3 *)&(pAVar37->duration).field_0x11;
    AStack_6.avatarModifiers = pAVar37->avatarModifiers;
    AStack_6.actionsToTakeVsTypes = pAVar37->actionsToTakeVsTypes;
    AStack_6.timeStamp.currentCryptoKey = (pAVar37->timeStamp).currentCryptoKey;
    AStack_6.timeStamp.hiddenValue = (pAVar37->timeStamp).hiddenValue;
    AStack_6.timeStamp.hiddenValueOld = (pAVar37->timeStamp).hiddenValueOld;
    AStack_6.timeStamp.fakeValue = (pAVar37->timeStamp).fakeValue;
    AStack_6.timeStamp.inited = (pAVar37->timeStamp).inited;
    AStack_6.timeStamp._17_3_ = *(undefined3 *)&(pAVar37->timeStamp).field_0x11;
    AStack_6.persistant = pAVar37->persistant;
    AStack_6._53_3_ = *(undefined3 *)&pAVar37->field_0x35;
    AStack_6.lastTimeStamp = pAVar37->lastTimeStamp;
    AStack_6.avatarModifierPackageType = pAVar37->avatarModifierPackageType;
    AStack_6.avatarModifierPackageAdditionPolicy = pAVar37->avatarModifierPackageAdditionPolicy;
    if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarModifierPackage);
    }
    AvatarModifierPackage::AvatarModifierPackage_set_IsExpired(&AStack_6,1,(MethodInfo *)0x0);
    pLVar10 = (this->fields).packages;
    iVar39 = AStack_6.id;
    iVar40 = AStack_6.duration.currentCryptoKey;
    AVar41 = AStack_6.duration.hiddenValue;
    pBVar42 = AStack_6.duration.hiddenValueOld;
    fVar43 = AStack_6.duration.fakeValue;
    uVar44 = AStack_6.duration._16_4_;
    pAVar45 = AStack_6.avatarModifiers;
    pDVar46 = AStack_6.actionsToTakeVsTypes;
    iVar47 = AStack_6.timeStamp.currentCryptoKey;
    AVar48 = AStack_6.timeStamp.hiddenValue;
    pBVar49 = AStack_6.timeStamp.hiddenValueOld;
    fVar50 = AStack_6.timeStamp.fakeValue;
    uVar51 = AStack_6.timeStamp._16_4_;
    uVar52 = AStack_6._52_4_;
    fVar53 = AStack_6.lastTimeStamp;
    iVar54 = AStack_6.avatarModifierPackageType;
    iVar55 = AStack_6.avatarModifierPackageAdditionPolicy;
  }
  if (pLVar10 != (List_1_AvatarModifierPackage_ *)0x0) {
    value.duration.currentCryptoKey = iVar40;
    value.id = iVar39;
    value.duration.hiddenValue = AVar41;
    value.duration.hiddenValueOld = pBVar42;
    value.duration.fakeValue = fVar43;
    value.duration.inited = (bool)uVar44;
    value.duration._17_3_ = SUB43(uVar44,1);
    value.avatarModifiers = pAVar45;
    value.actionsToTakeVsTypes = pDVar46;
    value.timeStamp.currentCryptoKey = iVar47;
    value.timeStamp.hiddenValue = AVar48;
    value.timeStamp.hiddenValueOld = pBVar49;
    value.timeStamp.fakeValue = fVar50;
    value.timeStamp.inited = (bool)uVar51;
    value.timeStamp._17_3_ = SUB43(uVar51,1);
    value.persistant = (bool)uVar52;
    value._53_3_ = SUB43(uVar52,1);
    value.lastTimeStamp = fVar53;
    value.avatarModifierPackageType = iVar54;
    value.avatarModifierPackageAdditionPolicy = iVar55;
    mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
    List_1_AvatarModifierPackage__set_Item
              (pLVar10,index,value,
               MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__set_Item_int__AvatarModifierPackage_
              );
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  func_?();
  func_?();
  pcVar56 = (code *)swi(3);
  (*pcVar56)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_Update
               (AvatarModifierPackages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackage);
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
  if (pLVar2 != (List_1_AvatarModifierPackage_ *)0x0) {
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
          piVar3 = (int32_t *)
                   func_?(auStack_4,pLVar2,index,
                                   MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                                  );
          AStack_1.id = *piVar3;
          AStack_1.duration.currentCryptoKey = piVar3[1];
          AStack_1.duration.hiddenValue = *(ACTkByte4 *)(piVar3 + 2);
          AStack_1.duration.hiddenValueOld = (Byte__Array *)piVar3[3];
          AStack_1.duration.fakeValue = (float)piVar3[4];
          AStack_1.duration._16_4_ = piVar3[5];
          AStack_1.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)piVar3[6];
          AStack_1.actionsToTakeVsTypes =
               (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)piVar3[7];
          AStack_1.timeStamp.currentCryptoKey = piVar3[8];
          AStack_1.timeStamp.hiddenValue = *(ACTkByte4 *)(piVar3 + 9);
          AStack_1.timeStamp.hiddenValueOld = (Byte__Array *)piVar3[10];
          AStack_1.timeStamp.fakeValue = (float)piVar3[0xb];
          AStack_1.timeStamp._16_4_ = piVar3[0xc];
          AStack_1._52_4_ = piVar3[0xd];
          AStack_1.lastTimeStamp = (float)piVar3[0xe];
          AStack_1.avatarModifierPackageType = piVar3[0xf];
          AStack_1.avatarModifierPackageAdditionPolicy = piVar3[0x10];
          if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__AvatarModifierPackage);
          }
          AvatarModifierPackage::AvatarModifierPackage_InPause(&AStack_1,(MethodInfo *)0x0);
        }
        if (pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
        piVar3 = (int32_t *)
                 func_?(auStack_4,pLVar2,index,
                                 MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                                );
        AStack_1.id = *piVar3;
        AStack_1.duration.currentCryptoKey = piVar3[1];
        AStack_1.duration.hiddenValue = *(ACTkByte4 *)(piVar3 + 2);
        AStack_1.duration.hiddenValueOld = (Byte__Array *)piVar3[3];
        AStack_1.duration.fakeValue = (float)piVar3[4];
        AStack_1.duration._16_4_ = piVar3[5];
        AStack_1.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)piVar3[6];
        AStack_1.actionsToTakeVsTypes =
             (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)piVar3[7];
        AStack_1.timeStamp.currentCryptoKey = piVar3[8];
        AStack_1.timeStamp.hiddenValue = *(ACTkByte4 *)(piVar3 + 9);
        AStack_1.timeStamp.hiddenValueOld = (Byte__Array *)piVar3[10];
        AStack_1.timeStamp.fakeValue = (float)piVar3[0xb];
        AStack_1.timeStamp._16_4_ = piVar3[0xc];
        AStack_1._52_4_ = piVar3[0xd];
        AStack_1.lastTimeStamp = (float)piVar3[0xe];
        AStack_1.avatarModifierPackageType = piVar3[0xf];
        AStack_1.avatarModifierPackageAdditionPolicy = piVar3[0x10];
        if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__AvatarModifierPackage);
        }
        bVar5 = AvatarModifierPackage::AvatarModifierPackage_get_IsExpired
                          (&AStack_1,(MethodInfo *)0x0);
      } while (bVar5 == 0);
      if ((this->fields).OnModifierExpired !=
          (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
        pLVar2 = (this->fields).packages;
        pAVar6 = (this->fields).OnModifierExpired;
        if (pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) break;
        puVar7 = (undefined4 *)
                 func_?(auStack_4,pLVar2,index,
                                 MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                                );
        (*(pAVar6->fields)._._.invoke_impl)
                  ((pAVar6->fields)._._.method_code,*puVar7,puVar7[1],puVar7[2],puVar7[3],puVar7[4],
                   puVar7[5],puVar7[6],puVar7[7],puVar7[8],puVar7[9],puVar7[10],puVar7[0xb],
                   puVar7[0xc],puVar7[0xd],puVar7[0xe],puVar7[0xf],puVar7[0x10],
                   (pAVar6->fields)._._.method);
      }
      pLVar2 = (this->fields).packages;
      if (pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
      List_1_AvatarModifierPackage__RemoveAt
                (pLVar2,index,
                 MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__RemoveAt_int_
                );
    } while( true );
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__List__);
  method_00 = (MethodInfo *)&(this->fields).packages;
  (this->fields).packages = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._InPause_k__BackingField = 0;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    pUVar2 = (pMVar1->fields)._.OnPause;
    pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar3,unaff_EDI,MethodInfo__AvatarModifierPackages__OnPause__,(MethodInfo *)0x0);
    pUVar2 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
    if (pUVar2 == (UnityAction *)0x0) {
      (pMVar1->fields)._.OnPause = (UnityAction *)0x0;
    }
    else {
      pUVar4 = (UnityAction *)0x0;
      if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 == (UnityAction *)0x0) goto code_?;
      (pMVar1->fields)._.OnPause = pUVar4;
      pUVar4 = (UnityAction *)0x0;
      if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 == (UnityAction *)0x0) goto code_?;
    }
    func_?();
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    object = TypeInfo__UnityEngine__Events__UnityAction;
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      pUVar2 = (pMVar1->fields)._.OnResume;
      pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar3,(Object *)object,MethodInfo__AvatarModifierPackages__OnResume__,
                 (MethodInfo *)0x0);
      pUVar2 = (UnityAction *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar2,(Delegate *)pNVar3,(MethodInfo *)0x0);
      if (pUVar2 == (UnityAction *)0x0) {
        (pMVar1->fields)._.OnResume = (UnityAction *)0x0;
        func_?();
        return;
      }
      pUVar4 = (UnityAction *)0x0;
      if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar4 = pUVar2;
      }
      if (pUVar4 != (UnityAction *)0x0) {
        (pMVar1->fields)._.OnResume = pUVar4;
        pUVar4 = (UnityAction *)0x0;
        if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar4 = pUVar2;
        }
        if (pUVar4 != (UnityAction *)0x0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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

