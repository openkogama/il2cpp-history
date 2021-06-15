
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_AddModifier
               (MVInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).modifierPackages;
  cVar2 = '\0';
  if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
  pSVar3 = (String__Class *)
           AvatarModifierPackages::AvatarModifierPackages_GetActionToTakeWithPackageType
                     (pAVar1,type,(MethodInfo *)0x0);
  pMVar4 = (this->fields).runtimeDataModifiers;
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
        pAVar1 = (this->fields).modifierPackages;
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
        pAVar1 = (this->fields).modifierPackages;
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
        pAVar1 = (this->fields).modifierPackages;
        cVar2 = '\0';
        unaff_ESI = (String *)type;
        if (pAVar1 == (AvatarModifierPackages *)0x0) goto code_?;
        AvatarModifierPackages::AvatarModifierPackages_AddModifier
                  (pAVar1,type,id,additionalModifers,(MethodInfo *)0x0);
        pAVar1 = (this->fields).modifierPackages;
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
        pAVar1 = (this->fields).modifierPackages;
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
      pMVar4 = (this->fields).runtimeDataModifiers;
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


/* Void ClearModifiers() */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_ClearModifiers
               (MVInteractable *this,MethodInfo *method)

{
  pAVar1 = (this->fields).modifierPackages;
  if (pAVar1 == (AvatarModifierPackages *)0x0) {
    uStack_2 = 0;
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar4 = (pAVar1->fields).packages;
  if (pLVar4 != (List_1_AvatarModifierPackage_ *)0x0) {
    index = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Count__
                      );
    do {
      do {
        index = (Object *)((int)&index[-1].monitor + 3);
        if ((int)index < 0) {
          return;
        }
        pLVar4 = (pAVar1->fields).packages;
        if (pLVar4 == (List_1_AvatarModifierPackage_ *)0x0) goto code_?;
        pAVar5 = mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
                 List_1_AvatarModifierPackage__get_Item
                           (&AStack_6,pLVar4,(int32_t)index,
                            MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                           );
        iStack_7 = pAVar5->id;
        iStack_8 = (pAVar5->duration).currentCryptoKey;
        AStack_9 = (pAVar5->duration).hiddenValue;
        pBStack_10 = (pAVar5->duration).hiddenValueOld;
        fStack_11 = (pAVar5->duration).fakeValue;
        uStack_12 = *(undefined4 *)&(pAVar5->duration).inited;
        pAStack_13 = pAVar5->avatarModifiers;
        pDStack_14 = pAVar5->actionsToTakeVsTypes;
        iStack_15 = (pAVar5->timeStamp).currentCryptoKey;
        AStack_16 = (pAVar5->timeStamp).hiddenValue;
        pBStack_17 = (pAVar5->timeStamp).hiddenValueOld;
        fStack_18 = (pAVar5->timeStamp).fakeValue;
      } while (pAVar5->persistant != 0);
      this_00 = (Action_1_UnityEngine_EventSystems_RaycastResult_ *)
                (pAVar1->fields).OnModifierExpired;
      if (this_00 != (Action_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
        pLVar4 = (pAVar1->fields).packages;
        if (pLVar4 == (List_1_AvatarModifierPackage_ *)0x0) break;
        AStack_6.id = (int32_t)
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
        ;
        pRVar19 = (RaycastResult *)func_?(&AStack_6,pLVar4,index);
        if (this_00 == (Action_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) break;
        mscorlib.dll::System::Action`1[UnityEngine::EventSystems::RaycastResult]::
        Action_1_UnityEngine_EventSystems_RaycastResult__Invoke(this_00,*pRVar19,(MethodInfo *)0x0);
      }
      pLVar4 = (pAVar1->fields).packages;
      if (pLVar4 == (List_1_AvatarModifierPackage_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
      List_1_AvatarModifierPackage__RemoveAt
                (pLVar4,(int32_t)index,
                 MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__RemoveAt_int_
                );
    } while( true );
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Single HandleModifierEffect(AvatarModifierEffect, Single) */

float Assembly-CSharp.dll::MVInteractable::MVInteractable_HandleModifierEffect
                (MVInteractable *this,AvatarModifierEffect__Enum avatarModifierEffect,
                float baseValue,MethodInfo *method)

{
  this_00 = (this->fields).modifierPackages;
  if (this_00 != (AvatarModifierPackages *)0x0) {
    fVar1 = AvatarModifierPackages::AvatarModifierPackages_HandleModifierEffect
                      (this_00,avatarModifierEffect,baseValue,(MethodInfo *)0x0);
    return fVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}


/* Boolean HasModifier(AvatarModifierPackageType) */

bool Assembly-CSharp.dll::MVInteractable::MVInteractable_HasModifier
               (MVInteractable *this,AvatarModifierPackageType__Enum type,MethodInfo *method)

{
  pAVar1 = (this->fields).modifierPackages;
  if (pAVar1 == (AvatarModifierPackages *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarModifierPackages___HasModifier_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = (void *)type;
    this_00 = (List_1_VoxelHit_ *)(pAVar1->fields).packages;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Predicate<AvatarModifierPackage>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this_01,
               MethodInfo__AvatarModifierPackages___HasModifier_c__AnonStorey0____m__0_AvatarModifierPackage_
               ,
               MethodInfo__System__Predicate<AvatarModifierPackage>__Predicate_System__Object__void__
              );
    if (this_00 != (List_1_VoxelHit_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__Exists
                        (this_00,(Predicate_1_VoxelHit_ *)this_02,
                         MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__Exists_System__Predicate<AvatarModifierPackage>_
                        );
      return bVar3;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean HasModifierEffect(AvatarModifierEffect) */

bool Assembly-CSharp.dll::MVInteractable::MVInteractable_HasModifierEffect
               (MVInteractable *this,AvatarModifierEffect__Enum avatarModifierEffect,
               MethodInfo *method)

{
  pAVar1 = (this->fields).modifierPackages;
  if (pAVar1 == (AvatarModifierPackages *)0x0) {
    uStack_2 = 0;
    func_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  uStack_2 = 0xffffffff;
  puStack_5 = &DAT_?;
  uStack_6 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_6;
  puStack_7 = &stack0xfffffee8;
  puVar8 = &stack0xfffffee8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar8 = puStack_7;
  }
  puStack_7 = puVar8;
  func_?(&pLStack_9,0,0x4c);
  bStack_10 = 0;
  uStack_11 = 0;
  iStack_12 = 0;
  func_?();
  uStack_13 = 0xffffffff;
  this_00 = (List_1_UnityEngine_EventSystems_RaycastResult_ *)(pAVar1->fields).packages;
  piStack_14 = (int *)&stack0xfffffee8;
  puStack_7 = &stack0xfffffee8;
  if (this_00 == (List_1_UnityEngine_EventSystems_RaycastResult_ *)0x0) {
code_?:
    iVar15 = func_?(0);
  }
  else {
    piStack_14 = (int *)&stack0xfffffee8;
    puStack_7 = &stack0xfffffee8;
    pLVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             RaycastResult]::List_1_UnityEngine_EventSystems_RaycastResult__GetEnumerator
                       (&LStack_17,this_00,
                        MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__GetEnumerator__
                       );
    pLStack_9 = pLVar16->l;
    iStack_18 = pLVar16->next;
    iStack_19 = pLVar16->ver;
    pGStack_20 = (pLVar16->current).m_GameObject;
    pBStack_21 = (pLVar16->current).module;
    fStack_22 = (pLVar16->current).distance;
    fStack_23 = (pLVar16->current).index;
    iStack_24 = (pLVar16->current).depth;
    iStack_25 = (pLVar16->current).sortingLayer;
    iStack_26 = (pLVar16->current).sortingOrder;
    fStack_27 = (pLVar16->current).worldPosition.x;
    fStack_28 = (pLVar16->current).worldPosition.y;
    fStack_29 = (pLVar16->current).worldPosition.z;
    fStack_30 = (pLVar16->current).worldNormal.x;
    fStack_31 = (pLVar16->current).worldNormal.y;
    fStack_32 = (pLVar16->current).worldNormal.z;
    VStack_33 = (pLVar16->current).screenPosition;
    iStack_34 = (pLVar16->current).displayIndex;
    uStack_2 = 0;
    piVar35 = (int *)&stack0xfffffee8;
    while (cVar36 = func_?(&pLStack_9,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__MoveNext__
                                  ), cVar36 != '\0') {
      puVar37 = (undefined4 *)
               func_?(&LStack_17.current,&pLStack_9,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__get_Current__
                              );
      iVar38 = 0;
      uStack_39 = *puVar37;
      uStack_40 = puVar37[1];
      uStack_41 = puVar37[2];
      uStack_42 = puVar37[3];
      iVar15 = puVar37[6];
      uStack_43 = puVar37[8];
      uStack_44 = puVar37[9];
      uStack_45 = puVar37[10];
      uStack_46 = puVar37[0xb];
      uStack_47 = puVar37[0xc];
      uStack_48 = puVar37[0xd];
      uStack_49 = puVar37[0xe];
      uStack_50 = puVar37[0xf];
      while( true ) {
        if (iVar15 == 0) goto code_?;
        piVar35 = piStack_14;
        if (*(int *)(iVar15 + 0xc) <= iVar38) break;
        puVar51 = (undefined8 *)func_?(iVar38);
        piVar35 = piStack_14;
        uVar52 = *puVar51;
        uStack_53._4_4_ = (AvatarModifierEffect__Enum)((ulonglong)uVar52 >> 0x20);
        uStack_53 = uVar52;
        if (uStack_53._4_4_ == avatarModifierEffect) {
          bStack_10 = 1;
          *piStack_14 = 0x7d;
          goto code_?;
        }
        iVar38 = iVar38 + 1;
      }
    }
    *piVar35 = 0x7b;
code_?:
    uStack_2 = 0xffffffff;
    func_?(&pLStack_9,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AvatarModifierPackage>__Dispose__
                   );
    iVar15 = iStack_12;
    if (iStack_12 == 0) {
      if (*piVar35 != 0x7d) {
        bStack_10 = 0;
      }
      *unaff_FS_OFFSET = uStack_6;
      return bStack_10;
    }
  }
  func_?(iVar15,0,0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean IgnoreDamage(MVPlayer) */

bool Assembly-CSharp.dll::MVInteractable::MVInteractable_IgnoreDamage
               (MVInteractable *this,MVPlayer *damageDealer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                       ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    this_00 = (this->fields)._._.worldObjectParent;
    if ((this_00 != (MVWorldObjectClient *)0x0) &&
       (actorNumber = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                      TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                      TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_00,
                                 (MethodInfo *)0x0), pSVar2 != (SkyParam *)0x0)) {
      pIVar3 = (IKogamaSetting *)
               MVTeamManager::MVTeamManager_GetTeamFromActorNr
                         ((MVTeamManager *)pSVar2,(int32_t)actorNumber,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                             ((DayNightCycle *)pMVar1,(MethodInfo *)0x0), pSVar2 != (SkyParam *)0x0)
         ) {
        iVar4 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)pSVar2,(MethodInfo *)0x0);
        if ((((1 < iVar4) && (damageDealer != (MVPlayer *)0x0)) &&
            (pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                      KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                      KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                ((KogamaSettingNumericBase_1_System_Single_ *)damageDealer,
                                 (MethodInfo *)0x0), pIVar3 == pIVar5)) &&
           (pIVar3 != (IKogamaSetting *)0x5)) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 == (MVNetworkGame *)0x0) ||
             (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
             this_02 == (MVLocalPlayer *)0x0)) goto code_?;
          pSVar6 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_02,(MethodInfo *)0x0)
          ;
          pSVar7 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)damageDealer,
                              (MethodInfo *)0x0);
          if (pSVar6 != pSVar7) {
            return 1;
          }
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar8 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if ((pSVar8 != (SpawnRoleDataMediator *)0x0) &&
           (this_01 = (pSVar8->fields).SpawnRoleModeTypeWrapper,
           this_01 != (SpawnRoleModeTypeWrapper *)0x0)) {
          bVar9 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                            (this_01,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
          if (bVar9 == 0) {
            return 1;
          }
          return 0;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Boolean IgnoreHealing(MVPlayer) */

bool Assembly-CSharp.dll::MVInteractable::MVInteractable_IgnoreHealing
               (MVInteractable *this,MVPlayer *damageDealer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                       ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    this_00 = (this->fields)._._.worldObjectParent;
    if ((this_00 != (MVWorldObjectClient *)0x0) &&
       (actorNumber = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                      TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                      TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_00,
                                 (MethodInfo *)0x0), pSVar2 != (SkyParam *)0x0)) {
      pIVar3 = (IKogamaSetting *)
               MVTeamManager::MVTeamManager_GetTeamFromActorNr
                         ((MVTeamManager *)pSVar2,(int32_t)actorNumber,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                             ((DayNightCycle *)pMVar1,(MethodInfo *)0x0), pSVar2 != (SkyParam *)0x0)
         ) {
        iVar4 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)pSVar2,(MethodInfo *)0x0);
        if ((((1 < iVar4) && (damageDealer != (MVPlayer *)0x0)) &&
            (pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                      KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                      KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                ((KogamaSettingNumericBase_1_System_Single_ *)damageDealer,
                                 (MethodInfo *)0x0), pIVar3 != pIVar5)) &&
           (pIVar3 != (IKogamaSetting *)0x5)) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 == (MVNetworkGame *)0x0) ||
             (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
             this_02 == (MVLocalPlayer *)0x0)) goto code_?;
          pSVar6 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_02,(MethodInfo *)0x0)
          ;
          pSVar7 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                   NamedThemeAttribute_1_UnityEngine_Color__get_Name
                             ((NamedThemeAttribute_1_UnityEngine_Color_ *)damageDealer,
                              (MethodInfo *)0x0);
          if (pSVar6 != pSVar7) {
            return 1;
          }
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar8 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if ((pSVar8 != (SpawnRoleDataMediator *)0x0) &&
           (this_01 = (pSVar8->fields).SpawnRoleModeTypeWrapper,
           this_01 != (SpawnRoleModeTypeWrapper *)0x0)) {
          bVar9 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                            (this_01,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
          if (bVar9 == 0) {
            return 1;
          }
          return 0;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).runtimeDataModifiers = runtimeDataModifiers;
  (this->fields).health = health;
  (this->fields).maxHealth = maxHealth;
  (this->fields).shield = shield;
  pAVar1 = (this->fields).modifierPackages;
  if (pAVar1 != (AvatarModifierPackages *)0x0) {
    pAVar2 = (pAVar1->fields).OnModifierExpired;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__AvatarModifierPackages__OnModifierExpiredDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,MethodInfo__MVInteractable___Init_m__0_AvatarModifierPackage_,
               (MethodInfo *)0x0);
    pAVar3 = (AvatarModifierPackages_OnModifierExpiredDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0;
    if (pAVar3 != (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) {
      if (pAVar3->klass == TypeInfo__AvatarModifierPackages__OnModifierExpiredDelegate) {
        pAVar2 = pAVar3;
      }
      if (pAVar2 == (AvatarModifierPackages_OnModifierExpiredDelegate *)0x0) goto code_?;
    }
    (pAVar1->fields).OnModifierExpired = pAVar2;
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = this;
  pMVar2 = (this->fields).runtimeDataModifiers;
  if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
    pOVar3 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar2,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)func_?();
    if (pOVar3 == (Object *)0x0) {
      capacity = (Object *)0x0;
    }
    else {
      bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pOVar3->klass->_1).naturalAligment < bVar4) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pOVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      capacity = (Object *)0x0;
      if (bVar5) {
        capacity = pOVar3;
      }
      if (capacity == (Object *)0x0) goto code_?;
    }
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object___ctor_1
              ((SortedList_2_System_Single_System_Object_ *)this_01,(int32_t)capacity,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
              );
    this = (MVInteractable *)type;
    ppMVar6 = &this;
    pAVar7 = TypeInfo__AvatarModifierPackageType;
    pOVar3 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    key = mscorlib.dll::System::String::String_Concat
                    ((Object *)::StringLiteral__,pOVar3,(MethodInfo *)0x0);
    if (this_01 !=
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) {
      bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
               WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
               KogamaSettingWrapperBase]::
               Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                         (this_01,key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         );
      if (bVar8 == 0) {
        return;
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this_01,key,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                );
      pMVar2 = (pMVar1->fields).runtimeDataModifiers;
      if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                  (pMVar2,(Object *)this_01,(MethodInfo *)0x0);
        pMVar1 = (MVInteractable *)(pMVar1->fields).modifierPackages;
        if (pMVar1 != (MVInteractable *)0x0) {
          method = (MethodInfo *)0x0;
          this = pMVar1;
          if (cRam_? == '\0') {
            func_?(_UNK_?,pAVar7,ppMVar6,unaff_EBX);
            cRam_? = '\x01';
          }
          packageType = type;
          if (type != AvatarModifierPackageType__Enum_None) {
            if ((((uint)(TypeInfo__AvatarModifierPackageFactory->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__AvatarModifierPackageFactory->_1).cctor_started == 0)) {
              func_?(TypeInfo__AvatarModifierPackageFactory);
            }
            pAVar9 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                                ((AvatarModifierPackage *)&stack0xffffffbc,packageType,
                                 (MethodInfo *)0x0);
            pvVar10 = (void *)pAVar9->id;
            iVar11 = (pAVar9->duration).currentCryptoKey;
            AVar12 = (pAVar9->duration).hiddenValue;
            pBVar13 = (pAVar9->duration).hiddenValueOld;
            fVar14 = (pAVar9->duration).fakeValue;
            pTVar15 = *(Transform **)&(pAVar9->duration).inited;
            pAVar16 = pAVar9->avatarModifiers;
            pDVar17 = pAVar9->actionsToTakeVsTypes;
            pSVar18 = (ScaleAnimationBase__Class *)(pAVar9->timeStamp).currentCryptoKey;
            AVar19 = (pAVar9->timeStamp).hiddenValue;
            pBVar20 = (pAVar9->timeStamp).hiddenValueOld;
            fVar21 = (pAVar9->timeStamp).fakeValue;
            fVar22 = *(float *)&(pAVar9->timeStamp).inited;
            fVar23 = *(float *)&pAVar9->persistant;
            fVar24 = (float)pAVar9->avatarModifierPackageType;
            pTVar25 = (Transform *)pAVar9->avatarModifierPackageAdditionPolicy;
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            func_?(&stack0xffffffbc,0,0x40);
            method_00 = TypeInfo__AvatarModifierPackages___RemoveModifierPackage_c__AnonStorey2;
            this_00 = (ScaleAnimationBase *)func_?();
            ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
            pMVar1 = this;
            if (this_00 != (ScaleAnimationBase *)0x0) {
              (this_00->fields)._._._._.m_CachedPtr = pvVar10;
              (this_00->fields).state = iVar11;
              (this_00->fields).originalScale.x = (float)AVar12;
              (this_00->fields).originalScale.y = (float)pBVar13;
              (this_00->fields).originalScale.z = fVar14;
              (this_00->fields).target = pTVar15;
              (this_00->fields).testState = (int32_t)pAVar16;
              (this_00->fields).OnScaleAnimationStopped =
                   (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)pDVar17;
              this_00[1].klass = pSVar18;
              this_00[1].monitor = (MonitorData *)AVar19;
              this_00[1].fields._._._._.m_CachedPtr = pBVar20;
              this_00[1].fields.state = (int32_t)fVar21;
              this_00[1].fields.originalScale.x = fVar22;
              this_00[1].fields.originalScale.y = fVar23;
              this_00[1].fields.originalScale.z = fVar24;
              this_00[1].fields.target = pTVar25;
              (this_00->fields)._._._._.m_CachedPtr = (void *)id;
              pAVar26 = (this->fields).modifierPackages;
              type = func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)type,(Object *)this_00,
                         MethodInfo__AvatarModifierPackages___RemoveModifierPackage_c__AnonStorey2____m__0_AvatarModifierPackage_
                         ,
                         MethodInfo__System__Predicate<AvatarModifierPackage>__Predicate_System__Object__void__
                        );
              if (pAVar26 != (AvatarModifierPackages *)0x0) {
                iVar11 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                         List_1_VoxelHit__FindIndex
                                   ((List_1_VoxelHit_ *)pAVar26,(Predicate_1_VoxelHit_ *)type,
                                    MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__FindIndex_System__Predicate<AvatarModifierPackage>_
                                   );
                if (iVar11 == -1) {
                  return;
                }
                pAVar26 = (pMVar1->fields).modifierPackages;
                if (pAVar26 != (AvatarModifierPackages *)0x0) {
                  pAVar9 = mscorlib.dll::System::Collections::Generic::
                            List`1[AvatarModifierPackage]::List_1_AvatarModifierPackage__get_Item
                                      ((AvatarModifierPackage *)&stack0xffffff3c,
                                       (List_1_AvatarModifierPackage_ *)pAVar26,iVar11,
                                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__get_Item_int_
                                      );
                  iVar27 = pAVar9->id;
                  iVar28 = (pAVar9->duration).currentCryptoKey;
                  AVar12 = (pAVar9->duration).hiddenValue;
                  pBVar13 = (pAVar9->duration).hiddenValueOld;
                  fVar14 = (pAVar9->duration).fakeValue;
                  uVar29._0_1_ = (pAVar9->duration).inited;
                  uVar29._1_3_ = *(undefined3 *)&(pAVar9->duration).field_0x11;
                  pAVar16 = pAVar9->avatarModifiers;
                  pDVar17 = pAVar9->actionsToTakeVsTypes;
                  iVar30 = (pAVar9->timeStamp).currentCryptoKey;
                  AVar19 = (pAVar9->timeStamp).hiddenValue;
                  pBVar20 = (pAVar9->timeStamp).hiddenValueOld;
                  fVar21 = (pAVar9->timeStamp).fakeValue;
                  uVar31._0_1_ = (pAVar9->timeStamp).inited;
                  uVar31._1_3_ = *(undefined3 *)&(pAVar9->timeStamp).field_0x11;
                  uVar32._0_1_ = pAVar9->persistant;
                  uVar32._1_3_ = *(undefined3 *)&pAVar9->field_0x35;
                  iVar33 = pAVar9->avatarModifierPackageType;
                  iVar34 = pAVar9->avatarModifierPackageAdditionPolicy;
                  func_?(&stack0xffffffbc);
                  pAVar26 = (pMVar1->fields).modifierPackages;
                  if (pAVar26 != (AvatarModifierPackages *)0x0) {
                    value.duration.currentCryptoKey = iVar28;
                    value.id = iVar27;
                    value.duration.hiddenValue = AVar12;
                    value.duration.hiddenValueOld = pBVar13;
                    value.duration.fakeValue = fVar14;
                    value.duration.inited = (bool)uVar29;
                    value.duration._17_3_ = SUB43(uVar29,1);
                    value.avatarModifiers = pAVar16;
                    value.actionsToTakeVsTypes = pDVar17;
                    value.timeStamp.currentCryptoKey = iVar30;
                    value.timeStamp.hiddenValue = AVar19;
                    value.timeStamp.hiddenValueOld = pBVar20;
                    value.timeStamp.fakeValue = fVar21;
                    value.timeStamp.inited = (bool)uVar31;
                    value.timeStamp._17_3_ = SUB43(uVar31,1);
                    value.persistant = (bool)uVar32;
                    value._53_3_ = SUB43(uVar32,1);
                    value.avatarModifierPackageType = iVar33;
                    value.avatarModifierPackageAdditionPolicy = iVar34;
                    mscorlib.dll::System::Collections::Generic::List`1[AvatarModifierPackage]::
                    List_1_AvatarModifierPackage__set_Item
                              ((List_1_AvatarModifierPackage_ *)pAVar26,iVar11,value,
                               MethodInfo__System__Collections__Generic__List<AvatarModifierPackage>__set_Item_int__AvatarModifierPackage_
                              );
                    return;
                  }
                }
              }
            }
            func_?();
            pcVar35 = (code *)swi(3);
            (*pcVar35)();
            return;
          }
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}


/* Void RestoreShield(Single) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_RestoreShield
               (MVInteractable *this,float restoredShieldAmount,MethodInfo *method)

{
  pMVar1 = (this->fields).shield;
  if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
    fVar2 = (float10)(*(code *)(pMVar1->klass->vtable).get_Value.method)
                               (pMVar1,(pMVar1->klass->vtable).set_Value.methodPtr);
    (*(code *)(pMVar1->klass->vtable).set_Value.method)
              (pMVar1,(float)fVar2 + restoredShieldAmount,pMVar1->klass[1]._0.image);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MVInteractable::MVInteractable_Update
               (MVInteractable *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pAVar4 = (this->fields).modifierPackages;
  if (pAVar4 != (AvatarModifierPackages *)0x0) {
    AvatarModifierPackages::AvatarModifierPackages_Update(pAVar4,(MethodInfo *)0x0);
    pAVar4 = (this->fields).modifierPackages;
    if ((pAVar4 != (AvatarModifierPackages *)0x0) &&
       (this_00 = AvatarModifierPackages::AvatarModifierPackages_ComputeModifierEffectGroupedById
                            (pAVar4,AvatarModifierEffect__Enum_FlamerDamagePrSec,0.0,
                             (MethodInfo *)0x0),
       this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]
      ::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                 &stack0xffffffac,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_float>__GetEnumerator__);
      uStack_1 = 0;
      while( true ) {
        do {
          cVar5 = func_?();
          if (cVar5 == '\0') {
            uStack_1 = 0xffffffff;
            func_?();
            fVar6 = (float10)(*(code *)(this->klass->vtable).HandleModifierEffect.method)();
            fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                              ((MethodInfo *)0x0);
            if (fVar7 * (float)fVar6 != _UNK_?) {
              (*(code *)(this->klass->vtable).__unknown.method)();
            }
            fVar6 = (float10)(*(code *)(this->klass->vtable).HandleModifierEffect.method)();
            fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                              ((MethodInfo *)0x0);
            if ((_UNK_? - (this->fields).poisonResist) * fVar7 * (float)fVar6 !=
                _UNK_?) {
              (*(code *)(this->klass->vtable).__unknown.method)();
            }
            fVar6 = (float10)(*(code *)(this->klass->vtable).HandleModifierEffect.method)();
            fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                              ((MethodInfo *)0x0);
            if ((_UNK_? - (this->fields).poisonResist) * fVar7 * (float)fVar6 !=
                _UNK_?) {
              (*(code *)(this->klass->vtable).__unknown.method)();
            }
            fVar7 = (this->fields).healthRegenerationPerSecondSetting;
            fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                              ((MethodInfo *)0x0);
            if (fVar8 * fVar7 != _UNK_?) {
              (*(code *)(this->klass->vtable).__unknown.method)();
            }
            fVar7 = (this->fields).healthRegenerationPerSecondSetting;
            fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                              ((MethodInfo *)0x0);
            if (fVar8 * fVar7 != _UNK_?) {
              (*(code *)(this->klass->vtable).__unknown.method)();
            }
            fVar7 = (this->fields).shieldRegenerationPerSecondSetting;
            fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                              ((MethodInfo *)0x0);
            if (fVar8 * fVar7 != _UNK_?) {
              (*(code *)(this->klass->vtable).RestoreShield.method)();
            }
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          LevelRewardsManager::LevelRewardsManager_get_NextReward
                    ((LevelRewardsManager *)&stack0xffffffc0,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_float>__get_Current__
                    );
          actorNumber = func_?();
          fVar6 = (float10)func_?();
          fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
        } while (fVar7 * (float)fVar6 == _UNK_?);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_01 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
        ;
        if ((this_01 == (MVAvatar *)0x0) ||
           (this_02 = MVAvatar::MVAvatar_get_Shield(this_01,(MethodInfo *)0x0),
           this_02 == (MVRuntimeDataVariableClampedFloat *)0x0)) break;
        MVPlayerContainer::MVPlayerContainer_get_Item
                  ((MVPlayerContainer *)this_02,actorNumber,(MethodInfo *)in_stack_9);
        in_stack_9 = this;
        func_?();
      }
    }
  }
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void <Init>m__0(AvatarModifierPackage) */

void Assembly-CSharp.dll::MVInteractable::MVInteractable__Init_m__0
               (MVInteractable *this,AvatarModifierPackage modifier,MethodInfo *method)

{
  pOVar1 = PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
           PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                     ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)&modifier,(MethodInfo *)0x0
                     );
  (*(code *)(this->klass->vtable).RemoveModifier.method)
            (this,pOVar1,modifier.id,(this->klass->vtable).HasModifierEffect.methodPtr);
  return;
}


/* MVInteractable() */

void Assembly-CSharp.dll::MVInteractable::MVInteractable__ctor
               (MVInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (AvatarModifierPackages *)func_?(TypeInfo__AvatarModifierPackages);
  AvatarModifierPackages::AvatarModifierPackages__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).modifierPackages = this_00;
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

