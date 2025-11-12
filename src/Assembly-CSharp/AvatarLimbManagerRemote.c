
/* Void Initialize(MVWorldObjectClient, MVBody, AvatarEnabledChangeHandler, LimbRotationRuntimeData)
    */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_Initialize
               (AvatarLimbManagerRemote *this,MVWorldObjectClient *avatarWO,MVBody *body,
               AvatarEnabledChangeHandler *enabledChangeHandler,
               LimbRotationRuntimeData *limbRotationRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManager__AvatarEmoteHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManagerRemote__AvatarHeadRotationHandlerRemote);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManager__OnStartEmote_System__String_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManagerRemote__AvatarPointingHandlerRemote);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  AvatarLimbManager::AvatarLimbManager_Initialize
            ((AvatarLimbManager *)this,avatarWO,body,enabledChangeHandler,limbRotationRuntimeData,
             (MethodInfo *)0x0);
  pAVar1 = (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)
           FUN_?(TypeInfo__AvatarLimbManagerRemote__AvatarHeadRotationHandlerRemote);
  bVar2 = iRam_? != 0;
  (pAVar1->fields)._.shouldLean = 1;
  (this->fields).headRotationHandler = pAVar1;
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
  pAVar1 = (this->fields).headRotationHandler;
  if (pAVar1 != (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)0x0) {
    (*(pAVar1->klass->vtable).Initialize.methodPtr)
              (pAVar1,this,(this->fields)._.limbRotator,(this->fields)._.lookDirectionHandler,
               (pAVar1->klass->vtable).Initialize.method);
    pAVar7 = (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)
             FUN_?(TypeInfo__AvatarLimbManagerRemote__AvatarPointingHandlerRemote);
    bVar2 = iRam_? != 0;
    (pAVar7->fields)._.pointingDuration = 0.8;
    (pAVar7->fields)._.pointState = 1;
    (pAVar7->fields)._.isActive = 1;
    (this->fields).pointingHandler = pAVar7;
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
    pAVar7 = (this->fields).pointingHandler;
    if (pAVar7 != (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
      (*(pAVar7->klass->vtable).Initialize.methodPtr)
                (pAVar7,this,(this->fields)._.limbRotator,enabledChangeHandler,
                 (pAVar7->klass->vtable).Initialize.method);
      pAVar8 = (AvatarLimbManager_AvatarEmoteHandler *)
               FUN_?(TypeInfo__AvatarLimbManager__AvatarEmoteHandler);
      AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler__ctor
                (pAVar8,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (this->fields)._.emoteHandler = pAVar8;
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
      pAVar8 = (this->fields)._.emoteHandler;
      if (pAVar8 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
        AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_Initialize
                  (pAVar8,(AvatarLimbManager *)this,(this->fields)._.lookDirectionHandler,
                   (AvatarLimbManager_AvatarPointingHandler *)(this->fields).pointingHandler,
                   (AvatarLimbManager_AvatarHeadRotationHandler *)(this->fields).headRotationHandler
                   ,(this->fields)._.limbRotator,enabledChangeHandler,(MethodInfo *)0x0);
        pAVar8 = (this->fields)._.emoteHandler;
        if (pAVar8 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
          pAVar9 = (pAVar8->fields).OnEmoteStart;
          pUVar10 = (UnityAction_1_System_Object_ *)
                   FUN_?(TypeInfo__System__Action<System::String>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (pUVar10,(Object *)this,
                     MethodInfo__AvatarLimbManager__OnStartEmote_System__String_,(MethodInfo *)0x0);
          pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
          pAVar12 = TypeInfo__System__Action<System::String>;
          if (pDVar11 == (Delegate *)0x0) {
            (pAVar8->fields).OnEmoteStart = (Action_1_String_ *)0x0;
          }
          else {
            pAVar9 = (Action_1_String_ *)
                      FUN_?(pDVar11,TypeInfo__System__Action<System::String>);
            if (pAVar9 == (Action_1_String_ *)0x0) {
              FUN_?(pDVar11,pAVar12);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            (pAVar8->fields).OnEmoteStart = pAVar9;
            pAVar12 = TypeInfo__System__Action<System::String>;
            lVar14 = FUN_?(pDVar11,TypeInfo__System__Action<System::String>);
            if (lVar14 == 0) {
              FUN_?(pDVar11,pAVar12);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&(pAVar8->fields).OnEmoteStart >> 0xc);
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
          pAVar15 = (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *)
                    FUN_?(TypeInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote);
          bVar2 = iRam_? != 0;
          (this->fields).dataManager = pAVar15;
          if (bVar2) {
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
          pAVar15 = (this->fields).dataManager;
          if (pAVar15 != (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnEmoteDataChange_System__Object_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnHeadPitchChange_System__Object_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnHeadYawChange_System__Object_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointPitchChange_System__Object_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointYawChange_System__Object_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointingWeaponChange_System__Object_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            bVar2 = iRam_? != 0;
            (pAVar15->fields).limbManager = this;
            if (bVar2) {
              uVar3 = (uint)((ulonglong)&(pAVar15->fields).limbManager >> 0xc);
              lVar14 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
              do {
                uVar4 = *(ulonglong *)(lVar14 + 0xADDR);
                puVar6 = (ulonglong *)(lVar14 + 0xADDR);
                LOCK();
                bVar2 = uVar4 == *puVar6;
                if (bVar2) {
                  *puVar6 = uVar4 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar2);
            }
            if ((limbRotationRuntimeData != (LimbRotationRuntimeData *)0x0) &&
               (pMVar16 = (limbRotationRuntimeData->fields).HeadRotationYaw,
               pMVar16 != (MVRuntimeDataVariable *)0x0)) {
              pMVar17 = (pMVar16->fields).OnChange;
              pUVar10 = (UnityAction_1_System_Object_ *)
                       FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (pUVar10,(Object *)pAVar15,
                         MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnHeadYawChange_System__Object_
                         ,(MethodInfo *)0x0);
              pMVar18 = (MVRuntimeDataVariable_OnChangeDelegate *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pMVar17,(Delegate *)pUVar10,(MethodInfo *)0x0);
              pMVar17 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              if (pMVar18 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                (pMVar16->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              }
              else {
                pMVar19 = pMVar17;
                if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                  pMVar19 = pMVar18;
                }
                if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  FUN_?();
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                (pMVar16->fields).OnChange = pMVar19;
                pMVar19 = pMVar17;
                if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                  pMVar19 = pMVar18;
                }
                if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  FUN_?();
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar3 = (uint)((ulonglong)&(pMVar16->fields).OnChange >> 0xc);
                lVar14 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                do {
                  uVar4 = *(ulonglong *)(lVar14 + 0xADDR);
                  puVar6 = (ulonglong *)(lVar14 + 0xADDR);
                  LOCK();
                  bVar2 = uVar4 == *puVar6;
                  if (bVar2) {
                    *puVar6 = uVar4 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar2);
              }
              pMVar16 = (limbRotationRuntimeData->fields).HeadRotationPitch;
              if (pMVar16 != (MVRuntimeDataVariable *)0x0) {
                pMVar18 = (pMVar16->fields).OnChange;
                pUVar10 = (UnityAction_1_System_Object_ *)
                         FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                UnityAction_1_System_Object___ctor
                          (pUVar10,(Object *)pAVar15,
                           MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnHeadPitchChange_System__Object_
                           ,(MethodInfo *)0x0);
                pMVar18 = (MVRuntimeDataVariable_OnChangeDelegate *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pMVar18,(Delegate *)pUVar10,(MethodInfo *)0x0);
                if (pMVar18 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  (pMVar16->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                }
                else {
                  pMVar19 = pMVar17;
                  if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                    pMVar19 = pMVar18;
                  }
                  if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                    FUN_?();
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  (pMVar16->fields).OnChange = pMVar19;
                  pMVar19 = pMVar17;
                  if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                    pMVar19 = pMVar18;
                  }
                  if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                    FUN_?();
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar3 = (uint)((ulonglong)&(pMVar16->fields).OnChange >> 0xc);
                  lVar14 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar4 = *(ulonglong *)(lVar14 + 0xADDR);
                    puVar6 = (ulonglong *)(lVar14 + 0xADDR);
                    LOCK();
                    bVar2 = uVar4 == *puVar6;
                    if (bVar2) {
                      *puVar6 = uVar4 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar2);
                }
                pMVar16 = (limbRotationRuntimeData->fields).PointRotationYaw;
                if (pMVar16 != (MVRuntimeDataVariable *)0x0) {
                  pMVar18 = (pMVar16->fields).OnChange;
                  pUVar10 = (UnityAction_1_System_Object_ *)
                           FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                  UnityAction_1_System_Object___ctor
                            (pUVar10,(Object *)pAVar15,
                             MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointYawChange_System__Object_
                             ,(MethodInfo *)0x0);
                  pMVar18 = (MVRuntimeDataVariable_OnChangeDelegate *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pMVar18,(Delegate *)pUVar10,(MethodInfo *)0x0);
                  if (pMVar18 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                    (pMVar16->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                  }
                  else {
                    pMVar19 = pMVar17;
                    if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                      pMVar19 = pMVar18;
                    }
                    if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                      FUN_?();
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    (pMVar16->fields).OnChange = pMVar19;
                    pMVar19 = pMVar17;
                    if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                      pMVar19 = pMVar18;
                    }
                    if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                      FUN_?();
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                  }
                  if (iRam_? != 0) {
                    uVar3 = (uint)((ulonglong)&(pMVar16->fields).OnChange >> 0xc);
                    lVar14 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar4 = *(ulonglong *)(lVar14 + 0xADDR);
                      puVar6 = (ulonglong *)(lVar14 + 0xADDR);
                      LOCK();
                      bVar2 = uVar4 == *puVar6;
                      if (bVar2) {
                        *puVar6 = uVar4 | 1L << (uVar3 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar2);
                  }
                  pMVar16 = (limbRotationRuntimeData->fields).PointRotationPitch;
                  if (pMVar16 != (MVRuntimeDataVariable *)0x0) {
                    pMVar18 = (pMVar16->fields).OnChange;
                    pUVar10 = (UnityAction_1_System_Object_ *)
                             FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                    UnityAction_1_System_Object___ctor
                              (pUVar10,(Object *)pAVar15,
                               MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointPitchChange_System__Object_
                               ,(MethodInfo *)0x0);
                    pMVar18 = (MVRuntimeDataVariable_OnChangeDelegate *)
                              mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pMVar18,(Delegate *)pUVar10,(MethodInfo *)0x0);
                    if (pMVar18 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                      (pMVar16->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                    }
                    else {
                      pMVar19 = pMVar17;
                      if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                        pMVar19 = pMVar18;
                      }
                      if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                        FUN_?();
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      (pMVar16->fields).OnChange = pMVar19;
                      pMVar19 = pMVar17;
                      if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                        pMVar19 = pMVar18;
                      }
                      if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                        FUN_?();
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                    }
                    if (iRam_? != 0) {
                      uVar3 = (uint)((ulonglong)&(pMVar16->fields).OnChange >> 0xc);
                      lVar14 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar4 = *(ulonglong *)(lVar14 + 0xADDR);
                        puVar6 = (ulonglong *)(lVar14 + 0xADDR);
                        LOCK();
                        bVar2 = uVar4 == *puVar6;
                        if (bVar2) {
                          *puVar6 = uVar4 | 1L << (uVar3 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar2);
                    }
                    pMVar16 = (limbRotationRuntimeData->fields).HasHandEquippableItem;
                    if (pMVar16 != (MVRuntimeDataVariable *)0x0) {
                      pMVar18 = (pMVar16->fields).OnChange;
                      pUVar10 = (UnityAction_1_System_Object_ *)
                               FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]
                      ::UnityAction_1_System_Object___ctor
                                (pUVar10,(Object *)pAVar15,
                                 MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointingWeaponChange_System__Object_
                                 ,(MethodInfo *)0x0);
                      pMVar18 = (MVRuntimeDataVariable_OnChangeDelegate *)
                                mscorlib.dll::System::Delegate::Delegate_Combine
                                          ((Delegate *)pMVar18,(Delegate *)pUVar10,(MethodInfo *)0x0)
                      ;
                      if (pMVar18 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                        (pMVar16->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                      }
                      else {
                        pMVar19 = pMVar17;
                        if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                          pMVar19 = pMVar18;
                        }
                        if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                          FUN_?();
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        (pMVar16->fields).OnChange = pMVar19;
                        pMVar19 = pMVar17;
                        if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                          pMVar19 = pMVar18;
                        }
                        if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                          FUN_?();
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                      }
                      if (iRam_? != 0) {
                        uVar3 = (uint)((ulonglong)&(pMVar16->fields).OnChange >> 0xc);
                        lVar14 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar4 = *(ulonglong *)(lVar14 + 0xADDR);
                          puVar6 = (ulonglong *)(lVar14 + 0xADDR);
                          LOCK();
                          bVar2 = uVar4 == *puVar6;
                          if (bVar2) {
                            *puVar6 = uVar4 | 1L << (uVar3 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar2);
                      }
                      pMVar16 = (limbRotationRuntimeData->fields).Emote;
                      if (pMVar16 != (MVRuntimeDataVariable *)0x0) {
                        pMVar18 = (pMVar16->fields).OnChange;
                        pUVar10 = (UnityAction_1_System_Object_ *)
                                 FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Object]::UnityAction_1_System_Object___ctor
                                  (pUVar10,(Object *)pAVar15,
                                   MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnEmoteDataChange_System__Object_
                                   ,(MethodInfo *)0x0);
                        pMVar18 = (MVRuntimeDataVariable_OnChangeDelegate *)
                                  mscorlib.dll::System::Delegate::Delegate_Combine
                                            ((Delegate *)pMVar18,(Delegate *)pUVar10,
                                             (MethodInfo *)0x0);
                        if (pMVar18 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                          (pMVar16->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                        }
                        else {
                          pMVar19 = pMVar17;
                          if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                            pMVar19 = pMVar18;
                          }
                          if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                            FUN_?(pMVar18);
                            pcVar13 = (code *)swi(3);
                            (*pcVar13)();
                            return;
                          }
                          (pMVar16->fields).OnChange = pMVar19;
                          if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                            pMVar17 = pMVar18;
                          }
                          if (pMVar17 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                            FUN_?(pMVar18);
                            pcVar13 = (code *)swi(3);
                            (*pcVar13)();
                            return;
                          }
                        }
                        if (iRam_? != 0) {
                          uVar3 = (uint)((ulonglong)&(pMVar16->fields).OnChange >> 0xc);
                          lVar14 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar4 = *(ulonglong *)(lVar14 + 0xADDR);
                            puVar6 = (ulonglong *)(lVar14 + 0xADDR);
                            LOCK();
                            bVar2 = uVar4 == *puVar6;
                            if (bVar2) {
                              *puVar6 = uVar4 | 1L << (uVar3 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar2);
                        }
                        return;
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
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void StartEmote(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_StartEmote
               (AvatarLimbManagerRemote *this,EmoteTypes__Enum emoteType,MethodInfo *method)

{
  this_00 = (this->fields)._.emoteHandler;
  if (this_00 == (AvatarLimbManager_AvatarEmoteHandler *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((char)emoteType != '\0') {
    this_01 = (this_00->fields).emoteDatas;
    if (this_01 == (Dictionary_2_EmoteTypes_AvatarLimbManager_EmoteData_ *)0x0)
    goto code_?;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,emoteType & 0xff,
                        MethodInfo__System__Collections__Generic__Dictionary<EmoteTypes,_AvatarLimbManager::EmoteData>__get_Item_EmoteTypes_
                       );
    if ((this_00->fields).isActive == 0) {
      return;
    }
    if ((this_00->fields).currentRunningEmoteData != (AvatarLimbManager_EmoteData *)0x0) {
      pAVar2 = (this_00->fields).currentRunningEmoteData;
      if (pOVar1 == (Object *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(short *)&pOVar1[1].monitor <= (pAVar2->fields).priority) {
        return;
      }
      pAVar4 = (pAVar2->fields).emote;
      if (pAVar4 == (AvatarLimbManager_AvatarEmote *)0x0) goto code_?;
      (*(pAVar4->klass->vtable).StopEmote.methodPtr)
                (pAVar4,(pAVar4->klass->vtable).StopEmote.method);
    }
    AvatarLimbManager+AvatarEmoteHandler::AvatarLimbManager_AvatarEmoteHandler_StartEmote
              (this_00,emoteType & 0xff,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateHeadRotationRemotely(Single, Single) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::
     AvatarLimbManagerRemote_UpdateHeadRotationRemotely
               (AvatarLimbManagerRemote *this,float yaw,float pitch,MethodInfo *method)

{
  this_00 = (this->fields).headRotationHandler;
  if (this_00 != (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_Idle);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields)._.limbRotator;
    (this_00->fields)._.idleTime = 0.0;
    if (this_01 != (AvatarLimbManager_LimbRotator *)0x0) {
      AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_StopBlendingWithAnimation
                (this_01,BodyData_PartIndex__Enum_Head,StringLiteral_Idle,(MethodInfo *)0x0);
      uStack_1 = (ulonglong)(uint)(yaw * _UNK_?) << 0x20;
      uStack_2 = 0;
      QStack_3.x = 0.0;
      QStack_3.y = 0.0;
      QStack_3.z = 0.0;
      QStack_3.w = 0.0;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(&uStack_1,&QStack_3);
      (this_00->fields).remoteYawRotation.x = QStack_3.x;
      (this_00->fields).remoteYawRotation.y = QStack_3.y;
      (this_00->fields).remoteYawRotation.z = QStack_3.z;
      (this_00->fields).remoteYawRotation.w = QStack_3.w;
      pQVar6 = AvatarLimbManager+AvatarHeadRotationHandler::
               AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                         (aQStack_7,(AvatarLimbManager_AvatarHeadRotationHandler *)this_00,
                          &QStack_3,(MethodInfo *)0x0);
      fVar8 = pitch * _UNK_?;
      fVar9 = pQVar6->y;
      fVar10 = pQVar6->z;
      fVar11 = pQVar6->w;
      (this_00->fields).remoteYawRotation.x = pQVar6->x;
      (this_00->fields).remoteYawRotation.y = fVar9;
      (this_00->fields).remoteYawRotation.z = fVar10;
      (this_00->fields).remoteYawRotation.w = fVar11;
      uStack_2 = 0;
      uStack_1 = (ulonglong)(uint)fVar8;
      QStack_3.x = 0.0;
      QStack_3.y = 0.0;
      QStack_3.z = 0.0;
      QStack_3.w = 0.0;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(&uStack_1,&QStack_3);
      (this_00->fields).remotePitchRotation.x = QStack_3.x;
      (this_00->fields).remotePitchRotation.y = QStack_3.y;
      (this_00->fields).remotePitchRotation.z = QStack_3.z;
      (this_00->fields).remotePitchRotation.w = QStack_3.w;
      pQVar6 = AvatarLimbManager+AvatarHeadRotationHandler::
               AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                         (aQStack_7,(AvatarLimbManager_AvatarHeadRotationHandler *)this_00,
                          &QStack_3,(MethodInfo *)0x0);
      fVar9 = pQVar6->y;
      fVar10 = pQVar6->z;
      fVar11 = pQVar6->w;
      (this_00->fields).remotePitchRotation.x = pQVar6->x;
      (this_00->fields).remotePitchRotation.y = fVar9;
      (this_00->fields).remotePitchRotation.z = fVar10;
      (this_00->fields).remotePitchRotation.w = fVar11;
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateLimbRotations(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdateLimbRotations
               (AvatarLimbManagerRemote *this,Vector3 *lookDirection,MethodInfo *method)

{
  pAVar1 = (this->fields)._.lookDirectionHandler;
  if (pAVar1 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    auStack_2._32_4_ = (int32_t)lookDirection->x;
    auStack_2._36_4_ = lookDirection->y;
    fStack_3 = lookDirection->z;
    AvatarLimbManager+AvatarLookDirectionHandler::
    AvatarLimbManager_AvatarLookDirectionHandler_Update
              (pAVar1,(Vector3 *)(auStack_2 + 0x20),(MethodInfo *)0x0);
    pAVar1 = (this->fields)._.lookDirectionHandler;
    if (pAVar1 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
      pAVar4 = (this->fields)._.emoteHandler;
      uVar5._0_4_ = (int32_t)(pAVar1->fields).localLookDirection.x;
      uVar5._4_4_ = (pAVar1->fields).localLookDirection.y;
      fVar6 = (pAVar1->fields).localLookDirection.z;
      if (pAVar4 != (AvatarLimbManager_AvatarEmoteHandler *)0x0) {
        (*(pAVar4->klass->vtable).UpdateEmotes.methodPtr)
                  (pAVar4,(pAVar4->klass->vtable).UpdateEmotes.method);
        pAVar7 = (this->fields).headRotationHandler;
        if (pAVar7 != (AvatarLimbManagerRemote_AvatarHeadRotationHandlerRemote *)0x0) {
          (*(pAVar7->klass->vtable).UpdateRotation.methodPtr)
                    (pAVar7,(pAVar7->klass->vtable).UpdateRotation.method);
          pAVar8 = (this->fields).pointingHandler;
          if (pAVar8 != (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
            auStack_2._32_8_ = uVar5;
            fStack_3 = fVar6;
            (*(pAVar8->klass->vtable).UpdatePointing.methodPtr)
                      (pAVar8,auStack_2 + 0x20,(pAVar8->klass->vtable).UpdatePointing.method);
            AvatarLimbManager::AvatarLimbManager_CheckAvatarRotation
                      ((AvatarLimbManager *)this,(MethodInfo *)0x0);
            pAVar9 = (this->fields)._.limbRotator;
            if (pAVar9 != (AvatarLimbManager_LimbRotator *)0x0) {
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
              if ((pAVar9->fields).isActive != 0) {
                pMVar10 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (pMVar10 == (MainCameraManager *)0x0) {
code_?:
                  FUN_?();
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                if ((pMVar10->fields).blueModeEnabled == 0) {
                  pDStack_12 = (Dictionary_2_System_UInt32_System_Object_ *)
                               (pAVar9->fields).limbControllers;
                  if (pDStack_12 == (Dictionary_2_System_UInt32_System_Object_ *)0x0)
                  goto code_?;
                  uStack_13 = 0;
                  uStack_14 = 0;
                  if (iRam_? != 0) {
                    uVar15 = (uint)((ulonglong)&pDStack_12 >> 0xc);
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
                  uStack_19 = (ulonglong)(uint)(pDStack_12->fields)._version;
                  puStack_20 = (undefined *)0x2;
                  auStack_2._8_8_ = uStack_19;
                  auStack_2._16_8_ = 0;
                  auStack_2._24_8_ = (LimbController *)0x0;
                  auStack_2._32_8_ = 2;
                  auStack_2._0_8_ = pDStack_12;
                  while (bVar21 = mscorlib.dll::System::Collections::Generic::
                                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::
                                  Object]::
                                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                            ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                              *)auStack_2,
                                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<BodyData::PartIndex,_LimbController>__MoveNext__
                                            ), bVar21 != 0) {
                    if ((LimbController *)auStack_2._24_8_ == (LimbController *)0x0) {
                      FUN_?();
                      FUN_?();
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    LimbController::LimbController_UpdateRotation
                              ((LimbController *)auStack_2._24_8_,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void UpdatePointingRemotely(Single, Single, Boolean) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote::AvatarLimbManagerRemote_UpdatePointingRemotely
               (AvatarLimbManagerRemote *this,float yaw,float pitch,bool isPointingWeapon,
               MethodInfo *method)

{
  pAVar1 = (this->fields).pointingHandler;
  if (pAVar1 == (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pAVar1->fields)._.isActive != 0) {
    (pAVar1->fields)._.pointState = isPointingWeapon + 1;
    if (isPointingWeapon == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
      aQStack_4[0].x = (pQVar3->identityQuaternion).x;
      aQStack_4[0].y = (pQVar3->identityQuaternion).y;
      aQStack_4[0].z = (pQVar3->identityQuaternion).z;
      aQStack_4[0].w = (pQVar3->identityQuaternion).w;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                         (&VStack_6,aQStack_4,in_R8);
      if (yaw == pVVar5->y) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
        aQStack_4[0].x = (pQVar3->identityQuaternion).x;
        aQStack_4[0].y = (pQVar3->identityQuaternion).y;
        aQStack_4[0].z = (pQVar3->identityQuaternion).z;
        aQStack_4[0].w = (pQVar3->identityQuaternion).w;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                           (&VStack_6,aQStack_4,in_R8);
        if (pitch == pVVar5->x) {
          (pAVar1->fields)._.pointState = 0;
          return;
        }
      }
    }
    VStack_6._0_8_ = (ulonglong)(uint)yaw << 0x20;
    VStack_6.z = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_set_eulerAngles
              (&(pAVar1->fields).remoteYawRotation,&VStack_6,in_R8);
    VStack_6.z = 0.0;
    VStack_6._0_8_ = ZEXT48((uint)pitch);
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_set_eulerAngles
              (&(pAVar1->fields).remotePitchRotation,&VStack_6,in_R8);
    (pAVar1->fields)._.elapsedPointingTime = (pAVar1->fields)._.pointingDuration;
    return;
  }
  return;
}

