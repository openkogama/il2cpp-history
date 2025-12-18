
/* Void Play() */

void Assembly-CSharp.dll::GUIPromotionalLoginHandler::GUIPromotionalLoginHandler_Play
               (GUIPromotionalLoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0xbef7,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameSessionData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVGameMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BaseLegacyUI);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_token);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__212_32_240_13_5055);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_profileID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_serverIP);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_language);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_planetID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_en_US);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = lRam_?;
  LVar2.m_LoadSceneMode = 0;
  LVar2.m_LocalPhysicsMode = 0;
  pDVar3 = (this->fields).gameSessionData;
  LStackX_8 = (LoadSceneParameters)((ulonglong)(uint)LStackX_8.m_LocalPhysicsMode << 0x20);
  value = LStackX_8;
  if ((*(int *)(lRam_? + 0x28) < 0) &&
     ((*(longlong *)(lRam_? + 0x60) == 0 ||
      (value = LVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
    value = (LoadSceneParameters)FUN_?(lRam_?);
    FUN_?((Object *)((longlong)value + 0x10),&LStackX_8,
                  (longlong)*(int *)(lVar1 + 0xf8) + -0x10);
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)((longlong)value + 0x10U) >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
  }
  if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    IVar8 = CONCAT31((int3)((uint)in_R9D >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)StringLiteral_profileID
               ,(Object *)value,IVar8,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    pDVar3 = (this->fields).gameSessionData;
    LStackX_8.m_LoadSceneMode = 0xbef7;
    pOVar9 = (Object *)FUN_?(lRam_?,&LStackX_8);
    if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      IVar8 = CONCAT31((int3)(IVar8 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                 (Object *)StringLiteral_planetID,pOVar9,IVar8,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pDVar3 = (this->fields).gameSessionData;
      if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        IVar8 = CONCAT31((int3)(IVar8 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)StringLiteral_token
                   ,(Object *)StringLiteral__0,IVar8,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pDVar3 = (this->fields).gameSessionData;
        if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
          IVar8 = CONCAT31((int3)(IVar8 >> 8),1);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                     (Object *)StringLiteral_serverIP,(Object *)StringLiteral__212_32_240_13_5055,
                     IVar8,MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                            ->klass->rgctx_data[0x22].method);
          pDVar3 = (this->fields).gameSessionData;
          LStackX_8.m_LoadSceneMode = 1;
          pOVar9 = (Object *)FUN_?(TypeInfo__MV__Common__MVGameMode,&LStackX_8);
          if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
            IVar8 = CONCAT31((int3)(IVar8 >> 8),1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                       (Object *)StringLiteral_gameMode,pOVar9,IVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                       ->klass->rgctx_data[0x22].method);
            pDVar3 = (this->fields).gameSessionData;
            if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                         (Object *)StringLiteral_language,(Object *)StringLiteral_en_US,
                         CONCAT31((int3)(IVar8 >> 8),1),
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                         ->klass->rgctx_data[0x22].method);
              pDVar3 = (this->fields).gameSessionData;
              this_00 = (GameSessionData *)FUN_?(TypeInfo__GameSessionData);
              GameSessionData::GameSessionData__ctor_1(this_00,pDVar3,(MethodInfo *)0x0);
              FUN_?(this_00);
              PlayerPrefsManager::PlayerPrefsManager_Initialize(this_00,(MethodInfo *)0x0);
              if (this_00 != (GameSessionData *)0x0) {
                AwayMonitor::AwayMonitor_Initialize((this_00->fields).gameMode,(MethodInfo *)0x0);
                this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                if (this_01 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (this_01,0,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                            ((Object *)this_00,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  sceneName = StringLiteral_BaseLegacyUI;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager,0);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  LStackX_8.m_LoadSceneMode = 0;
                  LStackX_8.m_LocalPhysicsMode = 0;
                  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
                  SceneManager_LoadSceneAsyncNameIndexInternal
                            (sceneName,-1,LStackX_8,1,(MethodInfo *)0x0);
                  pcVar10 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                    uVar11 = func_?(&UNK_?);
                    FUN_?(uVar11,0);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pcRam_? = pcVar10;
                  iVar12 = (*pcRam_?)();
                  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
                  SceneManager_GetSceneAt(iVar12 + -1,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Play2D() */

void Assembly-CSharp.dll::GUIPromotionalLoginHandler::GUIPromotionalLoginHandler_Play2D
               (GUIPromotionalLoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0xbf24,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameSessionData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVGameMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BaseLegacyUI);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_token);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__212_32_240_13_5055);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_profileID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_serverIP);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_language);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_planetID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_en_US);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = lRam_?;
  LVar2.m_LoadSceneMode = 0;
  LVar2.m_LocalPhysicsMode = 0;
  pDVar3 = (this->fields).gameSessionData;
  LStackX_8 = (LoadSceneParameters)((ulonglong)(uint)LStackX_8.m_LocalPhysicsMode << 0x20);
  value = LStackX_8;
  if ((*(int *)(lRam_? + 0x28) < 0) &&
     ((*(longlong *)(lRam_? + 0x60) == 0 ||
      (value = LVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
    value = (LoadSceneParameters)FUN_?(lRam_?);
    FUN_?((Object *)((longlong)value + 0x10),&LStackX_8,
                  (longlong)*(int *)(lVar1 + 0xf8) + -0x10);
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)((longlong)value + 0x10U) >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
  }
  if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    IVar8 = CONCAT31((int3)((uint)in_R9D >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)StringLiteral_profileID
               ,(Object *)value,IVar8,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    pDVar3 = (this->fields).gameSessionData;
    LStackX_8.m_LoadSceneMode = 0xbf24;
    pOVar9 = (Object *)FUN_?(lRam_?,&LStackX_8);
    if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      IVar8 = CONCAT31((int3)(IVar8 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                 (Object *)StringLiteral_planetID,pOVar9,IVar8,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pDVar3 = (this->fields).gameSessionData;
      if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        IVar8 = CONCAT31((int3)(IVar8 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)StringLiteral_token
                   ,(Object *)StringLiteral__0,IVar8,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pDVar3 = (this->fields).gameSessionData;
        if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
          IVar8 = CONCAT31((int3)(IVar8 >> 8),1);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                     (Object *)StringLiteral_serverIP,(Object *)StringLiteral__212_32_240_13_5055,
                     IVar8,MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                            ->klass->rgctx_data[0x22].method);
          pDVar3 = (this->fields).gameSessionData;
          LStackX_8.m_LoadSceneMode = 1;
          pOVar9 = (Object *)FUN_?(TypeInfo__MV__Common__MVGameMode,&LStackX_8);
          if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
            IVar8 = CONCAT31((int3)(IVar8 >> 8),1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                       (Object *)StringLiteral_gameMode,pOVar9,IVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                       ->klass->rgctx_data[0x22].method);
            pDVar3 = (this->fields).gameSessionData;
            if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                         (Object *)StringLiteral_language,(Object *)StringLiteral_en_US,
                         CONCAT31((int3)(IVar8 >> 8),1),
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                         ->klass->rgctx_data[0x22].method);
              pDVar3 = (this->fields).gameSessionData;
              this_00 = (GameSessionData *)FUN_?(TypeInfo__GameSessionData);
              GameSessionData::GameSessionData__ctor_1(this_00,pDVar3,(MethodInfo *)0x0);
              FUN_?(this_00);
              PlayerPrefsManager::PlayerPrefsManager_Initialize(this_00,(MethodInfo *)0x0);
              if (this_00 != (GameSessionData *)0x0) {
                AwayMonitor::AwayMonitor_Initialize((this_00->fields).gameMode,(MethodInfo *)0x0);
                this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                if (this_01 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (this_01,0,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                            ((Object *)this_00,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  sceneName = StringLiteral_BaseLegacyUI;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager,0);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  LStackX_8.m_LoadSceneMode = 0;
                  LStackX_8.m_LocalPhysicsMode = 0;
                  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
                  SceneManager_LoadSceneAsyncNameIndexInternal
                            (sceneName,-1,LStackX_8,1,(MethodInfo *)0x0);
                  pcVar10 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                    uVar11 = func_?(&UNK_?);
                    FUN_?(uVar11,0);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pcRam_? = pcVar10;
                  iVar12 = (*pcRam_?)();
                  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
                  SceneManager_GetSceneAt(iVar12 + -1,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void StartAutoJoinSession(Int32) */

void Assembly-CSharp.dll::GUIPromotionalLoginHandler::
     GUIPromotionalLoginHandler_StartAutoJoinSession
               (GUIPromotionalLoginHandler *this,int32_t planetID,MethodInfo *method)

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
    FUN_?(&TypeInfo__GameSessionData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVGameMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BaseLegacyUI);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_token);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__212_32_240_13_5055);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_profileID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_serverIP);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_language);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_planetID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_en_US);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = lRam_?;
  LVar2.m_LoadSceneMode = 0;
  LVar2.m_LocalPhysicsMode = 0;
  pDVar3 = (this->fields).gameSessionData;
  LStackX_8 = (LoadSceneParameters)((ulonglong)(uint)LStackX_8.m_LocalPhysicsMode << 0x20);
  value = LStackX_8;
  if ((*(int *)(lRam_? + 0x28) < 0) &&
     ((*(longlong *)(lRam_? + 0x60) == 0 ||
      (value = LVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
    value = (LoadSceneParameters)FUN_?(lRam_?);
    FUN_?((Object *)((longlong)value + 0x10),&LStackX_8,
                  (longlong)*(int *)(lVar1 + 0xf8) + -0x10);
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)((longlong)value + 0x10U) >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
  }
  if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
    IVar8 = CONCAT31((int3)((uint)in_R9D >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)StringLiteral_profileID
               ,(Object *)value,IVar8,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
               ->klass->rgctx_data[0x22].method);
    pDVar3 = (this->fields).gameSessionData;
    LStackX_8.m_LoadSceneMode = planetID;
    pOVar9 = (Object *)FUN_?(lRam_?,&LStackX_8);
    if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
      IVar8 = CONCAT31((int3)(IVar8 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                 (Object *)StringLiteral_planetID,pOVar9,IVar8,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pDVar3 = (this->fields).gameSessionData;
      if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
        IVar8 = CONCAT31((int3)(IVar8 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)StringLiteral_token
                   ,(Object *)StringLiteral__0,IVar8,
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pDVar3 = (this->fields).gameSessionData;
        if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
          IVar8 = CONCAT31((int3)(IVar8 >> 8),1);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                     (Object *)StringLiteral_serverIP,(Object *)StringLiteral__212_32_240_13_5055,
                     IVar8,MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                            ->klass->rgctx_data[0x22].method);
          pDVar3 = (this->fields).gameSessionData;
          LStackX_8.m_LoadSceneMode = 1;
          pOVar9 = (Object *)FUN_?(TypeInfo__MV__Common__MVGameMode,&LStackX_8);
          if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
            IVar8 = CONCAT31((int3)(IVar8 >> 8),1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                       (Object *)StringLiteral_gameMode,pOVar9,IVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                       ->klass->rgctx_data[0x22].method);
            pDVar3 = (this->fields).gameSessionData;
            if (pDVar3 != (Dictionary_2_System_String_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                         (Object *)StringLiteral_language,(Object *)StringLiteral_en_US,
                         CONCAT31((int3)(IVar8 >> 8),1),
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__set_Item_System__String__System__Object_
                         ->klass->rgctx_data[0x22].method);
              pDVar3 = (this->fields).gameSessionData;
              this_00 = (GameSessionData *)FUN_?(TypeInfo__GameSessionData);
              GameSessionData::GameSessionData__ctor_1(this_00,pDVar3,(MethodInfo *)0x0);
              FUN_?(this_00);
              PlayerPrefsManager::PlayerPrefsManager_Initialize(this_00,(MethodInfo *)0x0);
              if (this_00 != (GameSessionData *)0x0) {
                AwayMonitor::AwayMonitor_Initialize((this_00->fields).gameMode,(MethodInfo *)0x0);
                this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                if (this_01 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (this_01,0,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                            ((Object *)this_00,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  sceneName = StringLiteral_BaseLegacyUI;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager,0);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  LStackX_8.m_LoadSceneMode = 0;
                  LStackX_8.m_LocalPhysicsMode = 0;
                  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c
                      == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
                  SceneManager_LoadSceneAsyncNameIndexInternal
                            (sceneName,-1,LStackX_8,1,(MethodInfo *)0x0);
                  pcVar10 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                    uVar11 = func_?(&UNK_?);
                    FUN_?(uVar11,0);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pcRam_? = pcVar10;
                  iVar12 = (*pcRam_?)();
                  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
                  SceneManager_GetSceneAt(iVar12 + -1,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* GUIPromotionalLoginHandler() */

void Assembly-CSharp.dll::GUIPromotionalLoginHandler::GUIPromotionalLoginHandler__ctor
               (GUIPromotionalLoginHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_game_server_test);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_embedded);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_newPlanetName);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_clientDefinedNewToken_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_newToken);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isSoftLaunch);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Dictionary__
            );
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_newToken,
             (Object *)StringLiteral_clientDefinedNewToken_,(InsertionBehavior__Enum)uVar2,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_newPlanetName,(Object *)StringLiteral_game_server_test,
             (InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
             ->klass->rgctx_data[0x22].method);
  lVar4 = lRam_?;
  pOStackX_18 = (Object *)((ulonglong)pOStackX_18 & 0xffffffffffffff00);
  pOVar5 = pOStackX_18;
  if ((*(int *)(lRam_? + 0x28) < 0) &&
     ((*(longlong *)(lRam_? + 0x60) == 0 ||
      (pOVar5 = (Object *)0x0, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
    pOVar5 = (Object *)FUN_?(lRam_?);
    FUN_?(pOVar5 + 1,&pOStackX_18,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
      uVar3 = (ulonglong)(uVar6 & 0x3f);
      lVar4 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar8 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << uVar3;
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  uVar3 = CONCAT71((int7)(uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,
             (Object *)StringLiteral_isSoftLaunch,pOVar5,(InsertionBehavior__Enum)uVar3,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
             ->klass->rgctx_data[0x22].method);
  lVar4 = lRam_?;
  pOStackX_18 = (Object *)((ulonglong)pOStackX_18 & 0xffffffffffffff00);
  pOVar5 = pOStackX_18;
  if ((*(int *)(lRam_? + 0x28) < 0) &&
     ((*(longlong *)(lRam_? + 0x60) == 0 ||
      (pOVar5 = (Object *)0x0, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
    pOVar5 = (Object *)FUN_?(lRam_?);
    FUN_?(pOVar5 + 1,&pOStackX_18,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
      uVar3 = (ulonglong)(uVar6 & 0x3f);
      lVar4 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar8 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << uVar3;
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_embedded,
             pOVar5,(InsertionBehavior__Enum)CONCAT71((int7)(uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Object>__Add_System__String__System__Object_
             ->klass->rgctx_data[0x22].method);
  bVar9 = iRam_? != 0;
  (this->fields).gameSessionData = (Dictionary_2_System_String_System_Object_ *)this_00;
  if (bVar9) {
    uVar6 = (uint)((ulonglong)&(this->fields).gameSessionData >> 0xc);
    lVar4 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar8 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar9 = uVar3 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar3 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar10 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar11 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
    ppMVar12 = ppMVar11;
    if (lVar4 == lRam_?) {
      iRam_? = iRam_? + 1;
      lVar4 = lRam_?;
    }
    else {
      do {
        uVar6 = (uint)ppMVar12;
        LOCK();
        bVar9 = uVar6 != uRam_?;
        uVar13 = uVar6;
        uVar14 = uVar6 + 1;
        if (bVar9) {
          uVar13 = uRam_?;
          uVar14 = uRam_?;
        }
        uRam_? = uVar14;
        UNLOCK();
      } while ((bVar9) &&
              (ppMVar12 = (MethodInfo **)(ulonglong)uVar13, uVar6 = uVar13, uVar13 != 2));
      while (uVar6 != 0) {
        _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
        uVar6 = uRam_?;
        LOCK();
        uRam_? = 2;
        UNLOCK();
      }
    }
    lRam_? = lVar4;
    puVar15 = &(pOVar10->_1).field_0x1c;
    LOCK();
    bVar9 = *(int *)puVar15 == 1;
    if (bVar9) {
      *(undefined4 *)puVar15 = 1;
    }
    uVar6 = uRam_?;
    UNLOCK();
    if (bVar9) {
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
    }
    else {
      puVar16 = &(pOVar10->_1).cctor_finished_or_no_cctor;
      LOCK();
      bVar9 = *puVar16 == 1;
      if (bVar9) {
        *puVar16 = 1;
      }
      uVar6 = uRam_?;
      UNLOCK();
      if (bVar9) {
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
        psVar17 = &(pOVar10->_1).cctor_thread;
        LOCK();
        bVar9 = (ulonglong)uVar6 == *psVar17;
        if (bVar9) {
          *psVar17 = (ulonglong)uVar6;
        }
        UNLOCK();
        if (bVar9) {
          return;
        }
        while( true ) {
          puVar15 = &(pOVar10->_1).field_0x1c;
          LOCK();
          bVar9 = *(int *)puVar15 == 1;
          if (bVar9) {
            *(undefined4 *)puVar15 = 1;
          }
          UNLOCK();
          if (bVar9) break;
          LOCK();
          lVar4._0_4_ = (pOVar10->_1).initializationExceptionGCHandle;
          lVar4._4_4_ = (pOVar10->_1).cctor_started;
          if (lVar4 == 0) {
            (pOVar10->_1).initializationExceptionGCHandle = 0;
            (pOVar10->_1).cctor_started = 0;
          }
          UNLOCK();
          if (lVar4 != 0) break;
          FUN_?(*puRam_?);
        }
      }
      else {
        uVar6 = GetCurrentThreadId();
        LOCK();
        (pOVar10->_1).cctor_thread = (ulonglong)uVar6;
        UNLOCK();
        LOCK();
        (pOVar10->_1).cctor_finished_or_no_cctor = 1;
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
        if (((pOVar10->_1).field_0x6e & 4) != 0) {
          FUN_?(pOVar10);
          ppMVar12 = ppMVar11;
          pIVar18 = (Il2CppClass *)pOVar10;
code_?:
          do {
            if (ppMVar12 == (MethodInfo **)0x0) {
              FUN_?(pIVar18);
              if (pIVar18->field_count != 0) {
                ppMVar12 = pIVar18->methods;
                pMVar19 = *ppMVar12;
code_?:
                if (pMVar19 != (MethodInfo *)0x0) {
                  if ((*pMVar19->name == '.') && ((pMVar19->flags & 0x800) != 0)) {
                    ppMVar20 = ppMVar11;
                    while (ppMVar21 = ppMVar20 + 0x3052af3c,
                          ppMVar20 = (MethodInfo **)((longlong)ppMVar20 + 1),
                          *(char *)ppMVar21 == (pMVar19->name + -1)[(longlong)ppMVar20]) {
                      if (ppMVar20 == (MethodInfo **)0x7) {
                        FUN_?(pMVar19,0,0,&stack0x00000010);
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
            else {
              ppMVar12 = ppMVar12 + 1;
              if (ppMVar12 < pIVar18->methods + pIVar18->field_count) {
                pMVar19 = *ppMVar12;
                goto code_?;
              }
            }
            pIVar18 = pIVar18->parent;
            ppMVar12 = ppMVar11;
          } while (pIVar18 != (Il2CppClass *)0x0);
        }
code_?:
        LOCK();
        (pOVar10->_1).cctor_thread = 0;
        UNLOCK();
        LOCK();
        *(undefined4 *)&(pOVar10->_1).field_0x1c = 1;
        UNLOCK();
      }
      lVar22._0_4_ = (pOVar10->_1).initializationExceptionGCHandle;
      lVar22._4_4_ = (pOVar10->_1).cctor_started;
      if (lVar22 != 0) {
        uVar2._0_4_ = (pOVar10->_1).initializationExceptionGCHandle;
        uVar2._4_4_ = (pOVar10->_1).cctor_started;
        uVar2 = FUN_?(uVar2);
        FUN_?(uVar2,0);
        FUN_?(0,0,0,0,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

