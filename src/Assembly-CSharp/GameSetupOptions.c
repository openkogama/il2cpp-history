
/* Void Start() */

void Assembly-CSharp.dll::GameSetupOptions::GameSetupOptions_Start
               (GameSetupOptions *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GameSetupOptions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GameSetupOptions->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = GameSetupOptions_get_IsReviveEnabled((MethodInfo *)0x0);
  TypeInfo__GameSetupOptions->static_fields->isReviveEnabled = bVar1;
  pTVar2 = (this->fields).reviveToggleButton;
  if (TypeInfo__GameSetupOptions->static_fields->isReviveEnabled == 0) {
    if (pTVar2 == (ToggleButtonAnimation *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (cRam_? == '\0') {
      return;
    }
    cRam_? = '\0';
  }
  else {
    if (pTVar2 == (ToggleButtonAnimation *)0x0) goto code_?;
    if (cRam_? != '\0') {
      return;
    }
    cRam_? = '\x01';
  }
  uStack4 = 0;
  SStack_5.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_5.monitor = (MonitorData *)0x0;
  SStack_5.fields.value = 0.0;
  SStack_5.fields.OnChange = (Action_1_Single_ *)0x0;
  pSStack_6 = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  pMStack_7 = (MonitorData *)0x0;
  puStack_8 = (undefined *)0x0;
  SStack_9.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_9.monitor = (MonitorData *)0x0;
  SStack_9.fields.value = 0.0;
  SStack_9.fields.OnChange = (Action_1_Single_ *)0x0;
  fRam00000044 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar10 = fRam00000024;
  fRam00000030 = fRam00000024;
  fRam0000002c = fRam00000024;
  if (cRam_? == '\0') {
    if (pRRam0000000c == (RectTransform *)0x0) goto code_?;
    pRVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffac,pRRam0000000c,(MethodInfo *)0x0);
    pSStack_6 = (SubscribableVariableBase_1_System_Single___Class *)pRVar11->m_XMin;
    pMStack_7 = (MonitorData *)pRVar11->m_YMin;
    puStack_8 = (undefined *)pRVar11->m_Width;
    fRam0000002c = SubscribableVariableBase`1[System::Single]::
                   SubscribableVariableBase_1_System_Single__get_Value
                             ((SubscribableVariableBase_1_System_Single_ *)&pSStack_6,
                              (MethodInfo *)0x0);
    fRam0000002c = fRam0000002c + fVar10;
  }
  else {
    if (pRRam0000000c == (RectTransform *)0x0) goto code_?;
    pRVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffac,pRRam0000000c,(MethodInfo *)0x0);
    SStack_5.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar11->m_XMin;
    SStack_5.monitor = (MonitorData *)pRVar11->m_YMin;
    SStack_5.fields.value = pRVar11->m_Width;
    SStack_5.fields.OnChange = (Action_1_Single_ *)pRVar11->m_Height;
    fRam00000030 = SubscribableVariableBase`1[System::Single]::
                   SubscribableVariableBase_1_System_Single__get_Value(&SStack_5,(MethodInfo *)0x0)
    ;
    fRam00000030 = fRam00000030 + fVar10;
  }
  fVar10 = fRam00000024;
  fRam00000038 = fRam00000024;
  fRam00000034 = fRam00000024;
  if (cRam_? == '\0') {
    if (pRRam0000000c == (RectTransform *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pRVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffac,pRRam0000000c,(MethodInfo *)0x0);
    SStack_9.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar11->m_XMin;
    SStack_9.monitor = (MonitorData *)pRVar11->m_YMin;
    SStack_9.fields.value = pRVar11->m_Width;
    SStack_9.fields.OnChange = (Action_1_Single_ *)pRVar11->m_Height;
    fRam00000034 = SubscribableVariableBase`1[System::Single]::
                   SubscribableVariableBase_1_System_Single__get_Value(&SStack_9,(MethodInfo *)0x0)
    ;
    fRam00000034 = fVar10 - fRam00000034;
  }
  else {
    if (pRRam0000000c == (RectTransform *)0x0) goto code_?;
    pRVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffac,pRRam0000000c,(MethodInfo *)0x0);
    fRam00000038 = SubscribableVariableBase`1[System::Single]::
                   SubscribableVariableBase_1_System_Single__get_Value
                             ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffbc,
                              (MethodInfo *)pRVar11->m_XMin);
    fRam00000038 = fVar10 - fRam00000038;
  }
  fRam00000040 = fRam00000028;
  fRam0000003c = fRam00000028;
  if (cRam_? == '\0') {
    fRam0000003c = fRam00000020 + fRam00000028;
    return;
  }
  fRam00000040 = fRam00000020 + fRam00000028;
  return;
}


/* Void ToggleRevive() */

void Assembly-CSharp.dll::GameSetupOptions::GameSetupOptions_ToggleRevive
               (GameSetupOptions *this,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined4 *)&stack0xffffffac;
  func_?();
  puVar2 = (undefined4 *)&stack0xffffffac;
  if ((((uint)(TypeInfo__GameSetupOptions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puVar2 = (undefined4 *)&stack0xffffffac, (TypeInfo__GameSetupOptions->_1).cctor_started == 0))
  {
    func_?(TypeInfo__GameSetupOptions);
    puVar2 = puVar1;
  }
  TypeInfo__GameSetupOptions->static_fields->isReviveEnabled =
       TypeInfo__GameSetupOptions->static_fields->isReviveEnabled == 0;
  TypeInfo__GameSetupOptions->static_fields->reviveUpdated = 0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((((this_00 != (MVWorldObjectClientManager *)0x0) &&
       (this_01 = (String__Class *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                            (this_00,
                             MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                            ), this_01 != (String__Class *)0x0)) &&
      (this_02 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameOptionSettingsManager
                           ((MVGameOptionDataObject *)this_01,(MethodInfo *)0x0),
      this_02 != (GameOptionSettingsManager *)0x0)) &&
     (this_03 = (List_1_UnityEngine_Color32_ *)
                MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                GameOptions::GameOptionSettingsManager::GameOptionSettingsManager_get_GetOptions
                          (this_02,(MethodInfo *)0x0), this_03 != (List_1_UnityEngine_Color32_ *)0x0
     )) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__GetEnumerator
              ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffb8,this_03,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__GetEnumerator__
              );
    do {
      do {
        cVar3 = func_?();
        if (cVar3 == '\0') {
          *puVar2 = 0xa5;
          goto code_?;
        }
        this_01 = (String__Class *)&stack0xffffffc8;
        pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__get_Current__
                           );
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar4,(MethodInfo *)0x0);
        iVar5 = func_?();
      } while (iVar5 == 0);
      this_04 = (KogamaSettingBoolBase *)func_?();
      puVar2 = (undefined4 *)0x0;
      if (this_04 == (KogamaSettingBoolBase *)0x0) goto code_?;
      pSVar6 = (String *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_04,(MethodInfo *)0x0)
      ;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        this_01 = TypeInfo__System__String;
        func_?();
      }
      bVar7 = mscorlib.dll::System::String::String_op_Equality
                        (pSVar6,StringLiteral_AllowRevive,(MethodInfo *)0x0);
    } while (bVar7 == 0);
    if ((((uint)(TypeInfo__GameSetupOptions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GameSetupOptions->_1).cctor_started == 0)) {
      func_?();
    }
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
    KogamaSettingBoolBase::KogamaSettingBoolBase_set_ValueBool
              (this_04,TypeInfo__GameSetupOptions->static_fields->isReviveEnabled,(MethodInfo *)0x0)
    ;
    puVar2 = (undefined4 *)0x0;
    if (this_01 != (String__Class *)0x0) {
      MVGameOptionDataObject::MVGameOptionDataObject_UpdateSetting
                ((MVGameOptionDataObject *)this_01,(KogamaSettingWrapperBase *)this_04,
                 (MethodInfo *)0x0);
      *puVar2 = 0xa5;
code_?:
      func_?();
      if (this_01 != (String__Class *)0x0) {
        MVGameOptionDataObject::MVGameOptionDataObject_Submit
                  ((MVGameOptionDataObject *)this_01,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__GameSetupOptions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GameSetupOptions->_1).cctor_started == 0)) {
          func_?();
        }
        pOVar4 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar6 = mscorlib.dll::System::String::String_Concat
                           ((Object *)StringLiteral_Revive_enabled__,pOVar4,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar8 = (Il2CppClass *)0x0;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar6,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pIVar8;
        return;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* GameSetupOptions() */

void Assembly-CSharp.dll::GameSetupOptions::GameSetupOptions__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__GameSetupOptions->static_fields->isReviveEnabled = 1;
  return;
}


/* Boolean get_IsReviveEnabled() */

bool Assembly-CSharp.dll::GameSetupOptions::GameSetupOptions_get_IsReviveEnabled(MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack_4 = 0;
  pKStack_5 = (KogamaSettingBoolBase__Class *)0x0;
  pCStack_6 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  func_?();
  if ((((uint)(TypeInfo__GameSetupOptions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GameSetupOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__GameSetupOptions);
  }
  if (TypeInfo__GameSetupOptions->static_fields->reviveUpdated != 0) {
    if ((((uint)(TypeInfo__GameSetupOptions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GameSetupOptions->_1).cctor_started == 0)) {
      func_?(TypeInfo__GameSetupOptions);
    }
    pGVar7 = TypeInfo__GameSetupOptions->static_fields;
code_?:
    bVar8 = pGVar7->isReviveEnabled;
    *unaff_FS_OFFSET = uStack_3;
    return bVar8;
  }
  if ((((uint)(TypeInfo__GameSetupOptions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GameSetupOptions->_1).cctor_started == 0)) {
    func_?(TypeInfo__GameSetupOptions);
  }
  TypeInfo__GameSetupOptions->static_fields->reviveUpdated = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((((this != (MVWorldObjectClientManager *)0x0) &&
       (this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                            (this,
                             MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                            ), this_00 != (MVRoundCube *)0x0)) &&
      (this_01 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameOptionSettingsManager
                           ((MVGameOptionDataObject *)this_00,(MethodInfo *)0x0),
      this_01 != (GameOptionSettingsManager *)0x0)) &&
     (this_02 = (List_1_UnityEngine_Color32_ *)
                MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                GameOptions::GameOptionSettingsManager::GameOptionSettingsManager_get_GetOptions
                          (this_01,(MethodInfo *)0x0), this_02 != (List_1_UnityEngine_Color32_ *)0x0
     )) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__GetEnumerator
              ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffb8,this_02,
               MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__GetEnumerator__
              );
    uStack_1 = 0;
    do {
      do {
        pCStack_6 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
                     &UNK_?;
        cVar9 = func_?();
        if (cVar9 == '\0') {
          iVar10 = 0xa1;
          goto code_?;
        }
        mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::Serialization
        ::JsonProperty]::
        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&pCStack_6,
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingValueWrapperBase>__get_Current__
                  );
        pKStack_5 = 
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBoolBase
        ;
        iVar10 = func_?();
      } while (iVar10 == 0);
      this_03 = (KogamaSettingBoolBase *)func_?();
      if (this_03 == (KogamaSettingBoolBase *)0x0) goto code_?;
      a = (String *)
          mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
          Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_03,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar8 = mscorlib.dll::System::String::String_op_Equality
                        (a,StringLiteral_AllowRevive,(MethodInfo *)0x0);
    } while (bVar8 == 0);
    bVar8 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
            KogamaSettingTypes::KogamaSettingBoolBase::KogamaSettingBoolBase_get_ValueBool
                      (this_03,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__GameSetupOptions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GameSetupOptions->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__GameSetupOptions->static_fields->isReviveEnabled = bVar8;
    bStack_4 = TypeInfo__GameSetupOptions->static_fields->isReviveEnabled;
    iVar10 = 0xa7;
code_?:
    uStack_1 = 0xffffffff;
    func_?();
    if (pKStack_5 == (KogamaSettingBoolBase__Class *)0x0) {
      if (iVar10 == 0xa7) {
        *unaff_FS_OFFSET = uStack_3;
        return bStack_4;
      }
      if ((((uint)(TypeInfo__GameSetupOptions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GameSetupOptions->_1).cctor_started == 0)) {
        func_?();
      }
      pGVar7 = TypeInfo__GameSetupOptions->static_fields;
      goto code_?;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar8 = (*pcVar11)();
  return bVar8;
}

