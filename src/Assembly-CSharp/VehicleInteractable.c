
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_AddModifier
               (VehicleInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  pVVar1 = this;
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
  AVar2 = type;
  pAVar3 = (this->fields)._.modifierPackages;
  if (pAVar3 != (AvatarModifierPackages *)0x0) {
    action = AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
                       (pAVar3,type,(MethodInfo *)0x0);
    pMVar4 = (this->fields)._.runtimeDataModifiers;
    unaff_ESI = (VehicleInteractable *)AVar2;
    if (pMVar4 != (MVRuntimeDataVariable *)0x0) {
      dictionary = (IDictionary_2_System_Object_System_Object_ *)
                   MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar4,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      if ((dictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) ||
         (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment <= (dictionary->klass->_1).naturalAligment &&
          (unaff_ESI = (VehicleInteractable *)type,
          (Dictionary_2_System_Object_System_Object___Class *)
          (dictionary->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object___ctor_1
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,dictionary,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                  );
        if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__AvatarModifierPackage);
        }
        pSVar5 = TypeInfo__AvatarModifierPackage->static_fields->
                 AvatarModifierPackageTypeLookupTable;
        if (pSVar5 != (String__Array *)0x0) {
          if ((VehicleInteractable *)pSVar5->max_length <= unaff_ESI) goto code_?;
          key = (VehicleInteractable *)pSVar5->vector[(int)unaff_ESI];
          switch(action) {
          case ModifierActions__Enum_Add:
            if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                 (this_00,(Object *)key,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 );
              if (bVar6 != 0) {
                return;
              }
              pAVar3 = (this->fields)._.modifierPackages;
              if (pAVar3 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar3,(AvatarModifierPackageType__Enum)unaff_ESI,id,additionalModifers,
                           (MethodInfo *)0x0);
                type = type & 0xffffff;
                pOVar7 = (Object *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)key,
                           pOVar7,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                pMVar4 = (this->fields)._.runtimeDataModifiers;
joined_?:
                unaff_ESI = key;
                if (pMVar4 != (MVRuntimeDataVariable *)0x0) {
                  MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                            (pMVar4,(Object *)this_00,(MethodInfo *)0x0);
code_?:
                  return;
                }
              }
            }
            break;
          case ModifierActions__Enum_Renew:
            if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                 (this_00,(Object *)key,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 );
              if (bVar6 == 0) {
                return;
              }
              pAVar3 = (this->fields)._.modifierPackages;
              if (pAVar3 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar3,(AvatarModifierPackageType__Enum)unaff_ESI,id,additionalModifers,
                           (MethodInfo *)0x0);
                TVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   (this_00,(Object *)key,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                uVar9 = CONCAT44(TypeInfo__System__Byte,TVar8.m_Index);
                unaff_ESI = key;
                if (TVar8.m_Index != 0) {
                  if (*(Il2CppClass **)(*(int *)TVar8.m_Index + 0x20) !=
                      (TypeInfo__System__Byte->_0).element_class) goto code_?;
                  additionalModifers = (AvatarModifierPackage_AvatarModifier__Array *)&UNK_?;
                  method = (MethodInfo *)TVar8;
                  func_?();
                  additionalModifers =
                       (AvatarModifierPackage_AvatarModifier__Array *)((int)&type + 3);
                  id = (int32_t)TypeInfo__System__Byte;
                  type = (AvatarModifierPackageType__Enum)&UNK_?;
                  pOVar7 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)key,
                             pOVar7,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
code_?:
                  pMVar4 = (pVVar1->fields)._.runtimeDataModifiers;
                  goto joined_?;
                }
              }
            }
            break;
          case ModifierActions__Enum_Replace:
            if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                 (this_00,(Object *)key,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 );
              if (bVar6 != 0) {
                return;
              }
              pAVar3 = (this->fields)._.modifierPackages;
              if (pAVar3 != (AvatarModifierPackages *)0x0) {
                AvatarModifierPackages::AvatarModifierPackages_AddModifier
                          (pAVar3,(AvatarModifierPackageType__Enum)unaff_ESI,id,additionalModifers,
                           (MethodInfo *)0x0);
                pAVar3 = (this->fields)._.modifierPackages;
                if (pAVar3 != (AvatarModifierPackages *)0x0) {
                  type = AvatarModifierPackageType__Enum_None;
                  this_01 = (Enum *)AvatarModifierPackages::
                                    AvatarModifierPackages_GetPackageToActWith
                                              (pAVar3,(AvatarModifierPackageType__Enum)unaff_ESI,
                                               action,(MethodInfo *)0x0);
                  ppVVar10 = &this->klass;
                  type = (AvatarModifierPackageType__Enum)
                         ((*ppVVar10)->vtable).HasModifierEffect.methodPtr;
                  this = (VehicleInteractable *)0xffffffff;
                  (*(code *)((*ppVVar10)->vtable).RemoveModifier.method)();
                  pSVar11 = mscorlib.dll::System::Enum::Enum_ToString(this_01,(MethodInfo *)0x0);
                  pSVar11 = mscorlib.dll::System::String::String_Concat_3
                                      (::StringLiteral__,pSVar11,(MethodInfo *)0x0);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Remove
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pSVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                            );
                  type = type & 0xffffff;
                  in_stack_12 = (byte *)((int)&type + 3);
                  in_stack_13 = TypeInfo__System__Byte;
                  in_stack_14 = &UNK_?;
                  pOVar7 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,
                             (Object *)0xffffffff,pOVar7,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  key = this;
                  goto code_?;
                }
              }
            }
            break;
          case ModifierActions__Enum_CancelOut:
            pAVar3 = (this->fields)._.modifierPackages;
            if (pAVar3 != (AvatarModifierPackages *)0x0) {
              AVar2 = AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                                 (pAVar3,(AvatarModifierPackageType__Enum)unaff_ESI,action,
                                  (MethodInfo *)0x0);
              (*(code *)(this->klass->vtable).RemoveModifier.method)
                        (this,AVar2,id,(this->klass->vtable).HasModifierEffect.methodPtr);
              return;
            }
            break;
          default:
            goto code_?;
          }
        }
      }
      else {
        func_?(dictionary,
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
code_?:
        func_?();
      }
    }
  }
  uVar9 = func_?();
  key = unaff_ESI;
