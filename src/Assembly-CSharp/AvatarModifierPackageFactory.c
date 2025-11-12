
/* AvatarModifierPackage AssembleInvulnerabilityPackage(AvatarModifierPackageType, Single) */

AvatarModifierPackage *
Assembly-CSharp.dll::AvatarModifierPackageFactory::
AvatarModifierPackageFactory_AssembleInvulnerabilityPackage
          (AvatarModifierPackage *__return_storage_ptr__,AvatarModifierPackageType__Enum type,
          float time,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackageFactory);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarModifierPackage__AvatarModifier);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  avatarModifiers =
       (AvatarModifierPackage_AvatarModifier__Array *)
       FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
  if (*(int *)&(TypeInfo__AvatarModifierPackageFactory->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_1 = AvatarModifierPackageFactory_Const(_UNK_?,(MethodInfo *)0x0);
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
    this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                        );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32Enum,GamePassesHighScoreList+HighScoreListData]::
    Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
              );
    if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Int32Enum]
      ::Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this,0x11,1,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                 ->klass->rgctx_data[0x22].method);
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
      __return_storage_ptr__->actionsToTakeVsTypes =
           (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
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
      AvatarModifierPackage::AvatarModifierPackage__ctor
                (__return_storage_ptr__,type,AvatarModifierPackageAdditionPolicy__Enum_Renew,time,
                 avatarModifiers,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)this,1,
                 (MethodInfo *)0x0);
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pAVar10 = (AvatarModifierPackage *)(*pcVar9)();
  return pAVar10;
}


/* Func`1[Single] Const(Single) */

Func_1_Single_ *
Assembly-CSharp.dll::AvatarModifierPackageFactory::AvatarModifierPackageFactory_Const
          (float c,MethodInfo *method)

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
    FUN_?(pFVar2,lVar1,
                  MethodInfo__AvatarModifierPackageFactory____c__DisplayClass0_0___Const_b__0__);
    return pFVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pFVar2 = (Func_1_Single_ *)(*pcVar3)();
  return pFVar2;
}


/* AvatarModifierPackage GetPackage(AvatarModifierPackageType) */

