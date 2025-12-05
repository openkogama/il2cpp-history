
/* Void InitInputfield(SettingsInputField, GameObject, MVTeam) */

void Assembly-CSharp.dll::TeamEditorSettings::TeamEditorSettings_InitInputfield
               (TeamEditorSettings *this,SettingsInputField *inputField,GameObject *button,
               MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStack_1.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
  EStack_1.monitor = (MonitorData *)0xffffffffffffffff;
  MStack_2 = team;
  key = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).teamData;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::StyleComplexSelector+PseudoStateData]::
             Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                       (this_00,(Object *)key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        ->klass->rgctx_data[0x21].method);
    if (iVar3 < 0) {
      value = ::StringLiteral__;
      if (inputField != (SettingsInputField *)0x0) {
code_?:
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__SettingsInputField__ValueChanged_System__String_);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<System::String>);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        bVar4 = iRam_? != 0;
        (inputField->fields).key = key;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&(inputField->fields).key >> 0xc);
          puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar6;
            LOCK();
            uVar8 = *puVar6;
            if (uVar7 == uVar8) {
              *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar8);
        }
        pIVar9 = (inputField->fields).inputField;
        if (pIVar9 != (InputField *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                    (pIVar9,value,1,(MethodInfo *)0x0);
          pIVar9 = (inputField->fields).inputField;
          if (pIVar9 != (InputField *)0x0) {
            pIVar10 = (pIVar9->fields).m_OnValueChanged;
            this_02 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__UnityEngine__Events__UnityAction<System::String>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (this_02,(Object *)inputField,
                       MethodInfo__SettingsInputField__ValueChanged_System__String_,
                       (MethodInfo *)0x0);
            if (pIVar10 != (InputField_OnChangeEvent *)0x0) {
              pMVar11 = MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                       ->klass->rgctx_data[2].method;
              pIVar12 = pMVar11->klass;
              if ((pIVar12->field_0x135 & 1) == 0) {
                pIVar12 = (Il2CppClass *)FUN_?(pIVar12);
              }
              pvVar13 = pIVar12->rgctx_data[5].rgctxDataDummy;
              if ((*(byte *)((longlong)pvVar13 + 0x135) & 1) == 0) {
                pvVar13 = (void *)FUN_?(pvVar13);
              }
              uVar14 = FUN_?(pvVar13);
              pIVar12 = pMVar11->klass;
              if ((pIVar12->field_0x135 & 1) == 0) {
                pIVar12 = (Il2CppClass *)FUN_?(pIVar12);
              }
              FUN_?(uVar14,this_02,
                            (pIVar12->rgctx_data[7].method)->klass->rgctx_data[4].rgctxDataDummy);
              if ((pIVar10 != (InputField_OnChangeEvent *)0x0) &&
                 (pIVar15 = (pIVar10->fields)._._.m_Calls, pIVar15 != (InvokableCallList *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pLVar16 = (pIVar15->fields).m_RuntimeCalls;
                if (pLVar16 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                  FUN_?(pLVar16,uVar14);
                  (pIVar15->fields).m_NeedsUpdate = 1;
                  return;
                }
              }
              FUN_?();
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
          }
        }
        FUN_?();
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
    }
    else {
      this_01 = (this->fields).teamData;
      if ((this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
         (pSVar18 = (String *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (this_01,(Object *)key,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), inputField != (SettingsInputField *)0x0)) {
        value = (String *)0x0;
        if (pSVar18 != (String *)0x0) {
          if (pSVar18->klass == pSRam0000000182dbbc60) {
            value = pSVar18;
          }
          if (value == (String *)0x0) {
            FUN_?(pSVar18);
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
        }
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::TeamEditorSettings::TeamEditorSettings_Initialize
               (TeamEditorSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  (this->fields).woID = woID;
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_TeamEditor,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_01 != (MVWorldObjectClientManager *)0x0) &&
       (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_01,woID,(MethodInfo *)0x0), pMVar1 != (MVWorldObjectClient *)0x0))
    {
      bVar2 = iRam_? != 0;
      (this->fields).teamData = (pMVar1->fields)._.data;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).teamData >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
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
                (this,(this->fields).yellowTeam,(this->fields).yellowTeamButton,MVTeam__Enum_Yellow,
                 (MethodInfo *)0x0);
      TeamEditorSettings_SetActiveButtons(this,(this->fields).teamData,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (this->fields).teamData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).teamData >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::TeamEditorSettings::TeamEditorSettings_OnSettingChanged
               (TeamEditorSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_03 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_03,(this->fields).woID,(MethodInfo *)0x0),
     pMVar1 == (MVWorldObjectClient *)0x0)) goto code_?;
  pDVar2 = (pMVar1->fields)._.data;
  enumType = (Type *)0x0;
  if (value != (Object *)0x0) {
    pTVar3 = enumType;
    if (value->klass == pORam0000000182dbbc60) {
      pTVar3 = (Type *)value;
    }
    if (pTVar3 == (Type *)0x0) {
      FUN_?(value);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((String__Fields *)&pTVar3->fields)->_stringLength != 0) {
      pTVar3 = enumType;
      if (value->klass == pORam0000000182dbbc60) {
        pTVar3 = (Type *)value;
      }
      pSVar5 = mscorlib.dll::System::String::String_TrimWhiteSpaceHelper
                          ((String *)pTVar3,String_TrimType__Enum_Both,(MethodInfo *)0x0);
      if (pSVar5 == (String *)0x0) goto code_?;
      if ((pSVar5->fields)._stringLength != 0) {
        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          if (value->klass == pORam0000000182dbbc60) {
            enumType = (Type *)value;
          }
          if (enumType == (Type *)0x0) {
            FUN_?(value);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (pDVar2,(Object *)key,(Object *)enumType,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          TeamEditorSettings_SetActiveButtons(this,pDVar2,(MethodInfo *)0x0);
          pSVar6 = (this->fields).settingsBase;
          if (pSVar6 != (SettingsBase *)0x0) {
            SettingsBase::SettingsBase_OnSettingChanged(pSVar6,key,value,(MethodInfo *)0x0);
            return;
          }
        }
        goto code_?;
      }
    }
  }
  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Remove
              (pDVar2,(Object *)key,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
              );
    this_04 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_04,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    if (this_04 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_04,(Object *)key,
                 (Object *)::StringLiteral__,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar7 != (MVGameControllerBase *)0x0) &&
          (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
         (this_00 = (pMVar8->fields).operationRequests,
         this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                  (this_00,(this->fields).woID,(Dictionary_2_System_Object_System_Object_ *)this_04,
                   (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pIVar9 = TypeRef__MV__WorldObject__MVTeam;
        pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar7 != (MVGameControllerBase *)0x0) &&
           (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) {
          pMVar10 = (pMVar8->fields).teamManager;
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          if (pIVar9 != (Il2CppType *)0x0) {
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            lVar11 = FUN_?(pIVar9,1);
            enumType = (Type *)FUN_?(lVar11 + 0x20);
          }
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          pOVar12 = mscorlib.dll::System::Enum::Enum_Parse_1(enumType,key,1,(MethodInfo *)0x0);
          if ((pMVar10 != (MVTeamManager *)0x0) && (pOVar12 != (Object *)0x0)) {
            if ((pOVar12->klass->_0).element_class !=
                (TypeInfo__MV__WorldObject__MVTeam->_0).element_class) {
              FUN_?(pOVar12,TypeInfo__MV__WorldObject__MVTeam);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            key_00 = *(Int32Enum__Enum *)&pOVar12[1].klass;
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__set_Item_MV__WorldObject__MVTeam__System__String_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_01 = (pMVar10->fields).teamNamesDefault;
            this_02 = (pMVar10->fields).teamNames;
            if ((this_01 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) &&
               (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,key_00,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                    ),
               this_02 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)) {
              method_00 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__set_Item_MV__WorldObject__MVTeam__System__String_
                          ->klass->rgctx_data[0x22].method;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,key_00,pOVar12,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),1),
                         method_00);
              TeamEditorSettings_SetActiveButtons(this,pDVar2,(MethodInfo *)0x0);
              pSVar6 = (this->fields).settingsBase;
              if (pSVar6 != (SettingsBase *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pDVar2 = (pSVar6->fields).result;
                if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Remove
                            (pDVar2,(Object *)key,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                            );
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetActiveButtons(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TeamEditorSettings::TeamEditorSettings_SetActiveButtons
               (TeamEditorSettings *this,Dictionary_2_System_Object_System_Object_ *teamData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Yellow);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Red);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Blue);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Green);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).blueTeamButton;
  if ((teamData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)teamData,(Object *)StringLiteral_Blue,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,(byte)((uint)iVar2 >> 0x1f) ^ 1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).redTeamButton;
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)teamData,(Object *)StringLiteral_Red,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,(byte)((uint)iVar2 >> 0x1f) ^ 1,(MethodInfo *)0x0);
      pGVar1 = (this->fields).greenTeamButton;
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                          *)teamData,(Object *)StringLiteral_Green,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,(byte)((uint)iVar2 >> 0x1f) ^ 1,(MethodInfo *)0x0);
        pGVar1 = (this->fields).yellowTeamButton;
        iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)teamData,(Object *)StringLiteral_Yellow,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           ->klass->rgctx_data[0x21].method);
        if (pGVar1 != (GameObject *)0x0) {
          bVar3 = (byte)((uint)iVar2 >> 0x1f) ^ 1;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                          ,bVar3,0,in_R9,unaff_RSI);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pGVar1 == (GameObject *)0x0) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pvVar5 = (pGVar1->fields)._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar5,bVar3);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* TeamEditorSettings() */

void Assembly-CSharp.dll::TeamEditorSettings::TeamEditorSettings__ctor
               (TeamEditorSettings *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).woID = -1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (pcVar16 = (char *)((longlong)ppMVar15 + 0xADDR),
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *pcVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

