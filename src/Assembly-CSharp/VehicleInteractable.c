
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_AddModifier
               (VehicleInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  uVar3 = (undefined2)((uint)in_stack_4 >> 0x10);
  uVar5 = (undefined2)((uint)in_stack_6 >> 0x10);
  if (type == AvatarModifierPackageType__Enum_Poison) {
    return;
  }
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackageType);
    func_?(&TypeInfo__AvatarModifierPackage);
    func_?(&TypeInfo__System__Byte);
    uVar5 = 0x10ee;
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    uVar3 = 0x10ee;
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                   );
    uVar1 = 0x10ee;
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  AVar7 = type;
  pVVar8 = this;
  pAVar9 = (this->fields)._.modifierPackages;
  bVar10 = 0;
  bVar11 = 0;
  bVar12 = (int)pAVar9 < 0;
  bVar13 = pAVar9 == (AvatarModifierPackages *)0x0;
  bVar14 = (POPCOUNT((uint)pAVar9 & 0xff) & 1U) == 0;
  if (!(bool)bVar13) {
    uVar5 = 0;
    uVar1 = 0x101e;
    action = (VehicleInteractable *)
             AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
                       (pAVar9,type,(MethodInfo *)0x0);
    uVar3 = (undefined2)((uint)pAVar9 >> 0x10);
    pMVar15 = (pVVar8->fields)._.runtimeDataModifiers;
    bVar10 = 0;
    bVar11 = 0;
    bVar12 = (int)pMVar15 < 0;
    bVar13 = pMVar15 == (MVRuntimeDataVariable *)0x0;
    bVar14 = (POPCOUNT((uint)pMVar15 & 0xff) & 1U) == 0;
    if (!(bool)bVar13) {
      this = (VehicleInteractable *)
             MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar15,(MethodInfo *)0x0);
      unaff_EBX = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)func_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (int)unaff_EBX < 0;
      bVar13 = unaff_EBX ==
               (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)0x0;
      bVar14 = (POPCOUNT((uint)unaff_EBX & 0xff) & 1U) == 0;
      if (!(bool)bVar13) {
        if (this == (VehicleInteractable *)0x0) {
          dictionary = (VehicleInteractable *)0x0;
code_?:
          uVar1 = 0x101e;
          pDVar16 = unaff_EBX;
          pMVar17 = 
          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions
          ::Regex+CachedCodeEntryKey,System::Object]::
          Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object___ctor_1
                    (unaff_EBX,
                     (IDictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                      *)dictionary,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                    );
          uVar3 = (undefined2)((uint)pDVar16 >> 0x10);
          uVar5 = (undefined2)((uint)pMVar17 >> 0x10);
          if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__AvatarModifierPackage);
          }
          pSVar18 = TypeInfo__AvatarModifierPackage->static_fields->
                   AvatarModifierPackageTypeLookupTable;
          bVar10 = 0;
          bVar11 = 0;
          bVar12 = (int)pSVar18 < 0;
          bVar13 = pSVar18 == (String__Array *)0x0;
          bVar14 = (POPCOUNT((uint)pSVar18 & 0xff) & 1U) == 0;
          if (!(bool)bVar13) {
            AVar19 = pSVar18->max_length;
            bVar10 = AVar7 < AVar19;
            bVar11 = SBORROW4(AVar7,AVar19);
            uVar20 = AVar7 - AVar19;
            bVar12 = (int)uVar20 < 0;
            bVar13 = uVar20 == 0;
            bVar14 = (POPCOUNT(uVar20 & 0xff) & 1U) == 0;
            if (!(bool)bVar10) goto code_?;
            type = (AvatarModifierPackageType__Enum)pSVar18->vector[AVar7];
            switch(action) {
            case (VehicleInteractable *)0x0:
              uVar5 = 0x101e;
              bVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,GUILoginHandler+PlanetData]::
                       Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                 ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                                  unaff_EBX,(Object *)type,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 );
              if (bVar21 != 0) {
                return;
              }
              pAVar9 = (pVVar8->fields)._.modifierPackages;
              bVar10 = 0;
              bVar11 = 0;
              bVar12 = (int)pAVar9 < 0;
              bVar13 = pAVar9 == (AvatarModifierPackages *)0x0;
              bVar14 = (POPCOUNT((uint)pAVar9 & 0xff) & 1U) == 0;
              if (!(bool)bVar13) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar9,AVar7,id,additionalModifers,(MethodInfo *)0x0);
                this = (VehicleInteractable *)((uint)this & 0xffffff);
                pOVar22 = (Object *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,(Object *)type,
                           pOVar22,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                pMVar15 = (pVVar8->fields)._.runtimeDataModifiers;
joined_?:
                bVar13 = pMVar15 == (MVRuntimeDataVariable *)0x0;
                bVar14 = (POPCOUNT((uint)pMVar15 & 0xff) & 1U) == 0;
                bVar12 = (int)pMVar15 < 0;
                bVar11 = 0;
                bVar10 = 0;
                if (!(bool)bVar13) {
                  MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                            (pMVar15,(Object *)unaff_EBX,(MethodInfo *)0x0);
code_?:
                  return;
                }
              }
              break;
            case (VehicleInteractable *)0x1:
              uVar5 = 0x101e;
              bVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,GUILoginHandler+PlanetData]::
                       Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                 ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                                  unaff_EBX,(Object *)type,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 );
              if (bVar21 == 0) {
                return;
              }
              pAVar9 = (pVVar8->fields)._.modifierPackages;
              bVar10 = 0;
              bVar11 = 0;
              bVar12 = (int)pAVar9 < 0;
              bVar13 = pAVar9 == (AvatarModifierPackages *)0x0;
              bVar14 = (POPCOUNT((uint)pAVar9 & 0xff) & 1U) == 0;
              if (!(bool)bVar13) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar9,AVar7,id,additionalModifers,(MethodInfo *)0x0);
                AVar7 = type;
                pMVar17 = (MethodInfo *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,
                                     (Object *)type,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                uVar23 = CONCAT44(TypeInfo__System__Byte,pMVar17);
                bVar10 = 0;
                bVar11 = 0;
                bVar12 = (int)pMVar17 < 0;
                bVar13 = pMVar17 == (MethodInfo *)0x0;
                bVar14 = (POPCOUNT((uint)pMVar17 & 0xff) & 1U) == 0;
                if (!(bool)bVar13) {
                  pIVar24 = (((Object__Class *)pMVar17->methodPointer)->_0).element_class;
                  pIVar25 = (TypeInfo__System__Byte->_0).element_class;
                  bVar10 = pIVar24 < pIVar25;
                  bVar11 = SBORROW4((int)pIVar24,(int)pIVar25);
                  uVar20 = (int)pIVar24 - (int)pIVar25;
                  bVar12 = (int)uVar20 < 0;
                  bVar13 = uVar20 == 0;
                  bVar14 = (POPCOUNT(uVar20 & 0xff) & 1U) == 0;
                  if (!(bool)bVar13) goto code_?;
                  additionalModifers = (AvatarModifierPackage_AvatarModifier__Array *)&UNK_?;
                  method = pMVar17;
                  pcVar26 = (char *)func_?();
                  this = (VehicleInteractable *)CONCAT13(*pcVar26 + '\x01',this._0_3_);
                  additionalModifers =
                       (AvatarModifierPackage_AvatarModifier__Array *)((int)&this + 3);
                  id = (int32_t)TypeInfo__System__Byte;
                  type = (AvatarModifierPackageType__Enum)&UNK_?;
                  pOVar22 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,(Object *)AVar7
                             ,pOVar22,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
code_?:
                  pMVar15 = (pVVar8->fields)._.runtimeDataModifiers;
                  goto joined_?;
                }
              }
              break;
            case (VehicleInteractable *)0x2:
              uVar5 = 0x101e;
              bVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,GUILoginHandler+PlanetData]::
                       Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                 ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                                  unaff_EBX,(Object *)type,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 );
              if (bVar21 != 0) {
                return;
              }
              pAVar9 = (pVVar8->fields)._.modifierPackages;
              bVar10 = 0;
              bVar11 = 0;
              bVar12 = (int)pAVar9 < 0;
              bVar13 = pAVar9 == (AvatarModifierPackages *)0x0;
              bVar14 = (POPCOUNT((uint)pAVar9 & 0xff) & 1U) == 0;
              if (!(bool)bVar13) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar9,AVar7,id,additionalModifers,(MethodInfo *)0x0);
                pAVar9 = (pVVar8->fields)._.modifierPackages;
                bVar10 = 0;
                bVar11 = 0;
                bVar12 = (int)pAVar9 < 0;
                bVar13 = pAVar9 == (AvatarModifierPackages *)0x0;
                bVar14 = (POPCOUNT((uint)pAVar9 & 0xff) & 1U) == 0;
                if (!(bool)bVar13) {
                  type = AvatarModifierPackageType__Enum_None;
                  this = action;
                  this_00 = (Enum *)AvatarModifierPackages::
                                    AvatarModifierPackages_GetPackageToActWith
                                              (pAVar9,AVar7,(ModifierActions__Enum)action,
                                               (MethodInfo *)0x0);
                  type = (AvatarModifierPackageType__Enum)
                         (pVVar8->klass->vtable).RemoveModifier.method;
                  this = (VehicleInteractable *)0xffffffff;
                  (*(pVVar8->klass->vtable).RemoveModifier.methodPtr)();
                  pSVar27 = mscorlib.dll::System::Enum::Enum_ToString(this_00,(MethodInfo *)0x0);
                  pSVar27 = mscorlib.dll::System::String::String_Concat_3
                                      (::StringLiteral__,pSVar27,(MethodInfo *)0x0);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Remove
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,
                             (Object *)pSVar27,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                            );
                  this = (VehicleInteractable *)((uint)this & 0xffffff);
                  in_stack_28 = (int)&this + 3;
                  in_stack_29 = TypeInfo__System__Byte;
                  in_stack_30 = &UNK_?;
                  pOVar22 = (Object *)func_?();
                  pMVar17 = 
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,(Object *)type,
                             pOVar22,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  uVar1 = (undefined2)((uint)pMVar17 >> 0x10);
                  goto code_?;
                }
              }
              break;
            case (VehicleInteractable *)0x3:
              pAVar9 = (pVVar8->fields)._.modifierPackages;
              bVar10 = 0;
              bVar11 = 0;
              bVar12 = (int)pAVar9 < 0;
              bVar13 = pAVar9 == (AvatarModifierPackages *)0x0;
              bVar14 = (POPCOUNT((uint)pAVar9 & 0xff) & 1U) == 0;
              if (!(bool)bVar13) {
                AVar7 = AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                                   (pAVar9,AVar7,(ModifierActions__Enum)action,(MethodInfo *)0x0);
                (*(pVVar8->klass->vtable).RemoveModifier.methodPtr)
                          (pVVar8,AVar7,id,(pVVar8->klass->vtable).RemoveModifier.method);
                return;
              }
              break;
            default:
              goto code_?;
            }
          }
        }
        else {
          type = (AvatarModifierPackageType__Enum)this->klass;
          bVar13 = (((VehicleInteractable__Class *)type)->_1).typeHierarchyDepth;
          bVar12 = (
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).typeHierarchyDepth;
          bVar10 = bVar13 < bVar12;
          bVar11 = SBORROW1(bVar13,bVar12);
          cVar31 = bVar13 - bVar12;
          bVar12 = cVar31 < '\0';
          bVar13 = cVar31 == '\0';
          bVar14 = POPCOUNT(cVar31);
          if (!(bool)bVar10) {
            pDVar32 = (Dictionary_2_System_Object_System_Object___Class *)
                      (((VehicleInteractable__Class *)type)->_1).typeHierarchy
                      [(
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       ->_1).typeHierarchyDepth - 1];
            bVar10 = pDVar32 < 
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
            ;
            bVar11 = SBORROW4((int)pDVar32,
                              (int)
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
            uVar20 = (int)pDVar32 -
                     (int)
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
            ;
            bVar12 = (int)uVar20 < 0;
            bVar14 = POPCOUNT(uVar20 & 0xff);
            bVar13 = false;
            dictionary = this;
            if (uVar20 == 0) goto code_?;
          }
          bVar14 = (bVar14 & 1) == 0;
          uVar3 = 0x101e;
          pDVar32 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          func_?(this,
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
          uVar5 = (undefined2)((uint)pDVar32 >> 0x10);
code_?:
          func_?();
        }
      }
    }
  }
  uVar23 = func_?();
