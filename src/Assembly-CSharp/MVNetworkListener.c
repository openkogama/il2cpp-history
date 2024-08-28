
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
  method_00 = TypeInfo__NetworkTransformPackage;
  pNVar1 = (NetworkTransformPackage *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)pNVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pNVar1 != (NetworkTransformPackage *)0x0) {
    (pNVar1->fields).packageType = 1;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      iVar2 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      (pNVar1->fields).timestamp = iVar2 + -200;
      pMVar3 = (this->fields)._.worldObject;
      if (pMVar3 != (MVWorldObjectClient *)0x0) {
        puVar4 = (undefined8 *)(*(code *)(pMVar3->klass->vtable).get_Position.method)();
        uVar5 = *puVar4;
        fVar6 = *(float *)(puVar4 + 1);
        (pNVar1->fields).position.x = (float)(int)uVar5;
        (pNVar1->fields).position.y = (float)(int)((ulonglong)uVar5 >> 0x20);
        (pNVar1->fields).position.z = fVar6;
        pMVar3 = (this->fields)._.worldObject;
        if (pMVar3 != (MVWorldObjectClient *)0x0) {
          pfVar7 = (float *)(*(code *)(pMVar3->klass->vtable).get_Rotation.method)();
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
    fVar2 = (pNVar1->fields).position.z;
    uVar3 = (pNVar1->fields).position.x;
    uVar4 = (pNVar1->fields).position.y;
    pNVar5 = (this->fields).currentPackage;
    if (pNVar5 != (NetworkTransformPackage *)0x0) {
      uVar6 = (pNVar5->fields).position.x;
      uVar7 = (pNVar5->fields).position.y;
      fVar8 = (pNVar5->fields).position.z;
      fVar9 = interpFactor - _UNK_?;
      uVar10 = (pNVar1->fields).position.x;
      uVar11 = (pNVar1->fields).position.y;
      fVar12 = (pNVar1->fields).position.z;
      __return_storage_ptr__->x = (float)uVar10 + fVar9 * ((float)uVar3 - (float)uVar6);
      __return_storage_ptr__->y = (float)uVar11 + fVar9 * ((float)uVar4 - (float)uVar7);
      __return_storage_ptr__->z = fVar12 + (fVar2 - fVar8) * fVar9;
      return __return_storage_ptr__;
    }
  }
  func_?();
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
  this_00 = (this->fields).transformQueue;
  if (this_00 != (Queue_1_NetworkTransformPackage_ *)0x0) {
    pQVar8 = mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
             Queue_1_System_Object__GetEnumerator
                       (&QStack_9,(Queue_1_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__GetEnumerator__
                       );
    QStack_10._q = pQVar8->_q;
    QStack_10._version = pQVar8->_version;
    QStack_10._index = pQVar8->_index;
    QStack_10._currentElement = pQVar8->_currentElement;
    QStack_9._index = 0;
    uStack_1 = 1;
    QStack_9._currentElement = (Object *)&QStack_10;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]::
              Queue_1_T_Enumerator_System_Object__MoveNext
                        (&QStack_10,
                         MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__MoveNext__
                        );
      if (bVar11 == 0) break;
      pNVar6 = (NetworkTransformPackage *)
               mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]::
               Queue_1_T_Enumerator_System_Object__get_Current
                         (&QStack_10,
                          MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<NetworkTransformPackage>__get_Current__
                         );
      pNStack_7 = pNVar6;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[System::Object]::
    Queue_1_T_Enumerator_System_Object__Dispose
              (&QStack_10,
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
      (*(code *)(pMVar13->vtable).set_Position.method)
                ((this->fields)._.worldObject,uVar14,(pNVar6->fields).position.z,
                 (pMVar13->vtable).get_Rotation.methodPtr);
      pMVar12 = (this->fields)._.worldObject;
      if (pMVar12 != (MVWorldObjectClient *)0x0) {
        (*(code *)(pMVar12->klass->vtable).set_Rotation.method)
                  (pMVar12,(pNVar6->fields).rotation.x,(pNVar6->fields).rotation.y,
                   (pNVar6->fields).rotation.z,(pNVar6->fields).rotation.w,
                   (pMVar12->klass->vtable).get_Scale.methodPtr);
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
    ppNVar2 = &(this->fields).currentPackage;
    if ((this->fields).currentPackage == (NetworkTransformPackage *)0x0) {
      pQVar3 = (this->fields).transformQueue;
      if (pQVar3 == (Queue_1_NetworkTransformPackage_ *)0x0) goto code_?;
      if (0 < (pQVar3->fields)._size) {
        pNVar4 = (NetworkTransformPackage *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar3,
                             MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Dequeue__
                            );
        *ppNVar2 = pNVar4;
        func_?(ppNVar2,pNVar4);
      }
      if (*ppNVar2 == (NetworkTransformPackage *)0x0) goto code_?;
    }
    ppNVar2 = &(this->fields).nextPackage;
    if ((this->fields).nextPackage == (NetworkTransformPackage *)0x0) {
      pQVar3 = (this->fields).transformQueue;
      if (pQVar3 == (Queue_1_NetworkTransformPackage_ *)0x0) goto code_?;
      if (0 < (pQVar3->fields)._size) {
        pNVar4 = (NetworkTransformPackage *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar3,
                             MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Dequeue__
                            );
        *ppNVar2 = pNVar4;
        func_?(ppNVar2,pNVar4);
      }
    }
  }
code_?:
  ppNVar2 = &(this->fields).currentPackage;
  if ((this->fields).currentPackage == (NetworkTransformPackage *)0x0) {
    return;
  }
  pNVar4 = (this->fields).nextPackage;
  ppNVar5 = &(this->fields).nextPackage;
  if (pNVar4 == (NetworkTransformPackage *)0x0) {
code_?:
    pMVar6 = (pMVar1->fields)._.worldObject;
    if (pMVar6 != (MVWorldObjectClient *)0x0) {
      pNVar4 = *ppNVar2;
      uVar7._0_4_ = (pNVar4->fields).position.x;
      uVar7._4_4_ = (pNVar4->fields).position.y;
      (*(code *)(pMVar6->klass->vtable).set_Position.method)
                (pMVar6,uVar7,(pNVar4->fields).position.z,
                 (pMVar6->klass->vtable).get_Rotation.methodPtr);
      pNVar4 = *ppNVar2;
      if ((pNVar4 != (NetworkTransformPackage *)0x0) &&
         (pMVar6 = (pMVar1->fields)._.worldObject, pMVar6 != (MVWorldObjectClient *)0x0)) {
        pMVar8 = pMVar6->klass;
        fVar9 = (pNVar4->fields).rotation.x;
        fVar10 = (pNVar4->fields).rotation.y;
        fVar11 = (pNVar4->fields).rotation.z;
        fVar12 = (pNVar4->fields).rotation.w;
        pIVar13 = (pMVar8->vtable).get_Scale.methodPtr;
code_?:
        (*(code *)(pMVar8->vtable).set_Rotation.method)
                  (pMVar6,fVar9,fVar10,fVar11,fVar12,pIVar13);
        return;
      }
    }
  }
  else {
    if ((this->fields).transformReportingHasStopped == 0) {
      do {
        if (delayedTime < (pNVar4->fields).timestamp) goto code_?;
        pQVar3 = (this->fields).transformQueue;
        if (pQVar3 == (Queue_1_NetworkTransformPackage_ *)0x0) break;
        if ((pQVar3->fields)._size < 1) goto code_?;
        *ppNVar2 = *ppNVar5;
        func_?(ppNVar2,*ppNVar5);
        pQVar3 = (this->fields).transformQueue;
        if (pQVar3 == (Queue_1_NetworkTransformPackage_ *)0x0) break;
        pNVar4 = (NetworkTransformPackage *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar3,
                             MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Dequeue__
                            );
        *ppNVar5 = pNVar4;
        func_?(ppNVar5,pNVar4);
        pNVar4 = *ppNVar5;
      } while (pNVar4 != (NetworkTransformPackage *)0x0);
      goto code_?;
    }
code_?:
    pMVar14 = _UNK_?;
    pNVar4 = *ppNVar5;
    if ((pNVar4 == (NetworkTransformPackage *)0x0) ||
       (pNStack_15 = *ppNVar2, pNStack_15 == (NetworkTransformPackage *)0x0)) goto code_?;
    pNVar16 = *ppNVar2;
    this = (MVNetworkListener *)0x0;
    fVar9 = (float)((pNVar4->fields).timestamp - (pNVar16->fields).timestamp);
    if ((pNVar4->fields).packageType == 1) {
      iVar17 = (pNVar16->fields).timestamp;
code_?:
      pMVar18 = (MVNetworkListener *)((float)(delayedTime - iVar17) / fVar9);
    }
    else {
      pMVar18 = _UNK_?;
      if (((pNVar4->fields).packageType != 0) &&
         (pMVar18 = this, (pNVar4->fields).packageType == 2)) {
        iVar17 = (pNVar16->fields).timestamp;
        (pMVar1->fields).transformReportingHasStopped = 1;
        goto code_?;
      }
    }
    this = pMVar18;
    ppNVar5 = &(pMVar1->fields).nextPackage;
    if (fVar9 == 0.0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Interpolation_INTERVAL_IS_ZERO__,(MethodInfo *)0x0);
      this = _UNK_?;
      pMVar14 = _UNK_?;
    }
    else {
      if ((float)this < 0.0) goto code_?;
      if ((float)pMVar14 < (float)this) {
        pMVar18 = _UNK_?;
        if ((float)this < (float)_UNK_?) {
          pMVar18 = this;
        }
        pMVar6 = (pMVar1->fields)._.worldObject;
        if ((pMVar1->fields).transformReportingHasStopped != 0) {
          if (((pMVar6 != (MVWorldObjectClient *)0x0) &&
              (pNVar4 = *ppNVar5, uVar19._0_4_ = (pNVar4->fields).position.x,
              uVar19._4_4_ = (pNVar4->fields).position.y,
              (*(code *)(pMVar6->klass->vtable).set_Position.method)
                        ((pMVar1->fields)._.worldObject,uVar19,(pNVar4->fields).position.z,
                         (pMVar6->klass->vtable).get_Rotation.methodPtr),
              *ppNVar5 != (NetworkTransformPackage *)0x0)) &&
             (pMVar6 = (pMVar1->fields)._.worldObject, pMVar6 != (MVWorldObjectClient *)0x0)) {
            pNVar4 = *ppNVar5;
            (*(code *)(pMVar6->klass->vtable).set_Rotation.method)
                      (pMVar6,(pNVar4->fields).rotation.x,(pNVar4->fields).rotation.y,
                       (pNVar4->fields).rotation.z,(pNVar4->fields).rotation.w,
                       (pMVar6->klass->vtable).get_Scale.methodPtr);
            ppNVar2 = &(pMVar1->fields).currentPackage;
            *ppNVar2 = (NetworkTransformPackage *)0x0;
            func_?(ppNVar2,0);
            *ppNVar5 = (NetworkTransformPackage *)0x0;
            func_?(ppNVar5,0);
            (pMVar1->fields).stopListening = 1;
            return;
          }
          goto code_?;
        }
        if ((float)pMVar18 <= (float)this) {
          this = pMVar18;
        }
        uVar20 = (pNVar4->fields).position.x;
        uVar21 = (pNVar4->fields).position.y;
        uVar22 = (pNStack_15->fields).position.x;
        uVar23 = (pNStack_15->fields).position.y;
        fVar9 = (float)this - (float)pMVar14;
        uStack_24._0_4_ = (pNVar4->fields).position.x;
        uStack_24._4_4_ = (pNVar4->fields).position.y;
        fStack_25 = (pNVar4->fields).position.z;
        uStack_26 = CONCAT44((float)uStack_24._4_4_ + ((float)uVar21 - (float)uVar23) * fVar9,
                             (float)(undefined4)uStack_24 + ((float)uVar20 - (float)uVar22) * fVar9);
        fStack_27 = fStack_25 +
                   ((pNVar4->fields).position.z - (pNStack_15->fields).position.z) * fVar9;
        if (pMVar6 == (MVWorldObjectClient *)0x0) goto code_?;
        (*(code *)(pMVar6->klass->vtable).set_Position.method)
                  ((pMVar1->fields)._.worldObject,uStack_26,fStack_27,
                   (pMVar6->klass->vtable).get_Rotation.methodPtr);
        pMVar6 = (pMVar1->fields)._.worldObject;
        pNVar4 = *ppNVar5;
        if ((pNVar4 == (NetworkTransformPackage *)0x0) || (pMVar6 == (MVWorldObjectClient *)0x0))
        goto code_?;
        pMVar8 = pMVar6->klass;
        fVar9 = (pNVar4->fields).rotation.x;
        fVar10 = (pNVar4->fields).rotation.y;
        fVar11 = (pNVar4->fields).rotation.z;
        fVar12 = (pNVar4->fields).rotation.w;
        pIVar13 = (pMVar8->vtable).get_Scale.methodPtr;
        goto code_?;
      }
    }
    pNVar4 = *ppNVar2;
    pMVar6 = (pMVar1->fields)._.worldObject;
    if (pNVar4 != (NetworkTransformPackage *)0x0) {
      uStack_26._0_4_ = (pNVar4->fields).position.x;
      uStack_26._4_4_ = (pNVar4->fields).position.y;
      fStack_27 = (pNVar4->fields).position.z;
      pNVar4 = *ppNVar5;
      if (pNVar4 != (NetworkTransformPackage *)0x0) {
        uStack_24._0_4_ = (pNVar4->fields).position.x;
        uStack_24._4_4_ = (pNVar4->fields).position.y;
        fStack_25 = (pNVar4->fields).position.z;
        if ((float)this < 0.0) {
          pMVar14 = (MVNetworkListener *)0x0;
        }
        else if ((float)this <= (float)pMVar14) {
          pMVar14 = this;
        }
        QStack_28.y = ((float)(undefined4)uStack_24 - (float)(undefined4)uStack_26) * (float)pMVar14
                      + (float)(undefined4)uStack_26;
        QStack_28.z = ((float)uStack_24._4_4_ - (float)uStack_26._4_4_) * (float)pMVar14 +
                      (float)uStack_26._4_4_;
        QStack_28.w = (fStack_25 - fStack_27) * (float)pMVar14 + fStack_27;
        if (pMVar6 != (MVWorldObjectClient *)0x0) {
          pMVar8 = pMVar6->klass;
          (*(code *)(pMVar8->vtable).set_Position.method)
                    ((pMVar1->fields)._.worldObject,CONCAT44(QStack_28.z,QStack_28.y),QStack_28.w,
                     (pMVar8->vtable).get_Rotation.methodPtr);
          pMVar6 = (pMVar1->fields)._.worldObject;
          if (((*ppNVar2 != (NetworkTransformPackage *)0x0) &&
              (*ppNVar5 != (NetworkTransformPackage *)0x0)) &&
             (pQVar29 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Lerp
                                  (&QStack_28,((*ppNVar2)->fields).rotation,
                                   ((*ppNVar5)->fields).rotation,(float)this,(MethodInfo *)0x0),
             pMVar6 != (MVWorldObjectClient *)0x0)) {
            pMVar8 = pMVar6->klass;
            fVar9 = pQVar29->x;
            fVar10 = pQVar29->y;
            fVar11 = pQVar29->z;
            fVar12 = pQVar29->w;
            pIVar13 = (pMVar8->vtable).get_Scale.methodPtr;
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
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
  this_00 = (HashSet_1_System_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>)
  ;
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>__HashSet__);
  ppHVar1 = &(this->fields).updateListenerList;
  *ppHVar1 = (HashSet_1_INetworkUpdateListener_ *)this_00;
  func_?(ppHVar1,this_00);
  this_01 = (Queue_1_NetworkTransformPackage_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<NetworkTransformPackage>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            ((Stack_1_System_Int32_ *)this_01,
             MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Queue__);
  ppQVar2 = &(this->fields).transformQueue;
  *ppQVar2 = this_01;
  method_00 = (MethodInfo *)ppQVar2;
  func_?(ppQVar2,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._.worldObject = owner;
  func_?(&this->fields,owner);
  item = MVNetworkListener_CreateCurPosTransformPackage(this,(MethodInfo *)0x0);
  if (*ppQVar2 != (Queue_1_NetworkTransformPackage_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
    Queue_1_System_Object__Enqueue
              ((Queue_1_System_Object_ *)*ppQVar2,(Object *)item,
               MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
              );
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

