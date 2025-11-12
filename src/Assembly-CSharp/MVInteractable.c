
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_AddModifier
               (MVInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackageType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarModifierPackage);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).modifierPackages;
  if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
  MVar2 = AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
                    (pAVar1,type,(MethodInfo *)0x0);
  pMVar3 = (this->fields).runtimeDataModifiers;
  if (pMVar3 == (MVRuntimeDataVariable *)0x0) goto code_?;
  pIVar4 = (IDictionary_2_System_Object_System_Object_ *)
            ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                      ((pMVar3->fields).value,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  value = (IDictionary_2_System_Object_System_Object_ *)0x0;
  dictionary = (IDictionary_2_System_Object_System_Object_ *)0x0;
  if (pIVar4 != (IDictionary_2_System_Object_System_Object_ *)0x0) {
    bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pIVar4->klass->_1).naturalAligment < bVar5) ||
       (dictionary = pIVar4,
       (Dictionary_2_System_Object_System_Object___Class *)
       (pIVar4->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pIVar4);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object___ctor_4
            ((Dictionary_2_System_Object_System_Object_ *)this_00,dictionary,
             (IEqualityComparer_1_System_Object_ *)0x0,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
             ->klass->rgctx_data[8].method);
  if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarModifierPackage);
  }
  pSVar7 = TypeInfo__AvatarModifierPackage->static_fields->AvatarModifierPackageTypeLookupTable;
  if (pSVar7 == (String__Array *)0x0) goto code_?;
  if ((AvatarModifierPackageType__Enum)pSVar7->max_length <= type) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  key = pSVar7->vector[(int)type];
  if (MVar2 == ModifierActions__Enum_Add) {
    if (this_00 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) goto code_?;
    iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::StyleComplexSelector+PseudoStateData]::
             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                       (this_00,(Object *)key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        ->klass->rgctx_data[0x21].method);
    if (-1 < iVar8) {
      return;
    }
    pAVar1 = (this->fields).modifierPackages;
    if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
    AvatarModifierPackages::AvatarModifierPackages_AddModifier
              (pAVar1,type,id,additionalModifers,(MethodInfo *)0x0);
    lVar9 = lRam_?;
    cStackX_10 = '\0';
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        value = (IDictionary_2_System_Object_System_Object_ *)FUN_?(lRam_?);
        FUN_?(value + 1,&cStackX_10,(longlong)*(int *)(lVar9 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)(value + 1) >> 0xc);
          lVar9 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
          do {
            uVar11 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar12 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar13);
        }
      }
    }
    else {
      value = (IDictionary_2_System_Object_System_Object_ *)((ulonglong)uStackX_11 << 8);
    }