code_?:
  bVar15 = func_?(uVar9);
  bVar16 = 0x99 < bVar15;
  pbVar17 = (byte *)(extraout_EDX + -0x29);
  bVar18 = *pbVar17;
  bVar19 = (byte)((uint)pVVar1 >> 8);
  bVar20 = *pbVar17 + bVar19;
  *pbVar17 = bVar20 + bVar16;
  *(char *)&key->klass =
       *(char *)&key->klass + extraout_CH +
       (0x99 < (byte)(bVar15 + (9 < (bVar15 & 0xf) | in_AF) * '\x06' + bVar16 * '`') ||
       (CARRY1(bVar18,bVar19) || CARRY1(bVar20,bVar16)));
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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


/* Void TakeDamageOverTime(AvatarModifierPackageType, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_TakeDamageOverTime
               (VehicleInteractable *this,AvatarModifierPackageType__Enum type,
               MVPlayer *damageDealer,PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  if (damageDealer != (MVPlayer *)0x0) {
    pIStack_1 = (this->klass->vtable).HasModifier.methodPtr;
    aiStack_2[1] = 0;
    aiStack_2[0] = (damageDealer->fields)._ActorNr_k__BackingField;
    (*(code *)(this->klass->vtable).AddModifier.method)(this,type);
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
  AvatarModifierPackages::AvatarModifierPackages__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._.modifierPackages = this_00;
  func_?(&(this->fields)._.modifierPackages,this_00);
  (this->fields)._._._.findWorldObjectParent = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