AvatarModifierPackage *
Assembly-CSharp.dll::AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
          (AvatarModifierPackage *__return_storage_ptr__,AvatarModifierPackageType__Enum packageType
          ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackageFactory);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarModifierPackage);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__get_Item_AvatarModifierPackageType_
                 );
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
  __return_storage_ptr__->actionsToTakeVsTypes =
       (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
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
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__get_Item_AvatarModifierPackageType_
  ;
  this = (Dictionary_2_System_Int32Enum_AvatarModifierPackage_ *)
         TypeInfo__AvatarModifierPackageFactory->static_fields->protoPackages;
  if (this != (Dictionary_2_System_Int32Enum_AvatarModifierPackage_ *)0x0) {
    uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
             Int32Enum,AvatarModifierPackage]::
             Dictionary_2_System_Int32Enum_AvatarModifierPackage__FindEntry
                       (this,packageType,
                        MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__get_Item_AvatarModifierPackageType_
                        ->klass->rgctx_data[0x21].method);
    if ((int)uVar2 < 0) {
      uVar3 = func_?(pMVar1->klass->rgctx_data,0xe);
      key = (Object *)func_?(uVar3);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                (key,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      pAVar5 = (AvatarModifierPackage *)(*pcVar4)();
      return pAVar5;
    }
    pDVar6 = (this->fields)._entries;
    if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Int32Enum_AvatarModifierPackage___Array *)
                  0x0) {
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
        AvatarModifierPackage::AvatarModifierPackage_Renew(__return_storage_ptr__,(MethodInfo *)0x0)
        ;
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

void Assembly-CSharp.dll::AvatarModifierPackageFactory::AvatarModifierPackageFactory__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackageFactory);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarModifierPackage__AvatarModifier);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_AvatarModifierPackage_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>
                      );
  pEVar1 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32Enum]::
           EqualityComparer_1_System_Int32Enum__get_Default
                     (MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Dictionary__
                      ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar1 != (EqualityComparer_1_System_Int32Enum_ *)0x0) &&
     (bVar2 = iRam_? != 0,
     (this->fields)._comparer = (IEqualityComparer_1_System_Int32Enum_ *)0x0, bVar2)) {
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
  pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)
           FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
  pFStack_8 = AvatarModifierPackageFactory_Const(_UNK_?,(MethodInfo *)0x0);
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
    c = _UNK_?;
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
    AStack_12.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0
    ;
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
    AvatarModifierPackage::AvatarModifierPackage__ctor
              (&AStack_12,AvatarModifierPackageType__Enum_Fire,
               AvatarModifierPackageAdditionPolicy__Enum_Renew,_UNK_?,pAVar7,
               (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,(MethodInfo *)0x0);
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
      AStack_14.avatarModifierPackageAdditionPolicy =
           AStack_12.avatarModifierPackageAdditionPolicy;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Int32Enum,AvatarModifierPackage]::
      Dictionary_2_System_Int32Enum_AvatarModifierPackage__TryInsert
                (this,1,&AStack_14,(InsertionBehavior__Enum)uVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                 ->klass->rgctx_data[0x22].method);
      pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)
               FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
      pFStack_15 = AvatarModifierPackageFactory_Const(_UNK_?,(MethodInfo *)0x0);
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
          pFStack_18 = AvatarModifierPackageFactory_Const(_UNK_?,(MethodInfo *)0x0);
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
            pFStack_21 = AvatarModifierPackageFactory_Const(c,(MethodInfo *)0x0);
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
              pFStack_24 = AvatarModifierPackageFactory_Const(c,(MethodInfo *)0x0);
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
                pFStack_27 = AvatarModifierPackageFactory_Const(c,(MethodInfo *)0x0);
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
                  pFStack_30 = AvatarModifierPackageFactory_Const(c,(MethodInfo *)0x0);
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
                    c_01 = _UNK_?;
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
                    AStack_33.actionsToTakeVsTypes =
                         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
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
                    AvatarModifierPackage::AvatarModifierPackage__ctor
                              (&AStack_33,AvatarModifierPackageType__Enum_Mutant,
                               AvatarModifierPackageAdditionPolicy__Enum_Renew,_UNK_?,pAVar7
                               ,(Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0,0,
                               (MethodInfo *)0x0);
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
                    AStack_14.avatarModifierPackageAdditionPolicy =
                         AStack_33.avatarModifierPackageAdditionPolicy;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,AvatarModifierPackage]::
                    Dictionary_2_System_Int32Enum_AvatarModifierPackage__TryInsert
                              (this,2,&AStack_14,(InsertionBehavior__Enum)uVar13,
                               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                               ->klass->rgctx_data[0x22].method);
                    pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)
                             FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                    pFStack_34 = AvatarModifierPackageFactory_Const
                                            (_UNK_?,(MethodInfo *)0x0);
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
                    if (pAVar7 == (AvatarModifierPackage_AvatarModifier__Array *)0x0)
                    goto code_?;
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
                      pFStack_37 = AvatarModifierPackageFactory_Const
                                              (_UNK_?,(MethodInfo *)0x0);
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
                        pFStack_40 = AvatarModifierPackageFactory_Const(c,(MethodInfo *)0x0);
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
                          fVar43 = _UNK_?;
                          AStack_44.id = 0;
                          AStack_44._4_4_ = 0;
                          AStack_44.duration.currentCryptoKey = 0;
                          AStack_44.duration.hiddenValue.b1 = 0;
                          AStack_44.duration.hiddenValue.b2 = 0;
                          AStack_44.duration.hiddenValue.b3 = 0;
                          AStack_44.duration.hiddenValue.b4 = 0;
                          AStack_44.avatarModifierPackageType = 0;
                          AStack_44.avatarModifierPackageAdditionPolicy = 0;
                          AStack_44.duration.hiddenValueOld = (Byte__Array *)0x0;
                          AStack_44.duration.fakeValue = 0.0;
                          AStack_44.duration.inited = 0;
                          AStack_44.duration._21_3_ = 0;
                          AStack_44.avatarModifiers =
                               (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                          AStack_44.actionsToTakeVsTypes =
                               (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                          AStack_44.timeStamp.currentCryptoKey = 0;
                          AStack_44.timeStamp.hiddenValue.b1 = 0;
                          AStack_44.timeStamp.hiddenValue.b2 = 0;
                          AStack_44.timeStamp.hiddenValue.b3 = 0;
                          AStack_44.timeStamp.hiddenValue.b4 = 0;
                          AStack_44.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                          AStack_44.timeStamp.fakeValue = 0.0;
                          AStack_44.timeStamp.inited = 0;
                          AStack_44.timeStamp._21_3_ = 0;
                          AStack_44.persistant = 0;
                          AStack_44._73_3_ = 0;
                          AStack_44.lastTimeStamp = 0.0;
                          AvatarModifierPackage::AvatarModifierPackage__ctor
                                    (&AStack_44,AvatarModifierPackageType__Enum_Sticky,
                                     AvatarModifierPackageAdditionPolicy__Enum_Renew,_UNK_?,
                                     pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                             *)0x0,0,(MethodInfo *)0x0);
                          uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
                          AStack_14.id = AStack_44.id;
                          AStack_14._4_4_ = AStack_44._4_4_;
                          AStack_14.duration.currentCryptoKey =
                               AStack_44.duration.currentCryptoKey;
                          AStack_14.duration.hiddenValue = AStack_44.duration.hiddenValue;
                          AStack_14.duration.hiddenValueOld = AStack_44.duration.hiddenValueOld;
                          AStack_14.duration.fakeValue = AStack_44.duration.fakeValue;
                          AStack_14.duration.inited = AStack_44.duration.inited;
                          AStack_14.duration._21_3_ = AStack_44.duration._21_3_;
                          AStack_14.avatarModifiers = AStack_44.avatarModifiers;
                          AStack_14.actionsToTakeVsTypes = AStack_44.actionsToTakeVsTypes;
                          AStack_14.timeStamp.currentCryptoKey =
                               AStack_44.timeStamp.currentCryptoKey;
                          AStack_14.timeStamp.hiddenValue = AStack_44.timeStamp.hiddenValue;
                          AStack_14.timeStamp.hiddenValueOld = AStack_44.timeStamp.hiddenValueOld;
                          AStack_14.timeStamp.fakeValue = AStack_44.timeStamp.fakeValue;
                          AStack_14.timeStamp.inited = AStack_44.timeStamp.inited;
                          AStack_14.timeStamp._21_3_ = AStack_44.timeStamp._21_3_;
                          AStack_14.persistant = AStack_44.persistant;
                          AStack_14._73_3_ = AStack_44._73_3_;
                          AStack_14.lastTimeStamp = AStack_44.lastTimeStamp;
                          AStack_14.avatarModifierPackageType =
                               AStack_44.avatarModifierPackageType;
                          AStack_14.avatarModifierPackageAdditionPolicy =
                               AStack_44.avatarModifierPackageAdditionPolicy;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,AvatarModifierPackage]::
                          Dictionary_2_System_Int32Enum_AvatarModifierPackage__TryInsert
                                    (this,3,&AStack_14,(InsertionBehavior__Enum)uVar13,
                                     MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                     ->klass->rgctx_data[0x22].method);
                          pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)
                                   FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier);
                          pFStack_45 = AvatarModifierPackageFactory_Const
                                                  (_UNK_?,(MethodInfo *)0x0);
                          uStack_46 = 0;
                          uStack_47 = 2;
                          if (iRam_? != 0) {
                            uVar3 = (uint)((ulonglong)&pFStack_45 >> 0xc);
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
                          if (pAVar7 == (AvatarModifierPackage_AvatarModifier__Array *)0x0)
                          goto code_?;
                          if ((int)pAVar7->max_length != 0) {
                            pAVar7->vector[0].avatarModifierType = 0;
                            pAVar7->vector[0].avatarModifierEffect = 2;
                            pAVar7->vector[0].value = pFStack_45;
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
                            duration = _UNK_?;
                            pFStack_48 = AvatarModifierPackageFactory_Const
                                                    (_UNK_?,(MethodInfo *)0x0);
                            uStack_49 = 0;
                            uStack_50 = 3;
                            if (iRam_? != 0) {
                              uVar3 = (uint)((ulonglong)&pFStack_48 >> 0xc);
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
                              pAVar7->vector[1].value = pFStack_48;
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
                              AStack_51.id = 0;
                              AStack_51._4_4_ = 0;
                              AStack_51.duration.currentCryptoKey = 0;
                              AStack_51.duration.hiddenValue.b1 = 0;
                              AStack_51.duration.hiddenValue.b2 = 0;
                              AStack_51.duration.hiddenValue.b3 = 0;
                              AStack_51.duration.hiddenValue.b4 = 0;
                              AStack_51.avatarModifierPackageType = 0;
                              AStack_51.avatarModifierPackageAdditionPolicy = 0;
                              AStack_51.duration.hiddenValueOld = (Byte__Array *)0x0;
                              AStack_51.duration.fakeValue = 0.0;
                              AStack_51.duration.inited = 0;
                              AStack_51.duration._21_3_ = 0;
                              AStack_51.avatarModifiers =
                                   (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                              AStack_51.actionsToTakeVsTypes =
                                   (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
                              AStack_51.timeStamp.currentCryptoKey = 0;
                              AStack_51.timeStamp.hiddenValue.b1 = 0;
                              AStack_51.timeStamp.hiddenValue.b2 = 0;
                              AStack_51.timeStamp.hiddenValue.b3 = 0;
                              AStack_51.timeStamp.hiddenValue.b4 = 0;
                              AStack_51.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                              AStack_51.timeStamp.fakeValue = 0.0;
                              AStack_51.timeStamp.inited = 0;
                              AStack_51.timeStamp._21_3_ = 0;
                              AStack_51.persistant = 0;
                              AStack_51._73_3_ = 0;
                              AStack_51.lastTimeStamp = 0.0;
                              AvatarModifierPackage::AvatarModifierPackage__ctor
                                        (&AStack_51,AvatarModifierPackageType__Enum_SlowMat,
                                         AvatarModifierPackageAdditionPolicy__Enum_Renew,fVar43,
                                         pAVar7,(Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                 *)0x0,0,(MethodInfo *)0x0);
                              uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
                              AStack_14.id = AStack_51.id;
                              AStack_14._4_4_ = AStack_51._4_4_;
                              AStack_14.duration.currentCryptoKey =
                                   AStack_51.duration.currentCryptoKey;
                              AStack_14.duration.hiddenValue = AStack_51.duration.hiddenValue;
                              AStack_14.duration.hiddenValueOld =
                                   AStack_51.duration.hiddenValueOld;
                              AStack_14.duration.fakeValue = AStack_51.duration.fakeValue;
                              AStack_14.duration.inited = AStack_51.duration.inited;
                              AStack_14.duration._21_3_ = AStack_51.duration._21_3_;
                              AStack_14.avatarModifiers = AStack_51.avatarModifiers;
                              AStack_14.actionsToTakeVsTypes = AStack_51.actionsToTakeVsTypes;
                              AStack_14.timeStamp.currentCryptoKey =
                                   AStack_51.timeStamp.currentCryptoKey;
                              AStack_14.timeStamp.hiddenValue = AStack_51.timeStamp.hiddenValue;
                              AStack_14.timeStamp.hiddenValueOld =
                                   AStack_51.timeStamp.hiddenValueOld;
                              AStack_14.timeStamp.fakeValue = AStack_51.timeStamp.fakeValue;
                              AStack_14.timeStamp.inited = AStack_51.timeStamp.inited;
                              AStack_14.timeStamp._21_3_ = AStack_51.timeStamp._21_3_;
                              AStack_14.persistant = AStack_51.persistant;
                              AStack_14._73_3_ = AStack_51._73_3_;
                              AStack_14.lastTimeStamp = AStack_51.lastTimeStamp;
                              AStack_14.avatarModifierPackageType =
                                   AStack_51.avatarModifierPackageType;
                              AStack_14.avatarModifierPackageAdditionPolicy =
                                   AStack_51.avatarModifierPackageAdditionPolicy;
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,AvatarModifierPackage]::
                              Dictionary_2_System_Int32Enum_AvatarModifierPackage__TryInsert
                                        (this,0x16,&AStack_14,(InsertionBehavior__Enum)uVar13,
                                         MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                         ->klass->rgctx_data[0x22].method);
                              pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)
                                       FUN_?(TypeInfo__AvatarModifierPackage__AvatarModifier
                                                    );
                              fVar52 = _UNK_?;
                              pFStack_53 = AvatarModifierPackageFactory_Const
                                                      (_UNK_?,(MethodInfo *)0x0);
                              uStack_54 = 0;
                              uStack_55 = 3;
                              if (iRam_? != 0) {
                                uVar3 = (uint)((ulonglong)&pFStack_53 >> 0xc);
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
                              if (pAVar7 == (AvatarModifierPackage_AvatarModifier__Array *)0x0)
                              goto code_?;
                              if ((int)pAVar7->max_length != 0) {
                                pAVar7->vector[0].avatarModifierType = 0;
                                pAVar7->vector[0].avatarModifierEffect = 3;
                                pAVar7->vector[0].value = pFStack_53;
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
                                pFStack_56 = AvatarModifierPackageFactory_Const
                                                        (c_01,(MethodInfo *)0x0);
                                uStack_57 = 0;
                                uStack_58 = 0x14;
                                if (iRam_? != 0) {
                                  uVar3 = (uint)((ulonglong)&pFStack_56 >> 0xc);
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
                                  pAVar7->vector[1].value = pFStack_56;
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
                                  AStack_59.id = 0;
                                  AStack_59._4_4_ = 0;
                                  AStack_59.duration.currentCryptoKey = 0;
                                  AStack_59.duration.hiddenValue.b1 = 0;
                                  AStack_59.duration.hiddenValue.b2 = 0;
                                  AStack_59.duration.hiddenValue.b3 = 0;
                                  AStack_59.duration.hiddenValue.b4 = 0;
                                  AStack_59.avatarModifierPackageType = 0;
                                  AStack_59.avatarModifierPackageAdditionPolicy = 0;
                                  AStack_59.duration.hiddenValueOld = (Byte__Array *)0x0;
                                  AStack_59.duration.fakeValue = 0.0;
                                  AStack_59.duration.inited = 0;
                                  AStack_59.duration._21_3_ = 0;
                                  AStack_59.avatarModifiers =
                                       (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                  AStack_59.actionsToTakeVsTypes =
                                       (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)
                                       0x0;
                                  AStack_59.timeStamp.currentCryptoKey = 0;
                                  AStack_59.timeStamp.hiddenValue.b1 = 0;
                                  AStack_59.timeStamp.hiddenValue.b2 = 0;
                                  AStack_59.timeStamp.hiddenValue.b3 = 0;
                                  AStack_59.timeStamp.hiddenValue.b4 = 0;
                                  AStack_59.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                  AStack_59.timeStamp.fakeValue = 0.0;
                                  AStack_59.timeStamp.inited = 0;
                                  AStack_59.timeStamp._21_3_ = 0;
                                  AStack_59.persistant = 0;
                                  AStack_59._73_3_ = 0;
                                  AStack_59.lastTimeStamp = 0.0;
                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                            (&AStack_59,AvatarModifierPackageType__Enum_SpeedMat,
                                             AvatarModifierPackageAdditionPolicy__Enum_Renew,fVar43,
                                             pAVar7,(
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                  uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
                                  AStack_14.id = AStack_59.id;
                                  AStack_14._4_4_ = AStack_59._4_4_;
                                  AStack_14.duration.currentCryptoKey =
                                       AStack_59.duration.currentCryptoKey;
                                  AStack_14.duration.hiddenValue = AStack_59.duration.hiddenValue;
                                  AStack_14.duration.hiddenValueOld =
                                       AStack_59.duration.hiddenValueOld;
                                  AStack_14.duration.fakeValue = AStack_59.duration.fakeValue;
                                  AStack_14.duration.inited = AStack_59.duration.inited;
                                  AStack_14.duration._21_3_ = AStack_59.duration._21_3_;
                                  AStack_14.avatarModifiers = AStack_59.avatarModifiers;
                                  AStack_14.actionsToTakeVsTypes = AStack_59.actionsToTakeVsTypes;
                                  AStack_14.timeStamp.currentCryptoKey =
                                       AStack_59.timeStamp.currentCryptoKey;
                                  AStack_14.timeStamp.hiddenValue =
                                       AStack_59.timeStamp.hiddenValue;
                                  AStack_14.timeStamp.hiddenValueOld =
                                       AStack_59.timeStamp.hiddenValueOld;
                                  AStack_14.timeStamp.fakeValue = AStack_59.timeStamp.fakeValue;
                                  AStack_14.timeStamp.inited = AStack_59.timeStamp.inited;
                                  AStack_14.timeStamp._21_3_ = AStack_59.timeStamp._21_3_;
                                  AStack_14.persistant = AStack_59.persistant;
                                  AStack_14._73_3_ = AStack_59._73_3_;
                                  AStack_14.lastTimeStamp = AStack_59.lastTimeStamp;
                                  AStack_14.avatarModifierPackageType =
                                       AStack_59.avatarModifierPackageType;
                                  AStack_14.avatarModifierPackageAdditionPolicy =
                                       AStack_59.avatarModifierPackageAdditionPolicy;
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,AvatarModifierPackage]::
                                  Dictionary_2_System_Int32Enum_AvatarModifierPackage__TryInsert
                                            (this,0x17,&AStack_14,(InsertionBehavior__Enum)uVar13,
                                             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                             ->klass->rgctx_data[0x22].method);
                                  pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)
                                           FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                  uStack_60 = AvatarModifierPackageFactory_Const
                                                         (c_01,(MethodInfo *)0x0);
                                  iStack_61 = 2;
                                  iStack_62 = 0x1b;
                                  func_?(&uStack_60);
                                  if (pAVar7 == (AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                  goto code_?;
                                  if ((int)pAVar7->max_length != 0) {
                                    pAVar7->vector[0].avatarModifierType = iStack_61;
                                    pAVar7->vector[0].avatarModifierEffect = iStack_62;
                                    *(undefined4 *)&pAVar7->vector[0].value = (undefined4)uStack_60
                                    ;
                                    *(undefined4 *)((longlong)&pAVar7->vector[0].value + 4) =
                                         uStack_60._4_4_;
                                    func_?(&pAVar7->vector[0].value);
                                    AStack_63.id = 0;
                                    AStack_63._4_4_ = 0;
                                    AStack_63.duration.currentCryptoKey = 0;
                                    AStack_63.duration.hiddenValue.b1 = 0;
                                    AStack_63.duration.hiddenValue.b2 = 0;
                                    AStack_63.duration.hiddenValue.b3 = 0;
                                    AStack_63.duration.hiddenValue.b4 = 0;
                                    AStack_63.avatarModifierPackageType = 0;
                                    AStack_63.avatarModifierPackageAdditionPolicy = 0;
                                    AStack_63.duration.hiddenValueOld = (Byte__Array *)0x0;
                                    AStack_63.duration.fakeValue = 0.0;
                                    AStack_63.duration.inited = 0;
                                    AStack_63.duration._21_3_ = 0;
                                    AStack_63.avatarModifiers =
                                         (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                    AStack_63.actionsToTakeVsTypes =
                                         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)
                                         0x0;
                                    AStack_63.timeStamp.currentCryptoKey = 0;
                                    AStack_63.timeStamp.hiddenValue.b1 = 0;
                                    AStack_63.timeStamp.hiddenValue.b2 = 0;
                                    AStack_63.timeStamp.hiddenValue.b3 = 0;
                                    AStack_63.timeStamp.hiddenValue.b4 = 0;
                                    AStack_63.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                    AStack_63.timeStamp.fakeValue = 0.0;
                                    AStack_63.timeStamp.inited = 0;
                                    AStack_63.timeStamp._21_3_ = 0;
                                    AStack_63.persistant = 0;
                                    AStack_63._73_3_ = 0;
                                    AStack_63.lastTimeStamp = 0.0;
                                    AvatarModifierPackage::AvatarModifierPackage__ctor
                                              (&AStack_63,
                                               AvatarModifierPackageType__Enum_CrumbleMat,
                                               AvatarModifierPackageAdditionPolicy__Enum_Renew,fVar43
                                               ,pAVar7,(
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                    AStack_14.id = AStack_63.id;
                                    AStack_14._4_4_ = AStack_63._4_4_;
                                    AStack_14.duration.currentCryptoKey =
                                         AStack_63.duration.currentCryptoKey;
                                    AStack_14.duration.hiddenValue =
                                         AStack_63.duration.hiddenValue;
                                    AStack_14.duration.hiddenValueOld =
                                         AStack_63.duration.hiddenValueOld;
                                    AStack_14.duration.fakeValue = AStack_63.duration.fakeValue;
                                    AStack_14.duration.inited = AStack_63.duration.inited;
                                    AStack_14.duration._21_3_ = AStack_63.duration._21_3_;
                                    AStack_14.avatarModifiers = AStack_63.avatarModifiers;
                                    AStack_14.actionsToTakeVsTypes =
                                         AStack_63.actionsToTakeVsTypes;
                                    AStack_14.timeStamp.currentCryptoKey =
                                         AStack_63.timeStamp.currentCryptoKey;
                                    AStack_14.timeStamp.hiddenValue =
                                         AStack_63.timeStamp.hiddenValue;
                                    AStack_14.timeStamp.hiddenValueOld =
                                         AStack_63.timeStamp.hiddenValueOld;
                                    AStack_14.timeStamp.fakeValue = AStack_63.timeStamp.fakeValue;
                                    AStack_14.timeStamp.inited = AStack_63.timeStamp.inited;
                                    AStack_14.timeStamp._21_3_ = AStack_63.timeStamp._21_3_;
                                    AStack_14.persistant = AStack_63.persistant;
                                    AStack_14._73_3_ = AStack_63._73_3_;
                                    AStack_14.lastTimeStamp = AStack_63.lastTimeStamp;
                                    AStack_14.avatarModifierPackageType =
                                         AStack_63.avatarModifierPackageType;
                                    AStack_14.avatarModifierPackageAdditionPolicy =
                                         AStack_63.avatarModifierPackageAdditionPolicy;
                                    FUN_?(this,0x18,&AStack_14);
                                    pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)
                                             FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                    fVar64 = _UNK_?;
                                    uStack_65 = AvatarModifierPackageFactory_Const
                                                           (_UNK_?,(MethodInfo *)0x0);
                                    iStack_66 = 1;
                                    iStack_67 = 0x16;
                                    func_?(&uStack_65);
                                    if (pAVar7 == (AvatarModifierPackage_AvatarModifier__Array *)0x0
                                       ) goto code_?;
                                    if ((int)pAVar7->max_length != 0) {
                                      pAVar7->vector[0].avatarModifierType = iStack_66;
                                      pAVar7->vector[0].avatarModifierEffect = iStack_67;
                                      *(undefined4 *)&pAVar7->vector[0].value =
                                           (undefined4)uStack_65;
                                      *(undefined4 *)((longlong)&pAVar7->vector[0].value + 4) =
                                           uStack_65._4_4_;
                                      func_?(&pAVar7->vector[0].value);
                                      duration_00 = _UNK_?;
                                      AStack_68.id = 0;
                                      AStack_68._4_4_ = 0;
                                      AStack_68.duration.currentCryptoKey = 0;
                                      AStack_68.duration.hiddenValue.b1 = 0;
                                      AStack_68.duration.hiddenValue.b2 = 0;
                                      AStack_68.duration.hiddenValue.b3 = 0;
                                      AStack_68.duration.hiddenValue.b4 = 0;
                                      AStack_68.avatarModifierPackageType = 0;
                                      AStack_68.avatarModifierPackageAdditionPolicy = 0;
                                      AStack_68.duration.hiddenValueOld = (Byte__Array *)0x0;
                                      AStack_68.duration.fakeValue = 0.0;
                                      AStack_68.duration.inited = 0;
                                      AStack_68.duration._21_3_ = 0;
                                      AStack_68.avatarModifiers =
                                           (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                      AStack_68.actionsToTakeVsTypes =
                                           (Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                            *)0x0;
                                      AStack_68.timeStamp.currentCryptoKey = 0;
                                      AStack_68.timeStamp.hiddenValue.b1 = 0;
                                      AStack_68.timeStamp.hiddenValue.b2 = 0;
                                      AStack_68.timeStamp.hiddenValue.b3 = 0;
                                      AStack_68.timeStamp.hiddenValue.b4 = 0;
                                      AStack_68.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
                                      AStack_68.timeStamp.fakeValue = 0.0;
                                      AStack_68.timeStamp.inited = 0;
                                      AStack_68.timeStamp._21_3_ = 0;
                                      AStack_68.persistant = 0;
                                      AStack_68._73_3_ = 0;
                                      AStack_68.lastTimeStamp = 0.0;
                                      AvatarModifierPackage::AvatarModifierPackage__ctor
                                                (&AStack_68,AvatarModifierPackageType__Enum_Poison,
                                                 AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                 _UNK_?,pAVar7,
                                                 (Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                      AStack_14.id = AStack_68.id;
                                      AStack_14._4_4_ = AStack_68._4_4_;
                                      AStack_14.duration.currentCryptoKey =
                                           AStack_68.duration.currentCryptoKey;
                                      AStack_14.duration.hiddenValue =
                                           AStack_68.duration.hiddenValue;
                                      AStack_14.duration.hiddenValueOld =
                                           AStack_68.duration.hiddenValueOld;
                                      AStack_14.duration.fakeValue = AStack_68.duration.fakeValue;
                                      AStack_14.duration.inited = AStack_68.duration.inited;
                                      AStack_14.duration._21_3_ = AStack_68.duration._21_3_;
                                      AStack_14.avatarModifiers = AStack_68.avatarModifiers;
                                      AStack_14.actionsToTakeVsTypes =
                                           AStack_68.actionsToTakeVsTypes;
                                      AStack_14.timeStamp.currentCryptoKey =
                                           AStack_68.timeStamp.currentCryptoKey;
                                      AStack_14.timeStamp.hiddenValue =
                                           AStack_68.timeStamp.hiddenValue;
                                      AStack_14.timeStamp.hiddenValueOld =
                                           AStack_68.timeStamp.hiddenValueOld;
                                      AStack_14.timeStamp.fakeValue =
                                           AStack_68.timeStamp.fakeValue;
                                      AStack_14.timeStamp.inited = AStack_68.timeStamp.inited;
                                      AStack_14.timeStamp._21_3_ = AStack_68.timeStamp._21_3_;
                                      AStack_14.persistant = AStack_68.persistant;
                                      AStack_14._73_3_ = AStack_68._73_3_;
                                      AStack_14.lastTimeStamp = AStack_68.lastTimeStamp;
                                      AStack_14.avatarModifierPackageType =
                                           AStack_68.avatarModifierPackageType;
                                      AStack_14.avatarModifierPackageAdditionPolicy =
                                           AStack_68.avatarModifierPackageAdditionPolicy;
                                      FUN_?(this,4,&AStack_14);
                                      pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)
                                               FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                      c_00 = TypeRef__System__Activator__T._0_4_;
                                      uStack_69 = AvatarModifierPackageFactory_Const
                                                             (TypeRef__System__Activator__T._0_4_,
                                                              (MethodInfo *)0x0);
                                      iStack_70 = 1;
                                      iStack_71 = 0xf;
                                      func_?(&uStack_69);
                                      if (pAVar7 == (AvatarModifierPackage_AvatarModifier__Array *)
                                                    0x0) goto code_?;
                                      if ((int)pAVar7->max_length != 0) {
                                        pAVar7->vector[0].avatarModifierType = iStack_70;
                                        pAVar7->vector[0].avatarModifierEffect = iStack_71;
                                        *(undefined4 *)&pAVar7->vector[0].value =
                                             (undefined4)uStack_69;
                                        *(undefined4 *)((longlong)&pAVar7->vector[0].value + 4) =
                                             uStack_69._4_4_;
                                        func_?(&pAVar7->vector[0].value);
                                        uStack_72 = AvatarModifierPackageFactory_Const
                                                               (c_00,(MethodInfo *)0x0);
                                        iStack_73 = 1;
                                        iStack_74 = 0x15;
                                        func_?(&uStack_72);
                                        if (1 < (uint)pAVar7->max_length) {
                                          pAVar7->vector[1].avatarModifierType = iStack_73;
                                          pAVar7->vector[1].avatarModifierEffect = iStack_74;
                                          *(undefined4 *)&pAVar7->vector[1].value =
                                               (undefined4)uStack_72;
                                          *(undefined4 *)((longlong)&pAVar7->vector[1].value + 4) =
                                               uStack_72._4_4_;
                                          func_?(&pAVar7->vector[1].value);
                                          pDVar75 = (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)FUN_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                                                  );
                                          mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::
                                          Int32Enum,GamePassesHighScoreList+HighScoreListData]::
                                          Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                                                    (pDVar75,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                                                  );
                                          if (pDVar75 !=
                                              (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                               *)0x0) {
                                            uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2);
                                            mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::Int32Enum,System::Int32Enum]::
                                            Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
                                                      ((
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                                                  pDVar75,4,2,(InsertionBehavior__Enum)uVar13,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  ->klass->rgctx_data[0x22].method);
                                            AStack_76.id = 0;
                                            AStack_76._4_4_ = 0;
                                            AStack_76.duration.currentCryptoKey = 0;
                                            AStack_76.duration.hiddenValue.b1 = 0;
                                            AStack_76.duration.hiddenValue.b2 = 0;
                                            AStack_76.duration.hiddenValue.b3 = 0;
                                            AStack_76.duration.hiddenValue.b4 = 0;
                                            AStack_76.avatarModifierPackageType = 0;
                                            AStack_76.avatarModifierPackageAdditionPolicy = 0;
                                            AStack_76.duration.hiddenValueOld = (Byte__Array *)0x0;
                                            AStack_76.duration.fakeValue = 0.0;
                                            AStack_76.duration.inited = 0;
                                            AStack_76.duration._21_3_ = 0;
                                            AStack_76.avatarModifiers =
                                                 (AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                            AStack_76.actionsToTakeVsTypes =
                                                 (Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                            AStack_76.timeStamp.currentCryptoKey = 0;
                                            AStack_76.timeStamp.hiddenValue.b1 = 0;
                                            AStack_76.timeStamp.hiddenValue.b2 = 0;
                                            AStack_76.timeStamp.hiddenValue.b3 = 0;
                                            AStack_76.timeStamp.hiddenValue.b4 = 0;
                                            AStack_76.timeStamp.hiddenValueOld = (Byte__Array *)0x0
                                            ;
                                            AStack_76.timeStamp.fakeValue = 0.0;
                                            AStack_76.timeStamp.inited = 0;
                                            AStack_76.timeStamp._21_3_ = 0;
                                            AStack_76.persistant = 0;
                                            AStack_76._73_3_ = 0;
                                            AStack_76.lastTimeStamp = 0.0;
                                            AvatarModifierPackage::AvatarModifierPackage__ctor
                                                      (&AStack_76,
                                                       AvatarModifierPackageType__Enum_HealingMat,
                                                                                                              
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  fVar43,pAVar7,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)pDVar75,0,(MethodInfo *)0x0);
                                            AStack_14.id = AStack_76.id;
                                            AStack_14._4_4_ = AStack_76._4_4_;
                                            AStack_14.duration.currentCryptoKey =
                                                 AStack_76.duration.currentCryptoKey;
                                            AStack_14.duration.hiddenValue =
                                                 AStack_76.duration.hiddenValue;
                                            AStack_14.duration.hiddenValueOld =
                                                 AStack_76.duration.hiddenValueOld;
                                            AStack_14.duration.fakeValue =
                                                 AStack_76.duration.fakeValue;
                                            AStack_14.duration.inited = AStack_76.duration.inited;
                                            AStack_14.duration._21_3_ = AStack_76.duration._21_3_;
                                            AStack_14.avatarModifiers = AStack_76.avatarModifiers;
                                            AStack_14.actionsToTakeVsTypes =
                                                 AStack_76.actionsToTakeVsTypes;
                                            AStack_14.timeStamp.currentCryptoKey =
                                                 AStack_76.timeStamp.currentCryptoKey;
                                            AStack_14.timeStamp.hiddenValue =
                                                 AStack_76.timeStamp.hiddenValue;
                                            AStack_14.timeStamp.hiddenValueOld =
                                                 AStack_76.timeStamp.hiddenValueOld;
                                            AStack_14.timeStamp.fakeValue =
                                                 AStack_76.timeStamp.fakeValue;
                                            AStack_14.timeStamp.inited =
                                                 AStack_76.timeStamp.inited;
                                            AStack_14.timeStamp._21_3_ =
                                                 AStack_76.timeStamp._21_3_;
                                            AStack_14.persistant = AStack_76.persistant;
                                            AStack_14._73_3_ = AStack_76._73_3_;
                                            AStack_14.lastTimeStamp = AStack_76.lastTimeStamp;
                                            AStack_14.avatarModifierPackageType =
                                                 AStack_76.avatarModifierPackageType;
                                            AStack_14.avatarModifierPackageAdditionPolicy =
                                                 AStack_76.avatarModifierPackageAdditionPolicy;
                                            FUN_?(this,0x15,&AStack_14);
                                            pAVar7 = (AvatarModifierPackage_AvatarModifier__Array *)
                                                     FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                            uStack_77 = AvatarModifierPackageFactory_Const
                                                                   (_UNK_?,(MethodInfo *)0x0
                                                                   );
                                            iStack_78 = 1;
                                            iStack_79 = 0x17;
                                            func_?(&uStack_77);
                                            if (pAVar7 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                            {
                                              if ((int)pAVar7->max_length == 0)
                                              goto code_?;
                                              pAVar7->vector[0].avatarModifierType = iStack_78;
                                              pAVar7->vector[0].avatarModifierEffect = iStack_79;
                                              *(undefined4 *)&pAVar7->vector[0].value =
                                                   (undefined4)uStack_77;
                                              *(undefined4 *)
                                               ((longlong)&pAVar7->vector[0].value + 4) =
                                                   uStack_77._4_4_;
                                              func_?(&pAVar7->vector[0].value);
                                              AStack_80.id = 0;
                                              AStack_80._4_4_ = 0;
                                              AStack_80.duration.currentCryptoKey = 0;
                                              AStack_80.duration.hiddenValue.b1 = 0;
                                              AStack_80.duration.hiddenValue.b2 = 0;
                                              AStack_80.duration.hiddenValue.b3 = 0;
                                              AStack_80.duration.hiddenValue.b4 = 0;
                                              AStack_80.avatarModifierPackageType = 0;
                                              AStack_80.avatarModifierPackageAdditionPolicy = 0;
                                              AStack_80.duration.hiddenValueOld =
                                                   (Byte__Array *)0x0;
                                              AStack_80.duration.fakeValue = 0.0;
                                              AStack_80.duration.inited = 0;
                                              AStack_80.duration._21_3_ = 0;
                                              AStack_80.avatarModifiers =
                                                   (AvatarModifierPackage_AvatarModifier__Array *)
                                                   0x0;
                                              AStack_80.actionsToTakeVsTypes =
                                                   (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                              AStack_80.timeStamp.currentCryptoKey = 0;
                                              AStack_80.timeStamp.hiddenValue.b1 = 0;
                                              AStack_80.timeStamp.hiddenValue.b2 = 0;
                                              AStack_80.timeStamp.hiddenValue.b3 = 0;
                                              AStack_80.timeStamp.hiddenValue.b4 = 0;
                                              AStack_80.timeStamp.hiddenValueOld =
                                                   (Byte__Array *)0x0;
                                              AStack_80.timeStamp.fakeValue = 0.0;
                                              AStack_80.timeStamp.inited = 0;
                                              AStack_80.timeStamp._21_3_ = 0;
                                              AStack_80.persistant = 0;
                                              AStack_80._73_3_ = 0;
                                              AStack_80.lastTimeStamp = 0.0;
                                              AvatarModifierPackage::AvatarModifierPackage__ctor
                                                        (&AStack_80,
                                                         AvatarModifierPackageType__Enum_Lethal,
                                                                                                                  
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  duration_00,pAVar7,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                              AStack_14.id = AStack_80.id;
                                              AStack_14._4_4_ = AStack_80._4_4_;
                                              AStack_14.duration.currentCryptoKey =
                                                   AStack_80.duration.currentCryptoKey;
                                              AStack_14.duration.hiddenValue =
                                                   AStack_80.duration.hiddenValue;
                                              AStack_14.duration.hiddenValueOld =
                                                   AStack_80.duration.hiddenValueOld;
                                              AStack_14.duration.fakeValue =
                                                   AStack_80.duration.fakeValue;
                                              AStack_14.duration.inited =
                                                   AStack_80.duration.inited;
                                              AStack_14.duration._21_3_ =
                                                   AStack_80.duration._21_3_;
                                              AStack_14.avatarModifiers =
                                                   AStack_80.avatarModifiers;
                                              AStack_14.actionsToTakeVsTypes =
                                                   AStack_80.actionsToTakeVsTypes;
                                              AStack_14.timeStamp.currentCryptoKey =
                                                   AStack_80.timeStamp.currentCryptoKey;
                                              AStack_14.timeStamp.hiddenValue =
                                                   AStack_80.timeStamp.hiddenValue;
                                              AStack_14.timeStamp.hiddenValueOld =
                                                   AStack_80.timeStamp.hiddenValueOld;
                                              AStack_14.timeStamp.fakeValue =
                                                   AStack_80.timeStamp.fakeValue;
                                              AStack_14.timeStamp.inited =
                                                   AStack_80.timeStamp.inited;
                                              AStack_14.timeStamp._21_3_ =
                                                   AStack_80.timeStamp._21_3_;
                                              AStack_14.persistant = AStack_80.persistant;
                                              AStack_14._73_3_ = AStack_80._73_3_;
                                              AStack_14.lastTimeStamp = AStack_80.lastTimeStamp;
                                              AStack_14.avatarModifierPackageType =
                                                   AStack_80.avatarModifierPackageType;
                                              AStack_14.avatarModifierPackageAdditionPolicy =
                                                   AStack_80.avatarModifierPackageAdditionPolicy;
                                              FUN_?(this,0x14,&AStack_14);
                                              pAVar7 = (AvatarModifierPackage_AvatarModifier__Array
                                                        *)FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                              uStack_81 = AvatarModifierPackageFactory_Const
                                                                     (_UNK_?,
                                                                      (MethodInfo *)0x0);
                                              iStack_82 = 1;
                                              iStack_83 = 0xe;
                                              func_?(&uStack_81);
                                              if (pAVar7 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                              {
                                                if ((int)pAVar7->max_length == 0)
                                                goto code_?;
                                                pAVar7->vector[0].avatarModifierType = iStack_82;
                                                pAVar7->vector[0].avatarModifierEffect = iStack_83;
                                                *(undefined4 *)&pAVar7->vector[0].value =
                                                     (undefined4)uStack_81;
                                                *(undefined4 *)
                                                 ((longlong)&pAVar7->vector[0].value + 4) =
                                                     uStack_81._4_4_;
                                                func_?(&pAVar7->vector[0].value);
                                                AStack_84.id = 0;
                                                AStack_84._4_4_ = 0;
                                                AStack_84.duration.currentCryptoKey = 0;
                                                AStack_84.duration.hiddenValue.b1 = 0;
                                                AStack_84.duration.hiddenValue.b2 = 0;
                                                AStack_84.duration.hiddenValue.b3 = 0;
                                                AStack_84.duration.hiddenValue.b4 = 0;
                                                AStack_84.avatarModifierPackageType = 0;
                                                AStack_84.avatarModifierPackageAdditionPolicy = 0;
                                                AStack_84.duration.hiddenValueOld =
                                                     (Byte__Array *)0x0;
                                                AStack_84.duration.fakeValue = 0.0;
                                                AStack_84.duration.inited = 0;
                                                AStack_84.duration._21_3_ = 0;
                                                AStack_84.avatarModifiers =
                                                     (AvatarModifierPackage_AvatarModifier__Array *)
                                                     0x0;
                                                AStack_84.actionsToTakeVsTypes =
                                                     (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                                AStack_84.timeStamp.currentCryptoKey = 0;
                                                AStack_84.timeStamp.hiddenValue.b1 = 0;
                                                AStack_84.timeStamp.hiddenValue.b2 = 0;
                                                AStack_84.timeStamp.hiddenValue.b3 = 0;
                                                AStack_84.timeStamp.hiddenValue.b4 = 0;
                                                AStack_84.timeStamp.hiddenValueOld =
                                                     (Byte__Array *)0x0;
                                                AStack_84.timeStamp.fakeValue = 0.0;
                                                AStack_84.timeStamp.inited = 0;
                                                AStack_84.timeStamp._21_3_ = 0;
                                                AStack_84.persistant = 0;
                                                AStack_84._73_3_ = 0;
                                                AStack_84.lastTimeStamp = 0.0;
                                                AvatarModifierPackage::AvatarModifierPackage__ctor
                                                          (&AStack_84,
                                                                                                                      
                                                  AvatarModifierPackageType__Enum_InstantDeath,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  duration_00,pAVar7,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                                AStack_14.id = AStack_84.id;
                                                AStack_14._4_4_ = AStack_84._4_4_;
                                                AStack_14.duration.currentCryptoKey =
                                                     AStack_84.duration.currentCryptoKey;
                                                AStack_14.duration.hiddenValue =
                                                     AStack_84.duration.hiddenValue;
                                                AStack_14.duration.hiddenValueOld =
                                                     AStack_84.duration.hiddenValueOld;
                                                AStack_14.duration.fakeValue =
                                                     AStack_84.duration.fakeValue;
                                                AStack_14.duration.inited =
                                                     AStack_84.duration.inited;
                                                AStack_14.duration._21_3_ =
                                                     AStack_84.duration._21_3_;
                                                AStack_14.avatarModifiers =
                                                     AStack_84.avatarModifiers;
                                                AStack_14.actionsToTakeVsTypes =
                                                     AStack_84.actionsToTakeVsTypes;
                                                AStack_14.timeStamp.currentCryptoKey =
                                                     AStack_84.timeStamp.currentCryptoKey;
                                                AStack_14.timeStamp.hiddenValue =
                                                     AStack_84.timeStamp.hiddenValue;
                                                AStack_14.timeStamp.hiddenValueOld =
                                                     AStack_84.timeStamp.hiddenValueOld;
                                                AStack_14.timeStamp.fakeValue =
                                                     AStack_84.timeStamp.fakeValue;
                                                AStack_14.timeStamp.inited =
                                                     AStack_84.timeStamp.inited;
                                                AStack_14.timeStamp._21_3_ =
                                                     AStack_84.timeStamp._21_3_;
                                                AStack_14.persistant = AStack_84.persistant;
                                                AStack_14._73_3_ = AStack_84._73_3_;
                                                AStack_14.lastTimeStamp = AStack_84.lastTimeStamp;
                                                AStack_14.avatarModifierPackageType =
                                                     AStack_84.avatarModifierPackageType;
                                                AStack_14.avatarModifierPackageAdditionPolicy =
                                                     AStack_84.avatarModifierPackageAdditionPolicy;
                                                FUN_?(this,6,&AStack_14);
                                                pAVar7 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                uStack_85 = AvatarModifierPackageFactory_Const
                                                                       (c,(MethodInfo *)0x0);
                                                iStack_86 = 2;
                                                iStack_87 = 0x12;
                                                func_?(&uStack_85);
                                                if (pAVar7 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                {
                                                  if ((int)pAVar7->max_length == 0)
                                                  goto code_?;
                                                  pAVar7->vector[0].avatarModifierType = iStack_86;
                                                  pAVar7->vector[0].avatarModifierEffect =
                                                       iStack_87;
                                                  *(undefined4 *)&pAVar7->vector[0].value =
                                                       (undefined4)uStack_85;
                                                  *(undefined4 *)
                                                   ((longlong)&pAVar7->vector[0].value + 4) =
                                                       uStack_85._4_4_;
                                                  func_?(&pAVar7->vector[0].value);
                                                  AStack_88.id = 0;
                                                  AStack_88._4_4_ = 0;
                                                  AStack_88.duration.currentCryptoKey = 0;
                                                  AStack_88.duration.hiddenValue.b1 = 0;
                                                  AStack_88.duration.hiddenValue.b2 = 0;
                                                  AStack_88.duration.hiddenValue.b3 = 0;
                                                  AStack_88.duration.hiddenValue.b4 = 0;
                                                  AStack_88.avatarModifierPackageType = 0;
                                                  AStack_88.avatarModifierPackageAdditionPolicy = 0
                                                  ;
                                                  AStack_88.duration.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_88.duration.fakeValue = 0.0;
                                                  AStack_88.duration.inited = 0;
                                                  AStack_88.duration._21_3_ = 0;
                                                  AStack_88.avatarModifiers =
                                                       (AvatarModifierPackage_AvatarModifier__Array
                                                        *)0x0;
                                                  AStack_88.actionsToTakeVsTypes =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                                  AStack_88.timeStamp.currentCryptoKey = 0;
                                                  AStack_88.timeStamp.hiddenValue.b1 = 0;
                                                  AStack_88.timeStamp.hiddenValue.b2 = 0;
                                                  AStack_88.timeStamp.hiddenValue.b3 = 0;
                                                  AStack_88.timeStamp.hiddenValue.b4 = 0;
                                                  AStack_88.timeStamp.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_88.timeStamp.fakeValue = 0.0;
                                                  AStack_88.timeStamp.inited = 0;
                                                  AStack_88.timeStamp._21_3_ = 0;
                                                  AStack_88.persistant = 0;
                                                  AStack_88._73_3_ = 0;
                                                  AStack_88.lastTimeStamp = 0.0;
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_88,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_WallJump,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  _UNK_?,pAVar7,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                                  AStack_14.id = AStack_88.id;
                                                  AStack_14._4_4_ = AStack_88._4_4_;
                                                  AStack_14.duration.currentCryptoKey =
                                                       AStack_88.duration.currentCryptoKey;
                                                  AStack_14.duration.hiddenValue =
                                                       AStack_88.duration.hiddenValue;
                                                  AStack_14.duration.hiddenValueOld =
                                                       AStack_88.duration.hiddenValueOld;
                                                  AStack_14.duration.fakeValue =
                                                       AStack_88.duration.fakeValue;
                                                  AStack_14.duration.inited =
                                                       AStack_88.duration.inited;
                                                  AStack_14.duration._21_3_ =
                                                       AStack_88.duration._21_3_;
                                                  AStack_14.avatarModifiers =
                                                       AStack_88.avatarModifiers;
                                                  AStack_14.actionsToTakeVsTypes =
                                                       AStack_88.actionsToTakeVsTypes;
                                                  AStack_14.timeStamp.currentCryptoKey =
                                                       AStack_88.timeStamp.currentCryptoKey;
                                                  AStack_14.timeStamp.hiddenValue =
                                                       AStack_88.timeStamp.hiddenValue;
                                                  AStack_14.timeStamp.hiddenValueOld =
                                                       AStack_88.timeStamp.hiddenValueOld;
                                                  AStack_14.timeStamp.fakeValue =
                                                       AStack_88.timeStamp.fakeValue;
                                                  AStack_14.timeStamp.inited =
                                                       AStack_88.timeStamp.inited;
                                                  AStack_14.timeStamp._21_3_ =
                                                       AStack_88.timeStamp._21_3_;
                                                  AStack_14.persistant = AStack_88.persistant;
                                                  AStack_14._73_3_ = AStack_88._73_3_;
                                                  AStack_14.lastTimeStamp =
                                                       AStack_88.lastTimeStamp;
                                                  AStack_14.avatarModifierPackageType =
                                                       AStack_88.avatarModifierPackageType;
                                                  AStack_14.avatarModifierPackageAdditionPolicy =
                                                       AStack_88.
                                                       avatarModifierPackageAdditionPolicy;
                                                  FUN_?(this,5,&AStack_14);
                                                  pAVar7 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                  uStack_89 = AvatarModifierPackageFactory_Const
                                                                         (0.0,(MethodInfo *)0x0);
                                                  iStack_90 = 2;
                                                  iStack_91 = 0xc;
                                                  func_?(&uStack_89);
                                                  if (pAVar7 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    if ((int)pAVar7->max_length == 0)
                                                    goto code_?;
                                                    pAVar7->vector[0].avatarModifierType =
                                                         iStack_90;
                                                    pAVar7->vector[0].avatarModifierEffect =
                                                         iStack_91;
                                                    *(undefined4 *)&pAVar7->vector[0].value =
                                                         (undefined4)uStack_89;
                                                    *(undefined4 *)
                                                     ((longlong)&pAVar7->vector[0].value + 4) =
                                                         uStack_89._4_4_;
                                                    func_?(&pAVar7->vector[0].value);
                                                    AStack_92.id = 0;
                                                    AStack_92._4_4_ = 0;
                                                    AStack_92.duration.currentCryptoKey = 0;
                                                    AStack_92.duration.hiddenValue.b1 = 0;
                                                    AStack_92.duration.hiddenValue.b2 = 0;
                                                    AStack_92.duration.hiddenValue.b3 = 0;
                                                    AStack_92.duration.hiddenValue.b4 = 0;
                                                    AStack_92.avatarModifierPackageType = 0;
                                                    AStack_92.avatarModifierPackageAdditionPolicy =
                                                         0;
                                                    AStack_92.duration.hiddenValueOld =
                                                         (Byte__Array *)0x0;
                                                    AStack_92.duration.fakeValue = 0.0;
                                                    AStack_92.duration.inited = 0;
                                                    AStack_92.duration._21_3_ = 0;
                                                    AStack_92.avatarModifiers =
                                                         (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                  AStack_92.actionsToTakeVsTypes =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                                  AStack_92.timeStamp.currentCryptoKey = 0;
                                                  AStack_92.timeStamp.hiddenValue.b1 = 0;
                                                  AStack_92.timeStamp.hiddenValue.b2 = 0;
                                                  AStack_92.timeStamp.hiddenValue.b3 = 0;
                                                  AStack_92.timeStamp.hiddenValue.b4 = 0;
                                                  AStack_92.timeStamp.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_92.timeStamp.fakeValue = 0.0;
                                                  AStack_92.timeStamp.inited = 0;
                                                  AStack_92.timeStamp._21_3_ = 0;
                                                  AStack_92.persistant = 0;
                                                  AStack_92._73_3_ = 0;
                                                  AStack_92.lastTimeStamp = 0.0;
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_92,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_NoFriction,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  _UNK_?,pAVar7,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                                  AStack_14.id = AStack_92.id;
                                                  AStack_14._4_4_ = AStack_92._4_4_;
                                                  AStack_14.duration.currentCryptoKey =
                                                       AStack_92.duration.currentCryptoKey;
                                                  AStack_14.duration.hiddenValue =
                                                       AStack_92.duration.hiddenValue;
                                                  AStack_14.duration.hiddenValueOld =
                                                       AStack_92.duration.hiddenValueOld;
                                                  AStack_14.duration.fakeValue =
                                                       AStack_92.duration.fakeValue;
                                                  AStack_14.duration.inited =
                                                       AStack_92.duration.inited;
                                                  AStack_14.duration._21_3_ =
                                                       AStack_92.duration._21_3_;
                                                  AStack_14.avatarModifiers =
                                                       AStack_92.avatarModifiers;
                                                  AStack_14.actionsToTakeVsTypes =
                                                       AStack_92.actionsToTakeVsTypes;
                                                  AStack_14.timeStamp.currentCryptoKey =
                                                       AStack_92.timeStamp.currentCryptoKey;
                                                  AStack_14.timeStamp.hiddenValue =
                                                       AStack_92.timeStamp.hiddenValue;
                                                  AStack_14.timeStamp.hiddenValueOld =
                                                       AStack_92.timeStamp.hiddenValueOld;
                                                  AStack_14.timeStamp.fakeValue =
                                                       AStack_92.timeStamp.fakeValue;
                                                  AStack_14.timeStamp.inited =
                                                       AStack_92.timeStamp.inited;
                                                  AStack_14.timeStamp._21_3_ =
                                                       AStack_92.timeStamp._21_3_;
                                                  AStack_14.persistant = AStack_92.persistant;
                                                  AStack_14._73_3_ = AStack_92._73_3_;
                                                  AStack_14.lastTimeStamp =
                                                       AStack_92.lastTimeStamp;
                                                  AStack_14.avatarModifierPackageType =
                                                       AStack_92.avatarModifierPackageType;
                                                  AStack_14.avatarModifierPackageAdditionPolicy =
                                                       AStack_92.
                                                       avatarModifierPackageAdditionPolicy;
                                                  FUN_?(this,7,&AStack_14);
                                                  pAVar7 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                  uStack_93 = AvatarModifierPackageFactory_Const
                                                                         (fVar64,(MethodInfo *)0x0);
                                                  uStack_94 = 1;
                                                  uStack_95 = 0x13;
                                                  func_?(&uStack_93);
                                                  if (pAVar7 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    uStack_96 = uStack_94;
                                                    uStack_97 = uStack_95;
                                                    uStack_98 = (undefined4)uStack_93;
                                                    uStack_99 = uStack_93._4_4_;
                                                    FUN_?(pAVar7,0,&uStack_96);
                                                    AStack_100.id = 0;
                                                    AStack_100._4_4_ = 0;
                                                    AStack_100.duration.currentCryptoKey = 0;
                                                    AStack_100.duration.hiddenValue.b1 = 0;
                                                    AStack_100.duration.hiddenValue.b2 = 0;
                                                    AStack_100.duration.hiddenValue.b3 = 0;
                                                    AStack_100.duration.hiddenValue.b4 = 0;
                                                    AStack_100.avatarModifierPackageType = 0;
                                                    AStack_100.avatarModifierPackageAdditionPolicy =
                                                         0;
                                                    AStack_100.duration.hiddenValueOld =
                                                         (Byte__Array *)0x0;
                                                    AStack_100.duration.fakeValue = 0.0;
                                                    AStack_100.duration.inited = 0;
                                                    AStack_100.duration._21_3_ = 0;
                                                    AStack_100.avatarModifiers =
                                                         (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                  AStack_100.actionsToTakeVsTypes =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                                  AStack_100.timeStamp.currentCryptoKey = 0;
                                                  AStack_100.timeStamp.hiddenValue.b1 = 0;
                                                  AStack_100.timeStamp.hiddenValue.b2 = 0;
                                                  AStack_100.timeStamp.hiddenValue.b3 = 0;
                                                  AStack_100.timeStamp.hiddenValue.b4 = 0;
                                                  AStack_100.timeStamp.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_100.timeStamp.fakeValue = 0.0;
                                                  AStack_100.timeStamp.inited = 0;
                                                  AStack_100.timeStamp._21_3_ = 0;
                                                  AStack_100.persistant = 0;
                                                  AStack_100._73_3_ = 0;
                                                  AStack_100.lastTimeStamp = 0.0;
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_100,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_FlamerBurn,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  duration,pAVar7,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                                  AStack_14.id = AStack_100.id;
                                                  AStack_14._4_4_ = AStack_100._4_4_;
                                                  AStack_14.duration.currentCryptoKey =
                                                       AStack_100.duration.currentCryptoKey;
                                                  AStack_14.duration.hiddenValue =
                                                       AStack_100.duration.hiddenValue;
                                                  AStack_14.duration.hiddenValueOld =
                                                       AStack_100.duration.hiddenValueOld;
                                                  AStack_14.duration.fakeValue =
                                                       AStack_100.duration.fakeValue;
                                                  AStack_14.duration.inited =
                                                       AStack_100.duration.inited;
                                                  AStack_14.duration._21_3_ =
                                                       AStack_100.duration._21_3_;
                                                  AStack_14.avatarModifiers =
                                                       AStack_100.avatarModifiers;
                                                  AStack_14.actionsToTakeVsTypes =
                                                       AStack_100.actionsToTakeVsTypes;
                                                  AStack_14.timeStamp.currentCryptoKey =
                                                       AStack_100.timeStamp.currentCryptoKey;
                                                  AStack_14.timeStamp.hiddenValue =
                                                       AStack_100.timeStamp.hiddenValue;
                                                  AStack_14.timeStamp.hiddenValueOld =
                                                       AStack_100.timeStamp.hiddenValueOld;
                                                  AStack_14.timeStamp.fakeValue =
                                                       AStack_100.timeStamp.fakeValue;
                                                  AStack_14.timeStamp.inited =
                                                       AStack_100.timeStamp.inited;
                                                  AStack_14.timeStamp._21_3_ =
                                                       AStack_100.timeStamp._21_3_;
                                                  AStack_14.persistant = AStack_100.persistant;
                                                  AStack_14._73_3_ = AStack_100._73_3_;
                                                  AStack_14.lastTimeStamp =
                                                       AStack_100.lastTimeStamp;
                                                  AStack_14.avatarModifierPackageType =
                                                       AStack_100.avatarModifierPackageType;
                                                  AStack_14.avatarModifierPackageAdditionPolicy =
                                                       AStack_100.
                                                       avatarModifierPackageAdditionPolicy;
                                                  FUN_?(this,8,&AStack_14);
                                                  pAVar7 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                  uStack_101 = AvatarModifierPackageFactory_Const
                                                                         (duration,(MethodInfo *)0x0
                                                                         );
                                                  uStack_102 = 0;
                                                  func_?(&uStack_101);
                                                  if (pAVar7 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    uStack_96 = (undefined4)uStack_102;
                                                    uStack_97 = uStack_102._4_4_;
                                                    uStack_98 = (undefined4)uStack_101;
                                                    uStack_99 = uStack_101._4_4_;
                                                    FUN_?(pAVar7,0,&uStack_96);
                                                    uStack_103 = AvatarModifierPackageFactory_Const
                                                                           (_UNK_?,
                                                                            (MethodInfo *)0x0);
                                                    uStack_104 = 0;
                                                    uStack_105 = 4;
                                                    func_?(&uStack_103);
                                                    uStack_96 = uStack_104;
                                                    uStack_97 = uStack_105;
                                                    uStack_98 = (undefined4)uStack_103;
                                                    uStack_99 = uStack_103._4_4_;
                                                    FUN_?(pAVar7,1,&uStack_96);
                                                    AStack_106.id = 0;
                                                    AStack_106._4_4_ = 0;
                                                    AStack_106.duration.currentCryptoKey = 0;
                                                    AStack_106.duration.hiddenValue.b1 = 0;
                                                    AStack_106.duration.hiddenValue.b2 = 0;
                                                    AStack_106.duration.hiddenValue.b3 = 0;
                                                    AStack_106.duration.hiddenValue.b4 = 0;
                                                    AStack_106.avatarModifierPackageType = 0;
                                                    AStack_106.avatarModifierPackageAdditionPolicy =
                                                         0;
                                                    AStack_106.duration.hiddenValueOld =
                                                         (Byte__Array *)0x0;
                                                    AStack_106.duration.fakeValue = 0.0;
                                                    AStack_106.duration.inited = 0;
                                                    AStack_106.duration._21_3_ = 0;
                                                    AStack_106.avatarModifiers =
                                                         (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                  AStack_106.actionsToTakeVsTypes =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                                  AStack_106.timeStamp.currentCryptoKey = 0;
                                                  AStack_106.timeStamp.hiddenValue.b1 = 0;
                                                  AStack_106.timeStamp.hiddenValue.b2 = 0;
                                                  AStack_106.timeStamp.hiddenValue.b3 = 0;
                                                  AStack_106.timeStamp.hiddenValue.b4 = 0;
                                                  AStack_106.timeStamp.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_106.timeStamp.fakeValue = 0.0;
                                                  AStack_106.timeStamp.inited = 0;
                                                  AStack_106.timeStamp._21_3_ = 0;
                                                  AStack_106.persistant = 0;
                                                  AStack_106._73_3_ = 0;
                                                  AStack_106.lastTimeStamp = 0.0;
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_106,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_Underwater,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  _UNK_?,pAVar7,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                                  AStack_14.id = AStack_106.id;
                                                  AStack_14._4_4_ = AStack_106._4_4_;
                                                  AStack_14.duration.currentCryptoKey =
                                                       AStack_106.duration.currentCryptoKey;
                                                  AStack_14.duration.hiddenValue =
                                                       AStack_106.duration.hiddenValue;
                                                  AStack_14.duration.hiddenValueOld =
                                                       AStack_106.duration.hiddenValueOld;
                                                  AStack_14.duration.fakeValue =
                                                       AStack_106.duration.fakeValue;
                                                  AStack_14.duration.inited =
                                                       AStack_106.duration.inited;
                                                  AStack_14.duration._21_3_ =
                                                       AStack_106.duration._21_3_;
                                                  AStack_14.avatarModifiers =
                                                       AStack_106.avatarModifiers;
                                                  AStack_14.actionsToTakeVsTypes =
                                                       AStack_106.actionsToTakeVsTypes;
                                                  AStack_14.timeStamp.currentCryptoKey =
                                                       AStack_106.timeStamp.currentCryptoKey;
                                                  AStack_14.timeStamp.hiddenValue =
                                                       AStack_106.timeStamp.hiddenValue;
                                                  AStack_14.timeStamp.hiddenValueOld =
                                                       AStack_106.timeStamp.hiddenValueOld;
                                                  AStack_14.timeStamp.fakeValue =
                                                       AStack_106.timeStamp.fakeValue;
                                                  AStack_14.timeStamp.inited =
                                                       AStack_106.timeStamp.inited;
                                                  AStack_14.timeStamp._21_3_ =
                                                       AStack_106.timeStamp._21_3_;
                                                  AStack_14.persistant = AStack_106.persistant;
                                                  AStack_14._73_3_ = AStack_106._73_3_;
                                                  AStack_14.lastTimeStamp =
                                                       AStack_106.lastTimeStamp;
                                                  AStack_14.avatarModifierPackageType =
                                                       AStack_106.avatarModifierPackageType;
                                                  AStack_14.avatarModifierPackageAdditionPolicy =
                                                       AStack_106.
                                                       avatarModifierPackageAdditionPolicy;
                                                  FUN_?(this,9,&AStack_14);
                                                  pAVar7 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                  uStack_107 = AvatarModifierPackageFactory_Const
                                                                         (0.0,(MethodInfo *)0x0);
                                                  uStack_108 = 2;
                                                  uStack_109 = 0xc;
                                                  func_?(&uStack_107);
                                                  if (pAVar7 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    uStack_96 = uStack_108;
                                                    uStack_97 = uStack_109;
                                                    uStack_98 = (undefined4)uStack_107;
                                                    uStack_99 = uStack_107._4_4_;
                                                    FUN_?(pAVar7,0,&uStack_96);
                                                    uStack_110 = AvatarModifierPackageFactory_Const
                                                                           (_UNK_?,
                                                                            (MethodInfo *)0x0);
                                                    uStack_111 = 0;
                                                    uStack_112 = 2;
                                                    func_?(&uStack_110);
                                                    uStack_96 = uStack_111;
                                                    uStack_97 = uStack_112;
                                                    uStack_98 = (undefined4)uStack_110;
                                                    uStack_99 = uStack_110._4_4_;
                                                    FUN_?(pAVar7,1,&uStack_96);
                                                    uStack_113 = AvatarModifierPackageFactory_Const
                                                                           (fVar43,(MethodInfo *)0x0)
                                                    ;
                                                    uStack_114 = 0;
                                                    uStack_115 = 3;
                                                    func_?(&uStack_113);
                                                    uStack_96 = uStack_114;
                                                    uStack_97 = uStack_115;
                                                    uStack_98 = (undefined4)uStack_113;
                                                    uStack_99 = uStack_113._4_4_;
                                                    FUN_?(pAVar7,2,&uStack_96);
                                                    AStack_116.id = 0;
                                                    AStack_116._4_4_ = 0;
                                                    AStack_116.duration.currentCryptoKey = 0;
                                                    AStack_116.duration.hiddenValue.b1 = 0;
                                                    AStack_116.duration.hiddenValue.b2 = 0;
                                                    AStack_116.duration.hiddenValue.b3 = 0;
                                                    AStack_116.duration.hiddenValue.b4 = 0;
                                                    AStack_116.avatarModifierPackageType = 0;
                                                    AStack_116.avatarModifierPackageAdditionPolicy =
                                                         0;
                                                    AStack_116.duration.hiddenValueOld =
                                                         (Byte__Array *)0x0;
                                                    AStack_116.duration.fakeValue = 0.0;
                                                    AStack_116.duration.inited = 0;
                                                    AStack_116.duration._21_3_ = 0;
                                                    AStack_116.avatarModifiers =
                                                         (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                  AStack_116.actionsToTakeVsTypes =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                                  AStack_116.timeStamp.currentCryptoKey = 0;
                                                  AStack_116.timeStamp.hiddenValue.b1 = 0;
                                                  AStack_116.timeStamp.hiddenValue.b2 = 0;
                                                  AStack_116.timeStamp.hiddenValue.b3 = 0;
                                                  AStack_116.timeStamp.hiddenValue.b4 = 0;
                                                  AStack_116.timeStamp.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_116.timeStamp.fakeValue = 0.0;
                                                  AStack_116.timeStamp.inited = 0;
                                                  AStack_116.timeStamp._21_3_ = 0;
                                                  AStack_116.persistant = 0;
                                                  AStack_116._73_3_ = 0;
                                                  AStack_116.lastTimeStamp = 0.0;
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_116,
                                                             AvatarModifierPackageType__Enum_Frozen,
                                                                                                                          
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  _UNK_?,pAVar7,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                                  AStack_14.id = AStack_116.id;
                                                  AStack_14._4_4_ = AStack_116._4_4_;
                                                  AStack_14.duration.currentCryptoKey =
                                                       AStack_116.duration.currentCryptoKey;
                                                  AStack_14.duration.hiddenValue =
                                                       AStack_116.duration.hiddenValue;
                                                  AStack_14.duration.hiddenValueOld =
                                                       AStack_116.duration.hiddenValueOld;
                                                  AStack_14.duration.fakeValue =
                                                       AStack_116.duration.fakeValue;
                                                  AStack_14.duration.inited =
                                                       AStack_116.duration.inited;
                                                  AStack_14.duration._21_3_ =
                                                       AStack_116.duration._21_3_;
                                                  AStack_14.avatarModifiers =
                                                       AStack_116.avatarModifiers;
                                                  AStack_14.actionsToTakeVsTypes =
                                                       AStack_116.actionsToTakeVsTypes;
                                                  AStack_14.timeStamp.currentCryptoKey =
                                                       AStack_116.timeStamp.currentCryptoKey;
                                                  AStack_14.timeStamp.hiddenValue =
                                                       AStack_116.timeStamp.hiddenValue;
                                                  AStack_14.timeStamp.hiddenValueOld =
                                                       AStack_116.timeStamp.hiddenValueOld;
                                                  AStack_14.timeStamp.fakeValue =
                                                       AStack_116.timeStamp.fakeValue;
                                                  AStack_14.timeStamp.inited =
                                                       AStack_116.timeStamp.inited;
                                                  AStack_14.timeStamp._21_3_ =
                                                       AStack_116.timeStamp._21_3_;
                                                  AStack_14.persistant = AStack_116.persistant;
                                                  AStack_14._73_3_ = AStack_116._73_3_;
                                                  AStack_14.lastTimeStamp =
                                                       AStack_116.lastTimeStamp;
                                                  AStack_14.avatarModifierPackageType =
                                                       AStack_116.avatarModifierPackageType;
                                                  AStack_14.avatarModifierPackageAdditionPolicy =
                                                       AStack_116.
                                                       avatarModifierPackageAdditionPolicy;
                                                  FUN_?(this,10,&AStack_14);
                                                  pAVar7 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                  uStack_117 = AvatarModifierPackageFactory_Const
                                                                         (fVar52,(MethodInfo *)0x0);
                                                  uStack_118 = 0;
                                                  uStack_119 = 3;
                                                  func_?(&uStack_117);
                                                  if (pAVar7 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    uStack_96 = uStack_118;
                                                    uStack_97 = uStack_119;
                                                    uStack_98 = (undefined4)uStack_117;
                                                    uStack_99 = uStack_117._4_4_;
                                                    FUN_?(pAVar7,0,&uStack_96);
                                                    uStack_120 = AvatarModifierPackageFactory_Const
                                                                           (c_01,(MethodInfo *)0x0);
                                                    uStack_121 = 0;
                                                    uStack_122 = 0x14;
                                                    func_?(&uStack_120);
                                                    uStack_96 = uStack_121;
                                                    uStack_97 = uStack_122;
                                                    uStack_98 = (undefined4)uStack_120;
                                                    uStack_99 = uStack_120._4_4_;
                                                    FUN_?(pAVar7,1,&uStack_96);
                                                    fVar52 = _UNK_?;
                                                    AStack_123.id = 0;
                                                    AStack_123._4_4_ = 0;
                                                    AStack_123.duration.currentCryptoKey = 0;
                                                    AStack_123.duration.hiddenValue.b1 = 0;
                                                    AStack_123.duration.hiddenValue.b2 = 0;
                                                    AStack_123.duration.hiddenValue.b3 = 0;
                                                    AStack_123.duration.hiddenValue.b4 = 0;
                                                    AStack_123.avatarModifierPackageType = 0;
                                                    AStack_123.avatarModifierPackageAdditionPolicy =
                                                         0;
                                                    AStack_123.duration.hiddenValueOld =
                                                         (Byte__Array *)0x0;
                                                    AStack_123.duration.fakeValue = 0.0;
                                                    AStack_123.duration.inited = 0;
                                                    AStack_123.duration._21_3_ = 0;
                                                    AStack_123.avatarModifiers =
                                                         (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                  AStack_123.actionsToTakeVsTypes =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                                  AStack_123.timeStamp.currentCryptoKey = 0;
                                                  AStack_123.timeStamp.hiddenValue.b1 = 0;
                                                  AStack_123.timeStamp.hiddenValue.b2 = 0;
                                                  AStack_123.timeStamp.hiddenValue.b3 = 0;
                                                  AStack_123.timeStamp.hiddenValue.b4 = 0;
                                                  AStack_123.timeStamp.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_123.timeStamp.fakeValue = 0.0;
                                                  AStack_123.timeStamp.inited = 0;
                                                  AStack_123.timeStamp._21_3_ = 0;
                                                  AStack_123.persistant = 0;
                                                  AStack_123._73_3_ = 0;
                                                  AStack_123.lastTimeStamp = 0.0;
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_123,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_NinjaRun,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  _UNK_?,pAVar7,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                                  AStack_14.id = AStack_123.id;
                                                  AStack_14._4_4_ = AStack_123._4_4_;
                                                  AStack_14.duration.currentCryptoKey =
                                                       AStack_123.duration.currentCryptoKey;
                                                  AStack_14.duration.hiddenValue =
                                                       AStack_123.duration.hiddenValue;
                                                  AStack_14.duration.hiddenValueOld =
                                                       AStack_123.duration.hiddenValueOld;
                                                  AStack_14.duration.fakeValue =
                                                       AStack_123.duration.fakeValue;
                                                  AStack_14.duration.inited =
                                                       AStack_123.duration.inited;
                                                  AStack_14.duration._21_3_ =
                                                       AStack_123.duration._21_3_;
                                                  AStack_14.avatarModifiers =
                                                       AStack_123.avatarModifiers;
                                                  AStack_14.actionsToTakeVsTypes =
                                                       AStack_123.actionsToTakeVsTypes;
                                                  AStack_14.timeStamp.currentCryptoKey =
                                                       AStack_123.timeStamp.currentCryptoKey;
                                                  AStack_14.timeStamp.hiddenValue =
                                                       AStack_123.timeStamp.hiddenValue;
                                                  AStack_14.timeStamp.hiddenValueOld =
                                                       AStack_123.timeStamp.hiddenValueOld;
                                                  AStack_14.timeStamp.fakeValue =
                                                       AStack_123.timeStamp.fakeValue;
                                                  AStack_14.timeStamp.inited =
                                                       AStack_123.timeStamp.inited;
                                                  AStack_14.timeStamp._21_3_ =
                                                       AStack_123.timeStamp._21_3_;
                                                  AStack_14.persistant = AStack_123.persistant;
                                                  AStack_14._73_3_ = AStack_123._73_3_;
                                                  AStack_14.lastTimeStamp =
                                                       AStack_123.lastTimeStamp;
                                                  AStack_14.avatarModifierPackageType =
                                                       AStack_123.avatarModifierPackageType;
                                                  AStack_14.avatarModifierPackageAdditionPolicy =
                                                       AStack_123.
                                                       avatarModifierPackageAdditionPolicy;
                                                  FUN_?(this,0xb,&AStack_14);
                                                  pAVar7 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                  uStack_124 = AvatarModifierPackageFactory_Const
                                                                         (_UNK_?,
                                                                          (MethodInfo *)0x0);
                                                  uStack_125 = 0;
                                                  uStack_126 = 3;
                                                  func_?(&uStack_124);
                                                  if (pAVar7 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    uStack_96 = uStack_125;
                                                    uStack_97 = uStack_126;
                                                    uStack_98 = (undefined4)uStack_124;
                                                    uStack_99 = uStack_124._4_4_;
                                                    FUN_?(pAVar7,0,&uStack_96);
                                                    AStack_127.id = 0;
                                                    AStack_127._4_4_ = 0;
                                                    AStack_127.duration.currentCryptoKey = 0;
                                                    AStack_127.duration.hiddenValue.b1 = 0;
                                                    AStack_127.duration.hiddenValue.b2 = 0;
                                                    AStack_127.duration.hiddenValue.b3 = 0;
                                                    AStack_127.duration.hiddenValue.b4 = 0;
                                                    AStack_127.avatarModifierPackageType = 0;
                                                    AStack_127.avatarModifierPackageAdditionPolicy =
                                                         0;
                                                    AStack_127.duration.hiddenValueOld =
                                                         (Byte__Array *)0x0;
                                                    AStack_127.duration.fakeValue = 0.0;
                                                    AStack_127.duration.inited = 0;
                                                    AStack_127.duration._21_3_ = 0;
                                                    AStack_127.avatarModifiers =
                                                         (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                  AStack_127.actionsToTakeVsTypes =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                                  AStack_127.timeStamp.currentCryptoKey = 0;
                                                  AStack_127.timeStamp.hiddenValue.b1 = 0;
                                                  AStack_127.timeStamp.hiddenValue.b2 = 0;
                                                  AStack_127.timeStamp.hiddenValue.b3 = 0;
                                                  AStack_127.timeStamp.hiddenValue.b4 = 0;
                                                  AStack_127.timeStamp.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_127.timeStamp.fakeValue = 0.0;
                                                  AStack_127.timeStamp.inited = 0;
                                                  AStack_127.timeStamp._21_3_ = 0;
                                                  AStack_127.persistant = 0;
                                                  AStack_127._73_3_ = 0;
                                                  AStack_127.lastTimeStamp = 0.0;
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_127,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_TimeAttackFlagDebriefSlow
                                                  ,AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  fVar52,pAVar7,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                                  AStack_14.duration.hiddenValueOld =
                                                       AStack_127.duration.hiddenValueOld;
                                                  AStack_14.duration.fakeValue =
                                                       AStack_127.duration.fakeValue;
                                                  AStack_14.duration.inited =
                                                       AStack_127.duration.inited;
                                                  AStack_14.duration._21_3_ =
                                                       AStack_127.duration._21_3_;
                                                  AStack_14.timeStamp.currentCryptoKey =
                                                       AStack_127.timeStamp.currentCryptoKey;
                                                  AStack_14.timeStamp.hiddenValue =
                                                       AStack_127.timeStamp.hiddenValue;
                                                  AStack_14.timeStamp.hiddenValueOld =
                                                       AStack_127.timeStamp.hiddenValueOld;
                                                  AStack_14.id = AStack_127.id;
                                                  AStack_14._4_4_ = AStack_127._4_4_;
                                                  AStack_14.duration.currentCryptoKey =
                                                       AStack_127.duration.currentCryptoKey;
                                                  AStack_14.duration.hiddenValue =
                                                       AStack_127.duration.hiddenValue;
                                                  AStack_14.avatarModifierPackageType =
                                                       AStack_127.avatarModifierPackageType;
                                                  AStack_14.avatarModifierPackageAdditionPolicy =
                                                       AStack_127.
                                                       avatarModifierPackageAdditionPolicy;
                                                  AStack_14.avatarModifiers =
                                                       AStack_127.avatarModifiers;
                                                  AStack_14.actionsToTakeVsTypes =
                                                       AStack_127.actionsToTakeVsTypes;
                                                  AStack_14.timeStamp.fakeValue =
                                                       AStack_127.timeStamp.fakeValue;
                                                  AStack_14.timeStamp.inited =
                                                       AStack_127.timeStamp.inited;
                                                  AStack_14.timeStamp._21_3_ =
                                                       AStack_127.timeStamp._21_3_;
                                                  AStack_14.persistant = AStack_127.persistant;
                                                  AStack_14._73_3_ = AStack_127._73_3_;
                                                  AStack_14.lastTimeStamp =
                                                       AStack_127.lastTimeStamp;
                                                  FUN_?(this,0x13,&AStack_14);
                                                  pAVar7 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                  uStack_128 = AvatarModifierPackageFactory_Const
                                                                         (fVar43,(MethodInfo *)0x0);
                                                  uStack_129 = 0;
                                                  uStack_130 = 3;
                                                  func_?(&uStack_128);
                                                  if (pAVar7 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    uStack_96 = uStack_129;
                                                    uStack_97 = uStack_130;
                                                    uStack_98 = (undefined4)uStack_128;
                                                    uStack_99 = uStack_128._4_4_;
                                                    FUN_?(pAVar7,0,&uStack_96);
                                                    fVar43 = _UNK_?;
                                                    uStack_131 = AvatarModifierPackageFactory_Const
                                                                           (_UNK_?,
                                                                            (MethodInfo *)0x0);
                                                    uStack_132 = 2;
                                                    uStack_133 = 5;
                                                    func_?(&uStack_131);
                                                    uStack_96 = uStack_132;
                                                    uStack_97 = uStack_133;
                                                    uStack_98 = (undefined4)uStack_131;
                                                    uStack_99 = uStack_131._4_4_;
                                                    FUN_?(pAVar7,1,&uStack_96);
                                                    uStack_134 = AvatarModifierPackageFactory_Const
                                                                           (_UNK_?,
                                                                            (MethodInfo *)0x0);
                                                    uStack_135 = 0;
                                                    uStack_136 = 2;
                                                    func_?(&uStack_134);
                                                    uStack_96 = uStack_135;
                                                    uStack_97 = uStack_136;
                                                    uStack_98 = (undefined4)uStack_134;
                                                    uStack_99 = uStack_134._4_4_;
                                                    FUN_?(pAVar7,2,&uStack_96);
                                                    fVar64 = _UNK_?;
                                                    uStack_137 = AvatarModifierPackageFactory_Const
                                                                           (_UNK_?,
                                                                            (MethodInfo *)0x0);
                                                    uStack_138 = 0;
                                                    uStack_139 = 6;
                                                    func_?(&uStack_137);
                                                    uStack_96 = uStack_138;
                                                    uStack_97 = uStack_139;
                                                    uStack_98 = (undefined4)uStack_137;
                                                    uStack_99 = uStack_137._4_4_;
                                                    FUN_?(pAVar7,3,&uStack_96);
                                                    uStack_140 = AvatarModifierPackageFactory_Const
                                                                           (c,(MethodInfo *)0x0);
                                                    uStack_141 = 2;
                                                    uStack_142 = 8;
                                                    func_?(&uStack_140);
                                                    uStack_96 = uStack_141;
                                                    uStack_97 = uStack_142;
                                                    uStack_98 = (undefined4)uStack_140;
                                                    uStack_99 = uStack_140._4_4_;
                                                    FUN_?(pAVar7,4,&uStack_96);
                                                    uStack_143 = AvatarModifierPackageFactory_Const
                                                                           (c,(MethodInfo *)0x0);
                                                    uStack_144 = 2;
                                                    uStack_145 = 9;
                                                    func_?(&uStack_143);
                                                    uStack_96 = uStack_144;
                                                    uStack_97 = uStack_145;
                                                    uStack_98 = (undefined4)uStack_143;
                                                    uStack_99 = uStack_143._4_4_;
                                                    FUN_?(pAVar7,5,&uStack_96);
                                                    uStack_146 = AvatarModifierPackageFactory_Const
                                                                           (fVar43,(MethodInfo *)0x0)
                                                    ;
                                                    uStack_147 = 2;
                                                    uStack_148 = 1;
                                                    func_?(&uStack_146);
                                                    uStack_96 = uStack_147;
                                                    uStack_97 = uStack_148;
                                                    uStack_98 = (undefined4)uStack_146;
                                                    uStack_99 = uStack_146._4_4_;
                                                    FUN_?(pAVar7,6,&uStack_96);
                                                    pDVar75 = (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)FUN_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                                                  );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::
                                                  Int32Enum,GamePassesHighScoreList+HighScoreListData]
                                                  ::
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                                                            (pDVar75,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                                                  );
                                                  if (pDVar75 !=
                                                      (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)0x0) {
                                                    uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::
                                                    Int32Enum]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                                                  pDVar75,0xc,1,(InsertionBehavior__Enum)uVar13,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  ->klass->rgctx_data[0x22].method);
                                                  uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2
                                                                   );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Int32Enum]
                                                  ::
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                                                  pDVar75,0xf,3,(InsertionBehavior__Enum)uVar13,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  ->klass->rgctx_data[0x22].method);
                                                  fVar43 = _UNK_?;
                                                  AStack_149.id = 0;
                                                  AStack_149._4_4_ = 0;
                                                  AStack_149.duration.currentCryptoKey = 0;
                                                  AStack_149.duration.hiddenValue.b1 = 0;
                                                  AStack_149.duration.hiddenValue.b2 = 0;
                                                  AStack_149.duration.hiddenValue.b3 = 0;
                                                  AStack_149.duration.hiddenValue.b4 = 0;
                                                  AStack_149.avatarModifierPackageType = 0;
                                                  AStack_149.avatarModifierPackageAdditionPolicy = 0
                                                  ;
                                                  AStack_149.duration.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_149.duration.fakeValue = 0.0;
                                                  AStack_149.duration.inited = 0;
                                                  AStack_149.duration._21_3_ = 0;
                                                  AStack_149.avatarModifiers =
                                                       (AvatarModifierPackage_AvatarModifier__Array
                                                        *)0x0;
                                                  AStack_149.actionsToTakeVsTypes =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                                  AStack_149.timeStamp.currentCryptoKey = 0;
                                                  AStack_149.timeStamp.hiddenValue.b1 = 0;
                                                  AStack_149.timeStamp.hiddenValue.b2 = 0;
                                                  AStack_149.timeStamp.hiddenValue.b3 = 0;
                                                  AStack_149.timeStamp.hiddenValue.b4 = 0;
                                                  AStack_149.timeStamp.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_149.timeStamp.fakeValue = 0.0;
                                                  AStack_149.timeStamp.inited = 0;
                                                  AStack_149.timeStamp._21_3_ = 0;
                                                  AStack_149.persistant = 0;
                                                  AStack_149._73_3_ = 0;
                                                  AStack_149.lastTimeStamp = 0.0;
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_149,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_Shrunken,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  _UNK_?,pAVar7,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)pDVar75,0,(MethodInfo *)0x0);
                                                  AStack_14.id = AStack_149.id;
                                                  AStack_14._4_4_ = AStack_149._4_4_;
                                                  AStack_14.duration.currentCryptoKey =
                                                       AStack_149.duration.currentCryptoKey;
                                                  AStack_14.duration.hiddenValue =
                                                       AStack_149.duration.hiddenValue;
                                                  AStack_14.duration.hiddenValueOld =
                                                       AStack_149.duration.hiddenValueOld;
                                                  AStack_14.duration.fakeValue =
                                                       AStack_149.duration.fakeValue;
                                                  AStack_14.duration.inited =
                                                       AStack_149.duration.inited;
                                                  AStack_14.duration._21_3_ =
                                                       AStack_149.duration._21_3_;
                                                  AStack_14.avatarModifiers =
                                                       AStack_149.avatarModifiers;
                                                  AStack_14.actionsToTakeVsTypes =
                                                       AStack_149.actionsToTakeVsTypes;
                                                  AStack_14.timeStamp.currentCryptoKey =
                                                       AStack_149.timeStamp.currentCryptoKey;
                                                  AStack_14.timeStamp.hiddenValue =
                                                       AStack_149.timeStamp.hiddenValue;
                                                  AStack_14.timeStamp.hiddenValueOld =
                                                       AStack_149.timeStamp.hiddenValueOld;
                                                  AStack_14.timeStamp.fakeValue =
                                                       AStack_149.timeStamp.fakeValue;
                                                  AStack_14.timeStamp.inited =
                                                       AStack_149.timeStamp.inited;
                                                  AStack_14.timeStamp._21_3_ =
                                                       AStack_149.timeStamp._21_3_;
                                                  AStack_14.persistant = AStack_149.persistant;
                                                  AStack_14._73_3_ = AStack_149._73_3_;
                                                  AStack_14.lastTimeStamp =
                                                       AStack_149.lastTimeStamp;
                                                  AStack_14.avatarModifierPackageType =
                                                       AStack_149.avatarModifierPackageType;
                                                  AStack_14.avatarModifierPackageAdditionPolicy =
                                                       AStack_149.
                                                       avatarModifierPackageAdditionPolicy;
                                                  FUN_?(this,0xc,&AStack_14);
                                                  pAVar7 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                  uStack_150 = AvatarModifierPackageFactory_Const
                                                                         (_UNK_?,
                                                                          (MethodInfo *)0x0);
                                                  uStack_151 = 2;
                                                  uStack_152 = 4;
                                                  func_?(&uStack_150);
                                                  if (pAVar7 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    uStack_96 = uStack_151;
                                                    uStack_97 = uStack_152;
                                                    uStack_98 = (undefined4)uStack_150;
                                                    uStack_99 = uStack_150._4_4_;
                                                    FUN_?(pAVar7,0,&uStack_96);
                                                    AStack_153.id = 0;
                                                    AStack_153._4_4_ = 0;
                                                    AStack_153.duration.currentCryptoKey = 0;
                                                    AStack_153.duration.hiddenValue.b1 = 0;
                                                    AStack_153.duration.hiddenValue.b2 = 0;
                                                    AStack_153.duration.hiddenValue.b3 = 0;
                                                    AStack_153.duration.hiddenValue.b4 = 0;
                                                    AStack_153.avatarModifierPackageType = 0;
                                                    AStack_153.avatarModifierPackageAdditionPolicy =
                                                         0;
                                                    AStack_153.duration.hiddenValueOld =
                                                         (Byte__Array *)0x0;
                                                    AStack_153.duration.fakeValue = 0.0;
                                                    AStack_153.duration.inited = 0;
                                                    AStack_153.duration._21_3_ = 0;
                                                    AStack_153.avatarModifiers =
                                                         (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                  AStack_153.actionsToTakeVsTypes =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                                  AStack_153.timeStamp.currentCryptoKey = 0;
                                                  AStack_153.timeStamp.hiddenValue.b1 = 0;
                                                  AStack_153.timeStamp.hiddenValue.b2 = 0;
                                                  AStack_153.timeStamp.hiddenValue.b3 = 0;
                                                  AStack_153.timeStamp.hiddenValue.b4 = 0;
                                                  AStack_153.timeStamp.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_153.timeStamp.fakeValue = 0.0;
                                                  AStack_153.timeStamp.inited = 0;
                                                  AStack_153.timeStamp._21_3_ = 0;
                                                  AStack_153.persistant = 0;
                                                  AStack_153._73_3_ = 0;
                                                  AStack_153.lastTimeStamp = 0.0;
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_153,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_WindFriction,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  duration_00,pAVar7,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                                  AStack_14.id = AStack_153.id;
                                                  AStack_14._4_4_ = AStack_153._4_4_;
                                                  AStack_14.duration.currentCryptoKey =
                                                       AStack_153.duration.currentCryptoKey;
                                                  AStack_14.duration.hiddenValue =
                                                       AStack_153.duration.hiddenValue;
                                                  AStack_14.duration.hiddenValueOld =
                                                       AStack_153.duration.hiddenValueOld;
                                                  AStack_14.duration.fakeValue =
                                                       AStack_153.duration.fakeValue;
                                                  AStack_14.duration.inited =
                                                       AStack_153.duration.inited;
                                                  AStack_14.duration._21_3_ =
                                                       AStack_153.duration._21_3_;
                                                  AStack_14.avatarModifiers =
                                                       AStack_153.avatarModifiers;
                                                  AStack_14.actionsToTakeVsTypes =
                                                       AStack_153.actionsToTakeVsTypes;
                                                  AStack_14.timeStamp.currentCryptoKey =
                                                       AStack_153.timeStamp.currentCryptoKey;
                                                  AStack_14.timeStamp.hiddenValue =
                                                       AStack_153.timeStamp.hiddenValue;
                                                  AStack_14.timeStamp.hiddenValueOld =
                                                       AStack_153.timeStamp.hiddenValueOld;
                                                  AStack_14.timeStamp.fakeValue =
                                                       AStack_153.timeStamp.fakeValue;
                                                  AStack_14.timeStamp.inited =
                                                       AStack_153.timeStamp.inited;
                                                  AStack_14.timeStamp._21_3_ =
                                                       AStack_153.timeStamp._21_3_;
                                                  AStack_14.persistant = AStack_153.persistant;
                                                  AStack_14._73_3_ = AStack_153._73_3_;
                                                  AStack_14.lastTimeStamp =
                                                       AStack_153.lastTimeStamp;
                                                  AStack_14.avatarModifierPackageType =
                                                       AStack_153.avatarModifierPackageType;
                                                  AStack_14.avatarModifierPackageAdditionPolicy =
                                                       AStack_153.
                                                       avatarModifierPackageAdditionPolicy;
                                                  FUN_?(this,0xd,&AStack_14);
                                                  pAVar7 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                  uStack_154 = AvatarModifierPackageFactory_Const
                                                                         (duration,(MethodInfo *)0x0
                                                                         );
                                                  uStack_155 = 2;
                                                  uStack_156 = 6;
                                                  func_?(&uStack_154);
                                                  if (pAVar7 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    uStack_96 = uStack_155;
                                                    uStack_97 = uStack_156;
                                                    uStack_98 = (undefined4)uStack_154;
                                                    uStack_99 = uStack_154._4_4_;
                                                    FUN_?(pAVar7,0,&uStack_96);
                                                    AStack_157.avatarModifierPackageType = 0;
                                                    AStack_157.avatarModifierPackageAdditionPolicy =
                                                         0;
                                                    AStack_157.id = 0;
                                                    AStack_157._4_4_ = 0;
                                                    AStack_157.duration.currentCryptoKey = 0;
                                                    AStack_157.duration.hiddenValue.b1 = 0;
                                                    AStack_157.duration.hiddenValue.b2 = 0;
                                                    AStack_157.duration.hiddenValue.b3 = 0;
                                                    AStack_157.duration.hiddenValue.b4 = 0;
                                                    AStack_157.duration.hiddenValueOld =
                                                         (Byte__Array *)0x0;
                                                    AStack_157.duration.fakeValue = 0.0;
                                                    AStack_157.duration.inited = 0;
                                                    AStack_157.duration._21_3_ = 0;
                                                    AStack_157.avatarModifiers =
                                                         (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                  AStack_157.actionsToTakeVsTypes =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                                  AStack_157.timeStamp.currentCryptoKey = 0;
                                                  AStack_157.timeStamp.hiddenValue.b1 = 0;
                                                  AStack_157.timeStamp.hiddenValue.b2 = 0;
                                                  AStack_157.timeStamp.hiddenValue.b3 = 0;
                                                  AStack_157.timeStamp.hiddenValue.b4 = 0;
                                                  AStack_157.timeStamp.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_157.timeStamp.fakeValue = 0.0;
                                                  AStack_157.timeStamp.inited = 0;
                                                  AStack_157.timeStamp._21_3_ = 0;
                                                  AStack_157.persistant = 0;
                                                  AStack_157._73_3_ = 0;
                                                  AStack_157.lastTimeStamp = 0.0;
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_157,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_Shielded,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  duration_00,pAVar7,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,1,(MethodInfo *)0x0);
                                                  AStack_14.id = AStack_157.id;
                                                  AStack_14._4_4_ = AStack_157._4_4_;
                                                  AStack_14.duration.currentCryptoKey =
                                                       AStack_157.duration.currentCryptoKey;
                                                  AStack_14.duration.hiddenValue =
                                                       AStack_157.duration.hiddenValue;
                                                  AStack_14.duration.hiddenValueOld =
                                                       AStack_157.duration.hiddenValueOld;
                                                  AStack_14.duration.fakeValue =
                                                       AStack_157.duration.fakeValue;
                                                  AStack_14.duration.inited =
                                                       AStack_157.duration.inited;
                                                  AStack_14.duration._21_3_ =
                                                       AStack_157.duration._21_3_;
                                                  AStack_14.avatarModifiers =
                                                       AStack_157.avatarModifiers;
                                                  AStack_14.actionsToTakeVsTypes =
                                                       AStack_157.actionsToTakeVsTypes;
                                                  AStack_14.timeStamp.currentCryptoKey =
                                                       AStack_157.timeStamp.currentCryptoKey;
                                                  AStack_14.timeStamp.hiddenValue =
                                                       AStack_157.timeStamp.hiddenValue;
                                                  AStack_14.timeStamp.hiddenValueOld =
                                                       AStack_157.timeStamp.hiddenValueOld;
                                                  AStack_14.timeStamp.fakeValue =
                                                       AStack_157.timeStamp.fakeValue;
                                                  AStack_14.timeStamp.inited =
                                                       AStack_157.timeStamp.inited;
                                                  AStack_14.timeStamp._21_3_ =
                                                       AStack_157.timeStamp._21_3_;
                                                  AStack_14.persistant = AStack_157.persistant;
                                                  AStack_14._73_3_ = AStack_157._73_3_;
                                                  AStack_14.lastTimeStamp =
                                                       AStack_157.lastTimeStamp;
                                                  AStack_14.avatarModifierPackageType =
                                                       AStack_157.avatarModifierPackageType;
                                                  AStack_14.avatarModifierPackageAdditionPolicy =
                                                       AStack_157.
                                                       avatarModifierPackageAdditionPolicy;
                                                  FUN_?(this,0x10,&AStack_14);
                                                  pAVar7 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                  uStack_158 = AvatarModifierPackageFactory_Const
                                                                         (c,(MethodInfo *)0x0);
                                                  uStack_159 = 2;
                                                  uStack_160 = 7;
                                                  func_?(&uStack_158);
                                                  if (pAVar7 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    uStack_96 = uStack_159;
                                                    uStack_97 = uStack_160;
                                                    uStack_98 = (undefined4)uStack_158;
                                                    uStack_99 = uStack_158._4_4_;
                                                    FUN_?(pAVar7,0,&uStack_96);
                                                    AStack_161.id = 0;
                                                    AStack_161._4_4_ = 0;
                                                    AStack_161.duration.currentCryptoKey = 0;
                                                    AStack_161.duration.hiddenValue.b1 = 0;
                                                    AStack_161.duration.hiddenValue.b2 = 0;
                                                    AStack_161.duration.hiddenValue.b3 = 0;
                                                    AStack_161.duration.hiddenValue.b4 = 0;
                                                    AStack_161.avatarModifierPackageType = 0;
                                                    AStack_161.avatarModifierPackageAdditionPolicy =
                                                         0;
                                                    AStack_161.duration.hiddenValueOld =
                                                         (Byte__Array *)0x0;
                                                    AStack_161.duration.fakeValue = 0.0;
                                                    AStack_161.duration.inited = 0;
                                                    AStack_161.duration._21_3_ = 0;
                                                    AStack_161.avatarModifiers =
                                                         (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                  AStack_161.actionsToTakeVsTypes =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                                  AStack_161.timeStamp.currentCryptoKey = 0;
                                                  AStack_161.timeStamp.hiddenValue.b1 = 0;
                                                  AStack_161.timeStamp.hiddenValue.b2 = 0;
                                                  AStack_161.timeStamp.hiddenValue.b3 = 0;
                                                  AStack_161.timeStamp.hiddenValue.b4 = 0;
                                                  AStack_161.timeStamp.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_161.timeStamp.fakeValue = 0.0;
                                                  AStack_161.timeStamp.inited = 0;
                                                  AStack_161.timeStamp._21_3_ = 0;
                                                  AStack_161.persistant = 0;
                                                  AStack_161._73_3_ = 0;
                                                  AStack_161.lastTimeStamp = 0.0;
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_161,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_DisableVehiclePickup
                                                  ,AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  duration_00,pAVar7,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                                  AStack_14.duration.hiddenValueOld =
                                                       AStack_161.duration.hiddenValueOld;
                                                  AStack_14.duration.fakeValue =
                                                       AStack_161.duration.fakeValue;
                                                  AStack_14.duration.inited =
                                                       AStack_161.duration.inited;
                                                  AStack_14.duration._21_3_ =
                                                       AStack_161.duration._21_3_;
                                                  AStack_14.timeStamp.currentCryptoKey =
                                                       AStack_161.timeStamp.currentCryptoKey;
                                                  AStack_14.timeStamp.hiddenValue =
                                                       AStack_161.timeStamp.hiddenValue;
                                                  AStack_14.timeStamp.hiddenValueOld =
                                                       AStack_161.timeStamp.hiddenValueOld;
                                                  AStack_14.id = AStack_161.id;
                                                  AStack_14._4_4_ = AStack_161._4_4_;
                                                  AStack_14.duration.currentCryptoKey =
                                                       AStack_161.duration.currentCryptoKey;
                                                  AStack_14.duration.hiddenValue =
                                                       AStack_161.duration.hiddenValue;
                                                  AStack_14.avatarModifierPackageType =
                                                       AStack_161.avatarModifierPackageType;
                                                  AStack_14.avatarModifierPackageAdditionPolicy =
                                                       AStack_161.
                                                       avatarModifierPackageAdditionPolicy;
                                                  AStack_14.avatarModifiers =
                                                       AStack_161.avatarModifiers;
                                                  AStack_14.actionsToTakeVsTypes =
                                                       AStack_161.actionsToTakeVsTypes;
                                                  AStack_14.timeStamp.fakeValue =
                                                       AStack_161.timeStamp.fakeValue;
                                                  AStack_14.timeStamp.inited =
                                                       AStack_161.timeStamp.inited;
                                                  AStack_14.timeStamp._21_3_ =
                                                       AStack_161.timeStamp._21_3_;
                                                  AStack_14.persistant = AStack_161.persistant;
                                                  AStack_14._73_3_ = AStack_161._73_3_;
                                                  AStack_14.lastTimeStamp =
                                                       AStack_161.lastTimeStamp;
                                                  FUN_?(this,0xe,&AStack_14);
                                                  pAVar7 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                  uStack_162 = AvatarModifierPackageFactory_Const
                                                                         (_UNK_?,
                                                                          (MethodInfo *)0x0);
                                                  uStack_163 = 0;
                                                  uStack_164 = 3;
                                                  func_?(&uStack_162);
                                                  if (pAVar7 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    uStack_96 = uStack_163;
                                                    uStack_97 = uStack_164;
                                                    uStack_98 = (undefined4)uStack_162;
                                                    uStack_99 = uStack_162._4_4_;
                                                    FUN_?(pAVar7,0,&uStack_96);
                                                    uStack_165 = AvatarModifierPackageFactory_Const
                                                                           (c_00,(MethodInfo *)0x0);
                                                    uStack_166 = 2;
                                                    uStack_167 = 5;
                                                    func_?(&uStack_165);
                                                    uStack_96 = uStack_166;
                                                    uStack_97 = uStack_167;
                                                    uStack_98 = (undefined4)uStack_165;
                                                    uStack_99 = uStack_165._4_4_;
                                                    FUN_?(pAVar7,1,&uStack_96);
                                                    uStack_168 = AvatarModifierPackageFactory_Const
                                                                           (c_00,(MethodInfo *)0x0);
                                                    uStack_169 = 0;
                                                    uStack_170 = 2;
                                                    func_?(&uStack_168);
                                                    uStack_96 = uStack_169;
                                                    uStack_97 = uStack_170;
                                                    uStack_98 = (undefined4)uStack_168;
                                                    uStack_99 = uStack_168._4_4_;
                                                    FUN_?(pAVar7,2,&uStack_96);
                                                    uStack_171 = AvatarModifierPackageFactory_Const
                                                                           (duration,(MethodInfo *)
                                                                                     0x0);
                                                    uStack_172 = 0;
                                                    uStack_173 = 6;
                                                    func_?(&uStack_171);
                                                    uStack_96 = uStack_172;
                                                    uStack_97 = uStack_173;
                                                    uStack_98 = (undefined4)uStack_171;
                                                    uStack_99 = uStack_171._4_4_;
                                                    FUN_?(pAVar7,3,&uStack_96);
                                                    uStack_174 = AvatarModifierPackageFactory_Const
                                                                           (c,(MethodInfo *)0x0);
                                                    uStack_175 = 2;
                                                    uStack_176 = 8;
                                                    func_?(&uStack_174);
                                                    uStack_96 = uStack_175;
                                                    uStack_97 = uStack_176;
                                                    uStack_98 = (undefined4)uStack_174;
                                                    uStack_99 = uStack_174._4_4_;
                                                    FUN_?(pAVar7,4,&uStack_96);
                                                    uStack_177 = AvatarModifierPackageFactory_Const
                                                                           (c,(MethodInfo *)0x0);
                                                    uStack_178 = 2;
                                                    uStack_179 = 9;
                                                    func_?(&uStack_177);
                                                    uStack_96 = uStack_178;
                                                    uStack_97 = uStack_179;
                                                    uStack_98 = (undefined4)uStack_177;
                                                    uStack_99 = uStack_177._4_4_;
                                                    FUN_?(pAVar7,5,&uStack_96);
                                                    uStack_180 = AvatarModifierPackageFactory_Const
                                                                           (c_00,(MethodInfo *)0x0);
                                                    uStack_181 = 2;
                                                    uStack_182 = 1;
                                                    func_?(&uStack_180);
                                                    uStack_96 = uStack_181;
                                                    uStack_97 = uStack_182;
                                                    uStack_98 = (undefined4)uStack_180;
                                                    uStack_99 = uStack_180._4_4_;
                                                    FUN_?(pAVar7,6,&uStack_96);
                                                    pDVar75 = (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)FUN_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                                                  );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::
                                                  Int32Enum,GamePassesHighScoreList+HighScoreListData]
                                                  ::
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                                                            (pDVar75,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                                                  );
                                                  if (pDVar75 !=
                                                      (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)0x0) {
                                                    uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::
                                                    Int32Enum]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                                                  pDVar75,0xc,3,(InsertionBehavior__Enum)uVar13,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  ->klass->rgctx_data[0x22].method);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Int32Enum]
                                                  ::
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                                                  pDVar75,0xf,1,
                                                  (InsertionBehavior__Enum)
                                                  CONCAT71((int7)((ulonglong)uVar13 >> 8),2),
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  ->klass->rgctx_data[0x22].method);
                                                  AStack_183.id = 0;
                                                  AStack_183._4_4_ = 0;
                                                  AStack_183.duration.currentCryptoKey = 0;
                                                  AStack_183.duration.hiddenValue.b1 = 0;
                                                  AStack_183.duration.hiddenValue.b2 = 0;
                                                  AStack_183.duration.hiddenValue.b3 = 0;
                                                  AStack_183.duration.hiddenValue.b4 = 0;
                                                  AStack_183.avatarModifierPackageType = 0;
                                                  AStack_183.avatarModifierPackageAdditionPolicy = 0
                                                  ;
                                                  AStack_183.duration.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_183.duration.fakeValue = 0.0;
                                                  AStack_183.duration.inited = 0;
                                                  AStack_183.duration._21_3_ = 0;
                                                  AStack_183.avatarModifiers =
                                                       (AvatarModifierPackage_AvatarModifier__Array
                                                        *)0x0;
                                                  AStack_183.actionsToTakeVsTypes =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                                  AStack_183.timeStamp.currentCryptoKey = 0;
                                                  AStack_183.timeStamp.hiddenValue.b1 = 0;
                                                  AStack_183.timeStamp.hiddenValue.b2 = 0;
                                                  AStack_183.timeStamp.hiddenValue.b3 = 0;
                                                  AStack_183.timeStamp.hiddenValue.b4 = 0;
                                                  AStack_183.timeStamp.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_183.timeStamp.fakeValue = 0.0;
                                                  AStack_183.timeStamp.inited = 0;
                                                  AStack_183.timeStamp._21_3_ = 0;
                                                  AStack_183.persistant = 0;
                                                  AStack_183._73_3_ = 0;
                                                  AStack_183.lastTimeStamp = 0.0;
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_183,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_Enlarged,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,
                                                  fVar43,pAVar7,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)pDVar75,0,(MethodInfo *)0x0);
                                                  AStack_14.id = AStack_183.id;
                                                  AStack_14._4_4_ = AStack_183._4_4_;
                                                  AStack_14.duration.currentCryptoKey =
                                                       AStack_183.duration.currentCryptoKey;
                                                  AStack_14.duration.hiddenValue =
                                                       AStack_183.duration.hiddenValue;
                                                  AStack_14.duration.hiddenValueOld =
                                                       AStack_183.duration.hiddenValueOld;
                                                  AStack_14.duration.fakeValue =
                                                       AStack_183.duration.fakeValue;
                                                  AStack_14.duration.inited =
                                                       AStack_183.duration.inited;
                                                  AStack_14.duration._21_3_ =
                                                       AStack_183.duration._21_3_;
                                                  AStack_14.avatarModifiers =
                                                       AStack_183.avatarModifiers;
                                                  AStack_14.actionsToTakeVsTypes =
                                                       AStack_183.actionsToTakeVsTypes;
                                                  AStack_14.timeStamp.currentCryptoKey =
                                                       AStack_183.timeStamp.currentCryptoKey;
                                                  AStack_14.timeStamp.hiddenValue =
                                                       AStack_183.timeStamp.hiddenValue;
                                                  AStack_14.timeStamp.hiddenValueOld =
                                                       AStack_183.timeStamp.hiddenValueOld;
                                                  AStack_14.timeStamp.fakeValue =
                                                       AStack_183.timeStamp.fakeValue;
                                                  AStack_14.timeStamp.inited =
                                                       AStack_183.timeStamp.inited;
                                                  AStack_14.timeStamp._21_3_ =
                                                       AStack_183.timeStamp._21_3_;
                                                  AStack_14.persistant = AStack_183.persistant;
                                                  AStack_14._73_3_ = AStack_183._73_3_;
                                                  AStack_14.lastTimeStamp =
                                                       AStack_183.lastTimeStamp;
                                                  AStack_14.avatarModifierPackageType =
                                                       AStack_183.avatarModifierPackageType;
                                                  AStack_14.avatarModifierPackageAdditionPolicy =
                                                       AStack_183.
                                                       avatarModifierPackageAdditionPolicy;
                                                  FUN_?(this,0xf,&AStack_14);
                                                  uVar13 = 0;
                                                  pAVar184 = 
                                                  AvatarModifierPackageFactory_AssembleInvulnerabilityPackage
                                                            (aAStack_185,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_SpawnProtection,
                                                  fVar64,(MethodInfo *)0x0);
                                                  AStack_14.id = pAVar184->id;
                                                  AStack_14._4_4_ =
                                                       *(undefined4 *)&pAVar184->field_0x4;
                                                  AStack_14.duration.currentCryptoKey =
                                                       (pAVar184->duration).currentCryptoKey;
                                                  AStack_14.duration.hiddenValue =
                                                       (pAVar184->duration).hiddenValue;
                                                  AStack_14.duration.hiddenValueOld =
                                                       (pAVar184->duration).hiddenValueOld;
                                                  AStack_14.duration.fakeValue =
                                                       (pAVar184->duration).fakeValue;
                                                  AStack_14.duration.inited =
                                                       (pAVar184->duration).inited;
                                                  AStack_14.duration._21_3_ =
                                                       *(undefined3 *)
                                                        &(pAVar184->duration).field_0x15;
                                                  AStack_14.avatarModifiers =
                                                       pAVar184->avatarModifiers;
                                                  AStack_14.actionsToTakeVsTypes =
                                                       pAVar184->actionsToTakeVsTypes;
                                                  AStack_14.timeStamp.currentCryptoKey =
                                                       (pAVar184->timeStamp).currentCryptoKey;
                                                  AStack_14.timeStamp.hiddenValue =
                                                       (pAVar184->timeStamp).hiddenValue;
                                                  AStack_14.timeStamp.hiddenValueOld =
                                                       (pAVar184->timeStamp).hiddenValueOld;
                                                  AStack_14.timeStamp.fakeValue =
                                                       (pAVar184->timeStamp).fakeValue;
                                                  AStack_14.timeStamp.inited =
                                                       (pAVar184->timeStamp).inited;
                                                  AStack_14.timeStamp._21_3_ =
                                                       *(undefined3 *)
                                                        &(pAVar184->timeStamp).field_0x15;
                                                  AStack_14.persistant = pAVar184->persistant;
                                                  AStack_14._73_3_ =
                                                       *(undefined3 *)&pAVar184->field_0x49;
                                                  AStack_14.lastTimeStamp = pAVar184->lastTimeStamp;
                                                  AStack_14.avatarModifierPackageType =
                                                       pAVar184->avatarModifierPackageType;
                                                  AStack_14.avatarModifierPackageAdditionPolicy =
                                                       pAVar184->avatarModifierPackageAdditionPolicy;
                                                  FUN_?(this,0x11,&AStack_14);
                                                  pAVar7 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                  uStack_186 = AvatarModifierPackageFactory_Const
                                                                         (c_01,(MethodInfo *)0x0);
                                                  uStack_187 = 1;
                                                  uStack_188 = 0xf;
                                                  func_?(&uStack_186);
                                                  if (pAVar7 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    uStack_96 = uStack_187;
                                                    uStack_97 = uStack_188;
                                                    uStack_98 = (undefined4)uStack_186;
                                                    uStack_99 = uStack_186._4_4_;
                                                    FUN_?(pAVar7,0,&uStack_96);
                                                    uStack_189 = AvatarModifierPackageFactory_Const
                                                                           (c_01,(MethodInfo *)0x0);
                                                    uStack_190 = 1;
                                                    uStack_191 = 0x15;
                                                    func_?(&uStack_189);
                                                    uStack_96 = uStack_190;
                                                    uStack_97 = uStack_191;
                                                    uStack_98 = (undefined4)uStack_189;
                                                    uStack_99 = uStack_189._4_4_;
                                                    FUN_?(pAVar7,1,&uStack_96);
                                                    pDVar75 = (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)FUN_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>
                                                  );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::
                                                  Int32Enum,GamePassesHighScoreList+HighScoreListData]
                                                  ::
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                                                            (pDVar75,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Dictionary__
                                                  );
                                                  if (pDVar75 !=
                                                      (
                                                  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                                  *)0x0) {
                                                    uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::
                                                    Int32Enum]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                                                  pDVar75,4,2,(InsertionBehavior__Enum)uVar13,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  ->klass->rgctx_data[0x22].method);
                                                  uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),2
                                                                   );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Int32Enum]
                                                  ::
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                                                  pDVar75,1,2,(InsertionBehavior__Enum)uVar13,
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__Add_AvatarModifierPackageType__ModifierActions_
                                                  ->klass->rgctx_data[0x22].method);
                                                  AStack_192.id = 0;
                                                  AStack_192._4_4_ = 0;
                                                  AStack_192.duration.currentCryptoKey = 0;
                                                  AStack_192.duration.hiddenValue.b1 = 0;
                                                  AStack_192.duration.hiddenValue.b2 = 0;
                                                  AStack_192.duration.hiddenValue.b3 = 0;
                                                  AStack_192.duration.hiddenValue.b4 = 0;
                                                  AStack_192.avatarModifierPackageType = 0;
                                                  AStack_192.avatarModifierPackageAdditionPolicy = 0
                                                  ;
                                                  AStack_192.duration.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_192.duration.fakeValue = 0.0;
                                                  AStack_192.duration.inited = 0;
                                                  AStack_192.duration._21_3_ = 0;
                                                  AStack_192.avatarModifiers =
                                                       (AvatarModifierPackage_AvatarModifier__Array
                                                        *)0x0;
                                                  AStack_192.actionsToTakeVsTypes =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                                  AStack_192.timeStamp.currentCryptoKey = 0;
                                                  AStack_192.timeStamp.hiddenValue.b1 = 0;
                                                  AStack_192.timeStamp.hiddenValue.b2 = 0;
                                                  AStack_192.timeStamp.hiddenValue.b3 = 0;
                                                  AStack_192.timeStamp.hiddenValue.b4 = 0;
                                                  AStack_192.timeStamp.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_192.timeStamp.fakeValue = 0.0;
                                                  AStack_192.timeStamp.inited = 0;
                                                  AStack_192.timeStamp._21_3_ = 0;
                                                  AStack_192.persistant = 0;
                                                  AStack_192._73_3_ = 0;
                                                  AStack_192.lastTimeStamp = 0.0;
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_192,
                                                             AvatarModifierPackageType__Enum_RayHeal
                                                             ,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Add,
                                                  _UNK_?,pAVar7,
                                                  (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)pDVar75,0,(MethodInfo *)0x0);
                                                  AStack_14.duration.hiddenValueOld =
                                                       AStack_192.duration.hiddenValueOld;
                                                  AStack_14.duration.fakeValue =
                                                       AStack_192.duration.fakeValue;
                                                  AStack_14.duration.inited =
                                                       AStack_192.duration.inited;
                                                  AStack_14.duration._21_3_ =
                                                       AStack_192.duration._21_3_;
                                                  AStack_14.timeStamp.currentCryptoKey =
                                                       AStack_192.timeStamp.currentCryptoKey;
                                                  AStack_14.timeStamp.hiddenValue =
                                                       AStack_192.timeStamp.hiddenValue;
                                                  AStack_14.timeStamp.hiddenValueOld =
                                                       AStack_192.timeStamp.hiddenValueOld;
                                                  AStack_14.id = AStack_192.id;
                                                  AStack_14._4_4_ = AStack_192._4_4_;
                                                  AStack_14.duration.currentCryptoKey =
                                                       AStack_192.duration.currentCryptoKey;
                                                  AStack_14.duration.hiddenValue =
                                                       AStack_192.duration.hiddenValue;
                                                  AStack_14.avatarModifierPackageType =
                                                       AStack_192.avatarModifierPackageType;
                                                  AStack_14.avatarModifierPackageAdditionPolicy =
                                                       AStack_192.
                                                       avatarModifierPackageAdditionPolicy;
                                                  AStack_14.avatarModifiers =
                                                       AStack_192.avatarModifiers;
                                                  AStack_14.actionsToTakeVsTypes =
                                                       AStack_192.actionsToTakeVsTypes;
                                                  AStack_14.timeStamp.fakeValue =
                                                       AStack_192.timeStamp.fakeValue;
                                                  AStack_14.timeStamp.inited =
                                                       AStack_192.timeStamp.inited;
                                                  AStack_14.timeStamp._21_3_ =
                                                       AStack_192.timeStamp._21_3_;
                                                  AStack_14.persistant = AStack_192.persistant;
                                                  AStack_14._73_3_ = AStack_192._73_3_;
                                                  AStack_14.lastTimeStamp =
                                                       AStack_192.lastTimeStamp;
                                                  FUN_?(this,0x12,&AStack_14);
                                                  pAVar7 = (
                                                  AvatarModifierPackage_AvatarModifier__Array *)
                                                  FUN_?(
                                                  TypeInfo__AvatarModifierPackage__AvatarModifier);
                                                  pFStack_193 = AvatarModifierPackageFactory_Const
                                                                          (fVar52,(MethodInfo *)0x0);
                                                  uStack_194 = 1;
                                                  uStack_195 = 0x1d;
                                                  func_?(&pFStack_193);
                                                  if (pAVar7 != (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0)
                                                  {
                                                    if ((int)pAVar7->max_length != 0) {
                                                      bVar2 = iRam_? != 0;
                                                      pAVar7->vector[0].avatarModifierType =
                                                           uStack_194;
                                                      pAVar7->vector[0].avatarModifierEffect =
                                                           uStack_195;
                                                      pAVar7->vector[0].value = pFStack_193;
                                                      if (bVar2) {
                                                        uVar3 = (uint)((ulonglong)
                                                                        &pAVar7->vector[0].value >>
                                                                       0xc);
                                                        uVar4 = (ulonglong)
                                                                 ((uVar3 & 0x1fffff) >> 6);
                                                        do {
                                                          uVar5 = *(ulonglong *)
                                                                   (uVar4 * 8 + 0xADDR);
                                                          puVar6 = (ulonglong *)
                                                                   (uVar4 * 8 + 0xADDR);
                                                          LOCK();
                                                          bVar2 = uVar5 == *puVar6;
                                                          if (bVar2) {
                                                            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                                          }
                                                          UNLOCK();
                                                        } while (!bVar2);
                                                      }
                                                      AStack_196.id = 0;
                                                      AStack_196._4_4_ = 0;
                                                      AStack_196.duration.currentCryptoKey = 0;
                                                      AStack_196.duration.hiddenValue.b1 = 0;
                                                      AStack_196.duration.hiddenValue.b2 = 0;
                                                      AStack_196.duration.hiddenValue.b3 = 0;
                                                      AStack_196.duration.hiddenValue.b4 = 0;
                                                      AStack_196.avatarModifierPackageType = 0;
                                                      AStack_196.avatarModifierPackageAdditionPolicy
                                                           = 0;
                                                      AStack_196.duration.hiddenValueOld =
                                                           (Byte__Array *)0x0;
                                                      AStack_196.duration.fakeValue = 0.0;
                                                      AStack_196.duration.inited = 0;
                                                      AStack_196.duration._21_3_ = 0;
                                                      AStack_196.avatarModifiers =
                                                           (
                                                  AvatarModifierPackage_AvatarModifier__Array *)0x0;
                                                  AStack_196.actionsToTakeVsTypes =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0;
                                                  AStack_196.timeStamp.currentCryptoKey = 0;
                                                  AStack_196.timeStamp.hiddenValue.b1 = 0;
                                                  AStack_196.timeStamp.hiddenValue.b2 = 0;
                                                  AStack_196.timeStamp.hiddenValue.b3 = 0;
                                                  AStack_196.timeStamp.hiddenValue.b4 = 0;
                                                  AStack_196.timeStamp.hiddenValueOld =
                                                       (Byte__Array *)0x0;
                                                  AStack_196.timeStamp.fakeValue = 0.0;
                                                  AStack_196.timeStamp.inited = 0;
                                                  AStack_196.timeStamp._21_3_ = 0;
                                                  AStack_196.persistant = 0;
                                                  AStack_196._73_3_ = 0;
                                                  AStack_196.lastTimeStamp = 0.0;
                                                  AvatarModifierPackage::AvatarModifierPackage__ctor
                                                            (&AStack_196,
                                                                                                                          
                                                  AvatarModifierPackageType__Enum_RayHealEnemy,
                                                  AvatarModifierPackageAdditionPolicy__Enum_Renew,c,
                                                  pAVar7,(
                                                  Dictionary_2_AvatarModifierPackageType_ModifierActions_
                                                  *)0x0,0,(MethodInfo *)0x0);
                                                  AStack_14.id = AStack_196.id;
                                                  AStack_14._4_4_ = AStack_196._4_4_;
                                                  AStack_14.duration.currentCryptoKey =
                                                       AStack_196.duration.currentCryptoKey;
                                                  AStack_14.duration.hiddenValue =
                                                       AStack_196.duration.hiddenValue;
                                                  AStack_14.duration.hiddenValueOld =
                                                       AStack_196.duration.hiddenValueOld;
                                                  AStack_14.duration.fakeValue =
                                                       AStack_196.duration.fakeValue;
                                                  AStack_14.duration.inited =
                                                       AStack_196.duration.inited;
                                                  AStack_14.duration._21_3_ =
                                                       AStack_196.duration._21_3_;
                                                  AStack_14.avatarModifiers =
                                                       AStack_196.avatarModifiers;
                                                  AStack_14.actionsToTakeVsTypes =
                                                       AStack_196.actionsToTakeVsTypes;
                                                  AStack_14.timeStamp.currentCryptoKey =
                                                       AStack_196.timeStamp.currentCryptoKey;
                                                  AStack_14.timeStamp.hiddenValue =
                                                       AStack_196.timeStamp.hiddenValue;
                                                  AStack_14.timeStamp.hiddenValueOld =
                                                       AStack_196.timeStamp.hiddenValueOld;
                                                  AStack_14.timeStamp.fakeValue =
                                                       AStack_196.timeStamp.fakeValue;
                                                  AStack_14.timeStamp.inited =
                                                       AStack_196.timeStamp.inited;
                                                  AStack_14.timeStamp._21_3_ =
                                                       AStack_196.timeStamp._21_3_;
                                                  AStack_14.persistant = AStack_196.persistant;
                                                  AStack_14._73_3_ = AStack_196._73_3_;
                                                  AStack_14.lastTimeStamp =
                                                       AStack_196.lastTimeStamp;
                                                  AStack_14.avatarModifierPackageType =
                                                       AStack_196.avatarModifierPackageType;
                                                  AStack_14.avatarModifierPackageAdditionPolicy =
                                                       AStack_196.
                                                       avatarModifierPackageAdditionPolicy;
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::
                                                  Int32Enum,AvatarModifierPackage]::
                                                  Dictionary_2_System_Int32Enum_AvatarModifierPackage__TryInsert
                                                            (this,0x19,&AStack_14,
                                                             (InsertionBehavior__Enum)
                                                             CONCAT71((int7)((ulonglong)uVar13 >> 8)
                                                                      ,2),
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifierPackage>__Add_AvatarModifierPackageType__AvatarModifierPackage_
                                                  ->klass->rgctx_data[0x22].method);
                                                  TypeInfo__AvatarModifierPackageFactory->
                                                  static_fields->protoPackages =
                                                       (
                                                  Dictionary_2_AvatarModifierPackageType_AvatarModifierPackage_
                                                  *)this;
                                                  func_?(
                                                  TypeInfo__AvatarModifierPackageFactory->
                                                  static_fields);
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
        pcVar197 = (code *)swi(3);
        (*pcVar197)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar197 = (code *)swi(3);
  (*pcVar197)();
  return;
}

