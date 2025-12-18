
/* Void CheatSoftwareRunningDetected() */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_CheatSoftwareRunningDetected
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
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
    pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar4 != (GameSessionData *)0x0) {
      if ((pGVar4->fields).profileID < 1) {
code_?:
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__AsyncWWWManager);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__MVGameControllerBase____c__DisplayClass181_0___ApplicationQuit_b__0__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MVGameControllerBase____c__DisplayClass181_0);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Application_quit);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar5 = (Object *)FUN_?(TypeInfo__MVGameControllerBase____c__DisplayClass181_0);
        if (pOVar5 != (Object *)0x0) {
          bVar6 = iRam_? != 0;
          pOVar5[1].klass = (Object__Class *)0x0;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
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
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Application_quit,(MethodInfo *)0x0);
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar1 != (MVGameControllerBase *)0x0) {
            if ((pMVar1->fields).quitHasBeenCalled == 0) {
              (pMVar1->fields).quitHasBeenCalled = 1;
              this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_00,pOVar5,
                         MethodInfo__MVGameControllerBase____c__DisplayClass181_0___ApplicationQuit_b__0__
                         ,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                FUN_?();
              }
              AsyncWWWManager::AsyncWWWManager_ShutDown((Action *)this_00,(MethodInfo *)0x0);
            }
            return;
          }
        }
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      this = (Dictionary_2_System_Byte_System_Object_ *)
             FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                          );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      auStackX_18[0] = 3;
      pOVar5 = (Object *)FUN_?(uRam_?,auStackX_18);
      if (this != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar12 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xb4);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this,0xb4,pOVar5,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
        pPVar13 = (pMVar3->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar13 != (PhotonPeer *)0x0) {
          (*(pPVar13->klass->vtable).SendOperation.methodPtr)
                    (pPVar13,CONCAT71((int7)((ulonglong)uVar12 >> 8),0x3a),this,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar13->klass->vtable).SendOperation.method);
          pPVar13 = (pMVar3->fields).peer;
          if (pPVar13 != (PhotonPeer *)0x0) {
            (*(pPVar13->klass->vtable).SendOutgoingCommands.methodPtr)();
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ExecuteBan(CheatType) */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_ExecuteBan
               (CheatType__Enum cheatType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
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
    pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar4 != (GameSessionData *)0x0) {
      if ((pGVar4->fields).profileID < 1) {
code_?:
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__AsyncWWWManager);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__MVGameControllerBase____c__DisplayClass181_0___ApplicationQuit_b__0__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MVGameControllerBase____c__DisplayClass181_0);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Application_quit);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar5 = (Object *)FUN_?(TypeInfo__MVGameControllerBase____c__DisplayClass181_0);
        if (pOVar5 != (Object *)0x0) {
          bVar6 = iRam_? != 0;
          pOVar5[1].klass = (Object__Class *)0x0;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
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
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Application_quit,(MethodInfo *)0x0);
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar1 != (MVGameControllerBase *)0x0) {
            if ((pMVar1->fields).quitHasBeenCalled == 0) {
              (pMVar1->fields).quitHasBeenCalled = 1;
              this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_00,pOVar5,
                         MethodInfo__MVGameControllerBase____c__DisplayClass181_0___ApplicationQuit_b__0__
                         ,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                FUN_?();
              }
              AsyncWWWManager::AsyncWWWManager_ShutDown((Action *)this_00,(MethodInfo *)0x0);
            }
            return;
          }
        }
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      this = (Dictionary_2_System_Byte_System_Object_ *)
             FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                          );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      auStackX_18[0] = (char)cheatType;
      pOVar5 = (Object *)FUN_?(uRam_?,auStackX_18);
      if (this != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar12 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xb4);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this,0xb4,pOVar5,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
        pPVar13 = (pMVar3->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar13 != (PhotonPeer *)0x0) {
          (*(pPVar13->klass->vtable).SendOperation.methodPtr)
                    (pPVar13,CONCAT71((int7)((ulonglong)uVar12 >> 8),0x3a),this,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar13->klass->vtable).SendOperation.method);
          pPVar13 = (pMVar3->fields).peer;
          if (pPVar13 != (PhotonPeer *)0x0) {
            (*(pPVar13->klass->vtable).SendOutgoingCommands.methodPtr)();
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Init() */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_Init(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__CheatHandling__ObscuredCheatingDetected__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CheatHandling__SpeedHackDetected__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar1,(Object *)0x0,MethodInfo__CheatHandling__SpeedHackDetected__,(MethodInfo *)0x0);
  pSVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
           SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
  if (pSVar2 != (SpeedHackDetector *)0x0) {
    shotsTillCooldown = (pSVar2->fields).coolDown;
    pSVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
             SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
    if (pSVar2 != (SpeedHackDetector *)0x0) {
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
      SpeedHackDetector_StartDetectionInternal
                (pSVar2,(UnityAction *)pNVar1,_UNK_?,3,shotsTillCooldown,(MethodInfo *)0x0);
      pNVar1 = (NavMesh_OnNavMeshPreUpdate *)
               FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar1,(Object *)0x0,MethodInfo__CheatHandling__ObscuredCheatingDetected__,
                 (MethodInfo *)0x0);
      this = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
             ObscuredCheatingDetector::ObscuredCheatingDetector_get_GetOrCreateInstance
                       ((MethodInfo *)0x0);
      if (this != (ObscuredCheatingDetector *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral__ACTk__Obscured_Cheating_Detecto);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral__ACTk__Obscured_Cheating_Detecto);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral__ACTk__Obscured_Cheating_Detecto);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral__ACTk__Obscured_Cheating_Detecto);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((this->fields)._.isRunning == 0) {
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                            ((Behaviour *)this,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            bVar3 = (this->fields)._.detectionEventHasListener;
            if (pNVar1 == (NavMesh_OnNavMeshPreUpdate *)0x0) {
              if (bVar3 == 0) {
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                          ((Object *)StringLiteral__ACTk__Obscured_Cheating_Detecto,(Object_1 *)this
                           ,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                                ,0,0);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (this == (ObscuredCheatingDetector *)0x0) {
                  FUN_?();
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pvVar5 = (this->fields)._._._._._.m_CachedPtr;
                if (pvVar5 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
                (*pcRam_?)(pvVar5,0);
                return;
              }
            }
            else if (bVar3 != 0) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                        ((Object *)StringLiteral__ACTk__Obscured_Cheating_Detecto,(Object_1 *)this,
                         (MethodInfo *)0x0);
            }
            bVar7 = iRam_? != 0;
            (this->fields)._.detectionAction = (UnityAction *)pNVar1;
            if (bVar7) {
              uVar8 = (uint)((ulonglong)&(this->fields)._.detectionAction >> 0xc);
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
            (this->fields)._.isRunning = 1;
            (this->fields)._.started = 1;
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
        }
        else if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug,this,0);
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
        if (TypeInfo__UnityEngine__Debug->static_fields->s_Logger == (ILogger_1 *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FUN_?();
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ObscuredCheatingDetected() */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_ObscuredCheatingDetected(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
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
    pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar4 != (GameSessionData *)0x0) {
      if ((pGVar4->fields).profileID < 1) {
code_?:
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__AsyncWWWManager);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__MVGameControllerBase____c__DisplayClass181_0___ApplicationQuit_b__0__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MVGameControllerBase____c__DisplayClass181_0);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Application_quit);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar5 = (Object *)FUN_?(TypeInfo__MVGameControllerBase____c__DisplayClass181_0);
        if (pOVar5 != (Object *)0x0) {
          bVar6 = iRam_? != 0;
          pOVar5[1].klass = (Object__Class *)0x0;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
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
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Application_quit,(MethodInfo *)0x0);
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar1 != (MVGameControllerBase *)0x0) {
            if ((pMVar1->fields).quitHasBeenCalled == 0) {
              (pMVar1->fields).quitHasBeenCalled = 1;
              this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_00,pOVar5,
                         MethodInfo__MVGameControllerBase____c__DisplayClass181_0___ApplicationQuit_b__0__
                         ,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                FUN_?();
              }
              AsyncWWWManager::AsyncWWWManager_ShutDown((Action *)this_00,(MethodInfo *)0x0);
            }
            return;
          }
        }
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      this = (Dictionary_2_System_Byte_System_Object_ *)
             FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                          );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      auStackX_18[0] = 1;
      pOVar5 = (Object *)FUN_?(uRam_?,auStackX_18);
      if (this != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar12 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xb4);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this,0xb4,pOVar5,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
        pPVar13 = (pMVar3->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar13 != (PhotonPeer *)0x0) {
          (*(pPVar13->klass->vtable).SendOperation.methodPtr)
                    (pPVar13,CONCAT71((int7)((ulonglong)uVar12 >> 8),0x3a),this,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar13->klass->vtable).SendOperation.method);
          pPVar13 = (pMVar3->fields).peer;
          if (pPVar13 != (PhotonPeer *)0x0) {
            (*(pPVar13->klass->vtable).SendOutgoingCommands.methodPtr)();
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SpeedHackDetected() */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_SpeedHackDetected(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
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
    pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar4 != (GameSessionData *)0x0) {
      if ((pGVar4->fields).profileID < 1) {
code_?:
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__AsyncWWWManager);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__MVGameControllerBase____c__DisplayClass181_0___ApplicationQuit_b__0__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MVGameControllerBase____c__DisplayClass181_0);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Application_quit);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar5 = (Object *)FUN_?(TypeInfo__MVGameControllerBase____c__DisplayClass181_0);
        if (pOVar5 != (Object *)0x0) {
          bVar6 = iRam_? != 0;
          pOVar5[1].klass = (Object__Class *)0x0;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
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
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Application_quit,(MethodInfo *)0x0);
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar1 != (MVGameControllerBase *)0x0) {
            if ((pMVar1->fields).quitHasBeenCalled == 0) {
              (pMVar1->fields).quitHasBeenCalled = 1;
              this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_00,pOVar5,
                         MethodInfo__MVGameControllerBase____c__DisplayClass181_0___ApplicationQuit_b__0__
                         ,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                FUN_?();
              }
              AsyncWWWManager::AsyncWWWManager_ShutDown((Action *)this_00,(MethodInfo *)0x0);
            }
            return;
          }
        }
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      this = (Dictionary_2_System_Byte_System_Object_ *)
             FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                          );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      auStackX_18[0] = 0;
      pOVar5 = (Object *)FUN_?(uRam_?,auStackX_18);
      if (this != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar12 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xb4);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this,0xb4,pOVar5,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
        pPVar13 = (pMVar3->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar13 != (PhotonPeer *)0x0) {
          (*(pPVar13->klass->vtable).SendOperation.methodPtr)
                    (pPVar13,CONCAT71((int7)((ulonglong)uVar12 >> 8),0x3a),this,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar13->klass->vtable).SendOperation.method);
          pPVar13 = (pMVar3->fields).peer;
          if (pPVar13 != (PhotonPeer *)0x0) {
            (*(pPVar13->klass->vtable).SendOutgoingCommands.methodPtr)();
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void TextureHackDetected() */

void Assembly-CSharp.dll::CheatHandling::CheatHandling_TextureHackDetected(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
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
    pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar4 != (GameSessionData *)0x0) {
      if ((pGVar4->fields).profileID < 1) {
code_?:
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__AsyncWWWManager);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__MVGameControllerBase____c__DisplayClass181_0___ApplicationQuit_b__0__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__MVGameControllerBase____c__DisplayClass181_0);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Application_quit);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar5 = (Object *)FUN_?(TypeInfo__MVGameControllerBase____c__DisplayClass181_0);
        if (pOVar5 != (Object *)0x0) {
          bVar6 = iRam_? != 0;
          pOVar5[1].klass = (Object__Class *)0x0;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
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
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Application_quit,(MethodInfo *)0x0);
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar1 != (MVGameControllerBase *)0x0) {
            if ((pMVar1->fields).quitHasBeenCalled == 0) {
              (pMVar1->fields).quitHasBeenCalled = 1;
              this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_00,pOVar5,
                         MethodInfo__MVGameControllerBase____c__DisplayClass181_0___ApplicationQuit_b__0__
                         ,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                FUN_?();
              }
              AsyncWWWManager::AsyncWWWManager_ShutDown((Action *)this_00,(MethodInfo *)0x0);
            }
            return;
          }
        }
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      this = (Dictionary_2_System_Byte_System_Object_ *)
             FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                          );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      auStackX_18[0] = 2;
      pOVar5 = (Object *)FUN_?(uRam_?,auStackX_18);
      if (this != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar12 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xb4);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this,0xb4,pOVar5,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
        pPVar13 = (pMVar3->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar13 != (PhotonPeer *)0x0) {
          (*(pPVar13->klass->vtable).SendOperation.methodPtr)
                    (pPVar13,CONCAT71((int7)((ulonglong)uVar12 >> 8),0x3a),this,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar13->klass->vtable).SendOperation.method);
          pPVar13 = (pMVar3->fields).peer;
          if (pPVar13 != (PhotonPeer *)0x0) {
            (*(pPVar13->klass->vtable).SendOutgoingCommands.methodPtr)();
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

