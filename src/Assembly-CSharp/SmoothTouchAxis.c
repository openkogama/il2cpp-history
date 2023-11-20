
/* Void Reset() */

void Assembly-CSharp.dll::SmoothTouchAxis::SmoothTouchAxis_Reset
               (SmoothTouchAxis *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_GameCoinStringRenderer_PriceTagString_ *)(this->fields).prevVelocities;
  if (this_00 != (Queue_1_GameCoinStringRenderer_PriceTagString_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Queue`1[GameCoinStringRenderer+PriceTagString]::
    Queue_1_GameCoinStringRenderer_PriceTagString__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Clear__);
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Vector3 UpdateSmoothVelocity(Vector3) */

Vector3 * Assembly-CSharp.dll::SmoothTouchAxis::SmoothTouchAxis_UpdateSmoothVelocity
                    (Vector3 *__return_storage_ptr__,SmoothTouchAxis *this,Vector3 movement,
                    MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff40;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff40;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Enqueue_UnityEngine__Vector3_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__get_Count__
                   );
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  QStack_8._q = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0;
  QStack_8._version = 0;
  QStack_8._index = 0;
  QStack_8._currentElement.notificationType = 0;
  QStack_8._currentElement.data = (Dictionary_2_System_Object_System_Object_ *)0x0;
  QStack_8._currentElement.startTime = 0.0;
  fStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
  ;
  fStack_10 = movement.z / fStack_9;
  uStack_11 = CONCAT44(movement.y / fStack_9,movement.x / fStack_9);
  pQVar12 = (this->fields).prevVelocities;
  if (pQVar12 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
    item.y = movement.y / fStack_9;
    item.x = movement.x / fStack_9;
    item.z = fStack_10;
    mscorlib.dll::System::Collections::Generic::Queue`1[UnityEngine::Vector3]::
    Queue_1_UnityEngine_Vector3__Enqueue
              (pQVar12,item,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Enqueue_UnityEngine__Vector3_
              );
    pQVar12 = (this->fields).prevVelocities;
    while (pQVar12 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
      if ((pQVar12->fields)._size < (this->fields).sampleLength) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_11._0_4_ = (pVVar13->zeroVector).x;
        uStack_11._4_4_ = (pVVar13->zeroVector).y;
        fStack_10 = (pVVar13->zeroVector).z;
        this_00 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
                  (this->fields).prevVelocities;
        if (this_00 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
          pQVar14 = mscorlib.dll::System::Collections::Generic::
                   Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
                   Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__GetEnumerator
                             ((Queue_1_T_Enumerator_NotificationAreaSingleInstanceQueue_NotificationQueueData_
                               *)auStack_15,this_00,
                              MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__GetEnumerator__
                             );
          uStack_16 = 0;
          QStack_8._q = pQVar14->_q;
          QStack_8._version = pQVar14->_version;
          QStack_8._index = pQVar14->_index;
          QStack_8._currentElement.notificationType = (pQVar14->_currentElement).notificationType;
          QStack_8._currentElement.data = (pQVar14->_currentElement).data;
          QStack_8._currentElement.startTime = (pQVar14->_currentElement).startTime;
          uStack_2 = 1;
          pQStack_17 = &QStack_8;
          while (bVar18 = mscorlib.dll::System::Collections::Generic::
                         Queue`1[T]+Enumerator[UnityEngine::Vector3]::
                         Queue_1_T_Enumerator_UnityEngine_Vector3__MoveNext
                                   ((Queue_1_T_Enumerator_UnityEngine_Vector3_ *)&QStack_8,
                                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                                   ), bVar18 != 0) {
            pNVar19 = mscorlib.dll::System::Collections::Generic::
                     Queue`1[T]+Enumerator[NotificationAreaSingleInstanceQueue+NotificationQueueData]
                     ::
                     Queue_1_T_Enumerator_NotificationAreaSingleInstanceQueue_NotificationQueueData__get_Current
                               ((NotificationAreaSingleInstanceQueue_NotificationQueueData *)
                                (auStack_15 + 8),&QStack_8,
                                MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                               );
            uStack_20._0_4_ = pNVar19->notificationType;
            uStack_20._4_4_ = pNVar19->data;
            fStack_21 = pNVar19->startTime;
            VStack_22.z = fStack_10 + fStack_21;
            uStack_11 = CONCAT44(uStack_11._4_4_ + (float)uStack_20._4_4_,
                                 (float)uStack_11 + (float)(undefined4)uStack_20);
            fStack_10 = VStack_22.z;
          }
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::Collections::Generic::
          Queue`1[T]+Enumerator[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
          Queue_1_T_Enumerator_NotificationAreaSingleInstanceQueue_NotificationQueueData__Dispose
                    (&QStack_8,
                     MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                    );
          uStack_2 = 0xffffffff;
          pQVar12 = (this->fields).prevVelocities;
          if (pQVar12 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
            fVar23 = (float)(pQVar12->fields)._size;
            auStack_15._0_4_ = (float)uStack_11 / fVar23;
            auStack_15._4_4_ = 0;
            auStack_15._8_4_ = 0;
            iStack_24 = 0;
            fStack_25 = uStack_11._4_4_ / fVar23;
            pQStack_17 = (Queue_1_T_Enumerator_NotificationAreaSingleInstanceQueue_NotificationQueueData_
                          *)(fStack_10 / fVar23);
            fVar23 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            __return_storage_ptr__->x = (float)auStack_15._0_4_ * fVar23;
            __return_storage_ptr__->y = fStack_25 * fVar23;
            __return_storage_ptr__->z = (float)pQStack_17 * fVar23;
            *unaff_FS_OFFSET = uStack_4;
            return __return_storage_ptr__;
          }
        }
        break;
      }
      if (pQVar12 == (Queue_1_UnityEngine_Vector3_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Queue`1[UnityEngine::Vector3]::
      Queue_1_UnityEngine_Vector3__Dequeue
                (&VStack_22,pQVar12,
                 MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Dequeue__);
      pQVar12 = (this->fields).prevVelocities;
    }
  }
  func_?();
  func_?();
  pcVar26 = (code *)swi(3);
  pVVar27 = (Vector3 *)(*pcVar26)();
  return pVVar27;
}


/* SmoothTouchAxis(Int32) */

void Assembly-CSharp.dll::SmoothTouchAxis::SmoothTouchAxis__ctor
               (SmoothTouchAxis *this,int32_t sampleLength,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            ((Stack_1_System_Int32_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__);
  method_00 = (MethodInfo *)&(this->fields).prevVelocities;
  (this->fields).prevVelocities = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).sampleLength = sampleLength;
  return;
}

