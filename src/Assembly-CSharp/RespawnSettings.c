
/* Void AddRespawnTime() */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_AddRespawnTime
               (RespawnSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_03 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_03,(this->fields).woID,(MethodInfo *)0x0),
      pMVar1 == (MVWorldObjectClient *)0x0)) ||
     (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)(pMVar1->fields)._.data,
     this_00 ==
     (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0)
     ) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this_00,(Object *)StringLiteral_respawnTime,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar3 < 0) {
    auStackX_8[0] = 0x1e;
    pOVar4 = (Object *)FUN_?(uRam_?,auStackX_8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_respawnTime,pOVar4,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  this_01 = (this->fields).settingsBase;
  auStackX_8[0] = 0x1e;
  pOVar4 = (Object *)FUN_?(uRam_?,auStackX_8);
  if (this_01 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_OnSettingChanged
            (this_01,StringLiteral_respawnTime,pOVar4,(MethodInfo *)0x0);
  pGVar5 = (this->fields).respawnTimeSettingsUI;
  if (pGVar5 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar5,1,(MethodInfo *)0x0);
  pGVar5 = (this->fields).respawnActiveCheckmark;
  if (pGVar5 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar5,1,(MethodInfo *)0x0);
  toggle = (this->fields).activeToggle;
  if (toggle == (Toggle *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Events__UnityEvent<bool>__Invoke_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Toggle_value);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((toggle->fields).m_IsOn == 1) {
    return;
  }
  (toggle->fields).m_IsOn = 1;
  pTVar6 = (toggle->fields).m_Group;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar6 != (ToggleGroup *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar6->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pTVar6 = (toggle->fields).m_Group;
      if (pTVar6 == (ToggleGroup *)0x0) goto code_?;
      bVar7 = UnityEngine.UI.dll::UnityEngine::EventSystems::UIBehaviour::UIBehaviour_IsActive
                        ((UIBehaviour *)pTVar6,(MethodInfo *)0x0);
      if ((bVar7 != 0) &&
         (cVar8 = (*(toggle->klass->vtable).IsActive.methodPtr)(toggle), cVar8 != '\0')) {
        if ((toggle->fields).m_IsOn == 0) {
          pTVar6 = (toggle->fields).m_Group;
          if (pTVar6 == (ToggleGroup *)0x0) goto code_?;
          bVar7 = UnityEngine.UI.dll::UnityEngine::UI::ToggleGroup::ToggleGroup_AnyTogglesOn
                            (pTVar6,(MethodInfo *)0x0);
          if (bVar7 == 0) {
            pTVar6 = (toggle->fields).m_Group;
            if (pTVar6 == (ToggleGroup *)0x0) goto code_?;
            if ((pTVar6->fields).m_AllowSwitchOff == 0) goto code_?;
          }
        }
        else {
code_?:
          pTVar6 = (toggle->fields).m_Group;
          (toggle->fields).m_IsOn = 1;
          if (pTVar6 == (ToggleGroup *)0x0) goto code_?;
          UnityEngine.UI.dll::UnityEngine::UI::ToggleGroup::ToggleGroup_NotifyToggleOn
                    (pTVar6,toggle,1,(MethodInfo *)0x0);
        }
      }
    }
  }
  UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_PlayEffect
            (toggle,(toggle->fields).toggleTransition == 0,(MethodInfo *)0x0);
  UnityEngine.UIModule.dll::UnityEngine::UISystemProfilerApi::UISystemProfilerApi_AddMarker
            (StringLiteral_Toggle_value,(Object_1 *)toggle,(MethodInfo *)0x0);
  this_02 = (UnityEvent_1_System_Boolean_ *)(toggle->fields).onValueChanged;
  if (this_02 != (UnityEvent_1_System_Boolean_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Boolean]::
    UnityEvent_1_System_Boolean__Invoke
              (this_02,(toggle->fields).m_IsOn,
               MethodInfo__UnityEngine__Events__UnityEvent<bool>__Invoke_bool_);
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleActiveToggle() */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_HandleActiveToggle
               (RespawnSettings *this,MethodInfo *method)

{
  if ((this->fields).isInitialized == 0) {
    return;
  }
  if ((this->fields).isRespawnActive == 0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_03 != (MVWorldObjectClientManager *)0x0) &&
        (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_03,(this->fields).woID,(MethodInfo *)0x0),
        pMVar1 != (MVWorldObjectClient *)0x0)) &&
       (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)(pMVar1->fields)._.data,
       this_00 !=
       (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
       0x0)) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)StringLiteral_respawnTime,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar2 < 0) {
        auStackX_8[0] = 0x1e;
        pOVar3 = (Object *)FUN_?(uRam_?,auStackX_8);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,
                   (Object *)StringLiteral_respawnTime,pOVar3,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      this_01 = (this->fields).settingsBase;
      auStackX_8[0] = 0x1e;
      pOVar3 = (Object *)FUN_?(uRam_?,auStackX_8);
      if (this_01 != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_OnSettingChanged
                  (this_01,StringLiteral_respawnTime,pOVar3,(MethodInfo *)0x0);
        pGVar4 = (this->fields).respawnTimeSettingsUI;
        if (pGVar4 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,1,(MethodInfo *)0x0);
          pGVar4 = (this->fields).respawnActiveCheckmark;
          if (pGVar4 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,1,(MethodInfo *)0x0);
            this_02 = (this->fields).activeToggle;
            if (this_02 != (Toggle *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set(this_02,1,1,(MethodInfo *)0x0)
              ;
              (this->fields).isRespawnActive = 1;
              return;
            }
          }
        }
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  RespawnSettings_RemoveRespawnTime(this,(MethodInfo *)0x0);
  (this->fields).isRespawnActive = 0;
  return;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_Initialize
               (RespawnSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

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
    FUN_?(&StringLiteral_Respawn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_respawnTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  (this->fields).woID = woID;
  pSVar1 = StringLiteral_Respawn;
  if (this_00 != (SettingsBase *)0x0) {
    pTVar2 = (this_00->fields).headerText;
    (this_00->fields).woID = woID;
    if (pTVar2 != (Text *)0x0) {
      (*(pTVar2->klass->vtable).set_text.methodPtr)
                (pTVar2,pSVar1,(pTVar2->klass->vtable).set_text.method);
      SettingsBase::SettingsBase_InitializeHierarchy(this_00,woID,root,(MethodInfo *)0x0);
      this_05 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_05 != (MVWorldObjectClientManager *)0x0) {
        pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_05,woID,(MethodInfo *)0x0);
        if (pMVar3 != (MVWorldObjectClient *)0x0) {
          this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)(pMVar3->fields)._.data;
          value_00 = 0x1e;
          if (this_01 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
            iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                              (this_01,(Object *)StringLiteral_respawnTime,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                               ->klass->rgctx_data[0x21].method);
            bVar5 = (byte)((uint)iVar4 >> 0x1f) ^ 1;
            (this->fields).isRespawnActive = bVar5;
            if (bVar5 != 0) {
              pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 ((Dictionary_2_System_Object_System_Object_ *)this_01,
                                  (Object *)StringLiteral_respawnTime,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (pOVar6 == (Object *)0x0) goto code_?;
              if ((pOVar6->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar6,lRam_?);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              value_00 = *(int32_t *)&pOVar6[1].klass;
            }
            this_02 = (this->fields).respawnTimeSlider;
            if (this_02 != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_Initialize_1
                        (this_02,StringLiteral_respawnTime,value_00,0x1e,0x708,(MethodInfo *)0x0);
              this_03 = (this->fields).respawnTimeInputField;
              if (this_03 != (SettingsInputFieldSlider *)0x0) {
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                          (this_03,StringLiteral_respawnTime,(float)value_00,(MethodInfo *)0x0);
                pGVar8 = (this->fields).respawnTimeSettingsUI;
                if (pGVar8 != (GameObject *)0x0) {
                  value = (this->fields).isRespawnActive;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar8,value,(MethodInfo *)0x0);
                  pGVar8 = (this->fields).respawnActiveCheckmark;
                  if (pGVar8 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar8,value,(MethodInfo *)0x0);
                    this_04 = (this->fields).activeToggle;
                    if (this_04 != (Toggle *)0x0) {
                      UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set
                                (this_04,value,1,(MethodInfo *)0x0);
                      (this->fields).isInitialized = 1;
                      return;
                    }
                  }
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_OnSettingChanged
               (RespawnSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_respawnTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != StringLiteral_respawnTime) {
    if (key == (String *)0x0) {
      return;
    }
    if (StringLiteral_respawnTime == (String *)0x0) {
      return;
    }
    if ((key->fields)._stringLength != (StringLiteral_respawnTime->fields)._stringLength) {
      return;
    }
    bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                      ((uint8_t *)&(key->fields)._firstChar,
                       (uint8_t *)&(StringLiteral_respawnTime->fields)._firstChar,
                       (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
  }
  if (value != (Object *)0x0) {
    if ((value->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(value);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    value_00 = FUN_?(*(undefined4 *)&value[1].klass);
    pSVar3 = (this->fields).respawnTimeInputField;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_4[0]._pointer._value = (void *)0x0;
    aRStack_4[0]._length = 0;
    aRStack_4[0]._12_4_ = 0;
    value_01 = mscorlib.dll::System::Number::Number_FormatInt32
                         (value_00,aRStack_4,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if ((pSVar3 != (SettingsInputFieldSlider *)0x0) &&
       (pIVar5 = (pSVar3->fields).inputField, pIVar5 != (InputField *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_contentType
                (pIVar5,InputField_ContentType__Enum_Standard,(MethodInfo *)0x0);
      pIVar5 = (pSVar3->fields).inputField;
      if (pIVar5 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                  (pIVar5,value_01,1,(MethodInfo *)0x0);
        this_00 = (this->fields).settingsBase;
        aiStackX_10[0] = value_00;
        value_02 = (Object *)FUN_?(uRam_?,aiStackX_10);
        if (this_00 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged
                    (this_00,StringLiteral_respawnTime,value_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveRespawnTime() */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_RemoveRespawnTime
               (RespawnSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_respawnTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  lVar1 = lRam_?;
  value = (Object *)0x0;
  uStackX_18 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      value = (Object *)FUN_?(lRam_?);
      FUN_?(value + 1,&uStackX_18,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)(value + 1) >> 0xc);
        puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar4 = *puVar3;
          LOCK();
          uVar5 = *puVar3;
          if (uVar4 == uVar5) {
            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar4 != uVar5);
      }
    }
  }
  else {
    value = (Object *)((ulonglong)uStackX_1c << 0x20);
  }
  if (this_03 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_03,
             (Object *)StringLiteral_respawnTime,value,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar7 == (MVGameControllerBase *)0x0) ||
      (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) ||
     (this_00 = (pMVar8->fields).operationRequests,
     this_00 == (MVNetworkGame_OperationRequests *)0x0)) goto code_?;
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
            (this_00,(this->fields).woID,(Dictionary_2_System_Object_System_Object_ *)this_03,
             (MethodInfo *)0x0);
  key = StringLiteral_respawnTime;
  pSVar9 = (this->fields).settingsBase;
  if (pSVar9 == (SettingsBase *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (pSVar9->fields).result;
  if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Remove
            (this_01,(Object *)key,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
            );
  pGVar10 = (this->fields).respawnTimeSettingsUI;
  if (pGVar10 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar10,0,(MethodInfo *)0x0);
  pGVar10 = (this->fields).respawnActiveCheckmark;
  if (pGVar10 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar10,0,(MethodInfo *)0x0);
  toggle = (this->fields).activeToggle;
  if (toggle == (Toggle *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Events__UnityEvent<bool>__Invoke_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Toggle_value);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((toggle->fields).m_IsOn == 0) {
    return;
  }
  (toggle->fields).m_IsOn = 0;
  pTVar11 = (toggle->fields).m_Group;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar11 != (ToggleGroup *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar11->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pTVar11 = (toggle->fields).m_Group;
      if (pTVar11 == (ToggleGroup *)0x0) goto code_?;
      bVar12 = UnityEngine.UI.dll::UnityEngine::EventSystems::UIBehaviour::UIBehaviour_IsActive
                         ((UIBehaviour *)pTVar11,(MethodInfo *)0x0);
      if ((bVar12 != 0) &&
         (cVar13 = (*(toggle->klass->vtable).IsActive.methodPtr)(toggle), cVar13 != '\0')) {
        if ((toggle->fields).m_IsOn == 0) {
          pTVar11 = (toggle->fields).m_Group;
          if (pTVar11 == (ToggleGroup *)0x0) goto code_?;
          bVar12 = UnityEngine.UI.dll::UnityEngine::UI::ToggleGroup::ToggleGroup_AnyTogglesOn
                             (pTVar11,(MethodInfo *)0x0);
          if (bVar12 == 0) {
            pTVar11 = (toggle->fields).m_Group;
            if (pTVar11 == (ToggleGroup *)0x0) goto code_?;
            if ((pTVar11->fields).m_AllowSwitchOff == 0) goto code_?;
          }
        }
        else {
code_?:
          pTVar11 = (toggle->fields).m_Group;
          (toggle->fields).m_IsOn = 1;
          if (pTVar11 == (ToggleGroup *)0x0) goto code_?;
          UnityEngine.UI.dll::UnityEngine::UI::ToggleGroup::ToggleGroup_NotifyToggleOn
                    (pTVar11,toggle,1,(MethodInfo *)0x0);
        }
      }
    }
  }
  UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_PlayEffect
            (toggle,(toggle->fields).toggleTransition == 0,(MethodInfo *)0x0);
  UnityEngine.UIModule.dll::UnityEngine::UISystemProfilerApi::UISystemProfilerApi_AddMarker
            (StringLiteral_Toggle_value,(Object_1 *)toggle,(MethodInfo *)0x0);
  this_02 = (UnityEvent_1_System_Boolean_ *)(toggle->fields).onValueChanged;
  if (this_02 != (UnityEvent_1_System_Boolean_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Boolean]::
    UnityEvent_1_System_Boolean__Invoke
              (this_02,(toggle->fields).m_IsOn,
               MethodInfo__UnityEngine__Events__UnityEvent<bool>__Invoke_bool_);
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetRespawnUIVisibility(Boolean) */

void Assembly-CSharp.dll::RespawnSettings::RespawnSettings_SetRespawnUIVisibility
               (RespawnSettings *this,bool isRespawnActive,MethodInfo *method)

{
  pGVar1 = (this->fields).respawnTimeSettingsUI;
  if (pGVar1 == (GameObject *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar1,isRespawnActive,(MethodInfo *)0x0);
  pGVar1 = (this->fields).respawnActiveCheckmark;
  if (pGVar1 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar1,isRespawnActive,(MethodInfo *)0x0);
  toggle = (this->fields).activeToggle;
  if (toggle == (Toggle *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Events__UnityEvent<bool>__Invoke_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Toggle_value);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((toggle->fields).m_IsOn == isRespawnActive) {
    return;
  }
  (toggle->fields).m_IsOn = isRespawnActive;
  pTVar3 = (toggle->fields).m_Group;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar3 != (ToggleGroup *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar3->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pTVar3 = (toggle->fields).m_Group;
      if (pTVar3 == (ToggleGroup *)0x0) goto code_?;
      bVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::UIBehaviour::UIBehaviour_IsActive
                        ((UIBehaviour *)pTVar3,(MethodInfo *)0x0);
      if ((bVar4 != 0) &&
         (cVar5 = (*(toggle->klass->vtable).IsActive.methodPtr)(toggle), cVar5 != '\0')) {
        if ((toggle->fields).m_IsOn == 0) {
          pTVar3 = (toggle->fields).m_Group;
          if (pTVar3 == (ToggleGroup *)0x0) goto code_?;
          bVar4 = UnityEngine.UI.dll::UnityEngine::UI::ToggleGroup::ToggleGroup_AnyTogglesOn
                            (pTVar3,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            pTVar3 = (toggle->fields).m_Group;
            if (pTVar3 == (ToggleGroup *)0x0) goto code_?;
            if ((pTVar3->fields).m_AllowSwitchOff == 0) goto code_?;
          }
        }
        else {
code_?:
          pTVar3 = (toggle->fields).m_Group;
          (toggle->fields).m_IsOn = 1;
          if (pTVar3 == (ToggleGroup *)0x0) goto code_?;
          UnityEngine.UI.dll::UnityEngine::UI::ToggleGroup::ToggleGroup_NotifyToggleOn
                    (pTVar3,toggle,1,(MethodInfo *)0x0);
        }
      }
    }
  }
  UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_PlayEffect
            (toggle,(toggle->fields).toggleTransition == 0,(MethodInfo *)0x0);
  UnityEngine.UIModule.dll::UnityEngine::UISystemProfilerApi::UISystemProfilerApi_AddMarker
            (StringLiteral_Toggle_value,(Object_1 *)toggle,(MethodInfo *)0x0);
  this_00 = (UnityEvent_1_System_Boolean_ *)(toggle->fields).onValueChanged;
  if (this_00 != (UnityEvent_1_System_Boolean_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Boolean]::
    UnityEvent_1_System_Boolean__Invoke
              (this_00,(toggle->fields).m_IsOn,
               MethodInfo__UnityEngine__Events__UnityEvent<bool>__Invoke_bool_);
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

