
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_AddModifier
               (VehicleInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (type == AvatarModifierPackageType__Enum_Poison) {
    return;
  }
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackageType);
    func_?(&TypeInfo__AvatarModifierPackage);
    func_?(&TypeInfo__System__Byte);
    uVar1 = 0x10ee;
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                   );
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
  AVar3 = type;
  pVVar4 = this;
  pAVar5 = (this->fields)._.modifierPackages;
  bVar6 = 0;
  if (pAVar5 != (AvatarModifierPackages *)0x0) {
    uVar1 = 0;
    action = (VehicleInteractable *)
             AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
                       (pAVar5,type,(MethodInfo *)0x0);
    pMVar7 = (pVVar4->fields)._.runtimeDataModifiers;
    bVar6 = 0;
    unaff_ESI = (byte *)AVar3;
    if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
      this = (VehicleInteractable *)
             MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar7,(MethodInfo *)0x0);
      unaff_EBX = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)func_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
      bVar6 = 0;
      if (unaff_EBX !=
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) {
        if (this == (VehicleInteractable *)0x0) {
          dictionary = (VehicleInteractable *)0x0;
code_?:
          pMVar8 = 
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
          uVar1 = (undefined2)((uint)pMVar8 >> 0x10);
          if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__AvatarModifierPackage);
          }
          pSVar9 = TypeInfo__AvatarModifierPackage->static_fields->
                   AvatarModifierPackageTypeLookupTable;
          bVar6 = 0;
          if (pSVar9 != (String__Array *)0x0) {
            bVar6 = AVar3 < pSVar9->max_length;
            if (!(bool)bVar6) goto code_?;
            type = (AvatarModifierPackageType__Enum)pSVar9->vector[AVar3];
            switch(action) {
            case (VehicleInteractable *)0x0:
              uVar1 = 0x101e;
              bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,GUILoginHandler+PlanetData]::
                      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)unaff_EBX
                                 ,(Object *)type,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar10 != 0) {
                return;
              }
              pAVar5 = (pVVar4->fields)._.modifierPackages;
              bVar6 = 0;
              if (pAVar5 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar5,AVar3,id,additionalModifers,(MethodInfo *)0x0);
                this = (VehicleInteractable *)((uint)this & 0xffffff);
                pOVar11 = (Object *)func_?();
                unaff_ESI = (byte *)type;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,(Object *)type,
                           pOVar11,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                pMVar7 = (pVVar4->fields)._.runtimeDataModifiers;
joined_?:
                bVar6 = 0;
                if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
                  MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                            (pMVar7,(Object *)unaff_EBX,(MethodInfo *)0x0);
