
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_AddModifier
               (VehicleInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  if (type == AvatarModifierPackageType__Enum_Poison) {
    return;
  }
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
  pAVar1 = (this->fields)._.modifierPackages;
  if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
  MVar2 = AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
                    (pAVar1,type,(MethodInfo *)0x0);
  pMVar3 = (this->fields)._.runtimeDataModifiers;
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
    pAVar1 = (this->fields)._.modifierPackages;
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
        pAVar1 = (this->fields)._.modifierPackages;
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
      pAVar1 = (this->fields)._.modifierPackages;
      if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
      AvatarModifierPackages::AvatarModifierPackages_AddModifier
                (pAVar1,type,id,additionalModifers,(MethodInfo *)0x0);
      pAVar1 = (this->fields)._.modifierPackages;
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
    pAVar1 = (this->fields)._.modifierPackages;
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
  pMVar3 = (this->fields)._.runtimeDataModifiers;
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


/* Void HandleMoveHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_HandleMoveHit
               (VehicleInteractable *this,MVControllerColliderHit *moveHit,MethodInfo *method)

{
  if (moveHit->material != (MVMaterial *)0x0) {
    (*(this->klass->vtable).AddModifier.methodPtr)
              (this,(ulonglong)
                    (uint)(moveHit->material->fields)._ModifierPackageType_k__BackingField,
               0xffffffff,0,(this->klass->vtable).AddModifier.method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Heal(Single, MVPlayer) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_Heal
               (VehicleInteractable *this,float amount,MVPlayer *healer,MethodInfo *method)

{
  bVar1 = MVInteractable::MVInteractable_IgnoreHealing
                    ((MVInteractable *)this,healer,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  pMVar2 = (this->fields)._.health;
  if (pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    (*(pMVar2->klass->vtable).get_Value.methodPtr)(pMVar2,(pMVar2->klass->vtable).get_Value.method);
    (*(pMVar2->klass->vtable).set_Value.methodPtr)(pMVar2);
    if ((this->fields)._.maxHealth == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
      return;
    }
    pMVar2 = (this->fields)._.health;
    if (pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      fVar3 = (float)(*(pMVar2->klass->vtable).get_Value.methodPtr)
                               (pMVar2,(pMVar2->klass->vtable).get_Value.method);
      pMVar4 = (this->fields)._.maxHealth;
      if (pMVar4 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
        iVar5 = (*(pMVar4->klass->vtable).get_Value.methodPtr)
                          (pMVar4,(pMVar4->klass->vtable).get_Value.method);
        if (fVar3 <= (float)iVar5) {
          return;
        }
        pMVar4 = (this->fields)._.maxHealth;
        pMVar2 = (this->fields)._.health;
        if ((pMVar4 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) &&
           ((*(pMVar4->klass->vtable).get_Value.methodPtr)
                      (pMVar4,(pMVar4->klass->vtable).get_Value.method),
           pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0)) {
          (*(pMVar2->klass->vtable).set_Value.methodPtr)(pMVar2);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HealOverTime(AvatarModifierPackageType, MVPlayer) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_HealOverTime
               (VehicleInteractable *this,AvatarModifierPackageType__Enum type,MVPlayer *healer,
               MethodInfo *method)

{
  if (healer != (MVPlayer *)0x0) {
    (*(this->klass->vtable).AddModifier.methodPtr)
              (this,type,(ulonglong)(uint)(healer->fields)._ActorNr_k__BackingField,0,
               (this->klass->vtable).AddModifier.method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void TakeDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_TakeDamage
               (VehicleInteractable *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  bVar1 = MVInteractable::MVInteractable_IgnoreDamage
                    ((MVInteractable *)this,damageDealer,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  pMVar2 = (this->fields)._.health;
  if (pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
    (*(pMVar2->klass->vtable).get_Value.methodPtr)(pMVar2,(pMVar2->klass->vtable).get_Value.method);
    pMVar2 = (this->fields)._.health;
    if (pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      fVar3 = (float)(*(pMVar2->klass->vtable).get_Value.methodPtr)
                               (pMVar2,(pMVar2->klass->vtable).get_Value.method);
      (*(pMVar2->klass->vtable).set_Value.methodPtr)
                (pMVar2,fVar3 - amount,(pMVar2->klass->vtable).set_Value.method);
      pMVar2 = (this->fields)._.health;
      if (pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
        (*(pMVar2->klass->vtable).get_Value.methodPtr)
                  (pMVar2,(pMVar2->klass->vtable).get_Value.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TakeDamageOverTime(AvatarModifierPackageType, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_TakeDamageOverTime
               (VehicleInteractable *this,AvatarModifierPackageType__Enum type,
               MVPlayer *damageDealer,PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (damageDealer != (MVPlayer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).AddModifier.methodPtr)
              (this,type,(ulonglong)(uint)(damageDealer->fields)._ActorNr_k__BackingField,0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* VehicleInteractable() */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable__ctor
               (VehicleInteractable *this,MethodInfo *method)

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
  (this->fields)._.modifierPackages = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.modifierPackages >> 0xc);
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
  (this->fields)._._._.findWorldObjectParent = 1;
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

