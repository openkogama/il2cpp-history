
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
    func_?();
    func_?();
    func_?();
    func_?();
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
  modifierPackageType = type;
  pAVar1 = (this->fields)._.modifierPackages;
  if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
  action = AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
                     (pAVar1,type,(MethodInfo *)0x0);
  pMVar2 = (this->fields)._.runtimeDataModifiers;
  if (pMVar2 == (MVRuntimeDataVariable *)0x0) goto code_?;
  dictionary = (IDictionary_2_System_Object_System_Object_ *)
               MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar2,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)func_?();
  if ((dictionary != (IDictionary_2_System_Object_System_Object_ *)0x0) &&
     (((dictionary->klass->_1).naturalAligment <
       (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       naturalAligment ||
      (modifierPackageType = type,
      (Dictionary_2_System_Object_System_Object___Class *)
      (dictionary->klass->_1).typeHierarchy
      [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       naturalAligment - 1] !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
    func_?(dictionary);
code_?:
    func_?();
    goto code_?;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object___ctor_1
            ((Dictionary_2_System_Object_System_Object_ *)this_00,dictionary,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
            );
  if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar3 = TypeInfo__AvatarModifierPackage->static_fields->AvatarModifierPackageTypeLookupTable;
  if (pSVar3 == (String__Array *)0x0) goto code_?;
  if (pSVar3->max_length <= modifierPackageType) goto code_?;
  pSVar4 = pSVar3->vector[modifierPackageType];
  switch(action) {
  case ModifierActions__Enum_Add:
    if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (this_00,(Object *)pSVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar5 != 0) {
      return;
    }
    pAVar1 = (this->fields)._.modifierPackages;
    if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
    AvatarModifierPackages::AvatarModifierPackages_AddModifier
              (pAVar1,modifierPackageType,id,additionalModifers,(MethodInfo *)0x0);
    type = type & 0xffffff;
    pOVar6 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pSVar4,pOVar6,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pMVar2 = (this->fields)._.runtimeDataModifiers;
    goto joined_?;
  case ModifierActions__Enum_Renew:
    if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (this_00,(Object *)pSVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar5 == 0) {
      return;
    }
    pAVar1 = (this->fields)._.modifierPackages;
    if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
    AvatarModifierPackages::AvatarModifierPackages_AddModifier
              (pAVar1,modifierPackageType,id,additionalModifers,(MethodInfo *)0x0);
    TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (this_00,(Object *)pSVar4,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (TVar7.m_Index == 0) goto code_?;
    pIVar8 = (TypeInfo__System__Byte->_0).element_class;
    bVar9 = *(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) < pIVar8;
    if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) != pIVar8) {
      method = (MethodInfo *)TypeInfo__System__Byte;
      id = (int32_t)&UNK_?;
      additionalModifers = (AvatarModifierPackage_AvatarModifier__Array *)TVar7;
      func_?();
      pSVar4[2].fields._stringLength = (int32_t)pSVar4;
      bVar10 = (byte)((uint)this >> 8);
      bVar11 = extraout_DL + bVar10;
      if ((!CARRY1(extraout_DL,bVar10) && !CARRY1(bVar11,bVar9)) && (byte)(bVar11 + bVar9) != '\0')
      {
        pcVar12 = (char *)((int)&pSVar4[0x7c10287].monitor + 3);
        *pcVar12 = *pcVar12 + extraout_CH + (CARRY1(extraout_DL,bVar10) || CARRY1(bVar11,bVar9));
        if (*pcVar12 < '\0') {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      goto code_?;
    }
    additionalModifers = (AvatarModifierPackage_AvatarModifier__Array *)&UNK_?;
    method = (MethodInfo *)TVar7;
    func_?();
    additionalModifers = (AvatarModifierPackage_AvatarModifier__Array *)((int)&type + 3);
    id = (int32_t)TypeInfo__System__Byte;
    type = (AvatarModifierPackageType__Enum)&UNK_?;
    pOVar6 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pSVar4,pOVar6,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    break;
  case ModifierActions__Enum_Replace:
    if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (this_00,(Object *)pSVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar5 != 0) {
      return;
    }
    pAVar1 = (this->fields)._.modifierPackages;
    if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
    AvatarModifierPackages::AvatarModifierPackages_AddModifier
              (pAVar1,modifierPackageType,id,additionalModifers,(MethodInfo *)0x0);
    pAVar1 = (this->fields)._.modifierPackages;
    if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
    type = AvatarModifierPackageType__Enum_None;
    this_01 = (Enum *)AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                                (pAVar1,modifierPackageType,action,(MethodInfo *)0x0);
    type = (AvatarModifierPackageType__Enum)(this->klass->vtable).HasModifierEffect.methodPtr;
    (*(code *)(this->klass->vtable).RemoveModifier.method)();
    pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(this_01,(MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::String::String_Concat_3
                        (::StringLiteral__,pSVar4,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Remove
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pSVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
              );
    type = type & 0xffffff;
    in_stack_14 = (byte *)((int)&type + 3);
    in_stack_15 = TypeInfo__System__Byte;
    in_stack_16 = &UNK_?;
    pOVar6 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)0xffffffff,pOVar6,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    break;
  case ModifierActions__Enum_CancelOut:
    pAVar1 = (this->fields)._.modifierPackages;
    if (pAVar1 != (AvatarModifierPackages *)0x0) {
      AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                (pAVar1,modifierPackageType,action,(MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).RemoveModifier.method)();
      return;
    }
    goto code_?;
  default:
    goto code_?;
  }
  pMVar2 = (this->fields)._.runtimeDataModifiers;
joined_?:
  if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
    MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
              (pMVar2,(Object *)this_00,(MethodInfo *)0x0);
code_?:
    return;
  }
code_?:
  uVar17 = func_?(&stack0xffffffdc);
  func_?(uVar17);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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

