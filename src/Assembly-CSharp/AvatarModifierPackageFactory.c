
/* AvatarModifierPackage AssembleInvulnerabilityPackage(AvatarModifierPackageType, Single) */

AvatarModifierPackage * Assembly-CSharp.dll::AvatarModifierPackageFactory::AvatarModifierPackageFactory_AssembleInvulnerabilityPackage(AvatarModifierPackage *__return_storage_ptr__,AvatarModifierPackageType__Enum type,float time,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackageFactory);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarModifierPackage__AvatarModifier);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
  if (*(int *)&(TypeInfo__AvatarModifierPackageFactory->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_1 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
  uVar2 = 0xADDR;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_1 >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  iVar8 = iRam_?;
  if (avatarModifiers != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
    if ((int)avatarModifiers->max_length == 0) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      pAVar10 = (AvatarModifierPackage *)(*pcVar9)();
      return pAVar10;
    }
    uStack_1._4_4_ = (undefined4)((ulonglong)uStack_1 >> 0x20);
    avatarModifiers->vector[0].avatarModifierType = 2;
    avatarModifiers->vector[0].avatarModifierEffect = 10;
    *(undefined4 *)&avatarModifiers->vector[0].value = (undefined4)uStack_1;
    *(undefined4 *)((longlong)&avatarModifiers->vector[0].value + 4) = uStack_1._4_4_;
    if (iVar8 != 0) {
      uVar3 = (uint)((ulonglong)&avatarModifiers->vector[0].value >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,GamePassesHighScoreList+HighScoreListData]::Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor(this,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__);
    if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x11,1,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_->klass->rgctx_data[0x22].method);
      *(undefined8 *)__return_storage_ptr__ = 0;
      (__return_storage_ptr__->duration).currentCryptoKey = 0;
      (__return_storage_ptr__->duration).hiddenValue.b1 = 0;
      (__return_storage_ptr__->duration).hiddenValue.b2 = 0;
      (__return_storage_ptr__->duration).hiddenValue.b3 = 0;
      (__return_storage_ptr__->duration).hiddenValue.b4 = 0;
      (__return_storage_ptr__->duration).hiddenValueOld = (Byte__Array *)0x0;
      (__return_storage_ptr__->duration).fakeValue = 0.0;
      (__return_storage_ptr__->duration).inited = 0;
      *(undefined3 *)&(__return_storage_ptr__->duration).field_0x15 = 0;
      __return_storage_ptr__->avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
      __return_storage_ptr__->actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
      (__return_storage_ptr__->timeStamp).currentCryptoKey = 0;
      (__return_storage_ptr__->timeStamp).hiddenValue.b1 = 0;
      (__return_storage_ptr__->timeStamp).hiddenValue.b2 = 0;
      (__return_storage_ptr__->timeStamp).hiddenValue.b3 = 0;
      (__return_storage_ptr__->timeStamp).hiddenValue.b4 = 0;
      (__return_storage_ptr__->timeStamp).hiddenValueOld = (Byte__Array *)0x0;
      (__return_storage_ptr__->timeStamp).fakeValue = 0.0;
      (__return_storage_ptr__->timeStamp).inited = 0;
      *(undefined3 *)&(__return_storage_ptr__->timeStamp).field_0x15 = 0;
      __return_storage_ptr__->persistant = 0;
      *(undefined3 *)&__return_storage_ptr__->field_0x49 = 0;
      __return_storage_ptr__->lastTimeStamp = 0.0;
      __return_storage_ptr__->avatarModifierPackageType = 0;
      __return_storage_ptr__->avatarModifierPackageAdditionPolicy = 0;
      AvatarModifierPackage::AvatarModifierPackage__ctor(__return_storage_ptr__,type,AvatarModifierPackageAdditionPolicy__Enum_Renew,time,avatarModifiers,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)this,1,(MethodInfo *)0x0);
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pAVar10 = (AvatarModifierPackage *)(*pcVar9)();
  return pAVar10;
}


/* Func`1[Single] Const(Single) */

Func_1_Single_ * Assembly-CSharp.dll::AvatarModifierPackageFactory::AvatarModifierPackageFactory_Const(float c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<float>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarModifierPackageFactory____c__DisplayClass0_0___Const_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarModifierPackageFactory____c__DisplayClass0_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__AvatarModifierPackageFactory____c__DisplayClass0_0);
  if (lVar1 != 0) {
    *(float *)(lVar1 + 0x10) = c;
    pFVar2 = (Func_1_Single_ *)FUN_?(TypeInfo__System__Func<float>);
    FUN_?(pFVar2,lVar1,MethodInfo__AvatarModifierPackageFactory____c__DisplayClass0_0___Const_b__0__);
    return pFVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pFVar2 = (Func_1_Single_ *)(*pcVar3)();
  return pFVar2;
}


/* AvatarModifierPackage GetPackage(AvatarModifierPackageType) */

AvatarModifierPackage * Assembly-CSharp.dll::AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage(AvatarModifierPackage *__return_storage_ptr__,AvatarModifierPackageType__Enum packageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackageFactory);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarModifierPackage);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__get_Item_AvatarModifierPackageType_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  (__return_storage_ptr__->duration).currentCryptoKey = 0;
  (__return_storage_ptr__->duration).hiddenValue.b1 = 0;
  (__return_storage_ptr__->duration).hiddenValue.b2 = 0;
  (__return_storage_ptr__->duration).hiddenValue.b3 = 0;
  (__return_storage_ptr__->duration).hiddenValue.b4 = 0;
  (__return_storage_ptr__->duration).hiddenValueOld = (Byte__Array *)0x0;
  (__return_storage_ptr__->duration).fakeValue = 0.0;
  (__return_storage_ptr__->duration).inited = 0;
  *(undefined3 *)&(__return_storage_ptr__->duration).field_0x15 = 0;
  __return_storage_ptr__->avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
  __return_storage_ptr__->actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
  (__return_storage_ptr__->timeStamp).currentCryptoKey = 0;
  (__return_storage_ptr__->timeStamp).hiddenValue.b1 = 0;
  (__return_storage_ptr__->timeStamp).hiddenValue.b2 = 0;
  (__return_storage_ptr__->timeStamp).hiddenValue.b3 = 0;
  (__return_storage_ptr__->timeStamp).hiddenValue.b4 = 0;
  (__return_storage_ptr__->timeStamp).hiddenValueOld = (Byte__Array *)0x0;
  (__return_storage_ptr__->timeStamp).fakeValue = 0.0;
  (__return_storage_ptr__->timeStamp).inited = 0;
  *(undefined3 *)&(__return_storage_ptr__->timeStamp).field_0x15 = 0;
  __return_storage_ptr__->persistant = 0;
  *(undefined3 *)&__return_storage_ptr__->field_0x49 = 0;
  __return_storage_ptr__->lastTimeStamp = 0.0;
  __return_storage_ptr__->avatarModifierPackageType = 0;
  __return_storage_ptr__->avatarModifierPackageAdditionPolicy = 0;
  if (*(int *)&(TypeInfo__AvatarModifierPackageFactory->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarModifierPackageFactory);
  }
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__get_Item_AvatarModifierPackageType_;
  this = (Dictionary_2_System_Int32Enum_AvatarModifierPackage_ *)TypeInfo__AvatarModifierPackageFactory->static_fields->protoPackages;
  if (this != (Dictionary_2_System_Int32Enum_AvatarModifierPackage_ *)0x0) {
    uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,AvatarModifierPackage]::Dictionary_2_System_Int32Enum_AvatarModifierPackage__FindEntry(this,packageType,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__get_Item_AvatarModifierPackageType_->klass->rgctx_data[0x21].method);
    if ((int)uVar2 < 0) {
      uVar3 = func_?(pMVar1->klass->rgctx_data,0xe);
      key = (Object *)func_?(uVar3);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException(key,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      pAVar5 = (AvatarModifierPackage *)(*pcVar4)();
      return pAVar5;
    }
    pDVar6 = (this->fields)._entries;
    if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Int32Enum_AvatarModifierPackage___Array *)0x0) {
      if (uVar2 < (uint)pDVar6->max_length) {
        pAVar5 = &pDVar6->vector[(int)uVar2].value;
        uVar7 = *(undefined4 *)&pAVar5->field_0x4;
        iVar8 = (pAVar5->duration).currentCryptoKey;
        AVar9 = (pAVar5->duration).hiddenValue;
        pAVar10 = &pDVar6->vector[(int)uVar2].value;
        uVar11 = *(undefined4 *)&(pAVar10->duration).hiddenValueOld;
        uVar12 = *(undefined4 *)((longlong)&(pAVar10->duration).hiddenValueOld + 4);
        fVar13 = (pAVar10->duration).fakeValue;
        bVar14 = (pAVar10->duration).inited;
        uVar15 = *(undefined3 *)&(pAVar10->duration).field_0x15;
        pAVar10 = &pDVar6->vector[(int)uVar2].value;
        uVar16 = *(undefined4 *)&pAVar10->avatarModifiers;
        uVar17 = *(undefined4 *)((longlong)&pAVar10->avatarModifiers + 4);
        uVar18 = *(undefined4 *)&pAVar10->actionsToTakeVsTypes;
        uVar19 = *(undefined4 *)((longlong)&pAVar10->actionsToTakeVsTypes + 4);
        pAVar10 = &pDVar6->vector[(int)uVar2].value;
        iVar20 = (pAVar10->timeStamp).currentCryptoKey;
        AVar21 = (pAVar10->timeStamp).hiddenValue;
        pBVar22 = (pAVar10->timeStamp).hiddenValueOld;
        pAVar10 = &pDVar6->vector[(int)uVar2].value;
        fVar23 = (pAVar10->timeStamp).fakeValue;
        bVar24 = (pAVar10->timeStamp).inited;
        uVar25 = *(undefined3 *)&(pAVar10->timeStamp).field_0x15;
        bVar26 = pAVar10->persistant;
        uVar27 = *(undefined3 *)&pAVar10->field_0x49;
        fVar28 = pAVar10->lastTimeStamp;
        iVar29 = pDVar6->vector[(int)uVar2].value.avatarModifierPackageType;
        iVar30 = pDVar6->vector[(int)uVar2].value.avatarModifierPackageAdditionPolicy;
        __return_storage_ptr__->id = pAVar5->id;
        *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar7;
        (__return_storage_ptr__->duration).currentCryptoKey = iVar8;
        (__return_storage_ptr__->duration).hiddenValue = AVar9;
        *(undefined4 *)&(__return_storage_ptr__->duration).hiddenValueOld = uVar11;
        *(undefined4 *)((longlong)&(__return_storage_ptr__->duration).hiddenValueOld + 4) = uVar12;
        (__return_storage_ptr__->duration).fakeValue = fVar13;
        (__return_storage_ptr__->duration).inited = bVar14;
        *(undefined3 *)&(__return_storage_ptr__->duration).field_0x15 = uVar15;
        *(undefined4 *)&__return_storage_ptr__->avatarModifiers = uVar16;
        *(undefined4 *)((longlong)&__return_storage_ptr__->avatarModifiers + 4) = uVar17;
        *(undefined4 *)&__return_storage_ptr__->actionsToTakeVsTypes = uVar18;
        *(undefined4 *)((longlong)&__return_storage_ptr__->actionsToTakeVsTypes + 4) = uVar19;
        (__return_storage_ptr__->timeStamp).currentCryptoKey = iVar20;
        (__return_storage_ptr__->timeStamp).hiddenValue = AVar21;
        (__return_storage_ptr__->timeStamp).hiddenValueOld = pBVar22;
        (__return_storage_ptr__->timeStamp).fakeValue = fVar23;
        (__return_storage_ptr__->timeStamp).inited = bVar24;
        *(undefined3 *)&(__return_storage_ptr__->timeStamp).field_0x15 = uVar25;
        __return_storage_ptr__->persistant = bVar26;
        *(undefined3 *)&__return_storage_ptr__->field_0x49 = uVar27;
        __return_storage_ptr__->lastTimeStamp = fVar28;
        __return_storage_ptr__->avatarModifierPackageType = iVar29;
        __return_storage_ptr__->avatarModifierPackageAdditionPolicy = iVar30;
        if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
          FUN_?();
        }
        AvatarModifierPackage::AvatarModifierPackage_Renew(__return_storage_ptr__,(MethodInfo *)0x0);
        return __return_storage_ptr__;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      pAVar5 = (AvatarModifierPackage *)(*pcVar4)();
      return pAVar5;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pAVar5 = (AvatarModifierPackage *)(*pcVar4)();
  return pAVar5;
}


/* AvatarModifierPackageFactory() */

