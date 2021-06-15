
/* Void Clear() */

void Assembly-CSharp.dll::PlaymodeCamera+SmoothLookAt::PlaymodeCamera_SmoothLookAt_Clear
               (PlaymodeCamera_SmoothLookAt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).prevVelocities;
  if (this_00 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
    System.dll::System::Collections::Generic::Queue`1[System::Int32]::Queue_1_System_Int32__Clear
              ((Queue_1_System_Int32_ *)this_00,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Clear__);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?();
  pQVar6 = (this->fields).prevVelocities;
  puStack_4 = &stack0xffffff90;
  puStack_7 = (undefined4 *)&stack0xffffff90;
  do {
    if (pQVar6 == (Queue_1_UnityEngine_Vector3_ *)0x0) {
code_?:
      func_?(0);
      func_?(unaff_EBX,0,0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pIVar10 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar6,
                        MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__get_Count__
                       );
    if ((int)pIVar10 < (this->fields).samleLength) {
      pQVar6 = (this->fields).prevVelocities;
      fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      VStack_12.z = fVar11;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      auVar13._4_8_ = 0;
      auVar13._0_4_ = velocity.y;
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&QStack_14,(Vector3)(auVar13 << 0x20),VStack_12.z,
                          (MethodInfo *)0x0);
      if (pQVar6 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
        System.dll::System::Collections::Generic::Queue`1[UnityEngine::Vector3]::
        Queue_1_UnityEngine_Vector3__Enqueue
                  (pQVar6,*pVVar9,
                   MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Enqueue_UnityEngine__Vector3_
                  );
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                           ((Vector3 *)&QStack_14,(MethodInfo *)0x0);
        iStack_15 = (int32_t)pVVar9->x;
        iStack_16 = (int32_t)pVVar9->y;
        fStack_17 = pVVar9->z;
        pQVar6 = (this->fields).prevVelocities;
        if (pQVar6 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
          System.dll::System::Collections::Generic::Queue`1[System::Int32]::
          Queue_1_System_Int32__GetEnumerator
                    (&QStack_14,(Queue_1_System_Int32_ *)pQVar6,
                     MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__GetEnumerator__
                    );
          uStack_1 = 0;
          while (cVar18 = func_?(), cVar18 != '\0') {
            puVar19 = (undefined8 *)func_?();
            VStack_12.y = (float)iStack_15;
            VStack_12.z = (float)iStack_16;
            QStack_14._4_8_ = *puVar19;
            fVar11 = *(float *)(puVar19 + 1);
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            a.z = fStack_17;
            a.x = VStack_12.y;
            a.y = VStack_12.z;
            b.z = fVar11;
            b.x = (float)QStack_14.idx;
            b.y = (float)QStack_14.ver;
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               ((Vector3 *)&stack0xffffff9c,a,b,(MethodInfo *)0x0);
            iStack_15 = (int32_t)pVVar9->x;
            iStack_16 = (int32_t)pVVar9->y;
            fStack_17 = pVVar9->z;
          }
          unaff_EBX = 0;
          *puStack_7 = 0x99;
          uStack_1 = 0xffffffff;
          func_?();
          pQVar6 = (this->fields).prevVelocities;
          QStack_14.idx = iStack_15;
          QStack_14.ver = iStack_16;
          if (pQVar6 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
            pIVar10 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                     KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                     KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                               ((KogamaSettingNumericBase_1_System_Single_ *)pQVar6,
                                MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__get_Count__
                               );
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            a_00.z = fStack_17;
            a_00.x = (float)QStack_14.idx;
            a_00.y = (float)QStack_14.ver;
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                               ((Vector3 *)&stack0xffffff9c,a_00,(float)(int)pIVar10,
                                (MethodInfo *)0x0);
            uVar20._0_4_ = pVVar9->x;
            uVar20._4_4_ = pVVar9->y;
            fVar21 = pVVar9->z;
            fVar22 = (float10)func_?();
            fVar11 = (this->fields).maxMag;
            if (fVar11 * fVar11 < (float)fVar22) {
              puVar19 = (undefined8 *)func_?();
              fVar11 = (this->fields).maxMag;
              QStack_14._4_8_ = *puVar19;
              fVar21 = *(float *)(puVar19 + 1);
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              a_01.z = fVar21;
              a_01.x = (float)QStack_14.idx;
              a_01.y = (float)QStack_14.ver;
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                 (&VStack_12,a_01,fVar11,(MethodInfo *)0x0);
              uVar20._0_4_ = pVVar9->x;
              uVar20._4_4_ = pVVar9->y;
              fVar21 = pVVar9->z;
            }
            __return_storage_ptr__->x = (float)(int)uVar20;
            __return_storage_ptr__->y = (float)(int)((ulonglong)uVar20 >> 0x20);
            __return_storage_ptr__->z = fVar21;
            *unaff_FS_OFFSET = uStack_3;
            return __return_storage_ptr__;
          }
        }
      }
      goto code_?;
    }
    pQVar6 = (this->fields).prevVelocities;
    if (pQVar6 == (Queue_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    System.dll::System::Collections::Generic::Queue`1[UnityEngine::Vector3]::
    Queue_1_UnityEngine_Vector3__Dequeue
              ((Vector3 *)&QStack_14,pQVar6,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Dequeue__);
    pQVar6 = (this->fields).prevVelocities;
  } while( true );
}


/* PlaymodeCamera+SmoothLookAt() */

void Assembly-CSharp.dll::PlaymodeCamera+SmoothLookAt::PlaymodeCamera_SmoothLookAt__ctor
               (PlaymodeCamera_SmoothLookAt *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).samleLength = 5;
  method_00 = TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>;
  this_00 = (Queue_1_UnityEngine_Vector3_ *)func_?();
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            ((Queue_1_SmoothPhysicsMovement_Package_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__);
  (this->fields).prevVelocities = this_00;
  (this->fields).maxMag = 30.0;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}

