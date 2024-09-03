
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_AddModifier
               (VehicleInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  if (type == AvatarModifierPackageType__Enum_Poison) {
    return;
  }
  method = (MethodInfo *)0x0;
  puVar1 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
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
  AVar4 = type;
  pAVar5 = (this->fields)._.modifierPackages;
  uVar6 = (int)pAVar5 < 0;
  puVar7 = &stack0xfffffffc;
  if (pAVar5 == (AvatarModifierPackages *)0x0) goto code_?;
  action = AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
                     (pAVar5,type,(MethodInfo *)0x0);
  pMVar8 = (this->fields)._.runtimeDataModifiers;
  uVar6 = (int)pMVar8 < 0;
  puVar7 = &stack0xfffffffc;
  if (pMVar8 == (MVRuntimeDataVariable *)0x0) goto code_?;
  dictionary = (IDictionary_2_System_Object_System_Object_ *)
               MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar8,(MethodInfo *)0x0);
  unaff_EDI = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
  if ((dictionary == (IDictionary_2_System_Object_System_Object_ *)0x0) ||
     ((bVar9 = (dictionary->klass->_1).naturalAligment,
      bVar10 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment, uVar6 = (char)(bVar9 - bVar10) < '\0', bVar10 <= bVar9 &&
      (pDVar11 = (Dictionary_2_System_Object_System_Object___Class *)
                (dictionary->klass->_1).typeHierarchy
                [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment - 1],
      uVar6 = (int)pDVar11 -
               (int)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object> <
               0, AVar4 = type,
      pDVar11 == TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
     )) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object___ctor_1
              ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,dictionary,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
              );
    if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarModifierPackage);
    }
    pSVar12 = TypeInfo__AvatarModifierPackage->static_fields->AvatarModifierPackageTypeLookupTable;
    uVar6 = (int)pSVar12 < 0;
    puVar7 = &stack0xfffffffc;
    if (pSVar12 == (String__Array *)0x0) goto code_?;
    uVar6 = (int)(AVar4 - pSVar12->max_length) < 0;
    if (AVar4 < pSVar12->max_length) {
      pSVar13 = pSVar12->vector[AVar4];
      switch(action) {
      case ModifierActions__Enum_Add:
        uVar6 = (int)unaff_EDI < 0;
        puVar7 = &stack0xfffffffc;
        if (unaff_EDI == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (unaff_EDI,(Object *)pSVar13,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar14 == 0) {
          pAVar5 = (this->fields)._.modifierPackages;
          uVar6 = (int)pAVar5 < 0;
          puVar7 = &stack0xfffffffc;
          if (pAVar5 == (AvatarModifierPackages *)0x0) goto code_?;
          AvatarModifierPackages::AvatarModifierPackages_AddModifier
                    (pAVar5,AVar4,id,additionalModifers,(MethodInfo *)0x0);
          type = type & 0xffffff;
          pOVar15 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)pSVar13,
                     pOVar15,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pMVar8 = (this->fields)._.runtimeDataModifiers;
          puVar1 = &stack0xfffffffc;
          while (uVar6 = (int)pMVar8 < 0, puVar7 = puVar1, pMVar8 == (MVRuntimeDataVariable *)0x0
                ) {
code_?:
            uVar16 = func_?();
            puVar3 = puVar7;
code_?:
            pcVar17 = (char *)func_?(uVar16);
            if ((bool)uVar6) {
              *pcVar17 = *pcVar17 - extraout_DL;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            puVar2 = puVar3 + 1;
            uVar18 = TaskRegister();
            *(undefined2 *)(puVar3 + -0xaff0ba) = uVar18;
code_?:
            in_stack_19 = &UNK_?;
            pOVar15 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                       *(Object **)(puVar2 + 8),pOVar15,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            puVar1 = puVar2;
code_?:
            pMVar8 = (this->fields)._.runtimeDataModifiers;
          }
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                    (pMVar8,(Object *)unaff_EDI,(MethodInfo *)0x0);
        }
        break;
      case ModifierActions__Enum_Renew:
        uVar6 = (int)unaff_EDI < 0;
        puVar7 = &stack0xfffffffc;
        if (unaff_EDI == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (unaff_EDI,(Object *)pSVar13,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar14 != 0) {
          pAVar5 = (this->fields)._.modifierPackages;
          uVar6 = (int)pAVar5 < 0;
          puVar7 = &stack0xfffffffc;
          if (pAVar5 == (AvatarModifierPackages *)0x0) goto code_?;
          AvatarModifierPackages::AvatarModifierPackages_AddModifier
                    (pAVar5,AVar4,id,additionalModifers,(MethodInfo *)0x0);
          TVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (unaff_EDI,(Object *)pSVar13,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          uVar16 = CONCAT44(TypeInfo__System__Byte,TVar20.m_Index);
          uVar6 = TVar20.m_Index < 0;
          puVar7 = &stack0xfffffffc;
          if (TVar20.m_Index == 0) goto code_?;
          pIVar21 = (TypeInfo__System__Byte->_0).element_class;
          uVar6 = (int)*(Il2CppClass **)(*(int *)TVar20.m_Index + 0x20) - (int)pIVar21 < 0;
          if (*(Il2CppClass **)(*(int *)TVar20.m_Index + 0x20) != pIVar21) goto code_?;
          additionalModifers = (AvatarModifierPackage_AvatarModifier__Array *)&UNK_?;
          method = (MethodInfo *)TVar20;
          func_?();
          additionalModifers = (AvatarModifierPackage_AvatarModifier__Array *)((int)&type + 3);
          id = (int32_t)TypeInfo__System__Byte;
          type = (AvatarModifierPackageType__Enum)&UNK_?;
          pOVar15 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)pSVar13,
                     pOVar15,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          goto code_?;
        }
        break;
      case ModifierActions__Enum_Replace:
        uVar6 = (int)unaff_EDI < 0;
        puVar7 = &stack0xfffffffc;
        if (unaff_EDI == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (unaff_EDI,(Object *)pSVar13,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar14 == 0) {
          pAVar5 = (this->fields)._.modifierPackages;
          uVar6 = (int)pAVar5 < 0;
          puVar7 = &stack0xfffffffc;
          if (pAVar5 == (AvatarModifierPackages *)0x0) goto code_?;
          AvatarModifierPackages::AvatarModifierPackages_AddModifier
                    (pAVar5,AVar4,id,additionalModifers,(MethodInfo *)0x0);
          pAVar5 = (this->fields)._.modifierPackages;
          uVar6 = (int)pAVar5 < 0;
          puVar7 = &stack0xfffffffc;
          if (pAVar5 == (AvatarModifierPackages *)0x0) goto code_?;
          type = AvatarModifierPackageType__Enum_None;
          this_00 = (Enum *)AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                                      (pAVar5,AVar4,action,(MethodInfo *)0x0);
          type = (AvatarModifierPackageType__Enum)(this->klass->vtable).HasModifierEffect.methodPtr;
          (*(code *)(this->klass->vtable).RemoveModifier.method)();
          pSVar13 = mscorlib.dll::System::Enum::Enum_ToString(this_00,(MethodInfo *)0x0);
          pSVar13 = mscorlib.dll::System::String::String_Concat_3
                              (::StringLiteral__,pSVar13,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Remove
                    ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)pSVar13,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                    );
          type = type & 0xffffff;
          in_stack_22 = (byte *)((int)&type + 3);
          in_stack_23 = TypeInfo__System__Byte;
          goto code_?;
        }
        break;
      case ModifierActions__Enum_CancelOut:
        pAVar5 = (this->fields)._.modifierPackages;
        uVar6 = (int)pAVar5 < 0;
        puVar7 = &stack0xfffffffc;
        if (pAVar5 == (AvatarModifierPackages *)0x0) goto code_?;
        AVar4 = AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                           (pAVar5,AVar4,action,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).RemoveModifier.method)
                  (this,AVar4,id,(this->klass->vtable).HasModifierEffect.methodPtr);
        return;
      }
      return;
    }
  }
  else {
    func_?(dictionary,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
  }
  func_?();
  puVar7 = &stack0xfffffffc;
  goto code_?;
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