code_?:
  uVar23 = func_?(uVar23);
  bVar33 = (byte)((ulonglong)uVar23 >> 0x28);
  bVar34 = bVar33 + extraout_CL;
  bVar35 = CARRY1(bVar33,extraout_CL) || CARRY1(bVar34,bVar10);
  cVar31 = bVar34 + bVar10;
  pbVar36 = (byte *)(CONCAT22((short)((ulonglong)uVar23 >> 0x30),
                             CONCAT11(cVar31,(char)((ulonglong)uVar23 >> 0x20))) + -99);
  bVar37 = *pbVar36;
  bVar38 = (byte)((uint)unaff_EBX >> 8);
  bVar39 = *pbVar36 + bVar38;
  *pbVar36 = bVar39 + bVar35;
  pcVar26 = (char *)((int)uVar23 + -0x62);
  *pcVar26 = *pcVar26 + (char)uVar23 + (CARRY1(bVar37,bVar38) || CARRY1(bVar39,bVar35));
  pcVar40 = (code *)swi(3);
  (*pcVar40)(CONCAT22(uVar1,in_DS),CONCAT22(uVar3,in_DS),
             (uint)(in_NT & 1) * 0x4000 |
             (uint)(SCARRY1(bVar33,extraout_CL) != SCARRY1(bVar34,bVar10)) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)(cVar31 < '\0') * 0x80 |
             (uint)(cVar31 == '\0') * 0x40 | (uint)(in_AF & 1) * 0x10 |
             (uint)((POPCOUNT(cVar31) & 1U) == 0) * 4 | (uint)bVar35 | (uint)(in_ID & 1) * 0x200000
             | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
             (uint)(in_AC & 1) * 0x40000,CONCAT22(uVar5,in_DS),
             (uint)(in_NT & 1) * 0x4000 | (uint)(bVar11 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
             (uint)(in_TF & 1) * 0x100 | (uint)(bVar12 & 1) * 0x80 | (uint)(bVar13 & 1) * 0x40 |
             (uint)(in_AF & 1) * 0x10 | (uint)(bVar14 & 1) * 4 | (uint)(bVar10 & 1) |
             (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
             (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000);
  return;
}


/* Void HandleMoveHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_HandleMoveHit
               (VehicleInteractable *this,MVControllerColliderHit moveHit,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  if (moveHit.hit.interactionFlags._4_4_ != 0) {
    pMStack_1 = (this->klass->vtable).AddModifier.method;
    uStack_2 = 0;
    uStack_3 = 0xffffffff;
    (*(this->klass->vtable).AddModifier.methodPtr)
              (this,*(undefined4 *)(moveHit.hit.interactionFlags._4_4_ + 0x30));
    return;
  }
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
      fVar3 = (float10)(*(pMVar2->klass->vtable).get_Value.methodPtr)(pMVar2);
      (*(pMVar2->klass->vtable).set_Value.methodPtr)(pMVar2,(float)fVar3 - amount);
      pMVar2 = (this->fields)._.health;
      if (pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
        (*(pMVar2->klass->vtable).get_Value.methodPtr)(pMVar2);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TakeDamageOverTime(AvatarModifierPackageType, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_TakeDamageOverTime
               (VehicleInteractable *this,AvatarModifierPackageType__Enum type,
               MVPlayer *damageDealer,PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  if (damageDealer != (MVPlayer *)0x0) {
    pMStack_1 = (this->klass->vtable).AddModifier.method;
    aiStack_2[1] = 0;
    aiStack_2[0] = (damageDealer->fields)._ActorNr_k__BackingField;
    (*(this->klass->vtable).AddModifier.methodPtr)(this,type);
    return;
  }
  uVar3 = func_?(aiStack_2);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* VehicleInteractable() */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable__ctor
               (VehicleInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackages);
    cRam_? = '\x01';
  }
  this_00 = (AvatarModifierPackages *)func_?(TypeInfo__AvatarModifierPackages);
  if (this_00 != (AvatarModifierPackages *)0x0) {
    AvatarModifierPackages::AvatarModifierPackages__ctor(this_00,(MethodInfo *)0x0);
    (this->fields)._.modifierPackages = this_00;
    func_?(&(this->fields)._.modifierPackages,this_00);
    MVComponent::MVComponent__ctor((MVComponent *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

