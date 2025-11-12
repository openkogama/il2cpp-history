
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_AddModifier
               (AvatarModifierPackages *this,AvatarModifierPackageType__Enum modifierPackageType,
               int32_t id,AvatarModifierPackage_AvatarModifier__Array *additionalModifers,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackageFactory);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarModifierPackage__AvatarModifier__MethodInfo__System__Linq__Enumerable__ToArray<AvatarModifierPackage::AvatarModifier>_System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_MethodInfo__System__Linq__Enumerable__Union<AvatarModifierPackage::AvatarModifier>_System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>__System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pAStack_2 = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
  pDStack_3 = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
  OStack_4.currentCryptoKey = 0;
  OStack_4.hiddenValue.b1 = 0;
  OStack_4.hiddenValue.b2 = 0;
  OStack_4.hiddenValue.b3 = 0;
  OStack_4.hiddenValue.b4 = 0;
  OStack_4.hiddenValueOld = (Byte__Array *)0x0;
  OStack_4.fakeValue = 0.0;
  OStack_4.inited = 0;
  OStack_4._21_3_ = 0;
  uStack_5 = 0;
  if (modifierPackageType != AvatarModifierPackageType__Enum_None) {
    if (*(int *)&(TypeInfo__AvatarModifierPackageFactory->_1).field_0x1c == 0) {
      FUN_?();
    }
    pAVar6 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                        (&AStack_7,modifierPackageType,(MethodInfo *)0x0);
    uVar8._0_4_ = pAVar6->id;
    uVar8._4_4_ = *(undefined4 *)&pAVar6->field_0x4;
    uVar9._0_4_ = (pAVar6->duration).currentCryptoKey;
    uVar9._4_4_ = (pAVar6->duration).hiddenValue;
    pBVar10 = (pAVar6->duration).hiddenValueOld;
    uVar11._0_4_ = (pAVar6->duration).fakeValue;
    uVar11._4_1_ = (pAVar6->duration).inited;
    uVar11._5_3_ = *(undefined3 *)&(pAVar6->duration).field_0x15;
    pAStack_2 = pAVar6->avatarModifiers;
    pDStack_3 = pAVar6->actionsToTakeVsTypes;
    OStack_4.currentCryptoKey = (pAVar6->timeStamp).currentCryptoKey;
    OStack_4.hiddenValue = (pAVar6->timeStamp).hiddenValue;
    OStack_4.hiddenValueOld = (pAVar6->timeStamp).hiddenValueOld;
    OStack_4.fakeValue = (pAVar6->timeStamp).fakeValue;
    OStack_4.inited = (pAVar6->timeStamp).inited;
    OStack_4._21_3_ = *(undefined3 *)&(pAVar6->timeStamp).field_0x15;
    uStack_5._0_1_ = pAVar6->persistant;
    uStack_5._1_3_ = *(undefined3 *)&pAVar6->field_0x49;
    uStack_5._4_4_ = pAVar6->lastTimeStamp;
    uStack_1._0_4_ = pAVar6->avatarModifierPackageType;
    uStack_1._4_4_ = pAVar6->avatarModifierPackageAdditionPolicy;
    if (additionalModifers != (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
      AStack_12.id = pAVar6->id;
      AStack_12._4_4_ = *(undefined4 *)&pAVar6->field_0x4;
      AStack_12.duration.currentCryptoKey = (pAVar6->duration).currentCryptoKey;
      AStack_12.duration.hiddenValue = (pAVar6->duration).hiddenValue;
      AStack_12.duration.hiddenValueOld = (pAVar6->duration).hiddenValueOld;
      AStack_12.duration.fakeValue = (pAVar6->duration).fakeValue;
      AStack_12.duration.inited = (pAVar6->duration).inited;
      AStack_12.duration._21_3_ = *(undefined3 *)&(pAVar6->duration).field_0x15;
      AStack_12.timeStamp.currentCryptoKey = (pAVar6->timeStamp).currentCryptoKey;
      AStack_12.timeStamp.hiddenValue = (pAVar6->timeStamp).hiddenValue;
      AStack_12.timeStamp.hiddenValueOld = (pAVar6->timeStamp).hiddenValueOld;
      AStack_12.timeStamp.fakeValue = (pAVar6->timeStamp).fakeValue;
      AStack_12.timeStamp.inited = (pAVar6->timeStamp).inited;
      AStack_12.timeStamp._21_3_ = *(undefined3 *)&(pAVar6->timeStamp).field_0x15;
      AStack_12.persistant = pAVar6->persistant;
      AStack_12._73_3_ = *(undefined3 *)&pAVar6->field_0x49;
      AStack_12.lastTimeStamp = pAVar6->lastTimeStamp;
      AStack_12.avatarModifierPackageType = pAVar6->avatarModifierPackageType;
      AStack_12.avatarModifierPackageAdditionPolicy = pAVar6->avatarModifierPackageAdditionPolicy;
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_Union_2
                         ((IEnumerable_1_AvatarModifierPackage_AvatarModifier_ *)
                          pAVar6->avatarModifiers,
                          (IEnumerable_1_AvatarModifierPackage_AvatarModifier_ *)additionalModifers,
                          System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_MethodInfo__System__Linq__Enumerable__Union<AvatarModifierPackage::AvatarModifier>_System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>__System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_
                         );
      pMVar13 = 
      AvatarModifierPackage__AvatarModifier__MethodInfo__System__Linq__Enumerable__ToArray<AvatarModifierPackage::AvatarModifier>_System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_____
      ;
      if ((
          AvatarModifierPackage__AvatarModifier__MethodInfo__System__Linq__Enumerable__ToArray<AvatarModifierPackage::AvatarModifier>_System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_____
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     AvatarModifierPackage__AvatarModifier__MethodInfo__System__Linq__Enumerable__ToArray<AvatarModifierPackage::AvatarModifier>_System__Collections__Generic__IEnumerable<AvatarModifierPackage::AvatarModifier>_____
                     );
      }
      if (source == (IEnumerable_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
        s = (String *)func_?(&StringLiteral_source);
        pEVar14 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
        FUN_?(pEVar14,pMVar13);
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      BStack_16.items = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
      BStack_16.count = 0;
      BStack_16._12_4_ = 0;
      System.Core.dll::System::Linq::Buffer`1[AvatarModifierPackage+AvatarModifier]::
      Buffer_1_AvatarModifierPackage_AvatarModifier___ctor
                (&BStack_16,source,(pMVar13->field7_0x38).rgctx_data[2].method);
      uStack_17 = BStack_16.items._0_4_;
      uStack_18 = BStack_16.items._4_4_;
      iStack_19 = BStack_16.count;
      uStack_20 = BStack_16._12_4_;
      pAStack_2 = (AvatarModifierPackage_AvatarModifier__Array *)
                    FUN_?(&uStack_17,(pMVar13->field7_0x38).rgctx_data[3].rgctxDataDummy);
      if (iRam_? != 0) {
        uVar21 = (uint)((ulonglong)&pAStack_2 >> 0xc);
        puVar22 = (ulonglong *)((ulonglong)((uVar21 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar23 = *puVar22;
          LOCK();
          uVar24 = *puVar22;
          if (uVar23 == uVar24) {
            *puVar22 = uVar23 | 1L << (uVar21 & 0x3f);
          }
          UNLOCK();
        } while (uVar23 != uVar24);
      }
    }
    AStack_12.avatarModifiers = pAStack_2;
    AStack_12.actionsToTakeVsTypes = pDStack_3;
    AStack_12.timeStamp.currentCryptoKey = OStack_4.currentCryptoKey;
    AStack_12.timeStamp.hiddenValue = OStack_4.hiddenValue;
    AStack_12.timeStamp.hiddenValueOld = OStack_4.hiddenValueOld;
    AStack_12.timeStamp.fakeValue = OStack_4.fakeValue;
    AStack_12.timeStamp.inited = OStack_4.inited;
    AStack_12.timeStamp._21_3_ = OStack_4._21_3_;
    AStack_12.persistant = (bool)uStack_5;
    AStack_12._73_3_ = uStack_5._1_3_;
    AStack_12.lastTimeStamp = uStack_5._4_4_;
    AStack_12.avatarModifierPackageType = (int32_t)uStack_1;
    AStack_12.avatarModifierPackageAdditionPolicy = uStack_1._4_4_;
    AStack_12._0_8_ = uVar8;
    AStack_12.duration._0_8_ = uVar9;
    AStack_12.duration.hiddenValueOld = pBVar10;
    AStack_12.duration._16_8_ = uVar11;
    AvatarModifierPackages_AddModifierPackage(this,&AStack_12,id,(MethodInfo *)0x0);
    pAVar25 = pAStack_2;
    uVar21 = 0;
    if (pAStack_2 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) {
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pAVar26 = pAStack_2->vector;
    for (; (int)uVar21 < (int)pAVar25->max_length; uVar21 = uVar21 + 1) {
      if ((uint)pAVar25->max_length <= uVar21) {
        FUN_?();
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar27 = pAVar26->avatarModifierEffect;
      if (((iVar27 == 7) || (iVar27 == 8)) &&
         ((this->fields).OnUnequipItemEvent != (EventHandler_1_EventArgs_ *)0x0)) {
        pEVar28 = (this->fields).OnUnequipItemEvent;
        if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__System__EventArgs);
        }
        (*(pEVar28->fields)._._.invoke_impl)
                  ((pEVar28->fields)._._.method_code,this,
                   TypeInfo__System__EventArgs->static_fields->Empty,(pEVar28->fields)._._.method);
      }
      if ((iVar27 == 9) &&
         ((this->fields).OnDisableVehiclesEvent != (EventHandler_1_EventArgs_ *)0x0)) {
        pEVar28 = (this->fields).OnDisableVehiclesEvent;
        if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__System__EventArgs);
        }
        (*(pEVar28->fields)._._.invoke_impl)
                  ((pEVar28->fields)._._.method_code,this,
                   TypeInfo__System__EventArgs->static_fields->Empty,(pEVar28->fields)._._.method);
      }
      pAVar26 = pAVar26 + 1;
    }
  }
  return;
}


/* Void AddModifierPackage(AvatarModifierPackage, Int32) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_AddModifierPackage
               (AvatarModifierPackages *this,AvatarModifierPackage *modifierPackage,int32_t id,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackage);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Add_AvatarModifierPackage_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__FindIndex_System__Predicate<AvatarModifierPackage>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__set_Item_int__AvatarModifierPackage_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<AvatarModifierPackage>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarModifierPackages____c__DisplayClass20_0___AddModifierPackage_b__0_AvatarModifierPackage_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarModifierPackages____c__DisplayClass20_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  AStack_1.id = 0;
  AStack_1._4_4_ = 0;
  AStack_1.duration.currentCryptoKey = 0;
  AStack_1.duration.hiddenValue.b1 = 0;
  AStack_1.duration.hiddenValue.b2 = 0;
  AStack_1.duration.hiddenValue.b3 = 0;
  AStack_1.duration.hiddenValue.b4 = 0;
  AStack_1.avatarModifierPackageType = 0;
  AStack_1.avatarModifierPackageAdditionPolicy = 0;
  AStack_1.duration.hiddenValueOld = (Byte__Array *)0x0;
  AStack_1.duration.fakeValue = 0.0;
  AStack_1.duration.inited = 0;
  AStack_1.duration._21_3_ = 0;
  AStack_1.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
  AStack_1.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
  AStack_1.timeStamp.currentCryptoKey = 0;
  AStack_1.timeStamp.hiddenValue.b1 = 0;
  AStack_1.timeStamp.hiddenValue.b2 = 0;
  AStack_1.timeStamp.hiddenValue.b3 = 0;
  AStack_1.timeStamp.hiddenValue.b4 = 0;
  AStack_1.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
  AStack_1.timeStamp.fakeValue = 0.0;
  AStack_1.timeStamp.inited = 0;
  AStack_1.timeStamp._21_3_ = 0;
  AStack_1.persistant = 0;
  AStack_1._73_3_ = 0;
  AStack_1.lastTimeStamp = 0.0;
  lVar2 = FUN_?(TypeInfo__AvatarModifierPackages____c__DisplayClass20_0);
  if (lVar2 == 0) goto code_?;
  bVar3 = iRam_? != 0;
  uVar4 = *(undefined8 *)&modifierPackage->duration;
  pBVar5 = (modifierPackage->duration).hiddenValueOld;
  uVar6 = *(undefined8 *)&(modifierPackage->duration).fakeValue;
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)modifierPackage;
  *(undefined8 *)(lVar2 + 0x18) = uVar4;
  pAVar7 = modifierPackage->avatarModifiers;
  pDVar8 = modifierPackage->actionsToTakeVsTypes;
  *(Byte__Array **)(lVar2 + 0x20) = pBVar5;
  *(undefined8 *)(lVar2 + 0x28) = uVar6;
  uVar4 = *(undefined8 *)&modifierPackage->timeStamp;
  pBVar5 = (modifierPackage->timeStamp).hiddenValueOld;
  *(AvatarModifierPackage_AvatarModifier__Array **)(lVar2 + 0x30) = pAVar7;
  *(Dictionary_2_AvatarModifierPackageType_ModifierActions_ **)(lVar2 + 0x38) = pDVar8;
  uVar6 = *(undefined8 *)&(modifierPackage->timeStamp).fakeValue;
  uVar9 = *(undefined8 *)&modifierPackage->persistant;
  *(undefined8 *)(lVar2 + 0x40) = uVar4;
  *(Byte__Array **)(lVar2 + 0x48) = pBVar5;
  uVar4 = *(undefined8 *)&modifierPackage->avatarModifierPackageType;
  *(undefined8 *)(lVar2 + 0x50) = uVar6;
  *(undefined8 *)(lVar2 + 0x58) = uVar9;
  *(undefined8 *)(lVar2 + 0x60) = uVar4;
  if (bVar3) {
    uVar10 = (uint)(lVar2 + 0x20U >> 0xc);
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
  *(int32_t *)(lVar2 + 0x10) = id;
  AStack_14._0_8_ = *(undefined8 *)(lVar2 + 0x10);
  AStack_14.duration._0_8_ = *(undefined8 *)(lVar2 + 0x18);
  AStack_14.duration.hiddenValueOld = *(Byte__Array **)(lVar2 + 0x20);
  AStack_14.duration._16_8_ = *(undefined8 *)(lVar2 + 0x28);
  AStack_14.avatarModifiers = *(AvatarModifierPackage_AvatarModifier__Array **)(lVar2 + 0x30);
  AStack_14.actionsToTakeVsTypes =
       *(Dictionary_2_AvatarModifierPackageType_ModifierActions_ **)(lVar2 + 0x38);
  AStack_14.timeStamp._0_8_ = *(undefined8 *)(lVar2 + 0x40);
  AStack_14.timeStamp.hiddenValueOld = *(Byte__Array **)(lVar2 + 0x48);
  AStack_14.timeStamp._16_8_ = *(undefined8 *)(lVar2 + 0x50);
  AStack_14._72_8_ = *(undefined8 *)(lVar2 + 0x58);
  AStack_14._80_8_ = *(undefined8 *)(lVar2 + 0x60);
  bVar15 = AvatarModifierPackages_HandleNewAvatarModifierPackage(this,&AStack_14,(MethodInfo *)0x0);
  if (bVar15 != 0) {
    if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (*(int *)(lVar2 + 100) == 1) {
      pLVar16 = (this->fields).packages;
      uVar4 = FUN_?(TypeInfo__System__Predicate<AvatarModifierPackage>);
      FUN_?(uVar4,lVar2,
                    MethodInfo__AvatarModifierPackages____c__DisplayClass20_0___AddModifierPackage_b__0_AvatarModifierPackage_
                   );
      if (pLVar16 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
      uVar10 = FUN_?(pLVar16,uVar4);
      lVar17 = (longlong)(int)uVar10;
      if (uVar10 != 0xffffffff) {
        pLVar16 = (this->fields).packages;
        if (pLVar16 != (List_1_AvatarModifierPackage_ *)0x0) {
          if ((uint)(pLVar16->fields)._size <= uVar10) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          pAVar19 = (pLVar16->fields)._items;
          if (pAVar19 != (AvatarModifierPackage__Array *)0x0) {
            if ((uint)pAVar19->max_length <= uVar10) {
              FUN_?();
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            pAVar20 = pAVar19->vector + lVar17;
            AStack_1.id = pAVar20->id;
            AStack_1._4_4_ = *(undefined4 *)&pAVar20->field_0x4;
            AStack_1.duration.currentCryptoKey = (pAVar20->duration).currentCryptoKey;
            AStack_1.duration.hiddenValue = (pAVar20->duration).hiddenValue;
            ppBVar21 = &pAVar19->vector[lVar17].duration.hiddenValueOld;
            AStack_1.duration.hiddenValueOld = *ppBVar21;
            AStack_1.duration._16_8_ = ppBVar21[1];
            ppAVar22 = &pAVar19->vector[lVar17].avatarModifiers;
            AStack_1.avatarModifiers = *ppAVar22;
            AStack_1.actionsToTakeVsTypes =
                 (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)ppAVar22[1];
            pOVar23 = &pAVar19->vector[lVar17].timeStamp;
            AStack_1.timeStamp.currentCryptoKey = pOVar23->currentCryptoKey;
            AStack_1.timeStamp.hiddenValue = pOVar23->hiddenValue;
            AStack_1.timeStamp.hiddenValueOld = pOVar23->hiddenValueOld;
            pfVar24 = &pAVar19->vector[lVar17].timeStamp.fakeValue;
            AStack_1.timeStamp.fakeValue = *pfVar24;
            AStack_1.timeStamp._20_4_ = pfVar24[1];
            AStack_1._72_4_ = pfVar24[2];
            AStack_1.lastTimeStamp = pfVar24[3];
            AStack_1.avatarModifierPackageType = pAVar19->vector[lVar17].avatarModifierPackageType;
            AStack_1.avatarModifierPackageAdditionPolicy =
                 pAVar19->vector[lVar17].avatarModifierPackageAdditionPolicy;
            if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
              FUN_?();
            }
            AvatarModifierPackage::AvatarModifierPackage_Renew(&AStack_1,(MethodInfo *)0x0);
            pLVar16 = (this->fields).packages;
            if (pLVar16 != (List_1_AvatarModifierPackage_ *)0x0) {
              if ((uint)(pLVar16->fields)._size <= uVar10) goto code_?;
              pAVar19 = (pLVar16->fields)._items;
              if (pAVar19 != (AvatarModifierPackage__Array *)0x0) {
                AStack_14.id = AStack_1.id;
                AStack_14._4_4_ = AStack_1._4_4_;
                AStack_14.duration.currentCryptoKey = AStack_1.duration.currentCryptoKey;
                AStack_14.duration.hiddenValue = AStack_1.duration.hiddenValue;
                AStack_14.duration.hiddenValueOld = AStack_1.duration.hiddenValueOld;
                AStack_14.duration.fakeValue = AStack_1.duration.fakeValue;
                AStack_14.duration.inited = AStack_1.duration.inited;
                AStack_14.duration._21_3_ = AStack_1.duration._21_3_;
                AStack_14.avatarModifiers = AStack_1.avatarModifiers;
                AStack_14.actionsToTakeVsTypes = AStack_1.actionsToTakeVsTypes;
                AStack_14.timeStamp.currentCryptoKey = AStack_1.timeStamp.currentCryptoKey;
                AStack_14.timeStamp.hiddenValue = AStack_1.timeStamp.hiddenValue;
                AStack_14.timeStamp.hiddenValueOld = AStack_1.timeStamp.hiddenValueOld;
                AStack_14.timeStamp.inited = AStack_1.timeStamp.inited;
                AStack_14.timeStamp._21_3_ = AStack_1.timeStamp._21_3_;
                AStack_14.timeStamp.fakeValue = AStack_1.timeStamp.fakeValue;
                AStack_14.lastTimeStamp = AStack_1.lastTimeStamp;
                AStack_14.persistant = AStack_1.persistant;
                AStack_14._73_3_ = AStack_1._73_3_;
                AStack_14.avatarModifierPackageType = AStack_1.avatarModifierPackageType;
                AStack_14.avatarModifierPackageAdditionPolicy =
                     AStack_1.avatarModifierPackageAdditionPolicy;
                FUN_?(pAVar19,lVar17,&AStack_14);
                piVar25 = &(pLVar16->fields)._version;
                *piVar25 = *piVar25 + 1;
                return;
              }
            }
          }
        }
        goto code_?;
      }
    }
    pLVar16 = (this->fields).packages;
    if (pLVar16 == (List_1_AvatarModifierPackage_ *)0x0) {
code_?:
      FUN_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    AStack_14._0_8_ = *(undefined8 *)(lVar2 + 0x10);
    AStack_14.duration._0_8_ = *(undefined8 *)(lVar2 + 0x18);
    AStack_14.duration.hiddenValueOld = *(Byte__Array **)(lVar2 + 0x20);
    AStack_14.duration._16_8_ = *(undefined8 *)(lVar2 + 0x28);
    AStack_14.avatarModifiers = *(AvatarModifierPackage_AvatarModifier__Array **)(lVar2 + 0x30);
    AStack_14.actionsToTakeVsTypes =
         *(Dictionary_2_AvatarModifierPackageType_ModifierActions_ **)(lVar2 + 0x38);
    AStack_14.timeStamp._0_8_ = *(undefined8 *)(lVar2 + 0x40);
    AStack_14.timeStamp.hiddenValueOld = *(Byte__Array **)(lVar2 + 0x48);
    AStack_14.timeStamp._16_8_ = *(undefined8 *)(lVar2 + 0x50);
    AStack_14._72_8_ = *(undefined8 *)(lVar2 + 0x58);
    AStack_14._80_8_ = *(undefined8 *)(lVar2 + 0x60);
    FUN_?(pLVar16,&AStack_14,
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Add_AvatarModifierPackage_
                 );
  }
  return;
}


/* Void ClearModifiers() */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_ClearModifiers
               (AvatarModifierPackages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).packages;
  if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = (pLVar1->fields)._size;
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) {
      return;
    }
    if ((this->fields).OnModifierExpired != (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0)
    {
      pLVar1 = (this->fields).packages;
      pAVar4 = (this->fields).OnModifierExpired;
      if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
      puVar5 = (undefined8 *)FUN_?(auStack_6,pLVar1,iVar3);
      uStack_7 = *puVar5;
      uStack_8 = puVar5[1];
      uStack_9 = puVar5[2];
      uStack_10 = puVar5[3];
      uStack_11 = puVar5[4];
      uStack_12 = puVar5[5];
      uStack_13 = puVar5[6];
      uStack_14 = puVar5[7];
      uStack_15 = *(undefined4 *)(puVar5 + 8);
      uStack_16 = *(undefined4 *)((longlong)puVar5 + 0x44);
      uStack_17 = *(undefined4 *)(puVar5 + 9);
      uStack_18 = *(undefined4 *)((longlong)puVar5 + 0x4c);
      uStack_19 = puVar5[10];
      (*(pAVar4->fields)._._.invoke_impl)
                ((pAVar4->fields)._._.method_code,&uStack_7,(pAVar4->fields)._._.method);
    }
    pLVar1 = (this->fields).packages;
    if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
    FUN_?(pLVar1,iVar3);
  } while( true );
}


/* Void ClearNonPersistantModifiers() */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_ClearNonPersistantModifiers
               (AvatarModifierPackages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).packages;
  if (pLVar1 != (List_1_AvatarModifierPackage_ *)0x0) {
    uVar2 = (pLVar1->fields)._size - 1;
    if (-1 < (int)uVar2) {
      lVar3 = (longlong)(int)uVar2 * 0x58;
      do {
        pLVar1 = (this->fields).packages;
        if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
        if ((uint)(pLVar1->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pAVar5 = (pLVar1->fields)._items;
        if (pAVar5 == (AvatarModifierPackage__Array *)0x0) goto code_?;
        if ((uint)pAVar5->max_length <= uVar2) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar6 = (undefined8 *)((longlong)&pAVar5->vector[0].id + lVar3);
        uStack_7 = *puVar6;
        uStack_8 = puVar6[1];
        puVar6 = (undefined8 *)((longlong)&pAVar5->vector[0].duration.hiddenValueOld + lVar3);
        uStack_9 = *puVar6;
        uStack_10 = puVar6[1];
        puVar6 = (undefined8 *)((longlong)&pAVar5->vector[0].avatarModifiers + lVar3);
        uStack_11 = *puVar6;
        uStack_12 = puVar6[1];
        puVar6 = (undefined8 *)((longlong)&pAVar5->vector[0].timeStamp.currentCryptoKey + lVar3);
        uStack_13 = *puVar6;
        uStack_14 = puVar6[1];
        uStack_15 = *(undefined8 *)((longlong)&pAVar5->vector[0].avatarModifierPackageType + lVar3);
        if ((&pAVar5->vector[0].persistant)[lVar3] == 0) {
          if ((this->fields).OnModifierExpired !=
              (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
            pAVar16 = (this->fields).OnModifierExpired;
            if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
            puVar6 = (undefined8 *)FUN_?(auStack_17,pLVar1,uVar2);
            uStack_7 = *puVar6;
            uStack_8 = puVar6[1];
            uStack_9 = puVar6[2];
            uStack_10 = puVar6[3];
            uStack_11 = puVar6[4];
            uStack_12 = puVar6[5];
            uStack_13 = puVar6[6];
            uStack_14 = puVar6[7];
            uStack_18 = *(undefined4 *)(puVar6 + 8);
            uStack_19 = *(undefined4 *)((longlong)puVar6 + 0x44);
            uStack_20 = *(undefined4 *)(puVar6 + 9);
            uStack_21 = *(undefined4 *)((longlong)puVar6 + 0x4c);
            uStack_15 = puVar6[10];
            (*(pAVar16->fields)._._.invoke_impl)
                      ((pAVar16->fields)._._.method_code,&uStack_7,(pAVar16->fields)._._.method);
          }
          pLVar1 = (this->fields).packages;
          if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
          FUN_?(pLVar1,uVar2);
        }
        lVar3 = lVar3 + -0x58;
        uVar2 = uVar2 - 1;
      } while (-1 < (int)uVar2);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Dictionary`2[System.Int32,System.Single] ComputeModifierEffectGroupedById(AvatarModifierEffect,
   Single) */

Dictionary_2_System_Int32_System_Single_ *
Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_ComputeModifierEffectGroupedById
          (AvatarModifierPackages *this,AvatarModifierEffect__Enum modifierEffect,float baseValue,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Comparison<AvatarModifierPackage::AvatarModifier>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Add_int__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__Add_int__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_float>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Add_AvatarModifierPackage__AvatarModifier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Sort_System__Comparison<AvatarModifierPackage::AvatarModifier>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarModifierPackages____c___ComputeModifierEffectGroupedById_b__29_0_AvatarModifierPackage__AvatarModifier__AvatarModifierPackage__AvatarModifier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarModifierPackages____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_1._version = 0;
  DStack_1._index = 0;
  DStack_1._current.key = 0;
  DStack_1._current._4_4_ = 0;
  DStack_1._current.value = (Object *)0x0;
  DStack_1._getEnumeratorRetType = 0;
  DStack_1._36_4_ = 0;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__Dictionary__
            );
  pLVar2 = (this->fields).packages;
  if (pLVar2 != (List_1_AvatarModifierPackage_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pLStack_4 >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    lStack_9 = (ulonglong)(uint)(pLVar2->fields)._version << 0x20;
    uStack_10 = 0;
    uStack_11 = 0;
    lStack_12 = 0;
    uStack_13 = 0;
    uStack_14 = 0;
    uStack_15 = 0;
    uStack_16 = 0;
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_19 = 0;
    uStack_20 = 0;
    lStack_21 = lStack_9;
    pLStack_22 = (List_1_AvatarModifierPackage_ *)0x0;
    lStack_23 = 0;
    uStack_24 = 0;
    uStack_25 = 0;
    lStack_26 = 0;
    uStack_27 = 0;
    uStack_28 = 0;
    uStack_29 = 0;
    uStack_30 = 0;
    uStack_31 = 0;
    uStack_32 = 0;
    pLStack_4 = pLVar2;
    pLStack_33 = pLVar2;
    while (cVar34 = FUN_?(&pLStack_33,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                                 ), lVar35 = lStack_26, cVar34 != '\0') {
      pLStack_4 = pLStack_22;
      pLVar36 = pLStack_4;
      lStack_9 = lStack_23;
      uStack_10 = uStack_24;
      uStack_11 = uStack_25;
      lStack_12 = lStack_26;
      uStack_13 = uStack_27;
      uStack_14 = uStack_28;
      uStack_15 = uStack_29;
      uStack_16 = uStack_30;
      uStack_17 = uStack_31;
      uStack_18 = uStack_32;
      uVar3 = 0;
      if (lStack_26 == 0) goto code_?;
      pLStack_4._0_4_ = (int32_t)pLStack_22;
      key_00 = (int32_t)pLStack_4;
      pLStack_4 = pLVar36;
      for (; uVar37 = *(uint *)(lVar35 + 0x18), (int)uVar3 < (int)uVar37; uVar3 = uVar3 + 1) {
        if (uVar37 <= uVar3) goto code_?;
        puVar38 = (undefined4 *)(lVar35 + ((longlong)(int)uVar3 + 2) * 0x10);
        uVar39 = *puVar38;
        AVar40 = puVar38[1];
        uVar41 = puVar38[2];
        uVar42 = puVar38[3];
        if (AVar40 == modifierEffect) {
          if (this_00 ==
              (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
               *)0x0) goto code_?;
          iVar43 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Vector3]::
                   Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                             ((Dictionary_2_System_Int32_UnityEngine_Vector3_ *)this_00,key_00,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__ContainsKey_int_
                              ->klass->rgctx_data[0x21].method);
          if (iVar43 < 0) {
            pOVar44 = (Object *)
                      FUN_?(
                                   TypeInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>
                                   );
            FUN_?(pOVar44,
                          MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__List__
                         );
            pLVar2 = (List_1_AvatarModifierPackage_ *)CONCAT71((int7)((ulonglong)pLVar2 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryInsert
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,key_00,pOVar44,
                       (InsertionBehavior__Enum)pLVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__Add_int__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>_
                       ->klass->rgctx_data[0x22].method);
          }
          pOVar44 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_00,key_00,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__get_Item_int_
                              );
          if (pOVar44 == (Object *)0x0) goto code_?;
          uStack_45 = uVar39;
          AStack_46 = AVar40;
          uStack_47 = uVar41;
          uStack_48 = uVar42;
          FUN_?(pOVar44,&uStack_45,
                        MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Add_AvatarModifierPackage__AvatarModifier_
                       );
        }
      }
    }
    pDVar49 = (Dictionary_2_System_Int32_System_Single_ *)
              FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_float>);
    FUN_?();
    if (this_00 !=
        (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)0x0
       ) {
      uStack_50 = 0;
      uStack_51 = 0;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&pDStack_52 >> 0xc);
        uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      uStack_53 = (ulonglong)(uint)(this_00->fields)._version;
      uStack_54 = 2;
      DStack_1._version = (undefined4)uStack_53;
      DStack_1._index = uStack_53._4_4_;
      DStack_1._current.key = 0;
      DStack_1._current._4_4_ = 0;
      DStack_1._current.value = (Object *)0x0;
      DStack_1._getEnumeratorRetType = 2;
      DStack_1._36_4_ = 0;
      pDStack_52 = this_00;
      DStack_1._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)this_00;
      while( true ) {
        bVar55 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                 Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                           (&DStack_1,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::Collections::Generic::List<AvatarModifierPackage::AvatarModifier>_>__MoveNext__
                           );
        pOVar44 = DStack_1._current.value;
        if (bVar55 == 0) {
          return pDVar49;
        }
        key = DStack_1._current.key;
        if (*(int *)&(TypeInfo__AvatarModifierPackages____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar56 = TypeInfo__AvatarModifierPackages____c->static_fields->__9__29_0;
        if (pCVar56 == (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
          if (*(int *)&(TypeInfo__AvatarModifierPackages____c->_1).field_0x1c == 0) {
            FUN_?();
          }
          pAVar57 = TypeInfo__AvatarModifierPackages____c->static_fields->__9;
          pCVar56 = (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)
                    FUN_?(
                                 TypeInfo__System__Comparison<AvatarModifierPackage::AvatarModifier>
                                 );
          FUN_?(pCVar56,pAVar57,
                        MethodInfo__AvatarModifierPackages____c___ComputeModifierEffectGroupedById_b__29_0_AvatarModifierPackage__AvatarModifier__AvatarModifierPackage__AvatarModifier_
                       );
          TypeInfo__AvatarModifierPackages____c->static_fields->__9__29_0 = pCVar56;
          func_?(&TypeInfo__AvatarModifierPackages____c->static_fields->__9__29_0);
        }
        if (pOVar44 == (Object *)0x0) break;
        FUN_?(pOVar44,pCVar56);
        uVar3 = 0;
        value = baseValue;
        while( true ) {
          if (pOVar44 == (Object *)0x0) goto code_?;
          if ((int)*(uint *)&pOVar44[1].monitor <= (int)uVar3) break;
          if (*(uint *)&pOVar44[1].monitor <= uVar3) goto code_?;
          pOVar58 = pOVar44[1].klass;
          if (pOVar58 == (Object__Class *)0x0) goto code_?;
          if (*(uint *)&(pOVar58->_0).namespaze <= uVar3) goto code_?;
          iVar59 = (&(pOVar58->_0).byval_arg)[(int)uVar3].data.__klassIndex;
          if (iVar59 == 0) {
            if (*(uint *)&pOVar44[1].monitor <= uVar3) goto code_?;
            pOVar58 = pOVar44[1].klass;
            if (pOVar58 == (Object__Class *)0x0) goto code_?;
            if (*(uint *)&(pOVar58->_0).namespaze <= uVar3) goto code_?;
            lVar35 = *(longlong *)&(&(pOVar58->_0).byval_arg)[(int)uVar3].attrs;
            if (lVar35 == 0) goto code_?;
            fVar60 = (float)(**(code **)(lVar35 + 0x18))
                                      (*(undefined8 *)(lVar35 + 0x40),*(undefined8 *)(lVar35 + 0x28));
            value = value * fVar60;
code_?:
            uVar3 = uVar3 + 1;
          }
          else if (iVar59 == 1) {
            if (*(uint *)&pOVar44[1].monitor <= uVar3) goto code_?;
            pOVar58 = pOVar44[1].klass;
            if (pOVar58 == (Object__Class *)0x0) goto code_?;
            if (*(uint *)&(pOVar58->_0).namespaze <= uVar3) goto code_?;
            lVar35 = *(longlong *)&(&(pOVar58->_0).byval_arg)[(int)uVar3].attrs;
            if (lVar35 == 0) goto code_?;
            fVar60 = (float)(**(code **)(lVar35 + 0x18))
                                      (*(undefined8 *)(lVar35 + 0x40),*(undefined8 *)(lVar35 + 0x28));
            value = value + fVar60;
            uVar3 = uVar3 + 1;
          }
          else {
            if (iVar59 != 2) goto code_?;
            if (*(uint *)&pOVar44[1].monitor <= uVar3) goto code_?;
            pOVar58 = pOVar44[1].klass;
            if (pOVar58 == (Object__Class *)0x0) goto code_?;
            if (*(uint *)&(pOVar58->_0).namespaze <= uVar3) goto code_?;
            lVar35 = *(longlong *)&(&(pOVar58->_0).byval_arg)[(int)uVar3].attrs;
            if (lVar35 == 0) goto code_?;
            value = (float)(**(code **)(lVar35 + 0x18))
                                     (*(undefined8 *)(lVar35 + 0x40),*(undefined8 *)(lVar35 + 0x28));
            uVar3 = uVar3 + 1;
          }
        }
        if (pDVar49 == (Dictionary_2_System_Int32_System_Single_ *)0x0) goto code_?;
        pLVar2 = (List_1_AvatarModifierPackage_ *)CONCAT71((int7)((ulonglong)pLVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
        Dictionary_2_System_Int32_System_Single__TryInsert
                  (pDVar49,key,value,(InsertionBehavior__Enum)pLVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_float>__Add_int__float_
                   ->klass->rgctx_data[0x22].method);
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar61 = (code *)swi(3);
  pDVar49 = (Dictionary_2_System_Int32_System_Single_ *)(*pcVar61)();
  return pDVar49;
}


/* ModifierActions GetActionToTakeWithPackageType(AvatarModifierPackageType) */

ModifierActions__Enum
Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
          (AvatarModifierPackages *this,AvatarModifierPackageType__Enum modifierPackageType,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_ModifierActions>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1._dictionary = (Dictionary_2_System_UInt32_System_Int32_ *)0x0;
  DStack_1._index = 0;
  DStack_1._version = 0;
  DStack_1._currentKey = 0;
  DStack_1._20_4_ = 0;
  pLVar2 = (this->fields).packages;
  if (pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
  }
  else {
    uStack_3 = 0;
    uStack_4 = 0;
    uStack_5 = 0;
    uStack_6 = 0;
    uStack_7 = 0;
    uStack_8 = 0;
    uStack_9 = 0;
    uStack_10 = 0;
    uStack_11 = 0;
    uStack_12 = 0;
    if (iRam_? != 0) {
      uVar13 = (uint)((ulonglong)&pLStack_14 >> 0xc);
      puVar15 = (ulonglong *)((ulonglong)((uVar13 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar16 = *puVar15;
        LOCK();
        uVar17 = *puVar15;
        if (uVar16 == uVar17) {
          *puVar15 = uVar16 | 1L << (uVar13 & 0x3f);
        }
        UNLOCK();
      } while (uVar16 != uVar17);
    }
    lStack_18 = (ulonglong)(uint)(pLVar2->fields)._version << 0x20;
    uStack_19 = 0;
    lStack_20 = lStack_18;
    uStack_21 = 0;
    uStack_22 = 0;
    uStack_23 = 0;
    uStack_24 = 0;
    uStack_25 = 0;
    pDStack_26 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0;
    uStack_27 = 0;
    uStack_28 = 0;
    uStack_29 = 0;
    uStack_30 = 0;
    uStack_31 = 0;
    uStack_32 = 0;
    ppLStack_33 = &pLStack_34;
    pLStack_14 = pLVar2;
    pLStack_34 = pLVar2;
    while( true ) {
      do {
        cVar35 = FUN_?(&pLStack_34,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                             );
        if (cVar35 == '\0') {
          return ModifierActions__Enum_Add;
        }
        uStack_36 = uStack_25;
        pDStack_37 = pDStack_26;
      } while (pDStack_26 ==
               (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0);
      pDVar38 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                TypeConverterRegistry+ConverterKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                          (pDStack_26,
                           MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                          );
      if (pDVar38 ==
          (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
           *)0x0) break;
      puVar39 = (undefined8 *)FUN_?(auStack_40,pDVar38);
      DStack_1._dictionary = (Dictionary_2_System_UInt32_System_Int32_ *)*puVar39;
      DStack_1._8_8_ = puVar39[1];
      DStack_1._16_8_ = puVar39[2];
      uStack_41 = 0;
      pDStack_42 = &DStack_1;
      while (bVar43 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                     UInt32,System::Int32]::
                     Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Int32__MoveNext
                               (&DStack_1,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__MoveNext__
                               ), bVar43 != 0) {
        if (DStack_1._currentKey == modifierPackageType) {
          if (pDStack_37 !=
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) {
            IVar44 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Int32Enum]::
                    Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)pDStack_37,
                               DStack_1._currentKey,
                               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                              );
            return IVar44;
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar45 = (code *)swi(3);
  MVar46 = (*pcVar45)();
  return MVar46;
}


/* AvatarModifierPackageType GetPackageToActWith(AvatarModifierPackageType, ModifierActions) */

AvatarModifierPackageType__Enum
Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
          (AvatarModifierPackages *this,AvatarModifierPackageType__Enum modifierPackageType,
          ModifierActions__Enum action,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackageFactory);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_ModifierActions>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AvatarModifierPackageFactory->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar1 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                     (&AStack_2,modifierPackageType,(MethodInfo *)0x0);
  pAStack_3 = pAVar1->avatarModifiers;
  pDStack_4 = pAVar1->actionsToTakeVsTypes;
  if (pAVar1->actionsToTakeVsTypes == (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0
     ) {
code_?:
    key = 0;
  }
  else {
    if (((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         pAVar1->actionsToTakeVsTypes ==
         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         0x0) || (pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                           UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                           Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                                     ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                       *)pAVar1->actionsToTakeVsTypes,
                                      MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                                     ), this_00 = pDStack_4,
                 pDVar5 == (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                            *)0x0)) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      AVar7 = (*pcVar6)();
      return AVar7;
    }
    pDStack_8 = (pDVar5->fields)._dictionary;
    ppDStack_9 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    **)0x0;
    uStack_10 = 0;
    if (iRam_? != 0) {
      uVar11 = (uint)((ulonglong)&pDStack_12 >> 0xc);
      puVar13 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar14 = *puVar13;
        LOCK();
        uVar15 = *puVar13;
        if (uVar14 == uVar15) {
          *puVar13 = uVar14 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (uVar14 != uVar15);
    }
    if (pDStack_8 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      pDStack_12 = pDStack_8;
      FUN_?();
      pcVar6 = (code *)swi(3);
      AVar7 = (*pcVar6)();
      return AVar7;
    }
    iStack_16 = (pDStack_8->fields)._version;
    uStack_10 = 0;
    uStack_17 = 0;
    uStack_18 = 0;
    pDStack_12 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0;
    ppDStack_9 = &pDStack_8;
    do {
      if (pDStack_8 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto code_?;
      if (iStack_16 != (pDStack_8->fields)._version) {
code_?:
        mscorlib.dll::System::ThrowHelper::
        ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                  ((MethodInfo *)0x0);
code_?:
        FUN_?();
        FUN_?();
        pcVar6 = (code *)swi(3);
        AVar7 = (*pcVar6)();
        return AVar7;
      }
      do {
        if (pDStack_8 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        if ((uint)(pDStack_8->fields)._count <= uStack_17) goto code_?;
        pDVar19 = (pDStack_8->fields)._entries;
        lVar20 = (longlong)(int)uStack_17;
        uVar11 = uStack_17 + 1;
        if (pDVar19 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)0x0) goto code_?;
        if ((uint)pDVar19->max_length <= uStack_17) {
          uStack_17 = uVar11;
          FUN_?();
          goto code_?;
        }
        uStack_17 = uVar11;
      } while ((&pDVar19->vector[0].hashCode)[lVar20 * 4] < 0);
      key = *(Int32Enum__Enum *)&(&pDVar19->vector[0].key)[lVar20].SourceType;
      uStack_18 = CONCAT44(uStack_18._4_4_,key);
      if (this_00 == (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0) {
code_?:
        FUN_?();
        uVar11 = uStack_17;
code_?:
        uStack_17 = uVar11;
        FUN_?();
code_?:
        FUN_?();
        goto code_?;
      }
      IVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                        );
    } while (IVar21 != action);
  }
  return key;
}


/* Single HandleModifierEffect(AvatarModifierEffect, Single) */

float Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_HandleModifierEffect
                (AvatarModifierPackages *this,AvatarModifierEffect__Enum modifierEffect,
                float baseValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Comparison<AvatarModifierPackage::AvatarModifier>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Add_AvatarModifierPackage__AvatarModifier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Sort_System__Comparison<AvatarModifierPackage::AvatarModifier>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarModifierPackages____c___HandleModifierEffect_b__27_0_AvatarModifierPackage__AvatarModifier__AvatarModifierPackage__AvatarModifier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarModifierPackages____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(
                        TypeInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>
                        );
  FUN_?(lVar1,
                MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__List__
               );
  pLVar2 = (this->fields).packages;
  if (pLVar2 != (List_1_AvatarModifierPackage_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pLStack_4 >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    uVar3 = 0;
    lStack_9 = (ulonglong)(uint)(pLVar2->fields)._version << 0x20;
    uStack_10 = 0;
    uStack_11 = 0;
    uStack_12 = 0;
    uStack_13 = 0;
    uStack_14 = 0;
    uStack_15 = 0;
    uStack_16 = 0;
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_19 = 0;
    uStack_20 = 0;
    lStack_21 = lStack_9;
    uStack_22 = 0;
    uStack_23 = 0;
    uStack_24 = 0;
    uStack_25 = 0;
    lStack_26 = 0;
    uStack_27 = 0;
    uStack_28 = 0;
    uStack_29 = 0;
    uStack_30 = 0;
    uStack_31 = 0;
    uStack_32 = 0;
    pLStack_4 = pLVar2;
    pLStack_33 = pLVar2;
    while (cVar34 = FUN_?(&pLStack_33,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                                 ), lVar35 = lStack_26, cVar34 != '\0') {
      uVar36 = uVar3;
      if (lStack_26 == 0) goto code_?;
      for (; uVar37 = *(uint *)(lVar35 + 0x18), (int)uVar36 < (int)uVar37; uVar36 = uVar36 + 1) {
        if (uVar37 <= uVar36) goto code_?;
        puVar38 = (undefined4 *)(lVar35 + ((longlong)(int)uVar36 + 2) * 0x10);
        if (puVar38[1] == modifierEffect) {
          if (lVar1 == 0) goto code_?;
          uStack_39 = *puVar38;
          AStack_40 = puVar38[1];
          uStack_41 = puVar38[2];
          uStack_42 = puVar38[3];
          FUN_?(lVar1,&uStack_39,
                        MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Add_AvatarModifierPackage__AvatarModifier_
                       );
        }
      }
    }
    if (*(int *)&(TypeInfo__AvatarModifierPackages____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar43 = TypeInfo__AvatarModifierPackages____c->static_fields->__9__27_0;
    if (pCVar43 == (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
      if (*(int *)&(TypeInfo__AvatarModifierPackages____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      pAVar44 = TypeInfo__AvatarModifierPackages____c->static_fields->__9;
      pCVar43 = (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)
                FUN_?(TypeInfo__System__Comparison<AvatarModifierPackage::AvatarModifier>);
      FUN_?(pCVar43,pAVar44,
                    MethodInfo__AvatarModifierPackages____c___HandleModifierEffect_b__27_0_AvatarModifierPackage__AvatarModifier__AvatarModifierPackage__AvatarModifier_
                   );
      TypeInfo__AvatarModifierPackages____c->static_fields->__9__27_0 = pCVar43;
      if (iRam_? != 0) {
        uVar36 = (uint)((ulonglong)&TypeInfo__AvatarModifierPackages____c->static_fields->__9__27_0
                       >> 0xc);
        uVar5 = (ulonglong)((uVar36 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar36 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
    if (lVar1 != 0) {
      FUN_?(lVar1,pCVar43);
      lVar35 = 0x20;
      while( true ) {
        if (*(int *)(lVar1 + 0x18) <= (int)uVar3) {
          return baseValue;
        }
        if (*(uint *)(lVar1 + 0x18) <= uVar3) goto code_?;
        lVar45 = *(longlong *)(lVar1 + 0x10);
        if (lVar45 == 0) break;
        if (*(uint *)(lVar45 + 0x18) <= uVar3) {
code_?:
          FUN_?();
          pcVar46 = (code *)swi(3);
          fVar47 = (float)(*pcVar46)();
          return fVar47;
        }
        iVar48 = *(int *)(lVar45 + lVar35);
        if (iVar48 == 0) {
          if (*(uint *)(lVar1 + 0x18) <= uVar3) goto code_?;
          if (lVar45 == 0) break;
          if (*(uint *)(lVar45 + 0x18) <= uVar3) goto code_?;
          lVar45 = *(longlong *)(lVar45 + 8 + lVar35);
          if (lVar45 == 0) break;
          fVar47 = (float)(**(code **)(lVar45 + 0x18))
                                    (*(undefined8 *)(lVar45 + 0x40),*(undefined8 *)(lVar45 + 0x28));
          baseValue = baseValue * fVar47;
code_?:
          uVar3 = uVar3 + 1;
          lVar35 = lVar35 + 0x10;
        }
        else if (iVar48 == 1) {
          if (*(uint *)(lVar1 + 0x18) <= uVar3) goto code_?;
          if (lVar45 == 0) break;
          if (*(uint *)(lVar45 + 0x18) <= uVar3) goto code_?;
          lVar45 = *(longlong *)(lVar45 + 8 + lVar35);
          if (lVar45 == 0) break;
          fVar47 = (float)(**(code **)(lVar45 + 0x18))
                                    (*(undefined8 *)(lVar45 + 0x40),*(undefined8 *)(lVar45 + 0x28));
          baseValue = baseValue + fVar47;
          uVar3 = uVar3 + 1;
          lVar35 = lVar35 + 0x10;
        }
        else {
          if (iVar48 != 2) goto code_?;
          if (*(uint *)(lVar1 + 0x18) <= uVar3) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar46 = (code *)swi(3);
            fVar47 = (float)(*pcVar46)();
            return fVar47;
          }
          if (lVar45 == 0) break;
          if (*(uint *)(lVar45 + 0x18) <= uVar3) goto code_?;
          lVar45 = *(longlong *)(lVar45 + 8 + lVar35);
          if (lVar45 == 0) break;
          baseValue = (float)(**(code **)(lVar45 + 0x18))
                                       (*(undefined8 *)(lVar45 + 0x40),*(undefined8 *)(lVar45 + 0x28))
          ;
          uVar3 = uVar3 + 1;
          lVar35 = lVar35 + 0x10;
        }
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar46 = (code *)swi(3);
  fVar47 = (float)(*pcVar46)();
  return fVar47;
}


/* Boolean HandleNewAvatarModifierPackage(AvatarModifierPackage) */

bool Assembly-CSharp.dll::AvatarModifierPackages::
     AvatarModifierPackages_HandleNewAvatarModifierPackage
               (AvatarModifierPackages *this,AvatarModifierPackage *newAvatarModifierPackage,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackage);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_ModifierActions>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aAStack_1[0].id = 0;
  aAStack_1[0]._4_4_ = 0;
  aAStack_1[0].duration.currentCryptoKey = 0;
  aAStack_1[0].duration.hiddenValue.b1 = 0;
  aAStack_1[0].duration.hiddenValue.b2 = 0;
  aAStack_1[0].duration.hiddenValue.b3 = 0;
  aAStack_1[0].duration.hiddenValue.b4 = 0;
  aAStack_1[0].duration.hiddenValueOld = (Byte__Array *)0x0;
  aAStack_1[0].duration.fakeValue = 0.0;
  aAStack_1[0].duration.inited = 0;
  aAStack_1[0].duration._21_3_ = 0;
  aAStack_1[0].avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
  aAStack_1[0].actionsToTakeVsTypes =
       (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
  aAStack_1[0].timeStamp.currentCryptoKey = 0;
  aAStack_1[0].timeStamp.hiddenValue.b1 = 0;
  aAStack_1[0].timeStamp.hiddenValue.b2 = 0;
  aAStack_1[0].timeStamp.hiddenValue.b3 = 0;
  aAStack_1[0].timeStamp.hiddenValue.b4 = 0;
  aAStack_1[0].timeStamp.hiddenValueOld = (Byte__Array *)0x0;
  aAStack_1[0].timeStamp.fakeValue = 0.0;
  aAStack_1[0].timeStamp.inited = 0;
  aAStack_1[0].timeStamp._21_3_ = 0;
  aAStack_1[0].persistant = 0;
  aAStack_1[0]._73_3_ = 0;
  aAStack_1[0].lastTimeStamp = 0.0;
  aAStack_1[0].avatarModifierPackageType = 0;
  aAStack_1[0].avatarModifierPackageAdditionPolicy = 0;
  DStack_2._dictionary = (Dictionary_2_System_UInt32_System_Int32_ *)0x0;
  DStack_2._index = 0;
  DStack_2._version = 0;
  DStack_2._currentKey = 0;
  DStack_2._20_4_ = 0;
  bStackX_20 = 1;
  uVar3 = 0;
  while (pLVar4 = (this->fields).packages, pLVar4 != (List_1_AvatarModifierPackage_ *)0x0) {
    if ((pLVar4->fields)._size <= (int)uVar3) {
      return bStackX_20;
    }
    if (pLVar4 == (List_1_AvatarModifierPackage_ *)0x0) break;
    if ((uint)(pLVar4->fields)._size <= uVar3) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pAVar7 = (pLVar4->fields)._items;
    if (pAVar7 == (AvatarModifierPackage__Array *)0x0) break;
    if ((uint)pAVar7->max_length <= uVar3) {
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pAVar8 = pAVar7->vector + (int)uVar3;
    aAStack_1[0].id = pAVar8->id;
    aAStack_1[0]._4_4_ = *(undefined4 *)&pAVar8->field_0x4;
    aAStack_1[0].duration.currentCryptoKey = (pAVar8->duration).currentCryptoKey;
    aAStack_1[0].duration.hiddenValue = (pAVar8->duration).hiddenValue;
    ppBVar9 = &pAVar7->vector[(int)uVar3].duration.hiddenValueOld;
    aAStack_1[0].duration.hiddenValueOld = *ppBVar9;
    aAStack_1[0].duration._16_8_ = ppBVar9[1];
    ppAVar10 = &pAVar7->vector[(int)uVar3].avatarModifiers;
    aAStack_1[0].avatarModifiers = *ppAVar10;
    aAStack_1[0].actionsToTakeVsTypes =
         (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)ppAVar10[1];
    pOVar11 = &pAVar7->vector[(int)uVar3].timeStamp;
    aAStack_1[0].timeStamp.currentCryptoKey = pOVar11->currentCryptoKey;
    aAStack_1[0].timeStamp.hiddenValue = pOVar11->hiddenValue;
    aAStack_1[0].timeStamp.hiddenValueOld = pOVar11->hiddenValueOld;
    pOVar11 = &pAVar7->vector[(int)uVar3].timeStamp;
    aAStack_1[0].timeStamp.fakeValue = pOVar11->fakeValue;
    aAStack_1[0].timeStamp.inited = pOVar11->inited;
    aAStack_1[0].timeStamp._21_3_ = *(undefined3 *)&pOVar11->field_0x15;
    aAStack_1[0]._72_8_ = *(undefined8 *)(pOVar11 + 1);
    aAStack_1[0].avatarModifierPackageType = pAVar7->vector[(int)uVar3].avatarModifierPackageType
    ;
    aAStack_1[0].avatarModifierPackageAdditionPolicy =
         pAVar7->vector[(int)uVar3].avatarModifierPackageAdditionPolicy;
    if (newAvatarModifierPackage->actionsToTakeVsTypes ==
        (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0) goto code_?;
    if (((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         newAvatarModifierPackage->actionsToTakeVsTypes ==
         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         0x0) || (pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                            UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                                      ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                        *)newAvatarModifierPackage->actionsToTakeVsTypes,
                                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Keys__
                                      ),
                 pDVar12 ==
                 (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) break;
    puVar13 = (undefined8 *)FUN_?(auStack_14,pDVar12);
    DStack_2._dictionary = (Dictionary_2_System_UInt32_System_Int32_ *)*puVar13;
    DStack_2._8_8_ = puVar13[1];
    DStack_2._16_8_ = puVar13[2];
    uStack_15 = 0;
    pDStack_16 = &DStack_2;
    do {
      bVar6 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::UInt32,System
              ::Int32]::
              Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Int32__MoveNext
                        (&DStack_2,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_ModifierActions>__MoveNext__
                        );
      if (bVar6 == 0) goto code_?;
      key = DStack_2._currentKey;
      if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
        FUN_?();
      }
    } while (key != aAStack_1[0].avatarModifierPackageType);
    if (newAvatarModifierPackage->actionsToTakeVsTypes ==
        (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0) goto code_?;
    IVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)
                       newAvatarModifierPackage->actionsToTakeVsTypes,key,
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_ModifierActions>__get_Item_AvatarModifierPackageType_
                      );
    if (IVar17 == 1) {
      if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
        FUN_?();
      }
      AvatarModifierPackage::AvatarModifierPackage_Renew(aAStack_1,(MethodInfo *)0x0);
code_?:
      uVar3 = uVar3 + 1;
    }
    else if (IVar17 == 2) {
      if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
        FUN_?();
      }
      AvatarModifierPackages_RemoveModifier
                (this,aAStack_1[0].avatarModifierPackageType,aAStack_1[0].id,(MethodInfo *)0x0);
      uVar3 = uVar3 + 1;
    }
    else {
      if (IVar17 != 3) goto code_?;
      if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
        FUN_?();
      }
      AvatarModifierPackages_RemoveModifier
                (this,aAStack_1[0].avatarModifierPackageType,aAStack_1[0].id,(MethodInfo *)0x0);
      bStackX_20 = 0;
      uVar3 = uVar3 + 1;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean HasModifier(AvatarModifierPackageType) */

bool Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_HasModifier
               (AvatarModifierPackages *this,AvatarModifierPackageType__Enum type,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Exists_System__Predicate<AvatarModifierPackage>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<AvatarModifierPackage>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarModifierPackages____c__DisplayClass19_0___HasModifier_b__0_AvatarModifierPackage_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarModifierPackages____c__DisplayClass19_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__AvatarModifierPackages____c__DisplayClass19_0);
  if (lVar1 != 0) {
    *(AvatarModifierPackageType__Enum *)(lVar1 + 0x10) = type;
    pLVar2 = (this->fields).packages;
    uVar3 = FUN_?(TypeInfo__System__Predicate<AvatarModifierPackage>);
    FUN_?(uVar3,lVar1,
                  MethodInfo__AvatarModifierPackages____c__DisplayClass19_0___HasModifier_b__0_AvatarModifierPackage_
                 );
    if (pLVar2 != (List_1_AvatarModifierPackage_ *)0x0) {
      iVar4 = FUN_?(pLVar2,uVar3);
      return iVar4 != -1;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean HasModifierEffect(AvatarModifierEffect) */

bool Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_HasModifierEffect
               (AvatarModifierPackages *this,AvatarModifierEffect__Enum modifierEffect,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).packages;
  if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    uStack_2 = 0;
    uStack_3 = 0;
    uStack_4 = 0;
    uStack_5 = 0;
    uStack_6 = 0;
    uStack_7 = 0;
    uStack_8 = 0;
    uStack_9 = 0;
    uStack_10 = 0;
    uStack_11 = 0;
    if (iRam_? != 0) {
      uVar12 = (uint)((ulonglong)&pLStack_13 >> 0xc);
      puVar14 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar15 = *puVar14;
        LOCK();
        uVar16 = *puVar14;
        if (uVar15 == uVar16) {
          *puVar14 = uVar15 | 1L << (uVar12 & 0x3f);
        }
        UNLOCK();
      } while (uVar15 != uVar16);
    }
    lStack_17 = (ulonglong)(uint)(pLVar1->fields)._version << 0x20;
    uStack_18 = 0;
    lStack_19 = lStack_17;
    uStack_20 = 0;
    uStack_21 = 0;
    uStack_22 = 0;
    uStack_23 = 0;
    lStack_24 = 0;
    uStack_25 = 0;
    uStack_26 = 0;
    uStack_27 = 0;
    uStack_28 = 0;
    uStack_29 = 0;
    uStack_30 = 0;
    pLStack_13 = pLVar1;
    pLStack_31 = pLVar1;
    while( true ) {
      cVar32 = FUN_?(&pLStack_31,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                           );
      if (cVar32 == '\0') {
        return 0;
      }
      uVar12 = 0;
      if (lStack_24 == 0) break;
      for (; (int)uVar12 < (int)*(uint *)(lStack_24 + 0x18); uVar12 = uVar12 + 1) {
        if (*(uint *)(lStack_24 + 0x18) <= uVar12) goto code_?;
        if (*(AvatarModifierEffect__Enum *)(lStack_24 + 0x24 + (longlong)(int)uVar12 * 0x10) ==
            modifierEffect) {
          return 1;
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar33 = (code *)swi(3);
  bVar34 = (*pcVar33)();
  return bVar34;
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
    FUN_?(&TypeInfo__AvatarModifierPackageFactory);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (modifierPackageType != AvatarModifierPackageType__Enum_None) {
    if (*(int *)&(TypeInfo__AvatarModifierPackageFactory->_1).field_0x1c == 0) {
      FUN_?();
    }
    pAVar1 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                       (&AStack_2,modifierPackageType,(MethodInfo *)0x0);
    AStack_3.id = pAVar1->id;
    AStack_3._4_4_ = *(undefined4 *)&pAVar1->field_0x4;
    AStack_3.duration.currentCryptoKey = (pAVar1->duration).currentCryptoKey;
    AStack_3.duration.hiddenValue = (pAVar1->duration).hiddenValue;
    AStack_3.duration.hiddenValueOld = (pAVar1->duration).hiddenValueOld;
    AStack_3.duration.fakeValue = (pAVar1->duration).fakeValue;
    AStack_3.duration.inited = (pAVar1->duration).inited;
    AStack_3.duration._21_3_ = *(undefined3 *)&(pAVar1->duration).field_0x15;
    AStack_3.avatarModifiers = pAVar1->avatarModifiers;
    AStack_3.actionsToTakeVsTypes = pAVar1->actionsToTakeVsTypes;
    AStack_3.timeStamp.currentCryptoKey = (pAVar1->timeStamp).currentCryptoKey;
    AStack_3.timeStamp.hiddenValue = (pAVar1->timeStamp).hiddenValue;
    AStack_3.timeStamp.hiddenValueOld = (pAVar1->timeStamp).hiddenValueOld;
    AStack_3.timeStamp.fakeValue = (pAVar1->timeStamp).fakeValue;
    AStack_3.timeStamp.inited = (pAVar1->timeStamp).inited;
    AStack_3.timeStamp._21_3_ = *(undefined3 *)&(pAVar1->timeStamp).field_0x15;
    AStack_3.persistant = pAVar1->persistant;
    AStack_3._73_3_ = *(undefined3 *)&pAVar1->field_0x49;
    AStack_3.lastTimeStamp = pAVar1->lastTimeStamp;
    AStack_3.avatarModifierPackageType = pAVar1->avatarModifierPackageType;
    AStack_3.avatarModifierPackageAdditionPolicy = pAVar1->avatarModifierPackageAdditionPolicy;
    AvatarModifierPackages_RemoveModifierPackage(this,&AStack_3,id,(MethodInfo *)0x0);
  }
  return;
}


/* Void RemoveModifierPackage(AvatarModifierPackage, Int32) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_RemoveModifierPackage
               (AvatarModifierPackages *this,AvatarModifierPackage *modifierPackage,int32_t id,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackage);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Add_AvatarModifierPackage_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__FindIndex_System__Predicate<AvatarModifierPackage>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__IndexOf_AvatarModifierPackage_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__set_Item_int__AvatarModifierPackage_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<AvatarModifierPackage>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<AvatarModifierPackage>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarModifierPackages____c__DisplayClass25_0___RemoveModifierPackage_b__0_AvatarModifierPackage_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarModifierPackages____c__DisplayClass25_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  AStack_1.id = 0;
  AStack_1._4_4_ = 0;
  AStack_1.duration.currentCryptoKey = 0;
  AStack_1.duration.hiddenValue.b1 = 0;
  AStack_1.duration.hiddenValue.b2 = 0;
  AStack_1.duration.hiddenValue.b3 = 0;
  AStack_1.duration.hiddenValue.b4 = 0;
  AStack_1.duration.hiddenValueOld = (Byte__Array *)0x0;
  AStack_1.duration.fakeValue = 0.0;
  AStack_1.duration.inited = 0;
  AStack_1.duration._21_3_ = 0;
  AStack_1.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
  AStack_1.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
  AStack_1.timeStamp.currentCryptoKey = 0;
  AStack_1.timeStamp.hiddenValue.b1 = 0;
  AStack_1.timeStamp.hiddenValue.b2 = 0;
  AStack_1.timeStamp.hiddenValue.b3 = 0;
  AStack_1.timeStamp.hiddenValue.b4 = 0;
  AStack_1.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
  AStack_1.timeStamp.fakeValue = 0.0;
  AStack_1.timeStamp.inited = 0;
  AStack_1.timeStamp._21_3_ = 0;
  AStack_1.persistant = 0;
  AStack_1._73_3_ = 0;
  AStack_1.lastTimeStamp = 0.0;
  AStack_1.avatarModifierPackageType = 0;
  AStack_1.avatarModifierPackageAdditionPolicy = 0;
  AStack_2.id = 0;
  AStack_2._4_4_ = 0;
  AStack_2.duration.currentCryptoKey = 0;
  AStack_2.duration.hiddenValue.b1 = 0;
  AStack_2.duration.hiddenValue.b2 = 0;
  AStack_2.duration.hiddenValue.b3 = 0;
  AStack_2.duration.hiddenValue.b4 = 0;
  AStack_2.duration.hiddenValueOld = (Byte__Array *)0x0;
  AStack_2.duration.fakeValue = 0.0;
  AStack_2.duration.inited = 0;
  AStack_2.duration._21_3_ = 0;
  AStack_2.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
  AStack_2.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
  AStack_2.timeStamp.currentCryptoKey = 0;
  AStack_2.timeStamp.hiddenValue.b1 = 0;
  AStack_2.timeStamp.hiddenValue.b2 = 0;
  AStack_2.timeStamp.hiddenValue.b3 = 0;
  AStack_2.timeStamp.hiddenValue.b4 = 0;
  AStack_2.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
  AStack_2.timeStamp.fakeValue = 0.0;
  AStack_2.timeStamp.inited = 0;
  AStack_2.timeStamp._21_3_ = 0;
  AStack_2.persistant = 0;
  AStack_2._73_3_ = 0;
  AStack_2.lastTimeStamp = 0.0;
  AStack_2.avatarModifierPackageType = 0;
  AStack_2.avatarModifierPackageAdditionPolicy = 0;
  lVar3 = FUN_?(TypeInfo__AvatarModifierPackages____c__DisplayClass25_0);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)&modifierPackage->duration;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)modifierPackage;
    *(undefined8 *)(lVar3 + 0x18) = uVar4;
    uVar4 = *(undefined8 *)&(modifierPackage->duration).fakeValue;
    *(Byte__Array **)(lVar3 + 0x20) = (modifierPackage->duration).hiddenValueOld;
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    pDVar5 = modifierPackage->actionsToTakeVsTypes;
    *(AvatarModifierPackage_AvatarModifier__Array **)(lVar3 + 0x30) =
         modifierPackage->avatarModifiers;
    *(Dictionary_2_AvatarModifierPackageType_ModifierActions_ **)(lVar3 + 0x38) = pDVar5;
    pBVar6 = (modifierPackage->timeStamp).hiddenValueOld;
    *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)&modifierPackage->timeStamp;
    *(Byte__Array **)(lVar3 + 0x48) = pBVar6;
    uVar7 = *(undefined4 *)&(modifierPackage->timeStamp).inited;
    uVar8 = *(undefined4 *)&modifierPackage->persistant;
    fVar9 = modifierPackage->lastTimeStamp;
    *(float *)(lVar3 + 0x50) = (modifierPackage->timeStamp).fakeValue;
    *(undefined4 *)(lVar3 + 0x54) = uVar7;
    *(undefined4 *)(lVar3 + 0x58) = uVar8;
    *(float *)(lVar3 + 0x5c) = fVar9;
    *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)&modifierPackage->avatarModifierPackageType;
    if (iRam_? != 0) {
      uVar10 = (uint)(lVar3 + 0x20U >> 0xc);
      lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
      do {
        uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
        puVar13 = (ulonglong *)(lVar11 + 0xADDR);
        LOCK();
        bVar14 = uVar12 == *puVar13;
        if (bVar14) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar14);
    }
    if (id == -1) {
      lVar11 = FUN_?(TypeInfo__System__Collections__Generic__List<AvatarModifierPackage>);
      FUN_?(lVar11,
                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__List__);
      pLVar15 = (this->fields).packages;
      lStack_16 = lVar11;
      if (pLVar15 != (List_1_AvatarModifierPackage_ *)0x0) {
        uStack_17 = 0;
        uStack_18 = 0;
        uStack_19 = 0;
        uStack_20 = 0;
        uStack_21 = 0;
        uStack_22 = 0;
        uStack_23 = 0;
        uStack_24 = 0;
        uStack_25._0_4_ = 0;
        uStack_25._4_4_ = 0;
        uStack_26 = 0;
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)&pLStack_27 >> 0xc);
          lVar28 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
          do {
            uVar12 = *(ulonglong *)(lVar28 + 0xADDR);
            puVar13 = (ulonglong *)(lVar28 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
        lStack_29 = (ulonglong)(uint)(pLVar15->fields)._version << 0x20;
        uStack_30 = 0;
        lStack_31 = lStack_29;
        uStack_32 = 0;
        uStack_33 = 0;
        uStack_34 = 0;
        uStack_35 = 0;
        uStack_36 = 0;
        uStack_37 = 0;
        uStack_38 = 0;
        uStack_39 = 0;
        uStack_40 = 0;
        uStack_41 = 0;
        uStack_42._0_4_ = 0;
        uStack_42._4_4_ = 0;
        uStack_43 = 0;
        ppLStack_44 = &pLStack_45;
        pLStack_27 = pLVar15;
        pLStack_45 = pLVar15;
        while (cVar46 = FUN_?(&pLStack_45,
                                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                                     ), uVar47 = uStack_42, uVar48 = uStack_41, uVar4 = uStack_40,
              cVar46 != '\0') {
          iStack_49 = (int32_t)uStack_32;
          uStack_50 = uStack_32._4_4_;
          iStack_51 = (int32_t)uStack_33;
          AStack_52 = uStack_33._4_4_;
          uStack_53 = (undefined4)uStack_34;
          uStack_54 = uStack_34._4_4_;
          fStack_55 = (float)uStack_35;
          uStack_56 = uStack_35._4_4_;
          uStack_57 = (undefined4)uStack_36;
          uStack_58 = uStack_36._4_4_;
          uStack_59 = (undefined4)uStack_37;
          uStack_60 = uStack_37._4_4_;
          iStack_61 = (int32_t)uStack_38;
          AStack_62 = uStack_38._4_4_;
          uStack_63 = (undefined4)uStack_39;
          uStack_64 = uStack_39._4_4_;
          fStack_65 = (float)uStack_40;
          bStack_66 = uStack_40._4_1_;
          uStack_67 = uStack_40._5_3_;
          bStack_68 = (bool)uStack_41;
          uStack_69 = uStack_41._1_3_;
          fStack_70 = uStack_41._4_4_;
          uStack_25._0_4_ = (int32_t)uStack_42;
          uStack_25._4_4_ = uStack_42._4_4_;
          uStack_40 = uVar4;
          uStack_41 = uVar48;
          if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
            FUN_?();
          }
          uVar4 = uStack_42;
          if ((int32_t)uStack_25 == *(int *)(lVar3 + 0x60)) {
            if (lVar11 == 0) goto code_?;
            AStack_71._4_4_ = uStack_50;
            AStack_71.id = iStack_49;
            AStack_71.duration.hiddenValue = AStack_52;
            AStack_71.duration.currentCryptoKey = iStack_51;
            AStack_71.duration.hiddenValueOld = (Byte__Array *)CONCAT44(uStack_54,uStack_53);
            AStack_71.duration._20_4_ = uStack_56;
            AStack_71.duration.fakeValue = fStack_55;
            AStack_71.avatarModifiers =
                 (AvatarModifierPackage_AvatarModifier__Array *)CONCAT44(uStack_58,uStack_57);
            AStack_71.actionsToTakeVsTypes =
                 (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)
                 CONCAT44(uStack_60,uStack_59);
            AStack_71.timeStamp.hiddenValue = AStack_62;
            AStack_71.timeStamp.currentCryptoKey = iStack_61;
            AStack_71.timeStamp.hiddenValueOld = (Byte__Array *)CONCAT44(uStack_64,uStack_63);
            uStack_42._0_4_ = (int32_t)uVar47;
            uStack_42._4_4_ = SUB84(uVar47,4);
            AStack_71.avatarModifierPackageType = (int32_t)uStack_42;
            AStack_71.avatarModifierPackageAdditionPolicy = uStack_42._4_4_;
            AStack_71.timeStamp.fakeValue = fStack_65;
            AStack_71.timeStamp._20_4_ = _bStack_2c;
            AStack_71._72_4_ = _bStack_28;
            AStack_71.lastTimeStamp = fStack_70;
            uStack_42 = uVar4;
            FUN_?(lVar11,&AStack_71,
                          MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Add_AvatarModifierPackage_
                         );
          }
        }
        if (lVar11 != 0) {
          if (1 < *(int *)(lVar11 + 0x18)) {
            return;
          }
          pLVar15 = (this->fields).packages;
          if (*(int *)(lVar11 + 0x18) == 0) goto code_?;
          lVar3 = *(longlong *)(lVar11 + 0x10);
          if (lVar3 != 0) {
            if (*(int *)(lVar3 + 0x18) == 0) {
code_?:
              FUN_?();
              pcVar72 = (code *)swi(3);
              (*pcVar72)();
              return;
            }
            if (pLVar15 != (List_1_AvatarModifierPackage_ *)0x0) {
              AStack_71._0_8_ = *(undefined8 *)(lVar3 + 0x20);
              AStack_71.duration._0_8_ = *(undefined8 *)(lVar3 + 0x28);
              AStack_71.duration.hiddenValueOld = *(Byte__Array **)(lVar3 + 0x30);
              AStack_71.duration._16_8_ = *(undefined8 *)(lVar3 + 0x38);
              AStack_71.avatarModifiers =
                   *(AvatarModifierPackage_AvatarModifier__Array **)(lVar3 + 0x40);
              AStack_71.actionsToTakeVsTypes =
                   *(Dictionary_2_AvatarModifierPackageType_ModifierActions_ **)(lVar3 + 0x48);
              AStack_71.timeStamp._0_8_ = *(undefined8 *)(lVar3 + 0x50);
              AStack_71.timeStamp.hiddenValueOld = *(Byte__Array **)(lVar3 + 0x58);
              AStack_71.timeStamp.fakeValue = *(float *)(lVar3 + 0x60);
              AStack_71.timeStamp._20_4_ = *(undefined4 *)(lVar3 + 100);
              AStack_71._72_4_ = *(undefined4 *)(lVar3 + 0x68);
              AStack_71.lastTimeStamp = *(float *)(lVar3 + 0x6c);
              AStack_71._80_8_ = *(undefined8 *)(lVar3 + 0x70);
              uVar10 = FUN_?(pLVar15,&AStack_71);
              lVar3 = (longlong)(int)uVar10;
              pLVar15 = (this->fields).packages;
              if (pLVar15 != (List_1_AvatarModifierPackage_ *)0x0) {
                if ((uint)(pLVar15->fields)._size <= uVar10) goto code_?;
                pAVar73 = (pLVar15->fields)._items;
                if (pAVar73 != (AvatarModifierPackage__Array *)0x0) {
                  if ((uint)pAVar73->max_length <= uVar10) goto code_?;
                  pAVar74 = pAVar73->vector + lVar3;
                  AStack_2.id = pAVar74->id;
                  AStack_2._4_4_ = *(undefined4 *)&pAVar74->field_0x4;
                  AStack_2.duration.currentCryptoKey = (pAVar74->duration).currentCryptoKey;
                  AStack_2.duration.hiddenValue = (pAVar74->duration).hiddenValue;
                  ppBVar75 = &pAVar73->vector[lVar3].duration.hiddenValueOld;
                  AStack_2.duration.hiddenValueOld = *ppBVar75;
                  AStack_2.duration._16_8_ = ppBVar75[1];
                  ppAVar76 = &pAVar73->vector[lVar3].avatarModifiers;
                  AStack_2.avatarModifiers = *ppAVar76;
                  AStack_2.actionsToTakeVsTypes =
                       (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)ppAVar76[1];
                  pOVar77 = &pAVar73->vector[lVar3].timeStamp;
                  AStack_2.timeStamp.currentCryptoKey = pOVar77->currentCryptoKey;
                  AStack_2.timeStamp.hiddenValue = pOVar77->hiddenValue;
                  AStack_2.timeStamp.hiddenValueOld = pOVar77->hiddenValueOld;
                  pfVar78 = &pAVar73->vector[lVar3].timeStamp.fakeValue;
                  AStack_2.timeStamp.fakeValue = *pfVar78;
                  AStack_2.timeStamp._20_4_ = pfVar78[1];
                  AStack_2._72_4_ = pfVar78[2];
                  AStack_2.lastTimeStamp = pfVar78[3];
                  AStack_2.avatarModifierPackageType =
                       pAVar73->vector[lVar3].avatarModifierPackageType;
                  AStack_2.avatarModifierPackageAdditionPolicy =
                       pAVar73->vector[lVar3].avatarModifierPackageAdditionPolicy;
                  if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  AvatarModifierPackage::AvatarModifierPackage_set_IsExpired
                            (&AStack_2,1,(MethodInfo *)0x0);
                  pLVar15 = (this->fields).packages;
                  if (pLVar15 != (List_1_AvatarModifierPackage_ *)0x0) {
                    if ((uint)(pLVar15->fields)._size <= uVar10) goto code_?;
                    pAVar73 = (pLVar15->fields)._items;
                    if (pAVar73 != (AvatarModifierPackage__Array *)0x0) {
                      AStack_71.id = AStack_2.id;
                      AStack_71._4_4_ = AStack_2._4_4_;
                      AStack_71.duration.currentCryptoKey = AStack_2.duration.currentCryptoKey;
                      AStack_71.duration.hiddenValue = AStack_2.duration.hiddenValue;
                      AStack_71.duration.hiddenValueOld = AStack_2.duration.hiddenValueOld;
                      AStack_71.duration.fakeValue = AStack_2.duration.fakeValue;
                      AStack_71.duration.inited = AStack_2.duration.inited;
                      AStack_71.duration._21_3_ = AStack_2.duration._21_3_;
                      AStack_71.avatarModifiers = AStack_2.avatarModifiers;
                      AStack_71.actionsToTakeVsTypes = AStack_2.actionsToTakeVsTypes;
                      AStack_71.timeStamp.currentCryptoKey = AStack_2.timeStamp.currentCryptoKey;
                      AStack_71.timeStamp.hiddenValue = AStack_2.timeStamp.hiddenValue;
                      AStack_71.timeStamp.hiddenValueOld = AStack_2.timeStamp.hiddenValueOld;
                      AStack_71.timeStamp.fakeValue = AStack_2.timeStamp.fakeValue;
                      AStack_71.timeStamp.inited = AStack_2.timeStamp.inited;
                      AStack_71.timeStamp._21_3_ = AStack_2.timeStamp._21_3_;
                      AStack_71.persistant = AStack_2.persistant;
                      AStack_71._73_3_ = AStack_2._73_3_;
                      AStack_71.lastTimeStamp = AStack_2.lastTimeStamp;
                      AStack_71.avatarModifierPackageType = AStack_2.avatarModifierPackageType;
                      AStack_71.avatarModifierPackageAdditionPolicy =
                           AStack_2.avatarModifierPackageAdditionPolicy;
                      FUN_?(pAVar73,lVar3,&AStack_71);
                      piVar79 = &(pLVar15->fields)._version;
                      *piVar79 = *piVar79 + 1;
                      return;
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
      *(int32_t *)(lVar3 + 0x10) = id;
      pLVar15 = (this->fields).packages;
      uVar4 = FUN_?(TypeInfo__System__Predicate<AvatarModifierPackage>);
      FUN_?(uVar4,lVar3);
      if (pLVar15 != (List_1_AvatarModifierPackage_ *)0x0) {
        uVar10 = FUN_?(pLVar15,uVar4);
        lVar3 = (longlong)(int)uVar10;
        if (uVar10 == 0xffffffff) {
          return;
        }
        pLVar15 = (this->fields).packages;
        if (pLVar15 != (List_1_AvatarModifierPackage_ *)0x0) {
          if ((uint)(pLVar15->fields)._size <= uVar10) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar72 = (code *)swi(3);
            (*pcVar72)();
            return;
          }
          pAVar73 = (pLVar15->fields)._items;
          if (pAVar73 != (AvatarModifierPackage__Array *)0x0) {
            if ((uint)pAVar73->max_length <= uVar10) goto code_?;
            pAVar74 = pAVar73->vector + lVar3;
            AStack_1.id = pAVar74->id;
            AStack_1._4_4_ = *(undefined4 *)&pAVar74->field_0x4;
            AStack_1.duration.currentCryptoKey = (pAVar74->duration).currentCryptoKey;
            AStack_1.duration.hiddenValue = (pAVar74->duration).hiddenValue;
            ppBVar75 = &pAVar73->vector[lVar3].duration.hiddenValueOld;
            AStack_1.duration.hiddenValueOld = *ppBVar75;
            AStack_1.duration._16_8_ = ppBVar75[1];
            ppAVar76 = &pAVar73->vector[lVar3].avatarModifiers;
            AStack_1.avatarModifiers = *ppAVar76;
            AStack_1.actionsToTakeVsTypes =
                 (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)ppAVar76[1];
            pOVar77 = &pAVar73->vector[lVar3].timeStamp;
            AStack_1.timeStamp.currentCryptoKey = pOVar77->currentCryptoKey;
            AStack_1.timeStamp.hiddenValue = pOVar77->hiddenValue;
            AStack_1.timeStamp.hiddenValueOld = pOVar77->hiddenValueOld;
            pfVar78 = &pAVar73->vector[lVar3].timeStamp.fakeValue;
            AStack_1.timeStamp.fakeValue = *pfVar78;
            AStack_1.timeStamp._20_4_ = pfVar78[1];
            AStack_1._72_4_ = pfVar78[2];
            AStack_1.lastTimeStamp = pfVar78[3];
            AStack_1.avatarModifierPackageType = pAVar73->vector[lVar3].avatarModifierPackageType
            ;
            AStack_1.avatarModifierPackageAdditionPolicy =
                 pAVar73->vector[lVar3].avatarModifierPackageAdditionPolicy;
            if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
              FUN_?();
            }
            AvatarModifierPackage::AvatarModifierPackage_set_IsExpired
                      (&AStack_1,1,(MethodInfo *)0x0);
            pLVar15 = (this->fields).packages;
            if (pLVar15 != (List_1_AvatarModifierPackage_ *)0x0) {
              if ((uint)(pLVar15->fields)._size <= uVar10) goto code_?;
              pAVar73 = (pLVar15->fields)._items;
              if (pAVar73 != (AvatarModifierPackage__Array *)0x0) {
                AStack_71.id = AStack_1.id;
                AStack_71._4_4_ = AStack_1._4_4_;
                AStack_71.duration.currentCryptoKey = AStack_1.duration.currentCryptoKey;
                AStack_71.duration.hiddenValue = AStack_1.duration.hiddenValue;
                AStack_71.duration.hiddenValueOld = AStack_1.duration.hiddenValueOld;
                AStack_71.duration.fakeValue = AStack_1.duration.fakeValue;
                AStack_71.duration.inited = AStack_1.duration.inited;
                AStack_71.duration._21_3_ = AStack_1.duration._21_3_;
                AStack_71.avatarModifiers = AStack_1.avatarModifiers;
                AStack_71.actionsToTakeVsTypes = AStack_1.actionsToTakeVsTypes;
                AStack_71.timeStamp.currentCryptoKey = AStack_1.timeStamp.currentCryptoKey;
                AStack_71.timeStamp.hiddenValue = AStack_1.timeStamp.hiddenValue;
                AStack_71.timeStamp.hiddenValueOld = AStack_1.timeStamp.hiddenValueOld;
                AStack_71.timeStamp.fakeValue = AStack_1.timeStamp.fakeValue;
                AStack_71.timeStamp.inited = AStack_1.timeStamp.inited;
                AStack_71.timeStamp._21_3_ = AStack_1.timeStamp._21_3_;
                AStack_71.persistant = AStack_1.persistant;
                AStack_71._73_3_ = AStack_1._73_3_;
                AStack_71.lastTimeStamp = AStack_1.lastTimeStamp;
                AStack_71.avatarModifierPackageType = AStack_1.avatarModifierPackageType;
                AStack_71.avatarModifierPackageAdditionPolicy =
                     AStack_1.avatarModifierPackageAdditionPolicy;
                FUN_?(pAVar73,lVar3,&AStack_71);
                piVar79 = &(pLVar15->fields)._version;
                *piVar79 = *piVar79 + 1;
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar72 = (code *)swi(3);
  (*pcVar72)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_Update
               (AvatarModifierPackages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackage);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).packages;
  AStack_2.avatarModifierPackageType = 0;
  AStack_2.avatarModifierPackageAdditionPolicy = 0;
  AStack_2.id = 0;
  AStack_2._4_4_ = 0;
  AStack_2.duration.currentCryptoKey = 0;
  AStack_2.duration.hiddenValue.b1 = 0;
  AStack_2.duration.hiddenValue.b2 = 0;
  AStack_2.duration.hiddenValue.b3 = 0;
  AStack_2.duration.hiddenValue.b4 = 0;
  AStack_2.duration.hiddenValueOld = (Byte__Array *)0x0;
  AStack_2.duration.fakeValue = 0.0;
  AStack_2.duration.inited = 0;
  AStack_2.duration._21_3_ = 0;
  AStack_2.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)0x0;
  AStack_2.actionsToTakeVsTypes = (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)0x0;
  AStack_2.timeStamp.currentCryptoKey = 0;
  AStack_2.timeStamp.hiddenValue.b1 = 0;
  AStack_2.timeStamp.hiddenValue.b2 = 0;
  AStack_2.timeStamp.hiddenValue.b3 = 0;
  AStack_2.timeStamp.hiddenValue.b4 = 0;
  AStack_2.timeStamp.hiddenValueOld = (Byte__Array *)0x0;
  AStack_2.timeStamp.fakeValue = 0.0;
  AStack_2.timeStamp.inited = 0;
  AStack_2.timeStamp._21_3_ = 0;
  AStack_2.persistant = 0;
  AStack_2._73_3_ = 0;
  AStack_2.lastTimeStamp = 0.0;
  if (pLVar1 != (List_1_AvatarModifierPackage_ *)0x0) {
    iVar3 = (pLVar1->fields)._size;
    do {
      do {
        while( true ) {
          iVar3 = iVar3 + -1;
          if (iVar3 < 0) {
            return;
          }
          pLVar1 = (this->fields).packages;
          if ((this->fields)._InPause_k__BackingField == 0) break;
          if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
          puVar4 = (undefined8 *)FUN_?(auStack_5,pLVar1,iVar3);
          AStack_2._0_8_ = *puVar4;
          AStack_2.duration._0_8_ = puVar4[1];
          AStack_2.duration.hiddenValueOld = (Byte__Array *)puVar4[2];
          AStack_2.duration._16_8_ = puVar4[3];
          AStack_2.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)puVar4[4];
          AStack_2.actionsToTakeVsTypes =
               (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)puVar4[5];
          AStack_2.timeStamp._0_8_ = puVar4[6];
          AStack_2.timeStamp.hiddenValueOld = (Byte__Array *)puVar4[7];
          AStack_2.timeStamp._16_8_ = puVar4[8];
          AStack_2._72_8_ = puVar4[9];
          AStack_2._80_8_ = puVar4[10];
          if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
            FUN_?();
          }
          AvatarModifierPackage::AvatarModifierPackage_InPause(&AStack_2,(MethodInfo *)0x0);
        }
        if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
        puVar4 = (undefined8 *)FUN_?(&uStack_6,pLVar1,iVar3);
        AStack_2._0_8_ = *puVar4;
        AStack_2.duration._0_8_ = puVar4[1];
        AStack_2.duration.hiddenValueOld = (Byte__Array *)puVar4[2];
        AStack_2.duration._16_8_ = puVar4[3];
        AStack_2.avatarModifiers = (AvatarModifierPackage_AvatarModifier__Array *)puVar4[4];
        AStack_2.actionsToTakeVsTypes =
             (Dictionary_2_AvatarModifierPackageType_ModifierActions_ *)puVar4[5];
        AStack_2.timeStamp._0_8_ = puVar4[6];
        AStack_2.timeStamp.hiddenValueOld = (Byte__Array *)puVar4[7];
        AStack_2.timeStamp._16_8_ = puVar4[8];
        AStack_2._72_8_ = puVar4[9];
        AStack_2._80_8_ = puVar4[10];
        if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar7 = AvatarModifierPackage::AvatarModifierPackage_get_IsExpired
                          (&AStack_2,(MethodInfo *)0x0);
      } while (bVar7 == 0);
      if ((this->fields).OnModifierExpired !=
          (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
        pLVar1 = (this->fields).packages;
        pAVar8 = (this->fields).OnModifierExpired;
        if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) break;
        puVar4 = (undefined8 *)FUN_?(auStack_5,pLVar1,iVar3);
        uStack_6 = *puVar4;
        uStack_9 = puVar4[1];
        uStack_10 = puVar4[2];
        uStack_11 = puVar4[3];
        uStack_12 = puVar4[4];
        uStack_13 = puVar4[5];
        uStack_14 = puVar4[6];
        uStack_15 = puVar4[7];
        uStack_16 = *(undefined4 *)(puVar4 + 8);
        uStack_17 = *(undefined4 *)((longlong)puVar4 + 0x44);
        uStack_18 = *(undefined4 *)(puVar4 + 9);
        uStack_19 = *(undefined4 *)((longlong)puVar4 + 0x4c);
        uStack_20 = puVar4[10];
        (*(pAVar8->fields)._._.invoke_impl)
                  ((pAVar8->fields)._._.method_code,&uStack_6,(pAVar8->fields)._._.method);
      }
      pLVar1 = (this->fields).packages;
      if (pLVar1 == (List_1_AvatarModifierPackage_ *)0x0) break;
      FUN_?(pLVar1,iVar3);
    } while( true );
  }
code_?:
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* AvatarModifierPackages() */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages__ctor
               (AvatarModifierPackages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AvatarModifierPackages__OnPause__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarModifierPackages__OnResume__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<AvatarModifierPackage>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_AvatarModifierPackage_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<AvatarModifierPackage>);
  player = (MVPlayer *)MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__List__
  ;
  FUN_?();
  bVar2 = iRam_? != 0;
  (this->fields).packages = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).packages >> 0xc);
    in_R8 = (MethodInfo *)(ulonglong)(uVar3 & 0x3f);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    player = (MVPlayer *)(lVar4 + 0xADDR);
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *(ulonglong *)(lVar4 + 0xADDR);
      if (bVar2) {
        *(ulonglong *)(lVar4 + 0xADDR) = uVar5 | 1L << (longlong)in_R8;
      }
      UNLOCK();
    } while (!bVar2);
  }
  (this->fields)._InPause_k__BackingField = 0;
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
  if (extraout_RAX != 0) {
    pDVar6 = *(Delegate **)(extraout_RAX + 0x40);
    pNVar7 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction)
    ;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar7,(Object *)this,MethodInfo__AvatarModifierPackages__OnPause__,(MethodInfo *)0x0
              );
    method_00 = (MethodInfo *)0x0;
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar6,(Delegate *)pNVar7,(MethodInfo *)0x0);
    player_00 = TypeInfo__UnityEngine__Events__UnityAction;
    pDVar6 = (Delegate *)0x0;
    if (pDVar8 == (Delegate *)0x0) {
      *(undefined8 *)(extraout_RAX + 0x40) = 0;
    }
    else {
      pDVar9 = pDVar6;
      if ((UnityAction__Class *)pDVar8->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pDVar9 = pDVar8;
      }
      if (pDVar9 == (Delegate *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(Delegate **)(extraout_RAX + 0x40) = pDVar9;
      pDVar9 = pDVar6;
      if ((UnityAction__Class *)pDVar8->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pDVar9 = pDVar8;
      }
      player_00 = TypeInfo__UnityEngine__Events__UnityAction;
      if (pDVar9 == (Delegate *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar3 = (uint)(extraout_RAX + 0x40U >> 0xc);
      method_00 = (MethodInfo *)(ulonglong)(uVar3 & 0x3f);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      player_00 = (UnityAction__Class *)(lVar4 + 0xADDR);
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *(ulonglong *)(lVar4 + 0xADDR);
        if (bVar2) {
          *(ulonglong *)(lVar4 + 0xADDR) = uVar5 | 1L << (longlong)method_00;
        }
        UNLOCK();
      } while (!bVar2);
    }
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)player_00,method_00);
    if (extraout_RAX_00 != 0) {
      pDVar8 = *(Delegate **)(extraout_RAX_00 + 0x48);
      pNVar7 = (NavMesh_OnNavMeshPreUpdate *)
               FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar7,(Object *)this,MethodInfo__AvatarModifierPackages__OnResume__,
                 (MethodInfo *)0x0);
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar8,(Delegate *)pNVar7,(MethodInfo *)0x0);
      if (pDVar8 == (Delegate *)0x0) {
        *(undefined8 *)(extraout_RAX_00 + 0x48) = 0;
      }
      else {
        pDVar9 = pDVar6;
        if ((UnityAction__Class *)pDVar8->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pDVar9 = pDVar8;
        }
        if (pDVar9 == (Delegate *)0x0) {
          FUN_?(pDVar8);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(Delegate **)(extraout_RAX_00 + 0x48) = pDVar9;
        if ((UnityAction__Class *)pDVar8->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pDVar6 = pDVar8;
        }
        if (pDVar6 == (Delegate *)0x0) {
          FUN_?(pDVar8);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar3 = (uint)(extraout_RAX_00 + 0x48U >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar11 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar11;
          if (bVar2) {
            *puVar11 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void add_OnDisableVehiclesEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_add_OnDisableVehiclesEvent
               (AvatarModifierPackages *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnDisableVehiclesEvent;
  a = (this->fields).OnDisableVehiclesEvent;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_EventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_EventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (pEVar4 == (EventHandler_1_EventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Void add_OnUnequipItemEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_add_OnUnequipItemEvent
               (AvatarModifierPackages *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = &this->fields;
  a = (this->fields).OnUnequipItemEvent;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_EventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_EventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (pEVar4 == (EventHandler_1_EventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = pAVar1->OnUnequipItemEvent;
    bVar7 = a == pEVar6;
    if (bVar7) {
      pAVar1->OnUnequipItemEvent = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)pAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Void remove_OnDisableVehiclesEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::AvatarModifierPackages::
     AvatarModifierPackages_remove_OnDisableVehiclesEvent
               (AvatarModifierPackages *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnDisableVehiclesEvent;
  source = (this->fields).OnDisableVehiclesEvent;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_EventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_EventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (pEVar4 == (EventHandler_1_EventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}


/* Void remove_OnUnequipItemEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::AvatarModifierPackages::AvatarModifierPackages_remove_OnUnequipItemEvent
               (AvatarModifierPackages *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = &this->fields;
  source = (this->fields).OnUnequipItemEvent;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_EventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_EventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (pEVar4 == (EventHandler_1_EventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = pAVar1->OnUnequipItemEvent;
    bVar7 = source == pEVar6;
    if (bVar7) {
      pAVar1->OnUnequipItemEvent = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)pAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}

