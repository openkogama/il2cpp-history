
/* Void FixedUpdate() */

void Assembly-CSharp.dll::SmoothPhysicsMovement::SmoothPhysicsMovement_FixedUpdate
               (SmoothPhysicsMovement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SmoothPhysicsMovement__Package);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Enqueue_SmoothPhysicsMovement__Package_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).targetTransform;
  pQVar2 = (this->fields).packages;
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
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
    (*pcRam_?)(pvVar3);
    pTVar1 = (this->fields).targetTransform;
    if (pTVar1 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_6 = 0;
      uStack_7 = 0;
      pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
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
      (*pcRam_?)(pvVar3,&uStack_6);
      lVar8 = FUN_?(TypeInfo__SmoothPhysicsMovement__Package);
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
      uVar9 = (*pcRam_?)();
      *(undefined4 *)(lVar8 + 0x2c) = uVar9;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(undefined4 *)(lVar8 + 0x1c) = (undefined4)uStack_6;
      *(undefined4 *)(lVar8 + 0x20) = uStack_6._4_4_;
      *(undefined4 *)(lVar8 + 0x24) = (undefined4)uStack_7;
      *(undefined4 *)(lVar8 + 0x28) = uStack_7._4_4_;
      if (pQVar2 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
        pSVar10 = (pQVar2->fields)._array;
        if (pSVar10 != (SmoothPhysicsMovement_Package__Array *)0x0) {
          if ((pQVar2->fields)._size == (int)pSVar10->max_length) {
            pSVar10 = (pQVar2->fields)._array;
            iVar11 = (int)pSVar10->max_length * 2;
            if (iVar11 < (int)pSVar10->max_length + 4) {
              iVar11 = (int)pSVar10->max_length + 4;
            }
            FUN_?(pQVar2,iVar11,
                          MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Enqueue_SmoothPhysicsMovement__Package_
                          ->klass->rgctx_data[5].rgctxDataDummy);
          }
          pSVar10 = (pQVar2->fields)._array;
          if (pSVar10 != (SmoothPhysicsMovement_Package__Array *)0x0) {
            FUN_?(pSVar10,(longlong)(pQVar2->fields)._tail,lVar8);
            pSVar10 = (pQVar2->fields)._array;
            if (pSVar10 != (SmoothPhysicsMovement_Package__Array *)0x0) {
              iVar12 = (pQVar2->fields)._tail + 1;
              iVar11 = 0;
              if (iVar12 != (int)pSVar10->max_length) {
                iVar11 = iVar12;
              }
              (pQVar2->fields)._tail = iVar11;
              piVar13 = &(pQVar2->fields)._size;
              *piVar13 = *piVar13 + 1;
              piVar13 = &(pQVar2->fields)._version;
              *piVar13 = *piVar13 + 1;
              return;
            }
          }
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Init(Transform, CullingSubscriberBase, MVWorldObjectClient) */

void Assembly-CSharp.dll::SmoothPhysicsMovement::SmoothPhysicsMovement_Init
               (SmoothPhysicsMovement *this,Transform *targetTransform,
               CullingSubscriberBase *cullingSubscriberBase,MVWorldObjectClient *worldObjectOwner,
               MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields).targetTransform = targetTransform;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).targetTransform >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).cullingSubscriberBase = cullingSubscriberBase;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).worldObjectOwner = worldObjectOwner;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).worldObjectOwner >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SmoothPhysicsMovement::SmoothPhysicsMovement_Reset
               (SmoothPhysicsMovement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
            (this->fields).packages;
  if (this_00 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::
    Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
    Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
              );
    iVar1 = iRam_?;
    (this->fields).current = (SmoothPhysicsMovement_Package *)0x0;
    if (iVar1 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).current >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
        iVar1 = iRam_?;
      } while (!bVar6);
    }
    (this->fields).next = (SmoothPhysicsMovement_Package *)0x0;
    if (iVar1 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).next >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pTVar7 = (this->fields).targetTransform;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar8 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (pTVar8->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9);
      if (pTVar7 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar9);
        pTVar7 = (this->fields).targetTransform;
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar8 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar9 = (pTVar8->fields)._._.m_CachedPtr;
          if (pvVar9 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(pvVar9);
          if (pTVar7 == (Transform *)0x0) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uStack_12 = 0;
          uStack_13 = 0;
          uStack_14 = 0;
          uStack_15 = 0;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
          if (pvVar9 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(pvVar9,&uStack_12);
          return;
        }
      }
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SmoothMove() */

