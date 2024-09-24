
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
  uVar4 = (int)pAVar3 < 0;
  dictionary = this;
  if (pAVar3 == (AvatarModifierPackages *)0x0) goto code_?;
  action = AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
                     (pAVar3,type,(MethodInfo *)0x0);
  pMVar5 = (this->fields)._.runtimeDataModifiers;
  uVar4 = (int)pMVar5 < 0;
  if (pMVar5 == (MVRuntimeDataVariable *)0x0) goto code_?;
  dictionary = (VehicleInteractable *)
               MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar5,(MethodInfo *)0x0);
  unaff_EDI = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
  if ((dictionary == (VehicleInteractable *)0x0) ||
     ((bVar6 = (dictionary->klass->_1).naturalAligment,
      bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment, uVar4 = (char)(bVar6 - bVar7) < '\0', bVar7 <= bVar6 &&
      (pDVar8 = (Dictionary_2_System_Object_System_Object___Class *)
                (dictionary->klass->_1).typeHierarchy
                [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment - 1],
      uVar4 = (int)pDVar8 -
               (int)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object> <
               0, AVar2 = type,
      pDVar8 == TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
     )) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object___ctor_1
              ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
               (IDictionary_2_System_Object_System_Object_ *)dictionary,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
              );
    if ((TypeInfo__AvatarModifierPackage->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AvatarModifierPackage);
    }
    pSVar9 = TypeInfo__AvatarModifierPackage->static_fields->AvatarModifierPackageTypeLookupTable;
    uVar4 = (int)pSVar9 < 0;
    if (pSVar9 == (String__Array *)0x0) goto code_?;
    uVar4 = (int)(AVar2 - pSVar9->max_length) < 0;
    if (AVar2 < pSVar9->max_length) {
      dictionary = (VehicleInteractable *)pSVar9->vector[AVar2];
      switch(action) {
      case ModifierActions__Enum_Add:
        uVar4 = (int)unaff_EDI < 0;
        if (unaff_EDI == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                           (unaff_EDI,(Object *)dictionary,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           );
        if (bVar10 == 0) {
          pAVar3 = (this->fields)._.modifierPackages;
          uVar4 = (int)pAVar3 < 0;
          if (pAVar3 == (AvatarModifierPackages *)0x0) goto code_?;
          AvatarModifierPackages::AvatarModifierPackages_AddModifier
                    (pAVar3,AVar2,id,additionalModifers,(MethodInfo *)0x0);
          type = type & 0xffffff;
          pOVar11 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)dictionary,
                     pOVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pMVar5 = (this->fields)._.runtimeDataModifiers;
          this = dictionary;
          while (uVar4 = (int)pMVar5 < 0, dictionary = this, pMVar5 == (MVRuntimeDataVariable *)0x0
                ) {
code_?:
            this = dictionary;
            uVar12 = func_?();
code_?:
            pcVar13 = (char *)func_?(uVar12);
            if ((bool)uVar4) {
              *pcVar13 = *pcVar13 - extraout_DL;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
code_?:
            in_stack_14 = TypeInfo__System__Byte;
            in_stack_15 = &UNK_?;
            pOVar11 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)this,pOVar11
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
code_?:
            pMVar5 = (pVVar1->fields)._.runtimeDataModifiers;
          }
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                    (pMVar5,(Object *)unaff_EDI,(MethodInfo *)0x0);
        }
        break;
      case ModifierActions__Enum_Renew:
        uVar4 = (int)unaff_EDI < 0;
        if (unaff_EDI == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                           (unaff_EDI,(Object *)dictionary,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           );
        if (bVar10 != 0) {
          pAVar3 = (this->fields)._.modifierPackages;
          uVar4 = (int)pAVar3 < 0;
          if (pAVar3 == (AvatarModifierPackages *)0x0) goto code_?;
          AvatarModifierPackages::AvatarModifierPackages_AddModifier
                    (pAVar3,AVar2,id,additionalModifers,(MethodInfo *)0x0);
          TVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (unaff_EDI,(Object *)dictionary,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          uVar12 = CONCAT44(TypeInfo__System__Byte,TVar16.m_Index);
          uVar4 = TVar16.m_Index < 0;
          if (TVar16.m_Index == 0) goto code_?;
          pIVar17 = (TypeInfo__System__Byte->_0).element_class;
          uVar4 = (int)*(Il2CppClass **)(*(int *)TVar16.m_Index + 0x20) - (int)pIVar17 < 0;
          this = dictionary;
          if (*(Il2CppClass **)(*(int *)TVar16.m_Index + 0x20) != pIVar17) goto code_?;
          additionalModifers = (AvatarModifierPackage_AvatarModifier__Array *)&UNK_?;
          method = (MethodInfo *)TVar16;
          func_?();
          additionalModifers = (AvatarModifierPackage_AvatarModifier__Array *)((int)&type + 3);
          id = (int32_t)TypeInfo__System__Byte;
          type = (AvatarModifierPackageType__Enum)&UNK_?;
          pOVar11 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)dictionary,
                     pOVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          goto code_?;
        }
        break;
      case ModifierActions__Enum_Replace:
        uVar4 = (int)unaff_EDI < 0;
        if (unaff_EDI == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                           (unaff_EDI,(Object *)dictionary,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           );
        if (bVar10 == 0) {
          pAVar3 = (this->fields)._.modifierPackages;
          uVar4 = (int)pAVar3 < 0;
          if (pAVar3 == (AvatarModifierPackages *)0x0) goto code_?;
          AvatarModifierPackages::AvatarModifierPackages_AddModifier
                    (pAVar3,AVar2,id,additionalModifers,(MethodInfo *)0x0);
          pAVar3 = (this->fields)._.modifierPackages;
          uVar4 = (int)pAVar3 < 0;
          if (pAVar3 == (AvatarModifierPackages *)0x0) goto code_?;
          type = AvatarModifierPackageType__Enum_None;
          this_00 = (Enum *)AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                                      (pAVar3,AVar2,action,(MethodInfo *)0x0);
          ppVVar18 = &this->klass;
          type = (AvatarModifierPackageType__Enum)((*ppVVar18)->vtable).HasModifierEffect.methodPtr;
          this = (VehicleInteractable *)0xffffffff;
          (*(code *)((*ppVVar18)->vtable).RemoveModifier.method)();
          pSVar19 = mscorlib.dll::System::Enum::Enum_ToString(this_00,(MethodInfo *)0x0);
          pSVar19 = mscorlib.dll::System::String::String_Concat_3
                              (::StringLiteral__,pSVar19,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Remove
                    ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)pSVar19,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                    );
          type = type & 0xffffff;
          in_stack_20 = (byte *)((int)&type + 3);
          goto code_?;
        }
        break;
      case ModifierActions__Enum_CancelOut:
        pAVar3 = (this->fields)._.modifierPackages;
        uVar4 = (int)pAVar3 < 0;
        if (pAVar3 == (AvatarModifierPackages *)0x0) goto code_?;
        AVar2 = AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                           (pAVar3,AVar2,action,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).RemoveModifier.method)
                  (this,AVar2,id,(this->klass->vtable).HasModifierEffect.methodPtr);
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

