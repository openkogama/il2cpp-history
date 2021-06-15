
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_AddModifier
               (VehicleInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  if (type == AvatarModifierPackageType__Enum_Poison) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._.modifierPackages;
  cVar2 = '\0';
  if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
  pSVar3 = (String__Class *)
           AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
                     (pAVar1,type,(MethodInfo *)0x0);
  pMVar4 = (this->fields)._.runtimeDataModifiers;
  cVar2 = '\0';
  unaff_ESI = (String *)type;
  if (pMVar4 == (MVRuntimeDataVariable *)0x0) goto code_?;
  pOVar5 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar4,(MethodInfo *)0x0);
  unaff_EDI = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
  if (pOVar5 == (Object *)0x0) {
    capacity = (Object *)0x0;
code_?:
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object___ctor_1
              ((SortedList_2_System_Single_System_Object_ *)unaff_EDI,(int32_t)capacity,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
              );
    if ((((uint)(TypeInfo__AvatarModifierPackage->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AvatarModifierPackage->_1).cctor_started == 0)) {
      func_?(TypeInfo__AvatarModifierPackage);
    }
    pSVar6 = TypeInfo__AvatarModifierPackage->static_fields->AvatarModifierPackageTypeLookupTable;
    cVar2 = '\0';
    unaff_ESI = (String *)type;
    if (pSVar6 == (String__Array *)0x0) goto code_?;
    cVar2 = '\0';
    if (type < pSVar6->max_length) {
      key_00 = pSVar6->vector[type];
      unaff_ESI = (String *)type;
      switch(pSVar3) {
      case (String__Class *)0x0:
        cVar2 = '\0';
        if (unaff_EDI ==
            (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)0x0) goto code_?;
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          (unaff_EDI,key_00,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar7 != 0) {
          return;
        }
        pAVar1 = (this->fields)._.modifierPackages;
        cVar2 = '\0';
        if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
        AvatarModifierPackages::AvatarModifierPackages_AddModifier
                  (pAVar1,type,id,additionalModifers,(MethodInfo *)0x0);
        pCVar8 = (CrossPlatformInputManager_VirtualButton *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)unaff_EDI,key_00,pCVar8,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        break;
      case (String__Class *)0x1:
        cVar2 = '\0';
        if (unaff_EDI ==
            (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)0x0) goto code_?;
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          (unaff_EDI,key_00,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar7 == 0) {
          return;
        }
        pAVar1 = (this->fields)._.modifierPackages;
        cVar2 = '\0';
        if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
        AvatarModifierPackages::AvatarModifierPackages_AddModifier
                  (pAVar1,type,id,additionalModifers,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
        Dictionary_2_System_Type_Pool__get_Item
                  ((Dictionary_2_System_Type_Pool_ *)unaff_EDI,(Type *)key_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        func_?();
        value = (Theme *)func_?(TypeInfo__System__Byte);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
        Dictionary_2_System_String_Theme__set_Item
                  ((Dictionary_2_System_String_Theme_ *)unaff_EDI,key_00,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        break;
      case (String__Class *)0x2:
        cVar2 = '\0';
        unaff_ESI = (String *)type;
        if (unaff_EDI ==
            (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)0x0) goto code_?;
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          (unaff_EDI,key_00,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar7 != 0) {
          return;
        }
        pAVar1 = (this->fields)._.modifierPackages;
        cVar2 = '\0';
        unaff_ESI = (String *)type;
        if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
        AvatarModifierPackages::AvatarModifierPackages_AddModifier
                  (pAVar1,type,id,additionalModifers,(MethodInfo *)0x0);
        pAVar1 = (this->fields)._.modifierPackages;
        cVar2 = '\0';
        unaff_ESI = (String *)type;
        if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
        AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                  (pAVar1,type,ModifierActions__Enum_Replace,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).RemoveModifier.method)();
        key_00 = (String *)&stack0xfffffff8;
        pOVar5 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        key = mscorlib.dll::System::String::String_Concat
                        ((Object *)::StringLiteral__,pOVar5,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)unaff_EDI,key,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                  );
        pCVar8 = (CrossPlatformInputManager_VirtualButton *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)unaff_EDI,key_00,pCVar8,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        break;
      case (String__Class *)0x3:
        pAVar1 = (this->fields)._.modifierPackages;
        cVar2 = '\0';
        unaff_ESI = (String *)type;
        if (pAVar1 != (AvatarModifierPackages *)0x0) {
          AVar9 = AvatarModifierPackages::AvatarModifierPackages_GetPackageToActWith
                             (pAVar1,type,ModifierActions__Enum_CancelOut,(MethodInfo *)0x0);
          (*(code *)(this->klass->vtable).RemoveModifier.method)
                    (this,AVar9,id,(this->klass->vtable).HasModifierEffect.methodPtr);
          return;
        }
        goto code_?;
      default:
        goto code_?;
      }
      pMVar4 = (this->fields)._.runtimeDataModifiers;
      cVar2 = '\0';
      unaff_ESI = key_00;
      if (pMVar4 != (MVRuntimeDataVariable *)0x0) {
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                  (pMVar4,(Object *)unaff_EDI,(MethodInfo *)0x0);
code_?:
        return;
      }
      goto code_?;
    }
  }
  else {
    bVar10 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pOVar5->klass->_1).naturalAligment < bVar10) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pOVar5->klass->_1).typeHierarchy[bVar10 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    capacity = (Object *)0x0;
    if (bVar11) {
      capacity = pOVar5;
    }
    cVar2 = '\0';
    if (capacity != (Object *)0x0) goto code_?;
    func_?(pOVar5,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
  }
  uVar12 = func_?(0,0);
  func_?(uVar12);
  unaff_ESI = (String *)type;
code_?:
  pcVar13 = (char *)func_?(0);
  unaff_EDI->klass =
       (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase___Class
        *)unaff_ESI->klass;
  *pcVar13 = *pcVar13 + (char)((uint)pcVar13 >> 8) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void HandleMoveHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::VehicleInteractable::VehicleInteractable_HandleMoveHit
               (VehicleInteractable *this,MVControllerColliderHit moveHit,MethodInfo *method)

{
  if (moveHit.hit.interactionFlags._4_4_ != (AddDotsToTruncatedText_Start_c_Iterator0 *)0x0) {
    pOVar1 = AddDotsToTruncatedText+<Start>c__Iterator0::
             AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                       (moveHit.hit.interactionFlags._4_4_,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).AddModifier.method)
              (this,pOVar1,0xffffffff,0,(this->klass->vtable).HasModifier.methodPtr);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (AvatarModifierPackages *)func_?(TypeInfo__AvatarModifierPackages);
  AvatarModifierPackages::AvatarModifierPackages__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._.modifierPackages = this_00;
  *(undefined1 *)(in_stack_1 + 0xc) = 1;
  uStack2 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

