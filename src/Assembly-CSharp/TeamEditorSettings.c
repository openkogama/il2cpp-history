
/* Void InitInputfield(SettingsInputField, GameObject, MVTeam) */

void Assembly-CSharp.dll::TeamEditorSettings::TeamEditorSettings_InitInputfield
               (TeamEditorSettings *this,SettingsInputField *inputField,GameObject *button,
               MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = (int *)func_?(TypeInfo__MV__WorldObject__MVTeam,&team);
  if (piVar1 != (int *)0x0) {
    key = (String *)(**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
    pMVar2 = (MVTeam__Enum *)func_?(piVar1);
    team = *pMVar2;
    pDVar3 = (this->fields).teamData;
    if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                          *)pDVar3,key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar4 == 0) {
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        if (inputField != (SettingsInputField *)0x0) {
          SettingsInputField::SettingsInputField_Initialize
                    (inputField,key,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0
                    );
          return;
        }
      }
      else {
        pDVar3 = (this->fields).teamData;
        if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             ((Dictionary_2_System_Type_Pool_ *)pDVar3,(Type *)key,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (inputField != (SettingsInputField *)0x0) {
            value = (Pool *)0x0;
            if (pPVar5 == (Pool *)0x0) {
code_?:
              SettingsInputField::SettingsInputField_Initialize
                        (inputField,key,(String *)value,(MethodInfo *)0x0);
              return;
            }
            if ((String__Class *)pPVar5->klass == TypeInfo__System__String) {
              value = pPVar5;
            }
            pSVar6 = TypeInfo__System__String;
            if (value != (Pool *)0x0) goto code_?;
            goto code_?;
          }
        }
      }
    }
  }
  func_?(0);
  pPVar5 = extraout_ECX;
  pSVar6 = extraout_EDX;
