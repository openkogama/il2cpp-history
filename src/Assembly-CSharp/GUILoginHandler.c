
/* Void Awake() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_Awake
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_cachingEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dev_profileId_standalone);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_serverIndex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).playerPrefKey = StringLiteral_Dev_profileId_standalone;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).playerPrefKey >> 0xc);
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
  GUILoginHandler_SetValuesToPrefOrDefault(this,(MethodInfo *)0x0);
  devTarget = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetInt
                        (StringLiteral_serverIndex,0,(MethodInfo *)0x0);
  GUILoginHandler_SetupServerDropdown(this,devTarget,(MethodInfo *)0x0);
  this_00 = (this->fields).serverIp;
  value = GUILoginHandler_GetIPFromDevServerTarget(devTarget,(MethodInfo *)0x0);
  if (this_00 == (InputField *)0x0) {
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
            (this_00,value,1,(MethodInfo *)0x0);
  GUILoginHandler_SetupProfileID(this,(MethodInfo *)0x0);
  GUILoginHandler_SetupPlanetID(this,(MethodInfo *)0x0);
  toggle = (this->fields).disableCacheToggle;
  iVar7 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetInt
                    (StringLiteral_cachingEnabled,0,(MethodInfo *)0x0);
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
  if ((bool)(toggle->fields).m_IsOn == iVar7 < 1) {
    return;
  }
  (toggle->fields).m_IsOn = iVar7 < 1;
  pTVar8 = (toggle->fields).m_Group;
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
  if (pTVar8 != (ToggleGroup *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar8->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pTVar8 = (toggle->fields).m_Group;
      if (pTVar8 == (ToggleGroup *)0x0) goto code_?;
      bVar9 = UnityEngine.UI.dll::UnityEngine::EventSystems::UIBehaviour::UIBehaviour_IsActive
                        ((UIBehaviour *)pTVar8,(MethodInfo *)0x0);
      if ((bVar9 != 0) &&
         (cVar10 = (*(toggle->klass->vtable).IsActive.methodPtr)(toggle), cVar10 != '\0')) {
        if ((toggle->fields).m_IsOn == 0) {
          pTVar8 = (toggle->fields).m_Group;
          if (pTVar8 == (ToggleGroup *)0x0) goto code_?;
          bVar9 = UnityEngine.UI.dll::UnityEngine::UI::ToggleGroup::ToggleGroup_AnyTogglesOn
                            (pTVar8,(MethodInfo *)0x0);
          if (bVar9 == 0) {
            pTVar8 = (toggle->fields).m_Group;
            if (pTVar8 == (ToggleGroup *)0x0) goto code_?;
            if ((pTVar8->fields).m_AllowSwitchOff == 0) goto code_?;
          }
        }
        else {
code_?:
          pTVar8 = (toggle->fields).m_Group;
          (toggle->fields).m_IsOn = 1;
          if (pTVar8 == (ToggleGroup *)0x0) goto code_?;
          UnityEngine.UI.dll::UnityEngine::UI::ToggleGroup::ToggleGroup_NotifyToggleOn
                    (pTVar8,toggle,1,(MethodInfo *)0x0);
        }
      }
    }
  }
  UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_PlayEffect
            (toggle,(toggle->fields).toggleTransition == 0,(MethodInfo *)0x0);
  UnityEngine.UIModule.dll::UnityEngine::UISystemProfilerApi::UISystemProfilerApi_AddMarker
            (StringLiteral_Toggle_value,(Object_1 *)toggle,(MethodInfo *)0x0);
  this_01 = (UnityEvent_1_System_Boolean_ *)(toggle->fields).onValueChanged;
  if (this_01 != (UnityEvent_1_System_Boolean_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Boolean]::
    UnityEvent_1_System_Boolean__Invoke
              (this_01,(toggle->fields).m_IsOn,
               MethodInfo__UnityEngine__Events__UnityEvent<bool>__Invoke_bool_);
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Caching() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_Caching
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_cachingEnabled);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).disableCacheToggle;
  if (pTVar1 != (Toggle *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetInt
                      (StringLiteral_cachingEnabled,(uint)((pTVar1->fields).m_IsOn == 0),
                       (MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    uVar3 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
    this_00 = (PlayerPrefsException *)func_?(uVar3);
    error = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
              (this_00,error,(MethodInfo *)0x0);
    uVar3 = func_?(&MethodInfo__UnityEngine__PlayerPrefs__SetInt_System__String__int_);
    FUN_?(this_00,uVar3);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ComboboxChanged(Int32) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_ComboboxChanged
               (GUILoginHandler *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_serverIP);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ServerIP_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_serverIndex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = GUILoginHandler_GetIPFromDevServerTarget(index,(MethodInfo *)0x0);
  this_00 = (this->fields).serverIp;
  if (this_00 != (InputField *)0x0) {
    uVar2 = 0;
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
              (this_00,pSVar1,1,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
              (StringLiteral_serverIndex,index,(MethodInfo *)0x0);
    this_01 = (this->fields).gameSessionData;
    if (this_01 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_serverIP,(Object *)pSVar1,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_ServerIP_,pSVar1,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,3,pSVar1);
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Embedded(Boolean) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_Embedded
               (GUILoginHandler *this,bool isEmbedded,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_embedded);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_embeddedSite);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).gameSessionData;
  abStackX_10[0] = isEmbedded;
  value = (Object *)FUN_?(uRam_?,abStackX_10);
  if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    behavior = CONCAT31((int3)((uint)in_R9D >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_embedded,
               value,behavior,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    pDVar1 = (this->fields).gameSessionData;
    if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_embeddedSite,(Object *)(this->fields).embeddedSite,
                 CONCAT31((int3)(behavior >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EnterCharacterEditOnClick() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_EnterCharacterEditOnClick
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,2,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameSessionData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVGameMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameSessionData_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gsm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Base);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DesktopBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Desktop___Starting_scene_Desktop);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_____1_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_referrer);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_serverIP);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_language);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WebPlay_as_touch___Starting_scen);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_en_US);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).gameSessionData;
  auStackX_10[0] = 2;
  pOVar2 = (Object *)FUN_?(TypeInfo__MV__Common__MVGameMode,auStackX_10);
  if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_gameMode,
               pOVar2,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    pDVar1 = (this->fields).gameSessionData;
    if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_language,(Object *)StringLiteral_en_US,
                 (InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pDVar1 = (this->fields).gameSessionData;
      if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_referrer,(Object *)StringLiteral_gsm,
                   (InsertionBehavior__Enum)uVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pDVar1 = (this->fields).gameSessionData;
        pIVar4 = (this->fields).serverIp;
        if ((pIVar4 != (InputField *)0x0) &&
           (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0)) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_serverIP,(Object *)(pIVar4->fields).m_Text,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                     ->klass->rgctx_data[0x22].method);
          pDVar1 = (this->fields).gameSessionData;
          this_00 = (GameSessionData *)FUN_?(TypeInfo__GameSessionData);
          GameSessionData::GameSessionData__ctor_1(this_00,pDVar1,(MethodInfo *)0x0);
          pGStackX_20 = this_00;
          this_01 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Char);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__System__Math);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          (this_01->fields).m_MaxCapacity = 0x7fffffff;
          pCVar5 = (Char__Array *)FUN_?(TypeInfo__System__Char,0x100);
          (this_01->fields).m_ChunkChars = pCVar5;
          func_?(&this_01->fields);
          pSStack_6 = this_01;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this_01,StringLiteral_GameSessionData_u000A,(MethodInfo *)0x0);
          pDVar1 = (this->fields).gameSessionData;
          if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)&PStack_8 >> 0xc);
              puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar10 = *puVar9;
                LOCK();
                uVar11 = *puVar9;
                if (uVar10 == uVar11) {
                  *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (uVar10 != uVar11);
            }
            PStack_8._arg1 = (Object *)(ulonglong)(uint)(pDVar1->fields)._version;
            uStack_12 = 2;
            PStack_8._arg2 = (Object *)0x0;
            PStack_8._args = (Object__Array *)0x0;
            auStack_13._8_8_ = PStack_8._arg1;
            pOStack_14 = (Object *)0x0;
            pOStack_15 = (Object *)0x0;
            uStack_16._0_4_ = 2;
            uStack_16._4_4_ = 0;
            uStack_17 = 0;
            puStack_18 = auStack_13;
            PStack_8._arg0 = (Object *)pDVar1;
            auStack_13._0_8_ = pDVar1;
            while (bVar19 = mscorlib.dll::System::Collections::Generic::
                           Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                           Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                     ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_
                                       *)auStack_13,
                                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__MoveNext__
                                     ), pSVar20 = StringLiteral__0_____1_u000A, bVar19 != 0) {
              PStack_21._arg0 = (Object *)0x0;
              PStack_21._arg1 = (Object *)0x0;
              PStack_21._arg2 = (Object *)0x0;
              PStack_21._args = (Object__Array *)0x0;
              mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                        (&PStack_21,pOStack_14,pOStack_15,(MethodInfo *)0x0);
              PStack_8._arg0 = PStack_21._arg0;
              PStack_8._arg1 = PStack_21._arg1;
              PStack_8._arg2 = PStack_21._arg2;
              PStack_8._args = PStack_21._args;
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormatHelper
                        (this_01,(IFormatProvider *)0x0,pSVar20,&PStack_8,(MethodInfo *)0x0);
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)this_01,(MethodInfo *)0x0);
            FUN_?(this_00);
            PlayerPrefsManager::PlayerPrefsManager_Initialize(this_00,(MethodInfo *)0x0);
            if (this_00 != (GameSessionData *)0x0) {
              AwayMonitor::AwayMonitor_Initialize((this_00->fields).gameMode,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (this != (GUILoginHandler *)0x0) {
                pvVar22 = (this->fields)._._._._.m_CachedPtr;
                if (pvVar22 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                  pcVar23 = (code *)swi(3);
                  (*pcVar23)();
                  return;
                }
                pcVar23 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
                  uVar3 = func_?(&UNK_?);
                  FUN_?(uVar3,0);
                  pcVar23 = (code *)swi(3);
                  (*pcVar23)();
                  return;
                }
                pcRam_? = pcVar23;
                pvVar22 = (void *)(*pcRam_?)(pvVar22);
                pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                         Unmarshal_UnmarshalUnityObject
                                   (pvVar22,
                                    UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                   );
                if (pOVar2 != (Object *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pOVar24 = pOVar2[1].klass;
                  if (pOVar24 == (Object__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(pOVar2,(MethodInfo *)0x0);
                    pcVar23 = (code *)swi(3);
                    (*pcVar23)();
                    return;
                  }
                  pcVar23 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
                    uVar3 = func_?(&UNK_?);
                    FUN_?(uVar3,0);
                    pcVar23 = (code *)swi(3);
                    (*pcVar23)();
                    return;
                  }
                  pcRam_? = pcVar23;
                  (*pcRam_?)(pOVar24);
                  pTVar25 = (this->fields).touchToggle;
                  if (pTVar25 != (Toggle *)0x0) {
                    if ((pTVar25->fields).m_IsOn == 0) {
                      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                                ((Object *)StringLiteral_Desktop___Starting_scene_Desktop,
                                 (MethodInfo *)0x0);
                      pSVar20 = StringLiteral_DesktopBase;
                      if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                        pSVar20 = StringLiteral_DesktopBase;
                      }
                    }
                    else {
                      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                                ((Object *)StringLiteral_WebPlay_as_touch___Starting_scen,
                                 (MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField
                           = 1;
                      pSVar20 = StringLiteral_Base;
                      if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                        pSVar20 = StringLiteral_Base;
                      }
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
                    SceneManager_LoadScene(pSVar20,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void EnterEditOnClick() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_EnterEditOnClick
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameSessionData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVGameMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameSessionData_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gsm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Base);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DesktopBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Desktop___Starting_scene_Desktop);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_____1_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_referrer);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_serverIP);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_language);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WebPlay_as_touch___Starting_scen);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_en_US);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).gameSessionData;
  auStackX_10[0] = 0;
  pOVar2 = (Object *)FUN_?(TypeInfo__MV__Common__MVGameMode,auStackX_10);
  if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_gameMode,
               pOVar2,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    pDVar1 = (this->fields).gameSessionData;
    if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_language,(Object *)StringLiteral_en_US,
                 (InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pDVar1 = (this->fields).gameSessionData;
      if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_referrer,(Object *)StringLiteral_gsm,
                   (InsertionBehavior__Enum)uVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pDVar1 = (this->fields).gameSessionData;
        pIVar4 = (this->fields).serverIp;
        if ((pIVar4 != (InputField *)0x0) &&
           (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0)) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_serverIP,(Object *)(pIVar4->fields).m_Text,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                     ->klass->rgctx_data[0x22].method);
          pDVar1 = (this->fields).gameSessionData;
          this_00 = (GameSessionData *)FUN_?(TypeInfo__GameSessionData);
          GameSessionData::GameSessionData__ctor_1(this_00,pDVar1,(MethodInfo *)0x0);
          pGStackX_20 = this_00;
          this_01 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Char);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__System__Math);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          (this_01->fields).m_MaxCapacity = 0x7fffffff;
          pCVar5 = (Char__Array *)FUN_?(TypeInfo__System__Char,0x100);
          (this_01->fields).m_ChunkChars = pCVar5;
          func_?(&this_01->fields);
          pSStack_6 = this_01;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this_01,StringLiteral_GameSessionData_u000A,(MethodInfo *)0x0);
          pDVar1 = (this->fields).gameSessionData;
          if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)&PStack_8 >> 0xc);
              puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar10 = *puVar9;
                LOCK();
                uVar11 = *puVar9;
                if (uVar10 == uVar11) {
                  *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (uVar10 != uVar11);
            }
            PStack_8._arg1 = (Object *)(ulonglong)(uint)(pDVar1->fields)._version;
            uStack_12 = 2;
            PStack_8._arg2 = (Object *)0x0;
            PStack_8._args = (Object__Array *)0x0;
            auStack_13._8_8_ = PStack_8._arg1;
            pOStack_14 = (Object *)0x0;
            pOStack_15 = (Object *)0x0;
            uStack_16._0_4_ = 2;
            uStack_16._4_4_ = 0;
            uStack_17 = 0;
            puStack_18 = auStack_13;
            PStack_8._arg0 = (Object *)pDVar1;
            auStack_13._0_8_ = pDVar1;
            while (bVar19 = mscorlib.dll::System::Collections::Generic::
                           Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                           Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                     ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_
                                       *)auStack_13,
                                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__MoveNext__
                                     ), pSVar20 = StringLiteral__0_____1_u000A, bVar19 != 0) {
              PStack_21._arg0 = (Object *)0x0;
              PStack_21._arg1 = (Object *)0x0;
              PStack_21._arg2 = (Object *)0x0;
              PStack_21._args = (Object__Array *)0x0;
              mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                        (&PStack_21,pOStack_14,pOStack_15,(MethodInfo *)0x0);
              PStack_8._arg0 = PStack_21._arg0;
              PStack_8._arg1 = PStack_21._arg1;
              PStack_8._arg2 = PStack_21._arg2;
              PStack_8._args = PStack_21._args;
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormatHelper
                        (this_01,(IFormatProvider *)0x0,pSVar20,&PStack_8,(MethodInfo *)0x0);
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)this_01,(MethodInfo *)0x0);
            FUN_?(this_00);
            PlayerPrefsManager::PlayerPrefsManager_Initialize(this_00,(MethodInfo *)0x0);
            if (this_00 != (GameSessionData *)0x0) {
              AwayMonitor::AwayMonitor_Initialize((this_00->fields).gameMode,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (this != (GUILoginHandler *)0x0) {
                pvVar22 = (this->fields)._._._._.m_CachedPtr;
                if (pvVar22 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                  pcVar23 = (code *)swi(3);
                  (*pcVar23)();
                  return;
                }
                pcVar23 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
                  uVar3 = func_?(&UNK_?);
                  FUN_?(uVar3,0);
                  pcVar23 = (code *)swi(3);
                  (*pcVar23)();
                  return;
                }
                pcRam_? = pcVar23;
                pvVar22 = (void *)(*pcRam_?)(pvVar22);
                pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                         Unmarshal_UnmarshalUnityObject
                                   (pvVar22,
                                    UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                   );
                if (pOVar2 != (Object *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pOVar24 = pOVar2[1].klass;
                  if (pOVar24 == (Object__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(pOVar2,(MethodInfo *)0x0);
                    pcVar23 = (code *)swi(3);
                    (*pcVar23)();
                    return;
                  }
                  pcVar23 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
                    uVar3 = func_?(&UNK_?);
                    FUN_?(uVar3,0);
                    pcVar23 = (code *)swi(3);
                    (*pcVar23)();
                    return;
                  }
                  pcRam_? = pcVar23;
                  (*pcRam_?)(pOVar24);
                  pTVar25 = (this->fields).touchToggle;
                  if (pTVar25 != (Toggle *)0x0) {
                    if ((pTVar25->fields).m_IsOn == 0) {
                      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                                ((Object *)StringLiteral_Desktop___Starting_scene_Desktop,
                                 (MethodInfo *)0x0);
                      pSVar20 = StringLiteral_DesktopBase;
                      if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                        pSVar20 = StringLiteral_DesktopBase;
                      }
                    }
                    else {
                      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                                ((Object *)StringLiteral_WebPlay_as_touch___Starting_scen,
                                 (MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField
                           = 1;
                      pSVar20 = StringLiteral_Base;
                      if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                        pSVar20 = StringLiteral_Base;
                      }
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
                    SceneManager_LoadScene(pSVar20,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void EnterPlayOnClick() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_EnterPlayOnClick
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameSessionData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVGameMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameSessionData_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gsm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Base);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DesktopBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Desktop___Starting_scene_Desktop);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_____1_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_referrer);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_serverIP);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_language);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WebPlay_as_touch___Starting_scen);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_en_US);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).gameSessionData;
  auStackX_10[0] = 1;
  pOVar2 = (Object *)FUN_?(TypeInfo__MV__Common__MVGameMode,auStackX_10);
  if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_gameMode,
               pOVar2,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    pDVar1 = (this->fields).gameSessionData;
    if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_language,(Object *)StringLiteral_en_US,
                 (InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pDVar1 = (this->fields).gameSessionData;
      if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_referrer,(Object *)StringLiteral_gsm,
                   (InsertionBehavior__Enum)uVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pDVar1 = (this->fields).gameSessionData;
        pIVar4 = (this->fields).serverIp;
        if ((pIVar4 != (InputField *)0x0) &&
           (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0)) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_serverIP,(Object *)(pIVar4->fields).m_Text,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                     ->klass->rgctx_data[0x22].method);
          pDVar1 = (this->fields).gameSessionData;
          this_00 = (GameSessionData *)FUN_?(TypeInfo__GameSessionData);
          GameSessionData::GameSessionData__ctor_1(this_00,pDVar1,(MethodInfo *)0x0);
          pGStackX_20 = this_00;
          this_01 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Char);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__System__Math);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          (this_01->fields).m_MaxCapacity = 0x7fffffff;
          pCVar5 = (Char__Array *)FUN_?(TypeInfo__System__Char,0x100);
          (this_01->fields).m_ChunkChars = pCVar5;
          func_?(&this_01->fields);
          pSStack_6 = this_01;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this_01,StringLiteral_GameSessionData_u000A,(MethodInfo *)0x0);
          pDVar1 = (this->fields).gameSessionData;
          if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)&PStack_8 >> 0xc);
              puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar10 = *puVar9;
                LOCK();
                uVar11 = *puVar9;
                if (uVar10 == uVar11) {
                  *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (uVar10 != uVar11);
            }
            PStack_8._arg1 = (Object *)(ulonglong)(uint)(pDVar1->fields)._version;
            uStack_12 = 2;
            PStack_8._arg2 = (Object *)0x0;
            PStack_8._args = (Object__Array *)0x0;
            auStack_13._8_8_ = PStack_8._arg1;
            pOStack_14 = (Object *)0x0;
            pOStack_15 = (Object *)0x0;
            uStack_16._0_4_ = 2;
            uStack_16._4_4_ = 0;
            uStack_17 = 0;
            puStack_18 = auStack_13;
            PStack_8._arg0 = (Object *)pDVar1;
            auStack_13._0_8_ = pDVar1;
            while (bVar19 = mscorlib.dll::System::Collections::Generic::
                           Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                           Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                     ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_
                                       *)auStack_13,
                                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__MoveNext__
                                     ), pSVar20 = StringLiteral__0_____1_u000A, bVar19 != 0) {
              PStack_21._arg0 = (Object *)0x0;
              PStack_21._arg1 = (Object *)0x0;
              PStack_21._arg2 = (Object *)0x0;
              PStack_21._args = (Object__Array *)0x0;
              mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                        (&PStack_21,pOStack_14,pOStack_15,(MethodInfo *)0x0);
              PStack_8._arg0 = PStack_21._arg0;
              PStack_8._arg1 = PStack_21._arg1;
              PStack_8._arg2 = PStack_21._arg2;
              PStack_8._args = PStack_21._args;
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormatHelper
                        (this_01,(IFormatProvider *)0x0,pSVar20,&PStack_8,(MethodInfo *)0x0);
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)this_01,(MethodInfo *)0x0);
            FUN_?(this_00);
            PlayerPrefsManager::PlayerPrefsManager_Initialize(this_00,(MethodInfo *)0x0);
            if (this_00 != (GameSessionData *)0x0) {
              AwayMonitor::AwayMonitor_Initialize((this_00->fields).gameMode,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (this != (GUILoginHandler *)0x0) {
                pvVar22 = (this->fields)._._._._.m_CachedPtr;
                if (pvVar22 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                  pcVar23 = (code *)swi(3);
                  (*pcVar23)();
                  return;
                }
                pcVar23 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
                  uVar3 = func_?(&UNK_?);
                  FUN_?(uVar3,0);
                  pcVar23 = (code *)swi(3);
                  (*pcVar23)();
                  return;
                }
                pcRam_? = pcVar23;
                pvVar22 = (void *)(*pcRam_?)(pvVar22);
                pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                         Unmarshal_UnmarshalUnityObject
                                   (pvVar22,
                                    UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                   );
                if (pOVar2 != (Object *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pOVar24 = pOVar2[1].klass;
                  if (pOVar24 == (Object__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(pOVar2,(MethodInfo *)0x0);
                    pcVar23 = (code *)swi(3);
                    (*pcVar23)();
                    return;
                  }
                  pcVar23 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
                    uVar3 = func_?(&UNK_?);
                    FUN_?(uVar3,0);
                    pcVar23 = (code *)swi(3);
                    (*pcVar23)();
                    return;
                  }
                  pcRam_? = pcVar23;
                  (*pcRam_?)(pOVar24);
                  pTVar25 = (this->fields).touchToggle;
                  if (pTVar25 != (Toggle *)0x0) {
                    if ((pTVar25->fields).m_IsOn == 0) {
                      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                                ((Object *)StringLiteral_Desktop___Starting_scene_Desktop,
                                 (MethodInfo *)0x0);
                      pSVar20 = StringLiteral_DesktopBase;
                      if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                        pSVar20 = StringLiteral_DesktopBase;
                      }
                    }
                    else {
                      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                                ((Object *)StringLiteral_WebPlay_as_touch___Starting_scen,
                                 (MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField
                           = 1;
                      pSVar20 = StringLiteral_Base;
                      if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                        pSVar20 = StringLiteral_Base;
                      }
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
                    SceneManager_LoadScene(pSVar20,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* String GetIPFromDevServerTarget(GUILoginHandler+DevServerTarget) */

String * Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_GetIPFromDevServerTarget
                   (GUILoginHandler_DevServerTarget__Enum devTarget,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__212_32_240_13_5055);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__127_0_0_1_5055);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__62_212_95_185_5055);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (devTarget == GUILoginHandler_DevServerTarget__Enum_Dev) {
    return StringLiteral__212_32_240_13_5055;
  }
  if (devTarget == GUILoginHandler_DevServerTarget__Enum_Test) {
    return StringLiteral__62_212_95_185_5055;
  }
  if (devTarget != GUILoginHandler_DevServerTarget__Enum_Local) {
    return ::StringLiteral__;
  }
  return StringLiteral__127_0_0_1_5055;
}


/* String GetPrefOrDefault(String, String) */

String * Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_GetPrefOrDefault
                   (GUILoginHandler *this,String *prefName,String *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_GetString
                     (prefName,::StringLiteral__,(MethodInfo *)0x0);
  pSVar2 = target;
  if ((((pSVar1 != ::StringLiteral__) && (pSVar2 = pSVar1, pSVar1 != (String *)0x0)) &&
      (::StringLiteral__ != (String *)0x0)) &&
     (((pSVar1->fields)._stringLength == (::StringLiteral__->fields)._stringLength &&
      (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      pSVar2 = target, bVar3 == 0)))) {
    pSVar2 = pSVar1;
  }
  return pSVar2;
}


