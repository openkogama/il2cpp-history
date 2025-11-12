
/* Void CreatePlayButton() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_CreatePlayButton(WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&PlayButtonTouch_MethodInfo__UnityEngine__Object__Instantiate<PlayButtonTouch>_PlayButtonTouch_);
    LOCK();
    UNLOCK();
    FUN_?(&PlayButton_MethodInfo__UnityEngine__Object__Instantiate<PlayButton>_PlayButton_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WinningConditionBriefing__OnPlayPressed__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pPVar1 = (this->fields).DesktopPlayButtonPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pPVar1 = (PlayButton *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pPVar1,PlayButton_MethodInfo__UnityEngine__Object__Instantiate<PlayButton>_PlayButton_);
    bVar2 = iRam_? != 0;
    (this->fields).desktopPlayButton = pPVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).desktopPlayButton >> 0xc);
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
    pPVar1 = (this->fields).desktopPlayButton;
    if (pPVar1 != (PlayButton *)0x0) {
      pAVar7 = (pPVar1->fields).OnPlayButtonPressed;
      pNVar8 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor(pNVar8,(Object *)this,MethodInfo__WinningConditionBriefing__OnPlayPressed__,(MethodInfo *)0x0);
      pAVar7 = (Action *)mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
      if (pAVar7 == (Action *)0x0) {
        (pPVar1->fields).OnPlayButtonPressed = (Action *)0x0;
      }
      else {
        pAVar9 = (Action *)0x0;
        if (pAVar7->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar7;
        }
        if (pAVar9 == (Action *)0x0) {
          FUN_?(pAVar7);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (pPVar1->fields).OnPlayButtonPressed = pAVar9;
        pAVar9 = (Action *)0x0;
        if (pAVar7->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar7;
        }
        if (pAVar9 == (Action *)0x0) {
          FUN_?(pAVar7);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&(pPVar1->fields).OnPlayButtonPressed >> 0xc);
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
      pPVar1 = (this->fields).desktopPlayButton;
      if (pPVar1 != (PlayButton *)0x0) {
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pPVar1,(MethodInfo *)0x0);
        bVar2 = iRam_? != 0;
        (this->fields).playButton = pGVar11;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(this->fields).playButton >> 0xc);
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
        pGVar11 = (this->fields).playButton;
        if (pGVar11 != (GameObject *)0x0) {
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar11,(MethodInfo *)0x0);
          parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
          if (this_00 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(this_00,parent,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  else {
    pPVar12 = (this->fields).AndroidPlayButtonPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pPVar12 = (PlayButtonTouch *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pPVar12,PlayButtonTouch_MethodInfo__UnityEngine__Object__Instantiate<PlayButtonTouch>_PlayButtonTouch_);
    bVar2 = iRam_? != 0;
    (this->fields).androidPlayButton = pPVar12;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).androidPlayButton >> 0xc);
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
    pPVar12 = (this->fields).androidPlayButton;
    if (pPVar12 != (PlayButtonTouch *)0x0) {
      pAVar7 = (pPVar12->fields).OnPlayButtonPressed;
      pNVar8 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor(pNVar8,(Object *)this,MethodInfo__WinningConditionBriefing__OnPlayPressed__,(MethodInfo *)0x0);
      pAVar9 = (Action *)mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pAVar7,(Delegate *)pNVar8,(MethodInfo *)0x0);
      pAVar7 = (Action *)0x0;
      if (pAVar9 == (Action *)0x0) {
        (pPVar12->fields).OnPlayButtonPressed = (Action *)0x0;
      }
      else {
        pAVar13 = pAVar7;
        if (pAVar9->klass == TypeInfo__System__Action) {
          pAVar13 = pAVar9;
        }
        if (pAVar13 == (Action *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (pPVar12->fields).OnPlayButtonPressed = pAVar13;
        pAVar13 = pAVar7;
        if (pAVar9->klass == TypeInfo__System__Action) {
          pAVar13 = pAVar9;
        }
        if (pAVar13 == (Action *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&(pPVar12->fields).OnPlayButtonPressed >> 0xc);
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
      pPVar12 = (this->fields).androidPlayButton;
      if (pPVar12 != (PlayButtonTouch *)0x0) {
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pPVar12,(MethodInfo *)0x0);
        bVar2 = iRam_? != 0;
        (this->fields).playButton = pGVar11;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(this->fields).playButton >> 0xc);
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
        pGVar11 = (this->fields).playButton;
        if ((pGVar11 != (GameObject *)0x0) && (pAVar9 = (Action *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar11,(MethodInfo *)0x0), pAVar9 != (Action *)0x0)) {
          if (pAVar9->klass == (Action__Class *)TypeInfo__UnityEngine__RectTransform) {
            pAVar7 = pAVar9;
          }
          if (pAVar7 != (Action *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1((Transform *)pAVar7,(Transform *)(this->fields).TouchPlayButtonContainerTransform,0,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling((Transform *)pAVar7,(MethodInfo *)0x0);
            return;
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


/* IEnumerator FixAspectRatioDelay() */

IEnumerator * Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_FixAspectRatioDelay(WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WinningConditionBriefing___FixAspectRatioDelay_d__35);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__WinningConditionBriefing___FixAspectRatioDelay_d__35);
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


/* Int32 GetHighScore(WinningConditionType) */

