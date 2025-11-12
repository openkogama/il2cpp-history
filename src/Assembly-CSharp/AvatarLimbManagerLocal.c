
/* Void Initialize(MVWorldObjectClient, MVBody, AvatarEnabledChangeHandler, LimbRotationRuntimeData)
    */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_Initialize
               (AvatarLimbManagerLocal *this,MVWorldObjectClient *avatarWO,MVBody *body,
               AvatarEnabledChangeHandler *enabledChangeHandler,
               LimbRotationRuntimeData *limbRotationRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<UnityEngine::Quaternion>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManagerLocal__AvatarHeadRotationCalculator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal__ResetNetworkMessageCooldown_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManagerLocal__AvatarLimbDataManagerLocal);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManagerLocal__OnNodChatCommand__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManagerLocal__OnShakeChatCommand__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManagerLocal__OnWaveChatCommand__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManagerLocal__SynchronizeEmote_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManagerLocal__SynchronizeHasHandEquippableValue_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarLimbManagerLocal__SynchronizeHeadRotation_UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManagerLocal__SynchronizePointing_UnityEngine__Quaternion_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManager__OnStartEmote_System__String_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal__ResetNetworkMessageDelay_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManagerLocal__AvatarPointingRotationCalculator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ChatCommandManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = (Action *)0x0;
  AvatarLimbManager::AvatarLimbManager_Initialize
            ((AvatarLimbManager *)this,avatarWO,body,enabledChangeHandler,limbRotationRuntimeData,
             (MethodInfo *)0x0);
  pAVar1 = (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *)
            FUN_?(TypeInfo__AvatarLimbManagerLocal__AvatarHeadRotationCalculator);
  bVar2 = iRam_? != 0;
  (this->fields).headRotationCalculator = pAVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).headRotationCalculator >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pAVar7 = (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)
            FUN_?(TypeInfo__AvatarLimbManagerLocal__AvatarHeadRotationHandlerLocal);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar8 = cRam_?;
  pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar10 = (pQVar9->identityQuaternion).y;
  fVar11 = (pQVar9->identityQuaternion).z;
  fVar12 = (pQVar9->identityQuaternion).w;
  (pAVar7->fields).yawRotation.x = (pQVar9->identityQuaternion).x;
  (pAVar7->fields).yawRotation.y = fVar10;
  (pAVar7->fields).yawRotation.z = fVar11;
  (pAVar7->fields).yawRotation.w = fVar12;
  if (cVar8 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = iRam_? != 0;
  pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar10 = (pQVar9->identityQuaternion).x;
  fVar11 = (pQVar9->identityQuaternion).y;
  fVar12 = (pQVar9->identityQuaternion).z;
  fVar13 = (pQVar9->identityQuaternion).w;
  (pAVar7->fields)._.shouldLean = 1;
  (pAVar7->fields).pitchRotation.x = fVar10;
  (pAVar7->fields).pitchRotation.y = fVar11;
  (pAVar7->fields).pitchRotation.z = fVar12;
  (pAVar7->fields).pitchRotation.w = fVar13;
  (this->fields).headRotationHandler = pAVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).headRotationHandler >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pAVar7 = (this->fields).headRotationHandler;
  if (pAVar7 != (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0) {
    (*(pAVar7->klass->vtable).Initialize.methodPtr)
              (pAVar7,this,(this->fields)._.limbRotator,(this->fields)._.lookDirectionHandler,
               (pAVar7->klass->vtable).Initialize.method);
    pAVar14 = (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)
              FUN_?(TypeInfo__AvatarLimbManagerLocal__AvatarPointingRotationCalculator);
    bVar2 = iRam_? != 0;
    (this->fields).pointingRotationCalculator = pAVar14;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).pointingRotationCalculator >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pAVar15 = (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)
              FUN_?(TypeInfo__AvatarLimbManagerLocal__AvatarPointingHandlerLocal);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar8 = cRam_?;
    pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar10 = (pQVar9->identityQuaternion).y;
    fVar11 = (pQVar9->identityQuaternion).z;
    fVar12 = (pQVar9->identityQuaternion).w;
    (pAVar15->fields).yawRotation.x = (pQVar9->identityQuaternion).x;
    (pAVar15->fields).yawRotation.y = fVar10;
    (pAVar15->fields).yawRotation.z = fVar11;
    (pAVar15->fields).yawRotation.w = fVar12;
    if (cVar8 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar2 = iRam_? != 0;
    pQVar9 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar10 = (pQVar9->identityQuaternion).x;
    fVar11 = (pQVar9->identityQuaternion).y;
    fVar12 = (pQVar9->identityQuaternion).z;
    fVar13 = (pQVar9->identityQuaternion).w;
    (pAVar15->fields)._.pointingDuration = 0.8;
    (pAVar15->fields)._.pointState = 1;
    (pAVar15->fields).pitchRotation.x = fVar10;
    (pAVar15->fields).pitchRotation.y = fVar11;
    (pAVar15->fields).pitchRotation.z = fVar12;
    (pAVar15->fields).pitchRotation.w = fVar13;
    (pAVar15->fields)._.isActive = 1;
    (this->fields).pointingHandler = pAVar15;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).pointingHandler >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pAVar15 = (this->fields).pointingHandler;
    if (pAVar15 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
      (*(pAVar15->klass->vtable).Initialize.methodPtr)
                (pAVar15,this,(this->fields)._.limbRotator,enabledChangeHandler,
                 (pAVar15->klass->vtable).Initialize.method);
      pAVar16 = (AvatarLimbManager_AvatarEmoteHandler *)
                FUN_?(TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal);
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
      this_02 = (AvatarLimbManager_AvatarEmoteHandler__Class *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
      RuntimeEvents::ExplosionEvent+ExplosionValues]::
      Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
                ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                  *)this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManagerLocal::AvatarEmoteRecogniser>__Dictionary__
                );
      bVar2 = iRam_? != 0;
      pAVar16[1].klass = this_02;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)(pAVar16 + 1) >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler__ctor
                (pAVar16,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (this->fields)._.emoteHandler = pAVar16;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields)._.emoteHandler >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pAVar16 = (this->fields)._.emoteHandler;
      if (pAVar16 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
        AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_Initialize
                  (pAVar16,(AvatarLimbManager *)this,(this->fields)._.lookDirectionHandler,
                   (AvatarLimbManager_AvatarPointingHandler *)(this->fields).pointingHandler,
                   (AvatarLimbManager_AvatarHeadRotationHandler *)(this->fields).headRotationHandler
                   ,(this->fields)._.limbRotator,enabledChangeHandler,(MethodInfo *)0x0);
        pAVar17 = (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)
                  FUN_?(TypeInfo__AvatarLimbManagerLocal__AvatarLimbDataManagerLocal);
        (this->fields).dataManager = pAVar17;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&(this->fields).dataManager >> 0xc);
          uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        iVar18 = iRam_?;
        pAVar17 = (this->fields).dataManager;
        if (pAVar17 != (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)0x0) {
          (pAVar17->fields).limbRotationRuntimeData = limbRotationRuntimeData;
          if (iVar18 != 0) {
            uVar3 = (uint)((ulonglong)&pAVar17->fields >> 0xc);
            uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
              puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          pAVar19 = (this->fields).DelayHeadRotationNetworkMessage;
          pAVar7 = (this->fields).headRotationHandler;
          pDVar20 = (Delegate *)FUN_?(TypeInfo__System__Action<float>);
          FUN_?(pDVar20,pAVar7);
          pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar19,pDVar20,(MethodInfo *)0x0);
          pAVar21 = TypeInfo__System__Action<float>;
          if (pDVar20 == (Delegate *)0x0) {
            (this->fields).DelayHeadRotationNetworkMessage = (Action_1_Single_ *)0x0;
          }
          else {
            pAVar19 = (Action_1_Single_ *)FUN_?(pDVar20,TypeInfo__System__Action<float>);
            if (pAVar19 == (Action_1_Single_ *)0x0) {
              FUN_?(pDVar20,pAVar21);
              pcVar22 = (code *)swi(3);
              (*pcVar22)();
              return;
            }
            (this->fields).DelayHeadRotationNetworkMessage = pAVar19;
            pAVar21 = TypeInfo__System__Action<float>;
            lVar23 = FUN_?(pDVar20,TypeInfo__System__Action<float>);
            if (lVar23 == 0) {
              FUN_?(pDVar20,pAVar21);
              pcVar22 = (code *)swi(3);
              (*pcVar22)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&(this->fields).DelayHeadRotationNetworkMessage >> 0xc);
            uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
              puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          pAVar19 = (this->fields).DelayPointingNetworkMessage;
          pAVar15 = (this->fields).pointingHandler;
          pDVar20 = (Delegate *)FUN_?(TypeInfo__System__Action<float>);
          FUN_?(pDVar20,pAVar15);
          pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar19,pDVar20,(MethodInfo *)0x0);
          pAVar21 = TypeInfo__System__Action<float>;
          if (pDVar20 == (Delegate *)0x0) {
            (this->fields).DelayPointingNetworkMessage = (Action_1_Single_ *)0x0;
          }
          else {
            pAVar19 = (Action_1_Single_ *)FUN_?(pDVar20,TypeInfo__System__Action<float>);
            if (pAVar19 == (Action_1_Single_ *)0x0) {
              FUN_?(pDVar20,pAVar21);
              pcVar22 = (code *)swi(3);
              (*pcVar22)();
              return;
            }
            (this->fields).DelayPointingNetworkMessage = pAVar19;
            pAVar21 = TypeInfo__System__Action<float>;
            lVar23 = FUN_?(pDVar20,TypeInfo__System__Action<float>);
            if (lVar23 == 0) {
              FUN_?(pDVar20,pAVar21);
              pcVar22 = (code *)swi(3);
              (*pcVar22)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&(this->fields).DelayPointingNetworkMessage >> 0xc);
            uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
              puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          pAVar16 = (this->fields)._.emoteHandler;
          if (pAVar16 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
            pAVar24 = (pAVar16->fields).OnEmoteStart;
            this_03 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__System__Action<System::String>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (this_03,(Object *)this,
                       MethodInfo__AvatarLimbManager__OnStartEmote_System__String_,(MethodInfo *)0x0
                      );
            pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar24,(Delegate *)this_03,(MethodInfo *)0x0);
            pAVar25 = TypeInfo__System__Action<System::String>;
            if (pDVar20 == (Delegate *)0x0) {
              (pAVar16->fields).OnEmoteStart = (Action_1_String_ *)0x0;
            }
            else {
              pAVar24 = (Action_1_String_ *)
                        FUN_?(pDVar20,TypeInfo__System__Action<System::String>);
              if (pAVar24 == (Action_1_String_ *)0x0) {
                FUN_?(pDVar20,pAVar25);
                pcVar22 = (code *)swi(3);
                (*pcVar22)();
                return;
              }
              (pAVar16->fields).OnEmoteStart = pAVar24;
              pAVar25 = TypeInfo__System__Action<System::String>;
              lVar23 = FUN_?(pDVar20,TypeInfo__System__Action<System::String>);
              if (lVar23 == 0) {
                FUN_?(pDVar20,pAVar25);
                pcVar22 = (code *)swi(3);
                (*pcVar22)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar3 = (uint)((ulonglong)&(pAVar16->fields).OnEmoteStart >> 0xc);
              uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
              do {
                uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                LOCK();
                bVar2 = uVar5 == *puVar6;
                if (bVar2) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar2);
            }
            pAVar7 = (this->fields).headRotationHandler;
            if (pAVar7 != (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0) {
              pAVar26 = (pAVar7->fields).OnUpdateHeadRotationValue;
              pDVar20 = (Delegate *)FUN_?(TypeInfo__System__Action<UnityEngine::Quaternion>)
              ;
              FUN_?(pDVar20,this);
              pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar26,pDVar20,(MethodInfo *)0x0);
              pAVar27 = TypeInfo__System__Action<UnityEngine::Quaternion>;
              if (pDVar20 == (Delegate *)0x0) {
                (pAVar7->fields).OnUpdateHeadRotationValue =
                     (Action_1_UnityEngine_Quaternion_ *)0x0;
              }
              else {
                pAVar26 = (Action_1_UnityEngine_Quaternion_ *)
                          FUN_?(pDVar20,TypeInfo__System__Action<UnityEngine::Quaternion>);
                if (pAVar26 == (Action_1_UnityEngine_Quaternion_ *)0x0) {
                  FUN_?(pDVar20,pAVar27);
                  pcVar22 = (code *)swi(3);
                  (*pcVar22)();
                  return;
                }
                (pAVar7->fields).OnUpdateHeadRotationValue = pAVar26;
                pAVar27 = TypeInfo__System__Action<UnityEngine::Quaternion>;
                lVar23 = FUN_?(pDVar20,TypeInfo__System__Action<UnityEngine::Quaternion>);
                if (lVar23 == 0) {
                  FUN_?(pDVar20,pAVar27);
                  pcVar22 = (code *)swi(3);
                  (*pcVar22)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar3 = (uint)((ulonglong)&(pAVar7->fields).OnUpdateHeadRotationValue >> 0xc);
                uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                do {
                  uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                  puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                  LOCK();
                  bVar2 = uVar5 == *puVar6;
                  if (bVar2) {
                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar2);
              }
              pAVar15 = (this->fields).pointingHandler;
              if (pAVar15 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
                pAVar26 = (pAVar15->fields).OnUpdatePointingValue;
                pDVar20 = (Delegate *)
                          FUN_?(TypeInfo__System__Action<UnityEngine::Quaternion>);
                FUN_?(pDVar20,this);
                pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar26,pDVar20,(MethodInfo *)0x0);
                pAVar27 = TypeInfo__System__Action<UnityEngine::Quaternion>;
                if (pDVar20 == (Delegate *)0x0) {
                  (pAVar15->fields).OnUpdatePointingValue = (Action_1_UnityEngine_Quaternion_ *)0x0;
                }
                else {
                  pAVar26 = (Action_1_UnityEngine_Quaternion_ *)
                            FUN_?(pDVar20,TypeInfo__System__Action<UnityEngine::Quaternion>)
                  ;
                  if (pAVar26 == (Action_1_UnityEngine_Quaternion_ *)0x0) {
                    FUN_?(pDVar20,pAVar27);
                    pcVar22 = (code *)swi(3);
                    (*pcVar22)();
                    return;
                  }
                  (pAVar15->fields).OnUpdatePointingValue = pAVar26;
                  pAVar27 = TypeInfo__System__Action<UnityEngine::Quaternion>;
                  lVar23 = FUN_?(pDVar20,TypeInfo__System__Action<UnityEngine::Quaternion>);
                  if (lVar23 == 0) {
                    FUN_?(pDVar20,pAVar27);
                    pcVar22 = (code *)swi(3);
                    (*pcVar22)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar3 = (uint)((ulonglong)&(pAVar15->fields).OnUpdatePointingValue >> 0xc);
                  uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                  do {
                    uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                    puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                    LOCK();
                    bVar2 = uVar5 == *puVar6;
                    if (bVar2) {
                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar2);
                }
                pAVar15 = (this->fields).pointingHandler;
                if (pAVar15 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
                  pAVar28 = (pAVar15->fields).OnHasHandEquippableItemChange;
                  pDVar20 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
                  FUN_?(pDVar20,this);
                  pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pAVar28,pDVar20,(MethodInfo *)0x0);
                  pAVar29 = TypeInfo__System__Action<bool>;
                  if (pDVar20 == (Delegate *)0x0) {
                    (pAVar15->fields).OnHasHandEquippableItemChange = (Action_1_Boolean_ *)0x0;
                  }
                  else {
                    pAVar28 = (Action_1_Boolean_ *)
                              FUN_?(pDVar20,TypeInfo__System__Action<bool>);
                    if (pAVar28 == (Action_1_Boolean_ *)0x0) {
                      FUN_?(pDVar20,pAVar29);
                      pcVar22 = (code *)swi(3);
                      (*pcVar22)();
                      return;
                    }
                    (pAVar15->fields).OnHasHandEquippableItemChange = pAVar28;
                    pAVar29 = TypeInfo__System__Action<bool>;
                    lVar23 = FUN_?(pDVar20,TypeInfo__System__Action<bool>);
                    if (lVar23 == 0) {
                      FUN_?(pDVar20,pAVar29);
                      pcVar22 = (code *)swi(3);
                      (*pcVar22)();
                      return;
                    }
                  }
                  if (iRam_? != 0) {
                    uVar3 = (uint)((ulonglong)&(pAVar15->fields).OnHasHandEquippableItemChange >>
                                   0xc);
                    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                    do {
                      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                      LOCK();
                      bVar2 = uVar5 == *puVar6;
                      if (bVar2) {
                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar2);
                  }
                  pAVar16 = (this->fields)._.emoteHandler;
                  if (pAVar16 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
                    pAVar30 = (pAVar16->fields).OnEmoteUpdate;
                    pDVar20 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
                    FUN_?(pDVar20,this);
                    pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pAVar30,pDVar20,(MethodInfo *)0x0);
                    pAVar31 = TypeInfo__System__Action<int>;
                    if (pDVar20 == (Delegate *)0x0) {
                      (pAVar16->fields).OnEmoteUpdate = (Action_1_Int32_ *)0x0;
                    }
                    else {
                      pAVar30 = (Action_1_Int32_ *)
                                FUN_?(pDVar20,TypeInfo__System__Action<int>);
                      if (pAVar30 == (Action_1_Int32_ *)0x0) {
                        FUN_?(pDVar20,pAVar31);
                        pcVar22 = (code *)swi(3);
                        (*pcVar22)();
                        return;
                      }
                      (pAVar16->fields).OnEmoteUpdate = pAVar30;
                      pAVar31 = TypeInfo__System__Action<int>;
                      lVar23 = FUN_?();
                      if (lVar23 == 0) {
                        FUN_?(pDVar20,pAVar31);
                        pcVar22 = (code *)swi(3);
                        (*pcVar22)();
                        return;
                      }
                    }
                    if (iRam_? != 0) {
                      uVar3 = (uint)((ulonglong)&(pAVar16->fields).OnEmoteUpdate >> 0xc);
                      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                      do {
                        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                        LOCK();
                        bVar2 = uVar5 == *puVar6;
                        if (bVar2) {
                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar2);
                    }
                    if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    pAVar32 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                        (ChatCommand__Enum_StartShake,(MethodInfo *)0x0);
                    pNVar33 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (pNVar33,(Object *)this,
                               MethodInfo__AvatarLimbManagerLocal__OnShakeChatCommand__,
                               (MethodInfo *)0x0);
                    pAVar34 = (Action *)
                              mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pAVar32,(Delegate *)pNVar33,(MethodInfo *)0x0);
                    pAVar32 = value;
                    if (pAVar34 != (Action *)0x0) {
                      if (pAVar34->klass == TypeInfo__System__Action) {
                        pAVar32 = pAVar34;
                      }
                      if (pAVar32 == (Action *)0x0) {
                        FUN_?(pAVar34,TypeInfo__System__Action);
                        pcVar22 = (code *)swi(3);
                        (*pcVar22)();
                        return;
                      }
                    }
                    ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                              (ChatCommand__Enum_StartShake,pAVar32,(MethodInfo *)0x0);
                    pAVar32 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                        (ChatCommand__Enum_StartNod,(MethodInfo *)0x0);
                    pNVar33 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (pNVar33,(Object *)this,
                               MethodInfo__AvatarLimbManagerLocal__OnNodChatCommand__,
                               (MethodInfo *)0x0);
                    pAVar34 = (Action *)
                              mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pAVar32,(Delegate *)pNVar33,(MethodInfo *)0x0);
                    pAVar32 = value;
                    if (pAVar34 != (Action *)0x0) {
                      if (pAVar34->klass == TypeInfo__System__Action) {
                        pAVar32 = pAVar34;
                      }
                      if (pAVar32 == (Action *)0x0) {
                        FUN_?(pAVar34,TypeInfo__System__Action);
                        pcVar22 = (code *)swi(3);
                        (*pcVar22)();
                        return;
                      }
                    }
                    ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                              (ChatCommand__Enum_StartNod,pAVar32,(MethodInfo *)0x0);
                    pAVar32 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                                        (ChatCommand__Enum_StartWave,(MethodInfo *)0x0);
                    pNVar33 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                    uVar35 = 0;
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (pNVar33,(Object *)this,
                               MethodInfo__AvatarLimbManagerLocal__OnWaveChatCommand__,
                               (MethodInfo *)0x0);
                    pAVar32 = (Action *)
                              mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pAVar32,(Delegate *)pNVar33,(MethodInfo *)0x0);
                    if (pAVar32 != (Action *)0x0) {
                      if (pAVar32->klass == TypeInfo__System__Action) {
                        value = pAVar32;
                      }
                      if (value == (Action *)0x0) {
                        FUN_?(pAVar32);
                        pcVar22 = (code *)swi(3);
                        (*pcVar22)();
                        return;
                      }
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__ChatCommandManager,value,0);
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__set_Item_ChatCommand__System__Action_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
                      FUN_?(TypeInfo__ChatCommandManager);
                    }
                    this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                              TypeInfo__ChatCommandManager->static_fields->
                              chatCommandCallBackDictionary;
                    if (this_00 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
code_?:
                      FUN_?();
                      pcVar22 = (code *)swi(3);
                      (*pcVar22)();
                      return;
                    }
                    iVar36 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,UnityEngine::Vector3]::
                             Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                                       (this_00,2,
                                        MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__ContainsKey_ChatCommand_
                                        ->klass->rgctx_data[0x21].method);
                    if (-1 < iVar36) {
                      if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
                        FUN_?(TypeInfo__ChatCommandManager);
                      }
                      this_01 = TypeInfo__ChatCommandManager->static_fields->
                                chatCommandCallBackDictionary;
                      if (this_01 == (Dictionary_2_ChatCommand_System_Action_ *)0x0)
                      goto code_?;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,2,
                                 (Object *)value,
                                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar35 >> 8),1)
                                 ,MethodInfo__System__Collections__Generic__Dictionary<ChatCommand,_System::Action>__set_Item_ChatCommand__System__Action_
                                  ->klass->rgctx_data[0x22].method);
                    }
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
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void OnNodChatCommand() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_OnNodChatCommand
               (AvatarLimbManagerLocal *this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).StartEmote.methodPtr)(this,2,(this->klass->vtable).StartEmote.method);
  return;
}


