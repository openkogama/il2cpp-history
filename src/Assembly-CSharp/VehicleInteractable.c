
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_AddModifier
               (VehicleInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  if (type == AvatarModifierPackageType__Enum_Poison) {
    return;
  }
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackageType);
    func_?(&TypeInfo__AvatarModifierPackage);
    func_?(&TypeInfo__System__Byte);
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
  AVar1 = type;
  pVVar2 = this;
  pAVar3 = (this->fields)._.modifierPackages;
  pVVar4 = pVVar2;
  if (pAVar3 != (AvatarModifierPackages *)0x0) {
    MVar5 = AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
                      (pAVar3,type,(MethodInfo *)0x0);
    pMVar6 = (pVVar2->fields)._.runtimeDataModifiers;
    if (pMVar6 != (MVRuntimeDataVariable *)0x0) {
      dictionary = (IDictionary_2_System_Object_System_Object_ *)
                   MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar6,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      pVVar4 = this;
      if (dictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) {
        dictionary = (IDictionary_2_System_Object_System_Object_ *)0x0;
        pVVar4 = pVVar2;
code_?:
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object___ctor_1
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,dictionary,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                  );
        if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__AvatarModifierPackage);
        }
        pSVar7 = TypeInfo__AvatarModifierPackage->static_fields->
                 AvatarModifierPackageTypeLookupTable;
        if (pSVar7 != (String__Array *)0x0) {
          if (pSVar7->max_length <= AVar1) goto code_?;
          type = (AvatarModifierPackageType__Enum)pSVar7->vector[AVar1];
          switch(MVar5) {
          case ModifierActions__Enum_Add:
            if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                (this_00,(Object *)type,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar8 != 0) {
                return;
              }
              pAVar3 = (pVVar4->fields)._.modifierPackages;
              if (pAVar3 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar3,AVar1,id,additionalModifers,(MethodInfo *)0x0);
                this = (VehicleInteractable *)((uint)this & 0xffffff);
                pOVar9 = (Object *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)type,
                           pOVar9,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                pMVar6 = (pVVar4->fields)._.runtimeDataModifiers;
joined_?:
                if (pMVar6 != (MVRuntimeDataVariable *)0x0) {
                  MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                            (pMVar6,(Object *)this_00,(MethodInfo *)0x0);
code_?:
                  return;
                }
              }
            }
            break;
          case ModifierActions__Enum_Renew:
            if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                (this_00,(Object *)type,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar8 == 0) {
                return;
              }
              pAVar3 = (pVVar4->fields)._.modifierPackages;
              if (pAVar3 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar3,AVar1,id,additionalModifers,(MethodInfo *)0x0);
                AVar1 = type;
                TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                  (this_00,(Object *)type,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
                uVar11 = CONCAT44(TypeInfo__System__Byte,TVar10.m_Index);
                if (TVar10.m_Index != 0) {
                  if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) !=
                      (TypeInfo__System__Byte->_0).element_class) goto code_?;
                  type = (AvatarModifierPackageType__Enum)&UNK_?;
                  id = TVar10.m_Index;
                  func_?();
                  type = (int)&this + AvatarModifierPackageType__Enum_Sticky;
                  this = (VehicleInteractable *)TypeInfo__System__Byte;
                  pOVar9 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)AVar1,
                             pOVar9,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
