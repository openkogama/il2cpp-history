
/* Void CreateLimbEvents(AvatarLimbManager, AvatarLimbManager+AvatarLookDirectionHandler,
   AvatarLimbManager+AvatarPointingHandler, AvatarLimbManager+AvatarHeadRotationHandler,
   AvatarLimbManager+LimbRotator) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_CreateLimbEvents
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,AvatarLimbManager *limbManager,
               AvatarLimbManager_AvatarLookDirectionHandler *lookDirectionHandler,
               AvatarLimbManager_AvatarPointingHandler *pointingHandler,
               AvatarLimbManager_AvatarHeadRotationHandler *headRotationHandler,
               AvatarLimbManager_LimbRotator *limbRotator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnNodEmoteStart__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnShakeEmoteStart__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnWaveEmoteStart__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__HandleNewAngle_float_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__SetIsActive_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Add_EmoteTypes__AvatarLimbManagerLocal__AvatarEmoteRecogniser_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AvatarLimbManagerLocal_AvatarEmoteRecogniser *)
            FUN_?(TypeInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser);
  fVar2 = _UNK_?;
  fVar3 = TypeRef__System__Activator__T._0_4_;
  uVar4 = CONCAT71((int7)((ulonglong)in_stack_5 >> 8),1);
  (pAVar1->fields).angleSensitivity = 15.0;
  (pAVar1->fields).resetInterval = 2.0;
  AvatarLimbManagerLocal+AvatarEmoteRecogniser::
  AvatarLimbManagerLocal_AvatarEmoteRecogniser_Initlialize
            (pAVar1,limbManager,fVar2,fVar3,4,1,0,(MethodInfo *)0x0);
  if (lookDirectionHandler != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    pAVar6 = (lookDirectionHandler->fields).OnLookDirectionYawChange;
    pDVar7 = (Delegate *)FUN_?(TypeInfo__System__Action<float>);
    FUN_?(pDVar7,pAVar1);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar6,pDVar7,(MethodInfo *)0x0);
    pAVar8 = TypeInfo__System__Action<float>;
    if (pDVar7 == (Delegate *)0x0) {
      (lookDirectionHandler->fields).OnLookDirectionYawChange = (Action_1_Single_ *)0x0;
    }
    else {
      pAVar6 = (Action_1_Single_ *)FUN_?(pDVar7,TypeInfo__System__Action<float>);
      if (pAVar6 == (Action_1_Single_ *)0x0) {
        FUN_?(pDVar7,pAVar8);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      (lookDirectionHandler->fields).OnLookDirectionYawChange = pAVar6;
      pAVar8 = TypeInfo__System__Action<float>;
      lVar10 = FUN_?(pDVar7,TypeInfo__System__Action<float>);
      if (lVar10 == 0) {
        FUN_?(pDVar7,pAVar8);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar11 = (uint)((ulonglong)&lookDirectionHandler->fields >> 0xc);
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
    pAVar16 = (pAVar1->fields).OnStartEvent;
    pNVar17 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    uVar18 = 0;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar17,(Object *)this,
               MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnWaveEmoteStart__,
               (MethodInfo *)0x0);
    pAVar16 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar16,(Delegate *)pNVar17,(MethodInfo *)0x0);
    if (pAVar16 == (Action *)0x0) {
      (pAVar1->fields).OnStartEvent = (Action *)0x0;
    }
    else {
      pAVar19 = (Action *)0x0;
      if (pAVar16->klass == TypeInfo__System__Action) {
        pAVar19 = pAVar16;
      }
      if (pAVar19 == (Action *)0x0) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      (pAVar1->fields).OnStartEvent = pAVar19;
      pAVar19 = (Action *)0x0;
      if (pAVar16->klass == TypeInfo__System__Action) {
        pAVar19 = pAVar16;
      }
      if (pAVar19 == (Action *)0x0) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar11 = (uint)((ulonglong)&pAVar1->fields >> 0xc);
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
    if (pointingHandler != (AvatarLimbManager_AvatarPointingHandler *)0x0) {
      bVar20 = (TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal->_1).naturalAligment;
      if (((pointingHandler->klass->_1).naturalAligment < bVar20) ||
         ((pointingHandler->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] !=
          (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal)) {
        FUN_?(pointingHandler);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pDVar7 = (Delegate *)pointingHandler[1].fields.limbRotator;
      b = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
      FUN_?(b,pAVar1);
      pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar7,b,(MethodInfo *)0x0);
      pAVar21 = TypeInfo__System__Action<bool>;
      if (pDVar7 == (Delegate *)0x0) {
        pointingHandler[1].fields.limbRotator = (AvatarLimbManager_LimbRotator *)0x0;
      }
      else {
        pAVar22 = (AvatarLimbManager_LimbRotator *)
                  FUN_?(pDVar7,TypeInfo__System__Action<bool>);
        if (pAVar22 == (AvatarLimbManager_LimbRotator *)0x0) {
          FUN_?(pDVar7,pAVar21);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pointingHandler[1].fields.limbRotator = pAVar22;
        pAVar21 = TypeInfo__System__Action<bool>;
        lVar10 = FUN_?(pDVar7,TypeInfo__System__Action<bool>);
        if (lVar10 == 0) {
          FUN_?(pDVar7,pAVar21);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar11 = (uint)((ulonglong)&pointingHandler[1].fields.limbRotator >> 0xc);
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
      pDVar23 = (this->fields).emoteRecognisers;
      if (pDVar23 != (Dictionary_2_EmoteTypes_AvatarLimbManagerLocal_AvatarEmoteRecogniser_ *)0x0) {
        pMVar24 = MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Add_EmoteTypes__AvatarLimbManagerLocal__AvatarEmoteRecogniser_
                  ->klass->rgctx_data[0x22].method;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__TryInsert
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar23,
                   (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar24 >> 8),3),(Object *)pAVar1,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar18 >> 8),2),pMVar24);
        pAVar1 = (AvatarLimbManagerLocal_AvatarEmoteRecogniser *)
                  FUN_?(TypeInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser);
        fVar2 = _UNK_?;
        fVar3 = TypeRef__System__Activator__T._0_4_;
        uVar12 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        (pAVar1->fields).angleSensitivity = 15.0;
        (pAVar1->fields).resetInterval = 2.0;
        AvatarLimbManagerLocal+AvatarEmoteRecogniser::
        AvatarLimbManagerLocal_AvatarEmoteRecogniser_Initlialize
                  (pAVar1,limbManager,fVar2,fVar3,4,1,1,(MethodInfo *)0x0);
        pAVar6 = (lookDirectionHandler->fields).OnLookDirectionYawChange;
        pDVar7 = (Delegate *)FUN_?(TypeInfo__System__Action<float>);
        FUN_?(pDVar7,pAVar1);
        pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar6,pDVar7,(MethodInfo *)0x0);
        pAVar8 = TypeInfo__System__Action<float>;
        if (pDVar7 == (Delegate *)0x0) {
          (lookDirectionHandler->fields).OnLookDirectionYawChange = (Action_1_Single_ *)0x0;
        }
        else {
          pAVar6 = (Action_1_Single_ *)FUN_?(pDVar7,TypeInfo__System__Action<float>);
          if (pAVar6 == (Action_1_Single_ *)0x0) {
            FUN_?(pDVar7,pAVar8);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          (lookDirectionHandler->fields).OnLookDirectionYawChange = pAVar6;
          pAVar8 = TypeInfo__System__Action<float>;
          lVar10 = FUN_?(pDVar7,TypeInfo__System__Action<float>);
          if (lVar10 == 0) {
            FUN_?(pDVar7,pAVar8);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)&lookDirectionHandler->fields >> 0xc);
          uVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar25 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar13 * 8 + 0xADDR);
            LOCK();
            bVar15 = uVar25 == *puVar14;
            if (bVar15) {
              *puVar14 = uVar25 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar15);
        }
        pAVar16 = (pAVar1->fields).OnStartEvent;
        pNVar17 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        uVar4 = 0;
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar17,(Object *)this,
                   MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnShakeEmoteStart__,
                   (MethodInfo *)0x0);
        pAVar16 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar16,(Delegate *)pNVar17,(MethodInfo *)0x0);
        if (pAVar16 == (Action *)0x0) {
          (pAVar1->fields).OnStartEvent = (Action *)0x0;
        }
        else {
          pAVar19 = (Action *)0x0;
          if (pAVar16->klass == TypeInfo__System__Action) {
            pAVar19 = pAVar16;
          }
          if (pAVar19 == (Action *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          (pAVar1->fields).OnStartEvent = pAVar19;
          pAVar19 = (Action *)0x0;
          if (pAVar16->klass == TypeInfo__System__Action) {
            pAVar19 = pAVar16;
          }
          if (pAVar19 == (Action *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)&pAVar1->fields >> 0xc);
          uVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar25 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar13 * 8 + 0xADDR);
            LOCK();
            bVar15 = uVar25 == *puVar14;
            if (bVar15) {
              *puVar14 = uVar25 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar15);
        }
        pDVar23 = (this->fields).emoteRecognisers;
        if (pDVar23 != (Dictionary_2_EmoteTypes_AvatarLimbManagerLocal_AvatarEmoteRecogniser_ *)0x0)
        {
          pMVar24 = MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Add_EmoteTypes__AvatarLimbManagerLocal__AvatarEmoteRecogniser_
                    ->klass->rgctx_data[0x22].method;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
          ::Dictionary_2_System_ByteEnum_System_Object__TryInsert
                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar23,
                     (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar24 >> 8),1),(Object *)pAVar1,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),pMVar24);
          pAVar1 = (AvatarLimbManagerLocal_AvatarEmoteRecogniser *)
                    FUN_?(TypeInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser);
          fVar2 = _UNK_?;
          fVar3 = TypeRef__System__Activator__T._0_4_;
          uVar12 = uVar12 & 0xffffffffffffff00;
          (pAVar1->fields).angleSensitivity = 15.0;
          (pAVar1->fields).resetInterval = 2.0;
          AvatarLimbManagerLocal+AvatarEmoteRecogniser::
          AvatarLimbManagerLocal_AvatarEmoteRecogniser_Initlialize
                    (pAVar1,limbManager,fVar2,fVar3,4,0,1,(MethodInfo *)0x0);
          pAVar6 = (lookDirectionHandler->fields).OnLookDirectionPitchChange;
          pDVar7 = (Delegate *)FUN_?(TypeInfo__System__Action<float>);
          FUN_?(pDVar7,pAVar1);
          pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar6,pDVar7,(MethodInfo *)0x0);
          pAVar8 = TypeInfo__System__Action<float>;
          if (pDVar7 == (Delegate *)0x0) {
            (lookDirectionHandler->fields).OnLookDirectionPitchChange = (Action_1_Single_ *)0x0;
          }
          else {
            pAVar6 = (Action_1_Single_ *)FUN_?(pDVar7,TypeInfo__System__Action<float>);
            if (pAVar6 == (Action_1_Single_ *)0x0) {
              FUN_?(pDVar7,pAVar8);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            (lookDirectionHandler->fields).OnLookDirectionPitchChange = pAVar6;
            pAVar8 = TypeInfo__System__Action<float>;
            lVar10 = FUN_?(pDVar7,TypeInfo__System__Action<float>);
            if (lVar10 == 0) {
              FUN_?(pDVar7,pAVar8);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar11 = (uint)((ulonglong)&(lookDirectionHandler->fields).OnLookDirectionPitchChange >>
                           0xc);
            uVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
            do {
              uVar25 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
              puVar14 = (ulonglong *)(uVar13 * 8 + 0xADDR);
              LOCK();
              bVar15 = uVar25 == *puVar14;
              if (bVar15) {
                *puVar14 = uVar25 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar15);
          }
          pAVar16 = (pAVar1->fields).OnStartEvent;
          pNVar17 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          uVar4 = 0;
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar17,(Object *)this,
                     MethodInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal__OnNodEmoteStart__,
                     (MethodInfo *)0x0);
          pAVar16 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar16,(Delegate *)pNVar17,(MethodInfo *)0x0);
          if (pAVar16 == (Action *)0x0) {
            (pAVar1->fields).OnStartEvent = (Action *)0x0;
          }
          else {
            pAVar19 = (Action *)0x0;
            if (pAVar16->klass == TypeInfo__System__Action) {
              pAVar19 = pAVar16;
            }
            if (pAVar19 == (Action *)0x0) {
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            (pAVar1->fields).OnStartEvent = pAVar19;
            pAVar19 = (Action *)0x0;
            if (pAVar16->klass == TypeInfo__System__Action) {
              pAVar19 = pAVar16;
            }
            if (pAVar19 == (Action *)0x0) {
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar11 = (uint)((ulonglong)&pAVar1->fields >> 0xc);
            uVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
            do {
              uVar25 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
              puVar14 = (ulonglong *)(uVar13 * 8 + 0xADDR);
              LOCK();
              bVar15 = uVar25 == *puVar14;
              if (bVar15) {
                *puVar14 = uVar25 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar15);
          }
          pDVar23 = (this->fields).emoteRecognisers;
          if (pDVar23 != (Dictionary_2_EmoteTypes_AvatarLimbManagerLocal_AvatarEmoteRecogniser_ *)0x0
             ) {
            pMVar24 = MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Add_EmoteTypes__AvatarLimbManagerLocal__AvatarEmoteRecogniser_
                      ->klass->rgctx_data[0x22].method;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Object]::Dictionary_2_System_ByteEnum_System_Object__TryInsert
                      ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar23,2,(Object *)pAVar1,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),pMVar24);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Action<EmoteTypes>,limbManager,lookDirectionHandler);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer_EmoteTypes_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__AvatarLimbManager__AvatarNodEmote);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__AvatarLimbManager__AvatarShakeEmote);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__AvatarLimbManager__AvatarWaveEmote);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pAVar26 = (AvatarLimbManager_AvatarEmote *)
                      FUN_?(TypeInfo__AvatarLimbManager__AvatarShakeEmote);
            pAVar27 = AvatarLimbManager+AvatarEmoteHandler::
                      AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
                                ((AvatarLimbManager_AvatarEmoteHandler *)this,pAVar26,limbRotator,
                                 TypeRef__System__Activator__T._0_4_,1,(MethodInfo *)0x0);
            if (pAVar26 != (AvatarLimbManager_AvatarEmote *)0x0) {
              pAVar28 = (pAVar26->fields).OnEmoteEnd;
              pUVar29 = (UnityAction_1_System_ByteEnum_ *)
                        FUN_?(TypeInfo__System__Action<EmoteTypes>);
              uVar4 = 0;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
              UnityAction_1_System_ByteEnum___ctor
                        (pUVar29,(Object *)headRotationHandler,
                         MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer_EmoteTypes_
                         ,(MethodInfo *)0x0);
              pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar28,(Delegate *)pUVar29,(MethodInfo *)0x0);
              pAVar30 = TypeInfo__System__Action<EmoteTypes>;
              if (pDVar7 == (Delegate *)0x0) {
                (pAVar26->fields).OnEmoteEnd = (Action_1_EmoteTypes_ *)0x0;
              }
              else {
                pAVar28 = (Action_1_EmoteTypes_ *)
                          FUN_?(pDVar7,TypeInfo__System__Action<EmoteTypes>);
                if (pAVar28 == (Action_1_EmoteTypes_ *)0x0) {
                  FUN_?(pDVar7,pAVar30);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                (pAVar26->fields).OnEmoteEnd = pAVar28;
                pAVar30 = TypeInfo__System__Action<EmoteTypes>;
                lVar10 = FUN_?(pDVar7,TypeInfo__System__Action<EmoteTypes>);
                if (lVar10 == 0) {
                  FUN_?(pDVar7,pAVar30);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar11 = (uint)((ulonglong)&pAVar26->fields >> 0xc);
                uVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                do {
                  uVar25 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                  puVar14 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                  LOCK();
                  bVar15 = uVar25 == *puVar14;
                  if (bVar15) {
                    *puVar14 = uVar25 | 1L << (uVar11 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar15);
              }
              pDVar31 = (this->fields)._.emoteDatas;
              if (pDVar31 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
                pMVar32 = MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
                         ->klass->rgctx_data[0x22].method;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__TryInsert
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar31,
                           (ByteEnum__Enum)CONCAT71((int7)((ulonglong)pMVar32 >> 8),1),
                           (Object *)pAVar27,
                           (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
                           pMVar32);
                pAVar26 = (AvatarLimbManager_AvatarEmote *)
                          FUN_?(TypeInfo__AvatarLimbManager__AvatarNodEmote);
                pAVar27 = AvatarLimbManager+AvatarEmoteHandler::
                          AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
                                    ((AvatarLimbManager_AvatarEmoteHandler *)this,pAVar26,
                                     limbRotator,TypeRef__System__Activator__T._0_4_,1,
                                     (MethodInfo *)0x0);
                if (pAVar26 != (AvatarLimbManager_AvatarEmote *)0x0) {
                  pAVar28 = (pAVar26->fields).OnEmoteEnd;
                  pUVar29 = (UnityAction_1_System_ByteEnum_ *)
                            FUN_?(TypeInfo__System__Action<EmoteTypes>);
                  uVar4 = 0;
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
                  UnityAction_1_System_ByteEnum___ctor
                            (pUVar29,(Object *)headRotationHandler,
                             MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer_EmoteTypes_
                             ,(MethodInfo *)0x0);
                  pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pAVar28,(Delegate *)pUVar29,(MethodInfo *)0x0);
                  pAVar30 = TypeInfo__System__Action<EmoteTypes>;
                  if (pDVar7 == (Delegate *)0x0) {
                    (pAVar26->fields).OnEmoteEnd = (Action_1_EmoteTypes_ *)0x0;
                  }
                  else {
                    pAVar28 = (Action_1_EmoteTypes_ *)
                              FUN_?(pDVar7,TypeInfo__System__Action<EmoteTypes>);
                    if (pAVar28 == (Action_1_EmoteTypes_ *)0x0) {
                      FUN_?(pDVar7,pAVar30);
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    (pAVar26->fields).OnEmoteEnd = pAVar28;
                    pAVar30 = TypeInfo__System__Action<EmoteTypes>;
                    lVar10 = FUN_?(pDVar7,TypeInfo__System__Action<EmoteTypes>);
                    if (lVar10 == 0) {
                      FUN_?(pDVar7,pAVar30);
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                  }
                  if (iRam_? != 0) {
                    uVar11 = (uint)((ulonglong)&pAVar26->fields >> 0xc);
                    uVar13 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                    do {
                      uVar25 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                      puVar14 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                      LOCK();
                      bVar15 = uVar25 == *puVar14;
                      if (bVar15) {
                        *puVar14 = uVar25 | 1L << (uVar11 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar15);
                  }
                  pDVar31 = (this->fields)._.emoteDatas;
                  if (pDVar31 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__TryInsert
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar31,2,
                               (Object *)pAVar27,
                               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
                               MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
                               ->klass->rgctx_data[0x22].method);
                    pAVar26 = (AvatarLimbManager_AvatarEmote *)
                              FUN_?(TypeInfo__AvatarLimbManager__AvatarWaveEmote);
                    pAVar27 = AvatarLimbManager+AvatarEmoteHandler::
                              AvatarLimbManager_AvatarEmoteHandler_CreateEmoteData
                                        ((AvatarLimbManager_AvatarEmoteHandler *)this,pAVar26,
                                         limbRotator,_UNK_?,2,(MethodInfo *)0x0);
                    pDVar31 = (this->fields)._.emoteDatas;
                    if (pDVar31 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) {
                      pMVar32 = MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Add_EmoteTypes__AvatarLimbManager__EmoteData_
                               ->klass->rgctx_data[0x22].method;
                      uVar11 = 3;
                      piVar33 = &(pDVar31->fields)._version;
                      *piVar33 = *piVar33 + 1;
                      if ((pDVar31->fields)._buckets == (Int32__Array *)0x0) {
                        FUN_?(pDVar31,0,pMVar32->klass->rgctx_data[2].rgctxDataDummy,2,pMVar24
                                      ,uVar12,unaff_R15,unaff_R14,unaff_R13,unaff_R12,unaff_RSI,
                                      unaff_RBP,unaff_RBX);
                      }
                      pIVar34 = (IEqualityComparer_1_System_ByteEnum_ *)(pDVar31->fields)._comparer;
                      pDVar35 = (pDVar31->fields)._entries;
                      if (pIVar34 != (IEqualityComparer_1_System_ByteEnum_ *)0x0) {
                        pvVar36 = pMVar32->klass->rgctx_data[1].rgctxDataDummy;
                        if ((*(byte *)((longlong)pvVar36 + 0x135) & 1) == 0) {
                          FUN_?(pvVar36);
                        }
                        uVar11 = FUN_?();
                      }
                      pIVar37 = (pDVar31->fields)._buckets;
                      iVar38 = 0;
                      uVar11 = uVar11 & 0x7fffffff;
                      if (pIVar37 != (Int32__Array *)0x0) {
                        uVar39 = (int)uVar11 % (int)pIVar37->max_length;
                        if ((uint)pIVar37->max_length <= uVar39) {
code_?:
                          FUN_?();
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                        piVar33 = pIVar37->vector + (int)uVar39;
                        uVar39 = pIVar37->vector[(int)uVar39] - 1;
                        if (pDVar35 !=
                            (Dictionary_2_TKey_TValue_Entry_EmoteTypes_AvatarLimbManager_EmoteData___Array
                             *)0x0) {
                          if (pIVar34 == (IEqualityComparer_1_System_ByteEnum_ *)0x0) {
                            while (uVar39 < (uint)pDVar35->max_length) {
                              if (pDVar35->vector[(int)uVar39].hashCode == uVar11) {
                                pEVar40 = mscorlib.dll::System::Collections::Generic::
                                          EqualityComparer`1[System::ByteEnum]::
                                          EqualityComparer_1_System_ByteEnum__get_Default
                                                    (pMVar32->klass->rgctx_data[3].method);
                                if ((uint)pDVar35->max_length <= uVar39) goto code_?;
                                if (pEVar40 == (EqualityComparer_1_System_ByteEnum_ *)0x0)
                                goto code_?;
                                cVar41 = (*(pEVar40->klass->vtable).__unknown.methodPtr)
                                                   (pEVar40,(ulonglong)
                                                            pDVar35->vector[(int)uVar39].key,3,
                                                    (pEVar40->klass->vtable).__unknown.method);
                                if (cVar41 != '\0') {
                                  uVar4 = func_?(pMVar32->klass->rgctx_data,0xe);
                                  pOVar42 = (Object *)func_?(uVar4);
                                  mscorlib.dll::System::ThrowHelper::
                                  ThrowHelper_1_ThrowAddingDuplicateWithKeyArgumentException
                                            (pOVar42,(MethodInfo *)0x0);
                                  pcVar9 = (code *)swi(3);
                                  (*pcVar9)();
                                  return;
                                }
                              }
                              if ((uint)pDVar35->max_length <= uVar39) goto code_?;
                              uVar39 = pDVar35->vector[(int)uVar39].next;
                              if ((int)pDVar35->max_length <= iVar38) {
code_?:
                                mscorlib.dll::System::ThrowHelper::
                                ThrowHelper_1_ThrowInvalidOperationException_ConcurrentOperationsNotSupported
                                          ((MethodInfo *)0x0);
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              iVar38 = iVar38 + 1;
                            }
                          }
                          else {
                            while (uVar39 < (uint)pDVar35->max_length) {
                              if (pDVar35->vector[(int)uVar39].hashCode == uVar11) {
                                bVar20 = pDVar35->vector[(int)uVar39].key;
                                pIVar43 = pMVar32->klass->rgctx_data[1].rgctxDataDummy;
                                if ((pIVar43->field_0x135 & 1) == 0) {
                                  pIVar43 = (Il2CppClass *)FUN_?(pIVar43);
                                }
                                pIVar44 = pIVar34->klass;
                                uVar45 = 0;
                                uVar46._0_1_ = (pIVar44->_1).rank;
                                uVar46._1_1_ = (pIVar44->_1).minimumAlignment;
                                if (uVar46 != 0) {
                                  do {
                                    if (pIVar44->interfaceOffsets[uVar45].interfaceType == pIVar43)
                                    {
                                      pVVar47 = &(pIVar44->vtable).Equals +
                                                pIVar44->interfaceOffsets[uVar45].offset;
                                      goto code_?;
                                    }
                                    uVar45 = uVar45 + 1;
                                  } while (uVar45 < uVar46);
                                }
                                pVVar47 = (VirtualInvokeData *)FUN_?(pIVar34,pIVar43,0);
code_?:
                                cVar41 = (*pVVar47->methodPtr)
                                                   (pIVar34,(ulonglong)bVar20,3,pVVar47->method,
                                                    pMVar24,unaff_RDI);
                                if (cVar41 != '\0') {
                                  uVar4 = func_?(pMVar32->klass->rgctx_data,0xe);
                                  pOVar42 = (Object *)func_?(uVar4);
                                  mscorlib.dll::System::ThrowHelper::
                                  ThrowHelper_1_ThrowAddingDuplicateWithKeyArgumentException
                                            (pOVar42,(MethodInfo *)0x0);
                                  pcVar9 = (code *)swi(3);
                                  (*pcVar9)();
                                  return;
                                }
                              }
                              if ((uint)pDVar35->max_length <= uVar39) goto code_?;
                              uVar39 = pDVar35->vector[(int)uVar39].next;
                              if ((int)pDVar35->max_length <= iVar38) goto code_?;
                              iVar38 = iVar38 + 1;
                            }
                          }
                          bVar15 = false;
                          bVar48 = false;
                          if ((pDVar31->fields)._freeCount < 1) {
                            uVar39 = (pDVar31->fields)._count;
                            if (uVar39 == (uint)pDVar35->max_length) {
                              pMVar24 = pMVar32->klass->rgctx_data[0x36].method;
                              if (cRam_? == '\0') {
                                FUN_?(&TypeInfo__System__Collections__HashHelpers);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              iVar49 = (pDVar31->fields)._count;
                              if (*(int *)&(TypeInfo__System__Collections__HashHelpers->_1).
                                           field_0x1c == 0) {
                                FUN_?();
                              }
                              iVar49 = mscorlib.dll::System::Collections::HashHelpers::
                                       HashHelpers_1_ExpandPrime(iVar49,(MethodInfo *)0x0);
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              ByteEnum,System::Object]::
                              Dictionary_2_System_ByteEnum_System_Object__Resize_1
                                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar31,
                                         iVar49,0,pMVar24->klass->rgctx_data[0x38].method);
                              bVar15 = true;
                            }
                            pDVar35 = (pDVar31->fields)._entries;
                            (pDVar31->fields)._count = uVar39 + 1;
                            if (bVar15) {
                              pIVar37 = (pDVar31->fields)._buckets;
                              if (pIVar37 == (Int32__Array *)0x0) goto code_?;
                              uVar50 = (int)uVar11 % (int)pIVar37->max_length;
                              if ((uint)pIVar37->max_length <= uVar50) goto code_?;
                              piVar33 = pIVar37->vector + (int)uVar50;
                            }
                          }
                          else {
                            uVar39 = (pDVar31->fields)._freeList;
                            bVar48 = true;
                            piVar51 = &(pDVar31->fields)._freeCount;
                            *piVar51 = *piVar51 + -1;
                          }
                          if (pDVar35 !=
                              (Dictionary_2_TKey_TValue_Entry_EmoteTypes_AvatarLimbManager_EmoteData___Array
                               *)0x0) {
                            if (uVar39 < (uint)pDVar35->max_length) {
                              if (bVar48) {
                                (pDVar31->fields)._freeList = pDVar35->vector[(int)uVar39].next;
                              }
                              pDVar35->vector[(int)uVar39].hashCode = uVar11;
                              iVar38 = *piVar33;
                              pDVar35->vector[(int)uVar39].key = 3;
                              bVar15 = iRam_? != 0;
                              pDVar35->vector[(int)uVar39].next = iVar38 + -1;
                              pDVar35->vector[(int)uVar39].value = pAVar27;
                              if (bVar15) {
                                uVar11 = (uint)((ulonglong)&pDVar35->vector[(int)uVar39].value >>
                                               0xc);
                                puVar14 = (ulonglong *)
                                         ((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
                                do {
                                  uVar13 = *puVar14;
                                  LOCK();
                                  uVar12 = *puVar14;
                                  if (uVar13 == uVar12) {
                                    *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (uVar13 != uVar12);
                              }
                              *piVar33 = uVar39 + 1;
                              return;
                            }
                            goto code_?;
                          }
                        }
                      }
code_?:
                      FUN_?();
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                  }
                }
              }
            }
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnNodEmoteStart() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnNodEmoteStart
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLimbManagerLocal);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.emoteDatas;
  if (pDVar1 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
  goto code_?;
  pMVar2 = (MethodInfo *)CONCAT71((int7)((ulonglong)method >> 8),2);
  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
           ::Dictionary_2_System_ByteEnum_System_Object__get_Item
                     ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,(ByteEnum__Enum)pMVar2,
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
  if ((this->fields)._.isActive == 0) {
    return;
  }
  if ((this->fields)._.currentRunningEmoteData != (AvatarLimbManager_EmoteData *)0x0) {
    pAVar4 = (this->fields)._.currentRunningEmoteData;
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (*(short *)&pOVar3[1].monitor <= (pAVar4->fields).priority) {
      return;
    }
    pAVar5 = (pAVar4->fields).emote;
    if (pAVar5 == (AvatarLimbManager_AvatarEmote *)0x0) goto code_?;
    pMVar2 = (pAVar5->klass->vtable).StopEmote.method;
    (*(pAVar5->klass->vtable).StopEmote.methodPtr)(pAVar5,pMVar2);
  }
  AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
            ((AvatarLimbManager_AvatarEmoteHandler *)this,
             (EmoteTypes__Enum)CONCAT71((int7)((ulonglong)pMVar2 >> 8),2),(MethodInfo *)0x0);
  pAVar6 = (this->fields)._.limbManager;
  if (pAVar6 != (AvatarLimbManager *)0x0) {
    bVar7 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
    if (((pAVar6->klass->_1).naturalAligment < bVar7) ||
       ((pAVar6->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
      FUN_?(pAVar6);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pDVar1 = (this->fields)._.emoteDatas;
    pAVar9 = pAVar6[1].fields.emoteHandler;
    if ((((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,
                              (ByteEnum__Enum)
                              CONCAT71((int7)((ulonglong)TypeInfo__AvatarLimbManagerLocal >> 8),2),
                              MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                             ), pOVar3 != (Object *)0x0)) &&
        (pOVar3[1].klass != (Object__Class *)0x0)) &&
       (pAVar9 != (AvatarLimbManager_AvatarEmoteHandler *)0x0)) {
      (*(code *)(pAVar9->fields).emoteDatas)
                (pAVar9[1].klass,((pOVar3[1].klass)->_0).this_arg.data.__klassIndex,
                 *(undefined8 *)&(pAVar9->fields).isActive);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnShakeEmoteStart() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnShakeEmoteStart
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLimbManagerLocal);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.emoteDatas;
  if (pDVar1 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
  goto code_?;
  pMVar2 = (MethodInfo *)CONCAT71((int7)((ulonglong)method >> 8),1);
  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
           ::Dictionary_2_System_ByteEnum_System_Object__get_Item
                     ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,(ByteEnum__Enum)pMVar2,
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
  if ((this->fields)._.isActive == 0) {
    return;
  }
  if ((this->fields)._.currentRunningEmoteData != (AvatarLimbManager_EmoteData *)0x0) {
    pAVar4 = (this->fields)._.currentRunningEmoteData;
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (*(short *)&pOVar3[1].monitor <= (pAVar4->fields).priority) {
      return;
    }
    pAVar5 = (pAVar4->fields).emote;
    if (pAVar5 == (AvatarLimbManager_AvatarEmote *)0x0) goto code_?;
    pMVar2 = (pAVar5->klass->vtable).StopEmote.method;
    (*(pAVar5->klass->vtable).StopEmote.methodPtr)(pAVar5,pMVar2);
  }
  AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
            ((AvatarLimbManager_AvatarEmoteHandler *)this,
             (EmoteTypes__Enum)CONCAT71((int7)((ulonglong)pMVar2 >> 8),1),(MethodInfo *)0x0);
  pAVar6 = (this->fields)._.limbManager;
  if (pAVar6 != (AvatarLimbManager *)0x0) {
    bVar7 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
    if (((pAVar6->klass->_1).naturalAligment < bVar7) ||
       ((pAVar6->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
      FUN_?(pAVar6);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pDVar1 = (this->fields)._.emoteDatas;
    pAVar9 = pAVar6[1].fields.emoteHandler;
    if ((((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,
                              (ByteEnum__Enum)
                              CONCAT71((int7)((ulonglong)TypeInfo__AvatarLimbManagerLocal >> 8),1),
                              MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                             ), pOVar3 != (Object *)0x0)) &&
        (pOVar3[1].klass != (Object__Class *)0x0)) &&
       (pAVar9 != (AvatarLimbManager_AvatarEmoteHandler *)0x0)) {
      (*(code *)(pAVar9->fields).emoteDatas)
                (pAVar9[1].klass,((pOVar3[1].klass)->_0).this_arg.data.__klassIndex,
                 *(undefined8 *)&(pAVar9->fields).isActive);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnWaveEmoteStart() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_OnWaveEmoteStart
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLimbManagerLocal);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.emoteDatas;
  if (pDVar1 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
  goto code_?;
  pMVar2 = (MethodInfo *)CONCAT71((int7)((ulonglong)method >> 8),3);
  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
           ::Dictionary_2_System_ByteEnum_System_Object__get_Item
                     ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,(ByteEnum__Enum)pMVar2,
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
  if ((this->fields)._.isActive == 0) {
    return;
  }
  if ((this->fields)._.currentRunningEmoteData != (AvatarLimbManager_EmoteData *)0x0) {
    pAVar4 = (this->fields)._.currentRunningEmoteData;
    if (pOVar3 == (Object *)0x0) goto code_?;
    if (*(short *)&pOVar3[1].monitor <= (pAVar4->fields).priority) {
      return;
    }
    pAVar5 = (pAVar4->fields).emote;
    if (pAVar5 == (AvatarLimbManager_AvatarEmote *)0x0) goto code_?;
    pMVar2 = (pAVar5->klass->vtable).StopEmote.method;
    (*(pAVar5->klass->vtable).StopEmote.methodPtr)(pAVar5,pMVar2);
  }
  AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
            ((AvatarLimbManager_AvatarEmoteHandler *)this,
             (EmoteTypes__Enum)CONCAT71((int7)((ulonglong)pMVar2 >> 8),3),(MethodInfo *)0x0);
  pAVar6 = (this->fields)._.limbManager;
  if (pAVar6 != (AvatarLimbManager *)0x0) {
    bVar7 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
    if (((pAVar6->klass->_1).naturalAligment < bVar7) ||
       ((pAVar6->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
      FUN_?(pAVar6);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pDVar1 = (this->fields)._.emoteDatas;
    pAVar9 = pAVar6[1].fields.emoteHandler;
    if ((((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,
                              (ByteEnum__Enum)
                              CONCAT71((int7)((ulonglong)TypeInfo__AvatarLimbManagerLocal >> 8),3),
                              MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                             ), pOVar3 != (Object *)0x0)) &&
        (pOVar3[1].klass != (Object__Class *)0x0)) &&
       (pAVar9 != (AvatarLimbManager_AvatarEmoteHandler *)0x0)) {
      (*(code *)(pAVar9->fields).emoteDatas)
                (pAVar9[1].klass,((pOVar3[1].klass)->_0).this_arg.data.__klassIndex,
                 *(undefined8 *)&(pAVar9->fields).isActive);
      pAVar6 = (this->fields)._.limbManager;
      if (pAVar6 != (AvatarLimbManager *)0x0) {
        bVar7 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
        if (((pAVar6->klass->_1).naturalAligment < bVar7) ||
           ((pAVar6->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
          FUN_?(pAVar6);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pDVar1 = (this->fields)._.emoteDatas;
        pAVar10 = pAVar6[1].fields.limbRotator;
        if (((pDVar1 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
            (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,
                                 (ByteEnum__Enum)
                                 CONCAT71((int7)((ulonglong)TypeInfo__AvatarLimbManagerLocal >> 8),3
                                         ),
                                 MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                                ), pOVar3 != (Object *)0x0)) &&
           ((pOVar3[1].klass != (Object__Class *)0x0 &&
            (pAVar10 != (AvatarLimbManager_LimbRotator *)0x0)))) {
          (**(code **)&(pAVar10->fields).isActive)
                    (pAVar10[2].klass,((pOVar3[1].klass)->_0).this_arg.data.__klassIndex,
                     pAVar10[1].monitor);
          return;
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


/* Void StartEmoteAndNetworkIt(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_StartEmoteAndNetworkIt
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,EmoteTypes__Enum emoteType,
               MethodInfo *method)

{
  uVar1 = (ulonglong)emoteType;
  EVar2 = emoteType & 0xff;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EmoteTypes);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_start_and_network_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___Please_add_it_to_the_StartEmot);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (EVar2 == EmoteTypes__Enum_Shake) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AvatarLimbManagerLocal);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar3 = (this->fields)._.emoteDatas;
    if (pDVar3 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
    goto code_?;
    pMVar4 = (MethodInfo *)CONCAT71((int7)(uVar1 >> 8),1);
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,
                        (ByteEnum__Enum)pMVar4,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                       );
    if ((this->fields)._.isActive == 0) {
      return;
    }
    if ((this->fields)._.currentRunningEmoteData != (AvatarLimbManager_EmoteData *)0x0) {
      pAVar6 = (this->fields)._.currentRunningEmoteData;
      if (pOVar5 == (Object *)0x0) goto code_?;
      if (*(short *)&pOVar5[1].monitor <= (pAVar6->fields).priority) {
        return;
      }
      pAVar7 = (pAVar6->fields).emote;
      if (pAVar7 == (AvatarLimbManager_AvatarEmote *)0x0) goto code_?;
      pMVar4 = (pAVar7->klass->vtable).StopEmote.method;
      (*(pAVar7->klass->vtable).StopEmote.methodPtr)(pAVar7,pMVar4);
    }
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
              ((AvatarLimbManager_AvatarEmoteHandler *)this,
               (EmoteTypes__Enum)CONCAT71((int7)((ulonglong)pMVar4 >> 8),1),(MethodInfo *)0x0);
    pAVar8 = (this->fields)._.limbManager;
    if (pAVar8 == (AvatarLimbManager *)0x0) goto code_?;
    bVar9 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
    if (((pAVar8->klass->_1).naturalAligment < bVar9) ||
       ((pAVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
      FUN_?(pAVar8);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pDVar3 = (this->fields)._.emoteDatas;
    pAVar11 = pAVar8[1].fields.emoteHandler;
    if (pDVar3 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
    goto code_?;
    key = (ByteEnum__Enum)CONCAT71((int7)((ulonglong)TypeInfo__AvatarLimbManagerLocal >> 8),1);
  }
  else {
    if (EVar2 != EmoteTypes__Enum_Nod) {
      uVar12 = 0;
      if (EVar2 != EmoteTypes__Enum_Wave) {
        EStack_13.klass = (Enum__Class *)TypeInfo__EmoteTypes;
        EStack_13.monitor = (MonitorData *)0xffffffffffffffff;
        uStack_14 = (char)emoteType;
        pSVar15 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
        pSVar15 = mscorlib.dll::System::String::String_Concat_5
                           (StringLiteral_Could_not_start_and_network_,pSVar15,
                            StringLiteral___Please_add_it_to_the_StartEmot,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar15,(MethodInfo *)0x0);
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AvatarLimbManagerLocal);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar3 = (this->fields)._.emoteDatas;
      if (pDVar3 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
      goto code_?;
      pMVar4 = (MethodInfo *)CONCAT71((int7)((ulonglong)uVar12 >> 8),3);
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,
                          (ByteEnum__Enum)pMVar4,
                          MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                         );
      if ((this->fields)._.isActive == 0) {
        return;
      }
      if ((this->fields)._.currentRunningEmoteData != (AvatarLimbManager_EmoteData *)0x0) {
        pAVar6 = (this->fields)._.currentRunningEmoteData;
        if (pOVar5 == (Object *)0x0) goto code_?;
        if (*(short *)&pOVar5[1].monitor <= (pAVar6->fields).priority) {
          return;
        }
        pAVar7 = (pAVar6->fields).emote;
        if (pAVar7 == (AvatarLimbManager_AvatarEmote *)0x0) goto code_?;
        pMVar4 = (pAVar7->klass->vtable).StopEmote.method;
        (*(pAVar7->klass->vtable).StopEmote.methodPtr)(pAVar7,pMVar4);
      }
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                ((AvatarLimbManager_AvatarEmoteHandler *)this,
                 (EmoteTypes__Enum)CONCAT71((int7)((ulonglong)pMVar4 >> 8),3),(MethodInfo *)0x0);
      pAVar8 = (this->fields)._.limbManager;
      if (pAVar8 != (AvatarLimbManager *)0x0) {
        bVar9 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
        if (((pAVar8->klass->_1).naturalAligment < bVar9) ||
           ((pAVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
          FUN_?(pAVar8);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pDVar3 = (this->fields)._.emoteDatas;
        pAVar11 = pAVar8[1].fields.emoteHandler;
        if ((((pDVar3 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
             (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       ByteEnum,System::Object]::
                       Dictionary_2_System_ByteEnum_System_Object__get_Item
                                 ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,
                                  (ByteEnum__Enum)
                                  CONCAT71((int7)((ulonglong)TypeInfo__AvatarLimbManagerLocal >> 8),
                                           3),
                                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                                 ), pOVar5 != (Object *)0x0)) &&
            (pOVar5[1].klass != (Object__Class *)0x0)) &&
           (pAVar11 != (AvatarLimbManager_AvatarEmoteHandler *)0x0)) {
          (*(code *)(pAVar11->fields).emoteDatas)
                    (pAVar11[1].klass,((pOVar5[1].klass)->_0).this_arg.data.__klassIndex,
                     *(undefined8 *)&(pAVar11->fields).isActive);
          pAVar8 = (this->fields)._.limbManager;
          if (pAVar8 != (AvatarLimbManager *)0x0) {
            bVar9 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
            if (((pAVar8->klass->_1).naturalAligment < bVar9) ||
               ((pAVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
                (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
              FUN_?(pAVar8);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pDVar3 = (this->fields)._.emoteDatas;
            pAVar16 = pAVar8[1].fields.limbRotator;
            if (((pDVar3 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
                (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,
                                     (ByteEnum__Enum)
                                     CONCAT71((int7)((ulonglong)TypeInfo__AvatarLimbManagerLocal >>
                                                    8),3),
                                     MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                                    ), pOVar5 != (Object *)0x0)) &&
               ((pOVar5[1].klass != (Object__Class *)0x0 &&
                (pAVar16 != (AvatarLimbManager_LimbRotator *)0x0)))) {
              (**(code **)&(pAVar16->fields).isActive)
                        (pAVar16[2].klass,((pOVar5[1].klass)->_0).this_arg.data.__klassIndex,
                         pAVar16[1].monitor);
              return;
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__AvatarLimbManagerLocal);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar3 = (this->fields)._.emoteDatas;
    if (pDVar3 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
    goto code_?;
    pMVar4 = (MethodInfo *)CONCAT71((int7)(uVar1 >> 8),2);
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,
                        (ByteEnum__Enum)pMVar4,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                       );
    if ((this->fields)._.isActive == 0) {
      return;
    }
    if ((this->fields)._.currentRunningEmoteData != (AvatarLimbManager_EmoteData *)0x0) {
      pAVar6 = (this->fields)._.currentRunningEmoteData;
      if (pOVar5 == (Object *)0x0) goto code_?;
      if (*(short *)&pOVar5[1].monitor <= (pAVar6->fields).priority) {
        return;
      }
      pAVar7 = (pAVar6->fields).emote;
      if (pAVar7 == (AvatarLimbManager_AvatarEmote *)0x0) goto code_?;
      pMVar4 = (pAVar7->klass->vtable).StopEmote.method;
      (*(pAVar7->klass->vtable).StopEmote.methodPtr)(pAVar7,pMVar4);
    }
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
              ((AvatarLimbManager_AvatarEmoteHandler *)this,
               (EmoteTypes__Enum)CONCAT71((int7)((ulonglong)pMVar4 >> 8),2),(MethodInfo *)0x0);
    pAVar8 = (this->fields)._.limbManager;
    if (pAVar8 == (AvatarLimbManager *)0x0) goto code_?;
    bVar9 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
    if (((pAVar8->klass->_1).naturalAligment < bVar9) ||
       ((pAVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
      FUN_?(pAVar8);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pDVar3 = (this->fields)._.emoteDatas;
    pAVar11 = pAVar8[1].fields.emoteHandler;
    if (pDVar3 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
    goto code_?;
    key = (ByteEnum__Enum)CONCAT71((int7)((ulonglong)TypeInfo__AvatarLimbManagerLocal >> 8),2);
  }
  pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
           ::Dictionary_2_System_ByteEnum_System_Object__get_Item
                     ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,key,
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
  if (((pOVar5 != (Object *)0x0) && (pOVar5[1].klass != (Object__Class *)0x0)) &&
     (pAVar11 != (AvatarLimbManager_AvatarEmoteHandler *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pAVar11->fields).emoteDatas)
              (pAVar11[1].klass,((pOVar5[1].klass)->_0).this_arg.data.__klassIndex,
               *(undefined8 *)&(pAVar11->fields).isActive);
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateEmotes() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal_UpdateEmotes
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).emoteRecognisers;
  if (pDVar1 == (Dictionary_2_EmoteTypes_AvatarLimbManagerLocal_AvatarEmoteRecogniser_ *)0x0) {
    FUN_?();
code_?:
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
  }
  else {
    uStack_3 = 0;
    uStack_4 = 0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
      uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    uStack_11 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_12 = 2;
    aDStack_13[0]._version = (undefined4)uStack_11;
    aDStack_13[0]._index = uStack_11._4_4_;
    aDStack_13[0]._current.key = 0;
    aDStack_13[0]._current._1_7_ = 0;
    aDStack_13[0]._current.value = (Object *)0x0;
    aDStack_13[0]._getEnumeratorRetType = 2;
    aDStack_13[0]._36_4_ = 0;
    pDStack_6 = pDVar1;
    aDStack_13[0]._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        (aDStack_13,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__MoveNext__
                        );
      pOVar15 = aDStack_13[0]._current.value;
      if (bVar14 == 0) {
        AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_UpdateEmotes
                  ((AvatarLimbManager_AvatarEmoteHandler *)this,(MethodInfo *)0x0);
        return;
      }
      if (aDStack_13[0]._current.value == (Object *)0x0) break;
      if (*(short *)((longlong)&aDStack_13[0]._current.value[2].klass + 4) == 0) {
        *(undefined2 *)((longlong)&aDStack_13[0]._current.value[2].klass + 4) = 0;
        *(undefined4 *)((longlong)&aDStack_13[0]._current.value[2].monitor + 4) =
             *(undefined4 *)&aDStack_13[0]._current.value[2].monitor;
      }
      fVar16 = *(float *)((longlong)&aDStack_13[0]._current.value[2].monitor + 4);
      pcVar17 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar17;
      fVar18 = (float)(*pcRam_?)();
      fVar16 = fVar16 - fVar18;
      *(float *)((longlong)&pOVar15[2].monitor + 4) = fVar16;
      if (fVar16 <= 0.0) {
        *(undefined2 *)((longlong)&pOVar15[2].klass + 4) = 0;
        *(undefined4 *)((longlong)&pOVar15[2].monitor + 4) = *(undefined4 *)&pOVar15[2].monitor;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* AvatarLimbManagerLocal+AvatarEmoteHandlerLocal() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteHandlerLocal::
     AvatarLimbManagerLocal_AvatarEmoteHandlerLocal__ctor
               (AvatarLimbManagerLocal_AvatarEmoteHandlerLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).emoteRecognisers =
       (Dictionary_2_EmoteTypes_AvatarLimbManagerLocal_AvatarEmoteRecogniser_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).emoteRecognisers >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Dictionary__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields)._.emoteDatas = (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.emoteDatas >> 0xc);
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
  (this->fields)._.isActive = 1;
  return;
}