/* Void OnWaveChatCommand() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_OnWaveChatCommand
               (AvatarLimbManagerLocal *this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).StartEmote.methodPtr)(this,3,(this->klass->vtable).StartEmote.method);
  return;
}


/* Void SetHandEquippableItem(Boolean) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_SetHandEquippableItem
               (AvatarLimbManagerLocal *this,bool value,MethodInfo *method)

{
  pAVar1 = (this->fields).pointingHandler;
  if (pAVar1 == (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = (pAVar1->fields).OnHasHandEquippableItemChange;
  if (pAVar3 != (Action_1_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar3->fields)._._.invoke_impl)
              ((pAVar3->fields)._._.method_code,value,(pAVar3->fields)._._.method);
    return;
  }
  return;
}


/* Void StartEmote(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_StartEmote
               (AvatarLimbManagerLocal *this,EmoteTypes__Enum emoteType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._.emoteHandler;
  if (pAVar1 == (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = (TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal->_1).naturalAligment;
  if (((pAVar1->klass->_1).naturalAligment < bVar3) ||
     ((pAVar1->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
      (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal__AvatarEmoteHandlerLocal)) {
    FUN_?(pAVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = (ulonglong)(byte)emoteType;
  EVar5 = emoteType & 0xff;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,uVar4,0);
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
  if (EVar5 == EmoteTypes__Enum_Shake) {
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
    pDVar6 = (pAVar1->fields).emoteDatas;
    if (pDVar6 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
    goto code_?;
    pMVar7 = (MethodInfo *)CONCAT71((int7)(uVar4 >> 8),1);
    pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
                        (ByteEnum__Enum)pMVar7,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                       );
    if ((pAVar1->fields).isActive == 0) {
      return;
    }
    if ((pAVar1->fields).currentRunningEmoteData != (AvatarLimbManager_EmoteData *)0x0) {
      pAVar9 = (pAVar1->fields).currentRunningEmoteData;
      if (pOVar8 == (Object *)0x0) goto code_?;
      if (*(short *)&pOVar8[1].monitor <= (pAVar9->fields).priority) {
        return;
      }
      pAVar10 = (pAVar9->fields).emote;
      if (pAVar10 == (AvatarLimbManager_AvatarEmote *)0x0) goto code_?;
      pMVar7 = (pAVar10->klass->vtable).StopEmote.method;
      (*(pAVar10->klass->vtable).StopEmote.methodPtr)(pAVar10,pMVar7);
    }
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
              (pAVar1,(EmoteTypes__Enum)CONCAT71((int7)((ulonglong)pMVar7 >> 8),1),
               (MethodInfo *)0x0);
    pAVar11 = (pAVar1->fields).limbManager;
    if (pAVar11 == (AvatarLimbManager *)0x0) goto code_?;
    bVar3 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
    if (((pAVar11->klass->_1).naturalAligment < bVar3) ||
       ((pAVar11->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
      FUN_?(pAVar11);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pDVar6 = (pAVar1->fields).emoteDatas;
    pAVar1 = pAVar11[1].fields.emoteHandler;
    if (pDVar6 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
    goto code_?;
    key = (ByteEnum__Enum)CONCAT71((int7)((ulonglong)TypeInfo__AvatarLimbManagerLocal >> 8),1);
  }
  else {
    if (EVar5 != EmoteTypes__Enum_Nod) {
      uVar12 = 0;
      if (EVar5 != EmoteTypes__Enum_Wave) {
        EStack_13.klass = (Enum__Class *)TypeInfo__EmoteTypes;
        EStack_13.monitor = (MonitorData *)0xffffffffffffffff;
        bStack_14 = (byte)emoteType;
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
      pDVar6 = (pAVar1->fields).emoteDatas;
      if (pDVar6 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
      goto code_?;
      pMVar7 = (MethodInfo *)CONCAT71((int7)((ulonglong)uVar12 >> 8),3);
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
                          (ByteEnum__Enum)pMVar7,
                          MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                         );
      if ((pAVar1->fields).isActive == 0) {
        return;
      }
      if ((pAVar1->fields).currentRunningEmoteData != (AvatarLimbManager_EmoteData *)0x0) {
        pAVar9 = (pAVar1->fields).currentRunningEmoteData;
        if (pOVar8 == (Object *)0x0) goto code_?;
        if (*(short *)&pOVar8[1].monitor <= (pAVar9->fields).priority) {
          return;
        }
        pAVar10 = (pAVar9->fields).emote;
        if (pAVar10 == (AvatarLimbManager_AvatarEmote *)0x0) goto code_?;
        pMVar7 = (pAVar10->klass->vtable).StopEmote.method;
        (*(pAVar10->klass->vtable).StopEmote.methodPtr)(pAVar10,pMVar7);
      }
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
                (pAVar1,(EmoteTypes__Enum)CONCAT71((int7)((ulonglong)pMVar7 >> 8),3),
                 (MethodInfo *)0x0);
      pAVar11 = (pAVar1->fields).limbManager;
      if (pAVar11 != (AvatarLimbManager *)0x0) {
        bVar3 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
        if (((pAVar11->klass->_1).naturalAligment < bVar3) ||
           ((pAVar11->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
          FUN_?(pAVar11);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pDVar6 = (pAVar1->fields).emoteDatas;
        pAVar16 = pAVar11[1].fields.emoteHandler;
        if ((((pDVar6 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
             (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       ByteEnum,System::Object]::
                       Dictionary_2_System_ByteEnum_System_Object__get_Item
                                 ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
                                  (ByteEnum__Enum)
                                  CONCAT71((int7)((ulonglong)TypeInfo__AvatarLimbManagerLocal >> 8),
                                           3),
                                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                                 ), pOVar8 != (Object *)0x0)) &&
            (pOVar8[1].klass != (Object__Class *)0x0)) &&
           (pAVar16 != (AvatarLimbManager_AvatarEmoteHandler *)0x0)) {
          (*(code *)(pAVar16->fields).emoteDatas)
                    (pAVar16[1].klass,((pOVar8[1].klass)->_0).this_arg.data.__klassIndex,
                     *(undefined8 *)&(pAVar16->fields).isActive);
          pAVar11 = (pAVar1->fields).limbManager;
          if (pAVar11 != (AvatarLimbManager *)0x0) {
            bVar3 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
            if (((pAVar11->klass->_1).naturalAligment < bVar3) ||
               ((pAVar11->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
                (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
              FUN_?(pAVar11);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pDVar6 = (pAVar1->fields).emoteDatas;
            pAVar17 = pAVar11[1].fields.limbRotator;
            if (((pDVar6 != (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0) &&
                (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
                                     (ByteEnum__Enum)
                                     CONCAT71((int7)((ulonglong)TypeInfo__AvatarLimbManagerLocal >>
                                                    8),3),
                                     MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                                    ), pOVar8 != (Object *)0x0)) &&
               ((pOVar8[1].klass != (Object__Class *)0x0 &&
                (pAVar17 != (AvatarLimbManager_LimbRotator *)0x0)))) {
              (**(code **)&(pAVar17->fields).isActive)
                        (pAVar17[2].klass,((pOVar8[1].klass)->_0).this_arg.data.__klassIndex,
                         pAVar17[1].monitor);
              return;
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
    pDVar6 = (pAVar1->fields).emoteDatas;
    if (pDVar6 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
    goto code_?;
    pMVar7 = (MethodInfo *)CONCAT71((int7)(uVar4 >> 8),2);
    pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
                        (ByteEnum__Enum)pMVar7,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                       );
    if ((pAVar1->fields).isActive == 0) {
      return;
    }
    if ((pAVar1->fields).currentRunningEmoteData != (AvatarLimbManager_EmoteData *)0x0) {
      pAVar9 = (pAVar1->fields).currentRunningEmoteData;
      if (pOVar8 == (Object *)0x0) goto code_?;
      if (*(short *)&pOVar8[1].monitor <= (pAVar9->fields).priority) {
        return;
      }
      pAVar10 = (pAVar9->fields).emote;
      if (pAVar10 == (AvatarLimbManager_AvatarEmote *)0x0) goto code_?;
      pMVar7 = (pAVar10->klass->vtable).StopEmote.method;
      (*(pAVar10->klass->vtable).StopEmote.methodPtr)(pAVar10,pMVar7);
    }
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
              (pAVar1,(EmoteTypes__Enum)CONCAT71((int7)((ulonglong)pMVar7 >> 8),2),
               (MethodInfo *)0x0);
    pAVar11 = (pAVar1->fields).limbManager;
    if (pAVar11 == (AvatarLimbManager *)0x0) goto code_?;
    bVar3 = (TypeInfo__AvatarLimbManagerLocal->_1).naturalAligment;
    if (((pAVar11->klass->_1).naturalAligment < bVar3) ||
       ((pAVar11->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__AvatarLimbManagerLocal)) {
      FUN_?(pAVar11);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pDVar6 = (pAVar1->fields).emoteDatas;
    pAVar1 = pAVar11[1].fields.emoteHandler;
    if (pDVar6 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
    goto code_?;
    key = (ByteEnum__Enum)CONCAT71((int7)((ulonglong)TypeInfo__AvatarLimbManagerLocal >> 8),2);
  }
  pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]
           ::Dictionary_2_System_ByteEnum_System_Object__get_Item
                     ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,key,
                      MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                     );
  if (((pOVar8 != (Object *)0x0) && (pOVar8[1].klass != (Object__Class *)0x0)) &&
     (pAVar1 != (AvatarLimbManager_AvatarEmoteHandler *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pAVar1->fields).emoteDatas)
              (pAVar1[1].klass,((pOVar8[1].klass)->_0).this_arg.data.__klassIndex,
               *(undefined8 *)&(pAVar1->fields).isActive);
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartPointing() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_StartPointing
               (AvatarLimbManagerLocal *this,MethodInfo *method)

{
  pAVar1 = (this->fields).pointingHandler;
  if (pAVar1 == (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pAVar1->fields)._.isActive != 0) {
    fVar3 = (pAVar1->fields)._.prevLookDirection.x;
    fVar4 = (pAVar1->fields)._.prevLookDirection.y;
    pAVar5 = (pAVar1->fields).OnIsPointingChange;
    (pAVar1->fields)._.elapsedPointingTime = (pAVar1->fields)._.pointingDuration;
    fVar6 = (pAVar1->fields)._.prevLookDirection.z;
    (pAVar1->fields)._.pointingDirection.x = fVar3;
    (pAVar1->fields)._.pointingDirection.y = fVar4;
    (pAVar1->fields)._.pointingDirection.z = fVar6;
    (pAVar1->fields).storedState = 1;
    if (pAVar5 != (Action_1_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,CONCAT71((int7)((ulonglong)pAVar1 >> 8),1),
                 (pAVar5->fields)._._.method);
      return;
    }
  }
  return;
}


/* Void StartPointingWeapon() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_StartPointingWeapon
               (AvatarLimbManagerLocal *this,MethodInfo *method)

{
  pAVar1 = (this->fields).pointingHandler;
  if (pAVar1 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
    if ((pAVar1->fields)._.isActive != 0) {
      fVar2 = (pAVar1->fields)._.prevLookDirection.x;
      fVar3 = (pAVar1->fields)._.prevLookDirection.y;
      (pAVar1->fields)._.elapsedPointingTime = (pAVar1->fields)._.pointingDuration;
      fVar4 = (pAVar1->fields)._.prevLookDirection.z;
      (pAVar1->fields)._.pointingDirection.x = fVar2;
      (pAVar1->fields)._.pointingDirection.y = fVar3;
      (pAVar1->fields)._.pointingDirection.z = fVar4;
      (pAVar1->fields).storedState = 2;
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void StartPointingWeaponOnlyNetworked() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::
     AvatarLimbManagerLocal_StartPointingWeaponOnlyNetworked
               (AvatarLimbManagerLocal *this,MethodInfo *method)

{
  pAVar1 = (this->fields).pointingHandler;
  if (pAVar1 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
    if ((pAVar1->fields)._.isActive != 0) {
      fVar2 = (pAVar1->fields)._.prevLookDirection.x;
      fVar3 = (pAVar1->fields)._.prevLookDirection.y;
      (pAVar1->fields)._.elapsedPointingTime = (pAVar1->fields)._.pointingDuration;
      fVar4 = (pAVar1->fields)._.prevLookDirection.z;
      (pAVar1->fields)._.pointingDirection.x = fVar2;
      (pAVar1->fields)._.pointingDirection.y = fVar3;
      (pAVar1->fields)._.pointingDirection.z = fVar4;
      (pAVar1->fields).storedState = 3;
    }
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SynchronizeEmote(Int32) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_SynchronizeEmote
               (AvatarLimbManagerLocal *this,int32_t newEmote,MethodInfo *method)

{
  pAVar1 = (this->fields).dataManager;
  if ((pAVar1 != (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)0x0) &&
     (pLVar2 = (pAVar1->fields).limbRotationRuntimeData, pLVar2 != (LimbRotationRuntimeData *)0x0))
  {
    pMVar3 = (pLVar2->fields).Emote;
    aiStackX_10[0] = newEmote;
    pOVar4 = (Object *)FUN_?(uRam_?,aiStackX_10);
    if (pMVar3 != (MVRuntimeDataVariable *)0x0) {
      pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                          (pOVar4,(MethodInfo *)0x0);
      bVar6 = iRam_? != 0;
      pOVar4 = (pMVar3->fields).value;
      (pMVar3->fields).value = pOVar5;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(pMVar3->fields).value >> 0xc);
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
      if (pOVar4 != pOVar5) {
        if ((pMVar3->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          pMVar11 = (pMVar3->fields).OnChange;
          pOVar4 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                              ((pMVar3->fields).value,(MethodInfo *)0x0);
          (*(pMVar11->fields)._._.invoke_impl)
                    ((pMVar11->fields)._._.method_code,pOVar4,(pMVar11->fields)._._.method);
        }
        if (((pMVar3->fields).writeThrough != 0) &&
           ((pMVar3->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0))
        {
          pMVar12 = (pMVar3->fields).OnWriteThrough;
          pOVar4 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                              ((pMVar3->fields).value,(MethodInfo *)0x0);
          (*(pMVar12->fields)._._.invoke_impl)
                    ((pMVar12->fields)._._.method_code,pOVar4,(pMVar12->fields)._._.method);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SynchronizeHasHandEquippableValue(Boolean) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::
     AvatarLimbManagerLocal_SynchronizeHasHandEquippableValue
               (AvatarLimbManagerLocal *this,bool newHasHandEquippableItemValue,MethodInfo *method)

{
  pAVar1 = (this->fields).dataManager;
  if ((pAVar1 != (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)0x0) &&
     (pLVar2 = (pAVar1->fields).limbRotationRuntimeData, pLVar2 != (LimbRotationRuntimeData *)0x0))
  {
    pMVar3 = (pLVar2->fields).HasHandEquippableItem;
    abStackX_10[0] = newHasHandEquippableItemValue;
    pOVar4 = (Object *)FUN_?(uRam_?,abStackX_10);
    if (pMVar3 != (MVRuntimeDataVariable *)0x0) {
      pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                          (pOVar4,(MethodInfo *)0x0);
      bVar6 = iRam_? != 0;
      pOVar4 = (pMVar3->fields).value;
      (pMVar3->fields).value = pOVar5;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(pMVar3->fields).value >> 0xc);
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
      if (pOVar4 != pOVar5) {
        if ((pMVar3->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          pMVar11 = (pMVar3->fields).OnChange;
          pOVar4 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                              ((pMVar3->fields).value,(MethodInfo *)0x0);
          (*(pMVar11->fields)._._.invoke_impl)
                    ((pMVar11->fields)._._.method_code,pOVar4,(pMVar11->fields)._._.method);
        }
        if (((pMVar3->fields).writeThrough != 0) &&
           ((pMVar3->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0))
        {
          pMVar12 = (pMVar3->fields).OnWriteThrough;
          pOVar4 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                              ((pMVar3->fields).value,(MethodInfo *)0x0);
          (*(pMVar12->fields)._._.invoke_impl)
                    ((pMVar12->fields)._._.method_code,pOVar4,(pMVar12->fields)._._.method);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SynchronizeHeadRotation(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_SynchronizeHeadRotation
               (AvatarLimbManagerLocal *this,Quaternion *newHeadRotation,MethodInfo *method)

{
  pAVar1 = (this->fields).dataManager;
  if (pAVar1 != (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)0x0) {
    QStack_2.x = newHeadRotation->x;
    QStack_2.y = newHeadRotation->y;
    QStack_2.z = newHeadRotation->z;
    QStack_2.w = newHeadRotation->w;
    pLVar3 = (pAVar1->fields).limbRotationRuntimeData;
    if (pLVar3 != (LimbRotationRuntimeData *)0x0) {
      pMVar4 = (pLVar3->fields).HeadRotationYaw;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                          (&VStack_6,&QStack_2,method);
      afStackX_8[0] = pVVar5->y;
      pOVar7 = (Object *)FUN_?(uRam_?,afStackX_8);
      if (pMVar4 != (MVRuntimeDataVariable *)0x0) {
        method_00 = (MethodInfo *)0x0;
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar4,pOVar7,(MethodInfo *)0x0);
        pLVar3 = (pAVar1->fields).limbRotationRuntimeData;
        if (pLVar3 != (LimbRotationRuntimeData *)0x0) {
          pMVar4 = (pLVar3->fields).HeadRotationPitch;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                              (&VStack_6,&QStack_2,method_00);
          afStackX_8[0] = pVVar5->x;
          pOVar7 = (Object *)FUN_?(uRam_?,afStackX_8);
          if (pMVar4 != (MVRuntimeDataVariable *)0x0) {
            pOVar8 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                                (pOVar7,(MethodInfo *)0x0);
            bVar9 = iRam_? != 0;
            pOVar7 = (pMVar4->fields).value;
            (pMVar4->fields).value = pOVar8;
            if (bVar9) {
              uVar10 = (uint)((ulonglong)&(pMVar4->fields).value >> 0xc);
              puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar12 = *puVar11;
                LOCK();
                uVar13 = *puVar11;
                if (uVar12 == uVar13) {
                  *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (uVar12 != uVar13);
            }
            if (pOVar7 != pOVar8) {
              if ((pMVar4->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                pMVar14 = (pMVar4->fields).OnChange;
                pOVar7 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                    ((pMVar4->fields).value,(MethodInfo *)0x0);
                (*(pMVar14->fields)._._.invoke_impl)
                          ((pMVar14->fields)._._.method_code,pOVar7,(pMVar14->fields)._._.method);
              }
              if (((pMVar4->fields).writeThrough != 0) &&
                 ((pMVar4->fields).OnWriteThrough !=
                  (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
                pMVar15 = (pMVar4->fields).OnWriteThrough;
                pOVar7 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                    ((pMVar4->fields).value,(MethodInfo *)0x0);
                (*(pMVar15->fields)._._.invoke_impl)
                          ((pMVar15->fields)._._.method_code,pOVar7,(pMVar15->fields)._._.method);
              }
            }
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


/* Void SynchronizePointing(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_SynchronizePointing
               (AvatarLimbManagerLocal *this,Quaternion *newPointRotation,MethodInfo *method)

{
  pAVar1 = (this->fields).dataManager;
  if (pAVar1 != (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *)0x0) {
    QStack_2.x = newPointRotation->x;
    QStack_2.y = newPointRotation->y;
    QStack_2.z = newPointRotation->z;
    QStack_2.w = newPointRotation->w;
    pLVar3 = (pAVar1->fields).limbRotationRuntimeData;
    if (pLVar3 != (LimbRotationRuntimeData *)0x0) {
      pMVar4 = (pLVar3->fields).PointRotationYaw;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                          (&VStack_6,&QStack_2,method);
      afStackX_8[0] = pVVar5->y;
      pOVar7 = (Object *)FUN_?(uRam_?,afStackX_8);
      if (pMVar4 != (MVRuntimeDataVariable *)0x0) {
        method_00 = (MethodInfo *)0x0;
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar4,pOVar7,(MethodInfo *)0x0);
        pLVar3 = (pAVar1->fields).limbRotationRuntimeData;
        if (pLVar3 != (LimbRotationRuntimeData *)0x0) {
          pMVar4 = (pLVar3->fields).PointRotationPitch;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                              (&VStack_6,&QStack_2,method_00);
          afStackX_8[0] = pVVar5->x;
          pOVar7 = (Object *)FUN_?(uRam_?,afStackX_8);
          if (pMVar4 != (MVRuntimeDataVariable *)0x0) {
            pOVar8 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                                (pOVar7,(MethodInfo *)0x0);
            bVar9 = iRam_? != 0;
            pOVar7 = (pMVar4->fields).value;
            (pMVar4->fields).value = pOVar8;
            if (bVar9) {
              uVar10 = (uint)((ulonglong)&(pMVar4->fields).value >> 0xc);
              puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar12 = *puVar11;
                LOCK();
                uVar13 = *puVar11;
                if (uVar12 == uVar13) {
                  *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (uVar12 != uVar13);
            }
            if (pOVar7 != pOVar8) {
              if ((pMVar4->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                pMVar14 = (pMVar4->fields).OnChange;
                pOVar7 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                    ((pMVar4->fields).value,(MethodInfo *)0x0);
                (*(pMVar14->fields)._._.invoke_impl)
                          ((pMVar14->fields)._._.method_code,pOVar7,(pMVar14->fields)._._.method);
              }
              if (((pMVar4->fields).writeThrough != 0) &&
                 ((pMVar4->fields).OnWriteThrough !=
                  (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
                pMVar15 = (pMVar4->fields).OnWriteThrough;
                pOVar7 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                    ((pMVar4->fields).value,(MethodInfo *)0x0);
                (*(pMVar15->fields)._._.invoke_impl)
                          ((pMVar15->fields)._._.method_code,pOVar7,(pMVar15->fields)._._.method);
              }
            }
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


/* Void UpdateLimbRotations(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal::AvatarLimbManagerLocal_UpdateLimbRotations
               (AvatarLimbManagerLocal *this,Vector3 *lookDirection,MethodInfo *method)

{
  pAVar1 = (this->fields)._.lookDirectionHandler;
  if (pAVar1 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    VStack_2.x = lookDirection->x;
    VStack_2.y = lookDirection->y;
    VStack_2.z = lookDirection->z;
    AvatarLimbManager+AvatarLookDirectionHandler::
    AvatarLimbManager_AvatarLookDirectionHandler_Update(pAVar1,&VStack_2,(MethodInfo *)0x0);
    pAVar1 = (this->fields)._.lookDirectionHandler;
    if (pAVar1 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
      pAVar3 = (this->fields)._.emoteHandler;
      uVar4._0_4_ = (pAVar1->fields).localLookDirection.x;
      uVar4._4_4_ = (pAVar1->fields).localLookDirection.y;
      fVar5 = (pAVar1->fields).localLookDirection.z;
      if (pAVar3 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
        (*(pAVar3->klass->vtable).UpdateEmotes.methodPtr)();
        this_00 = (this->fields).headRotationCalculator;
        pAVar6 = (this->fields).headRotationHandler;
        if (this_00 != (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *)0x0) {
          (this_00->fields).shouldLean = 1;
          VStack_2._0_8_ = uVar4;
          VStack_2.z = fVar5;
          fVar7 = MathFunctions::MathFunctions_SignedYawFromLocalDirection
                             (&VStack_2,(MethodInfo *)0x0);
          if ((fVar7 < _UNK_?) || (_UNK_? < fVar7)) {
            (this_00->fields).shouldLean = 0;
            fVar7 = 0.0;
          }
          fVar8 = _UNK_?;
          if ((fVar7 < _UNK_?) || (fVar8 = _UNK_?, _UNK_? < fVar7)) {
            fVar7 = fVar8;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_2.x = (pVVar9->upVector).x;
          VStack_2.y = (pVVar9->upVector).y;
          VStack_2.z = (pVVar9->upVector).z;
          auStack_10._0_4_ = 0.0;
          auStack_10._4_4_ = 0.0;
          uStack_11._0_4_ = 0.0;
          uStack_11._4_4_ = 0.0;
          pcVar12 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pcRam_? = pcVar12;
          (*pcRam_?)(fVar7,&VStack_2,auStack_10);
          VStack_2._0_8_ = uVar4;
          VStack_2.z = fVar5;
          pQVar13 = AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
                    AvatarLimbManagerLocal_AvatarHeadRotationCalculator_GetClampedPitchRotation
                              (aQStack_14,this_00,&VStack_2,(MethodInfo *)0x0);
          fVar7 = pQVar13->x;
          fVar8 = pQVar13->y;
          fVar15 = pQVar13->z;
          fVar16 = pQVar13->w;
          bVar17 = (this_00->fields).shouldLean;
          if (pAVar6 != (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0) {
            (pAVar6->fields).yawRotation.x = (float)auStack_10._0_4_;
            (pAVar6->fields).yawRotation.y = (float)auStack_10._4_4_;
            (pAVar6->fields).yawRotation.z = (float)uStack_11;
            (pAVar6->fields).yawRotation.w = uStack_11._4_4_;
            (pAVar6->fields)._.shouldLean = bVar17;
            (pAVar6->fields).pitchRotation.x = fVar7;
            (pAVar6->fields).pitchRotation.y = fVar8;
            (pAVar6->fields).pitchRotation.z = fVar15;
            (pAVar6->fields).pitchRotation.w = fVar16;
            pAVar6 = (this->fields).headRotationHandler;
            if (pAVar6 != (AvatarLimbManagerLocal_AvatarHeadRotationHandlerLocal *)0x0) {
              (*(pAVar6->klass->vtable).UpdateRotation.methodPtr)
                        (pAVar6,(pAVar6->klass->vtable).UpdateRotation.method);
              pAVar18 = (this->fields).pointingHandler;
              if ((pAVar18 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) &&
                 (this_01 = (this->fields).pointingRotationCalculator,
                 this_01 != (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)0x0)) {
                VStack_2.x = (pAVar18->fields)._.pointingDirection.x;
                VStack_2.y = (pAVar18->fields)._.pointingDirection.y;
                VStack_2.z = (pAVar18->fields)._.pointingDirection.z;
                pAVar19 = AvatarLimbManagerLocal+AvatarPointingRotationCalculator::
                          AvatarLimbManagerLocal_AvatarPointingRotationCalculator_CalculateRotation
                                    ((AvatarLimbManagerLocal_PointingRotationCalculationResult *)
                                     auStack_20,this_01,&VStack_2,(MethodInfo *)0x0);
                auStack_10._0_4_ = (pAVar19->YawRotation).x;
                auStack_10._4_4_ = (pAVar19->YawRotation).y;
                uStack_11._0_4_ = (pAVar19->YawRotation).z;
                uStack_11._4_4_ = (pAVar19->YawRotation).w;
                uVar21 = *(undefined4 *)&pAVar19->ShouldPoint;
                fVar22 = (pAVar19->PitchRotation).x;
                fVar23 = (pAVar19->PitchRotation).y;
                fVar24 = (pAVar19->PitchRotation).z;
                fVar25 = (pAVar19->PitchRotation).w;
                pQVar13 = AvatarLimbManagerLocal+AvatarPointingHandlerLocal::
                          AvatarLimbManagerLocal_AvatarPointingHandlerLocal_ApplyYawOffset
                                    (aQStack_14,pAVar18,(Quaternion *)auStack_10,(MethodInfo *)0x0);
                fVar7 = pQVar13->x;
                fVar8 = pQVar13->y;
                fVar15 = pQVar13->z;
                fVar16 = pQVar13->w;
                (pAVar18->fields).pitchRotation.x = fVar22;
                (pAVar18->fields).pitchRotation.y = fVar23;
                (pAVar18->fields).pitchRotation.z = fVar24;
                (pAVar18->fields).pitchRotation.w = fVar25;
                (pAVar18->fields).yawRotation.x = fVar7;
                (pAVar18->fields).yawRotation.y = fVar8;
                (pAVar18->fields).yawRotation.z = fVar15;
                (pAVar18->fields).yawRotation.w = fVar16;
                if ((char)uVar21 == '\0') {
                  iVar26 = 0;
                }
                else {
                  iVar26 = (pAVar18->fields).storedState;
                }
                (pAVar18->fields)._.pointState = iVar26;
                pAVar18 = (this->fields).pointingHandler;
                if (pAVar18 != (AvatarLimbManagerLocal_AvatarPointingHandlerLocal *)0x0) {
                  VStack_2._0_8_ = uVar4;
                  VStack_2.z = fVar5;
                  (*(pAVar18->klass->vtable).UpdatePointing.methodPtr)
                            (pAVar18,&VStack_2,(pAVar18->klass->vtable).UpdatePointing.method);
                  AvatarLimbManager::AvatarLimbManager_CheckAvatarRotation
                            ((AvatarLimbManager *)this,(MethodInfo *)0x0);
                  pAVar27 = (this->fields)._.limbRotator;
                  if (pAVar27 != (AvatarLimbManager_LimbRotator *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__GetEnumerator__
                                    ,0);
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__Dispose__
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__MoveNext__
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__get_Current__
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?();
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if ((pAVar27->fields).isActive != 0) {
                      pMVar28 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                          ((MethodInfo *)0x0);
                      if (pMVar28 == (MainCameraManager *)0x0) {
code_?:
                        FUN_?();
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      if ((pMVar28->fields).blueModeEnabled == 0) {
                        pDStack_29 = (Dictionary_2_System_UInt32_System_Object_ *)
                                     (pAVar27->fields).limbControllers;
                        if (pDStack_29 == (Dictionary_2_System_UInt32_System_Object_ *)0x0)
                        goto code_?;
                        auStack_20._8_4_ = 0.0;
                        auStack_20._12_4_ = 0.0;
                        auStack_20._16_4_ = 0.0;
                        auStack_20._20_4_ = 0.0;
                        if (iRam_? != 0) {
                          uVar30 = (uint)((ulonglong)&pDStack_29 >> 0xc);
                          puVar31 = (ulonglong *)
                                   ((ulonglong)((uVar30 & 0x1fffff) >> 6) * 8 + 0xADDR);
                          do {
                            uVar32 = *puVar31;
                            LOCK();
                            uVar33 = *puVar31;
                            if (uVar32 == uVar33) {
                              *puVar31 = uVar32 | 1L << (uVar30 & 0x3f);
                            }
                            UNLOCK();
                          } while (uVar32 != uVar33);
                        }
                        auStack_20._0_4_ = (pDStack_29->fields)._version;
                        auStack_20._4_4_ = 0;
                        auStack_20._24_4_ = 2.8026e-45;
                        auStack_20._28_4_ = 0.0;
                        DStack_34._version = auStack_20._0_4_;
                        DStack_34._index = 0;
                        DStack_34._current.key = 0;
                        DStack_34._current._4_4_ = 0;
                        DStack_34._current.value = (Object *)0x0;
                        DStack_34._getEnumeratorRetType = 2;
                        DStack_34._36_4_ = 0;
                        uStack_35 = 0;
                        pDStack_36 = &DStack_34;
                        DStack_34._dictionary = pDStack_29;
                        while( true ) {
                          bVar17 = mscorlib.dll::System::Collections::Generic::
                                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::
                                   Object]::
                                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                             (&DStack_34,
                                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__MoveNext__
                                             );
                          if (bVar17 == 0) break;
                          if ((LimbController *)DStack_34._current.value == (LimbController *)0x0) {
                            FUN_?();
                            FUN_?();
                            pcVar12 = (code *)swi(3);
                            (*pcVar12)();
                            return;
                          }
                          LimbController::LimbController_UpdateRotation
                                    ((LimbController *)DStack_34._current.value,(MethodInfo *)0x0);
                        }
                      }
                    }
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