code_?:
                  return;
                }
              }
              break;
            case (VehicleInteractable *)0x1:
              uVar1 = 0x101e;
              bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,GUILoginHandler+PlanetData]::
                      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)unaff_EBX
                                 ,(Object *)type,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar10 == 0) {
                return;
              }
              pAVar5 = (pVVar4->fields)._.modifierPackages;
              bVar6 = 0;
              if (pAVar5 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar5,AVar3,id,additionalModifers,(MethodInfo *)0x0);
                unaff_ESI = (byte *)type;
                pMVar8 = (MethodInfo *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,
                                     (Object *)type,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                uVar12 = CONCAT44(TypeInfo__System__Byte,pMVar8);
                bVar6 = 0;
                if (pMVar8 != (MethodInfo *)0x0) {
                  pIVar13 = (((Object__Class *)pMVar8->methodPointer)->_0).element_class;
                  pIVar14 = (TypeInfo__System__Byte->_0).element_class;
                  bVar6 = pIVar13 < pIVar14;
                  if (pIVar13 != pIVar14) goto code_?;
                  additionalModifers = (AvatarModifierPackage_AvatarModifier__Array *)&UNK_?;
                  method = pMVar8;
                  pcVar15 = (char *)func_?();
                  this = (VehicleInteractable *)CONCAT13(*pcVar15 + '\x01',this._0_3_);
                  additionalModifers =
                       (AvatarModifierPackage_AvatarModifier__Array *)((int)&this + 3);
                  id = (int32_t)TypeInfo__System__Byte;
                  type = (AvatarModifierPackageType__Enum)&UNK_?;
                  pOVar11 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,
                             (Object *)unaff_ESI,pOVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
code_?:
                  pMVar7 = (pVVar4->fields)._.runtimeDataModifiers;
                  goto joined_?;
                }
              }
              break;
            case (VehicleInteractable *)0x2:
              uVar1 = 0x101e;
              bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,GUILoginHandler+PlanetData]::
                      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)unaff_EBX
                                 ,(Object *)type,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar10 != 0) {
                return;
              }
              pAVar5 = (pVVar4->fields)._.modifierPackages;
              bVar6 = 0;
              if (pAVar5 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar5,AVar3,id,additionalModifers,(MethodInfo *)0x0);
                pAVar5 = (pVVar4->fields)._.modifierPackages;
                bVar6 = 0;
                if (pAVar5 != (AvatarModifierPackages *)0x0) {
                  type = AvatarModifierPackageType__Enum_None;
                  this = action;
                  this_00 = (Enum *)AvatarModifierPackages::
                                    AvatarModifierPackages_GetPackageToActWith
                                              (pAVar5,AVar3,(ModifierActions__Enum)action,
                                               (MethodInfo *)0x0);
                  type = (AvatarModifierPackageType__Enum)
                         (pVVar4->klass->vtable).RemoveModifier.method;
                  this = (VehicleInteractable *)0xffffffff;
                  (*(pVVar4->klass->vtable).RemoveModifier.methodPtr)();
                  pSVar16 = mscorlib.dll::System::Enum::Enum_ToString(this_00,(MethodInfo *)0x0);
                  pSVar16 = mscorlib.dll::System::String::String_Concat_3
                                      (::StringLiteral__,pSVar16,(MethodInfo *)0x0);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Remove
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,
                             (Object *)pSVar16,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                            );
                  this = (VehicleInteractable *)((uint)this & 0xffffff);
                  in_stack_17 = (int)&this + 3;
                  in_stack_18 = TypeInfo__System__Byte;
                  in_stack_19 = &UNK_?;
                  pOVar11 = (Object *)func_?();
                  unaff_ESI = (byte *)type;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EBX,(Object *)type,
                             pOVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  goto code_?;
                }
              }
              break;
            case (VehicleInteractable *)0x3:
              pAVar5 = (pVVar4->fields)._.modifierPackages;
              bVar6 = 0;
              if (pAVar5 != (AvatarModifierPackages *)0x0) {
                AVar3 = AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                                   (pAVar5,AVar3,(ModifierActions__Enum)action,(MethodInfo *)0x0);
                (*(pVVar4->klass->vtable).RemoveModifier.methodPtr)
                          (pVVar4,AVar3,id,(pVVar4->klass->vtable).RemoveModifier.method);
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
          bVar6 = (((VehicleInteractable__Class *)type)->_1).typeHierarchyDepth <
                   (
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).typeHierarchyDepth;
          if ((!(bool)bVar6) &&
             (pDVar20 = (Dictionary_2_System_Object_System_Object___Class *)
                        (((VehicleInteractable__Class *)type)->_1).typeHierarchy
                        [(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         ->_1).typeHierarchyDepth - 1],
             bVar6 = pDVar20 < 
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
             , dictionary = this,
             pDVar20 ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          pDVar20 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          func_?(this,
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
          uVar1 = (undefined2)((uint)pDVar20 >> 0x10);
code_?:
          func_?();
        }
      }
    }
  }
  uVar12 = func_?();
code_?:
  uVar21 = 0x101e;
  iVar22 = func_?(uVar12);
  bVar23 = *unaff_ESI + (byte)unaff_EBX;
  bVar24 = CARRY1(*unaff_ESI,(byte)unaff_EBX) || CARRY1(bVar23,bVar6);
  *unaff_ESI = bVar23 + bVar6;
  *(char *)(iVar22 + -0x33efe164) =
       *(char *)(iVar22 + -0x33efe164) + extraout_DL + extraout_CL + bVar24 +
       (CARRY1(extraout_DL,extraout_CL) || CARRY1(extraout_DL + extraout_CL,bVar24));
  pcVar25 = (code *)swi(3);
  (*pcVar25)(CONCAT22(uVar1,in_DS),CONCAT22(uVar21,in_DS));
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