code_?:
  func_?(pPVar5,pSVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::TeamEditorSettings::TeamEditorSettings_Initialize
               (TeamEditorSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  (this->fields).woID = woID;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_TeamEditor,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      this_02 = (PrefabPool *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_01,woID,(MethodInfo *)0x0);
      if (this_02 != (PrefabPool *)0x0) {
        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
                 PrefabPool::PrefabPool_get_MVBatteryPrefab(this_02,(MethodInfo *)0x0);
        (this->fields).teamData = pDVar1;
        TeamEditorSettings_InitInputfield
                  (this,(this->fields).blueTeam,(this->fields).blueTeamButton,MVTeam__Enum_Blue,
                   (MethodInfo *)0x0);
        TeamEditorSettings_InitInputfield
                  (this,(this->fields).redTeam,(this->fields).redTeamButton,MVTeam__Enum_Red,
                   (MethodInfo *)0x0);
        TeamEditorSettings_InitInputfield
                  (this,(this->fields).greenTeam,(this->fields).greenTeamButton,MVTeam__Enum_Green,
                   (MethodInfo *)0x0);
        TeamEditorSettings_InitInputfield
                  (this,(this->fields).yellowTeam,(this->fields).yellowTeamButton,
                   MVTeam__Enum_Yellow,(MethodInfo *)0x0);
        TeamEditorSettings_SetActiveButtons(this,(this->fields).teamData,(MethodInfo *)0x0);
        (this->fields).teamData = (Dictionary_2_System_Object_System_Object_ *)0x0;
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::TeamEditorSettings::TeamEditorSettings_OnSettingChanged
               (TeamEditorSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
    value = (Object *)unaff_ESI;
  }
  else {
    this_01 = (PrefabPool *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_00,(this->fields).woID,(MethodInfo *)0x0);
    if (this_01 == (PrefabPool *)0x0) goto code_?;
    teamData = (Dictionary_2_System_Object_System_Object_ *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab(this_01,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    value_00 = (String *)0x0;
    if (value == (Object *)0x0) {
code_?:
      bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value_00,(MethodInfo *)0x0);
      unaff_ESI = (Dictionary_2_System_Object_System_Object_ *)value;
      if (bVar1 == 0) {
        if (value != (Object *)0x0) {
          this_02 = (TeamEditorSettings *)0x0;
          if ((String__Class *)value->klass == TypeInfo__System__String) {
            this_02 = (TeamEditorSettings *)value;
          }
          if (this_02 == (TeamEditorSettings *)0x0) goto code_?;
          this_03 = (Collection_1_VoxelHit_ *)
                    mscorlib.dll::System::String::String_Trim((String *)this_02,(MethodInfo *)0x0);
          if (this_03 != (Collection_1_VoxelHit_ *)0x0) {
            key = (String *)&UNK_?;
            pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items(this_03,(MethodInfo *)0x0);
            if (pIVar2 == (IList_1_VoxelHit_ *)0x0) goto code_?;
            if (teamData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              value_01 = (Theme *)0x0;
              if ((String__Class *)value->klass == TypeInfo__System__String) {
                value_01 = (Theme *)value;
              }
              if (value_01 == (Theme *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
              Dictionary_2_System_String_Theme__set_Item
                        ((Dictionary_2_System_String_Theme_ *)teamData,(String *)&UNK_?,
                         value_01,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
              TeamEditorSettings_SetActiveButtons(this_02,teamData,(MethodInfo *)0x0);
              pSVar3 = (this_02->fields).settingsBase;
              if (pSVar3 != (SettingsBase *)0x0) {
                SettingsBase::SettingsBase_OnSettingChanged
                          (pSVar3,(String *)&UNK_?,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
code_?:
        if (teamData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Remove
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)teamData,key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                    );
          unaff_ESI = (Dictionary_2_System_Object_System_Object_ *)func_?();
          System.Core.dll::System::Collections::Generic::
          HashSet`1[AvatarModifierPackage+AvatarModifier]::
          HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                    ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)unaff_ESI,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          if (unaff_ESI != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                        *)unaff_ESI,key,
                       (CrossPlatformInputManager_VirtualButton *)
                       TypeInfo__System__String->static_fields->Empty,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_04 != (MVNetworkGame_OperationRequests *)0x0) {
              MVNetworkGame+OperationRequests::
              MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                        (this_04,(this->fields).woID,unaff_ESI,(MethodInfo *)0x0);
              this_05 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (this_05 != (MVNetworkGame *)0x0) {
                this_06 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                    ((DayNightCycle *)this_05,(MethodInfo *)0x0);
                handle = TypeRef__MV__WorldObject__MVTeam;
                if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                  func_?();
                }
                enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
                  func_?();
                }
                pOVar4 = mscorlib.dll::System::Enum::Enum_Parse_1(enumType,key,1,(MethodInfo *)0x0);
                unaff_ESI = (Dictionary_2_System_Object_System_Object_ *)key;
                if ((this_06 != (SkyParam *)0x0) && (pOVar4 != (Object *)0x0)) {
                  if ((pOVar4->klass->_0).element_class !=
                      (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) goto code_?;
                  pMVar5 = (MVTeam__Enum *)func_?();
                  MVTeamManager::MVTeamManager_SetTeamNameToDefault
                            ((MVTeamManager *)this_06,*pMVar5,(MethodInfo *)0x0);
                  TeamEditorSettings_SetActiveButtons(this,teamData,(MethodInfo *)0x0);
                  pSVar3 = (this->fields).settingsBase;
                  if (pSVar3 != (SettingsBase *)0x0) {
                    SettingsBase::SettingsBase_RemoveData(pSVar3,key,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    if ((String__Class *)value->klass == TypeInfo__System__String) {
      value_00 = (String *)value;
    }
    if (value_00 != (String *)0x0) goto code_?;
  }
code_?:
  func_?(value);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetActiveButtons(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TeamEditorSettings::TeamEditorSettings_SetActiveButtons
               (TeamEditorSettings *this,Dictionary_2_System_Object_System_Object_ *teamData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).blueTeamButton;
  if (teamData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)teamData,StringLiteral_Blue,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,bVar2,(MethodInfo *)0x0);
      pGVar1 = (this->fields).redTeamButton;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                          *)teamData,StringLiteral_Red,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,bVar2,(MethodInfo *)0x0);
        pGVar1 = (this->fields).greenTeamButton;
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                            *)teamData,StringLiteral_Green,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,bVar2,(MethodInfo *)0x0);
          pGVar1 = (this->fields).yellowTeamButton;
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                  WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                  KogamaSettingWrapperBase]::
                  Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                            ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                              *)teamData,StringLiteral_Yellow,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (pGVar1 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,bVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* TeamEditorSettings() */

void Assembly-CSharp.dll::TeamEditorSettings::TeamEditorSettings__ctor
               (TeamEditorSettings *this,MethodInfo *method)

{
  (this->fields).woID = -1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

