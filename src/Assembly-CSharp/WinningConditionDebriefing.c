
/* Void Clear() */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_Clear
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).captureCamera;
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
  if (pAVar1 != (AvatarCapture *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).captureCamera;
      if (pAVar1 == (AvatarCapture *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pAVar1,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
    }
  }
  pCVar3 = (this->fields).group;
  if (pCVar3 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar3,0.0,(MethodInfo *)0x0);
    pCVar3 = (this->fields).group;
    if (pCVar3 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
                (pCVar3,0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (this->fields)._._._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4);
      pDVar7 = (this->fields).debriefing;
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
      if (pDVar7 != (DebriefingWinnerGUI *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pDVar7->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pDVar7 = (this->fields).debriefing;
          if (pDVar7 == (DebriefingWinnerGUI *)0x0) goto code_?;
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pDVar7,(MethodInfo *)0x0);
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
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
          bVar8 = iRam_? != 0;
          (this->fields).debriefing = (DebriefingWinnerGUI *)0x0;
          if (bVar8) {
            uVar9 = (uint)((ulonglong)&(this->fields).debriefing >> 0xc);
            uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar11 == *puVar12;
              if (bVar8) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* String FormatCount(GameStatCounterType, Int32) */

String * Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_FormatCount
                   (GameStatCounterType__Enum statType,int32_t count,MethodInfo *method)

{
  aIStackX_10[0].m_value = count;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0_00___1_00_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  switch(statType & 0xff) {
  case GameStatCounterType__Enum_Kill:
  case GameStatCounterType__Enum_Collectible:
  case GameStatCounterType__Enum_OculusKill:
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
    return pSVar1;
  default:
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    lVar2 = (longlong)count * 10000;
    lVar3 = lVar2 / 600000000;
    lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3;
    aiStackX_8[0] = (int)lVar3 + ((int)(lVar4 >> 5) - (int)(lVar4 >> 0x3f)) * -0x3c;
    arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
    lVar2 = lVar2 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar2),8);
    lVar3 = (lVar2 >> 0x17) - (lVar2 >> 0x3f);
    lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3;
    aiStackX_8[0] = (int)lVar3 + ((int)(lVar2 >> 5) - (int)(lVar2 >> 0x3f)) * -0x3c;
    arg1 = (Object *)FUN_?(uRam_?,aiStackX_8);
    pSVar1 = StringLiteral__0_00___1_00_;
    PStack_5._arg0 = (Object *)0x0;
    PStack_5._arg1 = (Object *)0x0;
    PStack_5._arg2 = (Object *)0x0;
    PStack_5._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_5,arg0,arg1,(MethodInfo *)0x0);
    PStack_6._arg0 = PStack_5._arg0;
    PStack_6._arg1 = PStack_5._arg1;
    PStack_6._arg2 = PStack_5._arg2;
    PStack_6._args = PStack_5._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_6,(MethodInfo *)0x0);
    return pSVar1;
  }
}


