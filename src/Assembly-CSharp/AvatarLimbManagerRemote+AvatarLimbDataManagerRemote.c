
/* Void Initialize(LimbRotationRuntimeData, AvatarLimbManagerRemote) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_Initialize
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,
               LimbRotationRuntimeData *limbRotationRuntimeData,AvatarLimbManagerRemote *limbManager
               ,MethodInfo *method)

{
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
  bVar1 = iRam_? != 0;
  (this->fields).limbManager = limbManager;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).limbManager >> 0xc);
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
  if ((limbRotationRuntimeData != (LimbRotationRuntimeData *)0x0) &&
     (pMVar6 = (limbRotationRuntimeData->fields).HeadRotationYaw,
     pMVar6 != (MVRuntimeDataVariable *)0x0)) {
    pMVar7 = (pMVar6->fields).OnChange;
    pUVar8 = (UnityAction_1_System_Object_ *)
             FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (pUVar8,(Object *)this,
               MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnHeadYawChange_System__Object_
               ,(MethodInfo *)0x0);
    pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pMVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
    pMVar7 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar6->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    }
    else {
      pMVar10 = pMVar7;
      if (pMVar9->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar10 = pMVar9;
      }
      if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      (pMVar6->fields).OnChange = pMVar10;
      pMVar10 = pMVar7;
      if (pMVar9->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar10 = pMVar9;
      }
      if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(pMVar6->fields).OnChange >> 0xc);
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
    pMVar6 = (limbRotationRuntimeData->fields).HeadRotationPitch;
    if (pMVar6 != (MVRuntimeDataVariable *)0x0) {
      pMVar9 = (pMVar6->fields).OnChange;
      pUVar8 = (UnityAction_1_System_Object_ *)
               FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (pUVar8,(Object *)this,
                 MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnHeadPitchChange_System__Object_
                 ,(MethodInfo *)0x0);
      pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar9,(Delegate *)pUVar8,(MethodInfo *)0x0);
      if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (pMVar6->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      }
      else {
        pMVar10 = pMVar7;
        if (pMVar9->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar10 = pMVar9;
        }
        if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (pMVar6->fields).OnChange = pMVar10;
        pMVar10 = pMVar7;
        if (pMVar9->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar10 = pMVar9;
        }
        if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pMVar6->fields).OnChange >> 0xc);
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
      pMVar6 = (limbRotationRuntimeData->fields).PointRotationYaw;
      if (pMVar6 != (MVRuntimeDataVariable *)0x0) {
        pMVar9 = (pMVar6->fields).OnChange;
        pUVar8 = (UnityAction_1_System_Object_ *)
                 FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (pUVar8,(Object *)this,
                   MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointYawChange_System__Object_
                   ,(MethodInfo *)0x0);
        pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pMVar9,(Delegate *)pUVar8,(MethodInfo *)0x0);
        if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          (pMVar6->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        }
        else {
          pMVar10 = pMVar7;
          if (pMVar9->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar10 = pMVar9;
          }
          if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          (pMVar6->fields).OnChange = pMVar10;
          pMVar10 = pMVar7;
          if (pMVar9->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
            pMVar10 = pMVar9;
          }
          if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&(pMVar6->fields).OnChange >> 0xc);
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
        pMVar6 = (limbRotationRuntimeData->fields).PointRotationPitch;
        if (pMVar6 != (MVRuntimeDataVariable *)0x0) {
          pMVar9 = (pMVar6->fields).OnChange;
          pUVar8 = (UnityAction_1_System_Object_ *)
                   FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (pUVar8,(Object *)this,
                     MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointPitchChange_System__Object_
                     ,(MethodInfo *)0x0);
          pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pMVar9,(Delegate *)pUVar8,(MethodInfo *)0x0);
          if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
            (pMVar6->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
          }
          else {
            pMVar10 = pMVar7;
            if (pMVar9->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
              pMVar10 = pMVar9;
            }
            if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              FUN_?();
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            (pMVar6->fields).OnChange = pMVar10;
            pMVar10 = pMVar7;
            if (pMVar9->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
              pMVar10 = pMVar9;
            }
            if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              FUN_?();
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&(pMVar6->fields).OnChange >> 0xc);
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
          pMVar6 = (limbRotationRuntimeData->fields).HasHandEquippableItem;
          if (pMVar6 != (MVRuntimeDataVariable *)0x0) {
            pMVar9 = (pMVar6->fields).OnChange;
            pUVar8 = (UnityAction_1_System_Object_ *)
                     FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (pUVar8,(Object *)this,
                       MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnPointingWeaponChange_System__Object_
                       ,(MethodInfo *)0x0);
            pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pMVar9,(Delegate *)pUVar8,(MethodInfo *)0x0);
            if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              (pMVar6->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            }
            else {
              pMVar10 = pMVar7;
              if (pMVar9->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar10 = pMVar9;
              }
              if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              (pMVar6->fields).OnChange = pMVar10;
              pMVar10 = pMVar7;
              if (pMVar9->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar10 = pMVar9;
              }
              if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar2 = (uint)((ulonglong)&(pMVar6->fields).OnChange >> 0xc);
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
            pMVar6 = (limbRotationRuntimeData->fields).Emote;
            if (pMVar6 != (MVRuntimeDataVariable *)0x0) {
              pMVar9 = (pMVar6->fields).OnChange;
              pUVar8 = (UnityAction_1_System_Object_ *)
                       FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (pUVar8,(Object *)this,
                         MethodInfo__AvatarLimbManagerRemote__AvatarLimbDataManagerRemote__OnEmoteDataChange_System__Object_
                         ,(MethodInfo *)0x0);
              pMVar9 = (MVRuntimeDataVariable_OnChangeDelegate *)
                       mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)pMVar9,(Delegate *)pUVar8,(MethodInfo *)0x0);
              if (pMVar9 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                (pMVar6->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
              }
              else {
                pMVar10 = pMVar7;
                if (pMVar9->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                  pMVar10 = pMVar9;
                }
                if (pMVar10 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  FUN_?(pMVar9);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                (pMVar6->fields).OnChange = pMVar10;
                if (pMVar9->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                  pMVar7 = pMVar9;
                }
                if (pMVar7 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  FUN_?(pMVar9);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar2 = (uint)((ulonglong)&(pMVar6->fields).OnChange >> 0xc);
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


/* Void OnEmoteDataChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnEmoteDataChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *newEmoteData,
               MethodInfo *method)

{
  if (newEmoteData != (Object *)0x0) {
    method = (MethodInfo *)newEmoteData->klass;
    if ((((Object__Class *)method)->_0).element_class !=
        *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(newEmoteData);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pAVar2 = (this->fields).limbManager;
    this = (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *)0x0;
    if (pAVar2 != (AvatarLimbManagerRemote *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar2->klass->vtable).StartEmote.methodPtr)
                (pAVar2,(ulonglong)*(byte *)&newEmoteData[1].klass,
                 (pAVar2->klass->vtable).StartEmote.method);
      return;
    }
  }
  FUN_?(this,lRam_?,method);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnHeadPitchChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnHeadPitchChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *headPitch,
               MethodInfo *method)

{
  lVar1 = lRam_?;
  if (headPitch != (Object *)0x0) {
    method = (MethodInfo *)headPitch->klass;
    if ((((Object__Class *)method)->_0).element_class !=
        *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(headPitch);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pAVar3 = (this->fields).limbManager;
    fVar4 = *(float *)&headPitch[1].klass;
    (this->fields).newHeadPitchValue = fVar4;
    if (pAVar3 != (AvatarLimbManagerRemote *)0x0) {
      fVar5 = (this->fields).newHeadYawValue;
      this_00 = (pAVar3->fields).headRotationHandler;
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
          uStack_6 = (ulonglong)(uint)(fVar5 * _UNK_?) << 0x20;
          uStack_7 = 0;
          QStack_8.x = 0.0;
          QStack_8.y = 0.0;
          QStack_8.z = 0.0;
          QStack_8.w = 0.0;
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(&uStack_6,&QStack_8);
          (this_00->fields).remoteYawRotation.x = QStack_8.x;
          (this_00->fields).remoteYawRotation.y = QStack_8.y;
          (this_00->fields).remoteYawRotation.z = QStack_8.z;
          (this_00->fields).remoteYawRotation.w = QStack_8.w;
          pQVar10 = AvatarLimbManager+AvatarHeadRotationHandler::
                   AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                             (&QStack_11,(AvatarLimbManager_AvatarHeadRotationHandler *)this_00,
                              &QStack_8,(MethodInfo *)0x0);
          fVar4 = fVar4 * _UNK_?;
          fVar5 = pQVar10->y;
          fVar12 = pQVar10->z;
          fVar13 = pQVar10->w;
          (this_00->fields).remoteYawRotation.x = pQVar10->x;
          (this_00->fields).remoteYawRotation.y = fVar5;
          (this_00->fields).remoteYawRotation.z = fVar12;
          (this_00->fields).remoteYawRotation.w = fVar13;
          uStack_7 = 0;
          uStack_6 = (ulonglong)(uint)fVar4;
          QStack_8.x = 0.0;
          QStack_8.y = 0.0;
          QStack_8.z = 0.0;
          QStack_8.w = 0.0;
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(&uStack_6,&QStack_8);
          (this_00->fields).remotePitchRotation.x = QStack_8.x;
          (this_00->fields).remotePitchRotation.y = QStack_8.y;
          (this_00->fields).remotePitchRotation.z = QStack_8.z;
          (this_00->fields).remotePitchRotation.w = QStack_8.w;
          pQVar10 = AvatarLimbManager+AvatarHeadRotationHandler::
                   AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                             (&QStack_11,(AvatarLimbManager_AvatarHeadRotationHandler *)this_00,
                              &QStack_8,(MethodInfo *)0x0);
          fVar4 = pQVar10->y;
          fVar5 = pQVar10->z;
          fVar12 = pQVar10->w;
          (this_00->fields).remotePitchRotation.x = pQVar10->x;
          (this_00->fields).remotePitchRotation.y = fVar4;
          (this_00->fields).remotePitchRotation.z = fVar5;
          (this_00->fields).remotePitchRotation.w = fVar12;
          return;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUN_?(this,lVar1,method);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnHeadYawChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnHeadYawChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *headYaw,
               MethodInfo *method)

{
  lVar1 = lRam_?;
  if (headYaw != (Object *)0x0) {
    method = (MethodInfo *)headYaw->klass;
    if ((((Object__Class *)method)->_0).element_class !=
        *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(headYaw);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pAVar3 = (this->fields).limbManager;
    fVar4 = *(float *)&headYaw[1].klass;
    (this->fields).newHeadYawValue = fVar4;
    if (pAVar3 != (AvatarLimbManagerRemote *)0x0) {
      fVar5 = (this->fields).newHeadPitchValue;
      this_00 = (pAVar3->fields).headRotationHandler;
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
          uStack_6 = (ulonglong)(uint)(fVar4 * _UNK_?) << 0x20;
          uStack_7 = 0;
          QStack_8.x = 0.0;
          QStack_8.y = 0.0;
          QStack_8.z = 0.0;
          QStack_8.w = 0.0;
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(&uStack_6,&QStack_8);
          (this_00->fields).remoteYawRotation.x = QStack_8.x;
          (this_00->fields).remoteYawRotation.y = QStack_8.y;
          (this_00->fields).remoteYawRotation.z = QStack_8.z;
          (this_00->fields).remoteYawRotation.w = QStack_8.w;
          pQVar10 = AvatarLimbManager+AvatarHeadRotationHandler::
                   AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                             (&QStack_11,(AvatarLimbManager_AvatarHeadRotationHandler *)this_00,
                              &QStack_8,(MethodInfo *)0x0);
          fVar5 = fVar5 * _UNK_?;
          fVar4 = pQVar10->y;
          fVar12 = pQVar10->z;
          fVar13 = pQVar10->w;
          (this_00->fields).remoteYawRotation.x = pQVar10->x;
          (this_00->fields).remoteYawRotation.y = fVar4;
          (this_00->fields).remoteYawRotation.z = fVar12;
          (this_00->fields).remoteYawRotation.w = fVar13;
          uStack_7 = 0;
          uStack_6 = (ulonglong)(uint)fVar5;
          QStack_8.x = 0.0;
          QStack_8.y = 0.0;
          QStack_8.z = 0.0;
          QStack_8.w = 0.0;
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(&uStack_6,&QStack_8);
          (this_00->fields).remotePitchRotation.x = QStack_8.x;
          (this_00->fields).remotePitchRotation.y = QStack_8.y;
          (this_00->fields).remotePitchRotation.z = QStack_8.z;
          (this_00->fields).remotePitchRotation.w = QStack_8.w;
          pQVar10 = AvatarLimbManager+AvatarHeadRotationHandler::
                   AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                             (&QStack_11,(AvatarLimbManager_AvatarHeadRotationHandler *)this_00,
                              &QStack_8,(MethodInfo *)0x0);
          fVar4 = pQVar10->y;
          fVar5 = pQVar10->z;
          fVar12 = pQVar10->w;
          (this_00->fields).remotePitchRotation.x = pQVar10->x;
          (this_00->fields).remotePitchRotation.y = fVar4;
          (this_00->fields).remotePitchRotation.z = fVar5;
          (this_00->fields).remotePitchRotation.w = fVar12;
          return;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUN_?(this,lVar1,method);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPointPitchChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnPointPitchChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *pointPitch,
               MethodInfo *method)

{
  if (pointPitch == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  method_00 = pointPitch->klass;
  if ((method_00->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
    (this->fields).newPointPitchValue = *(float *)&pointPitch[1].klass;
    pAVar2 = (this->fields).limbManager;
    if (pAVar2 != (AvatarLimbManagerRemote *)0x0) {
      pAVar3 = (pAVar2->fields).pointingHandler;
      fVar4 = (this->fields).newPointYawValue;
      fVar5 = (this->fields).newPointPitchValue;
      if (pAVar3 != (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
        if ((pAVar3->fields)._.isActive == 0) {
          return;
        }
        bVar6 = (this->fields).newPointingWeaponValue;
        (pAVar3->fields)._.pointState = (bVar6 != 0) + 1;
        if (bVar6 == 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
          QStack_8.x = (pQVar7->identityQuaternion).x;
          QStack_8.y = (pQVar7->identityQuaternion).y;
          QStack_8.z = (pQVar7->identityQuaternion).z;
          QStack_8.w = (pQVar7->identityQuaternion).w;
          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                             (&VStack_10,&QStack_8,(MethodInfo *)method_00);
          if (fVar4 == pVVar9->y) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Quaternion);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
            QStack_8.x = (pQVar7->identityQuaternion).x;
            QStack_8.y = (pQVar7->identityQuaternion).y;
            QStack_8.z = (pQVar7->identityQuaternion).z;
            QStack_8.w = (pQVar7->identityQuaternion).w;
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                               (&VStack_10,&QStack_8,(MethodInfo *)method_00);
            if (fVar5 == pVVar9->x) {
              (pAVar3->fields)._.pointState = 0;
              return;
            }
          }
        }
        VStack_10._0_8_ = (ulonglong)(uint)fVar4 << 0x20;
        VStack_10.z = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_set_eulerAngles
                  (&(pAVar3->fields).remoteYawRotation,&VStack_10,(MethodInfo *)method_00);
        VStack_10.z = 0.0;
        VStack_10._0_8_ = ZEXT48((uint)fVar5);
        UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_set_eulerAngles
                  (&(pAVar3->fields).remotePitchRotation,&VStack_10,(MethodInfo *)method_00);
        (pAVar3->fields)._.elapsedPointingTime = (pAVar3->fields)._.pointingDuration;
        return;
      }
    }
    FUN_?(this,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_?(pointPitch);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPointYawChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnPointYawChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *pointYaw,
               MethodInfo *method)

{
  if (pointYaw == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  method_00 = pointYaw->klass;
  if ((method_00->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
    (this->fields).newPointYawValue = *(float *)&pointYaw[1].klass;
    pAVar2 = (this->fields).limbManager;
    if (pAVar2 != (AvatarLimbManagerRemote *)0x0) {
      pAVar3 = (pAVar2->fields).pointingHandler;
      fVar4 = (this->fields).newPointYawValue;
      fVar5 = (this->fields).newPointPitchValue;
      if (pAVar3 != (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
        if ((pAVar3->fields)._.isActive == 0) {
          return;
        }
        bVar6 = (this->fields).newPointingWeaponValue;
        (pAVar3->fields)._.pointState = (bVar6 != 0) + 1;
        if (bVar6 == 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
          QStack_8.x = (pQVar7->identityQuaternion).x;
          QStack_8.y = (pQVar7->identityQuaternion).y;
          QStack_8.z = (pQVar7->identityQuaternion).z;
          QStack_8.w = (pQVar7->identityQuaternion).w;
          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                             (&VStack_10,&QStack_8,(MethodInfo *)method_00);
          if (fVar4 == pVVar9->y) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Quaternion);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
            QStack_8.x = (pQVar7->identityQuaternion).x;
            QStack_8.y = (pQVar7->identityQuaternion).y;
            QStack_8.z = (pQVar7->identityQuaternion).z;
            QStack_8.w = (pQVar7->identityQuaternion).w;
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                               (&VStack_10,&QStack_8,(MethodInfo *)method_00);
            if (fVar5 == pVVar9->x) {
              (pAVar3->fields)._.pointState = 0;
              return;
            }
          }
        }
        VStack_10._0_8_ = (ulonglong)(uint)fVar4 << 0x20;
        VStack_10.z = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_set_eulerAngles
                  (&(pAVar3->fields).remoteYawRotation,&VStack_10,(MethodInfo *)method_00);
        VStack_10.z = 0.0;
        VStack_10._0_8_ = ZEXT48((uint)fVar5);
        UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_set_eulerAngles
                  (&(pAVar3->fields).remotePitchRotation,&VStack_10,(MethodInfo *)method_00);
        (pAVar3->fields)._.elapsedPointingTime = (pAVar3->fields)._.pointingDuration;
        return;
      }
    }
    FUN_?(this,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_?(pointYaw);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPointingWeaponChange(Object) */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_OnPointingWeaponChange
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,Object *isPointingWeapon,
               MethodInfo *method)