int32_t Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_GetHighScore(WinningConditionBriefing *this,WinningConditionType__Enum winningConditionType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (winningConditionType == WinningConditionType__Enum_Flag) {
    counterType = GameStatCounterType__Enum_Flag;
  }
  else {
    counterType = GameStatCounterType__Enum_TimeAttackFlag;
    if (winningConditionType != WinningConditionType__Enum_TimeAttackFlag) {
      counterType = GameStatCounterType__Enum_None;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) || (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) || (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) || (pDVar3 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0), pDVar3 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0);
  }
  else {
    pDStack_4 = (pDVar3->fields)._dictionary;
    ppDStack_5 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
    uStack_6 = 0;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
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
    if (pDStack_4 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      pDStack_8 = pDStack_4;
      FUN_?();
      pcVar12 = (code *)swi(3);
      iVar13 = (*pcVar12)();
      return iVar13;
    }
    ppDStack_5 = (Dictionary_2_System_Int32_MVPlayer_ **)((ulonglong)(uint)(pDStack_4->fields)._version << 0x20);
    uStack_6 = 0;
    uStack_14 = (ulonglong)ppDStack_5;
    pMStack_15 = (MVPlayer *)0x0;
    pDStack_8 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
    ppDStack_5 = &pDStack_4;
    oldScore = GameStatCounterType__Enum_None;
    while (pDStack_4 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      if (uStack_14._4_4_ != (pDStack_4->fields)._version) goto code_?;
      uVar11 = uStack_14 & 0xffffffff;
      do {
        if (pDStack_4 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        uVar7 = (uint)uVar11;
        if ((uint)(pDStack_4->fields)._count <= uVar7) {
          return oldScore;
        }
        pDVar16 = (pDStack_4->fields)._entries;
        uVar11 = (ulonglong)(uVar7 + 1);
        uStack_14 = CONCAT44(uStack_14._4_4_,uVar7 + 1);
        if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0) goto code_?;
        if ((uint)pDVar16->max_length <= uVar7) goto code_?;
      } while (pDVar16->vector[(int)uVar7].hashCode < 0);
      pMStack_15 = pDVar16->vector[(int)uVar7].value;
      func_?();
      pMVar17 = pMStack_15;
      if (pMStack_15 != (MVPlayer *)0x0) {
        iVar13 = (pMStack_15->fields)._ActorNr_k__BackingField;
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
        this_01 = (pMVar2->fields).gameStatCounterManager;
        if (this_01 == (GameStatCounterManager *)0x0) goto code_?;
        newScore = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount(this_01,counterType,(pMVar17->fields)._Team_k__BackingField,iVar13,(MethodInfo *)0x0);
        bVar18 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter(newScore,oldScore,counterType,(MethodInfo *)0x0);
        if (bVar18 != 0) {
          oldScore = newScore;
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  iVar13 = (*pcVar12)();
  return iVar13;
}


/* Void Initialize(WinningConditionType) */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_Initialize(WinningConditionBriefing *this,WinningConditionType__Enum winConType,MethodInfo *method)

{
  (this->fields).winConType = winConType;
  (this->fields).isInitialized = 1;
  if ((this->fields).initializeCallback != (Action *)0x0) {
    pAVar1 = (this->fields).initializeCallback;
    (*(pAVar1->fields)._._.invoke_impl)((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action,0);
    LOCK();
    UNLOCK();
    FUN_?(&PlayButtonTouch_MethodInfo__UnityEngine__Object__Instantiate<PlayButtonTouch>_PlayButtonTouch_);
    LOCK();
    UNLOCK();
    FUN_?(&PlayButton_MethodInfo__UnityEngine__Object__Instantiate<PlayButton>_PlayButton_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WinningConditionBriefing__OnPlayPressed__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    pPVar2 = (this->fields).DesktopPlayButtonPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pPVar2 = (PlayButton *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pPVar2,PlayButton_MethodInfo__UnityEngine__Object__Instantiate<PlayButton>_PlayButton_);
    bVar3 = iRam_? != 0;
    (this->fields).desktopPlayButton = pPVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).desktopPlayButton >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pPVar2 = (this->fields).desktopPlayButton;
    if (pPVar2 != (PlayButton *)0x0) {
      pAVar1 = (pPVar2->fields).OnPlayButtonPressed;
      pNVar8 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor(pNVar8,(Object *)this,MethodInfo__WinningConditionBriefing__OnPlayPressed__,(MethodInfo *)0x0);
      pAVar1 = (Action *)mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pAVar1,(Delegate *)pNVar8,(MethodInfo *)0x0);
      if (pAVar1 == (Action *)0x0) {
        (pPVar2->fields).OnPlayButtonPressed = (Action *)0x0;
      }
      else {
        pAVar9 = (Action *)0x0;
        if (pAVar1->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar1;
        }
        if (pAVar9 == (Action *)0x0) {
          FUN_?(pAVar1);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (pPVar2->fields).OnPlayButtonPressed = pAVar9;
        pAVar9 = (Action *)0x0;
        if (pAVar1->klass == TypeInfo__System__Action) {
          pAVar9 = pAVar1;
        }
        if (pAVar9 == (Action *)0x0) {
          FUN_?(pAVar1);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&(pPVar2->fields).OnPlayButtonPressed >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pPVar2 = (this->fields).desktopPlayButton;
      if (pPVar2 != (PlayButton *)0x0) {
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pPVar2,(MethodInfo *)0x0);
        bVar3 = iRam_? != 0;
        (this->fields).playButton = pGVar11;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(this->fields).playButton >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        pGVar11 = (this->fields).playButton;
        if (pGVar11 != (GameObject *)0x0) {
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar11,(MethodInfo *)0x0);
          parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
          if (this_00 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(this_00,parent,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  else {
    pPVar12 = (this->fields).AndroidPlayButtonPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pPVar12 = (PlayButtonTouch *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pPVar12,PlayButtonTouch_MethodInfo__UnityEngine__Object__Instantiate<PlayButtonTouch>_PlayButtonTouch_);
    bVar3 = iRam_? != 0;
    (this->fields).androidPlayButton = pPVar12;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).androidPlayButton >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pPVar12 = (this->fields).androidPlayButton;
    if (pPVar12 != (PlayButtonTouch *)0x0) {
      pAVar1 = (pPVar12->fields).OnPlayButtonPressed;
      pNVar8 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor(pNVar8,(Object *)this,MethodInfo__WinningConditionBriefing__OnPlayPressed__,(MethodInfo *)0x0);
      pAVar9 = (Action *)mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pAVar1,(Delegate *)pNVar8,(MethodInfo *)0x0);
      pAVar1 = (Action *)0x0;
      if (pAVar9 == (Action *)0x0) {
        (pPVar12->fields).OnPlayButtonPressed = (Action *)0x0;
      }
      else {
        pAVar13 = pAVar1;
        if (pAVar9->klass == TypeInfo__System__Action) {
          pAVar13 = pAVar9;
        }
        if (pAVar13 == (Action *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (pPVar12->fields).OnPlayButtonPressed = pAVar13;
        pAVar13 = pAVar1;
        if (pAVar9->klass == TypeInfo__System__Action) {
          pAVar13 = pAVar9;
        }
        if (pAVar13 == (Action *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&(pPVar12->fields).OnPlayButtonPressed >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pPVar12 = (this->fields).androidPlayButton;
      if (pPVar12 != (PlayButtonTouch *)0x0) {
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pPVar12,(MethodInfo *)0x0);
        bVar3 = iRam_? != 0;
        (this->fields).playButton = pGVar11;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(this->fields).playButton >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        pGVar11 = (this->fields).playButton;
        if ((pGVar11 != (GameObject *)0x0) && (pAVar9 = (Action *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar11,(MethodInfo *)0x0), pAVar9 != (Action *)0x0)) {
          if (pAVar9->klass == (Action__Class *)TypeInfo__UnityEngine__RectTransform) {
            pAVar1 = pAVar9;
          }
          if (pAVar1 != (Action *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1((Transform *)pAVar1,(Transform *)(this->fields).TouchPlayButtonContainerTransform,0,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling((Transform *)pAVar1,(MethodInfo *)0x0);
            return;
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


/* Void OnDestroy() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_OnDestroy(WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField != (IPlayModeUI *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField != (IPlayModeUI *)0x0) {
        cVar2 = FUN_?(7,TypeInfo__IPlayModeUI);
        if (cVar2 != '\0') {
          return;
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
        if (pMVar3 != (MainCameraManager *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral_CamRotateTarget);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          (pMVar3->fields).maskMode = 0;
          pCVar4 = (pMVar3->fields).mainCamera;
          if (pCVar4 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask(pCVar4,(pMVar3->fields).cullingMask,(MethodInfo *)0x0);
            bVar1 = (pMVar3->fields).isLogicRendered;
            (pMVar3->fields).blueModeEnabled = 0;
            if (cRam_? == '\0') {
              FUN_?(&StringLiteral_Logic);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pCVar4 = (pMVar3->fields).mainCamera;
            if (bVar1 == 0) {
              if (pCVar4 == (Camera *)0x0) {
code_?:
                FUN_?();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask(pCVar4,(MethodInfo *)0x0);
              uVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Logic,(MethodInfo *)0x0);
              uVar6 = uVar6 & ~(1 << (uVar7 & 0x1f));
            }
            else {
              if (pCVar4 == (Camera *)0x0) goto code_?;
              uVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask(pCVar4,(MethodInfo *)0x0);
              uVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Logic,(MethodInfo *)0x0);
              uVar6 = uVar6 | 1 << (uVar7 & 0x1f);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask(pCVar4,uVar6,(MethodInfo *)0x0);
            (pMVar3->fields).isLogicRendered = bVar1;
            return;
          }
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}


/* Void OnPlayPressed() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_OnPlayPressed(WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WinningConditionBriefing____c___OnPlayPressed_b__38_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WinningConditionBriefing____c__DisplayClass38_0___OnPlayPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningConditionBriefing____c__DisplayClass38_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningConditionBriefing____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) && (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) && (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    bVar3 = MVTeamManager::MVTeamManager_TeamHasSpawnRoles(this_00,(this->fields)._.selectedTeam,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pPVar4 = (this->fields).desktopPlayButton;
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
      if (pPVar4 != (PlayButton *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pPVar4->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          pPVar4 = (this->fields).desktopPlayButton;
          if (pPVar4 == (PlayButton *)0x0) goto code_?;
          PlayButton::PlayButton_Play(pPVar4,(MethodInfo *)0x0);
        }
      }
      pPVar5 = (this->fields).androidPlayButton;
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
      if (pPVar5 != (PlayButtonTouch *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pPVar5->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pPVar5 = (this->fields).androidPlayButton;
          if (pPVar5 == (PlayButtonTouch *)0x0) goto code_?;
          PlayButtonTouch::PlayButtonTouch_Play(pPVar5,(MethodInfo *)0x0);
        }
      }
      return;
    }
    object_00 = (Object *)FUN_?(TypeInfo__WinningConditionBriefing____c__DisplayClass38_0);
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__WinningConditionBriefing____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__WinningConditionBriefing____c);
    }
    this_01 = TypeInfo__WinningConditionBriefing____c->static_fields->__9__38_0;
    if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__WinningConditionBriefing____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__WinningConditionBriefing____c);
      }
      object = TypeInfo__WinningConditionBriefing____c->static_fields->__9;
      this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,MethodInfo__WinningConditionBriefing____c___OnPlayPressed_b__38_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_,(MethodInfo *)0x0);
      TypeInfo__WinningConditionBriefing____c->static_fields->__9__38_0 = this_01;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&TypeInfo__WinningConditionBriefing____c->static_fields->__9__38_0 >> 0xc);
        lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy(pGVar6,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_);
    original = (this->fields)._.spawnRoleMenuPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar12 = (Object__Class *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)original,SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_);
    if (object_00 != (Object *)0x0) {
      bVar11 = iRam_? != 0;
      object_00[1].klass = pOVar12;
      if (bVar11) {
        uVar7 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
        lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      if (object_00[1].klass != (Object__Class *)0x0) {
        SpawnRoleMenu::SpawnRoleMenu_Initialize((SpawnRoleMenu *)object_00[1].klass,(this->fields)._.selectedTeam,(MethodInfo *)0x0);
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
        this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor(this_02,object_00,MethodInfo__WinningConditionBriefing____c__DisplayClass38_0___OnPlayPressed_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_,(MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy(pGVar6,(BaseEventData *)0x0,this_02,UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SetupBriefing() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_SetupBriefing(WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__get_Item_WinningConditionType_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<WinningConditionBriefing::WinningConditionBriefingDef>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<WinningConditionBriefing::WinningConditionBriefingDef>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WinningConditionBriefing__SetupBriefing__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningConditionType);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WinningConditionData_is_null__bu);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aIStackX_18[0].m_value = aIStackX_18[0].m_value & 0xffffff00;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_CamRotateTarget);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (pMVar1->fields).maskMode = 2;
    this_00 = (pMVar1->fields).mainCamera;
    if (this_00 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask(this_00,0,(MethodInfo *)0x0);
      source = (this->fields).initializeCallback;
      this_03 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor(this_03,(Object *)this,MethodInfo__WinningConditionBriefing__SetupBriefing__,(MethodInfo *)0x0);
      EVar2 = (EntryPreProcessor_AllocSize)mscorlib.dll::System::Delegate::Delegate_Remove((Delegate *)source,(Delegate *)this_03,(MethodInfo *)0x0);
      EVar3.vertexCount = 0;
      EVar3.indexCount = 0;
      if (EVar2 == (EntryPreProcessor_AllocSize)0x0) {
        (this->fields).initializeCallback = (Action *)0x0;
      }
      else {
        EVar4 = EVar3;
        if (*(Action__Class **)EVar2 == TypeInfo__System__Action) {
          EVar4 = EVar2;
        }
        if (EVar4 == (EntryPreProcessor_AllocSize)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (this->fields).initializeCallback = (Action *)EVar4;
        EVar4 = EVar3;
        if (*(Action__Class **)EVar2 == TypeInfo__System__Action) {
          EVar4 = EVar2;
        }
        if (EVar4 == (EntryPreProcessor_AllocSize)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields).initializeCallback >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      this_01 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)(this->fields).winningConditionMapping;
      if (this_01 != (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
        lVar11 = 0x20;
        EVar2 = EVar3;
        while (uVar6 = EVar2.vertexCount, (int)uVar6 < (this_01->fields)._size) {
          if ((uint)(this_01->fields)._size <= uVar6) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pEVar12 = (this_01->fields)._items;
          if (pEVar12 == (EntryPreProcessor_AllocSize__Array *)0x0) goto code_?;
          if ((uint)pEVar12->max_length <= uVar6) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar13 = *(longlong *)((longlong)&((EntryPreProcessor_AllocSize__Array *)(pEVar12->vector + -4))->klass + lVar11);
          if (lVar13 == 0) goto code_?;
          if ((this->fields).winConType == *(int *)(lVar13 + 0x10)) {
            EVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::EntryPreProcessor+AllocSize]::List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item(this_01,uVar6,MethodInfo__System__Collections__Generic__List<WinningConditionBriefing::WinningConditionBriefingDef>__get_Item_int_);
            if (EVar3 != (EntryPreProcessor_AllocSize)0x0) goto code_?;
            break;
          }
          lVar11 = lVar11 + 8;
          EVar2.indexCount = 0;
          EVar2.vertexCount = uVar6 + 1;
        }
        EStack_14.klass = (Enum__Class *)TypeInfo__WinningConditionType;
        iStack_15 = (this->fields).winConType;
        EStack_14.monitor = (MonitorData *)0xffffffffffffffff;
        pSVar16 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_14,(MethodInfo *)0x0);
        pSVar16 = mscorlib.dll::System::String::String_Concat_4(StringLiteral_winConType__,pSVar16,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar16,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError((Object *)StringLiteral_WinningConditionData_is_null__bu,(MethodInfo *)0x0);
code_?:
        if ((this->fields).winConType != 6) {
          this_02 = (this->fields).headerMap;
          pTVar17 = (this->fields).winningConditionHeader;
          if ((this_02 == (Dictionary_2_WinningConditionType_System_String_ *)0x0) || (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,(this->fields).winConType,MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__get_Item_WinningConditionType_), pTVar17 == (Text *)0x0)) goto code_?;
          (*(pTVar17->klass->vtable).set_text.methodPtr)(pTVar17);
          bVar18 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat((GameStatCounterType__Enum *)aIStackX_18,(MethodInfo *)0x0);
          IVar19.m_value = aIStackX_18[0].m_value;
          uVar20 = (undefined1)aIStackX_18[0].m_value;
          if (bVar18 != 0) {
            pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar21 == (MVNetworkGame *)0x0) || (pMVar22 = (pMVar21->fields).teamManager, pMVar22 == (MVTeamManager *)0x0)) goto code_?;
            iVar23 = MVTeamManager::MVTeamManager_TeamCount(pMVar22,(MethodInfo *)0x0);
            if (iVar23 < 2) {
              pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar21 == (MVNetworkGame *)0x0) goto code_?;
              pGVar24 = (pMVar21->fields).gameStatCounterManager;
              pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar21 == (MVNetworkGame *)0x0) || (pMVar25 = (pMVar21->fields).playerContainer, pMVar25 == (MVPlayerContainer *)0x0)) || (pMVar26 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar25,(MethodInfo *)0x0), pMVar26 == (MVLocalPlayer *)0x0)) goto code_?;
              team = (pMVar26->fields)._._Team_k__BackingField;
              pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar21 == (MVNetworkGame *)0x0) || (pMVar25 = (pMVar21->fields).playerContainer, pMVar25 == (MVPlayerContainer *)0x0)) || ((pMVar26 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar25,(MethodInfo *)0x0), pMVar26 == (MVLocalPlayer *)0x0 || (pGVar24 == (GameStatCounterManager *)0x0)))) goto code_?;
              score = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount(pGVar24,IVar19.m_value & 0xff,team,(pMVar26->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
            }
            else {
              pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar21 == (MVNetworkGame *)0x0) goto code_?;
              pGVar24 = (pMVar21->fields).gameStatCounterManager;
              pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((((pMVar21 == (MVNetworkGame *)0x0) || (pMVar25 = (pMVar21->fields).playerContainer, pMVar25 == (MVPlayerContainer *)0x0)) || (pMVar26 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar25,(MethodInfo *)0x0), pMVar26 == (MVLocalPlayer *)0x0)) || (pGVar24 == (GameStatCounterManager *)0x0)) goto code_?;
              score = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount(pGVar24,IVar19.m_value & 0xff,(pMVar26->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
            }
            if (cRam_? == '\0') {
              FUN_?(&AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__);
              LOCK();
              UNLOCK();
              FUN_?(&KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__);
              LOCK();
              UNLOCK();
              FUN_?(&OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((IVar19.m_value & 0xff) - GameStatCounterType__Enum_Kill < 6) {
              (*(code *)((ulonglong)*(uint *)(&UNK_? + (longlong)(int)((IVar19.m_value & 0xff) - GameStatCounterType__Enum_Kill) * 4) + 0xADDR))();
              return;
            }
            aIStackX_18[0].m_value = GameStatCounterType__Enum_None;
            if (((this->fields).winConType == 1) || ((this->fields).winConType == 5)) {
              pGVar27 = (this->fields).progressableWinningConditionPresent;
              if (pGVar27 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar27,0,(MethodInfo *)0x0);
              pGVar27 = (this->fields).reachTheFlagPresent;
              if (pGVar27 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar27,1,(MethodInfo *)0x0);
              winningConditionType = (this->fields).winConType;
              uVar7 = (ulonglong)winningConditionType;
              pTVar17 = (this->fields).flagScoreText;
              iVar23 = WinningConditionBriefing_GetHighScore(this,winningConditionType,(MethodInfo *)0x0);
              pSVar16 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText(iVar23,(GameStatCounterType__Enum)CONCAT71((int7)(uVar7 >> 8),2),(MethodInfo *)0x0);
              if (pTVar17 == (Text *)0x0) goto code_?;
              (*(pTVar17->klass->vtable).set_text.methodPtr)(pTVar17,pSVar16,(pTVar17->klass->vtable).set_text.method);
            }
            else {
              pGVar27 = (this->fields).reachTheFlagPresent;
              if (pGVar27 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar27,0,(MethodInfo *)0x0);
              pGVar27 = (this->fields).progressableWinningConditionPresent;
              if (pGVar27 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar27,1,(MethodInfo *)0x0);
            }
            pTVar17 = (this->fields).scoreLimit;
            pSVar16 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
            if (pTVar17 == (Text *)0x0) goto code_?;
            (*(pTVar17->klass->vtable).set_text.methodPtr)(pTVar17,pSVar16);
            pPVar28 = (this->fields).scoreProgressBar;
            if (pPVar28 == (ProgressBar *)0x0) goto code_?;
            fVar29 = (float)score / 0.0;
            if (fVar29 < 0.0) {
              fVar29 = 0.0;
            }
            else if (1.0 < fVar29) {
              fVar29 = 1.0;
            }
            pSVar30 = (pPVar28->fields).progressBar;
            (pPVar28->fields).progress = fVar29;
            if (pSVar30 == (Scrollbar *)0x0) goto code_?;
            UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size(pSVar30,fVar29,(MethodInfo *)0x0);
            pTVar17 = (this->fields).scoreText;
            pSVar16 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText(score,IVar19.m_value & 0xff,(MethodInfo *)0x0);
            if (pTVar17 == (Text *)0x0) goto code_?;
            (*(pTVar17->klass->vtable).set_text.methodPtr)(pTVar17,pSVar16);
          }
          pSVar31 = (this->fields).scoreBoardController;
          if (pSVar31 == (ScoreBoardController *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&ScoreBoardSingleBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardSingleBase>_ScoreBoardSingleBase_);
            LOCK();
            UNLOCK();
            FUN_?(&ScoreBoardTeamBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardTeamBase>_ScoreBoardTeamBase_);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar32 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar32 == (MVGameControllerBase *)0x0) || (pMVar21 = (pMVar32->fields).game, pMVar21 == (MVNetworkGame *)0x0)) || (pMVar22 = (pMVar21->fields).teamManager, pMVar22 == (MVTeamManager *)0x0)) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar33 = (pMVar22->fields).teams;
          if (pDVar33 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) goto code_?;
          if ((pDVar33->fields)._count - (pDVar33->fields)._freeCount < 2) {
            original_00 = (pSVar31->fields).scoreboardSingle;
            method_00 = ScoreBoardSingleBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardSingleBase>_ScoreBoardSingleBase_;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
              method_00 = ScoreBoardSingleBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardSingleBase>_ScoreBoardSingleBase_;
            }
          }
          else {
            original_00 = (ScoreBoardSingleBase *)(pSVar31->fields).scoreboardTeam;
            method_00 = ScoreBoardTeamBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardTeamBase>_ScoreBoardTeamBase_;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
              method_00 = ScoreBoardTeamBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardTeamBase>_ScoreBoardTeamBase_;
            }
          }
          pCVar34 = (Component *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)original_00,method_00);
          if (pCVar34 == (Component *)0x0) goto code_?;
          pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar34,(MethodInfo *)0x0);
          pSVar31 = (this->fields).scoreBoardController;
          if ((pSVar31 == (ScoreBoardController *)0x0) || (pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pSVar31,(MethodInfo *)0x0), pTVar35 == (Transform *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(pTVar35,pTVar36,0,(MethodInfo *)0x0);
          pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar34,(MethodInfo *)0x0);
          if (pTVar35 == (Transform *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling(pTVar35,(MethodInfo *)0x0);
          (*(code *)pCVar34->klass[1]._0.name)(pCVar34,uVar20);
          if (EVar3 == (EntryPreProcessor_AllocSize)0x0) goto code_?;
          original = *(Object **)((longlong)EVar3 + 0x20);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar37 = (Image *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4(original,UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_);
          bVar10 = iRam_? != 0;
          (this->fields).winConImage = pIVar37;
          if (bVar10) {
            uVar6 = (uint)((ulonglong)&(this->fields).winConImage >> 0xc);
            uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
            do {
              uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
              puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          pIVar37 = (this->fields).winConImage;
          if (pIVar37 == (Image *)0x0) goto code_?;
          pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar37,(MethodInfo *)0x0);
          pGVar27 = (this->fields).winningConditionImageBackground;
          if ((pGVar27 == (GameObject *)0x0) || (pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar27,(MethodInfo *)0x0), pTVar35 == (Transform *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(pTVar35,pTVar36,0,(MethodInfo *)0x0);
          pCVar34 = (Component *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4(*(void **)((longlong)EVar3 + 0x18),UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_);
          if (pCVar34 == (Component *)0x0) goto code_?;
          pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar34,(MethodInfo *)0x0);
          pGVar27 = (this->fields).scoreGameObject;
          if ((pGVar27 == (GameObject *)0x0) || (pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar27,(MethodInfo *)0x0), pTVar35 == (Transform *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(pTVar35,pTVar36,0,(MethodInfo *)0x0);
        }
        this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_04 != (MVWorldObjectClientManager *)0x0) {
          pWVar38 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef(this_04,WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__);
          if (pWVar38 == (WorldObjectClientRef_1_System_Object_ *)0x0) {
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines((MonoBehaviour *)this,(MethodInfo *)0x0);
            pIVar39 = WinningConditionBriefing_FixAspectRatioDelay(this,(MethodInfo *)0x0);
            if (pIVar39 == (IEnumerator *)0x0) {
              uVar40 = func_?(&TypeInfo__System__NullReferenceException);
              this_06 = (NullReferenceException *)func_?(uVar40);
              pSVar16 = (String *)func_?(&StringLiteral_routine_is_null);
              mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1(this_06,pSVar16,(MethodInfo *)0x0);
              uVar40 = func_?(&MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_);
              FUN_?(this_06,uVar40);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            bVar18 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
            if (bVar18 == 0) {
              uVar40 = func_?(&TypeInfo__System__ArgumentException);
              this_07 = (InvalidEnumArgumentException *)func_?(uVar40);
              pSVar16 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
              System.dll::System::ComponentModel::InvalidEnumArgumentException::InvalidEnumArgumentException__ctor_1(this_07,pSVar16,(MethodInfo *)0x0);
              uVar40 = func_?(&MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_);
              FUN_?(this_07,uVar40);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (this == (WinningConditionBriefing *)0x0) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pvVar41 = (this->fields)._._._._._.m_CachedPtr;
            if (pvVar41 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              pcVar5 = (code *)FUN_?(&UNK_?);
              if (pcVar5 == (code *)0x0) {
                uVar40 = func_?(&UNK_?);
                FUN_?(uVar40,0);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar41,pIVar39);
            return;
          }
          pPVar28 = (this->fields).roundTimeProgressBar;
          if ((pPVar28 != (ProgressBar *)0x0) && (pGVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pPVar28,(MethodInfo *)0x0), pGVar27 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar27,1,(MethodInfo *)0x0);
            pPVar28 = (this->fields).roundTimeProgressBar;
            pMVar42 = (MVRoundCube *)FUN_?(pWVar38);
            if (pMVar42 != (MVRoundCube *)0x0) {
              iVar23 = MVRoundCube::MVRoundCube_GetTimeLeft(pMVar42,(MethodInfo *)0x0);
              pMVar42 = (MVRoundCube *)FUN_?(pWVar38);
              if ((pMVar42 != (MVRoundCube *)0x0) && (iVar43 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds(pMVar42,(MethodInfo *)0x0), pPVar28 != (ProgressBar *)0x0)) {
                fVar29 = (float)iVar23 / (float)iVar43;
                if (fVar29 < 0.0) {
                  fVar29 = 0.0;
                }
                else if (1.0 < fVar29) {
                  fVar29 = 1.0;
                }
                pSVar30 = (pPVar28->fields).progressBar;
                (pPVar28->fields).progress = fVar29;
                if (pSVar30 != (Scrollbar *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size(pSVar30,fVar29,(MethodInfo *)0x0);
                  pTVar17 = (this->fields).roundTimeText;
                  pMVar42 = (MVRoundCube *)FUN_?(pWVar38);
                  this_05 = (MVRoundCube *)FUN_?(pWVar38);
                  if (((this_05 != (MVRoundCube *)0x0) && (iVar23 = MVRoundCube::MVRoundCube_GetTimeLeft(this_05,(MethodInfo *)0x0), pMVar42 != (MVRoundCube *)0x0)) && (pSVar16 = MVRoundCube::MVRoundCube_MakeTimeIntoText(pMVar42,iVar23,(MethodInfo *)0x0), pTVar17 != (Text *)0x0)) {
                    (*(pTVar17->klass->vtable).set_text.methodPtr)(pTVar17,pSVar16);
                    pIVar37 = (this->fields).roundTimeIconPrefab;
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    pCVar34 = (Component *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pIVar37,UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_);
                    if (pCVar34 != (Component *)0x0) {
                      pTVar35 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar34,(MethodInfo *)0x0);
                      pPVar28 = (this->fields).roundTimeProgressBar;
                      if ((pPVar28 != (ProgressBar *)0x0) && (pTVar36 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pPVar28,(MethodInfo *)0x0), pTVar35 != (Transform *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(pTVar35,pTVar36,0,(MethodInfo *)0x0);
                        goto code_?;
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
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_Start(WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 == (MainCameraManager *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  value = (this->fields)._.cameraMaskMode;
  player = (MVPlayer *)(ulonglong)value;
  pMVar3 = (MethodInfo *)0x0;
  MainCameraManager::MainCameraManager_set_CamMaskMode(pMVar1,value,(MethodInfo *)0x0);
  if ((this->fields)._.haveSetSelectedTeam == 0) {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,pMVar3);
    if (extraout_RAX == 0) goto DAT_?;
    (this->fields)._.selectedTeam = *(int32_t *)(extraout_RAX + 0x84);
  }
  LobbyFlowMenu::LobbyFlowMenu_UpdateAvailableMenues((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  pcVar2 = pcRam_?;
  if (pcRam_? == (code *)0x0) {
    pcVar2 = (code *)FUN_?(&UNK_?);
    if (pcVar2 == (code *)0x0) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pcRam_? = pcVar2;
  iVar5 = (*pcRam_?)();
  pcVar2 = pcRam_?;
  if (pcRam_? == (code *)0x0) {
    pcVar2 = (code *)FUN_?(&UNK_?);
    if (pcVar2 == (code *)0x0) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pcRam_? = pcVar2;
  iVar6 = (*pcRam_?)();
  bVar7 = (this->fields).isInitialized;
  (this->fields).screensize.x = (float)iVar5;
  (this->fields).screensize.y = (float)iVar6;
  if (bVar7 == 0) {
    pAVar8 = (this->fields).initializeCallback;
    pNVar9 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor(pNVar9,(Object *)this,MethodInfo__WinningConditionBriefing__SetupBriefing__,(MethodInfo *)0x0);
    pAVar8 = (Action *)mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pAVar8,(Delegate *)pNVar9,(MethodInfo *)0x0);
    if (pAVar8 == (Action *)0x0) {
      (this->fields).initializeCallback = (Action *)0x0;
    }
    else {
      pAVar10 = (Action *)0x0;
      if (pAVar8->klass == TypeInfo__System__Action) {
        pAVar10 = pAVar8;
      }
      if (pAVar10 == (Action *)0x0) {
        FUN_?(pAVar8,TypeInfo__System__Action);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->fields).initializeCallback = pAVar10;
      pAVar10 = (Action *)0x0;
      if (pAVar8->klass == TypeInfo__System__Action) {
        pAVar10 = pAVar8;
      }
      if (pAVar10 == (Action *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar11 = (uint)((ulonglong)&(this->fields).initializeCallback >> 0xc);
      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar15 = uVar13 == *puVar14;
        if (bVar15) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__get_Item_WinningConditionType_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<WinningConditionBriefing::WinningConditionBriefingDef>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<WinningConditionBriefing::WinningConditionBriefingDef>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WinningConditionBriefing__SetupBriefing__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningConditionType);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WinningConditionData_is_null__bu);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aIStackX_18[0].m_value = aIStackX_18[0].m_value & 0xffffff00;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_CamRotateTarget);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (pMVar1->fields).maskMode = 2;
    this_00 = (pMVar1->fields).mainCamera;
    if (this_00 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask(this_00,0,(MethodInfo *)0x0);
      pAVar8 = (this->fields).initializeCallback;
      pNVar9 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor(pNVar9,(Object *)this,MethodInfo__WinningConditionBriefing__SetupBriefing__,(MethodInfo *)0x0);
      EVar16 = (EntryPreProcessor_AllocSize)mscorlib.dll::System::Delegate::Delegate_Remove((Delegate *)pAVar8,(Delegate *)pNVar9,(MethodInfo *)0x0);
      EVar17.vertexCount = 0;
      EVar17.indexCount = 0;
      if (EVar16 == (EntryPreProcessor_AllocSize)0x0) {
        (this->fields).initializeCallback = (Action *)0x0;
      }
      else {
        EVar18 = EVar17;
        if (*(Action__Class **)EVar16 == TypeInfo__System__Action) {
          EVar18 = EVar16;
        }
        if (EVar18 == (EntryPreProcessor_AllocSize)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->fields).initializeCallback = (Action *)EVar18;
        EVar18 = EVar17;
        if (*(Action__Class **)EVar16 == TypeInfo__System__Action) {
          EVar18 = EVar16;
        }
        if (EVar18 == (EntryPreProcessor_AllocSize)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar11 = (uint)((ulonglong)&(this->fields).initializeCallback >> 0xc);
        uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
        do {
          uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
          puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
          LOCK();
          bVar15 = uVar13 == *puVar14;
          if (bVar15) {
            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar15);
      }
      this_01 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)(this->fields).winningConditionMapping;
      if (this_01 != (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
        lVar19 = 0x20;
        EVar16 = EVar17;
        while (uVar11 = EVar16.vertexCount, (int)uVar11 < (this_01->fields)._size) {
          if ((uint)(this_01->fields)._size <= uVar11) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pEVar20 = (this_01->fields)._items;
          if (pEVar20 == (EntryPreProcessor_AllocSize__Array *)0x0) goto code_?;
          if ((uint)pEVar20->max_length <= uVar11) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar21 = *(longlong *)((longlong)&((EntryPreProcessor_AllocSize__Array *)(pEVar20->vector + -4))->klass + lVar19);
          if (lVar21 == 0) goto code_?;
          if ((this->fields).winConType == *(int *)(lVar21 + 0x10)) {
            EVar17 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::EntryPreProcessor+AllocSize]::List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item(this_01,uVar11,MethodInfo__System__Collections__Generic__List<WinningConditionBriefing::WinningConditionBriefingDef>__get_Item_int_);
            if (EVar17 != (EntryPreProcessor_AllocSize)0x0) goto code_?;
            break;
          }
          lVar19 = lVar19 + 8;
          EVar16.indexCount = 0;
          EVar16.vertexCount = uVar11 + 1;
        }
        EStack_22.klass = (Enum__Class *)TypeInfo__WinningConditionType;
        iStack_23 = (this->fields).winConType;
        EStack_22.monitor = (MonitorData *)0xffffffffffffffff;
        pSVar24 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_22,(MethodInfo *)0x0);
        pSVar24 = mscorlib.dll::System::String::String_Concat_4(StringLiteral_winConType__,pSVar24,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar24,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError((Object *)StringLiteral_WinningConditionData_is_null__bu,(MethodInfo *)0x0);
code_?:
        if ((this->fields).winConType != 6) {
          this_02 = (this->fields).headerMap;
          pTVar25 = (this->fields).winningConditionHeader;
          if ((this_02 == (Dictionary_2_WinningConditionType_System_String_ *)0x0) || (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,(this->fields).winConType,MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__get_Item_WinningConditionType_), pTVar25 == (Text *)0x0)) goto code_?;
          (*(pTVar25->klass->vtable).set_text.methodPtr)(pTVar25);
          bVar7 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat((GameStatCounterType__Enum *)aIStackX_18,(MethodInfo *)0x0);
          IVar26.m_value = aIStackX_18[0].m_value;
          uVar27 = (undefined1)aIStackX_18[0].m_value;
          if (bVar7 != 0) {
            pMVar28 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar28 == (MVNetworkGame *)0x0) || (pMVar29 = (pMVar28->fields).teamManager, pMVar29 == (MVTeamManager *)0x0)) goto code_?;
            iVar30 = MVTeamManager::MVTeamManager_TeamCount(pMVar29,(MethodInfo *)0x0);
            if (iVar30 < 2) {
              pMVar28 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar28 == (MVNetworkGame *)0x0) goto code_?;
              pGVar31 = (pMVar28->fields).gameStatCounterManager;
              pMVar28 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar28 == (MVNetworkGame *)0x0) || (pMVar32 = (pMVar28->fields).playerContainer, pMVar32 == (MVPlayerContainer *)0x0)) || (pMVar33 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar32,(MethodInfo *)0x0), pMVar33 == (MVLocalPlayer *)0x0)) goto code_?;
              team = (pMVar33->fields)._._Team_k__BackingField;
              pMVar28 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar28 == (MVNetworkGame *)0x0) || (pMVar32 = (pMVar28->fields).playerContainer, pMVar32 == (MVPlayerContainer *)0x0)) || ((pMVar33 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar32,(MethodInfo *)0x0), pMVar33 == (MVLocalPlayer *)0x0 || (pGVar31 == (GameStatCounterManager *)0x0)))) goto code_?;
              iVar5 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount(pGVar31,IVar26.m_value & 0xff,team,(pMVar33->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
            }
            else {
              pMVar28 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar28 == (MVNetworkGame *)0x0) goto code_?;
              pGVar31 = (pMVar28->fields).gameStatCounterManager;
              pMVar28 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((((pMVar28 == (MVNetworkGame *)0x0) || (pMVar32 = (pMVar28->fields).playerContainer, pMVar32 == (MVPlayerContainer *)0x0)) || (pMVar33 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar32,(MethodInfo *)0x0), pMVar33 == (MVLocalPlayer *)0x0)) || (pGVar31 == (GameStatCounterManager *)0x0)) goto code_?;
              iVar5 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount(pGVar31,IVar26.m_value & 0xff,(pMVar33->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
            }
            if (cRam_? == '\0') {
              FUN_?(&AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__);
              LOCK();
              UNLOCK();
              FUN_?(&KillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<KillLimitClient>__);
              LOCK();
              UNLOCK();
              FUN_?(&OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((IVar26.m_value & 0xff) - GameStatCounterType__Enum_Kill < 6) {
              (*(code *)((ulonglong)*(uint *)(&UNK_? + (longlong)(int)((IVar26.m_value & 0xff) - GameStatCounterType__Enum_Kill) * 4) + 0xADDR))();
              return;
            }
            aIStackX_18[0].m_value = GameStatCounterType__Enum_None;
            if (((this->fields).winConType == 1) || ((this->fields).winConType == 5)) {
              pGVar34 = (this->fields).progressableWinningConditionPresent;
              if (pGVar34 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar34,0,(MethodInfo *)0x0);
              pGVar34 = (this->fields).reachTheFlagPresent;
              if (pGVar34 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar34,1,(MethodInfo *)0x0);
              winningConditionType = (this->fields).winConType;
              uVar12 = (ulonglong)winningConditionType;
              pTVar25 = (this->fields).flagScoreText;
              iVar30 = WinningConditionBriefing_GetHighScore(this,winningConditionType,(MethodInfo *)0x0);
              pSVar24 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText(iVar30,(GameStatCounterType__Enum)CONCAT71((int7)(uVar12 >> 8),2),(MethodInfo *)0x0);
              if (pTVar25 == (Text *)0x0) goto code_?;
              (*(pTVar25->klass->vtable).set_text.methodPtr)(pTVar25,pSVar24,(pTVar25->klass->vtable).set_text.method);
            }
            else {
              pGVar34 = (this->fields).reachTheFlagPresent;
              if (pGVar34 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar34,0,(MethodInfo *)0x0);
              pGVar34 = (this->fields).progressableWinningConditionPresent;
              if (pGVar34 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar34,1,(MethodInfo *)0x0);
            }
            pTVar25 = (this->fields).scoreLimit;
            pSVar24 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
            if (pTVar25 == (Text *)0x0) goto code_?;
            (*(pTVar25->klass->vtable).set_text.methodPtr)(pTVar25,pSVar24);
            pPVar35 = (this->fields).scoreProgressBar;
            if (pPVar35 == (ProgressBar *)0x0) goto code_?;
            fVar36 = (float)iVar5 / 0.0;
            if (fVar36 < 0.0) {
              fVar36 = 0.0;
            }
            else if (1.0 < fVar36) {
              fVar36 = 1.0;
            }
            pSVar37 = (pPVar35->fields).progressBar;
            (pPVar35->fields).progress = fVar36;
            if (pSVar37 == (Scrollbar *)0x0) goto code_?;
            UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size(pSVar37,fVar36,(MethodInfo *)0x0);
            pTVar25 = (this->fields).scoreText;
            pSVar24 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText(iVar5,IVar26.m_value & 0xff,(MethodInfo *)0x0);
            if (pTVar25 == (Text *)0x0) goto code_?;
            (*(pTVar25->klass->vtable).set_text.methodPtr)(pTVar25,pSVar24);
          }
          pSVar38 = (this->fields).scoreBoardController;
          if (pSVar38 == (ScoreBoardController *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&ScoreBoardSingleBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardSingleBase>_ScoreBoardSingleBase_);
            LOCK();
            UNLOCK();
            FUN_?(&ScoreBoardTeamBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardTeamBase>_ScoreBoardTeamBase_);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar39 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar39 == (MVGameControllerBase *)0x0) || (pMVar28 = (pMVar39->fields).game, pMVar28 == (MVNetworkGame *)0x0)) || (pMVar29 = (pMVar28->fields).teamManager, pMVar29 == (MVTeamManager *)0x0)) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar40 = (pMVar29->fields).teams;
          if (pDVar40 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) goto code_?;
          if ((pDVar40->fields)._count - (pDVar40->fields)._freeCount < 2) {
            original_00 = (pSVar38->fields).scoreboardSingle;
            pMVar3 = ScoreBoardSingleBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardSingleBase>_ScoreBoardSingleBase_;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
              pMVar3 = ScoreBoardSingleBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardSingleBase>_ScoreBoardSingleBase_;
            }
          }
          else {
            original_00 = (ScoreBoardSingleBase *)(pSVar38->fields).scoreboardTeam;
            pMVar3 = ScoreBoardTeamBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardTeamBase>_ScoreBoardTeamBase_;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
              pMVar3 = ScoreBoardTeamBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardTeamBase>_ScoreBoardTeamBase_;
            }
          }
          pCVar41 = (Component *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)original_00,pMVar3);
          if (pCVar41 == (Component *)0x0) goto code_?;
          pTVar42 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar41,(MethodInfo *)0x0);
          pSVar38 = (this->fields).scoreBoardController;
          if ((pSVar38 == (ScoreBoardController *)0x0) || (pTVar43 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pSVar38,(MethodInfo *)0x0), pTVar42 == (Transform *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(pTVar42,pTVar43,0,(MethodInfo *)0x0);
          pTVar42 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar41,(MethodInfo *)0x0);
          if (pTVar42 == (Transform *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling(pTVar42,(MethodInfo *)0x0);
          (*(code *)pCVar41->klass[1]._0.name)(pCVar41,uVar27);
          if (EVar17 == (EntryPreProcessor_AllocSize)0x0) goto code_?;
          original = *(Object **)((longlong)EVar17 + 0x20);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar44 = (Image *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4(original,UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_);
          bVar15 = iRam_? != 0;
          (this->fields).winConImage = pIVar44;
          if (bVar15) {
            uVar11 = (uint)((ulonglong)&(this->fields).winConImage >> 0xc);
            uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
            do {
              uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
              puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
              LOCK();
              bVar15 = uVar13 == *puVar14;
              if (bVar15) {
                *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar15);
          }
          pIVar44 = (this->fields).winConImage;
          if (pIVar44 == (Image *)0x0) goto code_?;
          pTVar42 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar44,(MethodInfo *)0x0);
          pGVar34 = (this->fields).winningConditionImageBackground;
          if ((pGVar34 == (GameObject *)0x0) || (pTVar43 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar34,(MethodInfo *)0x0), pTVar42 == (Transform *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(pTVar42,pTVar43,0,(MethodInfo *)0x0);
          pCVar41 = (Component *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4(*(void **)((longlong)EVar17 + 0x18),UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_);
          if (pCVar41 == (Component *)0x0) goto code_?;
          pTVar42 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar41,(MethodInfo *)0x0);
          pGVar34 = (this->fields).scoreGameObject;
          if ((pGVar34 == (GameObject *)0x0) || (pTVar43 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar34,(MethodInfo *)0x0), pTVar42 == (Transform *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(pTVar42,pTVar43,0,(MethodInfo *)0x0);
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_03 != (MVWorldObjectClientManager *)0x0) {
          pWVar45 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef(this_03,WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__);
          if (pWVar45 == (WorldObjectClientRef_1_System_Object_ *)0x0) {
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines((MonoBehaviour *)this,(MethodInfo *)0x0);
            pIVar46 = WinningConditionBriefing_FixAspectRatioDelay(this,(MethodInfo *)0x0);
            if (pIVar46 == (IEnumerator *)0x0) {
              uVar4 = func_?(&TypeInfo__System__NullReferenceException);
              this_05 = (NullReferenceException *)func_?(uVar4);
              pSVar24 = (String *)func_?(&StringLiteral_routine_is_null);
              mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1(this_05,pSVar24,(MethodInfo *)0x0);
              uVar4 = func_?(&MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_);
              FUN_?(this_05,uVar4);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            bVar7 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
            if (bVar7 == 0) {
              uVar4 = func_?(&TypeInfo__System__ArgumentException);
              this_06 = (InvalidEnumArgumentException *)func_?(uVar4);
              pSVar24 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
              System.dll::System::ComponentModel::InvalidEnumArgumentException::InvalidEnumArgumentException__ctor_1(this_06,pSVar24,(MethodInfo *)0x0);
              uVar4 = func_?(&MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_);
              FUN_?(this_06,uVar4);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (this == (WinningConditionBriefing *)0x0) {
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pvVar47 = (this->fields)._._._._._.m_CachedPtr;
            if (pvVar47 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcVar2 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              pcVar2 = (code *)FUN_?(&UNK_?);
              if (pcVar2 == (code *)0x0) {
                uVar4 = func_?(&UNK_?);
                FUN_?(uVar4,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar47,pIVar46);
            return;
          }
          pPVar35 = (this->fields).roundTimeProgressBar;
          if ((pPVar35 != (ProgressBar *)0x0) && (pGVar34 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pPVar35,(MethodInfo *)0x0), pGVar34 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar34,1,(MethodInfo *)0x0);
            pPVar35 = (this->fields).roundTimeProgressBar;
            pMVar48 = (MVRoundCube *)FUN_?(pWVar45);
            if (pMVar48 != (MVRoundCube *)0x0) {
              iVar30 = MVRoundCube::MVRoundCube_GetTimeLeft(pMVar48,(MethodInfo *)0x0);
              pMVar48 = (MVRoundCube *)FUN_?(pWVar45);
              if ((pMVar48 != (MVRoundCube *)0x0) && (iVar49 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds(pMVar48,(MethodInfo *)0x0), pPVar35 != (ProgressBar *)0x0)) {
                fVar36 = (float)iVar30 / (float)iVar49;
                if (fVar36 < 0.0) {
                  fVar36 = 0.0;
                }
                else if (1.0 < fVar36) {
                  fVar36 = 1.0;
                }
                pSVar37 = (pPVar35->fields).progressBar;
                (pPVar35->fields).progress = fVar36;
                if (pSVar37 != (Scrollbar *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size(pSVar37,fVar36,(MethodInfo *)0x0);
                  pTVar25 = (this->fields).roundTimeText;
                  pMVar48 = (MVRoundCube *)FUN_?(pWVar45);
                  this_04 = (MVRoundCube *)FUN_?(pWVar45);
                  if (((this_04 != (MVRoundCube *)0x0) && (iVar30 = MVRoundCube::MVRoundCube_GetTimeLeft(this_04,(MethodInfo *)0x0), pMVar48 != (MVRoundCube *)0x0)) && (pSVar24 = MVRoundCube::MVRoundCube_MakeTimeIntoText(pMVar48,iVar30,(MethodInfo *)0x0), pTVar25 != (Text *)0x0)) {
                    (*(pTVar25->klass->vtable).set_text.methodPtr)(pTVar25,pSVar24);
                    pIVar44 = (this->fields).roundTimeIconPrefab;
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    pCVar41 = (Component *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pIVar44,UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_);
                    if (pCVar41 != (Component *)0x0) {
                      pTVar42 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar41,(MethodInfo *)0x0);
                      pPVar35 = (this->fields).roundTimeProgressBar;
                      if ((pPVar35 != (ProgressBar *)0x0) && (pTVar43 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pPVar35,(MethodInfo *)0x0), pTVar42 != (Transform *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(pTVar42,pTVar43,0,(MethodInfo *)0x0);
                        goto code_?;
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
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing_Update(WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).screensize.x;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  iVar4 = (*pcRam_?)();
  if (fVar1 == (float)iVar4) {
    fVar1 = (this->fields).screensize.y;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    iVar4 = (*pcRam_?)();
    if (fVar1 == (float)iVar4) goto DAT_?;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  iVar4 = (*pcRam_?)();
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  iVar5 = (*pcRam_?)();
  bVar6 = cRam_? == '\0';
  (this->fields).screensize.x = (float)iVar4;
  (this->fields).screensize.y = (float)iVar5;
  if (bVar6) {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (this->fields)._._._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar7);
  routine = WinningConditionBriefing_FixAspectRatioDelay(this,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
DAT_?:
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar8 != (MVWorldObjectClientManager *)0x0) {
    pWVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObjectRef(pMVar8,WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__);
    pMVar10 = MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__;
    if (pWVar9 == (WorldObjectClientRef_1_System_Object_ *)0x0) {
      return;
    }
    pPVar11 = (this->fields).roundTimeProgressBar;
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar8 != (MVWorldObjectClientManager *)0x0) && (pMVar12 = (MVRoundCube *)MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(pMVar8,(pWVar9->fields).woId,pMVar10->klass->rgctx_data[1].method), pMVar12 != (MVRoundCube *)0x0)) {
      iVar13 = MVRoundCube::MVRoundCube_GetTimeLeft(pMVar12,(MethodInfo *)0x0);
      pMVar10 = MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__;
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar8 != (MVWorldObjectClientManager *)0x0) && ((pMVar12 = (MVRoundCube *)MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(pMVar8,(pWVar9->fields).woId,pMVar10->klass->rgctx_data[1].method), pMVar12 != (MVRoundCube *)0x0 && (iVar14 = MVRoundCube::MVRoundCube_get_DurationInMilliseconds(pMVar12,(MethodInfo *)0x0), pPVar11 != (ProgressBar *)0x0)))) {
        fVar1 = (float)iVar13 / (float)iVar14;
        if (fVar1 < 0.0) {
          fVar1 = 0.0;
        }
        else if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
        this_00 = (pPVar11->fields).progressBar;
        (pPVar11->fields).progress = fVar1;
        if (this_00 != (Scrollbar *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size(this_00,fVar1,(MethodInfo *)0x0);
          pMVar10 = MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__;
          pTVar15 = (this->fields).roundTimeText;
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar8 != (MVWorldObjectClientManager *)0x0) {
            pMVar12 = (MVRoundCube *)MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(pMVar8,(pWVar9->fields).woId,pMVar10->klass->rgctx_data[1].method);
            pMVar10 = MethodInfo__WorldObjectClientRef<MVRoundCube>__get_WorldObjectClient__;
            pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if ((((pMVar8 != (MVWorldObjectClientManager *)0x0) && (this_01 = (MVRoundCube *)MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1(pMVar8,(pWVar9->fields).woId,pMVar10->klass->rgctx_data[1].method), this_01 != (MVRoundCube *)0x0)) && (iVar13 = MVRoundCube::MVRoundCube_GetTimeLeft(this_01,(MethodInfo *)0x0), pMVar12 != (MVRoundCube *)0x0)) && (pSVar16 = MVRoundCube::MVRoundCube_MakeTimeIntoText(pMVar12,iVar13,(MethodInfo *)0x0), pTVar15 != (Text *)0x0)) {
              (*(pTVar15->klass->vtable).set_text.methodPtr)(pTVar15,pSVar16,(pTVar15->klass->vtable).set_text.method);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* WinningConditionBriefing() */

void Assembly-CSharp.dll::WinningConditionBriefing::WinningConditionBriefing__ctor(WinningConditionBriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FIND_ALL_THE_STARS_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_REACH_THE_FLAG_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ELIMINATE_YOUR_ENEMIES_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ELIMINATE_THE_OCULI_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)FUN_?(TypeInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,GamePassesHighScoreList+HighScoreListData]::Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor(this_00,MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Dictionary__);
  pSVar1 = TM::TM__(StringLiteral_REACH_THE_FLAG_,(MethodInfo *)0x0);
  if (this_00 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,1,(Object *)pSVar1,(InsertionBehavior__Enum)uVar3,MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_FIND_ALL_THE_STARS_,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,(Object *)pSVar1,(InsertionBehavior__Enum)uVar3,MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_ELIMINATE_YOUR_ENEMIES_,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,2,(Object *)pSVar1,(InsertionBehavior__Enum)uVar3,MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_ELIMINATE_THE_OCULI_,(MethodInfo *)0x0);
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,3,(Object *)pSVar1,(InsertionBehavior__Enum)uVar3,MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_REACH_THE_FLAG_,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,5,(Object *)pSVar1,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),MethodInfo__System__Collections__Generic__Dictionary<WinningConditionType,_System::String>__Add_WinningConditionType__System__String_->klass->rgctx_data[0x22].method);
  bVar4 = iRam_? != 0;
  (this->fields).headerMap = (Dictionary_2_WinningConditionType_System_String_ *)this_00;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).headerMap >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__List__,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.cameraMaskMode = 2;
  this_01 = (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)FUN_?(TypeInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__List__);
  bVar4 = iRam_? != 0;
  (this->fields)._.menuOrder = this_01;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._.menuOrder >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar8;
      LOCK();
      uVar6 = *puVar8;
      if (uVar7 == uVar6) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar6);
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