/* Void GenerateDebriefing(IWinningCondition) */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_GenerateDebriefing
               (WinningConditionDebriefing *this,IWinningCondition *winningCondition,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IWinningConditionBriefing);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(winningCondition,TypeInfo__IWinningConditionBriefing);
  pIVar2 = TypeInfo__IWinningConditionBriefing;
  if (lVar1 != 0) {
    if (winningCondition == (IWinningCondition *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar1 = FUN_?(winningCondition,TypeInfo__IWinningConditionBriefing);
    pIVar4 = TypeInfo__IWinningConditionBriefing;
    if (lVar1 == 0) {
      FUN_?(winningCondition,pIVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar1 = FUN_?(winningCondition,TypeInfo__IWinningConditionBriefing);
    if (lVar1 == 0) {
      FUN_?(winningCondition,pIVar4);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_?(1,TypeInfo__IWinningConditionBriefing,lVar1,this);
  }
  return;
}


/* List`1[ScoreActorEntry] GetWinningActorsFromScoreActorEntries(List`1[ScoreActorEntry],
   GameStatCounterType) */

List_1_ScoreActorEntry_ *
Assembly-CSharp.dll::WinningConditionDebriefing::
WinningConditionDebriefing_GetWinningActorsFromScoreActorEntries
          (WinningConditionDebriefing *this,List_1_ScoreActorEntry_ *scoreActorEntries,
          GameStatCounterType__Enum counterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ScoreActorEntry>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_ScoreActorEntry_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<ScoreActorEntry>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List__);
  iVar2 = 0;
  if (scoreActorEntries == (List_1_ScoreActorEntry_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pLVar1 = (List_1_ScoreActorEntry_ *)(*pcVar3)();
    return pLVar1;
  }
  do {
    if ((scoreActorEntries->fields)._size <= iVar2) {
      return pLVar1;
    }
    if (pLVar1 == (List_1_ScoreActorEntry_ *)0x0) goto code_?;
    if ((pLVar1->fields)._size < 1) {
code_?:
      uVar4 = FUN_?(scoreActorEntries,iVar2);
      FUN_?(pLVar1,uVar4);
    }
    else {
      lVar5 = FUN_?(scoreActorEntries,iVar2);
      if (lVar5 == 0) goto code_?;
      iVar6 = *(int32_t *)(lVar5 + 0x14);
      lVar5 = FUN_?(pLVar1,0);
      if (lVar5 == 0) goto code_?;
      bVar7 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                        (iVar6,*(int32_t *)(lVar5 + 0x14),counterType & 0xff,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        iVar6 = (pLVar1->fields)._size;
        piVar8 = &(pLVar1->fields)._version;
        *piVar8 = *piVar8 + 1;
        (pLVar1->fields)._size = 0;
        if (0 < iVar6) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar1->fields)._items,0,iVar6,(MethodInfo *)0x0);
        }
        goto code_?;
      }
      if ((pLVar1->fields)._size == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pLVar1 = (List_1_ScoreActorEntry_ *)(*pcVar3)();
        return pLVar1;
      }
      pSVar9 = (pLVar1->fields)._items;
      if (pSVar9 == (ScoreActorEntry__Array *)0x0) goto code_?;
      if ((int)pSVar9->max_length == 0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pLVar1 = (List_1_ScoreActorEntry_ *)(*pcVar3)();
        return pLVar1;
      }
      if (pSVar9->vector[0] == (ScoreActorEntry *)0x0) goto code_?;
      iVar10 = (pSVar9->vector[0]->fields).counter;
      lVar5 = FUN_?(scoreActorEntries,iVar2);
      if (lVar5 == 0) goto code_?;
      if (iVar10 == *(int *)(lVar5 + 0x14)) goto code_?;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


/* List`1[ScoreTeamEntry] GetWinningTeamsFromScoreTeamEntries(List`1[ScoreTeamEntry],
   GameStatCounterType) */

List_1_ScoreTeamEntry_ *
Assembly-CSharp.dll::WinningConditionDebriefing::
WinningConditionDebriefing_GetWinningTeamsFromScoreTeamEntries
          (WinningConditionDebriefing *this,List_1_ScoreTeamEntry_ *scoreTeamEntries,
          GameStatCounterType__Enum counterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<ScoreTeamEntry>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_ScoreTeamEntry_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<ScoreTeamEntry>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__List__);
  iVar2 = 0;
  if (scoreTeamEntries == (List_1_ScoreTeamEntry_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pLVar1 = (List_1_ScoreTeamEntry_ *)(*pcVar3)();
    return pLVar1;
  }
  do {
    if ((scoreTeamEntries->fields)._size <= iVar2) {
      return pLVar1;
    }
    if (pLVar1 == (List_1_ScoreTeamEntry_ *)0x0) goto code_?;
    if ((pLVar1->fields)._size < 1) {
code_?:
      uVar4 = FUN_?(scoreTeamEntries,iVar2);
      FUN_?(pLVar1,uVar4);
    }
    else {
      lVar5 = FUN_?(scoreTeamEntries,iVar2);
      if (lVar5 == 0) goto code_?;
      iVar6 = *(int32_t *)(lVar5 + 0x14);
      lVar5 = FUN_?(pLVar1,0);
      if (lVar5 == 0) goto code_?;
      bVar7 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                        (iVar6,*(int32_t *)(lVar5 + 0x14),counterType & 0xff,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        iVar6 = (pLVar1->fields)._size;
        piVar8 = &(pLVar1->fields)._version;
        *piVar8 = *piVar8 + 1;
        (pLVar1->fields)._size = 0;
        if (0 < iVar6) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar1->fields)._items,0,iVar6,(MethodInfo *)0x0);
        }
        goto code_?;
      }
      if ((pLVar1->fields)._size == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pLVar1 = (List_1_ScoreTeamEntry_ *)(*pcVar3)();
        return pLVar1;
      }
      pSVar9 = (pLVar1->fields)._items;
      if (pSVar9 == (ScoreTeamEntry__Array *)0x0) goto code_?;
      if ((int)pSVar9->max_length == 0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pLVar1 = (List_1_ScoreTeamEntry_ *)(*pcVar3)();
        return pLVar1;
      }
      if (pSVar9->vector[0] == (ScoreTeamEntry *)0x0) goto code_?;
      iVar10 = (pSVar9->vector[0]->fields).counter;
      lVar5 = FUN_?(scoreTeamEntries,iVar2);
      if (lVar5 == 0) goto code_?;
      if (iVar10 == *(int *)(lVar5 + 0x14)) goto code_?;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


/* Void OnDisable() */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_OnDisable
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).captureCamera;
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
  if (pAVar1 != (AvatarCapture *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).captureCamera;
      if (pAVar1 == (AvatarCapture *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pAVar1,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
    }
  }
  pCVar3 = (this->fields).group;
  if (pCVar3 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar3,0.0,(MethodInfo *)0x0);
    pCVar3 = (this->fields).group;
    if (pCVar3 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
                (pCVar3,0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (this->fields)._._._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4);
      pDVar7 = (this->fields).debriefing;
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
      if (pDVar7 != (DebriefingWinnerGUI *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pDVar7->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pDVar7 = (this->fields).debriefing;
          if (pDVar7 == (DebriefingWinnerGUI *)0x0) goto code_?;
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pDVar7,(MethodInfo *)0x0);
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
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
          bVar8 = iRam_? != 0;
          (this->fields).debriefing = (DebriefingWinnerGUI *)0x0;
          if (bVar8) {
            uVar9 = (uint)((ulonglong)&(this->fields).debriefing >> 0xc);
            uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar11 == *puVar12;
              if (bVar8) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnWinningConditionReceived(IWinningCondition) */

void Assembly-CSharp.dll::WinningConditionDebriefing::
     WinningConditionDebriefing_OnWinningConditionReceived
               (WinningConditionDebriefing *this,IWinningCondition *winningCondition,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WinningConditionDebriefing____c___OnWinningConditionReceived_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningConditionDebriefing____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__WinningConditionDebriefing____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__WinningConditionDebriefing____c);
  }
  this_01 = TypeInfo__WinningConditionDebriefing____c->static_fields->__9__9_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__WinningConditionDebriefing____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__WinningConditionDebriefing____c);
    }
    object = TypeInfo__WinningConditionDebriefing____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__WinningConditionDebriefing____c___OnWinningConditionReceived_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__WinningConditionDebriefing____c->static_fields->__9__9_0 = this_01;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__WinningConditionDebriefing____c->static_fields->__9__9_0
                     >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (WinningConditionDebriefing *)0x0) {
    pvVar5 = (this->fields)._._._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    cVar8 = (*pcRam_?)(pvVar5);
    if (cVar8 == '\0') {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar9 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar9 != (GameSessionData *)0x0) {
      if ((pGVar9->fields).gameMode != 1) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar9 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar9 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar9->fields).gameMode != 0) {
          return;
        }
        lVar10 = FUN_?();
        if (lVar10 == 0) goto code_?;
        cVar8 = FUN_?(1,TypeInfo__IEditModeUI,lVar10);
        if (cVar8 == '\0') {
          return;
        }
      }
      bVar11 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
      if (bVar11 != 0) {
        pSVar12 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if ((((pSVar12 == (SpawnRoleDataMediator *)0x0) ||
             (pSVar13 = (pSVar12->fields).reviveState,
             pSVar13 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_ReviveState_ *)0x0)) ||
            (pSVar14 = (pSVar13->fields)._.subscribableVariable,
            pSVar14 == (SubscribableVariable_1_ReviveState_ *)0x0)) ||
           (this_00 = (pSVar14->fields)._.value, this_00 == (ReviveState *)0x0))
        goto code_?;
        ReviveState::ReviveState_ResetSafePostions(this_00,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__IWinningConditionBriefing);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      lVar10 = FUN_?(winningCondition,TypeInfo__IWinningConditionBriefing);
      pIVar15 = TypeInfo__IWinningConditionBriefing;
      if (lVar10 != 0) {
        if (winningCondition == (IWinningCondition *)0x0) goto code_?;
        lVar10 = FUN_?(winningCondition,TypeInfo__IWinningConditionBriefing);
        pIVar16 = TypeInfo__IWinningConditionBriefing;
        if (lVar10 == 0) {
          FUN_?(winningCondition,pIVar15);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar10 = FUN_?(winningCondition,TypeInfo__IWinningConditionBriefing);
        if (lVar10 == 0) {
          FUN_?(winningCondition,pIVar16);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FUN_?(1,TypeInfo__IWinningConditionBriefing,lVar10,this);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RenderPlayerToRenderTexture(List`1[System.Int32]) */

void Assembly-CSharp.dll::WinningConditionDebriefing::
     WinningConditionDebriefing_RenderPlayerToRenderTexture
               (WinningConditionDebriefing *this,List_1_System_Int32_ *actorNrs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__RemoveAt_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVPlayer>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Winning_player_can_t_be_found__P);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__and_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__between_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_It_s_a_tie);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  players = (List_1_MVPlayer_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVPlayer>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)players,
             MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
  uVar1 = 0;
  if (actorNrs != (List_1_System_Int32_ *)0x0) {
    lVar2 = 0x20;
    lVar3 = 0x20;
    for (uVar4 = uVar1; (int)uVar4 < (actorNrs->fields)._size; uVar4 = uVar4 + 1) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar5 == (MVGameControllerBase *)0x0) ||
         (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0))
      goto code_?;
      if ((uint)(actorNrs->fields)._size <= uVar4) goto code_?;
      pIVar7 = (actorNrs->fields)._items;
      if (pIVar7 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar7->max_length <= uVar4) goto code_?;
      pMVar8 = (pMVar6->fields).playerContainer;
      iVar9 = *(int32_t *)((longlong)pIVar7->vector + lVar3 + -0x20);
      if (pMVar8 == (MVPlayerContainer *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar8->fields).players;
      if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      iVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                         (this_00,iVar9,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__ContainsKey_int_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar9) {
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
        pMVar8 = (pMVar6->fields).playerContainer;
        iVar9 = FUN_?(actorNrs,uVar4);
        if ((pMVar8 == (MVPlayerContainer *)0x0) ||
           (MVPlayerContainer::MVPlayerContainer_get_Item(pMVar8,iVar9,(MethodInfo *)0x0),
           players == (List_1_MVPlayer_ *)0x0)) goto code_?;
        FUN_?();
      }
      lVar3 = lVar3 + 4;
    }
    if (players != (List_1_MVPlayer_ *)0x0) {
      lVar3 = 0x20;
      for (uVar4 = uVar1; (int)uVar4 < (players->fields)._size; uVar4 = uVar4 + 1) {
        if ((uint)(players->fields)._size <= uVar4) goto code_?;
        pMVar10 = (players->fields)._items;
        if (pMVar10 == (MVPlayer__Array *)0x0) goto code_?;
        if ((uint)pMVar10->max_length <= uVar4) goto code_?;
        if (*(longlong *)((longlong)pMVar10->vector + lVar3 + -0x20) == 0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)players,uVar4,
                     MethodInfo__System__Collections__Generic__List<MVPlayer>__RemoveAt_int_);
          uVar4 = uVar4 - 1;
          lVar3 = lVar3 + -8;
        }
        lVar3 = lVar3 + 8;
      }
      iVar11 = (players->fields)._size;
      if (iVar11 < 1) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Winning_player_can_t_be_found__P,(MethodInfo *)0x0);
        return;
      }
      if (iVar11 == 1) {
        if ((players->fields)._size == 0) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pMVar10 = (players->fields)._items;
        if (pMVar10 == (MVPlayer__Array *)0x0) goto code_?;
        if ((int)pMVar10->max_length == 0) {
code_?:
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if ((pMVar10->vector[0] == (MVPlayer *)0x0) ||
           ((pMVar10->vector[0]->fields)._UserProfileData_k__BackingField == (UserProfileData *)0x0))
        goto code_?;
      }
      else {
        str0 = mscorlib.dll::System::String::String_Concat_4
                         (::StringLiteral__,StringLiteral_It_s_a_tie,(MethodInfo *)0x0);
        if ((players->fields)._size < 3) {
          str0 = mscorlib.dll::System::String::String_Concat_4
                           (str0,StringLiteral__between_,(MethodInfo *)0x0);
          for (; (int)uVar1 < (players->fields)._size; uVar1 = uVar1 + 1) {
            if ((uint)(players->fields)._size <= uVar1) goto code_?;
            pMVar10 = (players->fields)._items;
            if (pMVar10 == (MVPlayer__Array *)0x0) goto code_?;
            if ((uint)pMVar10->max_length <= uVar1) goto code_?;
            lVar3 = *(longlong *)((longlong)pMVar10->vector + lVar2 + -0x20);
            if ((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 0x70), lVar3 == 0))
            goto code_?;
            str0 = mscorlib.dll::System::String::String_Concat_4
                             (str0,*(String **)(lVar3 + 0x18),(MethodInfo *)0x0);
            if ((int)uVar1 < (players->fields)._size + -1) {
              str0 = mscorlib.dll::System::String::String_Concat_4
                               (str0,StringLiteral__and_,(MethodInfo *)0x0);
            }
            lVar2 = lVar2 + 8;
          }
        }
        mscorlib.dll::System::String::String_Concat_4(str0,::StringLiteral__,(MethodInfo *)0x0);
      }
      pDVar13 = (this->fields).debriefing;
      if ((pDVar13 != (DebriefingWinnerGUI *)0x0) &&
         (pTVar14 = (pDVar13->fields).winnerName, pTVar14 != (Text *)0x0)) {
        (*(pTVar14->klass->vtable).set_text.methodPtr)();
        pAVar15 = (this->fields).captureCamera;
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
        if (pAVar15 != (AvatarCapture *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pAVar15->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pAVar15 = (this->fields).captureCamera;
            if (pAVar15 == (AvatarCapture *)0x0) goto code_?;
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
            pvVar16 = (pAVar15->fields)._._._._.m_CachedPtr;
            if (pvVar16 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar15,(MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcVar12 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
              uVar17 = func_?(&UNK_?);
              FUN_?(uVar17,0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcRam_? = pcVar12;
            pvVar16 = (void *)(*pcRam_?)(pvVar16);
            obj_00 = (Object_1 *)
                     UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                     Unmarshal_UnmarshalUnityObject
                               (pvVar16,
                                UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                               );
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
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                      (obj_00,0.0,(MethodInfo *)0x0);
          }
        }
        pAVar15 = (this->fields).captureCameraPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pAVar15 = (AvatarCapture *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pAVar15,
                             AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                            );
        bVar18 = iRam_? != 0;
        (this->fields).captureCamera = pAVar15;
        if (bVar18) {
          uVar1 = (uint)((ulonglong)&(this->fields).captureCamera >> 0xc);
          uVar19 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
          do {
            uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
            puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
            LOCK();
            bVar18 = uVar20 == *puVar21;
            if (bVar18) {
              *puVar21 = uVar20 | 1L << (uVar1 & 0x3f);
            }
            UNLOCK();
          } while (!bVar18);
        }
        pAVar15 = (this->fields).captureCamera;
        if (pAVar15 != (AvatarCapture *)0x0) {
          AvatarCapture::AvatarCapture_CapturePlayer(pAVar15,players,(MethodInfo *)0x0);
          pDVar13 = (this->fields).debriefing;
          if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__get_Item_ColorStyle_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__Styles);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar22 = Styles::Styles_HandleUnInitalized((MethodInfo *)0x0);
          fVar23 = _UNK_?;
          fVar24 = _UNK_?;
          fVar25 = _UNK_?;
          fVar26 = _UNK_?;
          if (bVar22 != 0) {
            if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
              FUN_?();
            }
            key = Styles::Styles_GetTeamColorStyle(MVTeam__Enum_Blue,0,0,(MethodInfo *)0x0);
            this_01 = TypeInfo__Styles->static_fields->colorStylesDictionary;
            if ((this_01 == (Dictionary_2_ColorStyle_Styles_ColorStyleDef_ *)0x0) ||
               (pOVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<ColorStyle,_Styles::ColorStyleDef>__get_Item_ColorStyle_
                                    ), pOVar27 == (Object *)0x0)) goto code_?;
            fVar23 = *(float *)((longlong)&pOVar27[1].klass + 4);
            fVar24 = *(float *)&pOVar27[1].monitor;
            fVar25 = *(float *)((longlong)&pOVar27[1].monitor + 4);
            fVar26 = *(float *)&pOVar27[2].klass;
          }
          pAVar15 = (this->fields).captureCamera;
          if ((pAVar15 != (AvatarCapture *)0x0) &&
             (obj = (pAVar15->fields).renderCam, obj != (Camera *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            UnityEngine__RenderTexture_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::RenderTexture>_void__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar16 = (obj->fields)._._._.m_CachedPtr;
            if (pvVar16 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcVar12 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
              uVar17 = func_?(&UNK_?);
              FUN_?(uVar17,0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcRam_? = pcVar12;
            pvVar16 = (void *)(*pcRam_?)(pvVar16);
            value = (Texture *)
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar16,
                               UnityEngine__RenderTexture_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::RenderTexture>_void__
                              );
            if (pDVar13 != (DebriefingWinnerGUI *)0x0) {
              fVar28 = fVar24 * _UNK_?;
              fVar29 = fVar25 * _UNK_?;
              pIVar30 = (pDVar13->fields).backgroundImage;
              if (pIVar30 != (ImageAnimator *)0x0) {
                (pIVar30->fields).endColor.r = fVar23 * _UNK_?;
                (pIVar30->fields).endColor.g = fVar28;
                (pIVar30->fields).endColor.b = fVar29;
                (pIVar30->fields).endColor.a = 1.0;
                (pIVar30->fields).startColor.r = fVar23;
                (pIVar30->fields).startColor.g = fVar24;
                (pIVar30->fields).startColor.b = fVar25;
                (pIVar30->fields).startColor.a = fVar26;
                this_02 = (pDVar13->fields).winnerImage;
                if (this_02 != (RawImage *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                            (this_02,value,(MethodInfo *)0x0);
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ResetScoreWhenDone() */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_ResetScoreWhenDone
               (WinningConditionDebriefing *this,MethodInfo *method)

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
     (pWVar3 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
     pWVar3 == (WinningConditionManager *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WinningConditionManager____c___Reset_b__21_0_IWinningCondition_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WinningConditionManager____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (pWVar3->fields)._WinningConditionFound_k__BackingField = 0;
  if (*(int *)&(TypeInfo__WinningConditionManager____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = TypeInfo__WinningConditionManager____c->static_fields->__9__21_0;
  if (this_01 == (Func_2_IWinningCondition_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__WinningConditionManager____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__WinningConditionManager____c->static_fields->__9;
    this_01 = (Func_2_IWinningCondition_Boolean_ *)
              FUN_?(TypeInfo__System__Func<IWinningCondition,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)object,
               MethodInfo__WinningConditionManager____c___Reset_b__21_0_IWinningCondition_,
               (MethodInfo *)0x0);
    TypeInfo__WinningConditionManager____c->static_fields->__9__21_0 = this_01;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&TypeInfo__WinningConditionManager____c->static_fields->__9__21_0
                     >> 0xc);
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
  }
  pWVar9 = (pWVar3->fields).winnerConditionsRoot;
  if (pWVar9 != (WinningConditionOr *)0x0) {
    (*(pWVar9->klass->vtable).Traverse_1.methodPtr)
              (pWVar9,this_01,(pWVar9->klass->vtable).Traverse_1.method);
    this_00 = (pWVar3->fields).gameCounterManager;
    if (this_00 != (GameStatCounterManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Clear__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this_00->fields).statTypeCounters !=
          (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
        FUN_?();
        MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_AddPersistentStats
                  (this_00,(MethodInfo *)0x0);
        if ((pWVar3->fields).OnWinningConditionReset != (EventHandler_1_EventArgs_ *)0x0) {
          pEVar10 = (pWVar3->fields).OnWinningConditionReset;
          if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__System__EventArgs);
          }
          (*(pEVar10->fields)._._.invoke_impl)
                    ((pEVar10->fields)._._.method_code,pWVar3,
                     TypeInfo__System__EventArgs->static_fields->Empty,(pEVar10->fields)._._.method);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupDebriefing(WinningConditionType, HighScores, Boolean) */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_SetupDebriefing
               (WinningConditionDebriefing *this,WinningConditionType__Enum winType,
               HighScores *highScores,bool teamMode,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (GameObject *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar1 = (obj->fields)._.m_CachedPtr;
  if (pvVar1 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
  if (cVar4 != '\0') {
    if (highScores == (HighScores *)0x0) goto code_?;
    if (teamMode == 0) {
      scoreActorEntries =
           MVWorldObject.dll::HighScores::HighScores_GenerateActorScores
                     (highScores,(MethodInfo *)0x0);
      WinningConditionDebriefing_SetupDebriefingPlayer
                (this,winType,scoreActorEntries,(uint)(highScores->fields).gameStatCounterType,
                 (MethodInfo *)0x0);
    }
    else {
      scoreTeamEntries =
           MVWorldObject.dll::HighScores::HighScores_GenerateTeamScores
                     (highScores,(MethodInfo *)0x0);
      WinningConditionDebriefing_SetupDebriefingTeam
                (this,winType,scoreTeamEntries,(uint)(highScores->fields).gameStatCounterType,
                 (MethodInfo *)0x0);
    }
    this_00 = (this->fields).group;
    if (this_00 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_blocksRaycasts
              (this_00,1,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar5 != (MVGameControllerBase *)0x0) &&
      (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
     (pWVar7 = (pMVar6->fields)._WinningConditionManager_k__BackingField,
     pWVar7 != (WinningConditionManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Func<IWinningCondition,_bool>);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__WinningConditionManager____c___Reset_b__21_0_IWinningCondition_);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__WinningConditionManager____c);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (pWVar7->fields)._WinningConditionFound_k__BackingField = 0;
    if (*(int *)&(TypeInfo__WinningConditionManager____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_02 = TypeInfo__WinningConditionManager____c->static_fields->__9__21_0;
    if (this_02 == (Func_2_IWinningCondition_Boolean_ *)0x0) {
      if (*(int *)&(TypeInfo__WinningConditionManager____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      object = TypeInfo__WinningConditionManager____c->static_fields->__9;
      this_02 = (Func_2_IWinningCondition_Boolean_ *)
                FUN_?(TypeInfo__System__Func<IWinningCondition,_bool>);
      mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                ((Predicate_1_Object_ *)this_02,(Object *)object,
                 MethodInfo__WinningConditionManager____c___Reset_b__21_0_IWinningCondition_,
                 (MethodInfo *)0x0);
      TypeInfo__WinningConditionManager____c->static_fields->__9__21_0 = this_02;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&TypeInfo__WinningConditionManager____c->static_fields->__9__21_0
                       >> 0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
    }
    pWVar12 = (pWVar7->fields).winnerConditionsRoot;
    if (pWVar12 != (WinningConditionOr *)0x0) {
      (*(pWVar12->klass->vtable).Traverse_1.methodPtr)
                (pWVar12,this_02,(pWVar12->klass->vtable).Traverse_1.method);
      this_01 = (pWVar7->fields).gameCounterManager;
      if (this_01 != (GameStatCounterManager *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__Clear__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((this_01->fields).statTypeCounters !=
            (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) {
          FUN_?();
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_AddPersistentStats
                    (this_01,(MethodInfo *)0x0);
          if ((pWVar7->fields).OnWinningConditionReset != (EventHandler_1_EventArgs_ *)0x0) {
            pEVar13 = (pWVar7->fields).OnWinningConditionReset;
            if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__System__EventArgs);
            }
            (*(pEVar13->fields)._._.invoke_impl)
                      ((pEVar13->fields)._._.method_code,pWVar7,
                       TypeInfo__System__EventArgs->static_fields->Empty,(pEVar13->fields)._._.method
                      );
          }
          return;
        }
      }
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetupDebriefingNoWinner() */

void Assembly-CSharp.dll::WinningConditionDebriefing::
     WinningConditionDebriefing_SetupDebriefingNoWinner
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Time_s_Up_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  WinningConditionDebriefing_Clear(this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).captureCamera;
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
  if (pAVar1 != (AvatarCapture *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).captureCamera;
      if (pAVar1 == (AvatarCapture *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pAVar1,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
    }
  }
  pAVar1 = (this->fields).captureCameraPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar1 = (AvatarCapture *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pAVar1,
                       AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                      );
  bVar3 = iRam_? != 0;
  (this->fields).captureCamera = pAVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).captureCamera >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pAVar1 = (this->fields).captureCamera;
  if (pAVar1 != (AvatarCapture *)0x0) {
    AvatarCapture::AvatarCapture_CaptureAllPlayersInGame(pAVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).group;
    pDVar8 = (this->fields).noWinnerPrefab;
    if ((this_00 != (CanvasGroup *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
    {
      parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar2,(MethodInfo *)0x0);
      pDVar8 = (DebriefingWinnerGUI *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)pDVar8,parent,0,
                           DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI__UnityEngine__Transform__bool_
                          );
      bVar3 = iRam_? != 0;
      (this->fields).debriefing = pDVar8;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).debriefing >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pDVar8 = (this->fields).debriefing;
      pSVar9 = TM::TM__(StringLiteral_Time_s_Up_,(MethodInfo *)0x0);
      if ((pDVar8 != (DebriefingWinnerGUI *)0x0) &&
         (pTVar10 = (pDVar8->fields).winnerName, pTVar10 != (Text *)0x0)) {
        (*(pTVar10->klass->vtable).set_text.methodPtr)(pTVar10,pSVar9);
        pDVar8 = (this->fields).debriefing;
        if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar11 = Styles::Styles_GetColor
                            (aCStack_12,ColorStyle__Enum_DarkNavyBlue,(MethodInfo *)0x0);
        pAVar1 = (this->fields).captureCamera;
        fVar13 = pCVar11->r;
        fVar14 = pCVar11->g;
        fVar15 = pCVar11->b;
        fVar16 = pCVar11->a;
        if (((pAVar1 != (AvatarCapture *)0x0) &&
            (this_01 = (pAVar1->fields).renderCam, this_01 != (Camera *)0x0)) &&
           (value = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                              (this_01,(MethodInfo *)0x0), pDVar8 != (DebriefingWinnerGUI *)0x0)) {
          fVar17 = fVar14 * _UNK_?;
          fVar18 = fVar15 * _UNK_?;
          pIVar19 = (pDVar8->fields).backgroundImage;
          if (pIVar19 != (ImageAnimator *)0x0) {
            aCStack_12[0].a = 1.0;
            (pIVar19->fields).endColor.r = fVar13 * _UNK_?;
            (pIVar19->fields).endColor.g = fVar17;
            (pIVar19->fields).endColor.b = fVar18;
            (pIVar19->fields).endColor.a = 1.0;
            (pIVar19->fields).startColor.r = fVar13;
            (pIVar19->fields).startColor.g = fVar14;
            (pIVar19->fields).startColor.b = fVar15;
            (pIVar19->fields).startColor.a = fVar16;
            this_02 = (pDVar8->fields).winnerImage;
            if (this_02 != (RawImage *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (this_02,(Texture *)value,(MethodInfo *)0x0);
              pDVar8 = (this->fields).debriefing;
              if (pDVar8 != (DebriefingWinnerGUI *)0x0) {
                DebriefingWinnerGUI::DebriefingWinnerGUI_ActivateScoreImage
                          (pDVar8,WinningConditionType__Enum_None,(MethodInfo *)0x0);
                pIVar20 = WinningConditionDebriefing_ShowDebriefingCoroutine(this,(MethodInfo *)0x0)
                ;
                if (pIVar20 == (IEnumerator *)0x0) {
                  uVar21 = func_?(&TypeInfo__System__NullReferenceException);
                  this_03 = (NullReferenceException *)func_?(uVar21);
                  pSVar9 = (String *)func_?(&StringLiteral_routine_is_null);
                  mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                            (this_03,pSVar9,(MethodInfo *)0x0);
                  uVar21 = func_?(&
                                               MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                              );
                  FUN_?(this_03,uVar21);
                  pcVar22 = (code *)swi(3);
                  (*pcVar22)();
                  return;
                }
                bVar23 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                         MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
                if (bVar23 == 0) {
                  uVar21 = func_?(&TypeInfo__System__ArgumentException);
                  this_04 = (InvalidEnumArgumentException *)func_?(uVar21);
                  pSVar9 = (String *)
                            func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
                  System.dll::System::ComponentModel::InvalidEnumArgumentException::
                  InvalidEnumArgumentException__ctor_1(this_04,pSVar9,(MethodInfo *)0x0);
                  uVar21 = func_?(&
                                               MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                              );
                  FUN_?(this_04,uVar21);
                  pcVar22 = (code *)swi(3);
                  (*pcVar22)();
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
                if (this == (WinningConditionDebriefing *)0x0) {
                  FUN_?();
                  pcVar22 = (code *)swi(3);
                  (*pcVar22)();
                  return;
                }
                pvVar24 = (this->fields)._._._._.m_CachedPtr;
                if (pvVar24 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                  pcVar22 = (code *)swi(3);
                  (*pcVar22)();
                  return;
                }
                pcVar22 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
                  uVar21 = func_?(&UNK_?);
                  FUN_?(uVar21,0);
                  pcVar22 = (code *)swi(3);
                  (*pcVar22)();
                  return;
                }
                pcRam_? = pcVar22;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam_?)(pvVar24,pIVar20);
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
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void SetupDebriefingPlayer(WinningConditionType, List`1[ScoreActorEntry], GameStatCounterType) */

void Assembly-CSharp.dll::WinningConditionDebriefing::
     WinningConditionDebriefing_SetupDebriefingPlayer
               (WinningConditionDebriefing *this,WinningConditionType__Enum winType,
               List_1_ScoreActorEntry_ *scoreActorEntries,GameStatCounterType__Enum counterType,
               MethodInfo *method)

{
  counterType_00 = counterType & 0xff;
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
  uStack_2 = 0;
  iStack_3 = 0;
  apMStack_4[0] = (MVPlayer *)0x0;
  if (scoreActorEntries != (List_1_ScoreActorEntry_ *)0x0) {
    if ((scoreActorEntries->fields)._size == 0) {
      WinningConditionDebriefing_SetupDebriefingNoWinner(this,(MethodInfo *)0x0);
      return;
    }
    WinningConditionDebriefing_Clear(this,(MethodInfo *)0x0);
    pDVar5 = (this->fields).playerWinPrefab;
    this_00 = (this->fields).group;
    if ((this_00 != (CanvasGroup *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), this_02 != (GameObject *)0x0))
    {
      parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_02,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pDVar5 = (DebriefingWinnerGUI *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)pDVar5,parent,0,
                           DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI__UnityEngine__Transform__bool_
                          );
      (this->fields).debriefing = pDVar5;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields).debriefing >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pLVar11 = WinningConditionDebriefing_GetWinningActorsFromScoreActorEntries
                          (this,scoreActorEntries,counterType_00,(MethodInfo *)0x0);
      this_03 = (List_1_System_UInt32Enum_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<int>);
      FUN_?(this_03,MethodInfo__System__Collections__Generic__List<int>__List__);
      uVar6 = 0;
      if (pLVar11 != (List_1_ScoreActorEntry_ *)0x0) {
        lVar7 = 0x20;
        while (pMVar12 = MethodInfo__System__Collections__Generic__List<int>__Add_int_,
              (int)uVar6 < (pLVar11->fields)._size) {
          if ((uint)(pLVar11->fields)._size <= uVar6) goto code_?;
          pSVar13 = (pLVar11->fields)._items;
          if (pSVar13 == (ScoreActorEntry__Array *)0x0) goto code_?;
          if ((uint)pSVar13->max_length <= uVar6) goto code_?;
          lVar14 = *(longlong *)((longlong)pSVar13->vector + lVar7 + -0x20);
          if ((lVar14 == 0) ||
             (item = *(UInt32Enum__Enum *)(lVar14 + 0x10),
             this_03 == (List_1_System_UInt32Enum_ *)0x0)) goto code_?;
          piVar15 = &(this_03->fields)._version;
          *piVar15 = *piVar15 + 1;
          pUVar16 = (this_03->fields)._items;
          uVar17 = (this_03->fields)._size;
          if (pUVar16 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
          if (uVar17 < (uint)pUVar16->max_length) {
            (this_03->fields)._size = uVar17 + 1;
            if ((uint)pUVar16->max_length <= uVar17) goto code_?;
            pUVar16->vector[(int)uVar17] = item;
            uVar6 = uVar6 + 1;
            lVar7 = lVar7 + 8;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
            List_1_System_UInt32Enum__AddWithResize
                      (this_03,item,pMVar12->klass->rgctx_data[0xe].method);
            uVar6 = uVar6 + 1;
            lVar7 = lVar7 + 8;
          }
        }
        WinningConditionDebriefing_RenderPlayerToRenderTexture
                  (this,(List_1_System_Int32_ *)this_03,(MethodInfo *)0x0);
        if ((pLVar11->fields)._size == 0) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pSVar13 = (pLVar11->fields)._items;
        if (pSVar13 != (ScoreActorEntry__Array *)0x0) {
          if ((int)pSVar13->max_length == 0) {
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
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
code_?:
            FUN_?();
            uVar6 = uStack_2;
code_?:
            uStack_2 = uVar6;
            FUN_?();
code_?:
            FUN_?();
code_?:
            mscorlib.dll::System::ThrowHelper::
            ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                      ((MethodInfo *)0x0);
code_?:
            FUN_?();
            FUN_?();
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          if (pSVar13->vector[0] != (ScoreActorEntry *)0x0) {
            count = (pSVar13->vector[0]->fields).counter;
            if (count == 0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar19 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((((pMVar19 != (MVGameControllerBase *)0x0) &&
                   (pMVar20 = (pMVar19->fields).game, pMVar20 != (MVNetworkGame *)0x0)) &&
                  (this_01 = (pMVar20->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0))
                 && (pDVar21 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                         (this_01,(MethodInfo *)0x0),
                    pDVar21 !=
                    (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
                pDVar22 = (pDVar21->fields)._dictionary;
                ppDStack_23 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
                uStack_24 = 0;
                if (iRam_? != 0) {
                  uVar6 = (uint)((ulonglong)&pDStack_25 >> 0xc);
                  lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                    puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                    LOCK();
                    bVar10 = uVar8 == *puVar9;
                    if (bVar10) {
                      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar10);
                }
                if (pDVar22 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
                  pDStack_25 = pDVar22;
                  FUN_?();
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
                iStack_3 = (pDVar22->fields)._version;
                uStack_24 = 0;
                uStack_2 = 0;
                apMStack_4[0] = (MVPlayer *)0x0;
                pDStack_25 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
                ppDStack_23 = &pDStack_1;
                pDStack_1 = pDVar22;
                while (pDStack_1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
                  if (iStack_3 != (pDStack_1->fields)._version) goto code_?;
                  do {
                    if (pDStack_1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0)
                    goto code_?;
                    if ((uint)(pDStack_1->fields)._count <= uStack_2) {
                      uStack_2 = (pDStack_1->fields)._count + 1;
                      apMStack_4[0] = (MVPlayer *)0x0;
                      goto code_?;
                    }
                    pDVar26 = (pDStack_1->fields)._entries;
                    lVar7 = (longlong)(int)uStack_2;
                    uVar6 = uStack_2 + 1;
                    if (pDVar26 ==
                        (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
                    goto code_?;
                    bVar10 = (uint)pDVar26->max_length <= uStack_2;
                    uStack_2 = uVar6;
                    if (bVar10) goto code_?;
                  } while (pDVar26->vector[lVar7].hashCode < 0);
                  apMStack_4[0] = pDVar26->vector[lVar7].value;
                  func_?(apMStack_4);
                  if (apMStack_4[0] == (MVPlayer *)0x0) goto code_?;
                  if ((pLVar11->fields)._size == 0) goto code_?;
                  pSVar13 = (pLVar11->fields)._items;
                  if (pSVar13 == (ScoreActorEntry__Array *)0x0) goto code_?;
                  if ((int)pSVar13->max_length == 0) goto code_?;
                  if (pSVar13->vector[0] == (ScoreActorEntry *)0x0) goto code_?;
                  if (((apMStack_4[0]->fields)._ActorNr_k__BackingField ==
                       (pSVar13->vector[0]->fields).actorNumber) &&
                     (iVar27 = MVPlayer::MVPlayer_GetGameStat
                                         (apMStack_4[0],counterType_00,(MethodInfo *)0x0),
                     count < iVar27)) {
                    count = iVar27;
                  }
                }
                goto code_?;
              }
            }
            else {
code_?:
              text = ::StringLiteral__;
              pSVar28 = WinningConditionDebriefing_FormatCount
                                  (counterType_00,count,(MethodInfo *)0x0);
              pDVar5 = (this->fields).debriefing;
              if ((pDVar5 != (DebriefingWinnerGUI *)0x0) &&
                 (pTVar29 = (pDVar5->fields).winValue, pTVar29 != (Text *)0x0)) {
                (*(pTVar29->klass->vtable).set_text.methodPtr)
                          (pTVar29,pSVar28,(pTVar29->klass->vtable).set_text.method);
                pDVar5 = (this->fields).debriefing;
                if (pDVar5 != (DebriefingWinnerGUI *)0x0) {
                  DebriefingWinnerGUI::DebriefingWinnerGUI_SetAdditionalInformation
                            (pDVar5,text,winType,(MethodInfo *)0x0);
                  pDVar5 = (this->fields).debriefing;
                  if (pDVar5 != (DebriefingWinnerGUI *)0x0) {
                    DebriefingWinnerGUI::DebriefingWinnerGUI_ActivateScoreImage
                              (pDVar5,winType,(MethodInfo *)0x0);
                    routine = WinningConditionDebriefing_ShowDebriefingCoroutine
                                        (this,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                    MonoBehaviour_StartCoroutine_2((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
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
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void SetupDebriefingTeam(WinningConditionType, List`1[ScoreTeamEntry], GameStatCounterType) */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_SetupDebriefingTeam
               (WinningConditionDebriefing *this,WinningConditionType__Enum winType,
               List_1_ScoreTeamEntry_ *scoreTeamEntries,GameStatCounterType__Enum counterType,
               MethodInfo *method)

{
  counterType_00 = counterType & 0xff;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__and_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__between_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Winner__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
  uStack_2 = 0;
  apMStack_3[0] = (MVPlayer *)0x0;
  if (scoreTeamEntries != (List_1_ScoreTeamEntry_ *)0x0) {
    if ((scoreTeamEntries->fields)._size == 0) {
      WinningConditionDebriefing_SetupDebriefingNoWinner(this,(MethodInfo *)0x0);
      return;
    }
    WinningConditionDebriefing_Clear(this,(MethodInfo *)0x0);
    pDVar4 = (this->fields).teamWinPrefab;
    this_00 = (this->fields).group;
    if ((this_00 != (CanvasGroup *)0x0) &&
       (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), pGVar5 != (GameObject *)0x0))
    {
      parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar5,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pDVar4 = (DebriefingWinnerGUI *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)pDVar4,parent,0,
                           DebriefingWinnerGUI_MethodInfo__UnityEngine__Object__Instantiate<DebriefingWinnerGUI>_DebriefingWinnerGUI__UnityEngine__Transform__bool_
                          );
      (this->fields).debriefing = pDVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields).debriefing >> 0xc);
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
      scoreTeamEntries_00 =
           WinningConditionDebriefing_GetWinningTeamsFromScoreTeamEntries
                     (this,scoreTeamEntries,counterType_00,(MethodInfo *)0x0);
      if (scoreTeamEntries_00 != (List_1_ScoreTeamEntry_ *)0x0) {
        if ((scoreTeamEntries_00->fields)._size == 1) {
          pDVar4 = (this->fields).debriefing;
          pSVar11 = TM::TM__(StringLiteral_Winner__,(MethodInfo *)0x0);
          pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar12 != (MVNetworkGame *)0x0) &&
             (pMVar13 = (pMVar12->fields).teamManager, pMVar13 != (MVTeamManager *)0x0)) {
            pDVar14 = (pMVar13->fields).teamNames;
            if ((scoreTeamEntries_00->fields)._size == 0) goto code_?;
            pSVar15 = (scoreTeamEntries_00->fields)._items;
            if (pSVar15 != (ScoreTeamEntry__Array *)0x0) {
              if ((int)pSVar15->max_length == 0) goto code_?;
              if ((pSVar15->vector[0] != (ScoreTeamEntry *)0x0) &&
                 (pDVar14 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)) {
                pSVar16 = (String *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,
                                     (pSVar15->vector[0]->fields).team,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                    );
                pSVar11 = mscorlib.dll::System::String::String_Concat_4
                                    (pSVar11,pSVar16,(MethodInfo *)0x0);
                if (pDVar4 != (DebriefingWinnerGUI *)0x0) {
                  pTVar17 = (pDVar4->fields).winnerName;
                  goto code_?;
                }
              }
            }
          }
        }
        else {
          pSVar11 = StringLiteral_It_s_a_tie;
          if ((scoreTeamEntries_00->fields)._size < 3) {
            pSVar11 = mscorlib.dll::System::String::String_Concat_4
                                (StringLiteral_It_s_a_tie,StringLiteral__between_,(MethodInfo *)0x0)
            ;
            for (iVar18 = 0; iVar18 < (scoreTeamEntries_00->fields)._size; iVar18 = iVar18 + 1) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar19 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar19 == (MVGameControllerBase *)0x0) ||
                  (pMVar12 = (pMVar19->fields).game, pMVar12 == (MVNetworkGame *)0x0)) ||
                 (pMVar13 = (pMVar12->fields).teamManager, pMVar13 == (MVTeamManager *)0x0))
              goto code_?;
              pDVar14 = (pMVar13->fields).teamNames;
              if ((scoreTeamEntries_00->fields)._size == 0) goto code_?;
              pSVar15 = (scoreTeamEntries_00->fields)._items;
              if (pSVar15 == (ScoreTeamEntry__Array *)0x0) goto code_?;
              if ((int)pSVar15->max_length == 0) goto code_?;
              if ((pSVar15->vector[0] == (ScoreTeamEntry *)0x0) ||
                 (pDVar14 == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0))
              goto code_?;
              pSVar16 = (String *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,
                                   (pSVar15->vector[0]->fields).team,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                  );
              pSVar11 = mscorlib.dll::System::String::String_Concat_4
                                  (pSVar11,pSVar16,(MethodInfo *)0x0);
              if (iVar18 < (scoreTeamEntries_00->fields)._size + -1) {
                pSVar11 = mscorlib.dll::System::String::String_Concat_4
                                    (pSVar11,StringLiteral__and_,(MethodInfo *)0x0);
              }
            }
          }
          pSVar11 = mscorlib.dll::System::String::String_Concat_4
                              (pSVar11,::StringLiteral__,(MethodInfo *)0x0);
          pDVar4 = (this->fields).debriefing;
          if (pDVar4 != (DebriefingWinnerGUI *)0x0) {
            pTVar17 = (pDVar4->fields).winnerName;
code_?:
            if (pTVar17 != (Text *)0x0) {
              (*(pTVar17->klass->vtable).set_text.methodPtr)(pTVar17,pSVar11);
              pDVar4 = (this->fields).debriefing;
              if (pDVar4 != (DebriefingWinnerGUI *)0x0) {
                DebriefingWinnerGUI::DebriefingWinnerGUI_ActivateScoreImage
                          (pDVar4,winType,(MethodInfo *)0x0);
                if ((scoreTeamEntries_00->fields)._size == 0) goto code_?;
                pSVar15 = (scoreTeamEntries_00->fields)._items;
                if (pSVar15 != (ScoreTeamEntry__Array *)0x0) {
                  if ((int)pSVar15->max_length == 0) goto code_?;
                  if (pSVar15->vector[0] != (ScoreTeamEntry *)0x0) {
                    iVar18 = (pSVar15->vector[0]->fields).counter;
                    if (iVar18 == 0) {
                      iVar20 = iVar18;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pMVar19 = TypeInfo__MVGameControllerBase->static_fields->instance;
                      if (((pMVar19 != (MVGameControllerBase *)0x0) &&
                          (pMVar12 = (pMVar19->fields).game, pMVar12 != (MVNetworkGame *)0x0)) &&
                         ((this_01 = (pMVar12->fields).playerContainer,
                          this_01 != (MVPlayerContainer *)0x0 &&
                          (pDVar21 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                                               (this_01,(MethodInfo *)0x0),
                          pDVar21 !=
                          (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0))))
                      {
                        pDVar22 = (pDVar21->fields)._dictionary;
                        uStack_23._0_4_ = 0.0;
                        uStack_23._4_4_ = 0.0;
                        uStack_24 = 0;
                        if (iRam_? != 0) {
                          uVar6 = (uint)((ulonglong)auStack_25 >> 0xc);
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
                        if (pDVar22 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
                          auStack_25 = (undefined1  [8])pDVar22;
                          FUN_?();
                          pcVar26 = (code *)swi(3);
                          (*pcVar26)();
                          return;
                        }
                        uStack_23 = (Dictionary_2_System_Int32_MVPlayer_ **)
                                    ((ulonglong)(uint)(pDVar22->fields)._version << 0x20);
                        uStack_24 = 0;
                        uStack_2 = (ulonglong)uStack_23;
                        apMStack_3[0] = (MVPlayer *)0x0;
                        auStack_25._0_4_ = 0.0;
                        auStack_25._4_4_ = 0.0;
                        uStack_23 = &pDStack_1;
                        pDStack_1 = pDVar22;
                        while (pDStack_1 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
                          if (uStack_2._4_4_ != (pDStack_1->fields)._version)
                          goto code_?;
                          uVar7 = uStack_2 & 0xffffffff;
                          do {
                            if (pDStack_1 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0)
                            goto code_?;
                            uVar6 = (uint)uVar7;
                            if ((uint)(pDStack_1->fields)._count <= uVar6) {
                              uStack_2 = CONCAT44(uStack_2._4_4_,(pDStack_1->fields)._count + 1);
                              apMStack_3[0] = (MVPlayer *)0x0;
                              goto code_?;
                            }
                            pDVar27 = (pDStack_1->fields)._entries;
                            uVar7 = (ulonglong)(uVar6 + 1);
                            uStack_2 = CONCAT44(uStack_2._4_4_,uVar6 + 1);
                            if (pDVar27 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array
                                           *)0x0) goto code_?;
                            if ((uint)pDVar27->max_length <= uVar6) goto code_?;
                          } while (pDVar27->vector[(int)uVar6].hashCode < 0);
                          apMStack_3[0] = pDVar27->vector[(int)uVar6].value;
                          func_?(apMStack_3,uVar7,pDVar27,pDStack_1,iVar20);
                          if (apMStack_3[0] == (MVPlayer *)0x0) goto code_?;
                          if ((scoreTeamEntries_00->fields)._size == 0) goto code_?;
                          pSVar15 = (scoreTeamEntries_00->fields)._items;
                          if (pSVar15 == (ScoreTeamEntry__Array *)0x0) goto code_?;
                          if ((int)pSVar15->max_length == 0) goto code_?;
                          if (pSVar15->vector[0] == (ScoreTeamEntry *)0x0) goto code_?;
                          if (((apMStack_3[0]->fields)._Team_k__BackingField ==
                               (pSVar15->vector[0]->fields).team) &&
                             (iVar28 = MVPlayer::MVPlayer_GetGameStat
                                                 (apMStack_3[0],counterType_00,(MethodInfo *)0x0),
                             iVar18 < iVar28)) {
                            iVar18 = iVar28;
                            iVar20 = iVar28;
                          }
                        }
                        goto code_?;
                      }
                    }
                    else {
code_?:
                      WinningConditionDebriefing_FormatCount
                                (counterType_00,iVar18,(MethodInfo *)0x0);
                      pDVar4 = (this->fields).debriefing;
                      if ((pDVar4 != (DebriefingWinnerGUI *)0x0) &&
                         (pTVar17 = (pDVar4->fields).winValue, pTVar17 != (Text *)0x0)) {
                        (*(pTVar17->klass->vtable).set_text.methodPtr)();
                        pAVar29 = (this->fields).captureCamera;
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
                        if (pAVar29 != (AvatarCapture *)0x0) {
                          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          if ((pAVar29->fields)._._._._.m_CachedPtr != (void *)0x0) {
                            pAVar29 = (this->fields).captureCamera;
                            if (pAVar29 == (AvatarCapture *)0x0) goto code_?;
                            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject
                                                ((Component *)pAVar29,(MethodInfo *)0x0);
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
                            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                                      ((Object_1 *)pGVar5,0.0,(MethodInfo *)0x0);
                          }
                        }
                        pAVar29 = (this->fields).captureCameraPrefab;
                        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        pAVar29 = (AvatarCapture *)
                                  UnityEngine.CoreModule.dll::UnityEngine::Object::
                                  Object_1_Instantiate_4
                                            ((Object *)pAVar29,
                                             AvatarCapture_MethodInfo__UnityEngine__Object__Instantiate<AvatarCapture>_AvatarCapture_
                                            );
                        (this->fields).captureCamera = pAVar29;
                        if (iRam_? != 0) {
                          uVar6 = (uint)((ulonglong)&(this->fields).captureCamera >> 0xc);
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
                        pAVar29 = (this->fields).captureCamera;
                        if (pAVar29 != (AvatarCapture *)0x0) {
                          AvatarCapture::AvatarCapture_CapturePlayersInTeam
                                    (pAVar29,scoreTeamEntries_00,counterType_00,(MethodInfo *)0x0);
                          team = MVTeam__Enum_None;
                          if ((scoreTeamEntries_00->fields)._size == 1) {
                            if ((scoreTeamEntries_00->fields)._size == 0) {
code_?:
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                                        ((MethodInfo *)0x0);
                              pcVar26 = (code *)swi(3);
                              (*pcVar26)();
                              return;
                            }
                            pSVar15 = (scoreTeamEntries_00->fields)._items;
                            if (pSVar15 != (ScoreTeamEntry__Array *)0x0) {
                              if ((int)pSVar15->max_length == 0) {
code_?:
                                FUN_?();
                                pcVar26 = (code *)swi(3);
                                (*pcVar26)();
                                return;
                              }
                              if (pSVar15->vector[0] != (ScoreTeamEntry *)0x0) {
                                team = (pSVar15->vector[0]->fields).team;
                                goto code_?;
                              }
                            }
                          }
                          else {
code_?:
                            pDVar4 = (this->fields).debriefing;
                            if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            pCVar30 = Styles::Styles_GetTeamColor
                                                ((Color *)auStack_25,team,0,(MethodInfo *)0x0);
                            fVar31 = pCVar30->r;
                            fVar32 = pCVar30->g;
                            fVar33 = pCVar30->b;
                            fVar34 = pCVar30->a;
                            pAVar29 = (this->fields).captureCamera;
                            if (((pAVar29 != (AvatarCapture *)0x0) &&
                                (this_02 = (pAVar29->fields).renderCam, this_02 != (Camera *)0x0))
                               && (value = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                           Camera_get_targetTexture(this_02,(MethodInfo *)0x0),
                                  pDVar4 != (DebriefingWinnerGUI *)0x0)) {
                              fVar35 = fVar31 * _UNK_?;
                              fVar36 = fVar32 * _UNK_?;
                              fVar37 = fVar33 * _UNK_?;
                              pIVar38 = (pDVar4->fields).backgroundImage;
                              if (pIVar38 != (ImageAnimator *)0x0) {
                                uStack_23 = (Dictionary_2_System_Int32_MVPlayer_ **)
                                            CONCAT44(0x3f800000,(float)uStack_23);
                                (pIVar38->fields).startColor.r = fVar31;
                                (pIVar38->fields).startColor.g = fVar32;
                                (pIVar38->fields).startColor.b = fVar33;
                                (pIVar38->fields).startColor.a = fVar34;
                                (pIVar38->fields).endColor.r = fVar35;
                                (pIVar38->fields).endColor.g = fVar36;
                                (pIVar38->fields).endColor.b = fVar37;
                                (pIVar38->fields).endColor.a = 1.0;
                                this_03 = (pDVar4->fields).winnerImage;
                                if (this_03 != (RawImage *)0x0) {
                                  UnityEngine.UI.dll::UnityEngine::UI::RawImage::
                                  RawImage_set_texture(this_03,(Texture *)value,(MethodInfo *)0x0);
                                  routine = WinningConditionDebriefing_ShowDebriefingCoroutine
                                                      (this,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                                  MonoBehaviour_StartCoroutine_2
                                            ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
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
            }
          }
        }
      }
    }
  }
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* IEnumerator ShowDebriefingCoroutine() */

IEnumerator *
Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_ShowDebriefingCoroutine
          (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_d__16);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__WinningConditionDebriefing___ShowDebriefingCoroutine_d__16);
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


/* Void Start() */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_Start
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WinningConditionDebriefing__OnWinningConditionReceived_IWinningCondition_
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
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pAVar4 = (pMVar2->fields).OnWinningConditionFulfilled;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<IWinningCondition>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__WinningConditionDebriefing__OnWinningConditionReceived_IWinningCondition_,
             (MethodInfo *)0x0);
  pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar6 = TypeInfo__System__Action<IWinningCondition>;
  if (pDVar5 == (Delegate *)0x0) {
    (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
  }
  else {
    pAVar4 = (Action_1_IWinningCondition_ *)
             FUN_?(pDVar5,TypeInfo__System__Action<IWinningCondition>);
    if (pAVar4 == (Action_1_IWinningCondition_ *)0x0) {
      FUN_?(pDVar5,pAVar6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pMVar2->fields).OnWinningConditionFulfilled = pAVar4;
    pAVar6 = TypeInfo__System__Action<IWinningCondition>;
    lVar7 = FUN_?(pDVar5,TypeInfo__System__Action<IWinningCondition>);
    if (lVar7 == 0) {
      FUN_?(pDVar5,pAVar6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&(pMVar2->fields).OnWinningConditionFulfilled >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_Update
               (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).debriefing;
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
  if (pDVar1 != (DebriefingWinnerGUI *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pDVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      MVInputWrapper::MVInputWrapper_SuppressShortcutKeys((MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVInputWrapper);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = (MVInputWrapper_InputSuppression *)
               FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
      pIVar3 = (pMVar2->klass->vtable).set_IsSuppressed.methodPtr;
      (*pIVar3)(pMVar2,CONCAT71((int7)((ulonglong)method >> 8),1),
                (pMVar2->klass->vtable).set_IsSuppressed.method,pIVar3,unaff_RBX);
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVInputWrapper);
      }
      TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed = pMVar2;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed
                      >> 0xc);
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
      return;
    }
  }
  return;
}


/* IEnumerator WaitForFadeOut() */

IEnumerator *
Assembly-CSharp.dll::WinningConditionDebriefing::WinningConditionDebriefing_WaitForFadeOut
          (WinningConditionDebriefing *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WinningConditionDebriefing___WaitForFadeOut_d__19);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__WinningConditionDebriefing___WaitForFadeOut_d__19)
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


/* Void <ShowDebriefingCoroutine>b__16_0(Single) */

void Assembly-CSharp.dll::WinningConditionDebriefing::
     WinningConditionDebriefing__ShowDebriefingCoroutine_b__16_0
               (WinningConditionDebriefing *this,float t,MethodInfo *method)

{
  obj = (this->fields).group;
  if (obj == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                  ,in_RDX,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,t);
  return;
}


/* Void <ShowDebriefingCoroutine>b__16_1(Single) */

void Assembly-CSharp.dll::WinningConditionDebriefing::
     WinningConditionDebriefing__ShowDebriefingCoroutine_b__16_1
               (WinningConditionDebriefing *this,float t,MethodInfo *method)

{
  this_00 = (this->fields).group;
  if (this_00 == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
            (this_00,t,(MethodInfo *)0x0);
  if (t == 0.0) {
    WinningConditionDebriefing_Clear(this,(MethodInfo *)0x0);
  }
  return;
}

