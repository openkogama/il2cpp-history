
/* Void InitInputfield(SettingsInputField, GameObject, MVTeam) */

void Assembly-CSharp.dll::TeamEditorSettings::TeamEditorSettings_InitInputfield
               (TeamEditorSettings *this,SettingsInputField *inputField,GameObject *button,
               MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  key = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).teamData;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      if (inputField != (SettingsInputField *)0x0) {
        SettingsInputField::SettingsInputField_Initialize
                  (inputField,key,::StringLiteral__,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      this_01 = (this->fields).teamData;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pSVar2 = (String *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (inputField != (SettingsInputField *)0x0) {
          value = (String *)0x0;
          if (pSVar2 == (String *)0x0) {
code_?:
            SettingsInputField::SettingsInputField_Initialize
                      (inputField,key,value,(MethodInfo *)0x0);
            return;
          }
          if (pSVar2->klass == TypeInfo__System__String) {
            value = pSVar2;
          }
          if (value != (String *)0x0) goto code_?;
          goto code_?;
        }
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


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::TeamEditorSettings::TeamEditorSettings_Initialize
               (TeamEditorSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  this_00 = (this->fields).settingsBase;
  (this->fields).woID = woID;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_TeamEditor,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_01,woID,(MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObject *)0x0) {
        pDStack2 = (pMVar1->fields).data;
        (this->fields).teamData = pDStack2;
        func_?();
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
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::TeamEditorSettings::TeamEditorSettings_OnSettingChanged
               (TeamEditorSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeRef__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__System__Type);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_01 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_01,(this->fields).woID,(MethodInfo *)0x0),
     pMVar1 == (MVWorldObject *)0x0)) {
code_?:
    func_?();
  }
  else {
    this_00 = (pMVar1->fields).data;
    pSVar2 = (String *)0x0;
    if (value == (Object *)0x0) {
code_?:
      bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        if (value != (Object *)0x0) {
          pOVar4 = (Object *)0x0;
          if ((String__Class *)value->klass == TypeInfo__System__String) {
            pOVar4 = value;
          }
          if (pOVar4 == (Object *)0x0) goto code_?;
          pSVar2 = (String *)0x0;
          if ((String__Class *)value->klass == TypeInfo__System__String) {
            pSVar2 = (String *)value;
          }
          pSVar2 = mscorlib.dll::System::String::String_Trim(pSVar2,(MethodInfo *)0x0);
          if (pSVar2 != (String *)0x0) {
            if ((pSVar2->fields)._stringLength == 0) goto code_?;
            if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              pOVar4 = (Object *)0x0;
              if ((String__Class *)value->klass == TypeInfo__System__String) {
                pOVar4 = value;
              }
              if (pOVar4 == (Object *)0x0) goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__set_Item
                        (this_00,(Object *)
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         ,pOVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
              TeamEditorSettings_SetActiveButtons(this,this_00,(MethodInfo *)0x0);
              pSVar5 = (this->fields).settingsBase;
              if (pSVar5 != (SettingsBase *)0x0) {
                SettingsBase::SettingsBase_OnSettingChanged
                          (pSVar5,(String *)0x0,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
code_?:
        if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Remove
                    (this_00,(Object *)key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                    );
          this_02 = (Dictionary_2_System_Object_System_Object_ *)func_?();
          if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                      ((ParameterOverride_1_System_Object_ *)this_02,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (this_02,(Object *)key,(Object *)::StringLiteral__,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
              MVNetworkGame+OperationRequests::
              MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                        (this_03,(this->fields).woID,this_02,(MethodInfo *)0x0);
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              handle = TypeRef__MV__WorldObject__MVTeam;
              if (pMVar6 != (MVNetworkGame *)0x0) {
                if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
                if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pOVar4 = mscorlib.dll::System::Enum::Enum_Parse_1
                                   (enumType,(String *)handle,1,(MethodInfo *)0x0);
                if (pOVar4 != (Object *)0x0) {
                  if ((pOVar4->klass->_0).element_class !=
                      (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) goto code_?;
                  puVar7 = (undefined4 *)func_?();
                  MVTeamManager::MVTeamManager_SetTeamNameToDefault
                            ((MVTeamManager *)*puVar7,(MVTeam__Enum)*puVar7,(MethodInfo *)0x0);
                  TeamEditorSettings_SetActiveButtons(this,this_00,(MethodInfo *)0x0);
                  pSVar5 = (this->fields).settingsBase;
                  if (pSVar5 != (SettingsBase *)0x0) {
                    SettingsBase::SettingsBase_RemoveData(pSVar5,(String *)handle,(MethodInfo *)0x0)
                    ;
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
      pSVar2 = (String *)value;
    }
    if (pSVar2 != (String *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetActiveButtons(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TeamEditorSettings::TeamEditorSettings_SetActiveButtons
               (TeamEditorSettings *this,Dictionary_2_System_Object_System_Object_ *teamData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&StringLiteral_Yellow);
    func_?(&StringLiteral_Red);
    func_?(&StringLiteral_Blue);
    func_?(&StringLiteral_Green);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).blueTeamButton;
  if (teamData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)teamData,
                       (Object *)StringLiteral_Blue,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,bVar2,(MethodInfo *)0x0);
      pGVar1 = (this->fields).redTeamButton;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)teamData,
                         (Object *)StringLiteral_Red,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,bVar2,(MethodInfo *)0x0);
        pGVar1 = (this->fields).greenTeamButton;
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)teamData,
                           (Object *)StringLiteral_Green,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,bVar2,(MethodInfo *)0x0);
          pGVar1 = (this->fields).yellowTeamButton;
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)teamData,
                             (Object *)StringLiteral_Yellow,
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
  func_?();
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

