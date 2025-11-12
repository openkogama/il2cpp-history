
/* SmoothCharacterController Clone(GameObject, GameObject, CullingSubscriberBase,
   MVWorldObjectClient) */

SmoothCharacterController *
Assembly-CSharp.dll::SmoothCharacterController::SmoothCharacterController_Clone
          (SmoothCharacterController *this,GameObject *targetGameObject,GameObject *seat,
          CullingSubscriberBase *cullingSubscriberBase,MVWorldObjectClient *worldObjectOwner,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((targetGameObject != (GameObject *)0x0) &&
     (pSVar1 = (SmoothCharacterController *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         (targetGameObject,
                          SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                         ), pSVar1 != (SmoothCharacterController *)0x0)) {
    SmoothCharacterController_Init
              (pSVar1,targetGameObject,cullingSubscriberBase,worldObjectOwner,(MethodInfo *)0x0);
    pMVar2 = (this->fields).controller;
    pMVar3 = (pSVar1->fields).controller;
    if (pMVar2 != (MvCharacterController *)0x0) {
      fVar4 = (pMVar2->fields).elipsoidRadius.y;
      fVar5 = (pMVar2->fields).elipsoidRadius.x;
      if ((seat != (GameObject *)0x0) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (seat,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_6 = 0;
        fStack_7 = 0.0;
        pvVar8 = (obj->fields)._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          pSVar1 = (SmoothCharacterController *)(*pcVar9)();
          return pSVar1;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          pSVar1 = (SmoothCharacterController *)(*pcVar9)();
          return pSVar1;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar8,&uStack_6);
        if (pMVar3 != (MvCharacterController *)0x0) {
          fVar4 = (fVar4 + fVar4) * _UNK_?;
          (pMVar3->fields).center.x = (float)(undefined4)uStack_6;
          (pMVar3->fields).center.y = (float)uStack_6._4_4_;
          (pMVar3->fields).elipsoidRadius.x = fVar5;
          (pMVar3->fields).elipsoidRadius.y = fVar4;
          (pMVar3->fields).centerBase.x = (float)(undefined4)uStack_6;
          (pMVar3->fields).centerBase.y = (float)uStack_6._4_4_;
          (pMVar3->fields).elipsoidRadius.z = fVar5;
          (pMVar3->fields).centerBase.z = fStack_7;
          (pMVar3->fields).center.z = fStack_7;
          fVar4 = (pMVar3->fields).elipsoidRadius.y;
          (pMVar3->fields).radiusBase.x = (pMVar3->fields).elipsoidRadius.x;
          (pMVar3->fields).radiusBase.y = fVar4;
          (pMVar3->fields).radiusBase.z = fVar5;
          return pSVar1;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pSVar1 = (SmoothCharacterController *)(*pcVar9)();
  return pSVar1;
}


/* Void Init(GameObject, CullingSubscriberBase, MVWorldObjectClient) */

void Assembly-CSharp.dll::SmoothCharacterController::SmoothCharacterController_Init
               (SmoothCharacterController *this,GameObject *worldObjectRoot,
               CullingSubscriberBase *cullingSubscriberBase,MVWorldObjectClient *worldObjectOwner,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVCharacterController3D_MethodInfo__UnityEngine__GameObject__AddComponent<MVCharacterController3D>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__physics_controller);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (worldObjectRoot != (GameObject *)0x0) {
    pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                       ((Object_1 *)worldObjectRoot,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (pSVar1,StringLiteral__physics_controller,(MethodInfo *)0x0);
    pGVar2 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
              (pGVar2,pSVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar2,(MethodInfo *)0x0);
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (worldObjectRoot,(MethodInfo *)0x0);
      if ((pTVar4 != (Transform *)0x0) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                             (pTVar4,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar3,pTVar4,(MethodInfo *)0x0);
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar2,(MethodInfo *)0x0);
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (worldObjectRoot,(MethodInfo *)0x0);
        if (pTVar4 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar5 = (pTVar4->fields)._._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar5);
          if (pTVar3 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar5 = (pTVar3->fields)._._.m_CachedPtr;
            if (pvVar5 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
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
            (*pcRam_?)(pvVar5);
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar2,(MethodInfo *)0x0);
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (worldObjectRoot,(MethodInfo *)0x0);
            if (pTVar4 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar5 = (pTVar4->fields)._._.m_CachedPtr;
              if (pvVar5 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
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
              (*pcRam_?)(pvVar5);
              if (pTVar3 != (Transform *)0x0) {
                uStack_8 = 0;
                uStack_9 = 0;
                uStack_10 = 0;
                uStack_11 = 0;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar5 = (pTVar3->fields)._._.m_CachedPtr;
                if (pvVar5 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
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
                (*pcRam_?)(pvVar5,&uStack_8);
                pMVar12 = (MvCharacterController *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_AddComponent_1
                                    (pGVar2,
                                     MVCharacterController3D_MethodInfo__UnityEngine__GameObject__AddComponent<MVCharacterController3D>__
                                    );
                bVar13 = iRam_? != 0;
                (this->fields).controller = pMVar12;
                if (bVar13) {
                  uVar14 = (uint)((ulonglong)&(this->fields).controller >> 0xc);
                  lVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar16 = *(ulonglong *)(lVar15 + 0xADDR);
                    puVar17 = (ulonglong *)(lVar15 + 0xADDR);
                    LOCK();
                    bVar13 = uVar16 == *puVar17;
                    if (bVar13) {
                      *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar13);
                }
                pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                if (pGVar2 != (GameObject *)0x0) {
                  pSVar18 = (SmoothPhysicsMovement *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_AddComponent_1
                                      (pGVar2,
                                       SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                                      );
                  bVar13 = iRam_? != 0;
                  (this->fields).smoothPhysicsMovement = pSVar18;
                  if (bVar13) {
                    uVar14 = (uint)((ulonglong)&(this->fields).smoothPhysicsMovement >> 0xc);
                    lVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar16 = *(ulonglong *)(lVar15 + 0xADDR);
                      puVar17 = (ulonglong *)(lVar15 + 0xADDR);
                      LOCK();
                      bVar13 = uVar16 == *puVar17;
                      if (bVar13) {
                        *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar13);
                  }
                  pMVar12 = (this->fields).controller;
                  pSVar18 = (this->fields).smoothPhysicsMovement;
                  if ((pMVar12 != (MvCharacterController *)0x0) &&
                     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_transform((Component *)pMVar12,(MethodInfo *)0x0),
                     pSVar18 != (SmoothPhysicsMovement *)0x0)) {
                    SmoothPhysicsMovement::SmoothPhysicsMovement_Init
                              (pSVar18,pTVar3,cullingSubscriberBase,worldObjectOwner,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
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


/* Void OnDestroy() */

void Assembly-CSharp.dll::SmoothCharacterController::SmoothCharacterController_OnDestroy
               (SmoothCharacterController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).controller;
  if (this_00 == (MvCharacterController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
            ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).controller = (MvCharacterController *)0x0;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).controller >> 0xc);
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
  pSVar7 = (this->fields).smoothPhysicsMovement;
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
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar8 = (void *)0x0;
  if (pSVar7 != (SmoothPhysicsMovement *)0x0) {
    pvVar8 = (pSVar7->fields)._._._._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar8,0);
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SmoothCharacterController::SmoothCharacterController_Reset
               (SmoothCharacterController *this,MethodInfo *method)

{
  pMVar1 = (this->fields).controller;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  if (pMVar1 != (MvCharacterController *)0x0) {
    fVar3 = (pVVar2->zeroVector).y;
    fVar4 = (pVVar2->zeroVector).z;
    (pMVar1->fields)._Velocity_k__BackingField.x = (pVVar2->zeroVector).x;
    (pMVar1->fields)._Velocity_k__BackingField.y = fVar3;
    (pMVar1->fields)._Velocity_k__BackingField.z = fVar4;
    this_00 = (this->fields).smoothPhysicsMovement;
    if (this_00 != (SmoothPhysicsMovement *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                      ,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
                (this_00->fields).packages;
      if (this_01 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::
        Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
        Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
                  (this_01,
                   MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                  );
        iVar5 = iRam_?;
        (this_00->fields).current = (SmoothPhysicsMovement_Package *)0x0;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)&(this_00->fields).current >> 0xc);
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
            iVar5 = iRam_?;
          } while (!bVar10);
        }
        (this_00->fields).next = (SmoothPhysicsMovement_Package *)0x0;
        if (iVar5 != 0) {
          uVar6 = (uint)((ulonglong)&(this_00->fields).next >> 0xc);
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
        pTVar11 = (this_00->fields).targetTransform;
        pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar12 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar13 = (pTVar12->fields)._._.m_CachedPtr;
          if (pvVar13 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pcVar14 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
            uVar15 = func_?(&UNK_?);
            FUN_?(uVar15,0);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pcRam_? = pcVar14;
          (*pcRam_?)(pvVar13);
          if (pTVar11 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar13 = (pTVar11->fields)._._.m_CachedPtr;
            if (pvVar13 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcVar14 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
              uVar15 = func_?(&UNK_?);
              FUN_?(uVar15,0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcRam_? = pcVar14;
            (*pcRam_?)(pvVar13);
            pTVar11 = (this_00->fields).targetTransform;
            pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0);
            if (pTVar12 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar13 = (pTVar12->fields)._._.m_CachedPtr;
              if (pvVar13 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcVar14 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                uVar15 = func_?(&UNK_?);
                FUN_?(uVar15,0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcRam_? = pcVar14;
              (*pcRam_?)(pvVar13);
              if (pTVar11 == (Transform *)0x0) {
                FUN_?();
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              uStack_16 = 0;
              uStack_17 = 0;
              uStack_18 = 0;
              uStack_19 = 0;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar13 = (pTVar11->fields)._._.m_CachedPtr;
              if (pvVar13 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcVar14 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                uVar15 = func_?(&UNK_?);
                FUN_?(uVar15,0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcRam_? = pcVar14;
              (*pcRam_?)(pvVar13,&uStack_16);
              return;
            }
          }
          FUN_?();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SmoothMove() */

void Assembly-CSharp.dll::SmoothCharacterController::SmoothCharacterController_SmoothMove
               (SmoothCharacterController *this,MethodInfo *method)

{
  obj = (this->fields).smoothPhysicsMovement;
  if (obj == (SmoothPhysicsMovement *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  if ((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar5 = (obj->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto DAT_?;
    if (0 < (pQVar5->fields)._size) {
      pSVar6 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar5,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      bVar7 = iRam_? != 0;
      (obj->fields).current = pSVar6;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(obj->fields).current >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
    if ((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  if ((obj->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar5 = (obj->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto DAT_?;
    if (0 < (pQVar5->fields)._size) {
      pSVar6 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar5,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (obj->fields).next = pSVar6;
      func_?(&(obj->fields).next);
    }
  }
  if (((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
     ((obj->fields).next == (SmoothPhysicsMovement_Package *)0x0)) {
    return;
  }
  pSVar6 = (obj->fields).next;
  do {
    if (fVar3 - fVar4 < (pSVar6->fields).time) {
code_?:
      pSVar6 = (obj->fields).current;
      if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar12 = (pSVar6->fields).time;
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      fVar13 = (float)(*pcRam_?)();
      fVar13 = ((fVar3 - fVar4) - fVar12) / fVar13;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar14 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
DAT_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      pvVar14 = (void *)(*pcRam_?)(pvVar14);
      pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (pvVar14,
                           UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                          );
      fVar3 = _UNK_?;
      pSVar6 = (obj->fields).current;
      if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
         (pSVar16 = (obj->fields).next, pSVar16 == (SmoothPhysicsMovement_Package *)0x0)) break;
      uStack_17._0_4_ = (pSVar16->fields).position.x;
      uStack_17._4_4_ = (pSVar16->fields).position.y;
      QStack_18.x = (pSVar6->fields).position.x;
      QStack_18.y = (pSVar6->fields).position.y;
      if (fVar13 < 0.0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = _UNK_?;
        if (fVar13 <= _UNK_?) {
          fVar4 = fVar13;
        }
      }
      if (pOVar15 != (Object *)0x0) {
        QStack_18.y = ((float)uStack_17._4_4_ - QStack_18.y) * fVar4 + QStack_18.y;
        QStack_18.x = ((float)(undefined4)uStack_17 - QStack_18.x) * fVar4 + QStack_18.x;
        QStack_18.z = ((pSVar16->fields).position.z - (pSVar6->fields).position.z) * fVar4 +
                      (pSVar6->fields).position.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar19 = pOVar15[1].klass;
        if (pOVar19 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(pOVar19);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar14 = (obj->fields)._._._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        pvVar14 = (void *)(*pcRam_?)(pvVar14);
        pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar14,
                             UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                            );
        pSVar6 = (obj->fields).current;
        if ((pSVar6 != (SmoothPhysicsMovement_Package *)0x0) &&
           (pSVar16 = (obj->fields).next, pSVar16 != (SmoothPhysicsMovement_Package *)0x0)) {
          uStack_20._0_4_ = (pSVar16->fields).rotation.x;
          uStack_20._4_4_ = (pSVar16->fields).rotation.y;
          uStack_21._0_4_ = (pSVar16->fields).rotation.z;
          uStack_21._4_4_ = (pSVar16->fields).rotation.w;
          QStack_22.x = (pSVar6->fields).rotation.x;
          QStack_22.y = (pSVar6->fields).rotation.y;
          QStack_22.z = (pSVar6->fields).rotation.z;
          QStack_22.w = (pSVar6->fields).rotation.w;
          uStack_17 = 0;
          uStack_23 = 0;
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcRam_? = pcVar1;
          (*pcRam_?)(&QStack_22,&uStack_20,fVar13,&uStack_17);
          if (pOVar15 == (Object *)0x0) {
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uStack_24 = (undefined4)uStack_17;
          uStack_25 = uStack_17._4_4_;
          uStack_26 = (float)uStack_23;
          uStack_27 = uStack_23._4_4_;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar19 = pOVar15[1].klass;
          if (pOVar19 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcRam_? = pcVar1;
          (*pcRam_?)(pOVar19);
          if ((obj->fields).worldObjectOwner != (MVWorldObjectClient *)0x0) {
            pSVar6 = (obj->fields).current;
            pMVar28 = (obj->fields).worldObjectOwner;
            if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
               (pSVar16 = (obj->fields).next, pSVar16 == (SmoothPhysicsMovement_Package *)0x0)) break;
            uVar29 = (pSVar16->fields).position.x;
            uVar30 = (pSVar16->fields).position.y;
            uStack_17._0_4_ = (pSVar6->fields).position.x;
            uStack_17._4_4_ = (pSVar6->fields).position.y;
            if (fVar13 < 0.0) {
              fVar3 = 0.0;
            }
            else if (fVar13 <= fVar3) {
              fVar3 = fVar13;
            }
            QStack_18.z = ((pSVar16->fields).position.z - (pSVar6->fields).position.z) * fVar3 +
                          (pSVar6->fields).position.z;
            QStack_18.y = ((float)uVar30 - (float)uStack_17._4_4_) * fVar3 + (float)uStack_17._4_4_;
            QStack_18.x = ((float)uVar29 - (float)(undefined4)uStack_17) * fVar3 +
                          (float)(undefined4)uStack_17;
            (*(pMVar28->klass->vtable).set_WorldPosition.methodPtr)(pMVar28,&QStack_18);
            pSVar6 = (obj->fields).current;
            pMVar28 = (obj->fields).worldObjectOwner;
            if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
               (pSVar16 = (obj->fields).next, pSVar16 == (SmoothPhysicsMovement_Package *)0x0)) break;
            QStack_22.x = (pSVar16->fields).rotation.x;
            QStack_22.y = (pSVar16->fields).rotation.y;
            QStack_22.z = (pSVar16->fields).rotation.z;
            QStack_22.w = (pSVar16->fields).rotation.w;
            uStack_20._0_4_ = (pSVar6->fields).rotation.x;
            uStack_20._4_4_ = (pSVar6->fields).rotation.y;
            uStack_21._0_4_ = (pSVar6->fields).rotation.z;
            uStack_21._4_4_ = (pSVar6->fields).rotation.w;
            QStack_18.x = 0.0;
            QStack_18.y = 0.0;
            QStack_18.z = 0.0;
            QStack_18.w = 0.0;
            pcVar1 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
              uVar2 = func_?(&UNK_?);
              FUN_?(uVar2,0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcRam_? = pcVar1;
            (*pcRam_?)(&uStack_20,&QStack_22,fVar13,&QStack_18);
            if (pMVar28 == (MVWorldObjectClient *)0x0) break;
            QStack_22.x = QStack_18.x;
            QStack_22.y = QStack_18.y;
            QStack_22.z = QStack_18.z;
            QStack_22.w = QStack_18.w;
            MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                      (pMVar28,&QStack_22,(MethodInfo *)0x0);
          }
          if ((obj->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
            return;
          }
          pCVar31 = (obj->fields).cullingSubscriberBase;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar14 = (obj->fields)._._._._.m_CachedPtr;
          if (pvVar14 == (void *)0x0) goto DAT_?;
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcRam_? = pcVar1;
          pvVar14 = (void *)(*pcRam_?)(pvVar14);
          pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar14,
                               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                              );
          if (pOVar15 != (Object *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_17 = 0;
            uStack_23 = uStack_23 & 0xffffffff00000000;
            pOVar19 = pOVar15[1].klass;
            if (pOVar19 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcVar1 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
              uVar2 = func_?(&UNK_?);
              FUN_?(uVar2,0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcRam_? = pcVar1;
            (*pcRam_?)(pOVar19,&uStack_17);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CullingApiWrapper);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__CullingApiWrapper);
            }
            pBVar32 = TypeInfo__CullingApiWrapper->static_fields->spheres;
            if (pBVar32 != (BoundingSphere__Array *)0x0) {
              uVar8 = (pCVar31->fields)._CullingIndex_k__BackingField;
              if (uVar8 < (uint)pBVar32->max_length) {
                pBVar32->vector[(int)uVar8].position.x = (float)(undefined4)uStack_17;
                pBVar32->vector[(int)uVar8].position.y = (float)uStack_17._4_4_;
                pBVar32->vector[(int)uVar8].position.z = (float)uStack_23;
                return;
              }
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          break;
        }
      }
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pQVar5 = (obj->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    if ((pQVar5->fields)._size < 1) goto code_?;
    bVar7 = iRam_? != 0;
    (obj->fields).current = (obj->fields).next;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(obj->fields).current >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pQVar5 = (obj->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pSVar6 = (SmoothPhysicsMovement_Package *)
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Dequeue
                        ((Queue_1_System_Object_ *)pQVar5,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                        );
    bVar7 = iRam_? != 0;
    (obj->fields).next = pSVar6;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(obj->fields).next >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pSVar6 = (obj->fields).next;
  } while (pSVar6 != (SmoothPhysicsMovement_Package *)0x0);
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