code_?:
                  pMVar6 = (pVVar4->fields)._.runtimeDataModifiers;
                  goto joined_?;
                }
              }
            }
            break;
          case ModifierActions__Enum_Replace:
            if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                (this_00,(Object *)type,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar8 != 0) {
                return;
              }
              pAVar3 = (pVVar4->fields)._.modifierPackages;
              if (pAVar3 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar3,AVar1,id,additionalModifers,(MethodInfo *)0x0);
                pAVar3 = (pVVar4->fields)._.modifierPackages;
                if (pAVar3 != (AvatarModifierPackages *)0x0) {
                  this_01 = (Enum *)AvatarModifierPackages::
                                    AvatarModifierPackages_GetPackageToActWith
                                              (pAVar3,AVar1,ModifierActions__Enum_Replace,
                                               (MethodInfo *)0x0);
                  (*(code *)(pVVar4->klass->vtable).RemoveModifier.method)();
                  pSVar12 = mscorlib.dll::System::Enum::Enum_ToString(this_01,(MethodInfo *)0x0);
                  pSVar12 = mscorlib.dll::System::String::String_Concat_3
                                      (::StringLiteral__,pSVar12,(MethodInfo *)0x0);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Remove
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pSVar12,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                            );
                  this = (VehicleInteractable *)((uint)this & 0xffffff);
                  in_stack_13 = (int)&this + 3;
                  in_stack_14 = TypeInfo__System__Byte;
                  in_stack_15 = &UNK_?;
                  pOVar9 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)type,
                             pOVar9,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  goto code_?;
                }
              }
            }
            break;
          case ModifierActions__Enum_CancelOut:
            pAVar3 = (pVVar4->fields)._.modifierPackages;
            if (pAVar3 != (AvatarModifierPackages *)0x0) {
              AVar1 = AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                                 (pAVar3,AVar1,ModifierActions__Enum_CancelOut,(MethodInfo *)0x0);
              (*(code *)(pVVar4->klass->vtable).RemoveModifier.method)
                        (pVVar4,AVar1,id,(pVVar4->klass->vtable).HasModifierEffect.methodPtr);
              return;
            }
            break;
          default:
            goto code_?;
          }
        }
      }
      else {
        bVar16 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if ((bVar16 <= (dictionary->klass->_1).naturalAligment) &&
           (AVar1 = type,
           (Dictionary_2_System_Object_System_Object___Class *)
           (dictionary->klass->_1).typeHierarchy[bVar16 - 1] ==
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
        func_?(dictionary,
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
code_?:
        func_?();
      }
    }
  }
  uVar11 = func_?();
code_?:
  uVar11 = func_?(uVar11);
  pbVar17 = (byte *)uVar11;
  bVar18 = (char)((ulonglong)uVar11 >> 0x20) + 1;
  bVar16 = *pbVar17;
  *pbVar17 = *pbVar17 - bVar18;
  pcVar19 = (char *)*(undefined6 *)((int)((ulonglong)uVar11 >> 0x20) + 0x29);
  pcVar19[0x43] = pcVar19[0x43] + (char)((uint)pVVar4 >> 8) + (bVar16 < bVar18);
  *pcVar19 = *pcVar19 - bVar18;
  *pcVar19 = *pcVar19 - bVar18;
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void HandleMoveHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_HandleMoveHit
               (VehicleInteractable *this,MVControllerColliderHit moveHit,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  if (moveHit.hit.interactionFlags._4_4_ != 0) {
    pIStack_1 = (this->klass->vtable).HasModifier.methodPtr;
    uStack_2 = 0;
    uStack_3 = 0xffffffff;
    (*(code *)(this->klass->vtable).AddModifier.method)
              (this,*(undefined4 *)(moveHit.hit.interactionFlags._4_4_ + 0x30));
    return;
  }
  uVar4 = func_?(&uStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    fVar3 = (float10)(*(code *)(pMVar2->klass->vtable).get_Value.method)
                               (pMVar2,(pMVar2->klass->vtable).set_Value.methodPtr);
    (*(code *)(pMVar2->klass->vtable).set_Value.method)
              (pMVar2,(float)fVar3 + amount,pMVar2->klass[1]._0.image);
    if ((this->fields)._.maxHealth == (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
      return;
    }
    pMVar2 = (this->fields)._.health;
    if (pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      fVar3 = (float10)(*(code *)(pMVar2->klass->vtable).get_Value.method)
                                 (pMVar2,(pMVar2->klass->vtable).set_Value.methodPtr);
      pMVar4 = (this->fields)._.maxHealth;
      if (pMVar4 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) {
        iVar5 = (*(code *)(pMVar4->klass->vtable).get_Value.method)
                          (pMVar4,(pMVar4->klass->vtable).set_Value.methodPtr);
        if ((float)fVar3 <= (float)iVar5) {
          return;
        }
        pMVar4 = (this->fields)._.maxHealth;
        pMVar2 = (this->fields)._.health;
        if ((pMVar4 != (MVRuntimeDataVariable_1_System_Int32_ *)0x0) &&
           (iVar5 = (*(code *)(pMVar4->klass->vtable).get_Value.method)
                              (pMVar4,(pMVar4->klass->vtable).set_Value.methodPtr),
           pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0)) {
          (*(code *)(pMVar2->klass->vtable).set_Value.method)
                    (pMVar2,(float)iVar5,pMVar2->klass[1]._0.image);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HealOverTime(AvatarModifierPackageType, MVPlayer) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_HealOverTime
               (VehicleInteractable *this,AvatarModifierPackageType__Enum type,MVPlayer *healer,
               MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  if (healer != (MVPlayer *)0x0) {
    pIStack_1 = (this->klass->vtable).HasModifier.methodPtr;
    aiStack_2[1] = 0;
    aiStack_2[0] = (healer->fields)._ActorNr_k__BackingField;
    (*(code *)(this->klass->vtable).AddModifier.method)(this,type);
    return;
  }
  uVar3 = func_?(aiStack_2);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    (*(code *)(pMVar2->klass->vtable).get_Value.method)
              (pMVar2,(pMVar2->klass->vtable).set_Value.methodPtr);
    pMVar2 = (this->fields)._.health;
    if (pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
      fVar3 = (float10)(*(code *)(pMVar2->klass->vtable).get_Value.method)(pMVar2);
      (*(code *)(pMVar2->klass->vtable).set_Value.method)(pMVar2,(float)fVar3 - amount);
      pMVar2 = (this->fields)._.health;
      if (pMVar2 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
        (*(code *)(pMVar2->klass->vtable).get_Value.method)(pMVar2);
        return;
      }
    }
  }
  func_?();
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
  AvatarModifierPackages::AvatarModifierPackages__ctor(this_00,(MethodInfo *)0x0);
  ppAVar1 = &(this->fields)._.modifierPackages;
  *ppAVar1 = this_00;
  func_?(ppAVar1,this_00);
  (this->fields)._._._.findWorldObjectParent = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