{
  if (isPointingWeapon == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((isPointingWeapon->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40))
  {
    (this->fields).newPointingWeaponValue = *(bool *)&isPointingWeapon[1].klass;
    return;
  }
  FUN_?(isPointingWeapon);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateHeadRotation() */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_UpdateHeadRotation
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,MethodInfo *method)

{
  pAVar1 = (this->fields).limbManager;
  if (pAVar1 == (AvatarLimbManagerRemote *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar3 = (this->fields).newHeadPitchValue;
  fVar4 = (this->fields).newHeadYawValue;
  this_00 = (pAVar1->fields).headRotationHandler;
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
      uStack_5 = (ulonglong)(uint)(fVar4 * _UNK_?) << 0x20;
      uStack_6 = 0;
      QStack_7.x = 0.0;
      QStack_7.y = 0.0;
      QStack_7.z = 0.0;
      QStack_7.w = 0.0;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(&uStack_5,&QStack_7);
      (this_00->fields).remoteYawRotation.x = QStack_7.x;
      (this_00->fields).remoteYawRotation.y = QStack_7.y;
      (this_00->fields).remoteYawRotation.z = QStack_7.z;
      (this_00->fields).remoteYawRotation.w = QStack_7.w;
      pQVar9 = AvatarLimbManager+AvatarHeadRotationHandler::
               AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                         (&QStack_10,(AvatarLimbManager_AvatarHeadRotationHandler *)this_00,
                          &QStack_7,(MethodInfo *)0x0);
      fVar3 = fVar3 * _UNK_?;
      fVar4 = pQVar9->y;
      fVar11 = pQVar9->z;
      fVar12 = pQVar9->w;
      (this_00->fields).remoteYawRotation.x = pQVar9->x;
      (this_00->fields).remoteYawRotation.y = fVar4;
      (this_00->fields).remoteYawRotation.z = fVar11;
      (this_00->fields).remoteYawRotation.w = fVar12;
      uStack_6 = 0;
      uStack_5 = (ulonglong)(uint)fVar3;
      QStack_7.x = 0.0;
      QStack_7.y = 0.0;
      QStack_7.z = 0.0;
      QStack_7.w = 0.0;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(&uStack_5,&QStack_7);
      (this_00->fields).remotePitchRotation.x = QStack_7.x;
      (this_00->fields).remotePitchRotation.y = QStack_7.y;
      (this_00->fields).remotePitchRotation.z = QStack_7.z;
      (this_00->fields).remotePitchRotation.w = QStack_7.w;
      pQVar9 = AvatarLimbManager+AvatarHeadRotationHandler::
               AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion
                         (&QStack_10,(AvatarLimbManager_AvatarHeadRotationHandler *)this_00,
                          &QStack_7,(MethodInfo *)0x0);
      fVar3 = pQVar9->y;
      fVar4 = pQVar9->z;
      fVar11 = pQVar9->w;
      (this_00->fields).remotePitchRotation.x = pQVar9->x;
      (this_00->fields).remotePitchRotation.y = fVar3;
      (this_00->fields).remotePitchRotation.z = fVar4;
      (this_00->fields).remotePitchRotation.w = fVar11;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdatePointRotation() */

void Assembly-CSharp.dll::AvatarLimbManagerRemote+AvatarLimbDataManagerRemote::
     AvatarLimbManagerRemote_AvatarLimbDataManagerRemote_UpdatePointRotation
               (AvatarLimbManagerRemote_AvatarLimbDataManagerRemote *this,MethodInfo *method)

{
  pAVar1 = (this->fields).limbManager;
  if (pAVar1 != (AvatarLimbManagerRemote *)0x0) {
    pAVar2 = (pAVar1->fields).pointingHandler;
    fVar3 = (this->fields).newPointYawValue;
    fVar4 = (this->fields).newPointPitchValue;
    if (pAVar2 != (AvatarLimbManagerRemote_AvatarPointingHandlerRemote *)0x0) {
      if ((pAVar2->fields)._.isActive == 0) {
        return;
      }
      bVar5 = (this->fields).newPointingWeaponValue;
      (pAVar2->fields)._.pointState = (bVar5 != 0) + 1;
      if (bVar5 == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
        aQStack_7[0].x = (pQVar6->identityQuaternion).x;
        aQStack_7[0].y = (pQVar6->identityQuaternion).y;
        aQStack_7[0].z = (pQVar6->identityQuaternion).z;
        aQStack_7[0].w = (pQVar6->identityQuaternion).w;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                           (&VStack_9,aQStack_7,in_R8);
        if (fVar3 == pVVar8->y) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
          aQStack_7[0].x = (pQVar6->identityQuaternion).x;
          aQStack_7[0].y = (pQVar6->identityQuaternion).y;
          aQStack_7[0].z = (pQVar6->identityQuaternion).z;
          aQStack_7[0].w = (pQVar6->identityQuaternion).w;
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                             (&VStack_9,aQStack_7,in_R8);
          if (fVar4 == pVVar8->x) {
            (pAVar2->fields)._.pointState = 0;
            return;
          }
        }
      }
      VStack_9._0_8_ = (ulonglong)(uint)fVar3 << 0x20;
      VStack_9.z = 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_set_eulerAngles
                (&(pAVar2->fields).remoteYawRotation,&VStack_9,in_R8);
      VStack_9.z = 0.0;
      VStack_9._0_8_ = ZEXT48((uint)fVar4);
      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_set_eulerAngles
                (&(pAVar2->fields).remotePitchRotation,&VStack_9,in_R8);
      (pAVar2->fields)._.elapsedPointingTime = (pAVar2->fields)._.pointingDuration;
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

