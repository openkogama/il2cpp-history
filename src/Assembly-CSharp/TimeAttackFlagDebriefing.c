
/* Void EndDebriefingEarly() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_EndDebriefingEarly
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (TimeAttackFlagDebriefing *)0x0) {
    pvVar1 = (this->fields)._._._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    cVar4 = (*pcRam_?)(pvVar1);
    if (cVar4 == '\0') {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar5 != (MVGameControllerBase *)0x0) &&
       (pFVar6 = (pMVar5->fields).flagDebriefingControl, pFVar6 != (FlagDebriefingControl *)0x0)) {
      if ((pFVar6->fields).OnFlagDebriefingEnd != (Action *)0x0) {
        pAVar7 = (pFVar6->fields).OnFlagDebriefingEnd;
        (*(pAVar7->fields)._._.invoke_impl)
                  ((pAVar7->fields)._._.method_code,(pAVar7->fields)._._.method);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar8 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      if (pIVar8 != (IPlayModeUI *)0x0) {
        FUN_?(8,TypeInfo__IPlayModeUI,pIVar8,0);
        (this->fields).isDebriefingOn = 0;
        (this->fields).isWaitingForStart = 0;
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,0,(MethodInfo *)0x0);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          fVar9 = (float)(*pcRam_?)();
          this_00 = (this->fields).scoreBoardCanvasGroup;
          (this->fields).countdownEndTime = fVar9;
          if (this_00 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (this_00,0.0,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar5 != (MVGameControllerBase *)0x0) &&
               (pFVar6 = (pMVar5->fields).flagDebriefingControl,
               pFVar6 != (FlagDebriefingControl *)0x0)) {
              FlagDebriefingControl::FlagDebriefingControl_EndFlagCountDown
                        (pFVar6,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((((pMVar5 != (MVGameControllerBase *)0x0) &&
                   (pMVar10 = (pMVar5->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
                  (pGVar11 = (pMVar10->fields).GameEventManager, pGVar11 != (GameEventManager *)0x0))
                 && (pGVar12 = (pGVar11->fields).AvatarCommandsPlayMode,
                    pGVar12 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                if ((pGVar12->fields).OnEnterPlaymode == (Action *)0x0) {
                  return;
                }
                pAVar7 = (pGVar12->fields).OnEnterPlaymode;
                (*(pAVar7->fields)._._.invoke_impl)
                          ((pAVar7->fields)._._.method_code,(pAVar7->fields)._._.method);
                return;
              }
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


/* Void ExitDebriefing() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_ExitDebriefing
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  this_00 = (this->fields).canvasGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    pcVar1 = pcRam_?;
    (this->fields).isWaitingForStart = 1;
    (this->fields).isExitingDebriefing = 0;
    pcVar2 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcVar1)();
    bVar5 = cRam_? == '\0';
    (this->fields).waitStartTime = fVar4;
    if (bVar5) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar6 != (MVGameControllerBase *)0x0) &&
         (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
        (this_01 = (pMVar7->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) &&
       (pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       pMVar8 != (MVLocalPlayer *)0x0)) {
      bVar5 = cRam_? == '\0';
      (pMVar8->fields)._.checkpointWOID = -1;
      if (bVar5) {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar6 != (MVGameControllerBase *)0x0) &&
         (pFVar9 = (pMVar6->fields).flagDebriefingControl, pFVar9 != (FlagDebriefingControl *)0x0))
      {
        if ((pFVar9->fields).OnFlagDebriefingEnd != (Action *)0x0) {
          pAVar10 = (pFVar9->fields).OnFlagDebriefingEnd;
          (*(pAVar10->fields)._._.invoke_impl)
                    ((pAVar10->fields)._._.method_code,(pAVar10->fields)._._.method);
        }
        if ((this->fields).previousAvatarModeType != 1) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar6 == (MVGameControllerBase *)0x0) ||
              (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
             ((pGVar11 = (pMVar7->fields).GameEventManager, pGVar11 == (GameEventManager *)0x0 ||
              (pGVar12 = (pGVar11->fields).AvatarCommandsPlayMode,
              pGVar12 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))))
          goto code_?;
          if ((pGVar12->fields).OnEnterPlaymode != (Action *)0x0) {
            pAVar10 = (pGVar12->fields).OnEnterPlaymode;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pAVar10->fields)._._.invoke_impl)
                      ((pAVar10->fields)._._.method_code,(pAVar10->fields)._._.method);
            return;
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* String GetDebriefingText(Int32, Boolean) */

String * Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_GetDebriefingText
                   (TimeAttackFlagDebriefing *this,int32_t captureTime,bool isBestTime,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Your_Best_Time);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Best_Time_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Best_Time_;
  if (isBestTime == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 == (MVGameControllerBase *)0x0) ||
        (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
       (this_01 = (pMVar3->fields).playerContainer, this_01 == (MVPlayerContainer *)0x0)) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar4)();
      return pSVar1;
    }
    pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 == (MVGameControllerBase *)0x0) ||
        (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
       ((pMVar5 == (MVLocalPlayer *)0x0 ||
        (this_02 = (pMVar3->fields).gameStatCounterManager, this_02 == (GameStatCounterManager *)0x0
        )))) goto code_?;
    iVar6 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                      (this_02,(GameStatCounterType__Enum)
                               CONCAT71((int7)((ulonglong)
                                               TypeInfo__MVGameControllerBase->static_fields >> 8),8
                                       ),(pMVar5->fields)._._Team_k__BackingField,
                       (pMVar5->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
    pSVar1 = StringLiteral_Your_Best_Time;
    if ((-1 < iVar6) && ((captureTime < 1 || ((iVar6 <= captureTime && (iVar6 != 0)))))) {
      return ::StringLiteral__;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___sPtr___sPtr_____________Ptr_________);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 == (String *)0x0) {
    return (String *)0x0;
  }
  this_03 = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
            (this_03,StringLiteral___sPtr___sPtr_____________Ptr_________,(MethodInfo *)0x0);
  if (this_03 != (Regex *)0x0) {
    if (((this_03->fields).roptions & 0x40) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (pSVar1->fields)._stringLength;
    }
    pMVar7 = System.dll::System::Text::RegularExpressions::Regex::Regex_Run
                       (this_03,0,-1,pSVar1,0,(pSVar1->fields)._stringLength,iVar6,(MethodInfo *)0x0
                       );
    if (pMVar7 != (Match *)0x0) {
      if ((pMVar7->fields)._._capcount != 0) {
        this_04 = (GroupCollection *)
                  (*(pMVar7->klass->vtable).get_Groups.methodPtr)
                            (pMVar7,(pMVar7->klass->vtable).get_Groups.method);
        if (((this_04 == (GroupCollection *)0x0) ||
            (pGVar8 = System.dll::System::Text::RegularExpressions::GroupCollection::
                      GroupCollection_GetGroup(this_04,1,(MethodInfo *)0x0), pGVar8 == (Group *)0x0)
            ) || (pSVar1 = (String *)
                           (*(pGVar8->klass->vtable).ToString.methodPtr)
                                     (pGVar8,(pGVar8->klass->vtable).ToString.method),
                 pSVar1 == (String *)0x0)) goto code_?;
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar1,1,(pSVar1->fields)._stringLength + -2,(MethodInfo *)0x0);
        pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                           (pSVar1,(MethodInfo *)0x0);
      }
      if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
        pTVar9 = TM::TM_get_Instance((MethodInfo *)0x0);
        if (pTVar9 == (TM *)0x0) goto code_?;
        if ((pTVar9->fields).catalog != (Catalog *)0x0) {
          pTVar9 = TM::TM_get_Instance((MethodInfo *)0x0);
          if ((pTVar9 == (TM *)0x0) ||
             (this_00 = (pTVar9->fields).catalog, this_00 == (Catalog *)0x0))
          goto code_?;
          this_05 = GNU::Gettext::Catalog::Catalog_FindItem
                              (this_00,pSVar1,::StringLiteral__,(MethodInfo *)0x0);
          if ((this_05 != (CatalogEntry *)0x0) &&
             ((text = GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                                (this_05,0,(MethodInfo *)0x0), text != (String *)0x0 &&
              ((text->fields)._stringLength != 0)))) {
            pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                               (text,(MethodInfo *)0x0);
            return pSVar1;
          }
        }
      }
      return pSVar1;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* Int32 GetTopPlayerScore() */

int32_t Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_GetTopPlayerScore
                  (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                 );
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
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     (pDVar3 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0),
     pDVar3 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
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
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
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
    ppDStack_5 = (Dictionary_2_System_Int32_MVPlayer_ **)
                  ((ulonglong)(uint)(pDStack_4->fields)._version << 0x20);
    uStack_6 = 0;
    uStack_14 = (ulonglong)ppDStack_5;
    pMStack_15 = (MVPlayer *)0x0;
    pDStack_8 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
    ppDStack_5 = &pDStack_4;
    iVar13 = 0;
    while (pDStack_4 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      if (uStack_14._4_4_ != (pDStack_4->fields)._version) goto code_?;
      uVar11 = uStack_14 & 0xffffffff;
      do {
        if (pDStack_4 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
        uVar7 = (uint)uVar11;
        if ((uint)(pDStack_4->fields)._count <= uVar7) {
          return iVar13;
        }
        pDVar16 = (pDStack_4->fields)._entries;
        uVar11 = (ulonglong)(uVar7 + 1);
        uStack_14 = CONCAT44(uStack_14._4_4_,uVar7 + 1);
        if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
        goto code_?;
        if ((uint)pDVar16->max_length <= uVar7) goto code_?;
      } while (pDVar16->vector[(int)uVar7].hashCode < 0);
      pMStack_15 = pDVar16->vector[(int)uVar7].value;
      func_?();
      pMVar17 = pMStack_15;
      if (pMStack_15 != (MVPlayer *)0x0) {
        iVar18 = (pMStack_15->fields)._ActorNr_k__BackingField;
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
        this_01 = (pMVar2->fields).gameStatCounterManager;
        if (this_01 == (GameStatCounterManager *)0x0) goto code_?;
        team = (pMVar17->fields)._Team_k__BackingField;
        uVar10 = (ulonglong)team;
        iVar18 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                          (this_01,(GameStatCounterType__Enum)CONCAT71((int7)(uVar11 >> 8),8),team,
                           iVar18,(MethodInfo *)0x0);
        bVar19 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                          (iVar18,iVar13,(GameStatCounterType__Enum)CONCAT71((int7)(uVar10 >> 8),8),
                           (MethodInfo *)0x0);
        if (bVar19 != 0) {
          iVar13 = iVar18;
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


/* Void HandleScoreBoardVisibility(Int32) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::
     TimeAttackFlagDebriefing_HandleScoreBoardVisibility
               (TimeAttackFlagDebriefing *this,int32_t score,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
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
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    pLVar3 = MVTeamManager::MVTeamManager_GetTeamList(this_00,(MethodInfo *)0x0);
    if (pLVar3 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
      if ((pLVar3->fields)._size < 2) {
        pSVar4 = (this->fields).scoreBoardSingle;
        if (pSVar4 == (ScoreBoardSingleBase *)0x0) goto code_?;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pSVar4,(MethodInfo *)0x0);
        if (pGVar5 == (GameObject *)0x0) goto code_?;
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar5,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          pSVar4 = (this->fields).scoreBoardSingle;
          if (pSVar4 == (ScoreBoardSingleBase *)0x0) goto code_?;
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pSVar4,(MethodInfo *)0x0);
          if (pGVar5 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,1,(MethodInfo *)0x0);
        }
        pSVar7 = (this->fields).scoreBoardTeam;
        if (pSVar7 == (ScoreBoardTeamBase *)0x0) goto code_?;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pSVar7,(MethodInfo *)0x0);
        if (pGVar5 == (GameObject *)0x0) goto code_?;
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar5,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          pSVar7 = (this->fields).scoreBoardTeam;
          if (pSVar7 == (ScoreBoardTeamBase *)0x0) goto code_?;
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pSVar7,(MethodInfo *)0x0);
          if (pGVar5 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,0,(MethodInfo *)0x0);
        }
        pSVar4 = (this->fields).scoreBoardSingle;
        if (pSVar4 == (ScoreBoardSingleBase *)0x0) goto code_?;
        (*(pSVar4->klass->vtable).ReSortScoreBoard.methodPtr)();
        pSVar4 = (this->fields).scoreBoardSingle;
      }
      else {
        pSVar7 = (this->fields).scoreBoardTeam;
        if (pSVar7 == (ScoreBoardTeamBase *)0x0) goto code_?;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pSVar7,(MethodInfo *)0x0);
        if (pGVar5 == (GameObject *)0x0) goto code_?;
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar5,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          pSVar7 = (this->fields).scoreBoardTeam;
          if (pSVar7 == (ScoreBoardTeamBase *)0x0) goto code_?;
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pSVar7,(MethodInfo *)0x0);
          if (pGVar5 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,1,(MethodInfo *)0x0);
        }
        pSVar4 = (this->fields).scoreBoardSingle;
        if (pSVar4 == (ScoreBoardSingleBase *)0x0) goto code_?;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pSVar4,(MethodInfo *)0x0);
        if (pGVar5 == (GameObject *)0x0) goto code_?;
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar5,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          pSVar4 = (this->fields).scoreBoardSingle;
          if (pSVar4 == (ScoreBoardSingleBase *)0x0) goto code_?;
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pSVar4,(MethodInfo *)0x0);
          if (pGVar5 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,0,(MethodInfo *)0x0);
        }
        pSVar7 = (this->fields).scoreBoardTeam;
        if (pSVar7 == (ScoreBoardTeamBase *)0x0) goto code_?;
        (*(pSVar7->klass->vtable).ReSortScoreBoard.methodPtr)();
        pSVar4 = (ScoreBoardSingleBase *)(this->fields).scoreBoardTeam;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         (this_01 = (pMVar2->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) {
        pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0);
        if ((pMVar8 != (MVLocalPlayer *)0x0) && (pSVar4 != (ScoreBoardSingleBase *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pSVar4->klass->vtable).OnStatsChange.methodPtr)
                    (pSVar4,(ulonglong)(uint)(pMVar8->fields)._._ActorNr_k__BackingField,
                     (ulonglong)(uint)score,(pSVar4->klass->vtable).OnStatsChange.method);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_Initialize
               (TimeAttackFlagDebriefing *this,int32_t captureTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).canvasGroup;
  (this->fields).isExitingDebriefing = 0;
  (this->fields).isDebriefingOn = 1;
  if (pCVar1 == (CanvasGroup *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
            (pCVar1,_UNK_?,(MethodInfo *)0x0);
  pCVar1 = (this->fields).scoreBoardCanvasGroup;
  if (pCVar1 == (CanvasGroup *)0x0) goto code_?;
  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
            (pCVar1,_UNK_?,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar3 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar3 == (IPlayModeUI *)0x0) goto code_?;
  pIVar4 = TypeInfo__IPlayModeUI;
  FUN_?(8,TypeInfo__IPlayModeUI,pIVar3,1);
  pSVar5 = (this->fields).scoreBoardSingle;
  if (pSVar5 == (ScoreBoardSingleBase *)0x0) goto code_?;
  (*(pSVar5->klass->vtable).Initialize.methodPtr)
            (pSVar5,CONCAT71((int7)((ulonglong)pIVar4 >> 8),8),
             (pSVar5->klass->vtable).Initialize.method);
  pSVar6 = (this->fields).scoreBoardTeam;
  if (pSVar6 == (ScoreBoardTeamBase *)0x0) goto code_?;
  (*(pSVar6->klass->vtable).Initialize.methodPtr)();
  pLVar7 = (this->fields).localPlayerScore;
  if (pLVar7 == (LocalPlayerScore *)0x0) goto code_?;
  LocalPlayerScore::LocalPlayerScore_Initialize(pLVar7,(MethodInfo *)0x0);
  this_00 = (this->fields).playButton;
  if (this_00 == (Button *)0x0) goto code_?;
  UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
            ((Selectable *)this_00,1,(MethodInfo *)0x0);
  iVar8 = TimeAttackFlagDebriefing_GetTopPlayerScore(this,(MethodInfo *)0x0);
  if ((iVar8 < 0) || ((0 < captureTime && ((captureTime < iVar8 || (iVar8 == 0)))))) {
    value_00 = 1;
  }
  else {
    value_00 = 0;
  }
  TimeAttackFlagDebriefing_HandleScoreBoardVisibility(this,captureTime,(MethodInfo *)0x0);
  pLVar7 = (this->fields).localPlayerScore;
  if (pLVar7 == (LocalPlayerScore *)0x0) goto code_?;
  LocalPlayerScore::LocalPlayerScore_Activate(pLVar7,(MethodInfo *)0x0);
  this_01 = (this->fields).sunshineObject;
  if (this_01 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (this_01,value_00,(MethodInfo *)0x0);
  pSVar9 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if ((((pSVar9 == (SpawnRoleDataMediator *)0x0) ||
       (pSVar10 = (pSVar9->fields).reviveState,
       pSVar10 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_ *)0x0)) ||
      (pSVar11 = (pSVar10->fields)._.subscribableVariable,
      pSVar11 == (SubscribableVariable_1_ReviveState_ *)0x0)) ||
     (pRVar12 = (pSVar11->fields)._.value, pRVar12 == (ReviveState *)0x0)) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar13 = (pRVar12->fields).safePositions;
  (pRVar12->fields).currentPreviewedSafePosition = 0;
  if (pLVar13 == (List_1_SafeSpotData_ *)0x0) goto code_?;
  piVar14 = &(pLVar13->fields)._version;
  *piVar14 = *piVar14 + 1;
  (pLVar13->fields)._size = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar15 == (MVGameControllerBase *)0x0) ||
      (pMVar16 = (pMVar15->fields).game, pMVar16 == (MVNetworkGame *)0x0)) ||
     ((pGVar17 = (pMVar16->fields).GameEventManager, pGVar17 == (GameEventManager *)0x0 ||
      (pGVar18 = (pGVar17->fields).AvatarCommandsPlayMode,
      pGVar18 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))))
  goto code_?;
  if ((pGVar18->fields).OnWinningConditionIntermediateDebriefing !=
      (Action_1_WinningConditionType_ *)0x0) {
    pAVar19 = (pGVar18->fields).OnWinningConditionIntermediateDebriefing;
    (*(pAVar19->fields)._._.invoke_impl)
              ((pAVar19->fields)._._.method_code,5,(pAVar19->fields)._._.method);
  }
  uVar20 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,captureTime,value_00,0);
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
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_05 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_05,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  pOVar21 = (Object *)FUN_?(uRam_?);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Your_Best_Time);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Best_Time_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  key = StringLiteral_Best_Time_;
  if (value_00 == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar15 == (MVGameControllerBase *)0x0) ||
        (pMVar16 = (pMVar15->fields).game, pMVar16 == (MVNetworkGame *)0x0)) ||
       (this_02 = (pMVar16->fields).playerContainer, this_02 == (MVPlayerContainer *)0x0))
    goto code_?;
    pMVar22 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_02,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar15 == (MVGameControllerBase *)0x0) ||
         (pMVar16 = (pMVar15->fields).game, pMVar16 == (MVNetworkGame *)0x0)) ||
        (pMVar22 == (MVLocalPlayer *)0x0)) ||
       (this_03 = (pMVar16->fields).gameStatCounterManager, this_03 == (GameStatCounterManager *)0x0
       )) goto code_?;
    actorNumber = (pMVar22->fields)._._ActorNr_k__BackingField;
    uVar20 = (ulonglong)actorNumber;
    iVar8 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                       (this_03,(GameStatCounterType__Enum)
                                CONCAT71((int7)((ulonglong)
                                                TypeInfo__MVGameControllerBase->static_fields >> 8),
                                         8),(pMVar22->fields)._._Team_k__BackingField,actorNumber,
                        (MethodInfo *)0x0);
    key = StringLiteral_Your_Best_Time;
    if ((iVar8 < 0) ||
       ((value = ::StringLiteral__, 0 < captureTime && ((captureTime < iVar8 || (iVar8 == 0))))))
    goto code_?;
  }
  else {
code_?:
    value = TM::TM__(key,(MethodInfo *)0x0);
  }
  if (this_05 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar23 = CONCAT71((int7)(uVar20 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_05,pOVar21,(Object *)value,
             (InsertionBehavior__Enum)uVar23,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  pOVar21 = (Object *)FUN_?(uRam_?,&stack0x00000018);
  pOVar24 = (Object *)FUN_?(uRam_?,&stack0x00000018);
  uVar23 = CONCAT71((int7)((ulonglong)uVar23 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_05,pOVar21,pOVar24,
             (InsertionBehavior__Enum)uVar23,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  pOVar21 = (Object *)FUN_?(uRam_?,&stack0x00000018);
  pOVar24 = (Object *)FUN_?(uRam_?,&stack0x00000018);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_05,pOVar21,pOVar24,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar23 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar23 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,this_05,8,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar21 = (Object *)FUN_?(uRam_?,&stack0x00000018);
  pOVar24 = (Object *)FUN_?(TypeInfo__NotificationLifetime,&stack0x00000018);
  if (this_05 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_05,pOVar21,pOVar24,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar23 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
    if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__NotificationsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_04 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
    if (this_04 == (NotificationsManager *)0x0) goto code_?;
    NotificationsManager::NotificationsManager_InstantiateNotification
              (this_04,NotificationType__Enum_TimeAttackFlagDebriefing,
               (Dictionary_2_System_Object_System_Object_ *)this_05,(MethodInfo *)0x0);
  }
  return;
}


/* Void InitializeCountDown() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_InitializeCountDown
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isDebriefingOn != 0) {
    return;
  }
  bVar1 = cRam_? == '\0';
  (this->fields).isDebriefingOn = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar2 != (IPlayModeUI *)0x0) {
    pIVar3 = TypeInfo__IPlayModeUI;
    FUN_?(8,TypeInfo__IPlayModeUI,pIVar2,0);
    pCVar4 = (this->fields).canvasGroup;
    if (pCVar4 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar4,0.0,(MethodInfo *)0x0);
      pCVar4 = (this->fields).scoreBoardCanvasGroup;
      if (pCVar4 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar4,_UNK_?,(MethodInfo *)0x0);
        pSVar5 = (this->fields).scoreBoardSingle;
        if (pSVar5 != (ScoreBoardSingleBase *)0x0) {
          uVar6 = CONCAT71((int7)((ulonglong)pIVar3 >> 8),8);
          (*(pSVar5->klass->vtable).Initialize.methodPtr)
                    (pSVar5,uVar6,(pSVar5->klass->vtable).Initialize.method);
          pSVar7 = (this->fields).scoreBoardTeam;
          if (pSVar7 != (ScoreBoardTeamBase *)0x0) {
            (*(pSVar7->klass->vtable).Initialize.methodPtr)
                      (pSVar7,CONCAT71((int7)((ulonglong)uVar6 >> 8),8),
                       (pSVar7->klass->vtable).Initialize.method);
            pLVar8 = (this->fields).localPlayerScore;
            if (pLVar8 != (LocalPlayerScore *)0x0) {
              LocalPlayerScore::LocalPlayerScore_Initialize(pLVar8,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar9 != (MVGameControllerBase *)0x0) &&
                  (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
                 (this_00 = (pMVar10->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0))
              {
                pMVar11 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                   (this_00,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (((pMVar9 != (MVGameControllerBase *)0x0) &&
                    (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
                   ((pMVar11 != (MVLocalPlayer *)0x0 &&
                    (this_01 = (pMVar10->fields).gameStatCounterManager,
                    this_01 != (GameStatCounterManager *)0x0)))) {
                  actorNumber = (pMVar11->fields)._._ActorNr_k__BackingField;
                  uVar12 = (ulonglong)actorNumber;
                  score = MVWorldObject.dll::GameStatCounterManager::
                          GameStatCounterManager_GetActorCount
                                    (this_01,(GameStatCounterType__Enum)
                                             CONCAT71((int7)((ulonglong)
                                                             TypeInfo__MVGameControllerBase->
                                                             static_fields >> 8),8),
                                     (pMVar11->fields)._._Team_k__BackingField,actorNumber,
                                     (MethodInfo *)0x0);
                  TimeAttackFlagDebriefing_HandleScoreBoardVisibility(this,score,(MethodInfo *)0x0);
                  pLVar8 = (this->fields).localPlayerScore;
                  if (pLVar8 != (LocalPlayerScore *)0x0) {
                    LocalPlayerScore::LocalPlayerScore_Activate(pLVar8,(MethodInfo *)0x0);
                    pcVar13 = pcRam_?;
                    (this->fields).isWaitingForStart = 1;
                    pcVar14 = pcRam_?;
                    if ((pcVar13 == (code *)0x0) &&
                       (pcVar13 = (code *)FUN_?(&UNK_?), pcVar14 = pcVar13,
                       pcVar13 == (code *)0x0)) {
                      uVar6 = func_?(&UNK_?);
                      FUN_?(uVar6,0);
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    pcRam_? = pcVar14;
                    fVar15 = (float)(*pcVar13)();
                    bVar1 = cRam_? == '\0';
                    (this->fields).waitStartTime = fVar15 - _UNK_?;
                    if (bVar1) {
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
                      FUN_?(&TypeInfo__NotificationController);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                               *)FUN_?(
                                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                              );
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                              (this_02,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                              );
                    auStackX_8[0] = 0x12;
                    key = (Object *)FUN_?(uRam_?,auStackX_8);
                    auStackX_8[0] = 1;
                    value = (Object *)FUN_?(uRam_?,auStackX_8);
                    if (this_02 !=
                        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                         *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__TryInsert
                                ((Dictionary_2_System_Object_System_Object_ *)this_02,key,value,
                                 (InsertionBehavior__Enum)CONCAT71((int7)(uVar12 >> 8),2),
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                                 ->klass->rgctx_data[0x22].method);
                      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      NotificationController::NotificationController_PushNotification_2
                                (NotificationType__Enum_TimeAttackFlagCountDown,
                                 (Dictionary_2_System_Object_System_Object_ *)this_02,
                                 NotificationLifetime__Enum_High,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnAvatarStateChanged(SpawnRoleModeType) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_OnAvatarStateChanged
               (TimeAttackFlagDebriefing *this,SpawnRoleModeType__Enum mode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<LastRespawnType>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_8[0] = GameStatCounterType__Enum_None;
  if ((this->fields).isWaitingForStart == 0) {
    fVar1 = (this->fields).countdownEndTime;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar1 = fVar1 + _UNK_?;
    fVar4 = (float)(*pcRam_?)();
    if (fVar1 <= fVar4) {
      player = (MVPlayer *)0x0;
      WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
                ((GameStatCounterType__Enum *)auStackX_8,(MethodInfo *)0x0);
      if (((((this->fields).isDebriefingOn == 0) &&
           (auStackX_8[0] == GameStatCounterType__Enum_TimeAttackFlag)) &&
          (mode == SpawnRoleModeType__Enum_Playing)) &&
         (((this->fields).previousAvatarModeType == 4 ||
          ((this->fields).previousAvatarModeType == 2)))) {
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method);
        if (((extraout_RAX == 0) ||
            ((*(longlong *)(extraout_RAX + 200) == 0 ||
             (lVar5 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0x98), lVar5 == 0)))) ||
           (lVar5 = *(longlong *)(lVar5 + 0x10), lVar5 == 0)) {
DAT_?:
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)(lVar5 + 0x10) == 2) {
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if (this_00 == (GameObject *)0x0) goto DAT_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,1,(MethodInfo *)0x0);
          (this->fields).shouldStartFlagCountdown = 1;
        }
      }
      (this->fields).previousAvatarModeType = mode;
    }
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_OnDestroy
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TimeAttackFlagDebriefing__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
    this_00 = (pSVar2->fields).SpawnRoleModeTypeWrapper;
    this_02 = (UnityAction_1_System_Int32Enum_ *)
              FUN_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_02,(Object *)this,
               MethodInfo__TimeAttackFlagDebriefing__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
               ,(MethodInfo *)0x0);
    if (this_00 != (SpawnRoleModeTypeWrapper *)0x0) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                (this_00,(Action_1_MV_Common_SpawnRoleModeType_ *)this_02,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar3 != (MVGameControllerBase *)0x0) &&
          (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
         (pGVar5 = (pMVar4->fields).GameEventManager, pGVar5 != (GameEventManager *)0x0)) {
        this_01 = (pGVar5->fields).AvatarCommandsBuildMode;
        this_03 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_03,(Object *)this,MethodInfo__TimeAttackFlagDebriefing__OnLeavePlayMode__,
                   (MethodInfo *)0x0);
        if (this_01 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
          GameEventManager+AvatarCommandsBuildModeManager::
          GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetToEditMode
                    (this_01,(Action *)this_03,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnEnterPlayModeFromEditMode() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::
     TimeAttackFlagDebriefing_OnEnterPlayModeFromEditMode
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_8[0] = GameStatCounterType__Enum_None;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
            ((GameStatCounterType__Enum *)auStackX_8,(MethodInfo *)0x0);
  if (((this->fields).isDebriefingOn == 0) &&
     (auStackX_8[0] == GameStatCounterType__Enum_TimeAttackFlag)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar1 == (IPlayModeUI *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?(8,TypeInfo__IPlayModeUI,pIVar1,1);
    (this->fields).shouldStartFlagCountdown = 1;
  }
  return;
}


/* Void OnLeavePlayMode() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_OnLeavePlayMode
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (TimeAttackFlagDebriefing *)0x0) {
    pvVar1 = (this->fields)._._._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    cVar4 = (*pcRam_?)(pvVar1);
    if (cVar4 == '\0') {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar5 != (MVGameControllerBase *)0x0) &&
       (pFVar6 = (pMVar5->fields).flagDebriefingControl, pFVar6 != (FlagDebriefingControl *)0x0)) {
      if ((pFVar6->fields).OnFlagDebriefingEnd != (Action *)0x0) {
        pAVar7 = (pFVar6->fields).OnFlagDebriefingEnd;
        (*(pAVar7->fields)._._.invoke_impl)
                  ((pAVar7->fields)._._.method_code,(pAVar7->fields)._._.method);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar8 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      if (pIVar8 != (IPlayModeUI *)0x0) {
        FUN_?(8,TypeInfo__IPlayModeUI,pIVar8,0);
        (this->fields).isDebriefingOn = 0;
        (this->fields).isWaitingForStart = 0;
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,0,(MethodInfo *)0x0);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          fVar9 = (float)(*pcRam_?)();
          this_00 = (this->fields).scoreBoardCanvasGroup;
          (this->fields).countdownEndTime = fVar9;
          if (this_00 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (this_00,0.0,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar5 != (MVGameControllerBase *)0x0) &&
               (pFVar6 = (pMVar5->fields).flagDebriefingControl,
               pFVar6 != (FlagDebriefingControl *)0x0)) {
              FlagDebriefingControl::FlagDebriefingControl_EndFlagCountDown
                        (pFVar6,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((((pMVar5 != (MVGameControllerBase *)0x0) &&
                   (pMVar10 = (pMVar5->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
                  (pGVar11 = (pMVar10->fields).GameEventManager, pGVar11 != (GameEventManager *)0x0))
                 && (pGVar12 = (pGVar11->fields).AvatarCommandsPlayMode,
                    pGVar12 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
                if ((pGVar12->fields).OnEnterPlaymode == (Action *)0x0) {
                  return;
                }
                pAVar7 = (pGVar12->fields).OnEnterPlaymode;
                (*(pAVar7->fields)._._.invoke_impl)
                          ((pAVar7->fields)._._.method_code,(pAVar7->fields)._._.method);
                return;
              }
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


/* Void OnPressPlay() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_OnPressPlay
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).isExitingDebriefing = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (pMVar4 = (pMVar3->fields)._NetworkGameStateListener_k__BackingField,
     pMVar4 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar4->fields).currentGameState != 2) {
      return;
    }
    this_00 = (this->fields).playButton;
    if (this_00 != (Button *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&
                      bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      cVar5 = FUN_?(&(this_00->fields)._.m_Interactable);
      if (cVar5 == '\0') {
        return;
      }
      if ((this_00->fields)._.m_Interactable == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
          FUN_?();
        }
        pEVar6 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                           ((MethodInfo *)0x0);
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
        if (pEVar6 != (EventSystem *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pEVar6->fields)._._._._._.m_CachedPtr != (void *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
              FUN_?();
            }
            pEVar6 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                     EventSystem_get_current((MethodInfo *)0x0);
            if (pEVar6 != (EventSystem *)0x0) {
              pGVar7 = (pEVar6->fields).m_CurrentSelected;
              pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0);
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
              if (pGVar8 != (GameObject *)0x0 || pGVar7 != (GameObject *)0x0) {
                if (pGVar8 == (GameObject *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (pGVar7 == (GameObject *)0x0) goto DAT_?;
                  bVar1 = (pGVar7->fields)._.m_CachedPtr == (void *)0x0;
                }
                else if (pGVar7 == (GameObject *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  bVar1 = (pGVar8->fields)._.m_CachedPtr == (void *)0x0;
                }
                else {
                  bVar1 = pGVar7 == pGVar8;
                }
                if (!bVar1) goto code_?;
              }
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
                FUN_?();
              }
              pEVar6 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                       EventSystem_get_current((MethodInfo *)0x0);
              if (pEVar6 != (EventSystem *)0x0) {
                UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                EventSystem_SetSelectedGameObject_1(pEVar6,(GameObject *)0x0,(MethodInfo *)0x0);
                goto code_?;
              }
            }
DAT_?:
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
      }
code_?:
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_OnSetProperty
                ((Selectable *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnRoundEnd() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_OnRoundEnd
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (TimeAttackFlagDebriefing *)0x0) {
    pvVar1 = (this->fields)._._._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    cVar4 = (*pcRam_?)(pvVar1);
    if (cVar4 == '\0') {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar5 != (MVGameControllerBase *)0x0) &&
       (pFVar6 = (pMVar5->fields).flagDebriefingControl, pFVar6 != (FlagDebriefingControl *)0x0)) {
      if ((pFVar6->fields).OnFlagDebriefingEnd != (Action *)0x0) {
        pAVar7 = (pFVar6->fields).OnFlagDebriefingEnd;
        (*(pAVar7->fields)._._.invoke_impl)((pAVar7->fields)._._.method_code);
      }
      (this->fields).isDebriefingOn = 0;
      (this->fields).isWaitingForStart = 0;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_01 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,0,(MethodInfo *)0x0);
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar8 = (float)(*pcRam_?)();
        this_00 = (this->fields).scoreBoardCanvasGroup;
        (this->fields).countdownEndTime = fVar8;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,0.0,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar5 != (MVGameControllerBase *)0x0) &&
             (pFVar6 = (pMVar5->fields).flagDebriefingControl,
             pFVar6 != (FlagDebriefingControl *)0x0)) {
            FlagDebriefingControl::FlagDebriefingControl_EndFlagCountDown(pFVar6,(MethodInfo *)0x0);
            (this->fields).previousAvatarModeType = 4;
            return;
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


/* Void SendCountDownNotification() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::
     TimeAttackFlagDebriefing_SendCountDownNotification
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

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
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  auStackX_18[0]._0_1_ = 0x12;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_18);
  auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,1);
  pOVar2 = (Object *)FUN_?(uRam_?,auStackX_18);
  if (this_01 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar1,pOVar2,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar4 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,this_01,8,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,2);
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_18);
  auStackX_18[0] = 8;
  pOVar2 = (Object *)FUN_?(TypeInfo__NotificationLifetime,auStackX_18);
  if (this_01 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar1,pOVar2,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__NotificationsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__NotificationsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
      if (this_00 == (NotificationsManager *)0x0) goto code_?;
      NotificationsManager::NotificationsManager_InstantiateNotification
                (this_00,NotificationType__Enum_TimeAttackFlagCountDown,
                 (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SendNotification(Int32, Boolean) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_SendNotification
               (TimeAttackFlagDebriefing *this,int32_t captureTime,bool isBestTime,
               MethodInfo *method)

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
    FUN_?(&TypeInfo__NotificationController);
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
  aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,1);
  pOVar1 = (Object *)FUN_?(uRam_?);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Your_Best_Time);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Best_Time_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  key = StringLiteral_Best_Time_;
  if (isBestTime == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 == (MVGameControllerBase *)0x0) ||
        (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
       (this_00 = (pMVar3->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0))
    goto code_?;
    pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 == (MVGameControllerBase *)0x0) ||
        (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
       ((pMVar4 == (MVLocalPlayer *)0x0 ||
        (this_01 = (pMVar3->fields).gameStatCounterManager, this_01 == (GameStatCounterManager *)0x0
        )))) goto code_?;
    actorNumber = (pMVar4->fields)._._ActorNr_k__BackingField;
    method = (MethodInfo *)(ulonglong)actorNumber;
    iVar5 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                      (this_01,(GameStatCounterType__Enum)
                               CONCAT71((int7)((ulonglong)
                                               TypeInfo__MVGameControllerBase->static_fields >> 8),8
                                       ),(pMVar4->fields)._._Team_k__BackingField,actorNumber,
                       (MethodInfo *)0x0);
    key = StringLiteral_Your_Best_Time;
    if ((iVar5 < 0) ||
       ((value = ::StringLiteral__, 0 < captureTime && ((captureTime < iVar5 || (iVar5 == 0))))))
    goto code_?;
  }
  else {
code_?:
    value = TM::TM__(key,(MethodInfo *)0x0);
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
  uVar7 = CONCAT71((int7)((ulonglong)method >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar1,(Object *)value,
             (InsertionBehavior__Enum)uVar7,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,4);
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_18);
  aiStackX_18[0] = captureTime;
  pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_18);
  uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar1,pOVar8,
             (InsertionBehavior__Enum)uVar7,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  aiStackX_18[0]._0_1_ = 0x12;
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_18);
  aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,1);
  pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_18);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar1,pOVar8,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar7 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,this_03,8,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_18[0] = CONCAT31(aiStackX_18[0]._1_3_,2);
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_18);
  aiStackX_18[0] = 8;
  pOVar8 = (Object *)FUN_?(TypeInfo__NotificationLifetime,aiStackX_18);
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
            ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar1,pOVar8,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
    if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__NotificationsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_02 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
    if (this_02 == (NotificationsManager *)0x0) goto code_?;
    NotificationsManager::NotificationsManager_InstantiateNotification
              (this_02,NotificationType__Enum_TimeAttackFlagDebriefing,
               (Dictionary_2_System_Object_System_Object_ *)this_03,(MethodInfo *)0x0);
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_Start
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TimeAttackFlagDebriefing__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper;
    this_01 = (UnityAction_1_System_Int32Enum_ *)
              FUN_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,
               MethodInfo__TimeAttackFlagDebriefing__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
               ,(MethodInfo *)0x0);
    if (pSVar2 != (SpawnRoleModeTypeWrapper *)0x0) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                (pSVar2,(Action_1_MV_Common_SpawnRoleModeType_ *)this_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar3 != (MVGameControllerBase *)0x0) &&
          (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
         (pGVar5 = (pMVar4->fields).GameEventManager, pGVar5 != (GameEventManager *)0x0)) {
        this_00 = (pGVar5->fields).AvatarCommandsBuildMode;
        this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_02,(Object *)this,MethodInfo__TimeAttackFlagDebriefing__OnLeavePlayMode__,
                   (MethodInfo *)0x0);
        if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
          GameEventManager+AvatarCommandsBuildModeManager::
          GameEventManager_AvatarCommandsBuildModeManager_add_OnSetToEditMode
                    (this_00,(Action *)this_02,(MethodInfo *)0x0);
          pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                              ((MethodInfo *)0x0);
          if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
             (pSVar2 = (pSVar1->fields).SpawnRoleModeTypeWrapper,
             pSVar2 != (SpawnRoleModeTypeWrapper *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pSVar6 = (pSVar2->fields).spawnRoleType;
            if ((pSVar6 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
               (pSVar7 = (pSVar6->fields).subscribableVariable,
               pSVar7 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
              if (((pSVar7->fields)._.value & 4) == 0) {
                (this->fields).previousAvatarModeType = 1;
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
                  (IEditModeUI *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
                    (IEditModeUI *)0x0) goto code_?;
                cVar8 = FUN_?(1);
                if (cVar8 != '\0') {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__IPlayModeUI);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  auStackX_18[0] = GameStatCounterType__Enum_None;
                  WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
                            ((GameStatCounterType__Enum *)auStackX_18,(MethodInfo *)0x0);
                  if (((this->fields).isDebriefingOn == 0) &&
                     (auStackX_18[0] == GameStatCounterType__Enum_TimeAttackFlag)) {
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__MVGameControllerBase);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pIVar9 = TypeInfo__MVGameControllerBase->static_fields->
                             _PlayModeUI_k__BackingField;
                    if (pIVar9 == (IPlayModeUI *)0x0) goto code_?;
                    FUN_?(8,TypeInfo__IPlayModeUI,pIVar9,1);
                    (this->fields).shouldStartFlagCountdown = 1;
                  }
                }
              }
              obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
              if (obj != (GameObject *)0x0) {
                bVar10 = (this->fields).shouldStartFlagCountdown;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                ,bVar10,0);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (obj == (GameObject *)0x0) {
                  FUN_?();
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pvVar12 = (obj->fields)._.m_CachedPtr;
                if (pvVar12 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pcVar11 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                  uVar13 = func_?(&UNK_?);
                  FUN_?(uVar13,0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pcRam_? = pcVar11;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam_?)(pvVar12,bVar10);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_Update
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isWaitingForStart == 0) {
    TimeAttackFlagDebriefing_UpdateButton(this,(MethodInfo *)0x0);
  }
  else {
    fVar1 = (this->fields).waitStartTime;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar1 = fVar1 + _UNK_?;
    fVar4 = (float)(*pcRam_?)();
    if (fVar1 < fVar4) {
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar5 == (MVNetworkGame *)0x0) ||
         (pMVar6 = (pMVar5->fields)._NetworkGameStateListener_k__BackingField,
         pMVar6 == (MVNetworkGameStateListener *)0x0)) goto code_?;
      if ((pMVar6->fields).currentGameState != 2) {
        (this->fields).isDebriefingOn = 0;
        (this->fields).isWaitingForStart = 0;
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_01 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,0,(MethodInfo *)0x0);
        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        this_00 = (this->fields).scoreBoardCanvasGroup;
        (this->fields).countdownEndTime = fVar1;
        if (this_00 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        pFVar7 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl
                            ((MethodInfo *)0x0);
        if (pFVar7 == (FlagDebriefingControl *)0x0) goto code_?;
        FlagDebriefingControl::FlagDebriefingControl_EndFlagCountDown(pFVar7,(MethodInfo *)0x0);
        pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0)
        ;
        if ((pGVar8 == (GameEventManager *)0x0) ||
           (pGVar9 = (pGVar8->fields).AvatarCommandsPlayMode,
           pGVar9 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
        goto code_?;
        if ((pGVar9->fields).OnEnterPlaymode != (Action *)0x0) {
          pAVar10 = (pGVar9->fields).OnEnterPlaymode;
          (*(pAVar10->fields)._._.invoke_impl)
                    ((pAVar10->fields)._._.method_code,(pAVar10->fields)._._.method);
        }
        lVar11 = FUN_?();
        cVar12 = FUN_?();
        if (cVar12 == '\0') {
          bVar13 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock
                            ((MethodInfo *)0x0);
          bVar14 = bVar13 ^ 1;
        }
        else {
          bVar14 = 0;
        }
        if (lVar11 == 0) goto code_?;
        FUN_?(8,TypeInfo__IPlayModeUI,lVar11,bVar14);
      }
    }
  }
  if ((this->fields).shouldStartFlagCountdown != 0) {
    bVar15 = cRam_? == '\0';
    (this->fields).shouldStartFlagCountdown = 0;
    if (bVar15) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar16 == (MVGameControllerBase *)0x0) ||
       (pFVar7 = (pMVar16->fields).flagDebriefingControl, pFVar7 == (FlagDebriefingControl *)0x0))
    {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pFVar7->fields).OnFlagCountDown != (Action *)0x0) {
      pAVar10 = (pFVar7->fields).OnFlagCountDown;
      (*(pAVar10->fields)._._.invoke_impl)
                ((pAVar10->fields)._._.method_code,(pAVar10->fields)._._.method);
    }
    (pFVar7->fields).IsInFlagDebriefing = 1;
  }
  return;
}


/* Void UpdateButton() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing_UpdateButton
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 == (MVNetworkGameStateListener *)0x0)) goto code_?;
  pIVar4 = (this->fields).countdownFill;
  bVar5 = (pMVar3->fields).currentGameState == 2;
  if (bVar5) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 == (MVGameControllerBase *)0x0) ||
        (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
       ((pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
        pMVar3 == (MVNetworkGameStateListener *)0x0 || (pIVar4 == (Image *)0x0))))
    goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_fillAmount
              (pIVar4,(float)(pMVar3->fields).timeLeft / (float)(pMVar3->fields).duration,
               (MethodInfo *)0x0);
    pIVar4 = (this->fields).countdownFill;
    if (pIVar4 == (Image *)0x0) goto code_?;
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pIVar4,(MethodInfo *)0x0);
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar6,(MethodInfo *)0x0);
    if (bVar7 != 0) goto code_?;
    pIVar4 = (this->fields).countdownFill;
    if (pIVar4 == (Image *)0x0) goto code_?;
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pIVar4,(MethodInfo *)0x0);
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    bVar7 = 1;
  }
  else {
    if (pIVar4 == (Image *)0x0) {
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pIVar4,(MethodInfo *)0x0);
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar6,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
    pIVar4 = (this->fields).countdownFill;
    if (pIVar4 == (Image *)0x0) goto code_?;
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pIVar4,(MethodInfo *)0x0);
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    bVar7 = 0;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar6,bVar7,(MethodInfo *)0x0);
code_?:
  if ((!bVar5) && ((this->fields).isExitingDebriefing != 0)) {
    TimeAttackFlagDebriefing_ExitDebriefing(this,(MethodInfo *)0x0);
  }
  return;
}


/* TimeAttackFlagDebriefing() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefing::TimeAttackFlagDebriefing__ctor
               (TimeAttackFlagDebriefing *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).previousAvatarModeType = 4;
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
                while (ppMVar16 = ppMVar15 + 0x30528cee,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
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

