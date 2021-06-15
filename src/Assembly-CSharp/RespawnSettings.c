
/* Void AddRespawnTime() */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_AddRespawnTime
               (RespawnSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_01 = this;
  if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
      (this_03 = (PrefabPool *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_02,(this->fields).woID,(MethodInfo *)0x0),
      this_03 != (PrefabPool *)0x0)) &&
     (this_04 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_03,(MethodInfo *)0x0),
     this_04 !=
     (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
      *)0x0)) {
    method = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
    ;
    this = (RespawnSettings *)StringLiteral_respawnTime;
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_04,StringLiteral_respawnTime,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      in_stack_2 = &this;
      this = (RespawnSettings *)0x1e;
      in_stack_3 = TypeInfo__System__Int32;
      in_stack_4 = &UNK_?;
      value = (CrossPlatformInputManager_VirtualButton *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)this_04,StringLiteral_respawnTime,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    this_00 = (this_01->fields).settingsBase;
    in_stack_2 = &this;
    in_stack_3 = TypeInfo__System__Int32;
    this = (RespawnSettings *)0x1e;
    in_stack_4 = &UNK_?;
    this = (RespawnSettings *)func_?();
    method = (MethodInfo *)0x0;
    if (this_00 != (SettingsBase *)0x0) {
      SettingsBase::SettingsBase_OnSettingChanged
                (this_00,StringLiteral_respawnTime,(Object *)this,(MethodInfo *)0x0);
      method = (MethodInfo *)0x0;
      this = (RespawnSettings *)0x1;
      RespawnSettings_SetRespawnUIVisibility(this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  method = (MethodInfo *)0x0;
  this = (RespawnSettings *)&UNK_?;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleActiveToggle() */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_HandleActiveToggle
               (RespawnSettings *this,MethodInfo *method)

{
  this_00 = this;
  if ((this->fields).isInitialized == 0) {
    return;
  }
  if ((this->fields).isRespawnActive == 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_01 != (MVWorldObjectClientManager *)0x0) &&
        (this_02 = (PrefabPool *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_01,(this_00->fields).woID,(MethodInfo *)0x0),
        this_02 != (PrefabPool *)0x0)) &&
       (this_03 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_02,(MethodInfo *)0x0),
       this_03 !=
       (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
        *)0x0)) {
      method = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
      ;
      this = (RespawnSettings *)StringLiteral_respawnTime;
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        (this_03,StringLiteral_respawnTime,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar1 == 0) {
        in_stack_2 = &this;
        this = (RespawnSettings *)0x1e;
        in_stack_3 = TypeInfo__System__Int32;
        in_stack_4 = &UNK_?;
        pCVar5 = (CrossPlatformInputManager_VirtualButton *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)this_03,StringLiteral_respawnTime,pCVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
      }
      pSVar6 = (this_00->fields).settingsBase;
      in_stack_2 = &this;
      in_stack_3 = TypeInfo__System__Int32;
      this = (RespawnSettings *)0x1e;
      in_stack_4 = &UNK_?;
      this = (RespawnSettings *)func_?();
      method = (MethodInfo *)0x0;
      if (pSVar6 != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_OnSettingChanged
                  (pSVar6,StringLiteral_respawnTime,(Object *)this,(MethodInfo *)0x0);
        method = (MethodInfo *)0x0;
        this = (RespawnSettings *)0x1;
        RespawnSettings_SetRespawnUIVisibility(this_00,1,(MethodInfo *)0x0);
        (this_00->fields).isRespawnActive = 1;
        return;
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    woDataToRemove =
         (Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)woDataToRemove,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (RespawnSettings *)0x0;
    pCVar5 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Int32,&this);
    if (woDataToRemove != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)woDataToRemove,StringLiteral_respawnTime,pCVar5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_04 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                  (this_04,(this_00->fields).woID,woDataToRemove,(MethodInfo *)0x0);
        pSVar6 = (this_00->fields).settingsBase;
        if (pSVar6 != (SettingsBase *)0x0) {
          method = (MethodInfo *)0x0;
          this = (RespawnSettings *)StringLiteral_respawnTime;
          SettingsBase::SettingsBase_RemoveData(pSVar6,StringLiteral_respawnTime,(MethodInfo *)0x0);
          method = (MethodInfo *)0x0;
          this = (RespawnSettings *)0x0;
          RespawnSettings_SetRespawnUIVisibility(this_00,0,(MethodInfo *)0x0);
          (this_00->fields).isRespawnActive = 0;
          return;
        }
      }
    }
  }
  method = (MethodInfo *)0x0;
  this = (RespawnSettings *)&UNK_?;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_Initialize
               (RespawnSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  (this->fields).woID = woID;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize_1
              (this_00,woID,root,StringLiteral_Respawn,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 != (MVWorldObjectClientManager *)0x0) {
      this_04 = (PrefabPool *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_03,woID,(MethodInfo *)0x0);
      if (this_04 != (PrefabPool *)0x0) {
        this_05 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_04,(MethodInfo *)0x0);
        value = 0x1e;
        if (this_05 !=
            (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)0x0) {
          bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                  WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                  KogamaSettingWrapperBase]::
                  Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                            (this_05,StringLiteral_respawnTime,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          (this->fields).isRespawnActive = bVar1;
          if (bVar1 != 0) {
            pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                     Dictionary_2_System_Type_Pool__get_Item
                               ((Dictionary_2_System_Type_Pool_ *)this_05,
                                (Type *)StringLiteral_respawnTime,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (pPVar2 == (Pool *)0x0) goto code_?;
            if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            piVar3 = (int32_t *)func_?();
            value = *piVar3;
          }
          this_01 = (this->fields).respawnTimeSlider;
          if (this_01 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize_1
                      (this_01,StringLiteral_respawnTime,value,0x1e,0x708,(MethodInfo *)0x0);
            this_02 = (this->fields).respawnTimeInputField;
            if (this_02 != (SettingsInputFieldSlider *)0x0) {
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                        (this_02,StringLiteral_respawnTime,value,(MethodInfo *)0x0);
              RespawnSettings_SetRespawnUIVisibility
                        (this,(this->fields).isRespawnActive,(MethodInfo *)0x0);
              (this->fields).isInitialized = 1;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_OnSettingChanged
               (RespawnSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_respawnTime,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  if (value != (Object *)0x0) {
    if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar2 = (float *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt(*pfVar2,(MethodInfo *)0x0);
    this_00 = (this->fields).respawnTimeInputField;
    text = (String *)func_?(&stack0xfffffff8);
    if (this_00 != (SettingsInputFieldSlider *)0x0) {
      SettingsInputFieldSlider::SettingsInputFieldSlider_SetText(this_00,text,(MethodInfo *)0x0);
      this_01 = (this->fields).settingsBase;
      value_00 = (Object *)func_?();
      if (this_01 != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_OnSettingChanged
                  (this_01,StringLiteral_respawnTime,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveRespawnTime() */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_RemoveRespawnTime
               (RespawnSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  woDataToRemove =
       (Dictionary_2_System_Object_System_Object_ *)
       func_?(
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)woDataToRemove,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  value = (CrossPlatformInputManager_VirtualButton *)
          func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if (woDataToRemove != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)woDataToRemove,StringLiteral_respawnTime,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                (this_00,_UNK_?,woDataToRemove,(MethodInfo *)0x0);
      if (_UNK_? != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_RemoveData
                  (_UNK_?,StringLiteral_respawnTime,(MethodInfo *)0x0);
        RespawnSettings_SetRespawnUIVisibility((RespawnSettings *)&UNK_?,0,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetRespawnUIVisibility(Boolean) */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_SetRespawnUIVisibility
               (RespawnSettings *this,bool isRespawnActive,MethodInfo *method)

{
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).respawnTimeSettingsUI;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    pGVar2 = (GameObject *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                       (pDVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,isRespawnActive,(MethodInfo *)0x0);
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).respawnActiveCheckmark;
      if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        pGVar2 = (GameObject *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                           (pDVar1,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,isRespawnActive,(MethodInfo *)0x0);
          this_00 = (this->fields).activeToggle;
          if (this_00 != (Toggle *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set
                      (this_00,isRespawnActive,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

