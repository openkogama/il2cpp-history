
/* Void AddTransformPackage(NetworkTransformPackage) */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_AddTransformPackage
               (MVNetworkListener *this,NetworkTransformPackage *p,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).transformQueue;
  if (this_00 != (Queue_1_NetworkTransformPackage_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
    Queue_1_System_Object__Enqueue
              ((Queue_1_System_Object_ *)this_00,(Object *)p,
               MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
              );
    (this->fields).transformReportingHasStopped = 0;
    (this->fields).stopListening = 0;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* NetworkTransformPackage CreateCurPosTransformPackage() */

NetworkTransformPackage *
Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_CreateCurPosTransformPackage
          (MVNetworkListener *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NetworkTransformPackage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (NetworkTransformPackage *)FUN_?(TypeInfo__NetworkTransformPackage);
  if (pNVar1 != (NetworkTransformPackage *)0x0) {
    bVar2 = cRam_? == '\0';
    (pNVar1->fields).packageType = 1;
    if (bVar2) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar3 != (MVGameControllerBase *)0x0) &&
       (this_00 = (pMVar3->fields).game, this_00 != (MVNetworkGame *)0x0)) {
      iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      (pNVar1->fields).timestamp = iVar4 + -200;
      pMVar5 = (this->fields)._.worldObject;
      if (pMVar5 != (MVWorldObjectClient *)0x0) {
        puVar6 = (undefined8 *)
                 (*(pMVar5->klass->vtable).get_Position.methodPtr)
                           (auStack_7,pMVar5,(pMVar5->klass->vtable).get_Position.method);
        uVar8 = *puVar6;
        fVar9 = *(float *)(puVar6 + 1);
        (pNVar1->fields).position.x = (float)(int)uVar8;
        (pNVar1->fields).position.y = (float)(int)((ulonglong)uVar8 >> 0x20);
        (pNVar1->fields).position.z = fVar9;
        pMVar5 = (this->fields)._.worldObject;
        if (pMVar5 != (MVWorldObjectClient *)0x0) {
          puVar6 = (undefined8 *)
                   (*(pMVar5->klass->vtable).get_Rotation.methodPtr)
                             (auStack_7,pMVar5,(pMVar5->klass->vtable).get_Rotation.method);
          uVar8 = *puVar6;
          uVar10 = puVar6[1];
          (pNVar1->fields).rotation.x = (float)(int)uVar8;
          (pNVar1->fields).rotation.y = (float)(int)((ulonglong)uVar8 >> 0x20);
          (pNVar1->fields).rotation.z = (float)(int)uVar10;
          (pNVar1->fields).rotation.w = (float)(int)((ulonglong)uVar10 >> 0x20);
          return pNVar1;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  pNVar1 = (NetworkTransformPackage *)(*pcVar11)();
  return pNVar1;
}


/* Vector3 ExtrapolatePosition(Single) */

Vector3 * Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_ExtrapolatePosition
                    (Vector3 *__return_storage_ptr__,MVNetworkListener *this,float interpFactor,
                    MethodInfo *method)

{
  pNVar1 = (this->fields).nextPackage;
  if ((pNVar1 != (NetworkTransformPackage *)0x0) &&
     (pNVar2 = (this->fields).currentPackage, pNVar2 != (NetworkTransformPackage *)0x0)) {
    uVar3 = (pNVar2->fields).position.x;
    uVar4 = (pNVar2->fields).position.y;
    fVar5 = interpFactor - _UNK_?;
    uVar6 = (pNVar1->fields).position.x;
    fVar7 = (pNVar1->fields).position.y;
    fVar8 = (pNVar1->fields).position.z;
    fVar9 = (pNVar2->fields).position.z;
    if (pNVar1 != (NetworkTransformPackage *)0x0) {
      uVar10 = (pNVar1->fields).position.x;
      fVar11 = (pNVar1->fields).position.y;
      fVar12 = (pNVar1->fields).position.z;
      __return_storage_ptr__->x = (float)uVar10 + ((float)uVar6 - (float)uVar3) * fVar5;
      __return_storage_ptr__->y = fVar11 + (fVar7 - (float)uVar4) * fVar5;
      __return_storage_ptr__->z = fVar12 + (fVar8 - fVar9) * fVar5;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  pVVar14 = (Vector3 *)(*pcVar13)();
  return pVVar14;
}


/* Quaternion ExtrapolateRotation(Single) */

Quaternion *
Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_ExtrapolateRotation
          (Quaternion *__return_storage_ptr__,MVNetworkListener *this,float interpFactor,
          MethodInfo *method)

{
  pNVar1 = (this->fields).nextPackage;
  if (pNVar1 != (NetworkTransformPackage *)0x0) {
    fVar2 = (pNVar1->fields).rotation.y;
    fVar3 = (pNVar1->fields).rotation.z;
    fVar4 = (pNVar1->fields).rotation.w;
    __return_storage_ptr__->x = (pNVar1->fields).rotation.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    __return_storage_ptr__->w = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pQVar6 = (Quaternion *)(*pcVar5)();
  return pQVar6;
}


/* Void RmoveNetorkUpdateListener(INetworkUpdateListener) */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_RmoveNetorkUpdateListener
               (MVNetworkListener *this,INetworkUpdateListener *listener,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>__Remove_INetworkUpdateListener_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>__Remove_INetworkUpdateListener_
  ;
  pHVar2 = (this->fields).updateListenerList;
  if (pHVar2 == (HashSet_1_INetworkUpdateListener_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pHVar2->fields)._buckets != (Int32__Array *)0x0) {
    if (listener == (INetworkUpdateListener *)0x0) {
      uVar4 = 0;
    }
    else {
      pIVar5 = (pHVar2->fields)._comparer;
      if (pIVar5 == (IEqualityComparer_1_INetworkUpdateListener_ *)0x0) goto code_?;
      pvVar6 = (MethodInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>__Remove_INetworkUpdateListener_
                 ->klass->rgctx_data[0x16].method)->klass->rgctx_data[4].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
        pvVar6 = (void *)FUN_?(pvVar6);
      }
      uVar4 = FUN_?(1,pvVar6,pIVar5,listener);
      uVar4 = uVar4 & 0x7fffffff;
    }
    pIVar7 = (pHVar2->fields)._buckets;
    if (pIVar7 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pHVar8 = (pHVar2->fields)._slots;
    uVar9 = (int)uVar4 % (int)pIVar7->max_length;
    if ((uint)pIVar7->max_length <= uVar9) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar10 = pIVar7->vector[(int)uVar9] - 1;
    if (-1 < (int)uVar10) {
      iVar11 = 0;
      uVar12 = 0xffffffff;
      if (pHVar8 == (HashSet_1_T_Slot_INetworkUpdateListener___Array *)0x0)
      goto code_?;
      do {
        uVar13 = uVar10;
        if ((uint)pHVar8->max_length <= uVar13) goto code_?;
        if (pHVar8->vector[(int)uVar13].hashCode == uVar4) {
          pIVar5 = (pHVar2->fields)._comparer;
          pIVar14 = pHVar8->vector[(int)uVar13].value;
          if (pIVar5 == (IEqualityComparer_1_INetworkUpdateListener_ *)0x0)
          goto code_?;
          pvVar6 = pMVar1->klass->rgctx_data[4].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
            pvVar6 = (void *)FUN_?(pvVar6);
          }
          cVar15 = FUN_?(0,pvVar6,pIVar5,pIVar14,listener);
          if (cVar15 != '\0') {
            if ((int)uVar12 < 0) {
              pIVar7 = (pHVar2->fields)._buckets;
              if ((uint)pHVar8->max_length <= uVar13) goto code_?;
              if (pIVar7 == (Int32__Array *)0x0) goto code_?;
              if ((uint)pIVar7->max_length <= uVar9) goto code_?;
              pIVar7->vector[(int)uVar9] = pHVar8->vector[(int)uVar13].next + 1;
            }
            else {
              if (((uint)pHVar8->max_length <= uVar13) || ((uint)pHVar8->max_length <= uVar12))
              goto code_?;
              pHVar8->vector[(int)uVar12].next = pHVar8->vector[(int)uVar13].next;
            }
            if ((uVar13 < (uint)pHVar8->max_length) &&
               (pHVar8->vector[(int)uVar13].hashCode = -1, uVar13 < (uint)pHVar8->max_length)) {
              pHVar8->vector[(int)uVar13].value = (INetworkUpdateListener *)0x0;
              if (uVar13 < (uint)pHVar8->max_length) {
                pHVar8->vector[(int)uVar13].next = (pHVar2->fields)._freeList;
                piVar16 = &(pHVar2->fields)._version;
                *piVar16 = *piVar16 + 1;
                iVar11 = (pHVar2->fields)._count + -1;
                (pHVar2->fields)._count = iVar11;
                if (iVar11 == 0) {
                  (pHVar2->fields)._lastIndex = 0;
                  uVar13 = 0xffffffff;
                }
                (pHVar2->fields)._freeList = uVar13;
                return;
              }
            }
            goto code_?;
          }
        }
        if ((int)pHVar8->max_length <= iVar11) {
          uVar17 = func_?(&TypeInfo__System__InvalidOperationException);
          this_00 = (ProtocolViolationException *)func_?(uVar17);
          message = (String *)func_?(&StringLiteral_Operations_that_change_non_concu);
          System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
                    (this_00,message,(MethodInfo *)0x0);
          FUN_?(this_00,pMVar1);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar11 = iVar11 + 1;
        if ((uint)pHVar8->max_length <= uVar13) goto code_?;
        uVar10 = pHVar8->vector[(int)uVar13].next;
        uVar12 = uVar13;
      } while (-1 < (int)uVar10);
    }
  }
  return;
}


/* Void SetOwnerTransformToMostResentPackage() */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_SetOwnerTransformToMostResentPackage
               (MVNetworkListener *this,MethodInfo *method)

{
  ppMVar1 = (MethodInfo **)this;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__get_Current__
                 );
    LOCK();
    UNLOCK();
    ppMVar1 = &
               MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__GetEnumerator__
    ;
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar2 = (this->fields).transformQueue;
  if (pQVar2 == (Queue_1_NetworkTransformPackage_ *)0x0) {
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    uStack_8 = 0;
    QStack_9._version = (pQVar2->fields)._version;
    QStack_9._index = 0xffffffff;
    QStack_9._currentElement = (Object *)0x0;
    uStack_4 = 0;
    uStack_10 = &QStack_9;
    QStack_9._q = (Queue_1_System_Object_ *)pQVar2;
    do {
      pNVar11 = (NetworkTransformPackage *)QStack_9._currentElement;
      bVar12 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]::
              Queue_1_T_Enumerator_System_Object__MoveNext
                        (&QStack_9,
                         MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__MoveNext__
                        );
      if (bVar12 == 0) {
        QStack_9._index = 0xfffffffe;
        QStack_9._currentElement = (Object *)0x0;
        if (((pNVar11 != (NetworkTransformPackage *)0x0) ||
            (pNVar11 = (this->fields).nextPackage, pNVar11 != (NetworkTransformPackage *)0x0)) ||
           (pNVar11 = (this->fields).currentPackage, pNVar11 != (NetworkTransformPackage *)0x0)) {
          pMVar13 = (this->fields)._.worldObject;
          ppMVar1 = (MethodInfo **)0x0;
          if (pMVar13 == (MVWorldObjectClient *)0x0) goto code_?;
          uStack_4._0_4_ = (pNVar11->fields).position.x;
          uStack_4._4_4_ = (pNVar11->fields).position.y;
          uStack_10 = (Queue_1_T_Enumerator_System_Object_ *)
                      CONCAT44(uStack_10._4_4_,(pNVar11->fields).position.z);
          (*(pMVar13->klass->vtable).set_Position.methodPtr)
                    (pMVar13,&uStack_4,(pMVar13->klass->vtable).set_Position.method);
          pMVar13 = (this->fields)._.worldObject;
          ppMVar1 = (MethodInfo **)0x0;
          if (pMVar13 == (MVWorldObjectClient *)0x0) goto code_?;
          uStack_4._0_4_ = (pNVar11->fields).rotation.x;
          uStack_4._4_4_ = (pNVar11->fields).rotation.y;
          uStack_10._0_4_ = (pNVar11->fields).rotation.z;
          uStack_10._4_4_ = (pNVar11->fields).rotation.w;
          (*(pMVar13->klass->vtable).set_Rotation.methodPtr)
                    (pMVar13,&uStack_4,(pMVar13->klass->vtable).set_Rotation.method);
        }
        return;
      }
      ppMVar1 = (MethodInfo **)
                 MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__get_Current__
      ;
    } while (-1 < (longlong)QStack_9._8_8_);
  }
  lVar14 = func_?(((MethodInfo *)ppMVar1)->klass);
  uVar15 = func_?(*(undefined8 *)(lVar14 + 0xc0),4);
  FUN_?(&QStack_9,uVar15);
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void SetToCurrentPosition() */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_SetToCurrentPosition
               (MVNetworkListener *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
            (this->fields).transformQueue;
  if (this_00 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::
    Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
    Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Clear__);
    pNVar1 = MVNetworkListener_CreateCurPosTransformPackage(this,(MethodInfo *)0x0);
    pQVar2 = (this->fields).transformQueue;
    if (pQVar2 != (Queue_1_NetworkTransformPackage_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue
                ((Queue_1_System_Object_ *)pQVar2,(Object *)pNVar1,
                 MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
                );
      ppMVar3 = (MethodInfo **)this;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__Dispose__
                      ,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__get_Current__
                     );
        LOCK();
        UNLOCK();
        ppMVar3 = &
                   MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__GetEnumerator__
        ;
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar2 = (this->fields).transformQueue;
      if (pQVar2 == (Queue_1_NetworkTransformPackage_ *)0x0) {
code_?:
        FUN_?();
      }
      else {
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
          puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar6;
            LOCK();
            uVar8 = *puVar6;
            if (uVar7 == uVar8) {
              *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar8);
        }
        uStack_9 = 0;
        QStack_10._version = (pQVar2->fields)._version;
        QStack_10._index = 0xffffffff;
        QStack_10._currentElement = (Object *)0x0;
        uStack_5 = 0;
        uStack_11 = &QStack_10;
        QStack_10._q = (Queue_1_System_Object_ *)pQVar2;
        do {
          pNVar1 = (NetworkTransformPackage *)QStack_10._currentElement;
          bVar12 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]
                  ::Queue_1_T_Enumerator_System_Object__MoveNext
                            (&QStack_10,
                             MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__MoveNext__
                            );
          if (bVar12 == 0) {
            QStack_10._index = 0xfffffffe;
            QStack_10._currentElement = (Object *)0x0;
            if (((pNVar1 != (NetworkTransformPackage *)0x0) ||
                (pNVar1 = (this->fields).nextPackage, pNVar1 != (NetworkTransformPackage *)0x0)) ||
               (pNVar1 = (this->fields).currentPackage, pNVar1 != (NetworkTransformPackage *)0x0)) {
              pMVar13 = (this->fields)._.worldObject;
              ppMVar3 = (MethodInfo **)0x0;
              if (pMVar13 == (MVWorldObjectClient *)0x0) goto code_?;
              uStack_5._0_4_ = (pNVar1->fields).position.x;
              uStack_5._4_4_ = (pNVar1->fields).position.y;
              uStack_11 = (Queue_1_T_Enumerator_System_Object_ *)
                          CONCAT44(uStack_11._4_4_,(pNVar1->fields).position.z);
              (*(pMVar13->klass->vtable).set_Position.methodPtr)
                        (pMVar13,&uStack_5,(pMVar13->klass->vtable).set_Position.method);
              pMVar13 = (this->fields)._.worldObject;
              ppMVar3 = (MethodInfo **)0x0;
              if (pMVar13 == (MVWorldObjectClient *)0x0) goto code_?;
              uStack_5._0_4_ = (pNVar1->fields).rotation.x;
              uStack_5._4_4_ = (pNVar1->fields).rotation.y;
              uStack_11._0_4_ = (pNVar1->fields).rotation.z;
              uStack_11._4_4_ = (pNVar1->fields).rotation.w;
              (*(pMVar13->klass->vtable).set_Rotation.methodPtr)
                        (pMVar13,&uStack_5,(pMVar13->klass->vtable).set_Rotation.method);
            }
            return;
          }
          ppMVar3 = (MethodInfo **)
                     MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__get_Current__
          ;
        } while (-1 < (longlong)QStack_10._8_8_);
      }
      lVar14 = func_?(((MethodInfo *)ppMVar3)->klass);
      uVar15 = func_?(*(undefined8 *)(lVar14 + 0xc0),4);
      FUN_?(&QStack_10,uVar15);
      FUN_?();
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_Update
               (MVNetworkListener *this,MVNetworkGame *game,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TransformNetworkManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Interpolation_INTERVAL_IS_ZERO__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).transformReportingHasStopped == 0) {
    if ((this->fields).currentPackage == (NetworkTransformPackage *)0x0) {
      pQVar2 = (this->fields).transformQueue;
      if (pQVar2 == (Queue_1_NetworkTransformPackage_ *)0x0) goto code_?;
      if (0 < (pQVar2->fields)._size) {
        pNVar3 = (NetworkTransformPackage *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar2,
                             MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Dequeue__
                            );
        (this->fields).currentPackage = pNVar3;
        func_?(&(this->fields).currentPackage);
      }
      if ((this->fields).currentPackage == (NetworkTransformPackage *)0x0) {
        return;
      }
    }
    if ((this->fields).nextPackage == (NetworkTransformPackage *)0x0) {
      pQVar2 = (this->fields).transformQueue;
      if (pQVar2 == (Queue_1_NetworkTransformPackage_ *)0x0) goto code_?;
      if (0 < (pQVar2->fields)._size) {
        pNVar3 = (NetworkTransformPackage *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar2,
                             MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Dequeue__
                            );
        (this->fields).nextPackage = pNVar3;
        func_?(&(this->fields).nextPackage);
      }
    }
  }
  if ((this->fields).currentPackage == (NetworkTransformPackage *)0x0) {
    return;
  }
  if ((this->fields).nextPackage == (NetworkTransformPackage *)0x0) {
    if ((this->fields).currentPackage == (NetworkTransformPackage *)0x0) {
      return;
    }
    pNVar3 = (this->fields).currentPackage;
code_?:
    pMVar4 = (this->fields)._.worldObject;
    if (pMVar4 == (MVWorldObjectClient *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uStack_6._0_4_ = (pNVar3->fields).position.x;
    uStack_6._4_4_ = (pNVar3->fields).position.y;
    uStack_7 = CONCAT44(uStack_7._4_4_,(pNVar3->fields).position.z);
    (*(pMVar4->klass->vtable).set_Position.methodPtr)
              (pMVar4,&uStack_6,(pMVar4->klass->vtable).set_Position.method);
    pNVar3 = (this->fields).currentPackage;
    if ((pNVar3 == (NetworkTransformPackage *)0x0) ||
       (pMVar4 = (this->fields)._.worldObject, pMVar4 == (MVWorldObjectClient *)0x0))
    goto code_?;
    uStack_8._0_4_ = (pNVar3->fields).rotation.x;
    uStack_8._4_4_ = (pNVar3->fields).rotation.y;
    uStack_9._0_4_ = (pNVar3->fields).rotation.z;
    uStack_9._4_4_ = (pNVar3->fields).rotation.w;
    puVar10 = &uStack_8;
  }
  else {
    if ((this->fields).transformReportingHasStopped == 0) {
      pNVar3 = (this->fields).nextPackage;
      do {
        if (iVar1 < (pNVar3->fields).timestamp) goto code_?;
        pQVar2 = (this->fields).transformQueue;
        if (pQVar2 == (Queue_1_NetworkTransformPackage_ *)0x0) break;
        if ((pQVar2->fields)._size < 1) goto code_?;
        bVar11 = iRam_? != 0;
        (this->fields).currentPackage = (this->fields).nextPackage;
        if (bVar11) {
          uVar12 = (uint)((ulonglong)&(this->fields).currentPackage >> 0xc);
          uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
          do {
            uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
            puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar14 == *puVar15;
            if (bVar11) {
              *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        pQVar2 = (this->fields).transformQueue;
        if (pQVar2 == (Queue_1_NetworkTransformPackage_ *)0x0) break;
        pNVar3 = (NetworkTransformPackage *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar2,
                             MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Dequeue__
                            );
        bVar11 = iRam_? != 0;
        (this->fields).nextPackage = pNVar3;
        if (bVar11) {
          uVar12 = (uint)((ulonglong)&(this->fields).nextPackage >> 0xc);
          uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
          do {
            uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
            puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar14 == *puVar15;
            if (bVar11) {
              *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        pNVar3 = (this->fields).nextPackage;
      } while (pNVar3 != (NetworkTransformPackage *)0x0);
      goto code_?;
    }
code_?:
    fVar16 = _UNK_?;
    pNVar17 = (this->fields).nextPackage;
    if ((pNVar17 == (NetworkTransformPackage *)0x0) ||
       (pNVar3 = (this->fields).currentPackage, pNVar3 == (NetworkTransformPackage *)0x0))
    goto code_?;
    pNVar18 = (this->fields).nextPackage;
    fVar19 = (float)((pNVar17->fields).timestamp - (pNVar3->fields).timestamp);
    if ((pNVar18->fields).packageType == 1) {
      if (pNVar3 == (NetworkTransformPackage *)0x0) goto code_?;
      iVar20 = (pNVar3->fields).timestamp;
code_?:
      fVar21 = (float)(iVar1 - iVar20) / fVar19;
    }
    else {
      fVar21 = _UNK_?;
      if (((pNVar18->fields).packageType != 0) && (fVar21 = 0.0, (pNVar18->fields).packageType == 2))
      {
        iVar20 = (pNVar3->fields).timestamp;
        (this->fields).transformReportingHasStopped = 1;
        goto code_?;
      }
    }
    if (fVar19 == 0.0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Interpolation_INTERVAL_IS_ZERO__,(MethodInfo *)0x0);
      fVar21 = fVar16;
code_?:
      pNVar3 = (this->fields).currentPackage;
      pMVar4 = (this->fields)._.worldObject;
      if ((pNVar3 == (NetworkTransformPackage *)0x0) ||
         (pNVar17 = (this->fields).nextPackage, pNVar17 == (NetworkTransformPackage *)0x0))
      goto code_?;
      uStack_22._0_4_ = (pNVar17->fields).position.x;
      uStack_22._4_4_ = (pNVar17->fields).position.y;
      uStack_6._0_4_ = (pNVar3->fields).position.x;
      uStack_6._4_4_ = (pNVar3->fields).position.y;
      if (fVar21 < 0.0) {
        fVar16 = 0.0;
      }
      else if (fVar21 <= fVar16) {
        fVar16 = fVar21;
      }
      if (pMVar4 == (MVWorldObjectClient *)0x0) goto code_?;
      uStack_7 = CONCAT44(uStack_7._4_4_,
                           ((pNVar17->fields).position.z - (pNVar3->fields).position.z) * fVar16 +
                           (pNVar3->fields).position.z);
      uStack_6 = CONCAT44(((float)uStack_22._4_4_ - (float)uStack_6._4_4_) * fVar16 +
                           (float)uStack_6._4_4_,
                           ((float)(undefined4)uStack_22 - (float)(undefined4)uStack_6) * fVar16 +
                           (float)(undefined4)uStack_6);
      (*(pMVar4->klass->vtable).set_Position.methodPtr)
                (pMVar4,&uStack_6,(pMVar4->klass->vtable).set_Position.method);
      pNVar3 = (this->fields).currentPackage;
      pMVar4 = (this->fields)._.worldObject;
      if ((pNVar3 == (NetworkTransformPackage *)0x0) ||
         (pNVar17 = (this->fields).nextPackage, pNVar17 == (NetworkTransformPackage *)0x0))
      goto code_?;
      uStack_22._0_4_ = (pNVar17->fields).rotation.x;
      uStack_22._4_4_ = (pNVar17->fields).rotation.y;
      uStack_23._0_4_ = (pNVar17->fields).rotation.z;
      uStack_23._4_4_ = (pNVar17->fields).rotation.w;
      uStack_8._0_4_ = (pNVar3->fields).rotation.x;
      uStack_8._4_4_ = (pNVar3->fields).rotation.y;
      uStack_9._0_4_ = (pNVar3->fields).rotation.z;
      uStack_9._4_4_ = (pNVar3->fields).rotation.w;
      uStack_6 = 0;
      uStack_7 = 0;
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar24 = func_?(&UNK_?);
        FUN_?(uVar24,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(&uStack_8,&uStack_22,fVar21,&uStack_6);
      if (pMVar4 == (MVWorldObjectClient *)0x0) goto code_?;
      pMVar25 = pMVar4->klass;
      puVar10 = &uStack_8;
      uStack_8 = uStack_6;
      uStack_9 = uStack_7;
      goto code_?;
    }
    if (fVar21 < 0.0) {
      if (pNVar3 == (NetworkTransformPackage *)0x0) goto code_?;
      goto code_?;
    }
    if (fVar21 <= fVar16) goto code_?;
    fVar19 = TypeRef__System__Activator__T._0_4_;
    if (fVar21 < TypeRef__System__Activator__T._0_4_) {
      fVar19 = fVar21;
    }
    pMVar4 = (this->fields)._.worldObject;
    if ((this->fields).transformReportingHasStopped != 0) {
      if ((pNVar18 != (NetworkTransformPackage *)0x0) && (pMVar4 != (MVWorldObjectClient *)0x0)) {
        uStack_22._0_4_ = (pNVar18->fields).position.x;
        uStack_22._4_4_ = (pNVar18->fields).position.y;
        uStack_23 = CONCAT44(uStack_23._4_4_,(pNVar18->fields).position.z);
        (*(pMVar4->klass->vtable).set_Position.methodPtr)
                  (pMVar4,&uStack_22,(pMVar4->klass->vtable).set_Position.method);
        pNVar3 = (this->fields).nextPackage;
        if ((pNVar3 != (NetworkTransformPackage *)0x0) &&
           (pMVar4 = (this->fields)._.worldObject, pMVar4 != (MVWorldObjectClient *)0x0)) {
          uStack_6._0_4_ = (pNVar3->fields).rotation.x;
          uStack_6._4_4_ = (pNVar3->fields).rotation.y;
          uStack_7._0_4_ = (pNVar3->fields).rotation.z;
          uStack_7._4_4_ = (pNVar3->fields).rotation.w;
          (*(pMVar4->klass->vtable).set_Rotation.methodPtr)
                    (pMVar4,&uStack_6,(pMVar4->klass->vtable).set_Rotation.method);
          iVar1 = iRam_?;
          (this->fields).currentPackage = (NetworkTransformPackage *)0x0;
          if (iVar1 != 0) {
            uVar12 = (uint)((ulonglong)&(this->fields).currentPackage >> 0xc);
            uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
            do {
              uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
              puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar14 == *puVar15;
              if (bVar11) {
                *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
              }
              UNLOCK();
              iVar1 = iRam_?;
            } while (!bVar11);
          }
          (this->fields).nextPackage = (NetworkTransformPackage *)0x0;
          if (iVar1 != 0) {
            uVar12 = (uint)((ulonglong)&(this->fields).nextPackage >> 0xc);
            uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
            do {
              uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
              puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar14 == *puVar15;
              if (bVar11) {
                *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
          (this->fields).stopListening = 1;
          return;
        }
      }
      goto code_?;
    }
    if (fVar19 <= fVar21) {
      fVar21 = fVar19;
    }
    if ((pNVar18 == (NetworkTransformPackage *)0x0) ||
       (pNVar3 = (this->fields).currentPackage, pNVar3 == (NetworkTransformPackage *)0x0))
    goto code_?;
    uStack_6._0_4_ = (pNVar3->fields).position.x;
    uStack_6._4_4_ = (pNVar3->fields).position.y;
    uVar26 = (pNVar18->fields).position.x;
    uVar27 = (pNVar18->fields).position.y;
    fVar21 = fVar21 - fVar16;
    fVar19 = (float)uVar26 - (float)(undefined4)uStack_6;
    fVar16 = (float)uVar27 - (float)uStack_6._4_4_;
    if (pNVar18 == (NetworkTransformPackage *)0x0) goto code_?;
    uStack_6._0_4_ = (pNVar18->fields).position.x;
    uStack_6._4_4_ = (pNVar18->fields).position.y;
    if (pMVar4 == (MVWorldObjectClient *)0x0) goto code_?;
    uStack_23 = CONCAT44(uStack_23._4_4_,
                         ((pNVar18->fields).position.z - (pNVar3->fields).position.z) * fVar21 +
                         (pNVar18->fields).position.z);
    uStack_22 = CONCAT44(fVar16 * fVar21 + (float)uStack_6._4_4_,
                         fVar19 * fVar21 + (float)(undefined4)uStack_6);
    (*(pMVar4->klass->vtable).set_Position.methodPtr)
              (pMVar4,&uStack_22,(pMVar4->klass->vtable).set_Position.method);
    pNVar3 = (this->fields).nextPackage;
    if ((pNVar3 == (NetworkTransformPackage *)0x0) ||
       (pMVar4 = (this->fields)._.worldObject, pMVar4 == (MVWorldObjectClient *)0x0))
    goto code_?;
    uStack_6._0_4_ = (pNVar3->fields).rotation.x;
    uStack_6._4_4_ = (pNVar3->fields).rotation.y;
    uStack_7._0_4_ = (pNVar3->fields).rotation.z;
    uStack_7._4_4_ = (pNVar3->fields).rotation.w;
    puVar10 = &uStack_6;
  }
  pMVar25 = pMVar4->klass;
code_?:
  (*(pMVar25->vtable).set_Rotation.methodPtr)(pMVar4,puVar10,(pMVar25->vtable).set_Rotation.method)
  ;
  return;
}


/* Void UpdateTransform(MVNetworkGame, Int32) */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_UpdateTransform
               (MVNetworkListener *this,MVNetworkGame *game,int32_t delayedTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Interpolation_INTERVAL_IS_ZERO__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).transformReportingHasStopped == 0) {
    if ((this->fields).currentPackage == (NetworkTransformPackage *)0x0) {
      pQVar1 = (this->fields).transformQueue;
      if (pQVar1 == (Queue_1_NetworkTransformPackage_ *)0x0) goto code_?;
      if (0 < (pQVar1->fields)._size) {
        pNVar2 = (NetworkTransformPackage *)
                 mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                 Queue_1_System_Object__Dequeue
                           ((Queue_1_System_Object_ *)pQVar1,
                            MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Dequeue__
                           );
        (this->fields).currentPackage = pNVar2;
        func_?(&(this->fields).currentPackage);
      }
      if ((this->fields).currentPackage == (NetworkTransformPackage *)0x0) {
        return;
      }
    }
    if ((this->fields).nextPackage == (NetworkTransformPackage *)0x0) {
      pQVar1 = (this->fields).transformQueue;
      if (pQVar1 == (Queue_1_NetworkTransformPackage_ *)0x0) goto code_?;
      if (0 < (pQVar1->fields)._size) {
        pNVar2 = (NetworkTransformPackage *)
                 mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                 Queue_1_System_Object__Dequeue
                           ((Queue_1_System_Object_ *)pQVar1,
                            MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Dequeue__
                           );
        (this->fields).nextPackage = pNVar2;
        func_?(&(this->fields).nextPackage);
      }
    }
  }
  if ((this->fields).currentPackage == (NetworkTransformPackage *)0x0) {
    return;
  }
  if ((this->fields).nextPackage == (NetworkTransformPackage *)0x0) {
    if ((this->fields).currentPackage == (NetworkTransformPackage *)0x0) {
      return;
    }
    pNVar2 = (this->fields).currentPackage;
code_?:
    pMVar3 = (this->fields)._.worldObject;
    if (pMVar3 == (MVWorldObjectClient *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uStack_5._0_4_ = (pNVar2->fields).position.x;
    uStack_5._4_4_ = (pNVar2->fields).position.y;
    uStack_6 = CONCAT44(uStack_6._4_4_,(pNVar2->fields).position.z);
    (*(pMVar3->klass->vtable).set_Position.methodPtr)
              (pMVar3,&uStack_5,(pMVar3->klass->vtable).set_Position.method);
    pNVar2 = (this->fields).currentPackage;
    if ((pNVar2 == (NetworkTransformPackage *)0x0) ||
       (pMVar3 = (this->fields)._.worldObject, pMVar3 == (MVWorldObjectClient *)0x0))
    goto code_?;
    uStack_7._0_4_ = (pNVar2->fields).rotation.x;
    uStack_7._4_4_ = (pNVar2->fields).rotation.y;
    uStack_8._0_4_ = (pNVar2->fields).rotation.z;
    uStack_8._4_4_ = (pNVar2->fields).rotation.w;
    puVar9 = &uStack_7;
  }
  else {
    if ((this->fields).transformReportingHasStopped == 0) {
      pNVar2 = (this->fields).nextPackage;
      do {
        if (delayedTime < (pNVar2->fields).timestamp) goto code_?;
        pQVar1 = (this->fields).transformQueue;
        if (pQVar1 == (Queue_1_NetworkTransformPackage_ *)0x0) break;
        if ((pQVar1->fields)._size < 1) goto code_?;
        bVar10 = iRam_? != 0;
        (this->fields).currentPackage = (this->fields).nextPackage;
        if (bVar10) {
          uVar11 = (uint)((ulonglong)&(this->fields).currentPackage >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar13 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pQVar1 = (this->fields).transformQueue;
        if (pQVar1 == (Queue_1_NetworkTransformPackage_ *)0x0) break;
        pNVar2 = (NetworkTransformPackage *)
                 mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                 Queue_1_System_Object__Dequeue
                           ((Queue_1_System_Object_ *)pQVar1,
                            MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Dequeue__
                           );
        bVar10 = iRam_? != 0;
        (this->fields).nextPackage = pNVar2;
        if (bVar10) {
          uVar11 = (uint)((ulonglong)&(this->fields).nextPackage >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar13 == *puVar14;
            if (bVar10) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pNVar2 = (this->fields).nextPackage;
      } while (pNVar2 != (NetworkTransformPackage *)0x0);
      goto code_?;
    }
code_?:
    fVar15 = _UNK_?;
    pNVar16 = (this->fields).nextPackage;
    if ((pNVar16 == (NetworkTransformPackage *)0x0) ||
       (pNVar2 = (this->fields).currentPackage, pNVar2 == (NetworkTransformPackage *)0x0))
    goto code_?;
    pNVar17 = (this->fields).nextPackage;
    fVar18 = (float)((pNVar16->fields).timestamp - (pNVar2->fields).timestamp);
    if ((pNVar17->fields).packageType == 1) {
      if (pNVar2 == (NetworkTransformPackage *)0x0) goto code_?;
      iVar19 = (pNVar2->fields).timestamp;
code_?:
      fVar20 = (float)(delayedTime - iVar19) / fVar18;
    }
    else {
      fVar20 = _UNK_?;
      if (((pNVar17->fields).packageType != 0) && (fVar20 = 0.0, (pNVar17->fields).packageType == 2))
      {
        iVar19 = (pNVar2->fields).timestamp;
        (this->fields).transformReportingHasStopped = 1;
        goto code_?;
      }
    }
    if (fVar18 == 0.0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Interpolation_INTERVAL_IS_ZERO__,(MethodInfo *)0x0);
      fVar20 = fVar15;
code_?:
      pNVar2 = (this->fields).currentPackage;
      pMVar3 = (this->fields)._.worldObject;
      if ((pNVar2 == (NetworkTransformPackage *)0x0) ||
         (pNVar16 = (this->fields).nextPackage, pNVar16 == (NetworkTransformPackage *)0x0))
      goto code_?;
      uStack_21._0_4_ = (pNVar16->fields).position.x;
      uStack_21._4_4_ = (pNVar16->fields).position.y;
      uStack_5._0_4_ = (pNVar2->fields).position.x;
      uStack_5._4_4_ = (pNVar2->fields).position.y;
      if (fVar20 < 0.0) {
        fVar15 = 0.0;
      }
      else if (fVar20 <= fVar15) {
        fVar15 = fVar20;
      }
      if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
      uStack_6 = CONCAT44(uStack_6._4_4_,
                           ((pNVar16->fields).position.z - (pNVar2->fields).position.z) * fVar15 +
                           (pNVar2->fields).position.z);
      uStack_5 = CONCAT44(((float)uStack_21._4_4_ - (float)uStack_5._4_4_) * fVar15 +
                           (float)uStack_5._4_4_,
                           ((float)(undefined4)uStack_21 - (float)(undefined4)uStack_5) * fVar15 +
                           (float)(undefined4)uStack_5);
      (*(pMVar3->klass->vtable).set_Position.methodPtr)
                (pMVar3,&uStack_5,(pMVar3->klass->vtable).set_Position.method);
      pNVar2 = (this->fields).currentPackage;
      pMVar3 = (this->fields)._.worldObject;
      if ((pNVar2 == (NetworkTransformPackage *)0x0) ||
         (pNVar16 = (this->fields).nextPackage, pNVar16 == (NetworkTransformPackage *)0x0))
      goto code_?;
      uStack_21._0_4_ = (pNVar16->fields).rotation.x;
      uStack_21._4_4_ = (pNVar16->fields).rotation.y;
      uStack_22._0_4_ = (pNVar16->fields).rotation.z;
      uStack_22._4_4_ = (pNVar16->fields).rotation.w;
      uStack_7._0_4_ = (pNVar2->fields).rotation.x;
      uStack_7._4_4_ = (pNVar2->fields).rotation.y;
      uStack_8._0_4_ = (pNVar2->fields).rotation.z;
      uStack_8._4_4_ = (pNVar2->fields).rotation.w;
      uStack_5 = 0;
      uStack_6 = 0;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar23 = func_?(&UNK_?);
        FUN_?(uVar23,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(&uStack_7,&uStack_21,fVar20,&uStack_5);
      if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
      pMVar24 = pMVar3->klass;
      puVar9 = &uStack_7;
      uStack_7 = uStack_5;
      uStack_8 = uStack_6;
      goto code_?;
    }
    if (fVar20 < 0.0) {
      if (pNVar2 == (NetworkTransformPackage *)0x0) goto code_?;
      goto code_?;
    }
    if (fVar20 <= fVar15) goto code_?;
    fVar18 = TypeRef__System__Activator__T._0_4_;
    if (fVar20 < TypeRef__System__Activator__T._0_4_) {
      fVar18 = fVar20;
    }
    pMVar3 = (this->fields)._.worldObject;
    if ((this->fields).transformReportingHasStopped != 0) {
      if ((pNVar17 != (NetworkTransformPackage *)0x0) && (pMVar3 != (MVWorldObjectClient *)0x0)) {
        uStack_21._0_4_ = (pNVar17->fields).position.x;
        uStack_21._4_4_ = (pNVar17->fields).position.y;
        uStack_22 = CONCAT44(uStack_22._4_4_,(pNVar17->fields).position.z);
        (*(pMVar3->klass->vtable).set_Position.methodPtr)
                  (pMVar3,&uStack_21,(pMVar3->klass->vtable).set_Position.method);
        pNVar2 = (this->fields).nextPackage;
        if ((pNVar2 != (NetworkTransformPackage *)0x0) &&
           (pMVar3 = (this->fields)._.worldObject, pMVar3 != (MVWorldObjectClient *)0x0)) {
          uStack_5._0_4_ = (pNVar2->fields).rotation.x;
          uStack_5._4_4_ = (pNVar2->fields).rotation.y;
          uStack_6._0_4_ = (pNVar2->fields).rotation.z;
          uStack_6._4_4_ = (pNVar2->fields).rotation.w;
          (*(pMVar3->klass->vtable).set_Rotation.methodPtr)
                    (pMVar3,&uStack_5,(pMVar3->klass->vtable).set_Rotation.method);
          iVar19 = iRam_?;
          (this->fields).currentPackage = (NetworkTransformPackage *)0x0;
          if (iVar19 != 0) {
            uVar11 = (uint)((ulonglong)&(this->fields).currentPackage >> 0xc);
            uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
            do {
              uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
              puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
              LOCK();
              bVar10 = uVar13 == *puVar14;
              if (bVar10) {
                *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
              iVar19 = iRam_?;
            } while (!bVar10);
          }
          (this->fields).nextPackage = (NetworkTransformPackage *)0x0;
          if (iVar19 != 0) {
            uVar11 = (uint)((ulonglong)&(this->fields).nextPackage >> 0xc);
            uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
            do {
              uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
              puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
              LOCK();
              bVar10 = uVar13 == *puVar14;
              if (bVar10) {
                *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          (this->fields).stopListening = 1;
          return;
        }
      }
      goto code_?;
    }
    if (fVar18 <= fVar20) {
      fVar20 = fVar18;
    }
    if ((pNVar17 == (NetworkTransformPackage *)0x0) ||
       (pNVar2 = (this->fields).currentPackage, pNVar2 == (NetworkTransformPackage *)0x0))
    goto code_?;
    uStack_5._0_4_ = (pNVar2->fields).position.x;
    uStack_5._4_4_ = (pNVar2->fields).position.y;
    uVar25 = (pNVar17->fields).position.x;
    uVar26 = (pNVar17->fields).position.y;
    fVar20 = fVar20 - fVar15;
    fVar18 = (float)uVar25 - (float)(undefined4)uStack_5;
    fVar15 = (float)uVar26 - (float)uStack_5._4_4_;
    if (pNVar17 == (NetworkTransformPackage *)0x0) goto code_?;
    uStack_5._0_4_ = (pNVar17->fields).position.x;
    uStack_5._4_4_ = (pNVar17->fields).position.y;
    if (pMVar3 == (MVWorldObjectClient *)0x0) goto code_?;
    uStack_22 = CONCAT44(uStack_22._4_4_,
                         ((pNVar17->fields).position.z - (pNVar2->fields).position.z) * fVar20 +
                         (pNVar17->fields).position.z);
    uStack_21 = CONCAT44(fVar15 * fVar20 + (float)uStack_5._4_4_,
                         fVar18 * fVar20 + (float)(undefined4)uStack_5);
    (*(pMVar3->klass->vtable).set_Position.methodPtr)
              (pMVar3,&uStack_21,(pMVar3->klass->vtable).set_Position.method);
    pNVar2 = (this->fields).nextPackage;
    if ((pNVar2 == (NetworkTransformPackage *)0x0) ||
       (pMVar3 = (this->fields)._.worldObject, pMVar3 == (MVWorldObjectClient *)0x0))
    goto code_?;
    uStack_5._0_4_ = (pNVar2->fields).rotation.x;
    uStack_5._4_4_ = (pNVar2->fields).rotation.y;
    uStack_6._0_4_ = (pNVar2->fields).rotation.z;
    uStack_6._4_4_ = (pNVar2->fields).rotation.w;
    puVar9 = &uStack_5;
  }
  pMVar24 = pMVar3->klass;
code_?:
  (*(pMVar24->vtable).set_Rotation.methodPtr)(pMVar3,puVar9,(pMVar24->vtable).set_Rotation.method)
  ;
  return;
}


/* MVNetworkListener(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener__ctor
               (MVNetworkListener *this,MVWorldObjectClient *owner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Queue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<NetworkTransformPackage>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Object_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>__HashSet__);
  bVar1 = iRam_? != 0;
  (this->fields).updateListenerList = (HashSet_1_INetworkUpdateListener_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).updateListenerList >> 0xc);
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
  pQVar6 = (Queue_1_NetworkTransformPackage_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Queue<NetworkTransformPackage>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::Stack_1_System_Object___ctor
            ((Stack_1_System_Object_ *)pQVar6,
             MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Queue__);
  iVar7 = iRam_?;
  (this->fields).transformQueue = pQVar6;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).transformQueue >> 0xc);
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
      iVar7 = iRam_?;
    } while (!bVar1);
  }
  (this->fields)._.worldObject = owner;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  pNVar8 = MVNetworkListener_CreateCurPosTransformPackage(this,(MethodInfo *)0x0);
  pQVar6 = (this->fields).transformQueue;
  if (pQVar6 == (Queue_1_NetworkTransformPackage_ *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pNVar10 = (pQVar6->fields)._array;
  if (pNVar10 != (NetworkTransformPackage__Array *)0x0) {
    if ((pQVar6->fields)._size == (int)pNVar10->max_length) {
      pNVar10 = (pQVar6->fields)._array;
      iVar7 = (int)pNVar10->max_length * 2;
      if (iVar7 < (int)pNVar10->max_length + 4) {
        iVar7 = (int)pNVar10->max_length + 4;
      }
      FUN_?(pQVar6,iVar7,
                    MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
                    ->klass->rgctx_data[5].rgctxDataDummy,in_R9,unaff_RDI);
    }
    pNVar10 = (pQVar6->fields)._array;
    if (pNVar10 != (NetworkTransformPackage__Array *)0x0) {
      FUN_?(pNVar10,(longlong)(pQVar6->fields)._tail,pNVar8);
      pNVar10 = (pQVar6->fields)._array;
      if (pNVar10 != (NetworkTransformPackage__Array *)0x0) {
        iVar11 = (pQVar6->fields)._tail + 1;
        iVar7 = 0;
        if (iVar11 != (int)pNVar10->max_length) {
          iVar7 = iVar11;
        }
        (pQVar6->fields)._tail = iVar7;
        piVar12 = &(pQVar6->fields)._size;
        *piVar12 = *piVar12 + 1;
        piVar12 = &(pQVar6->fields)._version;
        *piVar12 = *piVar12 + 1;
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

