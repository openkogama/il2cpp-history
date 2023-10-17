
/* Void Clear() */

void Assembly-CSharp.dll::PlaymodeCamera+SmoothLookAt::PlaymodeCamera_SmoothLookAt_Clear
               (PlaymodeCamera_SmoothLookAt *this,MethodInfo *method)

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


/* Vector3 GetCurrentLookAt(Vector3) */

Vector3 * Assembly-CSharp.dll::PlaymodeCamera+SmoothLookAt::
          PlaymodeCamera_SmoothLookAt_GetCurrentLookAt
                    (Vector3 *__return_storage_ptr__,PlaymodeCamera_SmoothLookAt *this,
                    Vector3 velocity,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff7c;
  puVar5 = &stack0xffffff7c;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (Queue_1_UnityEngine_Vector3___Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Vector3__Array *)0x0;
  auStack_6._12_4_ = 0.0;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  pQVar7 = (this->fields).prevVelocities;
  auStack_6._16_4_ = 0.0;
  auStack_6._20_4_ = 0.0;
  do {
    if (pQVar7 == (Queue_1_UnityEngine_Vector3_ *)0x0) {
code_?:
      uVar8 = func_?();
      func_?(uVar8);
      pcVar9 = (code *)swi(3);
      pVVar10 = (Vector3 *)(*pcVar9)();
      return pVVar10;
    }
    if ((pQVar7->fields)._size < (this->fields).samleLength) {
      pQStack_11 = (this->fields).prevVelocities;
      fStack_12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
      fStack_13 = fStack_12 * 0.0;
      uStack_14 = CONCAT44(velocity.y * fStack_12,fStack_12 * 0.0);
      if (pQStack_11 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
        item.y = velocity.y * fStack_12;
        item.x = fStack_12 * 0.0;
        item.z = fStack_13;
        mscorlib.dll::System::Collections::Generic::Queue`1[UnityEngine::Vector3]::
        Queue_1_UnityEngine_Vector3__Enqueue
                  (pQStack_11,item,
                   MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Enqueue_UnityEngine__Vector3_
                  );
        if (cRam_? == '\0') {
          auStack_6._8_4_ = &TypeInfo__UnityEngine__Vector3;
          auStack_6._4_4_ = &UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar16 = (pVVar15->zeroVector).y;
        fVar17 = (pVVar15->zeroVector).z;
        __return_storage_ptr__->x = (pVVar15->zeroVector).x;
        __return_storage_ptr__->y = fVar16;
        __return_storage_ptr__->z = fVar17;
        this_00 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
                  (this->fields).prevVelocities;
        if (this_00 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
          pQVar18 = mscorlib.dll::System::Collections::Generic::
                   Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
                   Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__GetEnumerator
                             ((Queue_1_T_Enumerator_NotificationAreaSingleInstanceQueue_NotificationQueueData_
                               *)(auStack_6 + 0x18),this_00,
                              MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__GetEnumerator__
                             );
          uStack_19 = 0;
          auStack_6._0_4_ = pQVar18->_q;
          auStack_6._4_4_ = pQVar18->_version;
          auStack_6._8_4_ = pQVar18->_index;
          auStack_6._12_4_ = (pQVar18->_currentElement).notificationType;
          auStack_6._16_4_ = (pQVar18->_currentElement).data;
          auStack_6._20_4_ = (pQVar18->_currentElement).startTime;
          uStack_1 = 1;
          pQStack_11 = (Queue_1_UnityEngine_Vector3_ *)auStack_6;
          while (bVar20 = mscorlib.dll::System::Collections::Generic::
                         Queue`1[T]+Enumerator[UnityEngine::Vector3]::
                         Queue_1_T_Enumerator_UnityEngine_Vector3__MoveNext
                                   ((Queue_1_T_Enumerator_UnityEngine_Vector3_ *)auStack_6,
                                    MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                                   ), bVar20 != 0) {
            pVVar10 = mscorlib.dll::System::Collections::Generic::Queue`1[T]+Enumerator[UnityEngine
                      ::Vector3]::Queue_1_T_Enumerator_UnityEngine_Vector3__get_Current
                                (&VStack_21,(Queue_1_T_Enumerator_UnityEngine_Vector3_ *)auStack_6,
                                 MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                                );
            uStack_22._0_4_ = __return_storage_ptr__->x;
            uStack_22._4_4_ = __return_storage_ptr__->y;
            fStack_23 = __return_storage_ptr__->z;
            uStack_14._0_4_ = pVVar10->x;
            uStack_14._4_4_ = pVVar10->y;
            fStack_13 = pVVar10->z;
            VStack_24.z = fStack_13 + fStack_23;
            __return_storage_ptr__->x = (float)(undefined4)uStack_14 + (float)uStack_22;
            __return_storage_ptr__->y = (float)uStack_14._4_4_ + uStack_22._4_4_;
            __return_storage_ptr__->z = VStack_24.z;
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::Collections::Generic::
          Queue`1[T]+Enumerator[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
          Queue_1_T_Enumerator_NotificationAreaSingleInstanceQueue_NotificationQueueData__Dispose
                    ((Queue_1_T_Enumerator_NotificationAreaSingleInstanceQueue_NotificationQueueData_
                      *)auStack_6,
                     MethodInfo__System__Collections__Generic__Queue_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                    );
          uStack_1 = 0xffffffff;
          fStack_23 = __return_storage_ptr__->z;
          uStack_22._0_4_ = __return_storage_ptr__->x;
          uStack_22._4_4_ = __return_storage_ptr__->y;
          pQVar7 = (this->fields).prevVelocities;
          if (pQVar7 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
            fVar17 = (float)(pQVar7->fields)._size;
            VStack_24.z = fStack_23 / fVar17;
            __return_storage_ptr__->x = (float)uStack_22 / fVar17;
            __return_storage_ptr__->y = uStack_22._4_4_ / fVar17;
            __return_storage_ptr__->z = VStack_24.z;
            fVar17 = (this->fields).maxMag;
            if (fVar17 * fVar17 <
                __return_storage_ptr__->x * __return_storage_ptr__->x +
                __return_storage_ptr__->y * __return_storage_ptr__->y +
                __return_storage_ptr__->z * __return_storage_ptr__->z) {
              puVar25 = (undefined8 *)func_?(&VStack_21,__return_storage_ptr__,0);
              fVar17 = (this->fields).maxMag;
              fVar16 = *(float *)(puVar25 + 1);
              uStack_22._0_4_ = (float)*puVar25;
              uStack_22._4_4_ = (float)((ulonglong)*puVar25 >> 0x20);
              __return_storage_ptr__->x = (float)uStack_22 * fVar17;
              __return_storage_ptr__->y = uStack_22._4_4_ * fVar17;
              __return_storage_ptr__->z = fVar16 * fVar17;
            }
            *unaff_FS_OFFSET = uStack_3;
            return __return_storage_ptr__;
          }
        }
      }
      goto code_?;
    }
    if (pQVar7 == (Queue_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Queue`1[UnityEngine::Vector3]::
    Queue_1_UnityEngine_Vector3__Dequeue
              (&VStack_24,pQVar7,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Dequeue__);
    pQVar7 = (this->fields).prevVelocities;
  } while( true );
}


/* PlaymodeCamera+SmoothLookAt() */

void Assembly-CSharp.dll::PlaymodeCamera+SmoothLookAt::PlaymodeCamera_SmoothLookAt__ctor
               (PlaymodeCamera_SmoothLookAt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  (this->fields).samleLength = 5;
  this_00 = (Queue_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
  if (this_00 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
    Stack_1_System_Object___ctor
              ((Stack_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__);
    method_00 = (MethodInfo *)&(this->fields).prevVelocities;
    (this->fields).prevVelocities = this_00;
    func_?(method_00,this_00);
    (this->fields).maxMag = 30.0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

