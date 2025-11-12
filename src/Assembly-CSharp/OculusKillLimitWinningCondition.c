
/* Void InitializeGameUI(RectTransform) */

void Assembly-CSharp.dll::OculusKillLimitWinningCondition::
     OculusKillLimitWinningCondition_InitializeGameUI
               (OculusKillLimitWinningCondition *this,RectTransform *lobbyState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_determine_collectibles);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = -1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar3->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    pOVar4 = MVWorldObject.dll::WinningConditionManager::
              WinningConditionManager_GetSingletonWinnerConditionByType
                        (this_00,
                         OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                        );
    if (pOVar4 == (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Failed_to_determine_collectibles,(MethodInfo *)0x0);
    }
    else {
      iVar1 = *(int32_t *)&pOVar4[1].monitor;
    }
    bVar5 = cRam_? == '\0';
    (this->fields).oculusKillLimit = iVar1;
    if (bVar5) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       ((this_01 = (pMVar3->fields).teamManager, this_01 != (MVTeamManager *)0x0 &&
        (pLVar6 = MVTeamManager::MVTeamManager_GetTeamList(this_01,(MethodInfo *)0x0),
        pLVar6 != (List_1_MV_WorldObject_MVTeam_ *)0x0)))) {
      if ((pLVar6->fields)._size < 2) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar2 == (MVGameControllerBase *)0x0) ||
           (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0))
        goto code_?;
        pGVar7 = (pMVar3->fields).gameStatCounterManager;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
             (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
            (pMVar8 = (pMVar3->fields).playerContainer, pMVar8 == (MVPlayerContainer *)0x0)) ||
           (pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar8,(MethodInfo *)0x0)
           , pMVar9 == (MVLocalPlayer *)0x0)) goto code_?;
        team = (pMVar9->fields)._._Team_k__BackingField;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar2 == (MVGameControllerBase *)0x0) ||
            (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
           (pMVar8 = (pMVar3->fields).playerContainer, pMVar8 == (MVPlayerContainer *)0x0))
        goto code_?;
        uVar10 = 0;
        pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar8,(MethodInfo *)0x0);
        if ((pMVar9 == (MVLocalPlayer *)0x0) || (pGVar7 == (GameStatCounterManager *)0x0))
        goto code_?;
        value = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetActorCount
                          (pGVar7,(GameStatCounterType__Enum)
                                  CONCAT71((int7)((ulonglong)uVar10 >> 8),6),team,
                           (pMVar9->fields)._._ActorNr_k__BackingField,(MethodInfo *)0x0);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar2 == (MVGameControllerBase *)0x0) ||
           (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0))
        goto code_?;
        pGVar7 = (pMVar3->fields).gameStatCounterManager;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar2 == (MVGameControllerBase *)0x0) ||
            (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
           (pMVar8 = (pMVar3->fields).playerContainer, pMVar8 == (MVPlayerContainer *)0x0))
        goto code_?;
        uVar10 = 0;
        pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar8,(MethodInfo *)0x0);
        if ((pMVar9 == (MVLocalPlayer *)0x0) || (pGVar7 == (GameStatCounterManager *)0x0))
        goto code_?;
        value = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                          (pGVar7,(GameStatCounterType__Enum)
                                  CONCAT71((int7)((ulonglong)uVar10 >> 8),6),
                           (pMVar9->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
      }
      pTVar11 = (this->fields).progress;
      value_00 = (float)value / (float)(this->fields).oculusKillLimit;
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
      auStack_12 = (undefined1  [8])0x0;
      uStack_13._0_4_ = 0;
      uStack_13._4_4_ = 0;
      pSVar14 = mscorlib.dll::System::Number::Number_FormatInt32
                          (value,(ReadOnlySpan_1_Char_ *)auStack_12,(IFormatProvider *)0x0,
                           (MethodInfo *)0x0);
      str2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields).oculusKillLimit,(MethodInfo *)0x0);
      pSVar14 = mscorlib.dll::System::String::String_Concat_5
                          (pSVar14,::StringLiteral__,str2,(MethodInfo *)0x0);
      if (pTVar11 != (Text *)0x0) {
        (*(pTVar11->klass->vtable).set_text.methodPtr)(pTVar11,pSVar14);
        pPVar15 = (this->fields).progressBar;
        if (pPVar15 != (ProgressBar *)0x0) {
          if (value_00 < 0.0) {
            value_00 = 0.0;
          }
          else if (_UNK_? < value_00) {
            value_00 = _UNK_?;
          }
          this_02 = (pPVar15->fields).progressBar;
          (pPVar15->fields).progress = value_00;
          if (this_02 != (Scrollbar *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                      (this_02,value_00,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&
                            WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                            ,lobbyState);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (this_03 == (MVWorldObjectClientManager *)0x0) {
              FUN_?();
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            roundCube = MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetSingletonWorldObjectRef
                                  (this_03,
                                   WorldObjectClientRef<MVRoundCube>_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObjectRef<MVRoundCube>__
                                  );
            if (roundCube == (WorldObjectClientRef_1_System_Object_ *)0x0) {
              return;
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer__UnityEngine__Transform__bool_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pRVar17 = (this->fields)._.roundTimerPrefab;
            pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar18 != (Transform *)0x0) {
              pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                  (pTVar18,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              pRVar17 = (RoundTimer *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                  ((Object *)pRVar17,pTVar18,0,
                                   RoundTimer_MethodInfo__UnityEngine__Object__Instantiate<RoundTimer>_RoundTimer__UnityEngine__Transform__bool_
                                  );
              bVar5 = iRam_? != 0;
              (this->fields)._.roundTimer = pRVar17;
              if (bVar5) {
                uVar19 = (uint)((ulonglong)&(this->fields)._.roundTimer >> 0xc);
                puVar20 = (ulonglong *)((ulonglong)((uVar19 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar21 = *puVar20;
                  LOCK();
                  uVar22 = *puVar20;
                  if (uVar21 == uVar22) {
                    *puVar20 = uVar21 | 1L << (uVar19 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar21 != uVar22);
              }
              pRVar17 = (this->fields)._.roundTimer;
              if (pRVar17 != (RoundTimer *)0x0) {
                pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pRVar17,(MethodInfo *)0x0);
                if (pTVar18 != (Transform *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar23 = (pTVar18->fields)._._.m_CachedPtr;
                  if (pvVar23 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar18,(MethodInfo *)0x0);
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  pcVar16 = pcRam_?;
                  if (pcRam_? == (code *)0x0) {
                    pcVar16 = (code *)FUN_?(&UNK_?);
                    if (pcVar16 == (code *)0x0) {
                      uVar10 = func_?(&UNK_?);
                      FUN_?(uVar10,0);
                      pcVar16 = (code *)swi(3);
                      (*pcVar16)();
                      return;
                    }
                  }
                  pcRam_? = pcVar16;
                  (*pcRam_?)(pvVar23);
                  pRVar17 = (this->fields)._.roundTimer;
                  if (pRVar17 != (RoundTimer *)0x0) {
                    RoundTimer::RoundTimer_Initialize
                              (pRVar17,(WorldObjectClientRef_1_MVRoundCube_ *)roundCube,
                               (MethodInfo *)0x0);
                    pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)this,(MethodInfo *)0x0);
                    if (pTVar18 != (Transform *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar23 = (pTVar18->fields)._._.m_CachedPtr;
                      if (pvVar23 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar18,(MethodInfo *)0x0);
                        pcVar16 = (code *)swi(3);
                        (*pcVar16)();
                        return;
                      }
                      pcVar16 = pcRam_?;
                      if (pcRam_? == (code *)0x0) {
                        pcVar16 = (code *)FUN_?(&UNK_?);
                        if (pcVar16 == (code *)0x0) {
                          uVar10 = func_?(&UNK_?);
                          FUN_?(uVar10,0);
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                      }
                      pcRam_? = pcVar16;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*pcRam_?)(pvVar23);
                      return;
                    }
                  }
                }
              }
            }
            FUN_?();
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void RoundEndReset() */

void Assembly-CSharp.dll::OculusKillLimitWinningCondition::
     OculusKillLimitWinningCondition_RoundEndReset
               (OculusKillLimitWinningCondition *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).progress;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_2[0]._pointer._value = (void *)0x0;
  aRStack_2[0]._length = 0;
  aRStack_2[0]._12_4_ = 0;
  str0 = mscorlib.dll::System::Number::Number_FormatInt32
                   (0,aRStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  str2 = mscorlib.dll::System::Int32::Int32_ToString
                   ((Int32 *)&(this->fields).oculusKillLimit,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_5(str0,::StringLiteral__,str2,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1);
    pPVar3 = (this->fields).progressBar;
    if (pPVar3 != (ProgressBar *)0x0) {
      value = 0.0 / (float)(this->fields).oculusKillLimit;
      if (value < 0.0) {
        value = 0.0;
      }
      else if (_UNK_? < value) {
        value = _UNK_?;
      }
      this_00 = (pPVar3->fields).progressBar;
      (pPVar3->fields).progress = value;
      if (this_00 != (Scrollbar *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                  (this_00,value,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pRVar4 = (this->fields)._.roundTimer;
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
        if (pRVar4 != (RoundTimer *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pRVar4->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pRVar4 = (this->fields)._.roundTimer;
            if (pRVar4 == (RoundTimer *)0x0) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            RoundTimer::RoundTimer_ResetTimeNotifications(pRVar4,(MethodInfo *)0x0);
          }
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateValue(Int32) */

void Assembly-CSharp.dll::OculusKillLimitWinningCondition::
     OculusKillLimitWinningCondition_UpdateValue
               (OculusKillLimitWinningCondition *this,int32_t newValue,MethodInfo *method)

{
  aIStackX_10[0].m_value = newValue;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_determine_collectibles);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
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
     (this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    pOVar3 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (this_00,
                        OculusKillLimitClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<OculusKillLimitClient>__
                       );
    if (pOVar3 == (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Failed_to_determine_collectibles,(MethodInfo *)0x0);
    }
    else if (*(int *)&pOVar3[1].monitor != (this->fields).oculusKillLimit) {
      (this->fields).oculusKillLimit = *(int *)&pOVar3[1].monitor;
    }
    pTVar4 = (this->fields).progress;
    pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
    str2 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).oculusKillLimit,(MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::String::String_Concat_5
                       (pSVar5,::StringLiteral__,str2,(MethodInfo *)0x0);
    if (pTVar4 != (Text *)0x0) {
      (*(pTVar4->klass->vtable).set_text.methodPtr)
                (pTVar4,pSVar5,(pTVar4->klass->vtable).set_text.method);
      pPVar6 = (this->fields).progressBar;
      if (pPVar6 != (ProgressBar *)0x0) {
        fVar7 = (float)newValue / (float)(this->fields).oculusKillLimit;
        if (fVar7 < 0.0) {
          fVar7 = 0.0;
        }
        else if (_UNK_? < fVar7) {
          fVar7 = _UNK_?;
        }
        this_01 = (pPVar6->fields).progressBar;
        (pPVar6->fields).progress = fVar7;
        if (this_01 != (Scrollbar *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<float>_System__Single___float_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          cVar8 = FUN_?(&(this_01->fields).m_Size);
          if (cVar8 != '\0') {
            UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_UpdateVisuals
                      (this_01,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* GameStatCounterType get_StatType() */

GameStatCounterType__Enum
Assembly-CSharp.dll::OculusKillLimitWinningCondition::OculusKillLimitWinningCondition_get_StatType
          (OculusKillLimitWinningCondition *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)in_EAX >> 8),6);
}