/* Void OnEmbeddedSiteDropdownChanged() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_OnEmbeddedSiteDropdownChanged
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).embeddedSiteDropdown;
  if (((pDVar1 != (Dropdown *)0x0) &&
      (pDVar2 = (pDVar1->fields).m_Options, pDVar2 != (Dropdown_OptionDataList *)0x0)) &&
     (pLVar3 = (pDVar2->fields).m_Options,
     pLVar3 != (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0)) {
    uVar4 = (pDVar1->fields).m_Value;
    if ((uint)(pLVar3->fields)._size <= uVar4) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pDVar6 = (pLVar3->fields)._items;
    if (pDVar6 != (Dropdown_OptionData__Array *)0x0) {
      if ((uint)pDVar6->max_length <= uVar4) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pDVar6->vector[(int)uVar4] != (Dropdown_OptionData *)0x0) {
        bVar7 = iRam_? != 0;
        (this->fields).embeddedSite = (pDVar6->vector[(int)uVar4]->fields).m_Text;
        if (bVar7) {
          uVar4 = (uint)((ulonglong)&(this->fields).embeddedSite >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
        this_00 = (this->fields).embeddedToggle;
        if (this_00 != (Toggle *)0x0) {
          uVar11 = 0;
          UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set(this_00,1,1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_embedded);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_embeddedSite);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar12 = (this->fields).gameSessionData;
          auStackX_8[0] = 1;
          value = (Object *)FUN_?(uRam_?,auStackX_8);
          if (pDVar12 != (Dictionary_2_System_String_System_Object_ *)0x0) {
            uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar12,
                       (Object *)StringLiteral_embedded,value,(InsertionBehavior__Enum)uVar11,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                       ->klass->rgctx_data[0x22].method);
            pDVar12 = (this->fields).gameSessionData;
            if (pDVar12 != (Dictionary_2_System_String_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar12,
                         (Object *)StringLiteral_embeddedSite,(Object *)(this->fields).embeddedSite,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),1),
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                         ->klass->rgctx_data[0x22].method);
              return;
            }
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


/* Void OnPlanetDropdownChanged() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_OnPlanetDropdownChanged
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).planetDropdown;
  if (((pDVar1 != (Dropdown *)0x0) &&
      (pDVar2 = (pDVar1->fields).m_Options, pDVar2 != (Dropdown_OptionDataList *)0x0)) &&
     (pLVar3 = (pDVar2->fields).m_Options,
     pLVar3 != (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0)) {
    uVar4 = (pDVar1->fields).m_Value;
    if ((uint)(pLVar3->fields)._size <= uVar4) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pDVar6 = (pLVar3->fields)._items;
    if (pDVar6 != (Dropdown_OptionData__Array *)0x0) {
      if ((uint)pDVar6->max_length <= uVar4) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pDVar6->vector[(int)uVar4] != (Dropdown_OptionData *)0x0) &&
         (this_00 = (this->fields).defaultPlanetData,
         this_00 != (Dictionary_2_System_String_GUILoginHandler_PlanetData_ *)0x0)) {
        iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                            *)this_00,(Object *)(pDVar6->vector[(int)uVar4]->fields).m_Text,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__ContainsKey_System__String_
                           ->klass->rgctx_data[0x21].method);
        if (iVar7 < 0) {
          return;
        }
        pIVar8 = (this->fields).planetIdTextField;
        if ((this->fields).defaultPlanetData !=
            (Dictionary_2_System_String_GUILoginHandler_PlanetData_ *)0x0) {
          uStackX_8 = FUN_?();
          pSVar9 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)&uStackX_8,(MethodInfo *)0x0);
          if (pIVar8 != (InputField *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                      (pIVar8,pSVar9,1,(MethodInfo *)0x0);
            pIVar8 = (this->fields).profileIdTextField;
            if ((this->fields).defaultPlanetData !=
                (Dictionary_2_System_String_GUILoginHandler_PlanetData_ *)0x0) {
              uStackX_8 = FUN_?();
              pSVar9 = mscorlib.dll::System::Int32::Int32_ToString
                                 ((Int32 *)((longlong)&uStackX_8 + 4),(MethodInfo *)0x0);
              if (pIVar8 != (InputField *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                          (pIVar8,pSVar9,1,(MethodInfo *)0x0);
                return;
              }
            }
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


/* Void OnProfileDropdownChanged() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_OnProfileDropdownChanged
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___0_9__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).profileDropdown;
  if (((pDVar1 == (Dropdown *)0x0) ||
      (pDVar2 = (pDVar1->fields).m_Options, pDVar2 == (Dropdown_OptionDataList *)0x0)) ||
     (pLVar3 = (pDVar2->fields).m_Options,
     pLVar3 == (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0)) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = (pDVar1->fields).m_Value;
  if ((uint)(pLVar3->fields)._size <= uVar5) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pDVar6 = (pLVar3->fields)._items;
  if (pDVar6 == (Dropdown_OptionData__Array *)0x0) goto code_?;
  if ((uint)pDVar6->max_length <= uVar5) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pDVar6->vector[(int)uVar5] == (Dropdown_OptionData *)0x0) goto code_?;
  pSVar7 = (pDVar6->vector[(int)uVar5]->fields).m_Text;
  pSVar8 = (String *)**(undefined8 **)(lRam_? + 0xb8);
  if (*(int *)&(TypeInfo__System__Text__RegularExpressions__Regex->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar7 = System.dll::System::Text::RegularExpressions::Regex::Regex_Replace
                      (pSVar7,StringLiteral___0_9__,pSVar8,(MethodInfo *)0x0);
  this_00 = (this->fields).profileIdTextField;
  if (this_00 == (InputField *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u0009);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar8 = (this_00->fields).m_Text;
  if (pSVar8 == pSVar7) {
    return;
  }
  if (pSVar8 == (String *)0x0) {
code_?:
    if (pSVar7 == (String *)0x0) {
code_?:
      pSVar7 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar7 == (String *)0x0) goto code_?;
    if ((pSVar8->fields)._stringLength == (pSVar7->fields)._stringLength) {
      bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar8->fields)._firstChar,
                          (uint8_t *)&(pSVar7->fields)._firstChar,
                          (longlong)(pSVar8->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar7 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar7,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_00->fields).m_LineType == 0) {
    if ((pSVar7 == (String *)0x0) ||
       (pSVar7 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar7,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar7 == (String *)0x0)) goto DAT_?;
    pSVar7 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar7,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_00->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_00->fields).m_CharacterValidation == 0)) {
    if (0 < (this_00->fields).m_CharacterLimit) {
      if (pSVar7 == (String *)0x0) goto DAT_?;
      iVar10 = (this_00->fields).m_CharacterLimit;
      if (iVar10 < (pSVar7->fields)._stringLength) {
        pSVar7 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar7,0,iVar10,(MethodInfo *)0x0);
      }
    }
    (this_00->fields).m_Text = pSVar7;
    func_?(&(this_00->fields).m_Text);
  }
  else {
    bVar11 = iRam_? != 0;
    (this_00->fields).m_Text = ::StringLiteral__;
    if (bVar11) {
      uVar5 = (uint)((ulonglong)&(this_00->fields).m_Text >> 0xc);
      lVar12 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
        puVar14 = (ulonglong *)(lVar12 + 0xADDR);
        LOCK();
        bVar11 = uVar13 == *puVar14;
        if (bVar11) {
          *puVar14 = uVar13 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pIVar15 = (this_00->fields).m_OnValidateInput;
    if (pIVar15 == (InputField_OnValidateInput *)0x0) {
      pIVar15 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar16 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar11 = iRam_? != 0;
      (pIVar15->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar15->fields)._._.method = pMVar16;
      (pIVar15->fields)._._.m_target = (Object *)this_00;
      if (bVar11) {
        uVar5 = (uint)((ulonglong)&(pIVar15->fields)._._.m_target >> 0xc);
        lVar12 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
          puVar14 = (ulonglong *)(lVar12 + 0xADDR);
          LOCK();
          bVar11 = uVar13 == *puVar14;
          if (bVar11) {
            *puVar14 = uVar13 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      uVar17 = pMVar16->parameters_count;
      (pIVar15->fields)._._.method_code = pIVar15;
      if ((pMVar16->flags & 0x10) == 0) {
        if (uVar17 != 2) goto code_?;
        pcVar4 = FUN_?;
      }
      else if (uVar17 == 3) {
        pcVar4 = FUN_?;
      }
      else {
code_?:
        (pIVar15->fields)._._.method_code = (pIVar15->fields)._._.m_target;
        pcVar4 = (pIVar15->fields)._._.method_ptr;
      }
      (pIVar15->fields)._._.invoke_impl = pcVar4;
      (pIVar15->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar7 == (String *)0x0) goto DAT_?;
    iVar18 = (pSVar7->fields)._stringLength;
    (this_00->fields).m_CaretSelectPosition = iVar18;
    (this_00->fields).m_CaretPosition = iVar18;
    if ((this_00->fields).m_CharacterLimit < 1) {
      iVar10 = (pSVar7->fields)._stringLength;
    }
    else {
      iVar10 = (this_00->fields).m_CharacterLimit;
      iVar19 = (pSVar7->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar19 < iVar10) {
        iVar10 = iVar19;
      }
    }
    uVar5 = 0;
    if (0 < iVar10) {
      puVar20 = &(pSVar7->fields)._firstChar;
      lVar12 = 0;
      do {
        pSVar8 = (this_00->fields).m_Text;
        if (pSVar8 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar7->fields)._stringLength <= (longlong)(ulonglong)uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (pIVar15 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar15->fields)._._.invoke_impl)
                      ((pIVar15->fields)._._.method_code,(this_00->fields).m_Text,
                       (pSVar8->fields)._stringLength,*puVar20,(pIVar15->fields)._._.method);
        if (c != 0) {
          pSVar8 = (this_00->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar8 = mscorlib.dll::System::String::String_Concat_4(pSVar8,str1,(MethodInfo *)0x0);
          (this_00->fields).m_Text = pSVar8;
          func_?(&(this_00->fields).m_Text);
        }
        uVar5 = uVar5 + 1;
        lVar12 = lVar12 + 1;
        puVar20 = puVar20 + 1;
      } while (lVar12 < iVar10);
    }
  }
  if ((this_00->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_00->fields).m_Keyboard,(this_00->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar7 = (this_00->fields).m_Text;
  if (pSVar7 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar10 = (pSVar7->fields)._stringLength;
  if (iVar10 < (this_00->fields).m_CaretPosition) {
    (this_00->fields).m_CaretPosition = iVar10;
  }
  else if ((this_00->fields).m_CaretSelectPosition <= iVar10) goto code_?;
  (this_00->fields).m_CaretSelectPosition = iVar10;
code_?:
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InputField_value);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.UIModule.dll::UnityEngine::UISystemProfilerApi::UISystemProfilerApi_AddMarker
            (StringLiteral_InputField_value,(Object_1 *)this_00,(MethodInfo *)0x0);
  if ((this_00->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_00->fields).m_OnValueChanged,
               (Object *)(this_00->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_00,(MethodInfo *)0x0)
  ;
  return;
}


/* Void SetValuesToPrefOrDefault() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_SetValuesToPrefOrDefault
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__1);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dev_serverip);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_token);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_profileID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dev_planetId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_serverIP);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_planetID);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pDVar2 = (this->fields).gameSessionData;
  pSVar3 = GUILoginHandler_GetPrefOrDefault
                     (this,(this->fields).playerPrefKey,StringLiteral__1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  aiStackX_8[0] = mscorlib.dll::System::Convert::Convert_ToInt32_14(pSVar3,(MethodInfo *)0x0);
  pOVar4 = (Object *)FUN_?(uRam_?,aiStackX_8);
  if (pDVar2 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)StringLiteral_profileID
               ,pOVar4,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar1 = 0;
    pDVar2 = (this->fields).gameSessionData;
    pSVar3 = GUILoginHandler_GetPrefOrDefault
                       (this,(this->fields).playerPrefKey,StringLiteral__1,(MethodInfo *)0x0);
    if (pDVar2 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)StringLiteral_token,
                 (Object *)pSVar3,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),1)
                 ,MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                  ->klass->rgctx_data[0x22].method);
      uVar1 = 0;
      pDVar2 = (this->fields).gameSessionData;
      pSVar3 = GUILoginHandler_GetPrefOrDefault
                         (this,StringLiteral_Dev_serverip,::StringLiteral__,(MethodInfo *)0x0);
      if (pDVar2 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar2,
                   (Object *)StringLiteral_serverIP,(Object *)pSVar3,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   ->klass->rgctx_data[0x22].method);
        uVar1 = 0;
        pDVar2 = (this->fields).gameSessionData;
        pSVar3 = GUILoginHandler_GetPrefOrDefault
                           (this,StringLiteral_Dev_planetId,StringLiteral__1,(MethodInfo *)0x0);
        aiStackX_8[0] = mscorlib.dll::System::Convert::Convert_ToInt32_14(pSVar3,(MethodInfo *)0x0);
        pOVar4 = (Object *)FUN_?(uRam_?,aiStackX_8);
        if (pDVar2 != (Dictionary_2_System_String_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar2,
                     (Object *)StringLiteral_planetID,pOVar4,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                     ->klass->rgctx_data[0x22].method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupPlanetID() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_SetupPlanetID
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GUILoginHandler___SetupPlanetID_b__29_0_System__String_);
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
    FUN_?(&StringLiteral_planetID);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameSessionData;
  pIVar1 = (this->fields).planetIdTextField;
  if (this_00 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)this_00,
                        (Object *)StringLiteral_planetID,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                       );
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      value = *(int32_t *)&pOVar2[1].klass;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_4[0]._pointer._value = (void *)0x0;
      aRStack_4[0]._length = 0;
      aRStack_4[0]._12_4_ = 0;
      value_00 = mscorlib.dll::System::Number::Number_FormatInt32
                           (value,aRStack_4,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      if (pIVar1 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                  (pIVar1,value_00,1,(MethodInfo *)0x0);
        pIVar1 = (this->fields).planetIdTextField;
        if (pIVar1 != (InputField *)0x0) {
          pIVar5 = (pIVar1->fields).m_OnValueChanged;
          this_01 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__UnityEngine__Events__UnityAction<System::String>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_01,(Object *)this,
                     MethodInfo__GUILoginHandler___SetupPlanetID_b__29_0_System__String_,
                     (MethodInfo *)0x0);
          if (pIVar5 != (InputField_OnChangeEvent *)0x0) {
            pMVar6 = MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                     ->klass->rgctx_data[2].method;
            pIVar7 = pMVar6->klass;
            if ((pIVar7->field_0x135 & 1) == 0) {
              pIVar7 = (Il2CppClass *)FUN_?(pIVar7);
            }
            pvVar8 = pIVar7->rgctx_data[5].rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
              pvVar8 = (void *)FUN_?(pvVar8);
            }
            uVar9 = FUN_?(pvVar8);
            pIVar7 = pMVar6->klass;
            if ((pIVar7->field_0x135 & 1) == 0) {
              pIVar7 = (Il2CppClass *)FUN_?(pIVar7);
            }
            FUN_?(uVar9,this_01,
                          (pIVar7->rgctx_data[7].method)->klass->rgctx_data[4].rgctxDataDummy);
            if ((pIVar5 != (InputField_OnChangeEvent *)0x0) &&
               (pIVar10 = (pIVar5->fields)._._.m_Calls, pIVar10 != (InvokableCallList *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pLVar11 = (pIVar10->fields).m_RuntimeCalls;
              if (pLVar11 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                FUN_?(pLVar11,uVar9);
                (pIVar10->fields).m_NeedsUpdate = 1;
                return;
              }
            }
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupProfileID() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_SetupProfileID
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GUILoginHandler___SetupProfileID_b__30_0_System__String_);
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
    FUN_?(&StringLiteral_profileID);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gameSessionData;
  pIVar1 = (this->fields).profileIdTextField;
  if (this_00 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)this_00,
                        (Object *)StringLiteral_profileID,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                       );
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      value = *(int32_t *)&pOVar2[1].klass;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_4[0]._pointer._value = (void *)0x0;
      aRStack_4[0]._length = 0;
      aRStack_4[0]._12_4_ = 0;
      value_00 = mscorlib.dll::System::Number::Number_FormatInt32
                           (value,aRStack_4,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      if (pIVar1 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                  (pIVar1,value_00,1,(MethodInfo *)0x0);
        pIVar1 = (this->fields).profileIdTextField;
        if (pIVar1 != (InputField *)0x0) {
          pIVar5 = (pIVar1->fields).m_OnValueChanged;
          this_01 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__UnityEngine__Events__UnityAction<System::String>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_01,(Object *)this,
                     MethodInfo__GUILoginHandler___SetupProfileID_b__30_0_System__String_,
                     (MethodInfo *)0x0);
          if (pIVar5 != (InputField_OnChangeEvent *)0x0) {
            pMVar6 = MethodInfo__UnityEngine__Events__UnityEvent<System::String>__AddListener_UnityEngine__Events__UnityAction<System::String>_
                     ->klass->rgctx_data[2].method;
            pIVar7 = pMVar6->klass;
            if ((pIVar7->field_0x135 & 1) == 0) {
              pIVar7 = (Il2CppClass *)FUN_?(pIVar7);
            }
            pvVar8 = pIVar7->rgctx_data[5].rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
              pvVar8 = (void *)FUN_?(pvVar8);
            }
            uVar9 = FUN_?(pvVar8);
            pIVar7 = pMVar6->klass;
            if ((pIVar7->field_0x135 & 1) == 0) {
              pIVar7 = (Il2CppClass *)FUN_?(pIVar7);
            }
            FUN_?(uVar9,this_01,
                          (pIVar7->rgctx_data[7].method)->klass->rgctx_data[4].rgctxDataDummy);
            if ((pIVar5 != (InputField_OnChangeEvent *)0x0) &&
               (pIVar10 = (pIVar5->fields)._._.m_Calls, pIVar10 != (InvokableCallList *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pLVar11 = (pIVar10->fields).m_RuntimeCalls;
              if (pLVar11 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                FUN_?(pLVar11,uVar9);
                (pIVar10->fields).m_NeedsUpdate = 1;
                return;
              }
            }
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupServerDropdown(Int32) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_SetupServerDropdown
               (GUILoginHandler *this,int32_t savedChoice,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__GUILoginHandler__DevServerTarget);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__Add_UnityEngine__UI__Dropdown__OptionData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__Dropdown__OptionData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__GUILoginHandler__DevServerTarget;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar2 = (longlong *)0x0;
  plVar3 = plVar2;
  if (pIVar1 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar4 = FUN_?(pIVar1,1);
    plVar3 = (longlong *)FUN_?(lVar4 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar3 == (longlong *)0x0) {
    uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar6 = (ArgumentNullException *)func_?(uVar5);
    pSVar7 = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar6,pSVar7,(MethodInfo *)0x0);
    uVar5 = func_?(&MethodInfo__System__Enum__GetNames_System__Type_);
    FUN_?(pAVar6,uVar5);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar4 = (**(code **)(*plVar3 + 600))(plVar3,*(undefined8 *)(*plVar3 + 0x260));
  if (lVar4 != 0) {
    puVar9 = (undefined8 *)(lVar4 + 0x20);
    plVar3 = plVar2;
    while (uVar10 = (uint)plVar3, (int)uVar10 < *(int *)(lVar4 + 0x18)) {
      if (*(uint *)(lVar4 + 0x18) <= uVar10) goto DAT_?;
      pDVar11 = (this->fields).serverDropdown;
      if ((pDVar11 == (Dropdown *)0x0) ||
         (pDVar12 = (pDVar11->fields).m_Options, pDVar12 == (Dropdown_OptionDataList *)0x0))
      goto code_?;
      this_00 = (pDVar12->fields).m_Options;
      pOVar13 = (Object__Class *)*puVar9;
      item = (Object *)FUN_?(TypeInfo__UnityEngine__UI__Dropdown__OptionData);
      bVar14 = iRam_? != 0;
      item[1].klass = pOVar13;
      if (bVar14) {
        uVar15 = (uint)((ulonglong)(item + 1) >> 0xc);
        puVar16 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar17 = *puVar16;
          LOCK();
          uVar18 = *puVar16;
          if (uVar17 == uVar18) {
            *puVar16 = uVar17 | 1L << (uVar15 & 0x3f);
          }
          UNLOCK();
        } while (uVar17 != uVar18);
      }
      pMVar19 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__Add_UnityEngine__UI__Dropdown__OptionData_
      ;
      if (this_00 == (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0) goto code_?;
      piVar20 = &(this_00->fields)._version;
      *piVar20 = *piVar20 + 1;
      pDVar21 = (this_00->fields)._items;
      if (pDVar21 == (Dropdown_OptionData__Array *)0x0) goto code_?;
      uVar15 = (this_00->fields)._size;
      if (uVar15 < (uint)pDVar21->max_length) {
        (this_00->fields)._size = uVar15 + 1;
        FUN_?(pDVar21,(longlong)(int)uVar15,item);
        plVar3 = (longlong *)(ulonglong)(uVar10 + 1);
        puVar9 = puVar9 + 1;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this_00,item,pMVar19->klass->rgctx_data[0xe].method);
        plVar3 = (longlong *)(ulonglong)(uVar10 + 1);
        puVar9 = puVar9 + 1;
      }
    }
    pDVar11 = (this->fields).serverDropdown;
    if (pDVar11 != (Dropdown *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_Set
                (pDVar11,savedChoice,1,(MethodInfo *)0x0);
      pIVar1 = TypeRef__GUILoginHandler__DevServerTarget;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (pIVar1 != (Il2CppType *)0x0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar4 = FUN_?(pIVar1,1);
        plVar2 = (longlong *)FUN_?(lVar4 + 0x20);
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (plVar2 == (longlong *)0x0) {
        uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
        pAVar6 = (ArgumentNullException *)func_?(uVar5);
        pSVar7 = (String *)func_?(&StringLiteral_enumType);
        mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                  (pAVar6,pSVar7,(MethodInfo *)0x0);
        uVar5 = func_?(&MethodInfo__System__Enum__GetNames_System__Type_);
        FUN_?(pAVar6,uVar5);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar4 = (**(code **)(*plVar2 + 600))(plVar2,*(undefined8 *)(*plVar2 + 0x260));
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) <= (uint)savedChoice) {
DAT_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pDVar11 = (this->fields).serverDropdown;
        if ((pDVar11 != (Dropdown *)0x0) &&
           (pTVar22 = (pDVar11->fields).m_CaptionText, pTVar22 != (Text *)0x0)) {
          (*(pTVar22->klass->vtable).set_text.methodPtr)
                    (pTVar22,*(undefined8 *)(lVar4 + 0x20 + (longlong)savedChoice * 8),
                     (pTVar22->klass->vtable).set_text.method);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_serverIP);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_ServerIP_);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_serverIndex);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pSVar7 = GUILoginHandler_GetIPFromDevServerTarget(savedChoice,(MethodInfo *)0x0);
          this_01 = (this->fields).serverIp;
          if (this_01 != (InputField *)0x0) {
            uVar5 = 0;
            UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                      (this_01,pSVar7,1,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetInt
                      (StringLiteral_serverIndex,savedChoice,(MethodInfo *)0x0);
            this_02 = (this->fields).gameSessionData;
            if (this_02 != (Dictionary_2_System_String_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_02,
                         (Object *)StringLiteral_serverIP,(Object *)pSVar7,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),1),
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                         ->klass->rgctx_data[0x22].method);
              pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                  (StringLiteral_ServerIP_,pSVar7,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Debug,0);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__UnityEngine__ILogger);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Debug);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              pIVar23 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
              if (pIVar23 == (ILogger_1 *)0x0) {
                FUN_?();
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar23,3,pSVar7);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_Start
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    return;
  }
  pBVar1 = (this->fields).buildButton;
  if ((pBVar1 != (Button *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pBVar1 = (this->fields).avatarEditButton;
    if ((pBVar1 != (Button *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar2 == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (pGVar2->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartGame(MVGameMode) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_StartGame
               (GUILoginHandler *this,MVGameMode__Enum gameMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameSessionData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVGameMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameSessionData_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gsm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Base);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DesktopBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Desktop___Starting_scene_Desktop);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_____1_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_referrer);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_serverIP);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_language);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WebPlay_as_touch___Starting_scen);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_en_US);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).gameSessionData;
  aMStackX_10[0] = gameMode;
  pOVar2 = (Object *)FUN_?(TypeInfo__MV__Common__MVGameMode,aMStackX_10);
  if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_gameMode,
               pOVar2,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    pDVar1 = (this->fields).gameSessionData;
    if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                 (Object *)StringLiteral_language,(Object *)StringLiteral_en_US,
                 (InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pDVar1 = (this->fields).gameSessionData;
      if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_referrer,(Object *)StringLiteral_gsm,
                   (InsertionBehavior__Enum)uVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pDVar1 = (this->fields).gameSessionData;
        pIVar4 = (this->fields).serverIp;
        if ((pIVar4 != (InputField *)0x0) &&
           (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0)) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                     (Object *)StringLiteral_serverIP,(Object *)(pIVar4->fields).m_Text,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                     ->klass->rgctx_data[0x22].method);
          pDVar1 = (this->fields).gameSessionData;
          this_00 = (GameSessionData *)FUN_?(TypeInfo__GameSessionData);
          GameSessionData::GameSessionData__ctor_1(this_00,pDVar1,(MethodInfo *)0x0);
          pGStackX_20 = this_00;
          this_01 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Char);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__System__Math);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          (this_01->fields).m_MaxCapacity = 0x7fffffff;
          pCVar5 = (Char__Array *)FUN_?(TypeInfo__System__Char,0x100);
          (this_01->fields).m_ChunkChars = pCVar5;
          func_?(&this_01->fields);
          pSStack_6 = this_01;
          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                    (this_01,StringLiteral_GameSessionData_u000A,(MethodInfo *)0x0);
          pDVar1 = (this->fields).gameSessionData;
          if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
            if (iRam_? != 0) {
              uVar7 = (uint)((ulonglong)&PStack_8 >> 0xc);
              puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar10 = *puVar9;
                LOCK();
                uVar11 = *puVar9;
                if (uVar10 == uVar11) {
                  *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (uVar10 != uVar11);
            }
            PStack_8._arg1 = (Object *)(ulonglong)(uint)(pDVar1->fields)._version;
            uStack_12 = 2;
            PStack_8._arg2 = (Object *)0x0;
            PStack_8._args = (Object__Array *)0x0;
            auStack_13._8_8_ = PStack_8._arg1;
            pOStack_14 = (Object *)0x0;
            pOStack_15 = (Object *)0x0;
            uStack_16._0_4_ = 2;
            uStack_16._4_4_ = 0;
            uStack_17 = 0;
            puStack_18 = auStack_13;
            PStack_8._arg0 = (Object *)pDVar1;
            auStack_13._0_8_ = pDVar1;
            while (bVar19 = mscorlib.dll::System::Collections::Generic::
                           Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                           Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                     ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_
                                       *)auStack_13,
                                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::Object>__MoveNext__
                                     ), pSVar20 = StringLiteral__0_____1_u000A, bVar19 != 0) {
              PStack_21._arg0 = (Object *)0x0;
              PStack_21._arg1 = (Object *)0x0;
              PStack_21._arg2 = (Object *)0x0;
              PStack_21._args = (Object__Array *)0x0;
              mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                        (&PStack_21,pOStack_14,pOStack_15,(MethodInfo *)0x0);
              PStack_8._arg0 = PStack_21._arg0;
              PStack_8._arg1 = PStack_21._arg1;
              PStack_8._arg2 = PStack_21._arg2;
              PStack_8._args = PStack_21._args;
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendFormatHelper
                        (this_01,(IFormatProvider *)0x0,pSVar20,&PStack_8,(MethodInfo *)0x0);
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)this_01,(MethodInfo *)0x0);
            FUN_?(this_00);
            PlayerPrefsManager::PlayerPrefsManager_Initialize(this_00,(MethodInfo *)0x0);
            if (this_00 != (GameSessionData *)0x0) {
              AwayMonitor::AwayMonitor_Initialize((this_00->fields).gameMode,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (this != (GUILoginHandler *)0x0) {
                pvVar22 = (this->fields)._._._._.m_CachedPtr;
                if (pvVar22 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                  pcVar23 = (code *)swi(3);
                  (*pcVar23)();
                  return;
                }
                pcVar23 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
                  uVar3 = func_?(&UNK_?);
                  FUN_?(uVar3,0);
                  pcVar23 = (code *)swi(3);
                  (*pcVar23)();
                  return;
                }
                pcRam_? = pcVar23;
                pvVar22 = (void *)(*pcRam_?)(pvVar22);
                pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                         Unmarshal_UnmarshalUnityObject
                                   (pvVar22,
                                    UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                   );
                if (pOVar2 != (Object *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pOVar24 = pOVar2[1].klass;
                  if (pOVar24 == (Object__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(pOVar2,(MethodInfo *)0x0);
                    pcVar23 = (code *)swi(3);
                    (*pcVar23)();
                    return;
                  }
                  pcVar23 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
                    uVar3 = func_?(&UNK_?);
                    FUN_?(uVar3,0);
                    pcVar23 = (code *)swi(3);
                    (*pcVar23)();
                    return;
                  }
                  pcRam_? = pcVar23;
                  (*pcRam_?)(pOVar24);
                  pTVar25 = (this->fields).touchToggle;
                  if (pTVar25 != (Toggle *)0x0) {
                    if ((pTVar25->fields).m_IsOn == 0) {
                      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                                ((Object *)StringLiteral_Desktop___Starting_scene_Desktop,
                                 (MethodInfo *)0x0);
                      pSVar20 = StringLiteral_DesktopBase;
                      if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                        pSVar20 = StringLiteral_DesktopBase;
                      }
                    }
                    else {
                      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                                ((Object *)StringLiteral_WebPlay_as_touch___Starting_scen,
                                 (MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField
                           = 1;
                      pSVar20 = StringLiteral_Base;
                      if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                        pSVar20 = StringLiteral_Base;
                      }
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
                    SceneManager_LoadScene(pSVar20,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void UIDropdownChanged(Int32) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_UIDropdownChanged
               (GUILoginHandler *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_uiIndex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_TrySetInt
                    (StringLiteral_uiIndex,index,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  uVar2 = func_?(&TypeInfo__UnityEngine__PlayerPrefsException);
  this_00 = (PlayerPrefsException *)func_?(uVar2);
  error = (String *)func_?(&StringLiteral_Could_not_store_preference_value);
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefsException::PlayerPrefsException__ctor
            (this_00,error,(MethodInfo *)0x0);
  uVar2 = func_?(&MethodInfo__UnityEngine__PlayerPrefs__SetInt_System__String__int_);
  FUN_?(this_00,uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_Update
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dev_serverip);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_profileID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dev_planetId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_serverIP);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_planetID);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).gameSessionData;
  pSVar2 = (this->fields).playerPrefKey;
  pSVar3 = (this->fields).profileId;
  if ((pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) &&
     (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                          (Object *)StringLiteral_profileID,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                         ), pOVar4 != (Object *)0x0)) {
    if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar4);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar6 = *(int32_t *)&pOVar4[1].klass;
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
    aRStack_7[0]._pointer._value = (void *)0x0;
    aRStack_7[0]._length = 0;
    aRStack_7[0]._12_4_ = 0;
    pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                       (iVar6,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if ((pSVar3 != pSVar8) &&
       ((((pSVar3 == (String *)0x0 || (pSVar8 == (String *)0x0)) ||
         ((pSVar3->fields)._stringLength != (pSVar8->fields)._stringLength)) ||
        (bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar3->fields)._firstChar,
                            (uint8_t *)&(pSVar8->fields)._firstChar,
                            (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar9 == 0)))) {
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                (pSVar2,pSVar8,(MethodInfo *)0x0);
      pSVar3 = pSVar8;
    }
    bVar10 = iRam_? != 0;
    (this->fields).profileId = pSVar3;
    if (bVar10) {
      uVar11 = (uint)((ulonglong)&(this->fields).profileId >> 0xc);
      lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
      do {
        uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
        puVar14 = (ulonglong *)(lVar12 + 0xADDR);
        LOCK();
        bVar10 = uVar13 == *puVar14;
        if (bVar10) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pDVar1 = (this->fields).gameSessionData;
    pSVar2 = (this->fields).serverip;
    if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      pSVar8 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                          (Object *)StringLiteral_serverIP,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                         );
      pSVar3 = (String *)0x0;
      if (pSVar8 != (String *)0x0) {
        if (pSVar8->klass == pSRam0000000182dbdde0) {
          pSVar3 = pSVar8;
        }
        if (pSVar3 == (String *)0x0) {
          FUN_?(pSVar8);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if ((pSVar2 != pSVar3) &&
         (((pSVar2 == (String *)0x0 || (pSVar3 == (String *)0x0)) ||
          (((pSVar2->fields)._stringLength != (pSVar3->fields)._stringLength ||
           (bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar2->fields)._firstChar,
                               (uint8_t *)&(pSVar3->fields)._firstChar,
                               (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar9 == 0)))))) {
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (StringLiteral_Dev_serverip,pSVar3,(MethodInfo *)0x0);
        pSVar2 = pSVar3;
      }
      bVar10 = iRam_? != 0;
      (this->fields).serverip = pSVar2;
      if (bVar10) {
        uVar11 = (uint)((ulonglong)&(this->fields).serverip >> 0xc);
        lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
        do {
          uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
          puVar14 = (ulonglong *)(lVar12 + 0xADDR);
          LOCK();
          bVar10 = uVar13 == *puVar14;
          if (bVar10) {
            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pDVar1 = (this->fields).gameSessionData;
      pSVar2 = (this->fields).planetId;
      if ((pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) &&
         (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                              (Object *)StringLiteral_planetID,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                             ), pOVar4 != (Object *)0x0)) {
        if ((pOVar4->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
          iVar6 = *(int32_t *)&pOVar4[1].klass;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
               field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          aRStack_7[0]._pointer._value = (void *)0x0;
          aRStack_7[0]._length = 0;
          aRStack_7[0]._12_4_ = 0;
          pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                              (iVar6,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          if ((pSVar2 != pSVar3) &&
             ((((pSVar2 == (String *)0x0 || (pSVar3 == (String *)0x0)) ||
               ((pSVar2->fields)._stringLength != (pSVar3->fields)._stringLength)) ||
              (bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar2->fields)._firstChar,
                                  (uint8_t *)&(pSVar3->fields)._firstChar,
                                  (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar9 == 0)))) {
            UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                      (StringLiteral_Dev_planetId,pSVar3,(MethodInfo *)0x0);
            pSVar2 = pSVar3;
          }
          bVar10 = iRam_? != 0;
          (this->fields).planetId = pSVar2;
          if (bVar10) {
            uVar11 = (uint)((ulonglong)&(this->fields).planetId >> 0xc);
            lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
            do {
              uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
              puVar14 = (ulonglong *)(lVar12 + 0xADDR);
              LOCK();
              bVar10 = uVar13 == *puVar14;
              if (bVar10) {
                *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          return;
        }
        FUN_?(pOVar4,lRam_?);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* String UpdateIfChanged(String, String, String) */

String * Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_UpdateIfChanged
                   (GUILoginHandler *this,String *prefName,String *current,String *target,
                   MethodInfo *method)

{
  if (current == target) {
    return current;
  }
  if ((((current != (String *)0x0) && (target != (String *)0x0)) &&
      ((current->fields)._stringLength == (target->fields)._stringLength)) &&
     (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(current->fields)._firstChar,
                         (uint8_t *)&(target->fields)._firstChar,
                         (longlong)(current->fields)._stringLength * 2,(MethodInfo *)0x0),
     bVar1 != 0)) {
    return current;
  }
  UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
            (prefName,target,(MethodInfo *)0x0);
  return target;
}


/* Void UpdatePrefValuesIfChanged() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler_UpdatePrefValuesIfChanged
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dev_serverip);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_profileID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dev_planetId);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_serverIP);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_planetID);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).gameSessionData;
  pSVar2 = (this->fields).playerPrefKey;
  pSVar3 = (this->fields).profileId;
  if ((pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) &&
     (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                          (Object *)StringLiteral_profileID,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                         ), pOVar4 != (Object *)0x0)) {
    if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar4);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar6 = *(int32_t *)&pOVar4[1].klass;
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
    aRStack_7[0]._pointer._value = (void *)0x0;
    aRStack_7[0]._length = 0;
    aRStack_7[0]._12_4_ = 0;
    pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                       (iVar6,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if ((pSVar3 != pSVar8) &&
       ((((pSVar3 == (String *)0x0 || (pSVar8 == (String *)0x0)) ||
         ((pSVar3->fields)._stringLength != (pSVar8->fields)._stringLength)) ||
        (bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar3->fields)._firstChar,
                            (uint8_t *)&(pSVar8->fields)._firstChar,
                            (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar9 == 0)))) {
      UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                (pSVar2,pSVar8,(MethodInfo *)0x0);
      pSVar3 = pSVar8;
    }
    bVar10 = iRam_? != 0;
    (this->fields).profileId = pSVar3;
    if (bVar10) {
      uVar11 = (uint)((ulonglong)&(this->fields).profileId >> 0xc);
      lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
      do {
        uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
        puVar14 = (ulonglong *)(lVar12 + 0xADDR);
        LOCK();
        bVar10 = uVar13 == *puVar14;
        if (bVar10) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pDVar1 = (this->fields).gameSessionData;
    pSVar2 = (this->fields).serverip;
    if (pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      pSVar8 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                          (Object *)StringLiteral_serverIP,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                         );
      pSVar3 = (String *)0x0;
      if (pSVar8 != (String *)0x0) {
        if (pSVar8->klass == pSRam0000000182dbdde0) {
          pSVar3 = pSVar8;
        }
        if (pSVar3 == (String *)0x0) {
          FUN_?(pSVar8);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if ((pSVar2 != pSVar3) &&
         (((pSVar2 == (String *)0x0 || (pSVar3 == (String *)0x0)) ||
          (((pSVar2->fields)._stringLength != (pSVar3->fields)._stringLength ||
           (bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar2->fields)._firstChar,
                               (uint8_t *)&(pSVar3->fields)._firstChar,
                               (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar9 == 0)))))) {
        UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                  (StringLiteral_Dev_serverip,pSVar3,(MethodInfo *)0x0);
        pSVar2 = pSVar3;
      }
      bVar10 = iRam_? != 0;
      (this->fields).serverip = pSVar2;
      if (bVar10) {
        uVar11 = (uint)((ulonglong)&(this->fields).serverip >> 0xc);
        lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
        do {
          uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
          puVar14 = (ulonglong *)(lVar12 + 0xADDR);
          LOCK();
          bVar10 = uVar13 == *puVar14;
          if (bVar10) {
            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pDVar1 = (this->fields).gameSessionData;
      pSVar2 = (this->fields).planetId;
      if ((pDVar1 != (Dictionary_2_System_String_System_Object_ *)0x0) &&
         (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                              (Object *)StringLiteral_planetID,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__get_Item_System__String_
                             ), pOVar4 != (Object *)0x0)) {
        if ((pOVar4->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
          iVar6 = *(int32_t *)&pOVar4[1].klass;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
               field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          aRStack_7[0]._pointer._value = (void *)0x0;
          aRStack_7[0]._length = 0;
          aRStack_7[0]._12_4_ = 0;
          pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                              (iVar6,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          if ((pSVar2 != pSVar3) &&
             ((((pSVar2 == (String *)0x0 || (pSVar3 == (String *)0x0)) ||
               ((pSVar2->fields)._stringLength != (pSVar3->fields)._stringLength)) ||
              (bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar2->fields)._firstChar,
                                  (uint8_t *)&(pSVar3->fields)._firstChar,
                                  (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar9 == 0)))) {
            UnityEngine.CoreModule.dll::UnityEngine::PlayerPrefs::PlayerPrefs_SetString
                      (StringLiteral_Dev_planetId,pSVar3,(MethodInfo *)0x0);
            pSVar2 = pSVar3;
          }
          bVar10 = iRam_? != 0;
          (this->fields).planetId = pSVar2;
          if (bVar10) {
            uVar11 = (uint)((ulonglong)&(this->fields).planetId >> 0xc);
            lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
            do {
              uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
              puVar14 = (ulonglong *)(lVar12 + 0xADDR);
              LOCK();
              bVar10 = uVar13 == *puVar14;
              if (bVar10) {
                *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          return;
        }
        FUN_?(pOVar4,lRam_?);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <SetupPlanetID>b__29_0(String) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler__SetupPlanetID_b__29_0
               (GUILoginHandler *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value_00 = (Object *)0x0;
  aiStackX_10[0] = 0;
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (value == (String *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RStack_1._pointer._value = &(value->fields)._firstChar;
  RStack_1._12_4_ = 0;
  RStack_1._length = (value->fields)._stringLength;
  info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                   ((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  result = aiStackX_10;
  bVar2 = mscorlib.dll::System::Number::Number_TryParseInt32
                    (&RStack_1,NumberStyles__Enum_Integer,info,result,(MethodInfo *)0x0);
  aiStackX_20[0] = aiStackX_10[0];
  if (bVar2 == 0) {
    return;
  }
  this_00 = (this->fields).gameSessionData;
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  lVar3 = lRam_?;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      value_00 = (Object *)FUN_?(lRam_?);
      lVar3 = (longlong)*(int *)(lVar3 + 0xf8);
      piVar4 = aiStackX_20;
    }
    else {
      if ((char)aiStackX_20[0] == '\0') goto code_?;
      value_00 = (Object *)FUN_?(lRam_?);
      iVar5 = *(int *)(*(longlong *)(lVar3 + 0x80) + 0x38) + -0x10;
      piVar4 = (int32_t *)((longlong)aiStackX_20 + (longlong)iVar5);
      lVar3 = (longlong)*(int *)(lVar3 + 0xf8) - (longlong)iVar5;
    }
    FUN_?(value_00 + 1,piVar4,lVar3 + -0x10);
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)(value_00 + 1) >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
  }
  else {
    value_00 = (Object *)CONCAT44(aiStackX_20[1],aiStackX_20[0]);
  }
code_?:
  if (this_00 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_planetID
               ,value_00,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)result >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void <SetupProfileID>b__30_0(String) */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler__SetupProfileID_b__30_0
               (GUILoginHandler *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_token);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value_00 = (Object *)0x0;
  aiStackX_10[0] = 0;
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (value != (String *)0x0) {
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    RStack_1._pointer._value = &(value->fields)._firstChar;
    RStack_1._12_4_ = 0;
    RStack_1._length = (value->fields)._stringLength;
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    in_R9 = aiStackX_10;
    bVar2 = mscorlib.dll::System::Number::Number_TryParseInt32
                      (&RStack_1,NumberStyles__Enum_Integer,info,in_R9,(MethodInfo *)0x0);
    lVar3 = lRam_?;
    if (bVar2 != 0) {
      pDVar4 = (this->fields).gameSessionData;
      aiStackX_20[0] = aiStackX_10[0];
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          value_00 = (Object *)FUN_?(lRam_?);
          lVar3 = (longlong)*(int *)(lVar3 + 0xf8);
          piVar5 = aiStackX_20;
        }
        else {
          if ((char)aiStackX_10[0] == '\0') goto code_?;
          value_00 = (Object *)FUN_?(lRam_?);
          iVar6 = *(int *)(*(longlong *)(lVar3 + 0x80) + 0x38) + -0x10;
          piVar5 = (int32_t *)((longlong)aiStackX_20 + (longlong)iVar6);
          lVar3 = (longlong)*(int *)(lVar3 + 0xf8) - (longlong)iVar6;
        }
        FUN_?(value_00 + 1,piVar5,lVar3 + -0x10);
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)(value_00 + 1) >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
      }
      else {
        value_00 = (Object *)CONCAT44(aiStackX_20[1],aiStackX_10[0]);
      }