code_?:
    behavior = (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)additionalModifers >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                ->klass->rgctx_data[0x22].method;
  }
  else {
    if (MVar2 != ModifierActions__Enum_Renew) {
      if (MVar2 != ModifierActions__Enum_Replace) {
        if (MVar2 != ModifierActions__Enum_CancelOut) {
          return;
        }
        pAVar1 = (this->fields).modifierPackages;
        if (pAVar1 != (AvatarModifierPackages *)0x0) {
          AVar14 = AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                             (pAVar1,type,ModifierActions__Enum_CancelOut,(MethodInfo *)0x0);
          (*(this->klass->vtable).RemoveModifier.methodPtr)
                    (this,(ulonglong)AVar14,(ulonglong)(uint)id,
                     (this->klass->vtable).RemoveModifier.method);
          return;
        }
        goto code_?;
      }
      if (this_00 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) goto code_?;
      iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::StyleComplexSelector+PseudoStateData]::
               Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                         (this_00,(Object *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar8) {
        return;
      }
      pAVar1 = (this->fields).modifierPackages;
      if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
      AvatarModifierPackages::AvatarModifierPackages_AddModifier
                (pAVar1,type,id,additionalModifers,(MethodInfo *)0x0);
      pAVar1 = (this->fields).modifierPackages;
      if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
      AVar14 = AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                         (pAVar1,type,ModifierActions__Enum_Replace,(MethodInfo *)0x0);
      additionalModifers =
           (AvatarModifierPackage_AvatarModifier__Array *)
           (this->klass->vtable).RemoveModifier.method;
      (*(this->klass->vtable).RemoveModifier.methodPtr)
                (this,(ulonglong)AVar14,0xffffffff,additionalModifers);
      EStack_15.klass = (Enum__Class *)TypeInfo__AvatarModifierPackageType;
      EStack_15.monitor = (MonitorData *)0xffffffffffffffff;
      AStack_16 = AVar14;
      pSVar17 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_15,(MethodInfo *)0x0);
      pSVar17 = mscorlib.dll::System::String::String_Concat_4
                          (::StringLiteral__,pSVar17,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Remove
                ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pSVar17,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                );
      lVar9 = lRam_?;
      cStackX_10 = '\0';
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           (value = (IDictionary_2_System_Object_System_Object_ *)0x0,
           (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          value = (IDictionary_2_System_Object_System_Object_ *)FUN_?(lRam_?);
          FUN_?(value + 1,&cStackX_10,(longlong)*(int *)(lVar9 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar10 = (uint)((ulonglong)(value + 1) >> 0xc);
            additionalModifers =
                 (AvatarModifierPackage_AvatarModifier__Array *)(ulonglong)(uVar10 & 0x3f);
            lVar9 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
            do {
              uVar11 = *(ulonglong *)(lVar9 + 0xADDR);
              puVar12 = (ulonglong *)(lVar9 + 0xADDR);
              LOCK();
              bVar13 = uVar11 == *puVar12;
              if (bVar13) {
                *puVar12 = uVar11 | 1L << (longlong)additionalModifers;
              }
              UNLOCK();
            } while (!bVar13);
          }
        }
      }
      else {
        value = (IDictionary_2_System_Object_System_Object_ *)((ulonglong)uStackX_11 << 8);
      }
      goto code_?;
    }
    if (this_00 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) goto code_?;
    iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::StyleComplexSelector+PseudoStateData]::
             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                       (this_00,(Object *)key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        ->klass->rgctx_data[0x21].method);
    if (iVar8 < 0) {
      return;
    }
    pAVar1 = (this->fields).modifierPackages;
    if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
    AvatarModifierPackages::AvatarModifierPackages_AddModifier
              (pAVar1,type,id,additionalModifers,(MethodInfo *)0x0);
    pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar18 == (Object *)0x0) goto code_?;
    if ((pOVar18->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar18,lRam_?);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    cStackX_10 = *(char *)&pOVar18[1].klass + '\x01';
    value = (IDictionary_2_System_Object_System_Object_ *)
            FUN_?(lRam_?,&cStackX_10);
    behavior = (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)additionalModifers >> 8),1);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                ->klass->rgctx_data[0x22].method;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)key,(Object *)value,
             behavior,method_00);
  pMVar3 = (this->fields).runtimeDataModifiers;
  if (pMVar3 != (MVRuntimeDataVariable *)0x0) {
    MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
              (pMVar3,(Object *)this_00,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ClearModifiers() */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_ClearModifiers
               (MVInteractable *this,MethodInfo *method)

{
  pAVar1 = (this->fields).modifierPackages;
  if (pAVar1 != (AvatarModifierPackages *)0x0) {
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
    pLVar2 = (pAVar1->fields).packages;
    if (pLVar2 != (List_1_AvatarModifierPackage_ *)0x0) {
      uVar3 = (pLVar2->fields)._size - 1;
      if (-1 < (int)uVar3) {
        lVar4 = (longlong)(int)uVar3 * 0x58;
        do {
          pLVar2 = (pAVar1->fields).packages;
          if (pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
          if ((uint)(pLVar2->fields)._size <= uVar3) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pAVar6 = (pLVar2->fields)._items;
          if (pAVar6 == (AvatarModifierPackage__Array *)0x0) goto code_?;
          if ((uint)pAVar6->max_length <= uVar3) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar7 = (undefined8 *)((longlong)&pAVar6->vector[0].id + lVar4);
          uStack_8 = *puVar7;
          uStack_9 = puVar7[1];
          puVar7 = (undefined8 *)((longlong)&pAVar6->vector[0].duration.hiddenValueOld + lVar4);
          uStack_10 = *puVar7;
          uStack_11 = puVar7[1];
          puVar7 = (undefined8 *)((longlong)&pAVar6->vector[0].avatarModifiers + lVar4);
          uStack_12 = *puVar7;
          uStack_13 = puVar7[1];
          puVar7 = (undefined8 *)((longlong)&pAVar6->vector[0].timeStamp.currentCryptoKey + lVar4);
          uStack_14 = *puVar7;
          uStack_15 = puVar7[1];
          uStack_16 = *(undefined8 *)
                       ((longlong)&pAVar6->vector[0].avatarModifierPackageType + lVar4);
          if ((&pAVar6->vector[0].persistant)[lVar4] == 0) {
            if ((pAVar1->fields).OnModifierExpired !=
                (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
              pAVar17 = (pAVar1->fields).OnModifierExpired;
              if (pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
              puVar7 = (undefined8 *)FUN_?(auStack_18,pLVar2,uVar3);
              uStack_8 = *puVar7;
              uStack_9 = puVar7[1];
              uStack_10 = puVar7[2];
              uStack_11 = puVar7[3];
              uStack_12 = puVar7[4];
              uStack_13 = puVar7[5];
              uStack_14 = puVar7[6];
              uStack_15 = puVar7[7];
              uStack_19 = *(undefined4 *)(puVar7 + 8);
              uStack_20 = *(undefined4 *)((longlong)puVar7 + 0x44);
              uStack_21 = *(undefined4 *)(puVar7 + 9);
              uStack_22 = *(undefined4 *)((longlong)puVar7 + 0x4c);
              uStack_16 = puVar7[10];
              (*(pAVar17->fields)._._.invoke_impl)
                        ((pAVar17->fields)._._.method_code,&uStack_8,(pAVar17->fields)._._.method);
            }
            pLVar2 = (pAVar1->fields).packages;
            if (pLVar2 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
            FUN_?(pLVar2,uVar3);
          }
          lVar4 = lVar4 + -0x58;
          uVar3 = uVar3 - 1;
        } while (-1 < (int)uVar3);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Single HandleModifierEffect(AvatarModifierEffect, Single) */

float Assembly-CSharp.dll::MVInteractable::MVInteractable_HandleModifierEffect
                (MVInteractable *this,AvatarModifierEffect__Enum avatarModifierEffect,
                float baseValue,MethodInfo *method)

{
  pAVar1 = (this->fields).modifierPackages;
  if (pAVar1 == (AvatarModifierPackages *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    fVar3 = (float)(*pcVar2)();
    return fVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Comparison<AvatarModifierPackage::AvatarModifier>,
                  CONCAT44(in_register_00000014,avatarModifierEffect),in_R8,0);
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
  lVar4 = FUN_?(
                        TypeInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>
                        );
  FUN_?(lVar4,
                MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__List__
               );
  pLVar5 = (pAVar1->fields).packages;
  if (pLVar5 != (List_1_AvatarModifierPackage_ *)0x0) {
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&pLStack_7 >> 0xc);
      uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    uVar6 = 0;
    lStack_12 = (ulonglong)(uint)(pLVar5->fields)._version << 0x20;
    uStack_13 = 0;
    uStack_14 = 0;
    uStack_15 = 0;
    uStack_16 = 0;
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_19 = 0;
    uStack_20 = 0;
    uStack_21 = 0;
    uStack_22 = 0;
    uStack_23 = 0;
    lStack_24 = lStack_12;
    uStack_25 = 0;
    uStack_26 = 0;
    uStack_27 = 0;
    uStack_28 = 0;
    lStack_29 = 0;
    uStack_30 = 0;
    uStack_31 = 0;
    uStack_32 = 0;
    uStack_33 = 0;
    uStack_34 = 0;
    uStack_35 = 0;
    pLStack_7 = pLVar5;
    pLStack_36 = pLVar5;
    while (cVar37 = FUN_?(&pLStack_36,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                                 ), lVar38 = lStack_29, cVar37 != '\0') {
      uVar39 = uVar6;
      if (lStack_29 == 0) goto code_?;
      for (; uVar40 = *(uint *)(lVar38 + 0x18), (int)uVar39 < (int)uVar40; uVar39 = uVar39 + 1) {
        if (uVar40 <= uVar39) goto code_?;
        puVar41 = (undefined4 *)(lVar38 + ((longlong)(int)uVar39 + 2) * 0x10);
        if (puVar41[1] == avatarModifierEffect) {
          if (lVar4 == 0) goto code_?;
          uStack_42 = *puVar41;
          AStack_43 = puVar41[1];
          uStack_44 = puVar41[2];
          uStack_45 = puVar41[3];
          FUN_?(lVar4,&uStack_42,
                        MethodInfo__System__Collections__Generic__List<AvatarModifierPackage::AvatarModifier>__Add_AvatarModifierPackage__AvatarModifier_
                       );
        }
      }
    }
    if (*(int *)&(TypeInfo__AvatarModifierPackages____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar46 = TypeInfo__AvatarModifierPackages____c->static_fields->__9__27_0;
    if (pCVar46 == (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
      if (*(int *)&(TypeInfo__AvatarModifierPackages____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      pAVar47 = TypeInfo__AvatarModifierPackages____c->static_fields->__9;
      pCVar46 = (Comparison_1_AvatarModifierPackage_AvatarModifier_ *)
                FUN_?(TypeInfo__System__Comparison<AvatarModifierPackage::AvatarModifier>);
      FUN_?(pCVar46,pAVar47,
                    MethodInfo__AvatarModifierPackages____c___HandleModifierEffect_b__27_0_AvatarModifierPackage__AvatarModifier__AvatarModifierPackage__AvatarModifier_
                   );
      TypeInfo__AvatarModifierPackages____c->static_fields->__9__27_0 = pCVar46;
      if (iRam_? != 0) {
        uVar39 = (uint)((ulonglong)&TypeInfo__AvatarModifierPackages____c->static_fields->__9__27_0
                       >> 0xc);
        uVar8 = (ulonglong)((uVar39 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar39 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
    }
    if (lVar4 != 0) {
      FUN_?(lVar4,pCVar46);
      lVar38 = 0x20;
      while( true ) {
        if (*(int *)(lVar4 + 0x18) <= (int)uVar6) {
          return baseValue;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto code_?;
        lVar48 = *(longlong *)(lVar4 + 0x10);
        if (lVar48 == 0) break;
        if (*(uint *)(lVar48 + 0x18) <= uVar6) {
code_?:
          FUN_?();
          pcVar2 = (code *)swi(3);
          fVar3 = (float)(*pcVar2)();
          return fVar3;
        }
        iVar49 = *(int *)(lVar48 + lVar38);
        if (iVar49 == 0) {
          if (*(uint *)(lVar4 + 0x18) <= uVar6) goto code_?;
          if (lVar48 == 0) break;
          if (*(uint *)(lVar48 + 0x18) <= uVar6) goto code_?;
          lVar48 = *(longlong *)(lVar48 + 8 + lVar38);
          if (lVar48 == 0) break;
          fVar3 = (float)(**(code **)(lVar48 + 0x18))
                                    (*(undefined8 *)(lVar48 + 0x40),*(undefined8 *)(lVar48 + 0x28));
          baseValue = baseValue * fVar3;
code_?:
          uVar6 = uVar6 + 1;
          lVar38 = lVar38 + 0x10;
        }
        else if (iVar49 == 1) {
          if (*(uint *)(lVar4 + 0x18) <= uVar6) goto code_?;
          if (lVar48 == 0) break;
          if (*(uint *)(lVar48 + 0x18) <= uVar6) goto code_?;
          lVar48 = *(longlong *)(lVar48 + 8 + lVar38);
          if (lVar48 == 0) break;
          fVar3 = (float)(**(code **)(lVar48 + 0x18))
                                    (*(undefined8 *)(lVar48 + 0x40),*(undefined8 *)(lVar48 + 0x28));
          baseValue = baseValue + fVar3;
          uVar6 = uVar6 + 1;
          lVar38 = lVar38 + 0x10;
        }
        else {
          if (iVar49 != 2) goto code_?;
          if (*(uint *)(lVar4 + 0x18) <= uVar6) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            fVar3 = (float)(*pcVar2)();
            return fVar3;
          }
          if (lVar48 == 0) break;
          if (*(uint *)(lVar48 + 0x18) <= uVar6) goto code_?;
          lVar48 = *(longlong *)(lVar48 + 8 + lVar38);
          if (lVar48 == 0) break;
          baseValue = (float)(**(code **)(lVar48 + 0x18))
                                       (*(undefined8 *)(lVar48 + 0x40),*(undefined8 *)(lVar48 + 0x28))
          ;
          uVar6 = uVar6 + 1;
          lVar38 = lVar38 + 0x10;
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
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Boolean HasModifier(AvatarModifierPackageType) */

bool Assembly-CSharp.dll::MVInteractable::MVInteractable_HasModifier
               (MVInteractable *this,AvatarModifierPackageType__Enum type,MethodInfo *method)

{
  pAVar1 = (this->fields).modifierPackages;
  if (pAVar1 != (AvatarModifierPackages *)0x0) {
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
    lVar2 = FUN_?(TypeInfo__AvatarModifierPackages____c__DisplayClass19_0);
    if (lVar2 != 0) {
      *(AvatarModifierPackageType__Enum *)(lVar2 + 0x10) = type;
      pLVar3 = (pAVar1->fields).packages;
      uVar4 = FUN_?(TypeInfo__System__Predicate<AvatarModifierPackage>);
      FUN_?(uVar4,lVar2,
                    MethodInfo__AvatarModifierPackages____c__DisplayClass19_0___HasModifier_b__0_AvatarModifierPackage_
                   );
      if (pLVar3 != (List_1_AvatarModifierPackage_ *)0x0) {
        iVar5 = FUN_?(pLVar3,uVar4);
        return iVar5 != -1;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean HasModifierEffect(AvatarModifierEffect) */

bool Assembly-CSharp.dll::MVInteractable::MVInteractable_HasModifierEffect
               (MVInteractable *this,AvatarModifierEffect__Enum avatarModifierEffect,
               MethodInfo *method)

{
  pAVar1 = (this->fields).modifierPackages;
  if (pAVar1 == (AvatarModifierPackages *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                  ,CONCAT44(in_register_00000014,avatarModifierEffect),0);
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
  pLVar4 = (pAVar1->fields).packages;
  if (pLVar4 == (List_1_AvatarModifierPackage_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    uStack_5 = 0;
    uStack_6 = 0;
    uStack_7 = 0;
    uStack_8 = 0;
    uStack_9 = 0;
    uStack_10 = 0;
    uStack_11 = 0;
    uStack_12 = 0;
    uStack_13 = 0;
    uStack_14 = 0;
    if (iRam_? != 0) {
      uVar15 = (uint)((ulonglong)&pLStack_16 >> 0xc);
      puVar17 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar18 = *puVar17;
        LOCK();
        uVar19 = *puVar17;
        if (uVar18 == uVar19) {
          *puVar17 = uVar18 | 1L << (uVar15 & 0x3f);
        }
        UNLOCK();
      } while (uVar18 != uVar19);
    }
    lStack_20 = (ulonglong)(uint)(pLVar4->fields)._version << 0x20;
    uStack_21 = 0;
    lStack_22 = lStack_20;
    uStack_23 = 0;
    uStack_24 = 0;
    uStack_25 = 0;
    uStack_26 = 0;
    lStack_27 = 0;
    uStack_28 = 0;
    uStack_29 = 0;
    puStack_30 = (undefined *)0x0;
    uStack_31 = 0;
    uStack_32 = 0;
    uStack_33 = 0;
    pLStack_16 = pLVar4;
    pLStack_34 = pLVar4;
    while( true ) {
      cVar35 = FUN_?(&pLStack_34,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                           );
      if (cVar35 == '\0') {
        return 0;
      }
      uVar15 = 0;
      if (lStack_27 == 0) break;
      for (; (int)uVar15 < (int)*(uint *)(lStack_27 + 0x18); uVar15 = uVar15 + 1) {
        if (*(uint *)(lStack_27 + 0x18) <= uVar15) goto code_?;
        if (*(AvatarModifierEffect__Enum *)(lStack_27 + 0x24 + (longlong)(int)uVar15 * 0x10) ==
            avatarModifierEffect) {
          return 1;
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IgnoreDamage(MVPlayer) */

bool Assembly-CSharp.dll::MVInteractable::MVInteractable_IgnoreDamage
               (MVInteractable *this,MVPlayer *damageDealer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pMVar3 = (this->fields)._._.worldObjectParent, pMVar3 != (MVWorldObjectClient *)0x0)) &&
     (pMVar4 = (pMVar2->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
    MVar5 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                       (pMVar4,(pMVar3->fields)._.ownerActorNr,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pMVar4 = (pMVar2->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar6 = (pMVar4->fields).teams;
      if (pDVar6 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
        if (((1 < (pDVar6->fields)._count - (pDVar6->fields)._freeCount) &&
            (damageDealer != (MVPlayer *)0x0)) &&
           ((MVar5 == (damageDealer->fields)._Team_k__BackingField && (MVar5 != MVTeam__Enum_None)
            ))) {
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 == (MVNetworkGame *)0x0) ||
             (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0))
          goto code_?;
          pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
          if (pMVar7 == (MVLocalPlayer *)0x0) goto code_?;
          if ((pMVar7->fields)._._ActorNr_k__BackingField !=
              (damageDealer->fields)._ActorNr_k__BackingField) {
            return 1;
          }
        }
        pSVar8 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if ((pSVar8 != (SpawnRoleDataMediator *)0x0) &&
           (pSVar9 = (pSVar8->fields).SpawnRoleModeTypeWrapper,
           pSVar9 != (SpawnRoleModeTypeWrapper *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pSVar10 = (pSVar9->fields).spawnRoleType;
          if ((pSVar10 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
             (pSVar11 = (pSVar10->fields).subscribableVariable,
             pSVar11 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
            return ((pSVar11->fields)._.value & 1) == 0;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Boolean IgnoreHealing(MVPlayer) */

bool Assembly-CSharp.dll::MVInteractable::MVInteractable_IgnoreHealing
               (MVInteractable *this,MVPlayer *healer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pMVar3 = (this->fields)._._.worldObjectParent, pMVar3 != (MVWorldObjectClient *)0x0)) &&
     (pMVar4 = (pMVar2->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
    MVar5 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                       (pMVar4,(pMVar3->fields)._.ownerActorNr,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pMVar4 = (pMVar2->fields).teamManager, pMVar4 != (MVTeamManager *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar6 = (pMVar4->fields).teams;
      if (pDVar6 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
        if (((1 < (pDVar6->fields)._count - (pDVar6->fields)._freeCount) &&
            (healer != (MVPlayer *)0x0)) &&
           ((MVar5 != (healer->fields)._Team_k__BackingField && (MVar5 != MVTeam__Enum_None)))) {
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar2 == (MVNetworkGame *)0x0) ||
             (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0))
          goto code_?;
          pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
          if (pMVar7 == (MVLocalPlayer *)0x0) goto code_?;
          if ((pMVar7->fields)._._ActorNr_k__BackingField !=
              (healer->fields)._ActorNr_k__BackingField) {
            return 1;
          }
        }
        pSVar8 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if ((pSVar8 != (SpawnRoleDataMediator *)0x0) &&
           (pSVar9 = (pSVar8->fields).SpawnRoleModeTypeWrapper,
           pSVar9 != (SpawnRoleModeTypeWrapper *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pSVar10 = (pSVar9->fields).spawnRoleType;
          if ((pSVar10 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
             (pSVar11 = (pSVar10->fields).subscribableVariable,
             pSVar11 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
            return ((pSVar11->fields)._.value & 1) == 0;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void Init(MVRuntimeDataVariable, MVRuntimeDataVariable`1[System.Single],
   MVRuntimeDataVariable`1[System.Int32], MVRuntimeDataVariableClampedFloat,
   WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_Init
               (MVInteractable *this,MVRuntimeDataVariable *runtimeDataModifiers,
               MVRuntimeDataVariable_1_System_Single_ *health,
               MVRuntimeDataVariable_1_System_Int32_ *maxHealth,
               MVRuntimeDataVariableClampedFloat *shield,
               WorldObjectSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MVInteractable___Init_b__10_0_AvatarModifierPackage_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarModifierPackages__OnModifierExpiredDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).runtimeDataModifiers = runtimeDataModifiers;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).runtimeDataModifiers >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).health = health;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).health >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).maxHealth = maxHealth;
  iVar1 = 0;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).maxHealth >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).shield = shield;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).shield >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pAVar8 = (this->fields).modifierPackages;
  if (pAVar8 == (AvatarModifierPackages *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pAVar10 = (pAVar8->fields).OnModifierExpired;
  b = (Delegate *)FUN_?(TypeInfo__AvatarModifierPackages__OnModifierExpiredDelegate);
  pMVar11 = MethodInfo__MVInteractable___Init_b__10_0_AvatarModifierPackage_;
  bVar6 = iRam_? != 0;
  (b->fields).method_ptr =
       MethodInfo__MVInteractable___Init_b__10_0_AvatarModifierPackage_->virtualMethodPointer;
  (b->fields).method = pMVar11;
  (b->fields).m_target = (Object *)this;
  if (bVar6) {
    uVar2 = (uint)((ulonglong)&(b->fields).m_target >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  uVar12 = pMVar11->parameters_count;
  (b->fields).method_code = b;
  if (((pMVar11->flags & 0x10) == 0) || (uVar12 != 1)) {
    (b->fields).method_code = (b->fields).m_target;
    pcVar9 = (b->fields).method_ptr;
  }
  else {
    pcVar9 = FUN_?;
  }
  (b->fields).invoke_impl = pcVar9;
  (b->fields).extra_arg = FUN_?;
  pAVar10 = (AvatarModifierPackages_OnModifierExpiredDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pAVar10,b,(MethodInfo *)0x0);
  if (pAVar10 == (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
    (pAVar8->fields).OnModifierExpired = (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0;
  }
  else {
    pAVar13 = (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0;
    if (pAVar10->klass == TypeInfo__AvatarModifierPackages__OnModifierExpiredDelegate) {
      pAVar13 = pAVar10;
    }
    if (pAVar13 == (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
      FUN_?(pAVar10,TypeInfo__AvatarModifierPackages__OnModifierExpiredDelegate);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (pAVar8->fields).OnModifierExpired = pAVar13;
    pAVar13 = (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0;
    if (pAVar10->klass == TypeInfo__AvatarModifierPackages__OnModifierExpiredDelegate) {
      pAVar13 = pAVar10;
    }
    if (pAVar13 == (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
      FUN_?(pAVar10);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(pAVar8->fields).OnModifierExpired >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* Void InitializeSetings(Single, Single) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_InitializeSetings
               (MVInteractable *this,float healthRegenerationPerSecondSetting,
               float shieldRegenerationPerSecondSetting,MethodInfo *method)

{
  (this->fields).healthRegenerationPerSecondSetting = healthRegenerationPerSecondSetting;
  (this->fields).shieldRegenerationPerSecondSetting = shieldRegenerationPerSecondSetting;
  return;
}


/* Void RemoveModifier(AvatarModifierPackageType, Int32) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_RemoveModifier
               (MVInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackageType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).runtimeDataModifiers;
  if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
    dictionary = (IDictionary_2_System_Object_System_Object_ *)
                 ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                           ((pMVar1->fields).value,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    if (dictionary != (IDictionary_2_System_Object_System_Object_ *)0x0) {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((dictionary->klass->_1).naturalAligment < bVar2) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (dictionary->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(dictionary);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object___ctor_4
              ((Dictionary_2_System_Object_System_Object_ *)this_01,dictionary,
               (IEqualityComparer_1_System_Object_ *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
               ->klass->rgctx_data[8].method);
    EStack_4.klass = (Enum__Class *)TypeInfo__AvatarModifierPackageType;
    EStack_4.monitor = (MonitorData *)0xffffffffffffffff;
    AStack_5 = type;
    pSVar6 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_4,(MethodInfo *)0x0);
    pSVar6 = mscorlib.dll::System::String::String_Concat_4
                       (::StringLiteral__,pSVar6,(MethodInfo *)0x0);
    if (this_01 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_01,(Object *)pSVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar7 < 0) {
        return;
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Remove
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)pSVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                );
      pMVar1 = (this->fields).runtimeDataModifiers;
      if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                  (pMVar1,(Object *)this_01,(MethodInfo *)0x0);
        this_00 = (this->fields).modifierPackages;
        if (this_00 != (AvatarModifierPackages *)0x0) {
          AvatarModifierPackages::AvatarModifierPackages_RemoveModifier
                    (this_00,type,id,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RestoreShield(Single) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_RestoreShield
               (MVInteractable *this,float restoredShieldAmount,MethodInfo *method)

{
  pMVar1 = (this->fields).shield;
  if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
    fVar2 = (float)(*(pMVar1->klass->vtable).get_Value.methodPtr)
                             (pMVar1,(pMVar1->klass->vtable).get_Value.method);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->klass->vtable).set_Value.methodPtr)
              (pMVar1,fVar2 + restoredShieldAmount,(pMVar1->klass->vtable).set_Value.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_Update
               (MVInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_float>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_float>__get_Key__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_float>__get_Value__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).modifierPackages;
  if (pAVar1 != (AvatarModifierPackages *)0x0) {
    AvatarModifierPackages::AvatarModifierPackages_Update(pAVar1,(MethodInfo *)0x0);
    pAVar1 = (this->fields).modifierPackages;
    if ((pAVar1 != (AvatarModifierPackages *)0x0) &&
       (pDVar2 = AvatarModifierPackages::AvatarModifierPackages_ComputeModifierEffectGroupedById
                           (pAVar1,AvatarModifierEffect__Enum_FlamerDamagePrSec,0.0,
                            (MethodInfo *)0x0),
       pDVar2 != (Dictionary_2_System_Int32_System_Single_ *)0x0)) {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
        uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (ulonglong)(uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      iStack_9 = (pDVar2->fields)._version;
      uStack_10 = 2;
      uStack_11 = 0;
      uStack_4._0_4_ = SUB84(pDVar2,0);
      uStack_4._4_4_ = (undefined4)((ulonglong)pDVar2 >> 0x20);
      uStack_12 = (undefined4)uStack_4;
      uStack_13 = uStack_4._4_4_;
      uStack_14 = 0;
      uStack_15 = 0;
      uStack_16 = 2;
      uStack_4 = 0;
      puStack_17 = &uStack_12;
      while (cVar18 = FUN_?(&uStack_12,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__MoveNext__
                                  ), uVar19 = uStack_15, cVar18 != '\0') {
        pcVar20 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar20 = (code *)FUN_?(), pcVar20 == (code *)0x0)) goto code_?;
        pcRam_? = pcVar20;
        fVar21 = (float)(*pcRam_?)();
        uStackX_18._4_4_ = (float)((ulonglong)uVar19 >> 0x20);
        if (uStackX_18._4_4_ * fVar21 != 0.0) {
          pMVar22 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar22 == (MVNetworkGame *)0x0) goto code_?;
          pMVar23 = (pMVar22->fields).playerContainer;
          if (pMVar23 == (MVPlayerContainer *)0x0) goto code_?;
          pMVar24 = MVPlayerContainer::MVPlayerContainer_get_Item
                              (pMVar23,(int32_t)uVar19,(MethodInfo *)0x0);
          pDVar2 = (Dictionary_2_System_Int32_System_Single_ *)
                   CONCAT71((int7)((ulonglong)pDVar2 >> 8),0xd);
          (*(this->klass->vtable).__unknown.methodPtr)
                    (this,uStackX_18._4_4_ * fVar21,pMVar24,pDVar2,
                     (this->klass->vtable).__unknown.method);
        }
      }
      pAVar1 = (this->fields).modifierPackages;
      if ((pAVar1 != (AvatarModifierPackages *)0x0) &&
         (pDVar2 = AvatarModifierPackages::AvatarModifierPackages_ComputeModifierEffectGroupedById
                             (pAVar1,AvatarModifierEffect__Enum_RayHealEnemyDamagePrSec,0.0,
                              (MethodInfo *)0x0),
         pDVar2 != (Dictionary_2_System_Int32_System_Single_ *)0x0)) {
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
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
        iStack_9 = (pDVar2->fields)._version;
        uStack_10 = 2;
        uStack_11 = 0;
        uStack_4._0_4_ = SUB84(pDVar2,0);
        uStack_4._4_4_ = (undefined4)((ulonglong)pDVar2 >> 0x20);
        uStack_12 = (undefined4)uStack_4;
        uStack_13 = uStack_4._4_4_;
        uStack_14 = 0;
        uStack_15 = 0;
        uStack_16 = 2;
        uStack_4 = 0;
        puStack_17 = &uStack_12;
        while (lVar25 = CONCAT44(uStack_13,uStack_12), lVar25 != 0) {
          if (iStack_9 != *(int *)(lVar25 + 0x2c)) goto code_?;
          do {
            if (lVar25 == 0) goto code_?;
            if (*(uint *)(lVar25 + 0x20) <= uStack_14) {
              uStack_14 = *(int *)(lVar25 + 0x20) + 1;
              uStack_15 = 0;
              pMVar26 = (this->klass->vtable).HandleModifierEffect.method;
              fVar21 = (float)(*(this->klass->vtable).HandleModifierEffect.methodPtr)
                                        (this,0xe,0,pMVar26);
              pcVar20 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar20 = (code *)swi(3);
                (*pcVar20)();
                return;
              }
              pcRam_? = pcVar20;
              fVar27 = (float)(*pcRam_?)();
              if (fVar27 * fVar21 != 0.0) {
                (*(this->klass->vtable).__unknown.methodPtr)
                          (this,fVar27 * fVar21,0,CONCAT71((int7)((ulonglong)pMVar26 >> 8),6),
                           (this->klass->vtable).__unknown.method);
              }
              pMVar26 = (this->klass->vtable).HandleModifierEffect.method;
              fVar21 = (float)(*(this->klass->vtable).HandleModifierEffect.methodPtr)
                                        (this,0x16,0,pMVar26);
              pcVar20 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar20 = (code *)swi(3);
                (*pcVar20)();
                return;
              }
              pcRam_? = pcVar20;
              fVar28 = (float)(*pcRam_?)();
              fVar27 = _UNK_?;
              if ((_UNK_? - (this->fields).poisonResist) * fVar28 * fVar21 != 0.0) {
                pIVar29 = (this->klass->vtable).__unknown.methodPtr;
                (*pIVar29)(this,pIVar29,0,CONCAT71((int7)((ulonglong)pMVar26 >> 8),6),
                          (this->klass->vtable).__unknown.method);
              }
              pMVar26 = (this->klass->vtable).HandleModifierEffect.method;
              fVar21 = (float)(*(this->klass->vtable).HandleModifierEffect.methodPtr)
                                        (this,0x17,0,pMVar26);
              pcVar20 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar20 = (code *)swi(3);
                (*pcVar20)();
                return;
              }
              pcRam_? = pcVar20;
              fVar28 = (float)(*pcRam_?)();
              fVar21 = (fVar27 - (this->fields).poisonResist) * fVar28 * fVar21;
              if (fVar21 != 0.0) {
                (*(this->klass->vtable).__unknown.methodPtr)
                          (this,fVar21,0,CONCAT71((int7)((ulonglong)pMVar26 >> 8),6),
                           (this->klass->vtable).__unknown.method);
              }
              fVar21 = (float)(*(this->klass->vtable).HandleModifierEffect.methodPtr)
                                        (this,0xf,0,
                                         (this->klass->vtable).HandleModifierEffect.method);
              pcVar20 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar20 = (code *)swi(3);
                (*pcVar20)();
                return;
              }
              pcRam_? = pcVar20;
              fVar27 = (float)(*pcRam_?)();
              if (fVar27 * fVar21 != 0.0) {
                (*(this->klass->vtable).__unknown_2.methodPtr)
                          (this,fVar27 * fVar21,0,(this->klass->vtable).__unknown_2.method);
              }
              fVar21 = (this->fields).healthRegenerationPerSecondSetting;
              pcVar20 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar20 = (code *)swi(3);
                (*pcVar20)();
                return;
              }
              pcRam_? = pcVar20;
              fVar27 = (float)(*pcRam_?)();
              fVar27 = fVar27 * fVar21;
              if (fVar27 != 0.0) {
                (*(this->klass->vtable).__unknown_2.methodPtr)
                          (this,fVar27,0,(this->klass->vtable).__unknown_2.method);
              }
              fVar21 = (this->fields).healthRegenerationPerSecondSetting;
              pcVar20 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar20 = (code *)swi(3);
                (*pcVar20)();
                return;
              }
              pcRam_? = pcVar20;
              fVar27 = (float)(*pcRam_?)();
              fVar27 = fVar27 * fVar21;
              if (fVar27 != 0.0) {
                (*(this->klass->vtable).__unknown_2.methodPtr)
                          (this,fVar27 * _UNK_?,0,(this->klass->vtable).__unknown_2.method);
              }
              fVar21 = (this->fields).shieldRegenerationPerSecondSetting;
              pcVar20 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar20 = (code *)swi(3);
                (*pcVar20)();
                return;
              }
              pcRam_? = pcVar20;
              fVar27 = (float)(*pcRam_?)();
              fVar27 = fVar27 * fVar21;
              if (fVar27 != 0.0) {
                (*(this->klass->vtable).RestoreShield.methodPtr)
                          (this,fVar27,(this->klass->vtable).RestoreShield.method);
              }
              return;
            }
            lVar30 = *(longlong *)(lVar25 + 0x18);
            lVar31 = (longlong)(int)uStack_14;
            uVar3 = uStack_14 + 1;
            if (lVar30 == 0) goto code_?;
            bVar8 = *(uint *)(lVar30 + 0x18) <= uStack_14;
            uStack_14 = uVar3;
            if (bVar8) goto code_?;
            lVar32 = lVar31 + 2;
          } while (*(int *)(lVar30 + (lVar31 + 2) * 0x10) < 0);
          actorNumber = *(int32_t *)(lVar30 + 8 + lVar32 * 0x10);
          fVar21 = *(float *)(lVar30 + 0xc + lVar32 * 0x10);
          if ((MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__MoveNext__
               ->klass->field_0x135 & 1) == 0) {
            FUN_?();
          }
          uStackX_18 = CONCAT44(fVar21,actorNumber);
          uStack_15 = uStackX_18;
          pcVar20 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar20 = (code *)FUN_?(), pcVar20 == (code *)0x0)) goto code_?;
          pcRam_? = pcVar20;
          fVar27 = (float)(*pcRam_?)();
          fVar21 = fVar21 * fVar27;
          if (fVar21 != 0.0) {
            pMVar22 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar22 == (MVNetworkGame *)0x0) goto code_?;
            pMVar23 = (pMVar22->fields).playerContainer;
            if (pMVar23 == (MVPlayerContainer *)0x0) goto code_?;
            pMVar24 = MVPlayerContainer::MVPlayerContainer_get_Item
                                (pMVar23,actorNumber,(MethodInfo *)0x0);
            (*(this->klass->vtable).__unknown.methodPtr)
                      (this,fVar21,pMVar24,CONCAT71((int7)((ulonglong)lVar30 >> 8),0x16),
                       (this->klass->vtable).__unknown.method);
          }
        }
        goto code_?;
      }
    }
  }
  FUN_?();
code_?:
  uVar19 = func_?(&UNK_?);
  FUN_?(uVar19,0);
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  uVar19 = func_?(&UNK_?);
  FUN_?(uVar19,0);
code_?:
  FUN_?();
code_?:
  FUN_?();
  uVar3 = uStack_14;
code_?:
  uStack_14 = uVar3;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void <Init>b__10_0(AvatarModifierPackage) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable__Init_b__10_0
               (MVInteractable *this,AvatarModifierPackage *modifier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AvatarModifierPackage->_1).field_0x1c == 0) {
    FUN_?();
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).RemoveModifier.methodPtr)
            (this,(ulonglong)(uint)modifier->avatarModifierPackageType,(ulonglong)(uint)modifier->id
             ,(this->klass->vtable).RemoveModifier.method);
  return;
}


/* MVInteractable() */

void Assembly-CSharp.dll::MVInteractable::MVInteractable__ctor
               (MVInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackages);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (AvatarModifierPackages *)FUN_?(TypeInfo__AvatarModifierPackages);
  AvatarModifierPackages::AvatarModifierPackages__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).modifierPackages = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).modifierPackages >> 0xc);
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
  bVar1 = cRam_? == '\0';
  (this->fields)._._.findWorldObjectParent = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