void Assembly-CSharp.dll::AvatarModifierPackageFactory::AvatarModifierPackageFactory__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackageFactory);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarModifierPackage__AvatarModifier);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_AvatarModifierPackage_ *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>);
  pEVar1 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32Enum]::EqualityComparer_1_System_Int32Enum__get_Default(MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Dictionary__->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar1 != (EqualityComparer_1_System_Int32Enum_ *)0x0) && (bVar2 = iRam_? != 0, (this->fields)._comparer = (IEqualityComparer_1_System_Int32Enum_ *)0x0, bVar2)) {
    uVar3 = (uint)((ulonglong)&(this->fields)._comparer >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
  pFStack_8 = AvatarModifierPackageFactory_Const(10.0,(MethodInfo *)0x0);
  uStack_9 = 1;
  uStack_10 = 0xe;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pFStack_8 >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  iVar11 = iRam_?;
  if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
    if ((int)pAVar7->max_length == 0) goto code_?;
    pAVar7->vector[0].avatarModifierType = 1;
    pAVar7->vector[0].avatarModifierEffect = 0xe;
    pAVar7->vector[0].value = pFStack_8;
    if (iVar11 != 0) {
      uVar3 = (uint)((ulonglong)&pAVar7->vector[0].value >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    AStack_12.id = 0;
    AStack_12._4_4_ = 0;
    AStack_12.duration.currentCryptoKey = 0;
    AStack_12.duration.hiddenValue.b1 = 0;
    AStack_12.duration.hiddenValue.b2 = 0;
    AStack_12.duration.hiddenValue.b3 = 0;
    AStack_12.duration.hiddenValue.b4 = 0;
    AStack_12.avatarModifierPackageType = 0;
    AStack_12.avatarModifierPackageAdditionPolicy = 0;
    AStack_12.duration.hiddenValueOld = (Byte__Array *)0x0;
    AStack_12.duration.fakeValue = 0.0;
    AStack_12.duration.inited = 0;
    AStack_12.duration._21_3_ = 0;
    AStack_12.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
    AStack_12.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
    AStack_12.timeStamp.currentCryptoKey = 0;
    AStack_12.timeStamp.hiddenValue.b1 = 0;
    AStack_12.timeStamp.hiddenValue.b2 = 0;
    AStack_12.timeStamp.hiddenValue.b3 = 0;
    AStack_12.timeStamp.hiddenValue.b4 = 0;
    AStack_12.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
    AStack_12.timeStamp.fakeValue = 0.0;
    AStack_12.timeStamp.inited = 0;
    AStack_12.timeStamp._21_3_ = 0;
    AStack_12.persistant = 0;
    AStack_12._73_3_ = 0;
    AStack_12.lastTimeStamp = 0.0;
    AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_12,AvatarModifierPackageType__Enum_Fire,AvatarModifierPackageAdditionPolicy__Enum_Renew,1.0,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
    if (this != (Dictionary_2_System_Int32Enum_AvatarModifierPackage_ *)0x0) {
      uVar13 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      AStack_14.id = AStack_12.id;
      AStack_14._4_4_ = AStack_12._4_4_;
      AStack_14.duration.currentCryptoKey = AStack_12.duration.currentCryptoKey;
      AStack_14.duration.hiddenValue = AStack_12.duration.hiddenValue;
      AStack_14.duration.hiddenValueOld = AStack_12.duration.hiddenValueOld;
      AStack_14.duration.fakeValue = AStack_12.duration.fakeValue;
      AStack_14.duration.inited = AStack_12.duration.inited;
      AStack_14.duration._21_3_ = AStack_12.duration._21_3_;
      AStack_14.avatarModifiers = AStack_12.avatarModifiers;
      AStack_14.actionsToTakeVsTypes = AStack_12.actionsToTakeVsTypes;
      AStack_14.timeStamp.currentCryptoKey = AStack_12.timeStamp.currentCryptoKey;
      AStack_14.timeStamp.hiddenValue = AStack_12.timeStamp.hiddenValue;
      AStack_14.timeStamp.hiddenValueOld = AStack_12.timeStamp.hiddenValueOld;
      AStack_14.timeStamp.fakeValue = AStack_12.timeStamp.fakeValue;
      AStack_14.timeStamp.inited = AStack_12.timeStamp.inited;
      AStack_14.timeStamp._21_3_ = AStack_12.timeStamp._21_3_;
      AStack_14.persistant = AStack_12.persistant;
      AStack_14._73_3_ = AStack_12._73_3_;
      AStack_14.lastTimeStamp = AStack_12.lastTimeStamp;
      AStack_14.avatarModifierPackageType = AStack_12.avatarModifierPackageType;
      AStack_14.avatarModifierPackageAdditionPolicy = AStack_12.avatarModifierPackageAdditionPolicy;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,AvatarModifierPackage]::Dictionary_2_System_Int32Enum_AvatarModifierPackage__TryInsert(this,1,&AStack_14,(InsertionBehavior__Enum)uVar13,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_->klass->rgctx_data[0x22].method);
      pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
      pFStack_15 = AvatarModifierPackageFactory_Const(1.5,(MethodInfo *)0x0);
      uStack_16 = 0;
      uStack_17 = 2;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&pFStack_15 >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      iVar11 = iRam_?;
      if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
        if ((int)pAVar7->max_length != 0) {
          pAVar7->vector[0].avatarModifierType = 0;
          pAVar7->vector[0].avatarModifierEffect = 2;
          pAVar7->vector[0].value = pFStack_15;
          if (iVar11 != 0) {
            uVar3 = (uint)((ulonglong)&pAVar7->vector[0].value >> 0xc);
            uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
              puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          pFStack_18 = AvatarModifierPackageFactory_Const(1.25,(MethodInfo *)0x0);
          uStack_19 = 0;
          uStack_20 = 3;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&pFStack_18 >> 0xc);
            uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
              puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          iVar11 = iRam_?;
          if (1 < (uint)pAVar7->max_length) {
            pAVar7->vector[1].avatarModifierType = 0;
            pAVar7->vector[1].avatarModifierEffect = 3;
            pAVar7->vector[1].value = pFStack_18;
            if (iVar11 != 0) {
              uVar3 = (uint)((ulonglong)&pAVar7->vector[1].value >> 0xc);
              uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
              do {
                uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                LOCK();
                bVar2 = uVar5 == *puVar6;
                if (bVar2) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar2);
            }
            pFStack_21 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
            uStack_22 = 2;
            uStack_23 = 7;
            if (iRam_? != 0) {
              uVar3 = (uint)((ulonglong)&pFStack_21 >> 0xc);
              uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
              do {
                uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                LOCK();
                bVar2 = uVar5 == *puVar6;
                if (bVar2) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar2);
            }
            iVar11 = iRam_?;
            if (2 < (uint)pAVar7->max_length) {
              pAVar7->vector[2].avatarModifierType = 2;
              pAVar7->vector[2].avatarModifierEffect = 7;
              pAVar7->vector[2].value = pFStack_21;
              if (iVar11 != 0) {
                uVar3 = (uint)((ulonglong)&pAVar7->vector[2].value >> 0xc);
                uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                do {
                  uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                  puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                  LOCK();
                  bVar2 = uVar5 == *puVar6;
                  if (bVar2) {
                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar2);
              }
              pFStack_24 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
              uStack_25 = 2;
              uStack_26 = 9;
              if (iRam_? != 0) {
                uVar3 = (uint)((ulonglong)&pFStack_24 >> 0xc);
                uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                do {
                  uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                  puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                  LOCK();
                  bVar2 = uVar5 == *puVar6;
                  if (bVar2) {
                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar2);
              }
              iVar11 = iRam_?;
              if (3 < (uint)pAVar7->max_length) {
                pAVar7->vector[3].avatarModifierType = 2;
                pAVar7->vector[3].avatarModifierEffect = 9;
                pAVar7->vector[3].value = pFStack_24;
                if (iVar11 != 0) {
                  uVar3 = (uint)((ulonglong)&pAVar7->vector[3].value >> 0xc);
                  uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                  do {
                    uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                    puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                    LOCK();
                    bVar2 = uVar5 == *puVar6;
                    if (bVar2) {
                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar2);
                }
                pFStack_27 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
                uStack_28 = 2;
                uStack_29 = 0xb;
                if (iRam_? != 0) {
                  uVar3 = (uint)((ulonglong)&pFStack_27 >> 0xc);
                  uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                  do {
                    uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                    puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                    LOCK();
                    bVar2 = uVar5 == *puVar6;
                    if (bVar2) {
                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar2);
                }
                iVar11 = iRam_?;
                if (4 < (uint)pAVar7->max_length) {
                  pAVar7->vector[4].avatarModifierType = 2;
                  pAVar7->vector[4].avatarModifierEffect = 0xb;
                  pAVar7->vector[4].value = pFStack_27;
                  if (iVar11 != 0) {
                    uVar3 = (uint)((ulonglong)&pAVar7->vector[4].value >> 0xc);
                    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                    do {
                      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                      LOCK();
                      bVar2 = uVar5 == *puVar6;
                      if (bVar2) {
                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar2);
                  }
                  pFStack_30 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
                  uStack_31 = 2;
                  uStack_32 = 10;
                  if (iRam_? != 0) {
                    uVar3 = (uint)((ulonglong)&pFStack_30 >> 0xc);
                    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                    do {
                      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                      LOCK();
                      bVar2 = uVar5 == *puVar6;
                      if (bVar2) {
                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar2);
                  }
                  iVar11 = iRam_?;
                  if (5 < (uint)pAVar7->max_length) {
                    pAVar7->vector[5].avatarModifierType = 2;
                    pAVar7->vector[5].avatarModifierEffect = 10;
                    pAVar7->vector[5].value = pFStack_30;
                    if (iVar11 != 0) {
                      uVar3 = (uint)((ulonglong)&pAVar7->vector[5].value >> 0xc);
                      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                      do {
                        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                        LOCK();
                        bVar2 = uVar5 == *puVar6;
                        if (bVar2) {
                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar2);
                    }
                    AStack_33.id = 0;
                    AStack_33._4_4_ = 0;
                    AStack_33.duration.currentCryptoKey = 0;
                    AStack_33.duration.hiddenValue.b1 = 0;
                    AStack_33.duration.hiddenValue.b2 = 0;
                    AStack_33.duration.hiddenValue.b3 = 0;
                    AStack_33.duration.hiddenValue.b4 = 0;
                    AStack_33.avatarModifierPackageType = 0;
                    AStack_33.avatarModifierPackageAdditionPolicy = 0;
                    AStack_33.duration.hiddenValueOld = (Byte__Array *)0x0;
                    AStack_33.duration.fakeValue = 0.0;
                    AStack_33.duration.inited = 0;
                    AStack_33.duration._21_3_ = 0;
                    AStack_33.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                    AStack_33.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                    AStack_33.timeStamp.currentCryptoKey = 0;
                    AStack_33.timeStamp.hiddenValue.b1 = 0;
                    AStack_33.timeStamp.hiddenValue.b2 = 0;
                    AStack_33.timeStamp.hiddenValue.b3 = 0;
                    AStack_33.timeStamp.hiddenValue.b4 = 0;
                    AStack_33.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                    AStack_33.timeStamp.fakeValue = 0.0;
                    AStack_33.timeStamp.inited = 0;
                    AStack_33.timeStamp._21_3_ = 0;
                    AStack_33.persistant = 0;
                    AStack_33._73_3_ = 0;
                    AStack_33.lastTimeStamp = 0.0;
                    AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_33,AvatarModifierPackageType__Enum_Mutant,AvatarModifierPackageAdditionPolicy__Enum_Renew,20.0,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                    uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
                    AStack_14.id = AStack_33.id;
                    AStack_14._4_4_ = AStack_33._4_4_;
                    AStack_14.duration.currentCryptoKey = AStack_33.duration.currentCryptoKey;
                    AStack_14.duration.hiddenValue = AStack_33.duration.hiddenValue;
                    AStack_14.duration.hiddenValueOld = AStack_33.duration.hiddenValueOld;
                    AStack_14.duration.fakeValue = AStack_33.duration.fakeValue;
                    AStack_14.duration.inited = AStack_33.duration.inited;
                    AStack_14.duration._21_3_ = AStack_33.duration._21_3_;
                    AStack_14.avatarModifiers = AStack_33.avatarModifiers;
                    AStack_14.actionsToTakeVsTypes = AStack_33.actionsToTakeVsTypes;
                    AStack_14.timeStamp.currentCryptoKey = AStack_33.timeStamp.currentCryptoKey;
                    AStack_14.timeStamp.hiddenValue = AStack_33.timeStamp.hiddenValue;
                    AStack_14.timeStamp.hiddenValueOld = AStack_33.timeStamp.hiddenValueOld;
                    AStack_14.timeStamp.fakeValue = AStack_33.timeStamp.fakeValue;
                    AStack_14.timeStamp.inited = AStack_33.timeStamp.inited;
                    AStack_14.timeStamp._21_3_ = AStack_33.timeStamp._21_3_;
                    AStack_14.persistant = AStack_33.persistant;
                    AStack_14._73_3_ = AStack_33._73_3_;
                    AStack_14.lastTimeStamp = AStack_33.lastTimeStamp;
                    AStack_14.avatarModifierPackageType = AStack_33.avatarModifierPackageType;
                    AStack_14.avatarModifierPackageAdditionPolicy = AStack_33.avatarModifierPackageAdditionPolicy;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,AvatarModifierPackage]::Dictionary_2_System_Int32Enum_AvatarModifierPackage__TryInsert(this,2,&AStack_14,(InsertionBehavior__Enum)uVar13,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_->klass->rgctx_data[0x22].method);
                    pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                    pFStack_34 = AvatarModifierPackageFactory_Const(0.01,(MethodInfo *)0x0);
                    uStack_35 = 0;
                    uStack_36 = 2;
                    if (iRam_? != 0) {
                      uVar3 = (uint)((ulonglong)&pFStack_34 >> 0xc);
                      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                      do {
                        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                        LOCK();
                        bVar2 = uVar5 == *puVar6;
                        if (bVar2) {
                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar2);
                    }
                    iVar11 = iRam_?;
                    if (pAVar7 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
                    if ((int)pAVar7->max_length != 0) {
                      pAVar7->vector[0].avatarModifierType = 0;
                      pAVar7->vector[0].avatarModifierEffect = 2;
                      pAVar7->vector[0].value = pFStack_34;
                      if (iVar11 != 0) {
                        uVar3 = (uint)((ulonglong)&pAVar7->vector[0].value >> 0xc);
                        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                        do {
                          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                          LOCK();
                          bVar2 = uVar5 == *puVar6;
                          if (bVar2) {
                            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar2);
                      }
                      pFStack_37 = AvatarModifierPackageFactory_Const(0.03,(MethodInfo *)0x0);
                      uStack_38 = 0;
                      uStack_39 = 3;
                      if (iRam_? != 0) {
                        uVar3 = (uint)((ulonglong)&pFStack_37 >> 0xc);
                        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                        do {
                          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                          LOCK();
                          bVar2 = uVar5 == *puVar6;
                          if (bVar2) {
                            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar2);
                      }
                      iVar11 = iRam_?;
                      if (1 < (uint)pAVar7->max_length) {
                        pAVar7->vector[1].avatarModifierType = 0;
                        pAVar7->vector[1].avatarModifierEffect = 3;
                        pAVar7->vector[1].value = pFStack_37;
                        if (iVar11 != 0) {
                          uVar3 = (uint)((ulonglong)&pAVar7->vector[1].value >> 0xc);
                          uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                          do {
                            uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                            puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                            LOCK();
                            bVar2 = uVar5 == *puVar6;
                            if (bVar2) {
                              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar2);
                        }
                        pFStack_40 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
                        uStack_41 = 2;
                        uStack_42 = 0xc;
                        if (iRam_? != 0) {
                          uVar3 = (uint)((ulonglong)&pFStack_40 >> 0xc);
                          uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                          do {
                            uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                            puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                            LOCK();
                            bVar2 = uVar5 == *puVar6;
                            if (bVar2) {
                              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar2);
                        }
                        iVar11 = iRam_?;
                        if (2 < (uint)pAVar7->max_length) {
                          pAVar7->vector[2].avatarModifierType = 2;
                          pAVar7->vector[2].avatarModifierEffect = 0xc;
                          pAVar7->vector[2].value = pFStack_40;
                          if (iVar11 != 0) {
                            uVar3 = (uint)((ulonglong)&pAVar7->vector[2].value >> 0xc);
                            uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                            do {
                              uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                              puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                              LOCK();
                              bVar2 = uVar5 == *puVar6;
                              if (bVar2) {
                                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar2);
                          }
                          AStack_43.id = 0;
                          AStack_43._4_4_ = 0;
                          AStack_43.duration.currentCryptoKey = 0;
                          AStack_43.duration.hiddenValue.b1 = 0;
                          AStack_43.duration.hiddenValue.b2 = 0;
                          AStack_43.duration.hiddenValue.b3 = 0;
                          AStack_43.duration.hiddenValue.b4 = 0;
                          AStack_43.avatarModifierPackageType = 0;
                          AStack_43.avatarModifierPackageAdditionPolicy = 0;
                          AStack_43.duration.hiddenValueOld = (Byte__Array *)0x0;
                          AStack_43.duration.fakeValue = 0.0;
                          AStack_43.duration.inited = 0;
                          AStack_43.duration._21_3_ = 0;
                          AStack_43.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                          AStack_43.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                          AStack_43.timeStamp.currentCryptoKey = 0;
                          AStack_43.timeStamp.hiddenValue.b1 = 0;
                          AStack_43.timeStamp.hiddenValue.b2 = 0;
                          AStack_43.timeStamp.hiddenValue.b3 = 0;
                          AStack_43.timeStamp.hiddenValue.b4 = 0;
                          AStack_43.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                          AStack_43.timeStamp.fakeValue = 0.0;
                          AStack_43.timeStamp.inited = 0;
                          AStack_43.timeStamp._21_3_ = 0;
                          AStack_43.persistant = 0;
                          AStack_43._73_3_ = 0;
                          AStack_43.lastTimeStamp = 0.0;
                          AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_43,AvatarModifierPackageType__Enum_Sticky,AvatarModifierPackageAdditionPolicy__Enum_Renew,0.4,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                          uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
                          AStack_14.id = AStack_43.id;
                          AStack_14._4_4_ = AStack_43._4_4_;
                          AStack_14.duration.currentCryptoKey = AStack_43.duration.currentCryptoKey;
                          AStack_14.duration.hiddenValue = AStack_43.duration.hiddenValue;
                          AStack_14.duration.hiddenValueOld = AStack_43.duration.hiddenValueOld;
                          AStack_14.duration.fakeValue = AStack_43.duration.fakeValue;
                          AStack_14.duration.inited = AStack_43.duration.inited;
                          AStack_14.duration._21_3_ = AStack_43.duration._21_3_;
                          AStack_14.avatarModifiers = AStack_43.avatarModifiers;
                          AStack_14.actionsToTakeVsTypes = AStack_43.actionsToTakeVsTypes;
                          AStack_14.timeStamp.currentCryptoKey = AStack_43.timeStamp.currentCryptoKey;
                          AStack_14.timeStamp.hiddenValue = AStack_43.timeStamp.hiddenValue;
                          AStack_14.timeStamp.hiddenValueOld = AStack_43.timeStamp.hiddenValueOld;
                          AStack_14.timeStamp.fakeValue = AStack_43.timeStamp.fakeValue;
                          AStack_14.timeStamp.inited = AStack_43.timeStamp.inited;
                          AStack_14.timeStamp._21_3_ = AStack_43.timeStamp._21_3_;
                          AStack_14.persistant = AStack_43.persistant;
                          AStack_14._73_3_ = AStack_43._73_3_;
                          AStack_14.lastTimeStamp = AStack_43.lastTimeStamp;
                          AStack_14.avatarModifierPackageType = AStack_43.avatarModifierPackageType;
                          AStack_14.avatarModifierPackageAdditionPolicy = AStack_43.avatarModifierPackageAdditionPolicy;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,AvatarModifierPackage]::Dictionary_2_System_Int32Enum_AvatarModifierPackage__TryInsert(this,3,&AStack_14,(InsertionBehavior__Enum)uVar13,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_->klass->rgctx_data[0x22].method);
                          pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                          pFStack_44 = AvatarModifierPackageFactory_Const(0.1,(MethodInfo *)0x0);
                          uStack_45 = 0;
                          uStack_46 = 2;
                          if (iRam_? != 0) {
                            uVar3 = (uint)((ulonglong)&pFStack_44 >> 0xc);
                            uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                            do {
                              uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                              puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                              LOCK();
                              bVar2 = uVar5 == *puVar6;
                              if (bVar2) {
                                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar2);
                          }
                          iVar11 = iRam_?;
                          if (pAVar7 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
                          if ((int)pAVar7->max_length != 0) {
                            pAVar7->vector[0].avatarModifierType = 0;
                            pAVar7->vector[0].avatarModifierEffect = 2;
                            pAVar7->vector[0].value = pFStack_44;
                            if (iVar11 != 0) {
                              uVar3 = (uint)((ulonglong)&pAVar7->vector[0].value >> 0xc);
                              uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                              do {
                                uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                                puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                                LOCK();
                                bVar2 = uVar5 == *puVar6;
                                if (bVar2) {
                                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar2);
                            }
                            pFStack_47 = AvatarModifierPackageFactory_Const(0.5,(MethodInfo *)0x0);
                            uStack_48 = 0;
                            uStack_49 = 3;
                            if (iRam_? != 0) {
                              uVar3 = (uint)((ulonglong)&pFStack_47 >> 0xc);
                              uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                              do {
                                uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                                puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                                LOCK();
                                bVar2 = uVar5 == *puVar6;
                                if (bVar2) {
                                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar2);
                            }
                            iVar11 = iRam_?;
                            if (1 < (uint)pAVar7->max_length) {
                              pAVar7->vector[1].avatarModifierType = 0;
                              pAVar7->vector[1].avatarModifierEffect = 3;
                              pAVar7->vector[1].value = pFStack_47;
                              if (iVar11 != 0) {
                                uVar3 = (uint)((ulonglong)&pAVar7->vector[1].value >> 0xc);
                                uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                do {
                                  uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                                  puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                                  LOCK();
                                  bVar2 = uVar5 == *puVar6;
                                  if (bVar2) {
                                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar2);
                              }
                              AStack_50.id = 0;
                              AStack_50._4_4_ = 0;
                              AStack_50.duration.currentCryptoKey = 0;
                              AStack_50.duration.hiddenValue.b1 = 0;
                              AStack_50.duration.hiddenValue.b2 = 0;
                              AStack_50.duration.hiddenValue.b3 = 0;
                              AStack_50.duration.hiddenValue.b4 = 0;
                              AStack_50.avatarModifierPackageType = 0;
                              AStack_50.avatarModifierPackageAdditionPolicy = 0;
                              AStack_50.duration.hiddenValueOld = (Byte__Array *)0x0;
                              AStack_50.duration.fakeValue = 0.0;
                              AStack_50.duration.inited = 0;
                              AStack_50.duration._21_3_ = 0;
                              AStack_50.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                              AStack_50.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                              AStack_50.timeStamp.currentCryptoKey = 0;
                              AStack_50.timeStamp.hiddenValue.b1 = 0;
                              AStack_50.timeStamp.hiddenValue.b2 = 0;
                              AStack_50.timeStamp.hiddenValue.b3 = 0;
                              AStack_50.timeStamp.hiddenValue.b4 = 0;
                              AStack_50.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                              AStack_50.timeStamp.fakeValue = 0.0;
                              AStack_50.timeStamp.inited = 0;
                              AStack_50.timeStamp._21_3_ = 0;
                              AStack_50.persistant = 0;
                              AStack_50._73_3_ = 0;
                              AStack_50.lastTimeStamp = 0.0;
                              AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_50,AvatarModifierPackageType__Enum_SlowMat,AvatarModifierPackageAdditionPolicy__Enum_Renew,0.4,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                              uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
                              AStack_14.id = AStack_50.id;
                              AStack_14._4_4_ = AStack_50._4_4_;
                              AStack_14.duration.currentCryptoKey = AStack_50.duration.currentCryptoKey;
                              AStack_14.duration.hiddenValue = AStack_50.duration.hiddenValue;
                              AStack_14.duration.hiddenValueOld = AStack_50.duration.hiddenValueOld;
                              AStack_14.duration.fakeValue = AStack_50.duration.fakeValue;
                              AStack_14.duration.inited = AStack_50.duration.inited;
                              AStack_14.duration._21_3_ = AStack_50.duration._21_3_;
                              AStack_14.avatarModifiers = AStack_50.avatarModifiers;
                              AStack_14.actionsToTakeVsTypes = AStack_50.actionsToTakeVsTypes;
                              AStack_14.timeStamp.currentCryptoKey = AStack_50.timeStamp.currentCryptoKey;
                              AStack_14.timeStamp.hiddenValue = AStack_50.timeStamp.hiddenValue;
                              AStack_14.timeStamp.hiddenValueOld = AStack_50.timeStamp.hiddenValueOld;
                              AStack_14.timeStamp.fakeValue = AStack_50.timeStamp.fakeValue;
                              AStack_14.timeStamp.inited = AStack_50.timeStamp.inited;
                              AStack_14.timeStamp._21_3_ = AStack_50.timeStamp._21_3_;
                              AStack_14.persistant = AStack_50.persistant;
                              AStack_14._73_3_ = AStack_50._73_3_;
                              AStack_14.lastTimeStamp = AStack_50.lastTimeStamp;
                              AStack_14.avatarModifierPackageType = AStack_50.avatarModifierPackageType;
                              AStack_14.avatarModifierPackageAdditionPolicy = AStack_50.avatarModifierPackageAdditionPolicy;
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,AvatarModifierPackage]::Dictionary_2_System_Int32Enum_AvatarModifierPackage__TryInsert(this,0x16,&AStack_14,(InsertionBehavior__Enum)uVar13,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_->klass->rgctx_data[0x22].method);
                              pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                              pFStack_51 = AvatarModifierPackageFactory_Const(3.0,(MethodInfo *)0x0);
                              uStack_52 = 0;
                              uStack_53 = 3;
                              if (iRam_? != 0) {
                                uVar3 = (uint)((ulonglong)&pFStack_51 >> 0xc);
                                uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                do {
                                  uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                                  puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                                  LOCK();
                                  bVar2 = uVar5 == *puVar6;
                                  if (bVar2) {
                                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar2);
                              }
                              iVar11 = iRam_?;
                              if (pAVar7 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
                              if ((int)pAVar7->max_length != 0) {
                                pAVar7->vector[0].avatarModifierType = 0;
                                pAVar7->vector[0].avatarModifierEffect = 3;
                                pAVar7->vector[0].value = pFStack_51;
                                if (iVar11 != 0) {
                                  uVar3 = (uint)((ulonglong)&pAVar7->vector[0].value >> 0xc);
                                  uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                  do {
                                    uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                                    puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                                    LOCK();
                                    bVar2 = uVar5 == *puVar6;
                                    if (bVar2) {
                                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar2);
                                }
                                pFStack_54 = AvatarModifierPackageFactory_Const(20.0,(MethodInfo *)0x0);
                                uStack_55 = 0;
                                uStack_56 = 0x14;
                                if (iRam_? != 0) {
                                  uVar3 = (uint)((ulonglong)&pFStack_54 >> 0xc);
                                  uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                  do {
                                    uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                                    puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                                    LOCK();
                                    bVar2 = uVar5 == *puVar6;
                                    if (bVar2) {
                                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar2);
                                }
                                iVar11 = iRam_?;
                                if (1 < (uint)pAVar7->max_length) {
                                  pAVar7->vector[1].avatarModifierType = 0;
                                  pAVar7->vector[1].avatarModifierEffect = 0x14;
                                  pAVar7->vector[1].value = pFStack_54;
                                  if (iVar11 != 0) {
                                    uVar3 = (uint)((ulonglong)&pAVar7->vector[1].value >> 0xc);
                                    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                    do {
                                      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                                      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                                      LOCK();
                                      bVar2 = uVar5 == *puVar6;
                                      if (bVar2) {
                                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                      }
                                      UNLOCK();
                                    } while (!bVar2);
                                  }
                                  AStack_57.id = 0;
                                  AStack_57._4_4_ = 0;
                                  AStack_57.duration.currentCryptoKey = 0;
                                  AStack_57.duration.hiddenValue.b1 = 0;
                                  AStack_57.duration.hiddenValue.b2 = 0;
                                  AStack_57.duration.hiddenValue.b3 = 0;
                                  AStack_57.duration.hiddenValue.b4 = 0;
                                  AStack_57.avatarModifierPackageType = 0;
                                  AStack_57.avatarModifierPackageAdditionPolicy = 0;
                                  AStack_57.duration.hiddenValueOld = (Byte__Array *)0x0;
                                  AStack_57.duration.fakeValue = 0.0;
                                  AStack_57.duration.inited = 0;
                                  AStack_57.duration._21_3_ = 0;
                                  AStack_57.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                  AStack_57.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                  AStack_57.timeStamp.currentCryptoKey = 0;
                                  AStack_57.timeStamp.hiddenValue.b1 = 0;
                                  AStack_57.timeStamp.hiddenValue.b2 = 0;
                                  AStack_57.timeStamp.hiddenValue.b3 = 0;
                                  AStack_57.timeStamp.hiddenValue.b4 = 0;
                                  AStack_57.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                  AStack_57.timeStamp.fakeValue = 0.0;
                                  AStack_57.timeStamp.inited = 0;
                                  AStack_57.timeStamp._21_3_ = 0;
                                  AStack_57.persistant = 0;
                                  AStack_57._73_3_ = 0;
                                  AStack_57.lastTimeStamp = 0.0;
                                  AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_57,AvatarModifierPackageType__Enum_SpeedMat,AvatarModifierPackageAdditionPolicy__Enum_Renew,0.4,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                                  uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
                                  AStack_14.id = AStack_57.id;
                                  AStack_14._4_4_ = AStack_57._4_4_;
                                  AStack_14.duration.currentCryptoKey = AStack_57.duration.currentCryptoKey;
                                  AStack_14.duration.hiddenValue = AStack_57.duration.hiddenValue;
                                  AStack_14.duration.hiddenValueOld = AStack_57.duration.hiddenValueOld;
                                  AStack_14.duration.fakeValue = AStack_57.duration.fakeValue;
                                  AStack_14.duration.inited = AStack_57.duration.inited;
                                  AStack_14.duration._21_3_ = AStack_57.duration._21_3_;
                                  AStack_14.avatarModifiers = AStack_57.avatarModifiers;
                                  AStack_14.actionsToTakeVsTypes = AStack_57.actionsToTakeVsTypes;
                                  AStack_14.timeStamp.currentCryptoKey = AStack_57.timeStamp.currentCryptoKey;
                                  AStack_14.timeStamp.hiddenValue = AStack_57.timeStamp.hiddenValue;
                                  AStack_14.timeStamp.hiddenValueOld = AStack_57.timeStamp.hiddenValueOld;
                                  AStack_14.timeStamp.fakeValue = AStack_57.timeStamp.fakeValue;
                                  AStack_14.timeStamp.inited = AStack_57.timeStamp.inited;
                                  AStack_14.timeStamp._21_3_ = AStack_57.timeStamp._21_3_;
                                  AStack_14.persistant = AStack_57.persistant;
                                  AStack_14._73_3_ = AStack_57._73_3_;
                                  AStack_14.lastTimeStamp = AStack_57.lastTimeStamp;
                                  AStack_14.avatarModifierPackageType = AStack_57.avatarModifierPackageType;
                                  AStack_14.avatarModifierPackageAdditionPolicy = AStack_57.avatarModifierPackageAdditionPolicy;
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,AvatarModifierPackage]::Dictionary_2_System_Int32Enum_AvatarModifierPackage__TryInsert(this,0x17,&AStack_14,(InsertionBehavior__Enum)uVar13,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_->klass->rgctx_data[0x22].method);
                                  pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                  uStack_58 = AvatarModifierPackageFactory_Const(20.0,(MethodInfo *)0x0);
                                  iStack_59 = 2;
                                  iStack_60 = 0x1b;
                                  func_?(&uStack_58);
                                  if (pAVar7 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
                                  if ((int)pAVar7->max_length != 0) {
                                    pAVar7->vector[0].avatarModifierType = iStack_59;
                                    pAVar7->vector[0].avatarModifierEffect = iStack_60;
                                    *(undefined4 *)&pAVar7->vector[0].value = (undefined4)uStack_58;
                                    *(undefined4 *)((longlong)&pAVar7->vector[0].value + 4) = uStack_58._4_4_;
                                    func_?(&pAVar7->vector[0].value);
                                    AStack_61.id = 0;
                                    AStack_61._4_4_ = 0;
                                    AStack_61.duration.currentCryptoKey = 0;
                                    AStack_61.duration.hiddenValue.b1 = 0;
                                    AStack_61.duration.hiddenValue.b2 = 0;
                                    AStack_61.duration.hiddenValue.b3 = 0;
                                    AStack_61.duration.hiddenValue.b4 = 0;
                                    AStack_61.avatarModifierPackageType = 0;
                                    AStack_61.avatarModifierPackageAdditionPolicy = 0;
                                    AStack_61.duration.hiddenValueOld = (Byte__Array *)0x0;
                                    AStack_61.duration.fakeValue = 0.0;
                                    AStack_61.duration.inited = 0;
                                    AStack_61.duration._21_3_ = 0;
                                    AStack_61.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                    AStack_61.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                    AStack_61.timeStamp.currentCryptoKey = 0;
                                    AStack_61.timeStamp.hiddenValue.b1 = 0;
                                    AStack_61.timeStamp.hiddenValue.b2 = 0;
                                    AStack_61.timeStamp.hiddenValue.b3 = 0;
                                    AStack_61.timeStamp.hiddenValue.b4 = 0;
                                    AStack_61.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                    AStack_61.timeStamp.fakeValue = 0.0;
                                    AStack_61.timeStamp.inited = 0;
                                    AStack_61.timeStamp._21_3_ = 0;
                                    AStack_61.persistant = 0;
                                    AStack_61._73_3_ = 0;
                                    AStack_61.lastTimeStamp = 0.0;
                                    AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_61,AvatarModifierPackageType__Enum_CrumbleMat,AvatarModifierPackageAdditionPolicy__Enum_Renew,0.4,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                                    AStack_14.id = AStack_61.id;
                                    AStack_14._4_4_ = AStack_61._4_4_;
                                    AStack_14.duration.currentCryptoKey = AStack_61.duration.currentCryptoKey;
                                    AStack_14.duration.hiddenValue = AStack_61.duration.hiddenValue;
                                    AStack_14.duration.hiddenValueOld = AStack_61.duration.hiddenValueOld;
                                    AStack_14.duration.fakeValue = AStack_61.duration.fakeValue;
                                    AStack_14.duration.inited = AStack_61.duration.inited;
                                    AStack_14.duration._21_3_ = AStack_61.duration._21_3_;
                                    AStack_14.avatarModifiers = AStack_61.avatarModifiers;
                                    AStack_14.actionsToTakeVsTypes = AStack_61.actionsToTakeVsTypes;
                                    AStack_14.timeStamp.currentCryptoKey = AStack_61.timeStamp.currentCryptoKey;
                                    AStack_14.timeStamp.hiddenValue = AStack_61.timeStamp.hiddenValue;
                                    AStack_14.timeStamp.hiddenValueOld = AStack_61.timeStamp.hiddenValueOld;
                                    AStack_14.timeStamp.fakeValue = AStack_61.timeStamp.fakeValue;
                                    AStack_14.timeStamp.inited = AStack_61.timeStamp.inited;
                                    AStack_14.timeStamp._21_3_ = AStack_61.timeStamp._21_3_;
                                    AStack_14.persistant = AStack_61.persistant;
                                    AStack_14._73_3_ = AStack_61._73_3_;
                                    AStack_14.lastTimeStamp = AStack_61.lastTimeStamp;
                                    AStack_14.avatarModifierPackageType = AStack_61.avatarModifierPackageType;
                                    AStack_14.avatarModifierPackageAdditionPolicy = AStack_61.avatarModifierPackageAdditionPolicy;
                                    FUN_?(this,0x18,&AStack_14);
                                    pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                    uStack_62 = AvatarModifierPackageFactory_Const(25.0,(MethodInfo *)0x0);
                                    iStack_63 = 1;
                                    iStack_64 = 0x16;
                                    func_?(&uStack_62);
                                    if (pAVar7 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
                                    if ((int)pAVar7->max_length != 0) {
                                      pAVar7->vector[0].avatarModifierType = iStack_63;
                                      pAVar7->vector[0].avatarModifierEffect = iStack_64;
                                      *(undefined4 *)&pAVar7->vector[0].value = (undefined4)uStack_62;
                                      *(undefined4 *)((longlong)&pAVar7->vector[0].value + 4) = uStack_62._4_4_;
                                      func_?(&pAVar7->vector[0].value);
                                      AStack_65.id = 0;
                                      AStack_65._4_4_ = 0;
                                      AStack_65.duration.currentCryptoKey = 0;
                                      AStack_65.duration.hiddenValue.b1 = 0;
                                      AStack_65.duration.hiddenValue.b2 = 0;
                                      AStack_65.duration.hiddenValue.b3 = 0;
                                      AStack_65.duration.hiddenValue.b4 = 0;
                                      AStack_65.avatarModifierPackageType = 0;
                                      AStack_65.avatarModifierPackageAdditionPolicy = 0;
                                      AStack_65.duration.hiddenValueOld = (Byte__Array *)0x0;
                                      AStack_65.duration.fakeValue = 0.0;
                                      AStack_65.duration.inited = 0;
                                      AStack_65.duration._21_3_ = 0;
                                      AStack_65.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                      AStack_65.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                      AStack_65.timeStamp.currentCryptoKey = 0;
                                      AStack_65.timeStamp.hiddenValue.b1 = 0;
                                      AStack_65.timeStamp.hiddenValue.b2 = 0;
                                      AStack_65.timeStamp.hiddenValue.b3 = 0;
                                      AStack_65.timeStamp.hiddenValue.b4 = 0;
                                      AStack_65.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                      AStack_65.timeStamp.fakeValue = 0.0;
                                      AStack_65.timeStamp.inited = 0;
                                      AStack_65.timeStamp._21_3_ = 0;
                                      AStack_65.persistant = 0;
                                      AStack_65._73_3_ = 0;
                                      AStack_65.lastTimeStamp = 0.0;
                                      AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_65,AvatarModifierPackageType__Enum_Poison,AvatarModifierPackageAdditionPolicy__Enum_Renew,INFINITY,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                                      AStack_14.id = AStack_65.id;
                                      AStack_14._4_4_ = AStack_65._4_4_;
                                      AStack_14.duration.currentCryptoKey = AStack_65.duration.currentCryptoKey;
                                      AStack_14.duration.hiddenValue = AStack_65.duration.hiddenValue;
                                      AStack_14.duration.hiddenValueOld = AStack_65.duration.hiddenValueOld;
                                      AStack_14.duration.fakeValue = AStack_65.duration.fakeValue;
                                      AStack_14.duration.inited = AStack_65.duration.inited;
                                      AStack_14.duration._21_3_ = AStack_65.duration._21_3_;
                                      AStack_14.avatarModifiers = AStack_65.avatarModifiers;
                                      AStack_14.actionsToTakeVsTypes = AStack_65.actionsToTakeVsTypes;
                                      AStack_14.timeStamp.currentCryptoKey = AStack_65.timeStamp.currentCryptoKey;
                                      AStack_14.timeStamp.hiddenValue = AStack_65.timeStamp.hiddenValue;
                                      AStack_14.timeStamp.hiddenValueOld = AStack_65.timeStamp.hiddenValueOld;
                                      AStack_14.timeStamp.fakeValue = AStack_65.timeStamp.fakeValue;
                                      AStack_14.timeStamp.inited = AStack_65.timeStamp.inited;
                                      AStack_14.timeStamp._21_3_ = AStack_65.timeStamp._21_3_;
                                      AStack_14.persistant = AStack_65.persistant;
                                      AStack_14._73_3_ = AStack_65._73_3_;
                                      AStack_14.lastTimeStamp = AStack_65.lastTimeStamp;
                                      AStack_14.avatarModifierPackageType = AStack_65.avatarModifierPackageType;
                                      AStack_14.avatarModifierPackageAdditionPolicy = AStack_65.avatarModifierPackageAdditionPolicy;
                                      FUN_?(this,4,&AStack_14);
                                      pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                      uStack_66 = AvatarModifierPackageFactory_Const(2.0,(MethodInfo *)0x0);
                                      iStack_67 = 1;
                                      iStack_68 = 0xf;
                                      func_?(&uStack_66);
                                      if (pAVar7 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
                                      if ((int)pAVar7->max_length != 0) {
                                        pAVar7->vector[0].avatarModifierType = iStack_67;
                                        pAVar7->vector[0].avatarModifierEffect = iStack_68;
                                        *(undefined4 *)&pAVar7->vector[0].value = (undefined4)uStack_66;
                                        *(undefined4 *)((longlong)&pAVar7->vector[0].value + 4) = uStack_66._4_4_;
                                        func_?(&pAVar7->vector[0].value);
                                        uStack_69 = AvatarModifierPackageFactory_Const(2.0,(MethodInfo *)0x0);
                                        iStack_70 = 1;
                                        iStack_71 = 0x15;
                                        func_?(&uStack_69);
                                        if (1 < (uint)pAVar7->max_length) {
                                          pAVar7->vector[1].avatarModifierType = iStack_70;
                                          pAVar7->vector[1].avatarModifierEffect = iStack_71;
                                          *(undefined4 *)&pAVar7->vector[1].value = (undefined4)uStack_69;
                                          *(undefined4 *)((longlong)&pAVar7->vector[1].value + 4) = uStack_69._4_4_;
                                          func_?(&pAVar7->vector[1].value);
                                          pDVar72 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>);
                                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,GamePassesHighScoreList+HighScoreListData]::Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor(pDVar72,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__);
                                          if (pDVar72 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
                                            uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
                                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)pDVar72,4,2,(InsertionBehavior__Enum)uVar13,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_->klass->rgctx_data[0x22].method);
                                            AStack_73.id = 0;
                                            AStack_73._4_4_ = 0;
                                            AStack_73.duration.currentCryptoKey = 0;
                                            AStack_73.duration.hiddenValue.b1 = 0;
                                            AStack_73.duration.hiddenValue.b2 = 0;
                                            AStack_73.duration.hiddenValue.b3 = 0;
                                            AStack_73.duration.hiddenValue.b4 = 0;
                                            AStack_73.avatarModifierPackageType = 0;
                                            AStack_73.avatarModifierPackageAdditionPolicy = 0;
                                            AStack_73.duration.hiddenValueOld = (Byte__Array *)0x0;
                                            AStack_73.duration.fakeValue = 0.0;
                                            AStack_73.duration.inited = 0;
                                            AStack_73.duration._21_3_ = 0;
                                            AStack_73.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                            AStack_73.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                            AStack_73.timeStamp.currentCryptoKey = 0;
                                            AStack_73.timeStamp.hiddenValue.b1 = 0;
                                            AStack_73.timeStamp.hiddenValue.b2 = 0;
                                            AStack_73.timeStamp.hiddenValue.b3 = 0;
                                            AStack_73.timeStamp.hiddenValue.b4 = 0;
                                            AStack_73.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                            AStack_73.timeStamp.fakeValue = 0.0;
                                            AStack_73.timeStamp.inited = 0;
                                            AStack_73.timeStamp._21_3_ = 0;
                                            AStack_73.persistant = 0;
                                            AStack_73._73_3_ = 0;
                                            AStack_73.lastTimeStamp = 0.0;
                                            AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_73,AvatarModifierPackageType__Enum_HealingMat,AvatarModifierPackageAdditionPolicy__Enum_Renew,0.4,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)pDVar72,0,(MethodInfo *)0x0);
                                            AStack_14.id = AStack_73.id;
                                            AStack_14._4_4_ = AStack_73._4_4_;
                                            AStack_14.duration.currentCryptoKey = AStack_73.duration.currentCryptoKey;
                                            AStack_14.duration.hiddenValue = AStack_73.duration.hiddenValue;
                                            AStack_14.duration.hiddenValueOld = AStack_73.duration.hiddenValueOld;
                                            AStack_14.duration.fakeValue = AStack_73.duration.fakeValue;
                                            AStack_14.duration.inited = AStack_73.duration.inited;
                                            AStack_14.duration._21_3_ = AStack_73.duration._21_3_;
                                            AStack_14.avatarModifiers = AStack_73.avatarModifiers;
                                            AStack_14.actionsToTakeVsTypes = AStack_73.actionsToTakeVsTypes;
                                            AStack_14.timeStamp.currentCryptoKey = AStack_73.timeStamp.currentCryptoKey;
                                            AStack_14.timeStamp.hiddenValue = AStack_73.timeStamp.hiddenValue;
                                            AStack_14.timeStamp.hiddenValueOld = AStack_73.timeStamp.hiddenValueOld;
                                            AStack_14.timeStamp.fakeValue = AStack_73.timeStamp.fakeValue;
                                            AStack_14.timeStamp.inited = AStack_73.timeStamp.inited;
                                            AStack_14.timeStamp._21_3_ = AStack_73.timeStamp._21_3_;
                                            AStack_14.persistant = AStack_73.persistant;
                                            AStack_14._73_3_ = AStack_73._73_3_;
                                            AStack_14.lastTimeStamp = AStack_73.lastTimeStamp;
                                            AStack_14.avatarModifierPackageType = AStack_73.avatarModifierPackageType;
                                            AStack_14.avatarModifierPackageAdditionPolicy = AStack_73.avatarModifierPackageAdditionPolicy;
                                            FUN_?(this,0x15,&AStack_14);
                                            pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                            uStack_74 = AvatarModifierPackageFactory_Const(500.0,(MethodInfo *)0x0);
                                            iStack_75 = 1;
                                            iStack_76 = 0x17;
                                            func_?(&uStack_74);
                                            if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                              if ((int)pAVar7->max_length == 0) goto code_?;
                                              pAVar7->vector[0].avatarModifierType = iStack_75;
                                              pAVar7->vector[0].avatarModifierEffect = iStack_76;
                                              *(undefined4 *)&pAVar7->vector[0].value = (undefined4)uStack_74;
                                              *(undefined4 *)((longlong)&pAVar7->vector[0].value + 4) = uStack_74._4_4_;
                                              func_?(&pAVar7->vector[0].value);
                                              AStack_77.id = 0;
                                              AStack_77._4_4_ = 0;
                                              AStack_77.duration.currentCryptoKey = 0;
                                              AStack_77.duration.hiddenValue.b1 = 0;
                                              AStack_77.duration.hiddenValue.b2 = 0;
                                              AStack_77.duration.hiddenValue.b3 = 0;
                                              AStack_77.duration.hiddenValue.b4 = 0;
                                              AStack_77.avatarModifierPackageType = 0;
                                              AStack_77.avatarModifierPackageAdditionPolicy = 0;
                                              AStack_77.duration.hiddenValueOld = (Byte__Array *)0x0;
                                              AStack_77.duration.fakeValue = 0.0;
                                              AStack_77.duration.inited = 0;
                                              AStack_77.duration._21_3_ = 0;
                                              AStack_77.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                              AStack_77.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                              AStack_77.timeStamp.currentCryptoKey = 0;
                                              AStack_77.timeStamp.hiddenValue.b1 = 0;
                                              AStack_77.timeStamp.hiddenValue.b2 = 0;
                                              AStack_77.timeStamp.hiddenValue.b3 = 0;
                                              AStack_77.timeStamp.hiddenValue.b4 = 0;
                                              AStack_77.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                              AStack_77.timeStamp.fakeValue = 0.0;
                                              AStack_77.timeStamp.inited = 0;
                                              AStack_77.timeStamp._21_3_ = 0;
                                              AStack_77.persistant = 0;
                                              AStack_77._73_3_ = 0;
                                              AStack_77.lastTimeStamp = 0.0;
                                              AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_77,AvatarModifierPackageType__Enum_Lethal,AvatarModifierPackageAdditionPolicy__Enum_Renew,INFINITY,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                                              AStack_14.id = AStack_77.id;
                                              AStack_14._4_4_ = AStack_77._4_4_;
                                              AStack_14.duration.currentCryptoKey = AStack_77.duration.currentCryptoKey;
                                              AStack_14.duration.hiddenValue = AStack_77.duration.hiddenValue;
                                              AStack_14.duration.hiddenValueOld = AStack_77.duration.hiddenValueOld;
                                              AStack_14.duration.fakeValue = AStack_77.duration.fakeValue;
                                              AStack_14.duration.inited = AStack_77.duration.inited;
                                              AStack_14.duration._21_3_ = AStack_77.duration._21_3_;
                                              AStack_14.avatarModifiers = AStack_77.avatarModifiers;
                                              AStack_14.actionsToTakeVsTypes = AStack_77.actionsToTakeVsTypes;
                                              AStack_14.timeStamp.currentCryptoKey = AStack_77.timeStamp.currentCryptoKey;
                                              AStack_14.timeStamp.hiddenValue = AStack_77.timeStamp.hiddenValue;
                                              AStack_14.timeStamp.hiddenValueOld = AStack_77.timeStamp.hiddenValueOld;
                                              AStack_14.timeStamp.fakeValue = AStack_77.timeStamp.fakeValue;
                                              AStack_14.timeStamp.inited = AStack_77.timeStamp.inited;
                                              AStack_14.timeStamp._21_3_ = AStack_77.timeStamp._21_3_;
                                              AStack_14.persistant = AStack_77.persistant;
                                              AStack_14._73_3_ = AStack_77._73_3_;
                                              AStack_14.lastTimeStamp = AStack_77.lastTimeStamp;
                                              AStack_14.avatarModifierPackageType = AStack_77.avatarModifierPackageType;
                                              AStack_14.avatarModifierPackageAdditionPolicy = AStack_77.avatarModifierPackageAdditionPolicy;
                                              FUN_?(this,0x14,&AStack_14);
                                              pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                              uStack_78 = AvatarModifierPackageFactory_Const(150.0,(MethodInfo *)0x0);
                                              iStack_79 = 1;
                                              iStack_80 = 0xe;
                                              func_?(&uStack_78);
                                              if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                                if ((int)pAVar7->max_length == 0) goto code_?;
                                                pAVar7->vector[0].avatarModifierType = iStack_79;
                                                pAVar7->vector[0].avatarModifierEffect = iStack_80;
                                                *(undefined4 *)&pAVar7->vector[0].value = (undefined4)uStack_78;
                                                *(undefined4 *)((longlong)&pAVar7->vector[0].value + 4) = uStack_78._4_4_;
                                                func_?(&pAVar7->vector[0].value);
                                                AStack_81.id = 0;
                                                AStack_81._4_4_ = 0;
                                                AStack_81.duration.currentCryptoKey = 0;
                                                AStack_81.duration.hiddenValue.b1 = 0;
                                                AStack_81.duration.hiddenValue.b2 = 0;
                                                AStack_81.duration.hiddenValue.b3 = 0;
                                                AStack_81.duration.hiddenValue.b4 = 0;
                                                AStack_81.avatarModifierPackageType = 0;
                                                AStack_81.avatarModifierPackageAdditionPolicy = 0;
                                                AStack_81.duration.hiddenValueOld = (Byte__Array *)0x0;
                                                AStack_81.duration.fakeValue = 0.0;
                                                AStack_81.duration.inited = 0;
                                                AStack_81.duration._21_3_ = 0;
                                                AStack_81.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                AStack_81.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                                AStack_81.timeStamp.currentCryptoKey = 0;
                                                AStack_81.timeStamp.hiddenValue.b1 = 0;
                                                AStack_81.timeStamp.hiddenValue.b2 = 0;
                                                AStack_81.timeStamp.hiddenValue.b3 = 0;
                                                AStack_81.timeStamp.hiddenValue.b4 = 0;
                                                AStack_81.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                                AStack_81.timeStamp.fakeValue = 0.0;
                                                AStack_81.timeStamp.inited = 0;
                                                AStack_81.timeStamp._21_3_ = 0;
                                                AStack_81.persistant = 0;
                                                AStack_81._73_3_ = 0;
                                                AStack_81.lastTimeStamp = 0.0;
                                                AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_81,AvatarModifierPackageType__Enum_InstantDeath,AvatarModifierPackageAdditionPolicy__Enum_Renew,INFINITY,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                                                AStack_14.id = AStack_81.id;
                                                AStack_14._4_4_ = AStack_81._4_4_;
                                                AStack_14.duration.currentCryptoKey = AStack_81.duration.currentCryptoKey;
                                                AStack_14.duration.hiddenValue = AStack_81.duration.hiddenValue;
                                                AStack_14.duration.hiddenValueOld = AStack_81.duration.hiddenValueOld;
                                                AStack_14.duration.fakeValue = AStack_81.duration.fakeValue;
                                                AStack_14.duration.inited = AStack_81.duration.inited;
                                                AStack_14.duration._21_3_ = AStack_81.duration._21_3_;
                                                AStack_14.avatarModifiers = AStack_81.avatarModifiers;
                                                AStack_14.actionsToTakeVsTypes = AStack_81.actionsToTakeVsTypes;
                                                AStack_14.timeStamp.currentCryptoKey = AStack_81.timeStamp.currentCryptoKey;
                                                AStack_14.timeStamp.hiddenValue = AStack_81.timeStamp.hiddenValue;
                                                AStack_14.timeStamp.hiddenValueOld = AStack_81.timeStamp.hiddenValueOld;
                                                AStack_14.timeStamp.fakeValue = AStack_81.timeStamp.fakeValue;
                                                AStack_14.timeStamp.inited = AStack_81.timeStamp.inited;
                                                AStack_14.timeStamp._21_3_ = AStack_81.timeStamp._21_3_;
                                                AStack_14.persistant = AStack_81.persistant;
                                                AStack_14._73_3_ = AStack_81._73_3_;
                                                AStack_14.lastTimeStamp = AStack_81.lastTimeStamp;
                                                AStack_14.avatarModifierPackageType = AStack_81.avatarModifierPackageType;
                                                AStack_14.avatarModifierPackageAdditionPolicy = AStack_81.avatarModifierPackageAdditionPolicy;
                                                FUN_?(this,6,&AStack_14);
                                                pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                uStack_82 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
                                                iStack_83 = 2;
                                                iStack_84 = 0x12;
                                                func_?(&uStack_82);
                                                if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                                  if ((int)pAVar7->max_length == 0) goto code_?;
                                                  pAVar7->vector[0].avatarModifierType = iStack_83;
                                                  pAVar7->vector[0].avatarModifierEffect = iStack_84;
                                                  *(undefined4 *)&pAVar7->vector[0].value = (undefined4)uStack_82;
                                                  *(undefined4 *)((longlong)&pAVar7->vector[0].value + 4) = uStack_82._4_4_;
                                                  func_?(&pAVar7->vector[0].value);
                                                  AStack_85.id = 0;
                                                  AStack_85._4_4_ = 0;
                                                  AStack_85.duration.currentCryptoKey = 0;
                                                  AStack_85.duration.hiddenValue.b1 = 0;
                                                  AStack_85.duration.hiddenValue.b2 = 0;
                                                  AStack_85.duration.hiddenValue.b3 = 0;
                                                  AStack_85.duration.hiddenValue.b4 = 0;
                                                  AStack_85.avatarModifierPackageType = 0;
                                                  AStack_85.avatarModifierPackageAdditionPolicy = 0;
                                                  AStack_85.duration.hiddenValueOld = (Byte__Array *)0x0;
                                                  AStack_85.duration.fakeValue = 0.0;
                                                  AStack_85.duration.inited = 0;
                                                  AStack_85.duration._21_3_ = 0;
                                                  AStack_85.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                  AStack_85.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                                  AStack_85.timeStamp.currentCryptoKey = 0;
                                                  AStack_85.timeStamp.hiddenValue.b1 = 0;
                                                  AStack_85.timeStamp.hiddenValue.b2 = 0;
                                                  AStack_85.timeStamp.hiddenValue.b3 = 0;
                                                  AStack_85.timeStamp.hiddenValue.b4 = 0;
                                                  AStack_85.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                                  AStack_85.timeStamp.fakeValue = 0.0;
                                                  AStack_85.timeStamp.inited = 0;
                                                  AStack_85.timeStamp._21_3_ = 0;
                                                  AStack_85.persistant = 0;
                                                  AStack_85._73_3_ = 0;
                                                  AStack_85.lastTimeStamp = 0.0;
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_85,AvatarModifierPackageType__Enum_WallJump,AvatarModifierPackageAdditionPolicy__Enum_Renew,0.2,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                                                  AStack_14.id = AStack_85.id;
                                                  AStack_14._4_4_ = AStack_85._4_4_;
                                                  AStack_14.duration.currentCryptoKey = AStack_85.duration.currentCryptoKey;
                                                  AStack_14.duration.hiddenValue = AStack_85.duration.hiddenValue;
                                                  AStack_14.duration.hiddenValueOld = AStack_85.duration.hiddenValueOld;
                                                  AStack_14.duration.fakeValue = AStack_85.duration.fakeValue;
                                                  AStack_14.duration.inited = AStack_85.duration.inited;
                                                  AStack_14.duration._21_3_ = AStack_85.duration._21_3_;
                                                  AStack_14.avatarModifiers = AStack_85.avatarModifiers;
                                                  AStack_14.actionsToTakeVsTypes = AStack_85.actionsToTakeVsTypes;
                                                  AStack_14.timeStamp.currentCryptoKey = AStack_85.timeStamp.currentCryptoKey;
                                                  AStack_14.timeStamp.hiddenValue = AStack_85.timeStamp.hiddenValue;
                                                  AStack_14.timeStamp.hiddenValueOld = AStack_85.timeStamp.hiddenValueOld;
                                                  AStack_14.timeStamp.fakeValue = AStack_85.timeStamp.fakeValue;
                                                  AStack_14.timeStamp.inited = AStack_85.timeStamp.inited;
                                                  AStack_14.timeStamp._21_3_ = AStack_85.timeStamp._21_3_;
                                                  AStack_14.persistant = AStack_85.persistant;
                                                  AStack_14._73_3_ = AStack_85._73_3_;
                                                  AStack_14.lastTimeStamp = AStack_85.lastTimeStamp;
                                                  AStack_14.avatarModifierPackageType = AStack_85.avatarModifierPackageType;
                                                  AStack_14.avatarModifierPackageAdditionPolicy = AStack_85.avatarModifierPackageAdditionPolicy;
                                                  FUN_?(this,5,&AStack_14);
                                                  pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                  uStack_86 = AvatarModifierPackageFactory_Const(0.0,(MethodInfo *)0x0);
                                                  iStack_87 = 2;
                                                  iStack_88 = 0xc;
                                                  func_?(&uStack_86);
                                                  if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                                    if ((int)pAVar7->max_length == 0) goto code_?;
                                                    pAVar7->vector[0].avatarModifierType = iStack_87;
                                                    pAVar7->vector[0].avatarModifierEffect = iStack_88;
                                                    *(undefined4 *)&pAVar7->vector[0].value = (undefined4)uStack_86;
                                                    *(undefined4 *)((longlong)&pAVar7->vector[0].value + 4) = uStack_86._4_4_;
                                                    func_?(&pAVar7->vector[0].value);
                                                    AStack_89.id = 0;
                                                    AStack_89._4_4_ = 0;
                                                    AStack_89.duration.currentCryptoKey = 0;
                                                    AStack_89.duration.hiddenValue.b1 = 0;
                                                    AStack_89.duration.hiddenValue.b2 = 0;
                                                    AStack_89.duration.hiddenValue.b3 = 0;
                                                    AStack_89.duration.hiddenValue.b4 = 0;
                                                    AStack_89.avatarModifierPackageType = 0;
                                                    AStack_89.avatarModifierPackageAdditionPolicy = 0;
                                                    AStack_89.duration.hiddenValueOld = (Byte__Array *)0x0;
                                                    AStack_89.duration.fakeValue = 0.0;
                                                    AStack_89.duration.inited = 0;
                                                    AStack_89.duration._21_3_ = 0;
                                                    AStack_89.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                    AStack_89.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                                    AStack_89.timeStamp.currentCryptoKey = 0;
                                                    AStack_89.timeStamp.hiddenValue.b1 = 0;
                                                    AStack_89.timeStamp.hiddenValue.b2 = 0;
                                                    AStack_89.timeStamp.hiddenValue.b3 = 0;
                                                    AStack_89.timeStamp.hiddenValue.b4 = 0;
                                                    AStack_89.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                                    AStack_89.timeStamp.fakeValue = 0.0;
                                                    AStack_89.timeStamp.inited = 0;
                                                    AStack_89.timeStamp._21_3_ = 0;
                                                    AStack_89.persistant = 0;
                                                    AStack_89._73_3_ = 0;
                                                    AStack_89.lastTimeStamp = 0.0;
                                                    AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_89,AvatarModifierPackageType__Enum_NoFriction,AvatarModifierPackageAdditionPolicy__Enum_Renew,0.2,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                                                    AStack_14.id = AStack_89.id;
                                                    AStack_14._4_4_ = AStack_89._4_4_;
                                                    AStack_14.duration.currentCryptoKey = AStack_89.duration.currentCryptoKey;
                                                    AStack_14.duration.hiddenValue = AStack_89.duration.hiddenValue;
                                                    AStack_14.duration.hiddenValueOld = AStack_89.duration.hiddenValueOld;
                                                    AStack_14.duration.fakeValue = AStack_89.duration.fakeValue;
                                                    AStack_14.duration.inited = AStack_89.duration.inited;
                                                    AStack_14.duration._21_3_ = AStack_89.duration._21_3_;
                                                    AStack_14.avatarModifiers = AStack_89.avatarModifiers;
                                                    AStack_14.actionsToTakeVsTypes = AStack_89.actionsToTakeVsTypes;
                                                    AStack_14.timeStamp.currentCryptoKey = AStack_89.timeStamp.currentCryptoKey;
                                                    AStack_14.timeStamp.hiddenValue = AStack_89.timeStamp.hiddenValue;
                                                    AStack_14.timeStamp.hiddenValueOld = AStack_89.timeStamp.hiddenValueOld;
                                                    AStack_14.timeStamp.fakeValue = AStack_89.timeStamp.fakeValue;
                                                    AStack_14.timeStamp.inited = AStack_89.timeStamp.inited;
                                                    AStack_14.timeStamp._21_3_ = AStack_89.timeStamp._21_3_;
                                                    AStack_14.persistant = AStack_89.persistant;
                                                    AStack_14._73_3_ = AStack_89._73_3_;
                                                    AStack_14.lastTimeStamp = AStack_89.lastTimeStamp;
                                                    AStack_14.avatarModifierPackageType = AStack_89.avatarModifierPackageType;
                                                    AStack_14.avatarModifierPackageAdditionPolicy = AStack_89.avatarModifierPackageAdditionPolicy;
                                                    FUN_?(this,7,&AStack_14);
                                                    pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                    uStack_90 = AvatarModifierPackageFactory_Const(25.0,(MethodInfo *)0x0);
                                                    uStack_91 = 1;
                                                    uStack_92 = 0x13;
                                                    func_?(&uStack_90);
                                                    if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                                      uStack_93 = uStack_91;
                                                      uStack_94 = uStack_92;
                                                      uStack_95 = (undefined4)uStack_90;
                                                      uStack_96 = uStack_90._4_4_;
                                                      FUN_?(pAVar7,0,&uStack_93);
                                                      AStack_97.id = 0;
                                                      AStack_97._4_4_ = 0;
                                                      AStack_97.duration.currentCryptoKey = 0;
                                                      AStack_97.duration.hiddenValue.b1 = 0;
                                                      AStack_97.duration.hiddenValue.b2 = 0;
                                                      AStack_97.duration.hiddenValue.b3 = 0;
                                                      AStack_97.duration.hiddenValue.b4 = 0;
                                                      AStack_97.avatarModifierPackageType = 0;
                                                      AStack_97.avatarModifierPackageAdditionPolicy = 0;
                                                      AStack_97.duration.hiddenValueOld = (Byte__Array *)0x0;
                                                      AStack_97.duration.fakeValue = 0.0;
                                                      AStack_97.duration.inited = 0;
                                                      AStack_97.duration._21_3_ = 0;
                                                      AStack_97.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                      AStack_97.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                                      AStack_97.timeStamp.currentCryptoKey = 0;
                                                      AStack_97.timeStamp.hiddenValue.b1 = 0;
                                                      AStack_97.timeStamp.hiddenValue.b2 = 0;
                                                      AStack_97.timeStamp.hiddenValue.b3 = 0;
                                                      AStack_97.timeStamp.hiddenValue.b4 = 0;
                                                      AStack_97.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                                      AStack_97.timeStamp.fakeValue = 0.0;
                                                      AStack_97.timeStamp.inited = 0;
                                                      AStack_97.timeStamp._21_3_ = 0;
                                                      AStack_97.persistant = 0;
                                                      AStack_97._73_3_ = 0;
                                                      AStack_97.lastTimeStamp = 0.0;
                                                      AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_97,AvatarModifierPackageType__Enum_FlamerBurn,AvatarModifierPackageAdditionPolicy__Enum_Renew,0.5,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                                                      AStack_14.id = AStack_97.id;
                                                      AStack_14._4_4_ = AStack_97._4_4_;
                                                      AStack_14.duration.currentCryptoKey = AStack_97.duration.currentCryptoKey;
                                                      AStack_14.duration.hiddenValue = AStack_97.duration.hiddenValue;
                                                      AStack_14.duration.hiddenValueOld = AStack_97.duration.hiddenValueOld;
                                                      AStack_14.duration.fakeValue = AStack_97.duration.fakeValue;
                                                      AStack_14.duration.inited = AStack_97.duration.inited;
                                                      AStack_14.duration._21_3_ = AStack_97.duration._21_3_;
                                                      AStack_14.avatarModifiers = AStack_97.avatarModifiers;
                                                      AStack_14.actionsToTakeVsTypes = AStack_97.actionsToTakeVsTypes;
                                                      AStack_14.timeStamp.currentCryptoKey = AStack_97.timeStamp.currentCryptoKey;
                                                      AStack_14.timeStamp.hiddenValue = AStack_97.timeStamp.hiddenValue;
                                                      AStack_14.timeStamp.hiddenValueOld = AStack_97.timeStamp.hiddenValueOld;
                                                      AStack_14.timeStamp.fakeValue = AStack_97.timeStamp.fakeValue;
                                                      AStack_14.timeStamp.inited = AStack_97.timeStamp.inited;
                                                      AStack_14.timeStamp._21_3_ = AStack_97.timeStamp._21_3_;
                                                      AStack_14.persistant = AStack_97.persistant;
                                                      AStack_14._73_3_ = AStack_97._73_3_;
                                                      AStack_14.lastTimeStamp = AStack_97.lastTimeStamp;
                                                      AStack_14.avatarModifierPackageType = AStack_97.avatarModifierPackageType;
                                                      AStack_14.avatarModifierPackageAdditionPolicy = AStack_97.avatarModifierPackageAdditionPolicy;
                                                      FUN_?(this,8,&AStack_14);
                                                      pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                      uStack_98 = AvatarModifierPackageFactory_Const(0.5,(MethodInfo *)0x0);
                                                      uStack_99 = 0;
                                                      func_?(&uStack_98);
                                                      if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                                        uStack_93 = (undefined4)uStack_99;
                                                        uStack_94 = uStack_99._4_4_;
                                                        uStack_95 = (undefined4)uStack_98;
                                                        uStack_96 = uStack_98._4_4_;
                                                        FUN_?(pAVar7,0,&uStack_93);
                                                        uStack_100 = AvatarModifierPackageFactory_Const(0.95,(MethodInfo *)0x0);
                                                        uStack_101 = 0;
                                                        uStack_102 = 4;
                                                        func_?(&uStack_100);
                                                        uStack_93 = uStack_101;
                                                        uStack_94 = uStack_102;
                                                        uStack_95 = (undefined4)uStack_100;
                                                        uStack_96 = uStack_100._4_4_;
                                                        FUN_?(pAVar7,1,&uStack_93);
                                                        AStack_103.id = 0;
                                                        AStack_103._4_4_ = 0;
                                                        AStack_103.duration.currentCryptoKey = 0;
                                                        AStack_103.duration.hiddenValue.b1 = 0;
                                                        AStack_103.duration.hiddenValue.b2 = 0;
                                                        AStack_103.duration.hiddenValue.b3 = 0;
                                                        AStack_103.duration.hiddenValue.b4 = 0;
                                                        AStack_103.avatarModifierPackageType = 0;
                                                        AStack_103.avatarModifierPackageAdditionPolicy = 0;
                                                        AStack_103.duration.hiddenValueOld = (Byte__Array *)0x0;
                                                        AStack_103.duration.fakeValue = 0.0;
                                                        AStack_103.duration.inited = 0;
                                                        AStack_103.duration._21_3_ = 0;
                                                        AStack_103.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                        AStack_103.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                                        AStack_103.timeStamp.currentCryptoKey = 0;
                                                        AStack_103.timeStamp.hiddenValue.b1 = 0;
                                                        AStack_103.timeStamp.hiddenValue.b2 = 0;
                                                        AStack_103.timeStamp.hiddenValue.b3 = 0;
                                                        AStack_103.timeStamp.hiddenValue.b4 = 0;
                                                        AStack_103.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                                        AStack_103.timeStamp.fakeValue = 0.0;
                                                        AStack_103.timeStamp.inited = 0;
                                                        AStack_103.timeStamp._21_3_ = 0;
                                                        AStack_103.persistant = 0;
                                                        AStack_103._73_3_ = 0;
                                                        AStack_103.lastTimeStamp = 0.0;
                                                        AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_103,AvatarModifierPackageType__Enum_Underwater,AvatarModifierPackageAdditionPolicy__Enum_Renew,10.0,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                                                        AStack_14.id = AStack_103.id;
                                                        AStack_14._4_4_ = AStack_103._4_4_;
                                                        AStack_14.duration.currentCryptoKey = AStack_103.duration.currentCryptoKey;
                                                        AStack_14.duration.hiddenValue = AStack_103.duration.hiddenValue;
                                                        AStack_14.duration.hiddenValueOld = AStack_103.duration.hiddenValueOld;
                                                        AStack_14.duration.fakeValue = AStack_103.duration.fakeValue;
                                                        AStack_14.duration.inited = AStack_103.duration.inited;
                                                        AStack_14.duration._21_3_ = AStack_103.duration._21_3_;
                                                        AStack_14.avatarModifiers = AStack_103.avatarModifiers;
                                                        AStack_14.actionsToTakeVsTypes = AStack_103.actionsToTakeVsTypes;
                                                        AStack_14.timeStamp.currentCryptoKey = AStack_103.timeStamp.currentCryptoKey;
                                                        AStack_14.timeStamp.hiddenValue = AStack_103.timeStamp.hiddenValue;
                                                        AStack_14.timeStamp.hiddenValueOld = AStack_103.timeStamp.hiddenValueOld;
                                                        AStack_14.timeStamp.fakeValue = AStack_103.timeStamp.fakeValue;
                                                        AStack_14.timeStamp.inited = AStack_103.timeStamp.inited;
                                                        AStack_14.timeStamp._21_3_ = AStack_103.timeStamp._21_3_;
                                                        AStack_14.persistant = AStack_103.persistant;
                                                        AStack_14._73_3_ = AStack_103._73_3_;
                                                        AStack_14.lastTimeStamp = AStack_103.lastTimeStamp;
                                                        AStack_14.avatarModifierPackageType = AStack_103.avatarModifierPackageType;
                                                        AStack_14.avatarModifierPackageAdditionPolicy = AStack_103.avatarModifierPackageAdditionPolicy;
                                                        FUN_?(this,9,&AStack_14);
                                                        pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                        uStack_104 = AvatarModifierPackageFactory_Const(0.0,(MethodInfo *)0x0);
                                                        uStack_105 = 2;
                                                        uStack_106 = 0xc;
                                                        func_?(&uStack_104);
                                                        if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                                          uStack_93 = uStack_105;
                                                          uStack_94 = uStack_106;
                                                          uStack_95 = (undefined4)uStack_104;
                                                          uStack_96 = uStack_104._4_4_;
                                                          FUN_?(pAVar7,0,&uStack_93);
                                                          uStack_107 = AvatarModifierPackageFactory_Const(0.1,(MethodInfo *)0x0);
                                                          uStack_108 = 0;
                                                          uStack_109 = 2;
                                                          func_?(&uStack_107);
                                                          uStack_93 = uStack_108;
                                                          uStack_94 = uStack_109;
                                                          uStack_95 = (undefined4)uStack_107;
                                                          uStack_96 = uStack_107._4_4_;
                                                          FUN_?(pAVar7,1,&uStack_93);
                                                          uStack_110 = AvatarModifierPackageFactory_Const(0.4,(MethodInfo *)0x0);
                                                          uStack_111 = 0;
                                                          uStack_112 = 3;
                                                          func_?(&uStack_110);
                                                          uStack_93 = uStack_111;
                                                          uStack_94 = uStack_112;
                                                          uStack_95 = (undefined4)uStack_110;
                                                          uStack_96 = uStack_110._4_4_;
                                                          FUN_?(pAVar7,2,&uStack_93);
                                                          AStack_113.id = 0;
                                                          AStack_113._4_4_ = 0;
                                                          AStack_113.duration.currentCryptoKey = 0;
                                                          AStack_113.duration.hiddenValue.b1 = 0;
                                                          AStack_113.duration.hiddenValue.b2 = 0;
                                                          AStack_113.duration.hiddenValue.b3 = 0;
                                                          AStack_113.duration.hiddenValue.b4 = 0;
                                                          AStack_113.avatarModifierPackageType = 0;
                                                          AStack_113.avatarModifierPackageAdditionPolicy = 0;
                                                          AStack_113.duration.hiddenValueOld = (Byte__Array *)0x0;
                                                          AStack_113.duration.fakeValue = 0.0;
                                                          AStack_113.duration.inited = 0;
                                                          AStack_113.duration._21_3_ = 0;
                                                          AStack_113.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                          AStack_113.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                                          AStack_113.timeStamp.currentCryptoKey = 0;
                                                          AStack_113.timeStamp.hiddenValue.b1 = 0;
                                                          AStack_113.timeStamp.hiddenValue.b2 = 0;
                                                          AStack_113.timeStamp.hiddenValue.b3 = 0;
                                                          AStack_113.timeStamp.hiddenValue.b4 = 0;
                                                          AStack_113.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                                          AStack_113.timeStamp.fakeValue = 0.0;
                                                          AStack_113.timeStamp.inited = 0;
                                                          AStack_113.timeStamp._21_3_ = 0;
                                                          AStack_113.persistant = 0;
                                                          AStack_113._73_3_ = 0;
                                                          AStack_113.lastTimeStamp = 0.0;
                                                          AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_113,AvatarModifierPackageType__Enum_Frozen,AvatarModifierPackageAdditionPolicy__Enum_Renew,4.2,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                                                          AStack_14.id = AStack_113.id;
                                                          AStack_14._4_4_ = AStack_113._4_4_;
                                                          AStack_14.duration.currentCryptoKey = AStack_113.duration.currentCryptoKey;
                                                          AStack_14.duration.hiddenValue = AStack_113.duration.hiddenValue;
                                                          AStack_14.duration.hiddenValueOld = AStack_113.duration.hiddenValueOld;
                                                          AStack_14.duration.fakeValue = AStack_113.duration.fakeValue;
                                                          AStack_14.duration.inited = AStack_113.duration.inited;
                                                          AStack_14.duration._21_3_ = AStack_113.duration._21_3_;
                                                          AStack_14.avatarModifiers = AStack_113.avatarModifiers;
                                                          AStack_14.actionsToTakeVsTypes = AStack_113.actionsToTakeVsTypes;
                                                          AStack_14.timeStamp.currentCryptoKey = AStack_113.timeStamp.currentCryptoKey;
                                                          AStack_14.timeStamp.hiddenValue = AStack_113.timeStamp.hiddenValue;
                                                          AStack_14.timeStamp.hiddenValueOld = AStack_113.timeStamp.hiddenValueOld;
                                                          AStack_14.timeStamp.fakeValue = AStack_113.timeStamp.fakeValue;
                                                          AStack_14.timeStamp.inited = AStack_113.timeStamp.inited;
                                                          AStack_14.timeStamp._21_3_ = AStack_113.timeStamp._21_3_;
                                                          AStack_14.persistant = AStack_113.persistant;
                                                          AStack_14._73_3_ = AStack_113._73_3_;
                                                          AStack_14.lastTimeStamp = AStack_113.lastTimeStamp;
                                                          AStack_14.avatarModifierPackageType = AStack_113.avatarModifierPackageType;
                                                          AStack_14.avatarModifierPackageAdditionPolicy = AStack_113.avatarModifierPackageAdditionPolicy;
                                                          FUN_?(this,10,&AStack_14);
                                                          pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                          uStack_114 = AvatarModifierPackageFactory_Const(3.0,(MethodInfo *)0x0);
                                                          uStack_115 = 0;
                                                          uStack_116 = 3;
                                                          func_?(&uStack_114);
                                                          if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                                            uStack_93 = uStack_115;
                                                            uStack_94 = uStack_116;
                                                            uStack_95 = (undefined4)uStack_114;
                                                            uStack_96 = uStack_114._4_4_;
                                                            FUN_?(pAVar7,0,&uStack_93);
                                                            uStack_117 = AvatarModifierPackageFactory_Const(20.0,(MethodInfo *)0x0);
                                                            uStack_118 = 0;
                                                            uStack_119 = 0x14;
                                                            func_?(&uStack_117);
                                                            uStack_93 = uStack_118;
                                                            uStack_94 = uStack_119;
                                                            uStack_95 = (undefined4)uStack_117;
                                                            uStack_96 = uStack_117._4_4_;
                                                            FUN_?(pAVar7,1,&uStack_93);
                                                            AStack_120.id = 0;
                                                            AStack_120._4_4_ = 0;
                                                            AStack_120.duration.currentCryptoKey = 0;
                                                            AStack_120.duration.hiddenValue.b1 = 0;
                                                            AStack_120.duration.hiddenValue.b2 = 0;
                                                            AStack_120.duration.hiddenValue.b3 = 0;
                                                            AStack_120.duration.hiddenValue.b4 = 0;
                                                            AStack_120.avatarModifierPackageType = 0;
                                                            AStack_120.avatarModifierPackageAdditionPolicy = 0;
                                                            AStack_120.duration.hiddenValueOld = (Byte__Array *)0x0;
                                                            AStack_120.duration.fakeValue = 0.0;
                                                            AStack_120.duration.inited = 0;
                                                            AStack_120.duration._21_3_ = 0;
                                                            AStack_120.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                            AStack_120.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                                            AStack_120.timeStamp.currentCryptoKey = 0;
                                                            AStack_120.timeStamp.hiddenValue.b1 = 0;
                                                            AStack_120.timeStamp.hiddenValue.b2 = 0;
                                                            AStack_120.timeStamp.hiddenValue.b3 = 0;
                                                            AStack_120.timeStamp.hiddenValue.b4 = 0;
                                                            AStack_120.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                                            AStack_120.timeStamp.fakeValue = 0.0;
                                                            AStack_120.timeStamp.inited = 0;
                                                            AStack_120.timeStamp._21_3_ = 0;
                                                            AStack_120.persistant = 0;
                                                            AStack_120._73_3_ = 0;
                                                            AStack_120.lastTimeStamp = 0.0;
                                                            AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_120,AvatarModifierPackageType__Enum_NinjaRun,AvatarModifierPackageAdditionPolicy__Enum_Renew,7.0,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                                                            AStack_14.id = AStack_120.id;
                                                            AStack_14._4_4_ = AStack_120._4_4_;
                                                            AStack_14.duration.currentCryptoKey = AStack_120.duration.currentCryptoKey;
                                                            AStack_14.duration.hiddenValue = AStack_120.duration.hiddenValue;
                                                            AStack_14.duration.hiddenValueOld = AStack_120.duration.hiddenValueOld;
                                                            AStack_14.duration.fakeValue = AStack_120.duration.fakeValue;
                                                            AStack_14.duration.inited = AStack_120.duration.inited;
                                                            AStack_14.duration._21_3_ = AStack_120.duration._21_3_;
                                                            AStack_14.avatarModifiers = AStack_120.avatarModifiers;
                                                            AStack_14.actionsToTakeVsTypes = AStack_120.actionsToTakeVsTypes;
                                                            AStack_14.timeStamp.currentCryptoKey = AStack_120.timeStamp.currentCryptoKey;
                                                            AStack_14.timeStamp.hiddenValue = AStack_120.timeStamp.hiddenValue;
                                                            AStack_14.timeStamp.hiddenValueOld = AStack_120.timeStamp.hiddenValueOld;
                                                            AStack_14.timeStamp.fakeValue = AStack_120.timeStamp.fakeValue;
                                                            AStack_14.timeStamp.inited = AStack_120.timeStamp.inited;
                                                            AStack_14.timeStamp._21_3_ = AStack_120.timeStamp._21_3_;
                                                            AStack_14.persistant = AStack_120.persistant;
                                                            AStack_14._73_3_ = AStack_120._73_3_;
                                                            AStack_14.lastTimeStamp = AStack_120.lastTimeStamp;
                                                            AStack_14.avatarModifierPackageType = AStack_120.avatarModifierPackageType;
                                                            AStack_14.avatarModifierPackageAdditionPolicy = AStack_120.avatarModifierPackageAdditionPolicy;
                                                            FUN_?(this,0xb,&AStack_14);
                                                            pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                            uStack_121 = AvatarModifierPackageFactory_Const(0.3,(MethodInfo *)0x0);
                                                            uStack_122 = 0;
                                                            uStack_123 = 3;
                                                            func_?(&uStack_121);
                                                            if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                                              uStack_93 = uStack_122;
                                                              uStack_94 = uStack_123;
                                                              uStack_95 = (undefined4)uStack_121;
                                                              uStack_96 = uStack_121._4_4_;
                                                              FUN_?(pAVar7,0,&uStack_93);
                                                              AStack_124.id = 0;
                                                              AStack_124._4_4_ = 0;
                                                              AStack_124.duration.currentCryptoKey = 0;
                                                              AStack_124.duration.hiddenValue.b1 = 0;
                                                              AStack_124.duration.hiddenValue.b2 = 0;
                                                              AStack_124.duration.hiddenValue.b3 = 0;
                                                              AStack_124.duration.hiddenValue.b4 = 0;
                                                              AStack_124.avatarModifierPackageType = 0;
                                                              AStack_124.avatarModifierPackageAdditionPolicy = 0;
                                                              AStack_124.duration.hiddenValueOld = (Byte__Array *)0x0;
                                                              AStack_124.duration.fakeValue = 0.0;
                                                              AStack_124.duration.inited = 0;
                                                              AStack_124.duration._21_3_ = 0;
                                                              AStack_124.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                              AStack_124.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                                              AStack_124.timeStamp.currentCryptoKey = 0;
                                                              AStack_124.timeStamp.hiddenValue.b1 = 0;
                                                              AStack_124.timeStamp.hiddenValue.b2 = 0;
                                                              AStack_124.timeStamp.hiddenValue.b3 = 0;
                                                              AStack_124.timeStamp.hiddenValue.b4 = 0;
                                                              AStack_124.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                                              AStack_124.timeStamp.fakeValue = 0.0;
                                                              AStack_124.timeStamp.inited = 0;
                                                              AStack_124.timeStamp._21_3_ = 0;
                                                              AStack_124.persistant = 0;
                                                              AStack_124._73_3_ = 0;
                                                              AStack_124.lastTimeStamp = 0.0;
                                                              AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_124,AvatarModifierPackageType__Enum_TimeAttackFlagDebriefSlow,AvatarModifierPackageAdditionPolicy__Enum_Renew,7.0,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                                                              AStack_14.duration.hiddenValueOld = AStack_124.duration.hiddenValueOld;
                                                              AStack_14.duration.fakeValue = AStack_124.duration.fakeValue;
                                                              AStack_14.duration.inited = AStack_124.duration.inited;
                                                              AStack_14.duration._21_3_ = AStack_124.duration._21_3_;
                                                              AStack_14.timeStamp.currentCryptoKey = AStack_124.timeStamp.currentCryptoKey;
                                                              AStack_14.timeStamp.hiddenValue = AStack_124.timeStamp.hiddenValue;
                                                              AStack_14.timeStamp.hiddenValueOld = AStack_124.timeStamp.hiddenValueOld;
                                                              AStack_14.id = AStack_124.id;
                                                              AStack_14._4_4_ = AStack_124._4_4_;
                                                              AStack_14.duration.currentCryptoKey = AStack_124.duration.currentCryptoKey;
                                                              AStack_14.duration.hiddenValue = AStack_124.duration.hiddenValue;
                                                              AStack_14.avatarModifierPackageType = AStack_124.avatarModifierPackageType;
                                                              AStack_14.avatarModifierPackageAdditionPolicy = AStack_124.avatarModifierPackageAdditionPolicy;
                                                              AStack_14.avatarModifiers = AStack_124.avatarModifiers;
                                                              AStack_14.actionsToTakeVsTypes = AStack_124.actionsToTakeVsTypes;
                                                              AStack_14.timeStamp.fakeValue = AStack_124.timeStamp.fakeValue;
                                                              AStack_14.timeStamp.inited = AStack_124.timeStamp.inited;
                                                              AStack_14.timeStamp._21_3_ = AStack_124.timeStamp._21_3_;
                                                              AStack_14.persistant = AStack_124.persistant;
                                                              AStack_14._73_3_ = AStack_124._73_3_;
                                                              AStack_14.lastTimeStamp = AStack_124.lastTimeStamp;
                                                              FUN_?(this,0x13,&AStack_14);
                                                              pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                              uStack_125 = AvatarModifierPackageFactory_Const(0.4,(MethodInfo *)0x0);
                                                              uStack_126 = 0;
                                                              uStack_127 = 3;
                                                              func_?(&uStack_125);
                                                              if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                                                uStack_93 = uStack_126;
                                                                uStack_94 = uStack_127;
                                                                uStack_95 = (undefined4)uStack_125;
                                                                uStack_96 = uStack_125._4_4_;
                                                                FUN_?(pAVar7,0,&uStack_93);
                                                                uStack_128 = AvatarModifierPackageFactory_Const(0.25,(MethodInfo *)0x0);
                                                                uStack_129 = 2;
                                                                uStack_130 = 5;
                                                                func_?(&uStack_128);
                                                                uStack_93 = uStack_129;
                                                                uStack_94 = uStack_130;
                                                                uStack_95 = (undefined4)uStack_128;
                                                                uStack_96 = uStack_128._4_4_;
                                                                FUN_?(pAVar7,1,&uStack_93);
                                                                uStack_131 = AvatarModifierPackageFactory_Const(0.6,(MethodInfo *)0x0);
                                                                uStack_132 = 0;
                                                                uStack_133 = 2;
                                                                func_?(&uStack_131);
                                                                uStack_93 = uStack_132;
                                                                uStack_94 = uStack_133;
                                                                uStack_95 = (undefined4)uStack_131;
                                                                uStack_96 = uStack_131._4_4_;
                                                                FUN_?(pAVar7,2,&uStack_93);
                                                                uStack_134 = AvatarModifierPackageFactory_Const(4.0,(MethodInfo *)0x0);
                                                                uStack_135 = 0;
                                                                uStack_136 = 6;
                                                                func_?(&uStack_134);
                                                                uStack_93 = uStack_135;
                                                                uStack_94 = uStack_136;
                                                                uStack_95 = (undefined4)uStack_134;
                                                                uStack_96 = uStack_134._4_4_;
                                                                FUN_?(pAVar7,3,&uStack_93);
                                                                uStack_137 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
                                                                uStack_138 = 2;
                                                                uStack_139 = 8;
                                                                func_?(&uStack_137);
                                                                uStack_93 = uStack_138;
                                                                uStack_94 = uStack_139;
                                                                uStack_95 = (undefined4)uStack_137;
                                                                uStack_96 = uStack_137._4_4_;
                                                                FUN_?(pAVar7,4,&uStack_93);
                                                                uStack_140 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
                                                                uStack_141 = 2;
                                                                uStack_142 = 9;
                                                                func_?(&uStack_140);
                                                                uStack_93 = uStack_141;
                                                                uStack_94 = uStack_142;
                                                                uStack_95 = (undefined4)uStack_140;
                                                                uStack_96 = uStack_140._4_4_;
                                                                FUN_?(pAVar7,5,&uStack_93);
                                                                uStack_143 = AvatarModifierPackageFactory_Const(0.25,(MethodInfo *)0x0);
                                                                uStack_144 = 2;
                                                                uStack_145 = 1;
                                                                func_?(&uStack_143);
                                                                uStack_93 = uStack_144;
                                                                uStack_94 = uStack_145;
                                                                uStack_95 = (undefined4)uStack_143;
                                                                uStack_96 = uStack_143._4_4_;
                                                                FUN_?(pAVar7,6,&uStack_93);
                                                                pDVar72 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>);
                                                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,GamePassesHighScoreList+HighScoreListData]::Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor(pDVar72,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__);
                                                                if (pDVar72 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
                                                                  uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
                                                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)pDVar72,0xc,1,(InsertionBehavior__Enum)uVar13,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_->klass->rgctx_data[0x22].method);
                                                                  uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
                                                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)pDVar72,0xf,3,(InsertionBehavior__Enum)uVar13,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_->klass->rgctx_data[0x22].method);
                                                                  AStack_146.id = 0;
                                                                  AStack_146._4_4_ = 0;
                                                                  AStack_146.duration.currentCryptoKey = 0;
                                                                  AStack_146.duration.hiddenValue.b1 = 0;
                                                                  AStack_146.duration.hiddenValue.b2 = 0;
                                                                  AStack_146.duration.hiddenValue.b3 = 0;
                                                                  AStack_146.duration.hiddenValue.b4 = 0;
                                                                  AStack_146.avatarModifierPackageType = 0;
                                                                  AStack_146.avatarModifierPackageAdditionPolicy = 0;
                                                                  AStack_146.duration.hiddenValueOld = (Byte__Array *)0x0;
                                                                  AStack_146.duration.fakeValue = 0.0;
                                                                  AStack_146.duration.inited = 0;
                                                                  AStack_146.duration._21_3_ = 0;
                                                                  AStack_146.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                                  AStack_146.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                                                  AStack_146.timeStamp.currentCryptoKey = 0;
                                                                  AStack_146.timeStamp.hiddenValue.b1 = 0;
                                                                  AStack_146.timeStamp.hiddenValue.b2 = 0;
                                                                  AStack_146.timeStamp.hiddenValue.b3 = 0;
                                                                  AStack_146.timeStamp.hiddenValue.b4 = 0;
                                                                  AStack_146.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                                                  AStack_146.timeStamp.fakeValue = 0.0;
                                                                  AStack_146.timeStamp.inited = 0;
                                                                  AStack_146.timeStamp._21_3_ = 0;
                                                                  AStack_146.persistant = 0;
                                                                  AStack_146._73_3_ = 0;
                                                                  AStack_146.lastTimeStamp = 0.0;
                                                                  AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_146,AvatarModifierPackageType__Enum_Shrunken,AvatarModifierPackageAdditionPolicy__Enum_Renew,35.0,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)pDVar72,0,(MethodInfo *)0x0);
                                                                  AStack_14.id = AStack_146.id;
                                                                  AStack_14._4_4_ = AStack_146._4_4_;
                                                                  AStack_14.duration.currentCryptoKey = AStack_146.duration.currentCryptoKey;
                                                                  AStack_14.duration.hiddenValue = AStack_146.duration.hiddenValue;
                                                                  AStack_14.duration.hiddenValueOld = AStack_146.duration.hiddenValueOld;
                                                                  AStack_14.duration.fakeValue = AStack_146.duration.fakeValue;
                                                                  AStack_14.duration.inited = AStack_146.duration.inited;
                                                                  AStack_14.duration._21_3_ = AStack_146.duration._21_3_;
                                                                  AStack_14.avatarModifiers = AStack_146.avatarModifiers;
                                                                  AStack_14.actionsToTakeVsTypes = AStack_146.actionsToTakeVsTypes;
                                                                  AStack_14.timeStamp.currentCryptoKey = AStack_146.timeStamp.currentCryptoKey;
                                                                  AStack_14.timeStamp.hiddenValue = AStack_146.timeStamp.hiddenValue;
                                                                  AStack_14.timeStamp.hiddenValueOld = AStack_146.timeStamp.hiddenValueOld;
                                                                  AStack_14.timeStamp.fakeValue = AStack_146.timeStamp.fakeValue;
                                                                  AStack_14.timeStamp.inited = AStack_146.timeStamp.inited;
                                                                  AStack_14.timeStamp._21_3_ = AStack_146.timeStamp._21_3_;
                                                                  AStack_14.persistant = AStack_146.persistant;
                                                                  AStack_14._73_3_ = AStack_146._73_3_;
                                                                  AStack_14.lastTimeStamp = AStack_146.lastTimeStamp;
                                                                  AStack_14.avatarModifierPackageType = AStack_146.avatarModifierPackageType;
                                                                  AStack_14.avatarModifierPackageAdditionPolicy = AStack_146.avatarModifierPackageAdditionPolicy;
                                                                  FUN_?(this,0xc,&AStack_14);
                                                                  pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                                  uStack_147 = AvatarModifierPackageFactory_Const(0.96,(MethodInfo *)0x0);
                                                                  uStack_148 = 2;
                                                                  uStack_149 = 4;
                                                                  func_?(&uStack_147);
                                                                  if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                                                    uStack_93 = uStack_148;
                                                                    uStack_94 = uStack_149;
                                                                    uStack_95 = (undefined4)uStack_147;
                                                                    uStack_96 = uStack_147._4_4_;
                                                                    FUN_?(pAVar7,0,&uStack_93);
                                                                    AStack_150.id = 0;
                                                                    AStack_150._4_4_ = 0;
                                                                    AStack_150.duration.currentCryptoKey = 0;
                                                                    AStack_150.duration.hiddenValue.b1 = 0;
                                                                    AStack_150.duration.hiddenValue.b2 = 0;
                                                                    AStack_150.duration.hiddenValue.b3 = 0;
                                                                    AStack_150.duration.hiddenValue.b4 = 0;
                                                                    AStack_150.avatarModifierPackageType = 0;
                                                                    AStack_150.avatarModifierPackageAdditionPolicy = 0;
                                                                    AStack_150.duration.hiddenValueOld = (Byte__Array *)0x0;
                                                                    AStack_150.duration.fakeValue = 0.0;
                                                                    AStack_150.duration.inited = 0;
                                                                    AStack_150.duration._21_3_ = 0;
                                                                    AStack_150.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                                    AStack_150.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                                                    AStack_150.timeStamp.currentCryptoKey = 0;
                                                                    AStack_150.timeStamp.hiddenValue.b1 = 0;
                                                                    AStack_150.timeStamp.hiddenValue.b2 = 0;
                                                                    AStack_150.timeStamp.hiddenValue.b3 = 0;
                                                                    AStack_150.timeStamp.hiddenValue.b4 = 0;
                                                                    AStack_150.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                                                    AStack_150.timeStamp.fakeValue = 0.0;
                                                                    AStack_150.timeStamp.inited = 0;
                                                                    AStack_150.timeStamp._21_3_ = 0;
                                                                    AStack_150.persistant = 0;
                                                                    AStack_150._73_3_ = 0;
                                                                    AStack_150.lastTimeStamp = 0.0;
                                                                    AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_150,AvatarModifierPackageType__Enum_WindFriction,AvatarModifierPackageAdditionPolicy__Enum_Renew,INFINITY,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                                                                    AStack_14.id = AStack_150.id;
                                                                    AStack_14._4_4_ = AStack_150._4_4_;
                                                                    AStack_14.duration.currentCryptoKey = AStack_150.duration.currentCryptoKey;
                                                                    AStack_14.duration.hiddenValue = AStack_150.duration.hiddenValue;
                                                                    AStack_14.duration.hiddenValueOld = AStack_150.duration.hiddenValueOld;
                                                                    AStack_14.duration.fakeValue = AStack_150.duration.fakeValue;
                                                                    AStack_14.duration.inited = AStack_150.duration.inited;
                                                                    AStack_14.duration._21_3_ = AStack_150.duration._21_3_;
                                                                    AStack_14.avatarModifiers = AStack_150.avatarModifiers;
                                                                    AStack_14.actionsToTakeVsTypes = AStack_150.actionsToTakeVsTypes;
                                                                    AStack_14.timeStamp.currentCryptoKey = AStack_150.timeStamp.currentCryptoKey;
                                                                    AStack_14.timeStamp.hiddenValue = AStack_150.timeStamp.hiddenValue;
                                                                    AStack_14.timeStamp.hiddenValueOld = AStack_150.timeStamp.hiddenValueOld;
                                                                    AStack_14.timeStamp.fakeValue = AStack_150.timeStamp.fakeValue;
                                                                    AStack_14.timeStamp.inited = AStack_150.timeStamp.inited;
                                                                    AStack_14.timeStamp._21_3_ = AStack_150.timeStamp._21_3_;
                                                                    AStack_14.persistant = AStack_150.persistant;
                                                                    AStack_14._73_3_ = AStack_150._73_3_;
                                                                    AStack_14.lastTimeStamp = AStack_150.lastTimeStamp;
                                                                    AStack_14.avatarModifierPackageType = AStack_150.avatarModifierPackageType;
                                                                    AStack_14.avatarModifierPackageAdditionPolicy = AStack_150.avatarModifierPackageAdditionPolicy;
                                                                    FUN_?(this,0xd,&AStack_14);
                                                                    pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                                    uStack_151 = AvatarModifierPackageFactory_Const(0.5,(MethodInfo *)0x0);
                                                                    uStack_152 = 2;
                                                                    uStack_153 = 6;
                                                                    func_?(&uStack_151);
                                                                    if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                                                      uStack_93 = uStack_152;
                                                                      uStack_94 = uStack_153;
                                                                      uStack_95 = (undefined4)uStack_151;
                                                                      uStack_96 = uStack_151._4_4_;
                                                                      FUN_?(pAVar7,0,&uStack_93);
                                                                      AStack_154.avatarModifierPackageType = 0;
                                                                      AStack_154.avatarModifierPackageAdditionPolicy = 0;
                                                                      AStack_154.id = 0;
                                                                      AStack_154._4_4_ = 0;
                                                                      AStack_154.duration.currentCryptoKey = 0;
                                                                      AStack_154.duration.hiddenValue.b1 = 0;
                                                                      AStack_154.duration.hiddenValue.b2 = 0;
                                                                      AStack_154.duration.hiddenValue.b3 = 0;
                                                                      AStack_154.duration.hiddenValue.b4 = 0;
                                                                      AStack_154.duration.hiddenValueOld = (Byte__Array *)0x0;
                                                                      AStack_154.duration.fakeValue = 0.0;
                                                                      AStack_154.duration.inited = 0;
                                                                      AStack_154.duration._21_3_ = 0;
                                                                      AStack_154.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                                      AStack_154.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                                                      AStack_154.timeStamp.currentCryptoKey = 0;
                                                                      AStack_154.timeStamp.hiddenValue.b1 = 0;
                                                                      AStack_154.timeStamp.hiddenValue.b2 = 0;
                                                                      AStack_154.timeStamp.hiddenValue.b3 = 0;
                                                                      AStack_154.timeStamp.hiddenValue.b4 = 0;
                                                                      AStack_154.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                                                      AStack_154.timeStamp.fakeValue = 0.0;
                                                                      AStack_154.timeStamp.inited = 0;
                                                                      AStack_154.timeStamp._21_3_ = 0;
                                                                      AStack_154.persistant = 0;
                                                                      AStack_154._73_3_ = 0;
                                                                      AStack_154.lastTimeStamp = 0.0;
                                                                      AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_154,AvatarModifierPackageType__Enum_Shielded,AvatarModifierPackageAdditionPolicy__Enum_Renew,INFINITY,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,1,(MethodInfo *)0x0);
                                                                      AStack_14.id = AStack_154.id;
                                                                      AStack_14._4_4_ = AStack_154._4_4_;
                                                                      AStack_14.duration.currentCryptoKey = AStack_154.duration.currentCryptoKey;
                                                                      AStack_14.duration.hiddenValue = AStack_154.duration.hiddenValue;
                                                                      AStack_14.duration.hiddenValueOld = AStack_154.duration.hiddenValueOld;
                                                                      AStack_14.duration.fakeValue = AStack_154.duration.fakeValue;
                                                                      AStack_14.duration.inited = AStack_154.duration.inited;
                                                                      AStack_14.duration._21_3_ = AStack_154.duration._21_3_;
                                                                      AStack_14.avatarModifiers = AStack_154.avatarModifiers;
                                                                      AStack_14.actionsToTakeVsTypes = AStack_154.actionsToTakeVsTypes;
                                                                      AStack_14.timeStamp.currentCryptoKey = AStack_154.timeStamp.currentCryptoKey;
                                                                      AStack_14.timeStamp.hiddenValue = AStack_154.timeStamp.hiddenValue;
                                                                      AStack_14.timeStamp.hiddenValueOld = AStack_154.timeStamp.hiddenValueOld;
                                                                      AStack_14.timeStamp.fakeValue = AStack_154.timeStamp.fakeValue;
                                                                      AStack_14.timeStamp.inited = AStack_154.timeStamp.inited;
                                                                      AStack_14.timeStamp._21_3_ = AStack_154.timeStamp._21_3_;
                                                                      AStack_14.persistant = AStack_154.persistant;
                                                                      AStack_14._73_3_ = AStack_154._73_3_;
                                                                      AStack_14.lastTimeStamp = AStack_154.lastTimeStamp;
                                                                      AStack_14.avatarModifierPackageType = AStack_154.avatarModifierPackageType;
                                                                      AStack_14.avatarModifierPackageAdditionPolicy = AStack_154.avatarModifierPackageAdditionPolicy;
                                                                      FUN_?(this,0x10,&AStack_14);
                                                                      pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                                      uStack_155 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
                                                                      uStack_156 = 2;
                                                                      uStack_157 = 7;
                                                                      func_?(&uStack_155);
                                                                      if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                                                        uStack_93 = uStack_156;
                                                                        uStack_94 = uStack_157;
                                                                        uStack_95 = (undefined4)uStack_155;
                                                                        uStack_96 = uStack_155._4_4_;
                                                                        FUN_?(pAVar7,0,&uStack_93);
                                                                        AStack_158.id = 0;
                                                                        AStack_158._4_4_ = 0;
                                                                        AStack_158.duration.currentCryptoKey = 0;
                                                                        AStack_158.duration.hiddenValue.b1 = 0;
                                                                        AStack_158.duration.hiddenValue.b2 = 0;
                                                                        AStack_158.duration.hiddenValue.b3 = 0;
                                                                        AStack_158.duration.hiddenValue.b4 = 0;
                                                                        AStack_158.avatarModifierPackageType = 0;
                                                                        AStack_158.avatarModifierPackageAdditionPolicy = 0;
                                                                        AStack_158.duration.hiddenValueOld = (Byte__Array *)0x0;
                                                                        AStack_158.duration.fakeValue = 0.0;
                                                                        AStack_158.duration.inited = 0;
                                                                        AStack_158.duration._21_3_ = 0;
                                                                        AStack_158.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                                        AStack_158.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                                                        AStack_158.timeStamp.currentCryptoKey = 0;
                                                                        AStack_158.timeStamp.hiddenValue.b1 = 0;
                                                                        AStack_158.timeStamp.hiddenValue.b2 = 0;
                                                                        AStack_158.timeStamp.hiddenValue.b3 = 0;
                                                                        AStack_158.timeStamp.hiddenValue.b4 = 0;
                                                                        AStack_158.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                                                        AStack_158.timeStamp.fakeValue = 0.0;
                                                                        AStack_158.timeStamp.inited = 0;
                                                                        AStack_158.timeStamp._21_3_ = 0;
                                                                        AStack_158.persistant = 0;
                                                                        AStack_158._73_3_ = 0;
                                                                        AStack_158.lastTimeStamp = 0.0;
                                                                        AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_158,AvatarModifierPackageType__Enum_DisableVehiclePickup,AvatarModifierPackageAdditionPolicy__Enum_Renew,INFINITY,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                                                                        AStack_14.duration.hiddenValueOld = AStack_158.duration.hiddenValueOld;
                                                                        AStack_14.duration.fakeValue = AStack_158.duration.fakeValue;
                                                                        AStack_14.duration.inited = AStack_158.duration.inited;
                                                                        AStack_14.duration._21_3_ = AStack_158.duration._21_3_;
                                                                        AStack_14.timeStamp.currentCryptoKey = AStack_158.timeStamp.currentCryptoKey;
                                                                        AStack_14.timeStamp.hiddenValue = AStack_158.timeStamp.hiddenValue;
                                                                        AStack_14.timeStamp.hiddenValueOld = AStack_158.timeStamp.hiddenValueOld;
                                                                        AStack_14.id = AStack_158.id;
                                                                        AStack_14._4_4_ = AStack_158._4_4_;
                                                                        AStack_14.duration.currentCryptoKey = AStack_158.duration.currentCryptoKey;
                                                                        AStack_14.duration.hiddenValue = AStack_158.duration.hiddenValue;
                                                                        AStack_14.avatarModifierPackageType = AStack_158.avatarModifierPackageType;
                                                                        AStack_14.avatarModifierPackageAdditionPolicy = AStack_158.avatarModifierPackageAdditionPolicy;
                                                                        AStack_14.avatarModifiers = AStack_158.avatarModifiers;
                                                                        AStack_14.actionsToTakeVsTypes = AStack_158.actionsToTakeVsTypes;
                                                                        AStack_14.timeStamp.fakeValue = AStack_158.timeStamp.fakeValue;
                                                                        AStack_14.timeStamp.inited = AStack_158.timeStamp.inited;
                                                                        AStack_14.timeStamp._21_3_ = AStack_158.timeStamp._21_3_;
                                                                        AStack_14.persistant = AStack_158.persistant;
                                                                        AStack_14._73_3_ = AStack_158._73_3_;
                                                                        AStack_14.lastTimeStamp = AStack_158.lastTimeStamp;
                                                                        FUN_?(this,0xe,&AStack_14);
                                                                        pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                                        uStack_159 = AvatarModifierPackageFactory_Const(1.5,(MethodInfo *)0x0);
                                                                        uStack_160 = 0;
                                                                        uStack_161 = 3;
                                                                        func_?(&uStack_159);
                                                                        if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                                                          uStack_93 = uStack_160;
                                                                          uStack_94 = uStack_161;
                                                                          uStack_95 = (undefined4)uStack_159;
                                                                          uStack_96 = uStack_159._4_4_;
                                                                          FUN_?(pAVar7,0,&uStack_93);
                                                                          uStack_162 = AvatarModifierPackageFactory_Const(2.0,(MethodInfo *)0x0);
                                                                          uStack_163 = 2;
                                                                          uStack_164 = 5;
                                                                          func_?(&uStack_162);
                                                                          uStack_93 = uStack_163;
                                                                          uStack_94 = uStack_164;
                                                                          uStack_95 = (undefined4)uStack_162;
                                                                          uStack_96 = uStack_162._4_4_;
                                                                          FUN_?(pAVar7,1,&uStack_93);
                                                                          uStack_165 = AvatarModifierPackageFactory_Const(2.0,(MethodInfo *)0x0);
                                                                          uStack_166 = 0;
                                                                          uStack_167 = 2;
                                                                          func_?(&uStack_165);
                                                                          uStack_93 = uStack_166;
                                                                          uStack_94 = uStack_167;
                                                                          uStack_95 = (undefined4)uStack_165;
                                                                          uStack_96 = uStack_165._4_4_;
                                                                          FUN_?(pAVar7,2,&uStack_93);
                                                                          uStack_168 = AvatarModifierPackageFactory_Const(0.5,(MethodInfo *)0x0);
                                                                          uStack_169 = 0;
                                                                          uStack_170 = 6;
                                                                          func_?(&uStack_168);
                                                                          uStack_93 = uStack_169;
                                                                          uStack_94 = uStack_170;
                                                                          uStack_95 = (undefined4)uStack_168;
                                                                          uStack_96 = uStack_168._4_4_;
                                                                          FUN_?(pAVar7,3,&uStack_93);
                                                                          uStack_171 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
                                                                          uStack_172 = 2;
                                                                          uStack_173 = 8;
                                                                          func_?(&uStack_171);
                                                                          uStack_93 = uStack_172;
                                                                          uStack_94 = uStack_173;
                                                                          uStack_95 = (undefined4)uStack_171;
                                                                          uStack_96 = uStack_171._4_4_;
                                                                          FUN_?(pAVar7,4,&uStack_93);
                                                                          uStack_174 = AvatarModifierPackageFactory_Const(1.0,(MethodInfo *)0x0);
                                                                          uStack_175 = 2;
                                                                          uStack_176 = 9;
                                                                          func_?(&uStack_174);
                                                                          uStack_93 = uStack_175;
                                                                          uStack_94 = uStack_176;
                                                                          uStack_95 = (undefined4)uStack_174;
                                                                          uStack_96 = uStack_174._4_4_;
                                                                          FUN_?(pAVar7,5,&uStack_93);
                                                                          uStack_177 = AvatarModifierPackageFactory_Const(2.0,(MethodInfo *)0x0);
                                                                          uStack_178 = 2;
                                                                          uStack_179 = 1;
                                                                          func_?(&uStack_177);
                                                                          uStack_93 = uStack_178;
                                                                          uStack_94 = uStack_179;
                                                                          uStack_95 = (undefined4)uStack_177;
                                                                          uStack_96 = uStack_177._4_4_;
                                                                          FUN_?(pAVar7,6,&uStack_93);
                                                                          pDVar72 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>);
                                                                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,GamePassesHighScoreList+HighScoreListData]::Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor(pDVar72,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__);
                                                                          if (pDVar72 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
                                                                            uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
                                                                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)pDVar72,0xc,3,(InsertionBehavior__Enum)uVar13,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_->klass->rgctx_data[0x22].method);
                                                                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)pDVar72,0xf,1,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar13 >> 8),2),MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_->klass->rgctx_data[0x22].method);
                                                                            AStack_180.id = 0;
                                                                            AStack_180._4_4_ = 0;
                                                                            AStack_180.duration.currentCryptoKey = 0;
                                                                            AStack_180.duration.hiddenValue.b1 = 0;
                                                                            AStack_180.duration.hiddenValue.b2 = 0;
                                                                            AStack_180.duration.hiddenValue.b3 = 0;
                                                                            AStack_180.duration.hiddenValue.b4 = 0;
                                                                            AStack_180.avatarModifierPackageType = 0;
                                                                            AStack_180.avatarModifierPackageAdditionPolicy = 0;
                                                                            AStack_180.duration.hiddenValueOld = (Byte__Array *)0x0;
                                                                            AStack_180.duration.fakeValue = 0.0;
                                                                            AStack_180.duration.inited = 0;
                                                                            AStack_180.duration._21_3_ = 0;
                                                                            AStack_180.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                                            AStack_180.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                                                            AStack_180.timeStamp.currentCryptoKey = 0;
                                                                            AStack_180.timeStamp.hiddenValue.b1 = 0;
                                                                            AStack_180.timeStamp.hiddenValue.b2 = 0;
                                                                            AStack_180.timeStamp.hiddenValue.b3 = 0;
                                                                            AStack_180.timeStamp.hiddenValue.b4 = 0;
                                                                            AStack_180.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                                                            AStack_180.timeStamp.fakeValue = 0.0;
                                                                            AStack_180.timeStamp.inited = 0;
                                                                            AStack_180.timeStamp._21_3_ = 0;
                                                                            AStack_180.persistant = 0;
                                                                            AStack_180._73_3_ = 0;
                                                                            AStack_180.lastTimeStamp = 0.0;
                                                                            AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_180,AvatarModifierPackageType__Enum_Enlarged,AvatarModifierPackageAdditionPolicy__Enum_Renew,35.0,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)pDVar72,0,(MethodInfo *)0x0);
                                                                            AStack_14.id = AStack_180.id;
                                                                            AStack_14._4_4_ = AStack_180._4_4_;
                                                                            AStack_14.duration.currentCryptoKey = AStack_180.duration.currentCryptoKey;
                                                                            AStack_14.duration.hiddenValue = AStack_180.duration.hiddenValue;
                                                                            AStack_14.duration.hiddenValueOld = AStack_180.duration.hiddenValueOld;
                                                                            AStack_14.duration.fakeValue = AStack_180.duration.fakeValue;
                                                                            AStack_14.duration.inited = AStack_180.duration.inited;
                                                                            AStack_14.duration._21_3_ = AStack_180.duration._21_3_;
                                                                            AStack_14.avatarModifiers = AStack_180.avatarModifiers;
                                                                            AStack_14.actionsToTakeVsTypes = AStack_180.actionsToTakeVsTypes;
                                                                            AStack_14.timeStamp.currentCryptoKey = AStack_180.timeStamp.currentCryptoKey;
                                                                            AStack_14.timeStamp.hiddenValue = AStack_180.timeStamp.hiddenValue;
                                                                            AStack_14.timeStamp.hiddenValueOld = AStack_180.timeStamp.hiddenValueOld;
                                                                            AStack_14.timeStamp.fakeValue = AStack_180.timeStamp.fakeValue;
                                                                            AStack_14.timeStamp.inited = AStack_180.timeStamp.inited;
                                                                            AStack_14.timeStamp._21_3_ = AStack_180.timeStamp._21_3_;
                                                                            AStack_14.persistant = AStack_180.persistant;
                                                                            AStack_14._73_3_ = AStack_180._73_3_;
                                                                            AStack_14.lastTimeStamp = AStack_180.lastTimeStamp;
                                                                            AStack_14.avatarModifierPackageType = AStack_180.avatarModifierPackageType;
                                                                            AStack_14.avatarModifierPackageAdditionPolicy = AStack_180.avatarModifierPackageAdditionPolicy;
                                                                            FUN_?(this,0xf,&AStack_14);
                                                                            uVar13 = 0;
                                                                            pAVar181 = AvatarModifierPackageFactory_AssembleInvulnerabilityPackage(aAStack_182,AvatarModifierPackageType__Enum_SpawnProtection,4.0,(MethodInfo *)0x0);
                                                                            AStack_14.id = pAVar181->id;
                                                                            AStack_14._4_4_ = *(undefined4 *)&pAVar181->field_0x4;
                                                                            AStack_14.duration.currentCryptoKey = (pAVar181->duration).currentCryptoKey;
                                                                            AStack_14.duration.hiddenValue = (pAVar181->duration).hiddenValue;
                                                                            AStack_14.duration.hiddenValueOld = (pAVar181->duration).hiddenValueOld;
                                                                            AStack_14.duration.fakeValue = (pAVar181->duration).fakeValue;
                                                                            AStack_14.duration.inited = (pAVar181->duration).inited;
                                                                            AStack_14.duration._21_3_ = *(undefined3 *)&(pAVar181->duration).field_0x15;
                                                                            AStack_14.avatarModifiers = pAVar181->avatarModifiers;
                                                                            AStack_14.actionsToTakeVsTypes = pAVar181->actionsToTakeVsTypes;
                                                                            AStack_14.timeStamp.currentCryptoKey = (pAVar181->timeStamp).currentCryptoKey;
                                                                            AStack_14.timeStamp.hiddenValue = (pAVar181->timeStamp).hiddenValue;
                                                                            AStack_14.timeStamp.hiddenValueOld = (pAVar181->timeStamp).hiddenValueOld;
                                                                            AStack_14.timeStamp.fakeValue = (pAVar181->timeStamp).fakeValue;
                                                                            AStack_14.timeStamp.inited = (pAVar181->timeStamp).inited;
                                                                            AStack_14.timeStamp._21_3_ = *(undefined3 *)&(pAVar181->timeStamp).field_0x15;
                                                                            AStack_14.persistant = pAVar181->persistant;
                                                                            AStack_14._73_3_ = *(undefined3 *)&pAVar181->field_0x49;
                                                                            AStack_14.lastTimeStamp = pAVar181->lastTimeStamp;
                                                                            AStack_14.avatarModifierPackageType = pAVar181->avatarModifierPackageType;
                                                                            AStack_14.avatarModifierPackageAdditionPolicy = pAVar181->avatarModifierPackageAdditionPolicy;
                                                                            FUN_?(this,0x11,&AStack_14);
                                                                            pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                                            uStack_183 = AvatarModifierPackageFactory_Const(20.0,(MethodInfo *)0x0);
                                                                            uStack_184 = 1;
                                                                            uStack_185 = 0xf;
                                                                            func_?(&uStack_183);
                                                                            if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                                                              uStack_93 = uStack_184;
                                                                              uStack_94 = uStack_185;
                                                                              uStack_95 = (undefined4)uStack_183;
                                                                              uStack_96 = uStack_183._4_4_;
                                                                              FUN_?(pAVar7,0,&uStack_93);
                                                                              uStack_186 = AvatarModifierPackageFactory_Const(20.0,(MethodInfo *)0x0);
                                                                              uStack_187 = 1;
                                                                              uStack_188 = 0x15;
                                                                              func_?(&uStack_186);
                                                                              uStack_93 = uStack_187;
                                                                              uStack_94 = uStack_188;
                                                                              uStack_95 = (undefined4)uStack_186;
                                                                              uStack_96 = uStack_186._4_4_;
                                                                              FUN_?(pAVar7,1,&uStack_93);
                                                                              pDVar72 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>);
                                                                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,GamePassesHighScoreList+HighScoreListData]::Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor(pDVar72,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__);
                                                                              if (pDVar72 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
                                                                                uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
                                                                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)pDVar72,4,2,(InsertionBehavior__Enum)uVar13,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_->klass->rgctx_data[0x22].method);
                                                                                uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
                                                                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)pDVar72,1,2,(InsertionBehavior__Enum)uVar13,MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_->klass->rgctx_data[0x22].method);
                                                                                AStack_189.id = 0;
                                                                                AStack_189._4_4_ = 0;
                                                                                AStack_189.duration.currentCryptoKey = 0;
                                                                                AStack_189.duration.hiddenValue.b1 = 0;
                                                                                AStack_189.duration.hiddenValue.b2 = 0;
                                                                                AStack_189.duration.hiddenValue.b3 = 0;
                                                                                AStack_189.duration.hiddenValue.b4 = 0;
                                                                                AStack_189.avatarModifierPackageType = 0;
                                                                                AStack_189.avatarModifierPackageAdditionPolicy = 0;
                                                                                AStack_189.duration.hiddenValueOld = (Byte__Array *)0x0;
                                                                                AStack_189.duration.fakeValue = 0.0;
                                                                                AStack_189.duration.inited = 0;
                                                                                AStack_189.duration._21_3_ = 0;
                                                                                AStack_189.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                                                AStack_189.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                                                                AStack_189.timeStamp.currentCryptoKey = 0;
                                                                                AStack_189.timeStamp.hiddenValue.b1 = 0;
                                                                                AStack_189.timeStamp.hiddenValue.b2 = 0;
                                                                                AStack_189.timeStamp.hiddenValue.b3 = 0;
                                                                                AStack_189.timeStamp.hiddenValue.b4 = 0;
                                                                                AStack_189.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                                                                AStack_189.timeStamp.fakeValue = 0.0;
                                                                                AStack_189.timeStamp.inited = 0;
                                                                                AStack_189.timeStamp._21_3_ = 0;
                                                                                AStack_189.persistant = 0;
                                                                                AStack_189._73_3_ = 0;
                                                                                AStack_189.lastTimeStamp = 0.0;
                                                                                AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_189,AvatarModifierPackageType__Enum_RayHeal,AvatarModifierPackageAdditionPolicy__Enum_Add,0.2,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)pDVar72,0,(MethodInfo *)0x0);
                                                                                AStack_14.duration.hiddenValueOld = AStack_189.duration.hiddenValueOld;
                                                                                AStack_14.duration.fakeValue = AStack_189.duration.fakeValue;
                                                                                AStack_14.duration.inited = AStack_189.duration.inited;
                                                                                AStack_14.duration._21_3_ = AStack_189.duration._21_3_;
                                                                                AStack_14.timeStamp.currentCryptoKey = AStack_189.timeStamp.currentCryptoKey;
                                                                                AStack_14.timeStamp.hiddenValue = AStack_189.timeStamp.hiddenValue;
                                                                                AStack_14.timeStamp.hiddenValueOld = AStack_189.timeStamp.hiddenValueOld;
                                                                                AStack_14.id = AStack_189.id;
                                                                                AStack_14._4_4_ = AStack_189._4_4_;
                                                                                AStack_14.duration.currentCryptoKey = AStack_189.duration.currentCryptoKey;
                                                                                AStack_14.duration.hiddenValue = AStack_189.duration.hiddenValue;
                                                                                AStack_14.avatarModifierPackageType = AStack_189.avatarModifierPackageType;
                                                                                AStack_14.avatarModifierPackageAdditionPolicy = AStack_189.avatarModifierPackageAdditionPolicy;
                                                                                AStack_14.avatarModifiers = AStack_189.avatarModifiers;
                                                                                AStack_14.actionsToTakeVsTypes = AStack_189.actionsToTakeVsTypes;
                                                                                AStack_14.timeStamp.fakeValue = AStack_189.timeStamp.fakeValue;
                                                                                AStack_14.timeStamp.inited = AStack_189.timeStamp.inited;
                                                                                AStack_14.timeStamp._21_3_ = AStack_189.timeStamp._21_3_;
                                                                                AStack_14.persistant = AStack_189.persistant;
                                                                                AStack_14._73_3_ = AStack_189._73_3_;
                                                                                AStack_14.lastTimeStamp = AStack_189.lastTimeStamp;
                                                                                FUN_?(this,0x12,&AStack_14);
                                                                                pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                                                pFStack_190 = AvatarModifierPackageFactory_Const(7.0,(MethodInfo *)0x0);
                                                                                uStack_191 = 1;
                                                                                uStack_192 = 0x1d;
                                                                                func_?(&pFStack_190);
                                                                                if (pAVar7 != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
                                                                                  if ((int)pAVar7->max_length != 0) {
                                                                                    bVar2 = iRam_? != 0;
                                                                                    pAVar7->vector[0].avatarModifierType = uStack_191;
                                                                                    pAVar7->vector[0].avatarModifierEffect = uStack_192;
                                                                                    pAVar7->vector[0].value = pFStack_190;
                                                                                    if (bVar2) {
                                                                                      uVar3 = (uint)((ulonglong)&pAVar7->vector[0].value >> 0xc);
                                                                                      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                                                                      do {
                                                                                        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                                                                                        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                                                                                        LOCK();
                                                                                        bVar2 = uVar5 == *puVar6;
                                                                                        if (bVar2) {
                                                                                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                                                        }
                                                                                        UNLOCK();
                                                                                      } while (!bVar2);
                                                                                    }
                                                                                    AStack_193.id = 0;
                                                                                    AStack_193._4_4_ = 0;
                                                                                    AStack_193.duration.currentCryptoKey = 0;
                                                                                    AStack_193.duration.hiddenValue.b1 = 0;
                                                                                    AStack_193.duration.hiddenValue.b2 = 0;
                                                                                    AStack_193.duration.hiddenValue.b3 = 0;
                                                                                    AStack_193.duration.hiddenValue.b4 = 0;
                                                                                    AStack_193.avatarModifierPackageType = 0;
                                                                                    AStack_193.avatarModifierPackageAdditionPolicy = 0;
                                                                                    AStack_193.duration.hiddenValueOld = (Byte__Array *)0x0;
                                                                                    AStack_193.duration.fakeValue = 0.0;
                                                                                    AStack_193.duration.inited = 0;
                                                                                    AStack_193.duration._21_3_ = 0;
                                                                                    AStack_193.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                                                    AStack_193.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                                                                                    AStack_193.timeStamp.currentCryptoKey = 0;
                                                                                    AStack_193.timeStamp.hiddenValue.b1 = 0;
                                                                                    AStack_193.timeStamp.hiddenValue.b2 = 0;
                                                                                    AStack_193.timeStamp.hiddenValue.b3 = 0;
                                                                                    AStack_193.timeStamp.hiddenValue.b4 = 0;
                                                                                    AStack_193.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                                                                    AStack_193.timeStamp.fakeValue = 0.0;
                                                                                    AStack_193.timeStamp.inited = 0;
                                                                                    AStack_193.timeStamp._21_3_ = 0;
                                                                                    AStack_193.persistant = 0;
                                                                                    AStack_193._73_3_ = 0;
                                                                                    AStack_193.lastTimeStamp = 0.0;
                                                                                    AvatarModifierPackage::AvatarModifierPackage__ctor(&AStack_193,AvatarModifierPackageType__Enum_RayHealEnemy,AvatarModifierPackageAdditionPolicy__Enum_Renew,1.0,pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
                                                                                    AStack_14.id = AStack_193.id;
                                                                                    AStack_14._4_4_ = AStack_193._4_4_;
                                                                                    AStack_14.duration.currentCryptoKey = AStack_193.duration.currentCryptoKey;
                                                                                    AStack_14.duration.hiddenValue = AStack_193.duration.hiddenValue;
                                                                                    AStack_14.duration.hiddenValueOld = AStack_193.duration.hiddenValueOld;
                                                                                    AStack_14.duration.fakeValue = AStack_193.duration.fakeValue;
                                                                                    AStack_14.duration.inited = AStack_193.duration.inited;
                                                                                    AStack_14.duration._21_3_ = AStack_193.duration._21_3_;
                                                                                    AStack_14.avatarModifiers = AStack_193.avatarModifiers;
                                                                                    AStack_14.actionsToTakeVsTypes = AStack_193.actionsToTakeVsTypes;
                                                                                    AStack_14.timeStamp.currentCryptoKey = AStack_193.timeStamp.currentCryptoKey;
                                                                                    AStack_14.timeStamp.hiddenValue = AStack_193.timeStamp.hiddenValue;
                                                                                    AStack_14.timeStamp.hiddenValueOld = AStack_193.timeStamp.hiddenValueOld;
                                                                                    AStack_14.timeStamp.fakeValue = AStack_193.timeStamp.fakeValue;
                                                                                    AStack_14.timeStamp.inited = AStack_193.timeStamp.inited;
                                                                                    AStack_14.timeStamp._21_3_ = AStack_193.timeStamp._21_3_;
                                                                                    AStack_14.persistant = AStack_193.persistant;
                                                                                    AStack_14._73_3_ = AStack_193._73_3_;
                                                                                    AStack_14.lastTimeStamp = AStack_193.lastTimeStamp;
                                                                                    AStack_14.avatarModifierPackageType = AStack_193.avatarModifierPackageType;
                                                                                    AStack_14.avatarModifierPackageAdditionPolicy = AStack_193.avatarModifierPackageAdditionPolicy;
                                                                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,AvatarModifierPackage]::Dictionary_2_System_Int32Enum_AvatarModifierPackage__TryInsert(this,0x19,&AStack_14,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar13 >> 8),2),MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_->klass->rgctx_data[0x22].method);
                                                                                    TypeInfo__AvatarModifierPackageFactory->static_fields->protoPackages = (Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage_ *)this;
                                                                                    func_?(TypeInfo__AvatarModifierPackageFactory->static_fields);
                                                                                    return;
                                                                                  }
                                                                                  goto code_?;
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
                                          goto code_?;
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
                    }
                  }
                }
              }
            }
          }
        }
code_?:
        FUN_?();
        pcVar194 = (code *)swi(3);
        (*pcVar194)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar194 = (code *)swi(3);
  (*pcVar194)();
  return;
}