code_?:
      if (pDVar4 == (Dictionary_2_System_String_System_Object_ *)0x0) goto code_?;
      in_R9 = (int32_t *)CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                 (Object *)StringLiteral_profileID,value_00,(InsertionBehavior__Enum)in_R9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
  }
  pDVar4 = (this->fields).gameSessionData;
  if (pDVar4 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar4,(Object *)StringLiteral_token,
               (Object *)value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* GUILoginHandler() */

void Assembly-CSharp.dll::GUILoginHandler::GUILoginHandler__ctor
               (GUILoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Add_System__String__GUILoginHandler__PlanetData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_playButtonAdsEnabledDefault);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WOTest);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_game_server_test);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_embedded);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_rewardedAdsEnabledDefault);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_newPlanetName);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_clientDefinedNewToken_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_interstitialsAdsEnabledDefault);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_newToken);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MaterialsTest);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_boostersEnabledDefault);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isSoftLaunch);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Dev_profileId);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).playerPrefKey = StringLiteral_Dev_profileId;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).playerPrefKey >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = (Dictionary_2_System_String_GUILoginHandler_PlanetData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>
                         );
  pEVar6 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
           EqualityComparer_1_System_Object__get_Default
                     (MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Dictionary__
                      ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  value = (Object *)0x0;
  if ((pEVar6 != (EqualityComparer_1_System_Object_ *)0x0) &&
     (bVar1 = iRam_? != 0,
     (this_00->fields)._comparer = (IEqualityComparer_1_System_String_ *)0x0, bVar1)) {
    uVar2 = (uint)((ulonglong)&(this_00->fields)._comparer >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  uStackX_8 = 0xbef7;
  uStackX_c = 1;
  if (this_00 != (Dictionary_2_System_String_GUILoginHandler_PlanetData_ *)0x0) {
    uVar7 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,GUILoginHandler+PlanetData]::
    Dictionary_2_System_Object_GUILoginHandler_PlanetData__TryInsert
              ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_00,
               (Object *)StringLiteral_WOTest,(GUILoginHandler_PlanetData)0x10000bef7,
               (InsertionBehavior__Enum)uVar7,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Add_System__String__GUILoginHandler__PlanetData_
               ->klass->rgctx_data[0x22].method);
    uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),2);
    uStackX_8 = 0xbef8;
    uStackX_c = 0xd;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,GUILoginHandler+PlanetData]::
    Dictionary_2_System_Object_GUILoginHandler_PlanetData__TryInsert
              ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_00,
               (Object *)StringLiteral_Default,(GUILoginHandler_PlanetData)0xd0000bef8,
               (InsertionBehavior__Enum)uVar7,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Add_System__String__GUILoginHandler__PlanetData_
               ->klass->rgctx_data[0x22].method);
    uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),2);
    uStackX_8 = 0xbff1;
    uStackX_c = 0xb3;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Object,GUILoginHandler+PlanetData]::
    Dictionary_2_System_Object_GUILoginHandler_PlanetData__TryInsert
              ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)this_00,
               (Object *)StringLiteral_MaterialsTest,(GUILoginHandler_PlanetData)0xb30000bff1,
               (InsertionBehavior__Enum)uVar7,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_GUILoginHandler::PlanetData>__Add_System__String__GUILoginHandler__PlanetData_
               ->klass->rgctx_data[0x22].method);
    bVar1 = iRam_? != 0;
    (this->fields).defaultPlanetData = this_00;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).defaultPlanetData >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
              );
    if (this_01 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_newToken,(Object *)StringLiteral_clientDefinedNewToken_,
                 (InsertionBehavior__Enum)uVar7,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar4 = CONCAT71((int7)((ulonglong)uVar7 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_newPlanetName,(Object *)StringLiteral_game_server_test,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar2 = uStackX_8;
      lVar3 = lRam_?;
      uStackX_8 = uStackX_8 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           (pOVar8 = value, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar8 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar8 + 1,&uStackX_8,(longlong)*(int *)(lVar3 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
            uVar4 = (ulonglong)(uVar2 & 0x3f);
            lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar9 = *(ulonglong *)(lVar3 + 0xADDR);
              puVar5 = (ulonglong *)(lVar3 + 0xADDR);
              LOCK();
              bVar1 = uVar9 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar9 | 1L << uVar4;
              }
              UNLOCK();
            } while (!bVar1);
          }
        }
      }
      else {
        pOVar8 = (Object *)(CONCAT44(uStackX_c,uVar2) & 0xffffffffffffff00);
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_isSoftLaunch,pOVar8,(InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar2 = uStackX_8;
      lVar3 = lRam_?;
      uStackX_8 = uStackX_8 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           (pOVar8 = value, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar8 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar8 + 1,&uStackX_8,(longlong)*(int *)(lVar3 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
            uVar4 = (ulonglong)(uVar2 & 0x3f);
            lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar9 = *(ulonglong *)(lVar3 + 0xADDR);
              puVar5 = (ulonglong *)(lVar3 + 0xADDR);
              LOCK();
              bVar1 = uVar9 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar9 | 1L << uVar4;
              }
              UNLOCK();
            } while (!bVar1);
          }
        }
      }
      else {
        pOVar8 = (Object *)(CONCAT44(uStackX_c,uVar2) & 0xffffffffffffff00);
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_embedded,pOVar8,(InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar2 = uStackX_8;
      lVar3 = lRam_?;
      uStackX_8 = uStackX_8 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           (pOVar8 = value, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar8 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar8 + 1,&uStackX_8,(longlong)*(int *)(lVar3 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
            uVar4 = (ulonglong)(uVar2 & 0x3f);
            lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar9 = *(ulonglong *)(lVar3 + 0xADDR);
              puVar5 = (ulonglong *)(lVar3 + 0xADDR);
              LOCK();
              bVar1 = uVar9 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar9 | 1L << uVar4;
              }
              UNLOCK();
            } while (!bVar1);
          }
        }
      }
      else {
        pOVar8 = (Object *)(CONCAT44(uStackX_c,uVar2) & 0xffffffffffffff00);
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_playButtonAdsEnabledDefault,pOVar8,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar2 = uStackX_8;
      lVar3 = lRam_?;
      uStackX_8 = uStackX_8 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           (pOVar8 = value, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar8 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar8 + 1,&uStackX_8,(longlong)*(int *)(lVar3 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
            uVar4 = (ulonglong)(uVar2 & 0x3f);
            lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar9 = *(ulonglong *)(lVar3 + 0xADDR);
              puVar5 = (ulonglong *)(lVar3 + 0xADDR);
              LOCK();
              bVar1 = uVar9 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar9 | 1L << uVar4;
              }
              UNLOCK();
            } while (!bVar1);
          }
        }
      }
      else {
        pOVar8 = (Object *)(CONCAT44(uStackX_c,uVar2) & 0xffffffffffffff00);
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_boostersEnabledDefault,pOVar8,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar2 = uStackX_8;
      lVar3 = lRam_?;
      uStackX_8 = uStackX_8 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           (pOVar8 = value, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar8 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar8 + 1,&uStackX_8,(longlong)*(int *)(lVar3 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
            uVar4 = (ulonglong)(uVar2 & 0x3f);
            lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar9 = *(ulonglong *)(lVar3 + 0xADDR);
              puVar5 = (ulonglong *)(lVar3 + 0xADDR);
              LOCK();
              bVar1 = uVar9 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar9 | 1L << uVar4;
              }
              UNLOCK();
            } while (!bVar1);
          }
        }
      }
      else {
        pOVar8 = (Object *)(CONCAT44(uStackX_c,uVar2) & 0xffffffffffffff00);
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_interstitialsAdsEnabledDefault,pOVar8,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar2 = uStackX_8;
      lVar3 = lRam_?;
      uStackX_8 = uStackX_8 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          value = (Object *)FUN_?(lRam_?);
          FUN_?(value + 1,&uStackX_8,(longlong)*(int *)(lVar3 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)(value + 1) >> 0xc);
            uVar4 = (ulonglong)(uVar2 & 0x3f);
            lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar9 = *(ulonglong *)(lVar3 + 0xADDR);
              puVar5 = (ulonglong *)(lVar3 + 0xADDR);
              LOCK();
              bVar1 = uVar9 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar9 | 1L << uVar4;
              }
              UNLOCK();
            } while (!bVar1);
          }
        }
      }
      else {
        value = (Object *)(CONCAT44(uStackX_c,uVar2) & 0xffffffffffffff00);
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_rewardedAdsEnabledDefault,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)(uVar4 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      bVar1 = iRam_? != 0;
      (this->fields).gameSessionData = (Dictionary_2_System_String_System_Object_ *)this_01;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this->fields).gameSessionData >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
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
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