void Assembly-CSharp.dll::SmoothPhysicsMovement::SmoothPhysicsMovement_SmoothMove
               (SmoothPhysicsMovement *this,MethodInfo *method)

{
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
  if ((this->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar5 = (this->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto DAT_?;
    if (0 < (pQVar5->fields)._size) {
      pSVar6 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar5,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      bVar7 = iRam_? != 0;
      (this->fields).current = pSVar6;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(this->fields).current >> 0xc);
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
    if ((this->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  if ((this->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar5 = (this->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto DAT_?;
    if (0 < (pQVar5->fields)._size) {
      pSVar6 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar5,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (this->fields).next = pSVar6;
      func_?(&(this->fields).next);
    }
  }
  if (((this->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
     ((this->fields).next == (SmoothPhysicsMovement_Package *)0x0)) {
    return;
  }
  pSVar6 = (this->fields).next;
  do {
    if (fVar3 - fVar4 < (pSVar6->fields).time) {
code_?:
      pSVar6 = (this->fields).current;
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
      pvVar14 = (this->fields)._._._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
DAT_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
      pSVar6 = (this->fields).current;
      if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
         (pSVar16 = (this->fields).next, pSVar16 == (SmoothPhysicsMovement_Package *)0x0)) break;
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
        pvVar14 = (this->fields)._._._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
        pSVar6 = (this->fields).current;
        if ((pSVar6 != (SmoothPhysicsMovement_Package *)0x0) &&
           (pSVar16 = (this->fields).next, pSVar16 != (SmoothPhysicsMovement_Package *)0x0)) {
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
          if ((this->fields).worldObjectOwner != (MVWorldObjectClient *)0x0) {
            pSVar6 = (this->fields).current;
            pMVar28 = (this->fields).worldObjectOwner;
            if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
               (pSVar16 = (this->fields).next, pSVar16 == (SmoothPhysicsMovement_Package *)0x0))
            break;
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
            pSVar6 = (this->fields).current;
            pMVar28 = (this->fields).worldObjectOwner;
            if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
               (pSVar16 = (this->fields).next, pSVar16 == (SmoothPhysicsMovement_Package *)0x0))
            break;
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
          if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
            return;
          }
          pCVar31 = (this->fields).cullingSubscriberBase;
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
          pvVar14 = (this->fields)._._._._.m_CachedPtr;
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
    pQVar5 = (this->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    if ((pQVar5->fields)._size < 1) goto code_?;
    bVar7 = iRam_? != 0;
    (this->fields).current = (this->fields).next;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this->fields).current >> 0xc);
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
    pQVar5 = (this->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pSVar6 = (SmoothPhysicsMovement_Package *)
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Dequeue
                        ((Queue_1_System_Object_ *)pQVar5,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                        );
    bVar7 = iRam_? != 0;
    (this->fields).next = pSVar6;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this->fields).next >> 0xc);
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
    pSVar6 = (this->fields).next;
  } while (pSVar6 != (SmoothPhysicsMovement_Package *)0x0);
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* SmoothPhysicsMovement() */

void Assembly-CSharp.dll::SmoothPhysicsMovement::SmoothPhysicsMovement__ctor
               (SmoothPhysicsMovement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Queue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_SmoothPhysicsMovement_Package_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>
                         );
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::Stack_1_System_Object___ctor
            ((Stack_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Queue__
            );
  bVar1 = iRam_? != 0;
  (this->fields).packages = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).packages >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
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

