
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
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).teamData;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      if (inputField != (SettingsInputField *)0x0) {
        SettingsInputField::SettingsInputField_Initialize
                  (inputField,key,::StringLiteral__,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields).teamData;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar1,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (inputField != (SettingsInputField *)0x0) {
          value.m_Index = 0;
          if (TVar3.m_Index == 0) {
code_?:
            SettingsInputField::SettingsInputField_Initialize
                      (inputField,key,(String *)value.m_Index,(MethodInfo *)0x0);
            return;
          }
          if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
            value = TVar3;
          }
          if ((String *)value.m_Index != (String *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
        ppDVar3 = &(this->fields).teamData;
        *ppDVar3 = pDStack2;
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
        TeamEditorSettings_SetActiveButtons(this,*ppDVar3,(MethodInfo *)0x0);
        *ppDVar3 = (Dictionary_2_System_Object_System_Object_ *)0x0;
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
          this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                    (this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          if (this_02 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)key,
                       (Object *)::StringLiteral__,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
              MVNetworkGame+OperationRequests::
              MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                        (this_03,(this->fields).woID,
                         (Dictionary_2_System_Object_System_Object_ *)this_02,(MethodInfo *)0x0);
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
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)teamData,
                       (Object *)StringLiteral_Blue,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,bVar2,(MethodInfo *)0x0);
      pGVar1 = (this->fields).redTeamButton;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)teamData,
                         (Object *)StringLiteral_Red,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,bVar2,(MethodInfo *)0x0);
        pGVar1 = (this->fields).greenTeamButton;
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)teamData,
                           (Object *)StringLiteral_Green,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,bVar2,(MethodInfo *)0x0);
          pGVar1 = (this->fields).yellowTeamButton;
          bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                             teamData,(Object *)StringLiteral_Yellow,
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

