
/* Void AddTransformPackage(NetworkTransformPackage) */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_AddTransformPackage
               (MVNetworkListener *this,NetworkTransformPackage *p,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
                   );
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
  func_?();
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
    func_?(&TypeInfo__NetworkTransformPackage);
    cRam_? = '\x01';
  }
  pNVar1 = (NetworkTransformPackage *)func_?(TypeInfo__NetworkTransformPackage);
  if (pNVar1 != (NetworkTransformPackage *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pNVar1,ExceptionArgument__Enum_obj,unaff_ESI);
    (pNVar1->fields).packageType = 1;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      iVar2 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      (pNVar1->fields).timestamp = iVar2 + -200;
      pMVar3 = (this->fields)._.worldObject;
      if (pMVar3 != (MVWorldObjectClient *)0x0) {
        puVar4 = (undefined8 *)(*(pMVar3->klass->vtable).get_Position.methodPtr)();
        uVar5 = *puVar4;
        fVar6 = *(float *)(puVar4 + 1);
        (pNVar1->fields).position.x = (float)(int)uVar5;
        (pNVar1->fields).position.y = (float)(int)((ulonglong)uVar5 >> 0x20);
        (pNVar1->fields).position.z = fVar6;
        pMVar3 = (this->fields)._.worldObject;
        if (pMVar3 != (MVWorldObjectClient *)0x0) {
          pfVar7 = (float *)(*(pMVar3->klass->vtable).get_Rotation.methodPtr)();
          fVar6 = pfVar7[1];
          fVar8 = pfVar7[2];
          fVar9 = pfVar7[3];
          (pNVar1->fields).rotation.x = *pfVar7;
          (pNVar1->fields).rotation.y = fVar6;
          (pNVar1->fields).rotation.z = fVar8;
          (pNVar1->fields).rotation.w = fVar9;
          return pNVar1;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pNVar1 = (NetworkTransformPackage *)(*pcVar10)();
  return pNVar1;
}


/* Vector3 ExtrapolatePosition(Single) */

Vector3 * Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_ExtrapolatePosition
                    (Vector3 *__return_storage_ptr__,MVNetworkListener *this,float interpFactor,
                    MethodInfo *method)

{
  pNVar1 = (this->fields).nextPackage;
  if (pNVar1 != (NetworkTransformPackage *)0x0) {
    uVar2 = (pNVar1->fields).position.x;
    uVar3 = (pNVar1->fields).position.y;
    fVar4 = (pNVar1->fields).position.z;
    pNVar1 = (this->fields).currentPackage;
    if (pNVar1 != (NetworkTransformPackage *)0x0) {
      uVar5 = (pNVar1->fields).position.x;
      uVar6 = (pNVar1->fields).position.y;
      fVar7 = (pNVar1->fields).position.z;
      fVar8 = interpFactor - _UNK_?;
      pNVar1 = (this->fields).nextPackage;
      if (pNVar1 != (NetworkTransformPackage *)0x0) {
        uVar9 = (pNVar1->fields).position.x;
        uVar10 = (pNVar1->fields).position.y;
        fVar11 = (pNVar1->fields).position.z;
        __return_storage_ptr__->x = (float)uVar9 + fVar8 * ((float)uVar2 - (float)uVar5);
        __return_storage_ptr__->y = (float)uVar10 + fVar8 * ((float)uVar3 - (float)uVar6);
        __return_storage_ptr__->z = fVar11 + (fVar4 - fVar7) * fVar8;
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  pVVar13 = (Vector3 *)(*pcVar12)();
  return pVVar13;
}


/* Quaternion ExtrapolateRotation(Single) */

Quaternion *
Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_ExtrapolateRotation
          (Quaternion *__return_storage_ptr__,MVNetworkListener *this,float interpFactor,
          MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pNVar2 = (this->fields).nextPackage;
  if (pNVar2 != (NetworkTransformPackage *)0x0) {
    fVar3 = (pNVar2->fields).rotation.y;
    fVar4 = (pNVar2->fields).rotation.z;
    fVar5 = (pNVar2->fields).rotation.w;
    __return_storage_ptr__->x = (pNVar2->fields).rotation.x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    __return_storage_ptr__->w = fVar5;
    return __return_storage_ptr__;
  }
  uVar6 = func_?(auStack_7);
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  pQVar9 = (Quaternion *)(*pcVar8)();
  return pQVar9;
}


/* Void RmoveNetorkUpdateListener(INetworkUpdateListener) */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_RmoveNetorkUpdateListener
               (MVNetworkListener *this,INetworkUpdateListener *listener,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Object_ *)(this->fields).updateListenerList;
  if (this_00 != (HashSet_1_System_Object_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Remove
              (this_00,(Object *)listener,
               MethodInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>__Remove_INetworkUpdateListener_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetOwnerTransformToMostResentPackage() */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_SetOwnerTransformToMostResentPackage
               (MVNetworkListener *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__MoveNext__
                   );
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pNVar6 = (NetworkTransformPackage *)0x0;
  pNStack_7 = (NetworkTransformPackage *)0x0;
  QStack_8._q = (Queue_1_System_Object_ *)0x0;
  QStack_8._version = 0;
  QStack_8._index = 0;
  QStack_8._currentElement = (Object *)0x0;
  this_00 = (this->fields).transformQueue;
  if (this_00 != (Queue_1_NetworkTransformPackage_ *)0x0) {
    pQVar9 = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
             Queue_1_System_Object__GetEnumerator
                       (&QStack_10,(Queue_1_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__GetEnumerator__
                       );
    QStack_8._q = pQVar9->_q;
    QStack_8._version = pQVar9->_version;
    QStack_8._index = pQVar9->_index;
    QStack_8._currentElement = pQVar9->_currentElement;
    QStack_10._index = 0;
    uStack_1 = 1;
    QStack_10._currentElement = (Object *)&QStack_8;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]::
              Queue_1_T_Enumerator_System_Object__MoveNext
                        (&QStack_8,
                         MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__MoveNext__
                        );
      if (bVar11 == 0) break;
      pNVar6 = (NetworkTransformPackage *)
               mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]::
               Queue_1_T_Enumerator_System_Object__get_Current
                         (&QStack_8,
                          MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__get_Current__
                         );
      pNStack_7 = pNVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]::
    Queue_1_T_Enumerator_System_Object__Dispose
              (&QStack_8,
               MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__Dispose__
              );
    uStack_1 = 0xffffffff;
    if (((pNVar6 == (NetworkTransformPackage *)0x0) &&
        (pNVar6 = (this->fields).nextPackage, pNVar6 == (NetworkTransformPackage *)0x0)) &&
       (pNVar6 = (this->fields).currentPackage, pNVar6 == (NetworkTransformPackage *)0x0)) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pMVar12 = (this->fields)._.worldObject;
    if ((pNVar6 != (NetworkTransformPackage *)0x0) && (pMVar12 != (MVWorldObjectClient *)0x0)) {
      pMVar13 = pMVar12->klass;
      uVar14._0_4_ = (pNVar6->fields).position.x;
      uVar14._4_4_ = (pNVar6->fields).position.y;
      (*(pMVar13->vtable).set_Position.methodPtr)
                ((this->fields)._.worldObject,uVar14,(pNVar6->fields).position.z,
                 (pMVar13->vtable).set_Position.method);
      pMVar12 = (this->fields)._.worldObject;
      if (pMVar12 != (MVWorldObjectClient *)0x0) {
        (*(pMVar12->klass->vtable).set_Rotation.methodPtr)
                  (pMVar12,(pNVar6->fields).rotation.x,(pNVar6->fields).rotation.y,
                   (pNVar6->fields).rotation.z,(pNVar6->fields).rotation.w,
                   (pMVar12->klass->vtable).set_Rotation.method);
        goto code_?;
      }
    }
  }
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void SetToCurrentPosition() */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_SetToCurrentPosition
               (MVNetworkListener *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
                   );
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
    item = MVNetworkListener_CreateCurPosTransformPackage(this,(MethodInfo *)0x0);
    this_01 = (this->fields).transformQueue;
    if (this_01 != (Queue_1_NetworkTransformPackage_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
      Queue_1_System_Object__Enqueue
                ((Queue_1_System_Object_ *)this_01,(Object *)item,
                 MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
                );
      MVNetworkListener_SetOwnerTransformToMostResentPackage(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_Update
               (MVNetworkListener *this,MVNetworkGame *game,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TransformNetworkManager);
    cRam_? = '\x01';
  }
  MVNetworkListener_UpdateTransform
            (this,game,
             TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField,
             (MethodInfo *)0x0);
  return;
}


/* Void UpdateTransform(MVNetworkGame, Int32) */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_UpdateTransform
               (MVNetworkListener *this,MVNetworkGame *game,int32_t delayedTime,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Dequeue__
                   );
    func_?();
    func_?(&StringLiteral_Interpolation_INTERVAL_IS_ZERO__);
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
        func_?(&(this->fields).currentPackage,pNVar3);
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
        func_?(&(this->fields).nextPackage,pNVar3);
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
    pMVar4 = (pMVar1->fields)._.worldObject;
    if (pMVar4 != (MVWorldObjectClient *)0x0) {
      uVar5._0_4_ = (pNVar3->fields).position.x;
      uVar5._4_4_ = (pNVar3->fields).position.y;
      (*(pMVar4->klass->vtable).set_Position.methodPtr)
                (pMVar4,uVar5,(pNVar3->fields).position.z,
                 (pMVar4->klass->vtable).set_Position.method);
      pNVar3 = (pMVar1->fields).currentPackage;
      if ((pNVar3 != (NetworkTransformPackage *)0x0) &&
         (pMVar4 = (pMVar1->fields)._.worldObject, pMVar4 != (MVWorldObjectClient *)0x0)) {
        fVar6 = (pNVar3->fields).rotation.x;
        fVar7 = (pNVar3->fields).rotation.y;
        fVar8 = (pNVar3->fields).rotation.z;
        fVar9 = (pNVar3->fields).rotation.w;
code_?:
        (*(pMVar4->klass->vtable).set_Rotation.methodPtr)
                  (pMVar4,fVar6,fVar7,fVar8,fVar9,(pMVar4->klass->vtable).set_Rotation.method)
        ;
        return;
      }
    }
  }
  else {
    if ((this->fields).transformReportingHasStopped == 0) {
      pNVar3 = (this->fields).nextPackage;
      if (pNVar3 != (NetworkTransformPackage *)0x0) {
        ppNVar10 = &(this->fields).nextPackage;
        do {
          ppNVar11 = &(this->fields).currentPackage;
          if (delayedTime < (pNVar3->fields).timestamp) goto code_?;
          pQVar2 = (this->fields).transformQueue;
          if (pQVar2 == (Queue_1_NetworkTransformPackage_ *)0x0) break;
          if ((pQVar2->fields)._size < 1) goto code_?;
          *ppNVar11 = *ppNVar10;
          func_?(ppNVar11,*ppNVar10);
          pQVar2 = (this->fields).transformQueue;
          if (pQVar2 == (Queue_1_NetworkTransformPackage_ *)0x0) break;
          pNVar3 = (NetworkTransformPackage *)
                    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                    Queue_1_System_Object__Dequeue
                              ((Queue_1_System_Object_ *)pQVar2,
                               MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Dequeue__
                              );
          *ppNVar10 = pNVar3;
          func_?(ppNVar10,pNVar3);
          pNVar3 = *ppNVar10;
        } while (pNVar3 != (NetworkTransformPackage *)0x0);
      }
      goto code_?;
    }
code_?:
    pMVar12 = _UNK_?;
    pNVar13 = (this->fields).nextPackage;
    if ((pNVar13 == (NetworkTransformPackage *)0x0) ||
       (pNVar3 = (this->fields).currentPackage, pNVar3 == (NetworkTransformPackage *)0x0))
    goto code_?;
    this = (MVNetworkListener *)0x0;
    pNVar14 = (pMVar1->fields).nextPackage;
    fVar6 = (float)((pNVar13->fields).timestamp - (pNVar3->fields).timestamp);
    if ((pNVar14->fields).packageType == 1) {
      if (pNVar3 == (NetworkTransformPackage *)0x0) goto code_?;
      iVar15 = (pNVar3->fields).timestamp;
code_?:
      pMVar16 = (MVNetworkListener *)((float)(delayedTime - iVar15) / fVar6);
    }
    else {
      pMVar16 = _UNK_?;
      if (((pNVar14->fields).packageType != 0) && (pMVar16 = this, (pNVar14->fields).packageType == 2)
         ) {
        iVar15 = (pNVar3->fields).timestamp;
        (pMVar1->fields).transformReportingHasStopped = 1;
        goto code_?;
      }
    }
    this = pMVar16;
    if (fVar6 == 0.0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Interpolation_INTERVAL_IS_ZERO__,(MethodInfo *)0x0);
      this = _UNK_?;
      pMVar12 = _UNK_?;
    }
    else {
      if ((float)this < 0.0) {
        if (pNVar3 == (NetworkTransformPackage *)0x0) goto code_?;
        goto code_?;
      }
      if ((float)pMVar12 < (float)this) {
        pMVar16 = _UNK_?;
        if ((float)this < (float)_UNK_?) {
          pMVar16 = this;
        }
        if ((pMVar1->fields).transformReportingHasStopped == 0) {
          pMVar4 = (pMVar1->fields)._.worldObject;
          if ((float)pMVar16 <= (float)this) {
            this = pMVar16;
          }
          pNVar13 = (pMVar1->fields).nextPackage;
          if (pNVar13 == (NetworkTransformPackage *)0x0) goto code_?;
          uStack_17._0_4_ = (pNVar13->fields).position.x;
          uStack_17._4_4_ = (pNVar13->fields).position.y;
          fStack_18 = (pNVar13->fields).position.z;
          if (pNVar3 == (NetworkTransformPackage *)0x0) goto code_?;
          uStack_19._0_4_ = (pNVar3->fields).position.x;
          uStack_19._4_4_ = (pNVar3->fields).position.y;
          fStack_20 = (pNVar3->fields).position.z;
          fVar7 = (float)(undefined4)uStack_17 - (float)(undefined4)uStack_19;
          fVar8 = (float)uStack_17._4_4_ - (float)uStack_19._4_4_;
          fVar9 = fStack_18 - fStack_20;
          fVar6 = (float)this - (float)pMVar12;
          pNVar3 = (pMVar1->fields).nextPackage;
          if (pNVar3 == (NetworkTransformPackage *)0x0) goto code_?;
          uStack_19._0_4_ = (pNVar3->fields).position.x;
          uStack_19._4_4_ = (pNVar3->fields).position.y;
          fStack_20 = (pNVar3->fields).position.z;
          uStack_17 = CONCAT44((float)uStack_19._4_4_ + fVar8 * fVar6,
                               (float)(undefined4)uStack_19 + fVar7 * fVar6);
          fStack_18 = fStack_20 + fVar9 * fVar6;
          if (pMVar4 == (MVWorldObjectClient *)0x0) goto code_?;
          (*(pMVar4->klass->vtable).set_Position.methodPtr)
                    (pMVar4,uStack_17,fStack_18,(pMVar4->klass->vtable).set_Position.method);
          pMVar4 = (pMVar1->fields)._.worldObject;
          pNVar3 = (pMVar1->fields).nextPackage;
          if ((pNVar3 == (NetworkTransformPackage *)0x0) || (pMVar4 == (MVWorldObjectClient *)0x0)
             ) goto code_?;
          fVar6 = (pNVar3->fields).rotation.x;
          fVar7 = (pNVar3->fields).rotation.y;
          fVar8 = (pNVar3->fields).rotation.z;
          fVar9 = (pNVar3->fields).rotation.w;
          goto code_?;
        }
        pNVar3 = (pMVar1->fields).nextPackage;
        if ((pNVar3 != (NetworkTransformPackage *)0x0) &&
           (pMVar4 = (pMVar1->fields)._.worldObject, pMVar4 != (MVWorldObjectClient *)0x0)) {
          uVar21._0_4_ = (pNVar3->fields).position.x;
          uVar21._4_4_ = (pNVar3->fields).position.y;
          (*(pMVar4->klass->vtable).set_Position.methodPtr)
                    (pMVar4,uVar21,(pNVar3->fields).position.z,
                     (pMVar4->klass->vtable).set_Position.method);
          pNVar3 = (pMVar1->fields).nextPackage;
          if ((pNVar3 != (NetworkTransformPackage *)0x0) &&
             (pMVar4 = (pMVar1->fields)._.worldObject, pMVar4 != (MVWorldObjectClient *)0x0)) {
            (*(pMVar4->klass->vtable).set_Rotation.methodPtr)
                      (pMVar4,(pNVar3->fields).rotation.x,(pNVar3->fields).rotation.y,
                       (pNVar3->fields).rotation.z,(pNVar3->fields).rotation.w,
                       (pMVar4->klass->vtable).set_Rotation.method);
            (pMVar1->fields).currentPackage = (NetworkTransformPackage *)0x0;
            func_?(&(pMVar1->fields).currentPackage,0);
            (pMVar1->fields).nextPackage = (NetworkTransformPackage *)0x0;
            func_?(&(pMVar1->fields).nextPackage,0);
            (pMVar1->fields).stopListening = 1;
            return;
          }
        }
        goto code_?;
      }
    }
    pNVar3 = (pMVar1->fields).currentPackage;
    pMVar4 = (pMVar1->fields)._.worldObject;
    if (pNVar3 != (NetworkTransformPackage *)0x0) {
      uStack_17._0_4_ = (pNVar3->fields).position.x;
      uStack_17._4_4_ = (pNVar3->fields).position.y;
      fStack_18 = (pNVar3->fields).position.z;
      pNVar3 = (pMVar1->fields).nextPackage;
      if (pNVar3 != (NetworkTransformPackage *)0x0) {
        uStack_19._0_4_ = (pNVar3->fields).position.x;
        uStack_19._4_4_ = (pNVar3->fields).position.y;
        fStack_20 = (pNVar3->fields).position.z;
        if ((float)this < 0.0) {
          pMVar12 = (MVNetworkListener *)0x0;
        }
        else if ((float)this <= (float)pMVar12) {
          pMVar12 = this;
        }
        QStack_22.y = ((float)(undefined4)uStack_19 - (float)(undefined4)uStack_17) * (float)pMVar12
                      + (float)(undefined4)uStack_17;
        QStack_22.z = ((float)uStack_19._4_4_ - (float)uStack_17._4_4_) * (float)pMVar12 +
                      (float)uStack_17._4_4_;
        QStack_22.w = (fStack_20 - fStack_18) * (float)pMVar12 + fStack_18;
        if (pMVar4 != (MVWorldObjectClient *)0x0) {
          (*(pMVar4->klass->vtable).set_Position.methodPtr)
                    (pMVar4,CONCAT44(QStack_22.z,QStack_22.y),QStack_22.w,
                     (pMVar4->klass->vtable).set_Position.method);
          pNVar3 = (pMVar1->fields).currentPackage;
          pMVar4 = (pMVar1->fields)._.worldObject;
          if (((pNVar3 != (NetworkTransformPackage *)0x0) &&
              (pNVar13 = (pMVar1->fields).nextPackage, pNVar13 != (NetworkTransformPackage *)0x0)) &&
             (pQVar23 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Lerp
                                  (&QStack_22,(pNVar3->fields).rotation,(pNVar13->fields).rotation,
                                   (float)this,(MethodInfo *)0x0),
             pMVar4 != (MVWorldObjectClient *)0x0)) {
            (*(pMVar4->klass->vtable).set_Rotation.methodPtr)
                      (pMVar4,pQVar23->x,pQVar23->y,pQVar23->z,pQVar23->w,
                       (pMVar4->klass->vtable).set_Rotation.method);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* MVNetworkListener(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener__ctor
               (MVNetworkListener *this,MVWorldObjectClient *owner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>__HashSet__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Queue__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Queue<NetworkTransformPackage>);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>)
  ;
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>__HashSet__)
    ;
    (this->fields).updateListenerList = (HashSet_1_INetworkUpdateListener_ *)this_00;
    func_?(&(this->fields).updateListenerList,this_00);
    pQVar1 = (Queue_1_NetworkTransformPackage_ *)
             func_?(TypeInfo__System__Collections__Generic__Queue<NetworkTransformPackage>)
    ;
    if (pQVar1 != (Queue_1_NetworkTransformPackage_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
      Stack_1_System_Object___ctor
                ((Stack_1_System_Object_ *)pQVar1,
                 MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Queue__);
      method_00 = (MethodInfo *)&(this->fields).transformQueue;
      (this->fields).transformQueue = pQVar1;
      func_?(method_00,pQVar1);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,method_00);
      (this->fields)._.worldObject = owner;
      func_?(&this->fields,owner);
      item = MVNetworkListener_CreateCurPosTransformPackage(this,(MethodInfo *)0x0);
      pQVar1 = (this->fields).transformQueue;
      if (pQVar1 != (Queue_1_NetworkTransformPackage_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
        Queue_1_System_Object__Enqueue
                  ((Queue_1_System_Object_ *)pQVar1,(Object *)item,
                   MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

