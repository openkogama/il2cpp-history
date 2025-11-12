
/* Void LoadScenes(MVGameMode, Boolean, Boolean, Action) */

void Assembly-CSharp.dll::LevelLoader::LevelLoader_LoadScenes
               (LevelLoader *this,MVGameMode__Enum gameMode,bool tourist,bool useTouch,
               Action *callback,MethodInfo *method)

{
  if (gameMode == MVGameMode__Enum_Edit) {
    key = 3;
  }
  else if (gameMode == MVGameMode__Enum_Play) {
    if (this == (LevelLoader *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    key = (uint)tourist * 2;
  }
  else {
    if (gameMode != MVGameMode__Enum_CharacterEditor) {
      return;
    }
    key = 4;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__get_Item_ScenesForMode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelLoader);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__Add_UnityEngine__AsyncOperation_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = iRam_? != 0;
  (this->fields).callback = callback;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).callback >> 0xc);
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
  if (*(int *)&(TypeInfo__LevelLoader->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LevelLoader);
  }
  this_00 = TypeInfo__LevelLoader->static_fields->scenesForModeMap;
  if (this_00 != (Dictionary_2_ScenesForMode_System_String_ *)0x0) {
    pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__get_Item_ScenesForMode_
                        );
    uVar3 = 0;
    if (pOVar7 != (Object *)0x0) {
      pOVar8 = pOVar7 + 2;
      while( true ) {
        if (*(int *)&pOVar7[1].monitor <= (int)uVar3) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__LevelLoader___WaitForLoadingScenesCoroutine_d__10);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          lVar4 = FUN_?(TypeInfo__LevelLoader___WaitForLoadingScenesCoroutine_d__10);
          bVar2 = iRam_? != 0;
          *(undefined4 *)(lVar4 + 0x10) = 0;
          *(LevelLoader **)(lVar4 + 0x20) = this;
          if (bVar2) {
            uVar3 = (uint)(lVar4 + 0x20U >> 0xc);
            lVar9 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar9 + 0xADDR);
              puVar6 = (ulonglong *)(lVar9 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          if (lVar4 == 0) {
            uVar10 = func_?(&TypeInfo__System__NullReferenceException);
            this_02 = (NullReferenceException *)func_?(uVar10);
            pSVar11 = (String *)func_?(&StringLiteral_routine_is_null);
            mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                      (this_02,pSVar11,(MethodInfo *)0x0);
            uVar10 = func_?(&
                                         MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                        );
            FUN_?(this_02,uVar10);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          bVar12 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                  MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
          if (bVar12 == 0) {
            uVar10 = func_?(&TypeInfo__System__ArgumentException);
            this_03 = (InvalidEnumArgumentException *)func_?(uVar10);
            pSVar11 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o)
            ;
            System.dll::System::ComponentModel::InvalidEnumArgumentException::
            InvalidEnumArgumentException__ctor_1(this_03,pSVar11,(MethodInfo *)0x0);
            uVar10 = func_?(&
                                         MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                        );
            FUN_?(this_03,uVar10);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (this == (LevelLoader *)0x0) {
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pvVar13 = (this->fields)._._._._.m_CachedPtr;
          if (pvVar13 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar13,lVar4);
          return;
        }
        this_01 = (this->fields).pendingScenes;
        if (*(uint *)&pOVar7[1].monitor <= uVar3) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        sceneName = pOVar8->klass;
        if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        item = UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
               SceneManager_LoadSceneAsyncNameIndexInternal
                         ((String *)sceneName,-1,(LoadSceneParameters)0x1,0,(MethodInfo *)0x0);
        pMVar14 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__Add_UnityEngine__AsyncOperation_
        ;
        if (this_01 == (List_1_UnityEngine_AsyncOperation_ *)0x0) break;
        piVar15 = &(this_01->fields)._version;
        *piVar15 = *piVar15 + 1;
        pAVar16 = (this_01->fields)._items;
        if (pAVar16 == (AsyncOperation__Array *)0x0) break;
        uVar17 = (this_01->fields)._size;
        if (uVar17 < (uint)pAVar16->max_length) {
          (this_01->fields)._size = uVar17 + 1;
          FUN_?();
          uVar3 = uVar3 + 1;
          pOVar8 = (Object *)&pOVar8->monitor;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)this_01,(Object *)item,
                     pMVar14->klass->rgctx_data[0xe].method);
          uVar3 = uVar3 + 1;
          pOVar8 = (Object *)&pOVar8->monitor;
        }
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void LoadScenes(ScenesForMode, Action) */

void Assembly-CSharp.dll::LevelLoader::LevelLoader_LoadScenes_1
               (LevelLoader *this,ScenesForMode__Enum mode,Action *callbackAction,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__get_Item_ScenesForMode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelLoader);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__Add_UnityEngine__AsyncOperation_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).callback = callbackAction;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).callback >> 0xc);
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
  if (*(int *)&(TypeInfo__LevelLoader->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LevelLoader);
  }
  this_00 = TypeInfo__LevelLoader->static_fields->scenesForModeMap;
  if (this_00 != (Dictionary_2_ScenesForMode_System_String_ *)0x0) {
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,mode,
                         MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__get_Item_ScenesForMode_
                        );
    uVar2 = 0;
    if (pOVar6 != (Object *)0x0) {
      pOVar7 = pOVar6 + 2;
      while( true ) {
        if (*(int *)&pOVar6[1].monitor <= (int)uVar2) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__LevelLoader___WaitForLoadingScenesCoroutine_d__10);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          lVar3 = FUN_?(TypeInfo__LevelLoader___WaitForLoadingScenesCoroutine_d__10);
          bVar1 = iRam_? != 0;
          *(undefined4 *)(lVar3 + 0x10) = 0;
          *(LevelLoader **)(lVar3 + 0x20) = this;
          if (bVar1) {
            uVar2 = (uint)(lVar3 + 0x20U >> 0xc);
            lVar8 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar4 = *(ulonglong *)(lVar8 + 0xADDR);
              puVar5 = (ulonglong *)(lVar8 + 0xADDR);
              LOCK();
              bVar1 = uVar4 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          if (lVar3 == 0) {
            uVar9 = func_?(&TypeInfo__System__NullReferenceException);
            this_02 = (NullReferenceException *)func_?(uVar9);
            pSVar10 = (String *)func_?(&StringLiteral_routine_is_null);
            mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                      (this_02,pSVar10,(MethodInfo *)0x0);
            uVar9 = func_?(&
                                         MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                        );
            FUN_?(this_02,uVar9);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          bVar12 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                  MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
          if (bVar12 == 0) {
            uVar9 = func_?(&TypeInfo__System__ArgumentException);
            this_03 = (InvalidEnumArgumentException *)func_?(uVar9);
            pSVar10 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o)
            ;
            System.dll::System::ComponentModel::InvalidEnumArgumentException::
            InvalidEnumArgumentException__ctor_1(this_03,pSVar10,(MethodInfo *)0x0);
            uVar9 = func_?(&
                                         MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                        );
            FUN_?(this_03,uVar9);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (this == (LevelLoader *)0x0) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pvVar13 = (this->fields)._._._._.m_CachedPtr;
          if (pvVar13 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcRam_? = pcVar11;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar13,lVar3);
          return;
        }
        this_01 = (this->fields).pendingScenes;
        if (*(uint *)&pOVar6[1].monitor <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        sceneName = pOVar7->klass;
        if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        item = UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
               SceneManager_LoadSceneAsyncNameIndexInternal
                         ((String *)sceneName,-1,(LoadSceneParameters)0x1,0,(MethodInfo *)0x0);
        pMVar14 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__Add_UnityEngine__AsyncOperation_
        ;
        if (this_01 == (List_1_UnityEngine_AsyncOperation_ *)0x0) break;
        piVar15 = &(this_01->fields)._version;
        *piVar15 = *piVar15 + 1;
        pAVar16 = (this_01->fields)._items;
        if (pAVar16 == (AsyncOperation__Array *)0x0) break;
        uVar17 = (this_01->fields)._size;
        if (uVar17 < (uint)pAVar16->max_length) {
          (this_01->fields)._size = uVar17 + 1;
          FUN_?();
          uVar2 = uVar2 + 1;
          pOVar7 = (Object *)&pOVar7->monitor;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)this_01,(Object *)item,
                     pMVar14->klass->rgctx_data[0xe].method);
          uVar2 = uVar2 + 1;
          pOVar7 = (Object *)&pOVar7->monitor;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* IEnumerator WaitForLoadingScenesCoroutine() */

IEnumerator *
Assembly-CSharp.dll::LevelLoader::LevelLoader_WaitForLoadingScenesCoroutine
          (LevelLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LevelLoader___WaitForLoadingScenesCoroutine_d__10);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__LevelLoader___WaitForLoadingScenesCoroutine_d__10)
  ;
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* LevelLoader() */

void Assembly-CSharp.dll::LevelLoader::LevelLoader__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Add_ScenesForMode__System__String____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelLoader);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DesktopAvatarEditModeGUI);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DesktopPlayModeGUI);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DesktopEditModeGUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>
                      );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Dictionary__
            );
  pOVar1 = (Object *)FUN_?(TypeInfo__System__String,1);
  if ((pOVar1 != (Object *)0x0) &&
     (FUN_?(pOVar1,0,StringLiteral_DesktopPlayModeGUI),
     this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)) {
    IVar2 = CONCAT31((int3)((uint)in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,pOVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Add_ScenesForMode__System__String____
               ->klass->rgctx_data[0x22].method);
    pOVar1 = (Object *)FUN_?(TypeInfo__System__String,1);
    if (pOVar1 != (Object *)0x0) {
      FUN_?(pOVar1,0,StringLiteral_DesktopPlayModeGUI);
      IVar2 = CONCAT31((int3)(IVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,pOVar1,IVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Add_ScenesForMode__System__String____
                 ->klass->rgctx_data[0x22].method);
      pOVar1 = (Object *)FUN_?(TypeInfo__System__String,2);
      if (pOVar1 != (Object *)0x0) {
        FUN_?(pOVar1,0,StringLiteral_DesktopEditModeGUI);
        FUN_?(pOVar1,1,StringLiteral_DesktopPlayModeGUI);
        IVar2 = CONCAT31((int3)(IVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,pOVar1,IVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Add_ScenesForMode__System__String____
                   ->klass->rgctx_data[0x22].method);
        pOVar1 = (Object *)FUN_?(TypeInfo__System__String,1);
        if (pOVar1 != (Object *)0x0) {
          FUN_?(pOVar1,0,StringLiteral_DesktopAvatarEditModeGUI);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,pOVar1,
                     CONCAT31((int3)(IVar2 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<ScenesForMode,_System::String_[]>__Add_ScenesForMode__System__String____
                     ->klass->rgctx_data[0x22].method);
          TypeInfo__LevelLoader->static_fields->scenesForModeMap =
               (Dictionary_2_ScenesForMode_System_String_ *)this;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)TypeInfo__LevelLoader->static_fields >> 0xc);
            puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar5 = *puVar4;
              LOCK();
              uVar6 = *puVar4;
              if (uVar5 == uVar6) {
                *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (uVar5 != uVar6);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* LevelLoader() */

void Assembly-CSharp.dll::LevelLoader::LevelLoader__ctor(LevelLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_AsyncOperation_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>)
  ;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::AsyncOperation>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).pendingScenes = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).pendingScenes >> 0xc);
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

