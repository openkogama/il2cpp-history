
/* Void Reset() */

void Assembly-CSharp.dll::SmoothTouchAxis::SmoothTouchAxis_Reset
               (SmoothTouchAxis *this,MethodInfo *method)

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


/* Vector3 UpdateSmoothVelocity(Vector3) */

Vector3 * Assembly-CSharp.dll::SmoothTouchAxis::SmoothTouchAxis_UpdateSmoothVelocity
                    (Vector3 *__return_storage_ptr__,SmoothTouchAxis *this,Vector3 movement,
                    MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined4 *)&stack0xffffffa0;
  func_?();
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a.y = movement.y;
  a.x = movement.x;
  a.z = movement.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                      (&movement,a,fVar2,(MethodInfo *)0x0);
  pQVar4 = (this->fields).prevVelocities;
  if (pQVar4 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
    System.dll::System::Collections::Generic::Queue`1[UnityEngine::Vector3]::
    Queue_1_UnityEngine_Vector3__Enqueue
              (pQVar4,*pVVar3,
               MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Enqueue_UnityEngine__Vector3_
              );
    pQVar4 = (this->fields).prevVelocities;
    while (pQVar4 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
      pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                          ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                           MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__get_Count__
                          );
      if ((int)pIVar5 < (this->fields).sampleLength) {
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                            (&movement,(MethodInfo *)0x0);
        uVar6 = pVVar3->x;
        uVar7 = pVVar3->y;
        fVar2 = pVVar3->z;
        pQVar4 = (this->fields).prevVelocities;
        if (pQVar4 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
          System.dll::System::Collections::Generic::Queue`1[System::Int32]::
          Queue_1_System_Int32__GetEnumerator
                    ((Queue_1_T_Enumerator_System_Int32_ *)&movement,(Queue_1_System_Int32_ *)pQVar4
                     ,
                     MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__GetEnumerator__
                    );
          while (cVar8 = func_?(), cVar8 != '\0') {
            puVar9 = (undefined8 *)func_?();
            uVar10 = *puVar9;
            fVar11 = *(float *)(puVar9 + 1);
            movement.y = (float)uVar10;
            movement.z = (float)((ulonglong)uVar10 >> 0x20);
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
              uVar10 = CONCAT44(movement.z,movement.y);
            }
            a_00.y = (float)uVar7;
            a_00.x = (float)uVar6;
            a_00.z = fVar2;
            b.z = fVar11;
            b.x = (float)(int)uVar10;
            b.y = (float)(int)((ulonglong)uVar10 >> 0x20);
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                ((Vector3 *)&stack0xffffffac,a_00,b,(MethodInfo *)0x0);
            uVar12 = pVVar3->x;
            uVar13 = pVVar3->y;
            fVar2 = pVVar3->z;
            uVar6 = uVar12;
            uVar7 = uVar13;
          }
          *puVar1 = 0x86;
          func_?();
          pQVar4 = (this->fields).prevVelocities;
          if (pQVar4 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
            pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                      KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                      KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                                ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                                 MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__get_Count__
                                );
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            a_01.y = (float)uVar7;
            a_01.x = (float)uVar6;
            a_01.z = fVar2;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                                ((Vector3 *)&stack0xffffffac,a_01,(float)(int)pIVar5,
                                 (MethodInfo *)0x0);
            uVar14 = pVVar3->x;
            uVar15 = pVVar3->y;
            fVar2 = pVVar3->z;
            movement.y = (float)uVar14;
            movement.z = (float)uVar15;
            fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            uVar6 = 0;
            a_02.y = movement.z;
            a_02.x = movement.y;
            a_02.z = fVar2;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                ((Vector3 *)&stack0xffffffc4,a_02,fVar11,(MethodInfo *)0x0);
            fVar11 = pVVar3->y;
            fVar2 = pVVar3->z;
            __return_storage_ptr__->x = pVVar3->x;
            __return_storage_ptr__->y = fVar11;
            __return_storage_ptr__->z = fVar2;
            *unaff_FS_OFFSET = uVar6;
            return __return_storage_ptr__;
          }
        }
        break;
      }
      pQVar4 = (this->fields).prevVelocities;
      if (pQVar4 == (Queue_1_UnityEngine_Vector3_ *)0x0) break;
      System.dll::System::Collections::Generic::Queue`1[UnityEngine::Vector3]::
      Queue_1_UnityEngine_Vector3__Dequeue
                (&movement,pQVar4,
                 MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Dequeue__);
      pQVar4 = (this->fields).prevVelocities;
    }
  }
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar16)();
  return pVVar3;
}


/* SmoothTouchAxis(Int32) */

void Assembly-CSharp.dll::SmoothTouchAxis::SmoothTouchAxis__ctor
               (SmoothTouchAxis *this,int32_t sampleLength,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>;
  this_00 = (Queue_1_UnityEngine_Vector3_ *)func_?();
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            ((Queue_1_SmoothPhysicsMovement_Package_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__);
  (this->fields).prevVelocities = this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).sampleLength = sampleLength;
  return;
}

