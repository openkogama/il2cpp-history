
/* Void AddTransformPackage(NetworkTransformPackage) */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_AddTransformPackage
               (MVNetworkListener *this,NetworkTransformPackage *p,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).transformQueue;
  if (this_00 != (Queue_1_NetworkTransformPackage_ *)0x0) {
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package__Enqueue
              ((Queue_1_SmoothPhysicsMovement_Package_ *)this_00,(SmoothPhysicsMovement_Package *)p,
               MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
              );
    (this->fields).transformReportingHasStopped = 0;
    (this->fields).stopListening = 0;
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pNVar1 = (NetworkTransformPackage *)func_?(TypeInfo__NetworkTransformPackage);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)pNVar1,(MethodInfo *)0x0);
  if (pNVar1 != (NetworkTransformPackage *)0x0) {
    (pNVar1->fields).packageType = 1;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
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
          pfVar7 = (float *)(*(code *)(pMVar3->klass->vtable).get_Rotation.method)
                                       (&stack0xffffffec,pMVar3);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).nextPackage;
  if (pNVar1 != (NetworkTransformPackage *)0x0) {
    fVar2 = (pNVar1->fields).position.x;
    fVar3 = (pNVar1->fields).position.y;
    fVar4 = (pNVar1->fields).position.z;
    pNVar1 = (this->fields).currentPackage;
    if (pNVar1 != (NetworkTransformPackage *)0x0) {
      uVar5._0_4_ = (pNVar1->fields).position.x;
      uVar5._4_4_ = (pNVar1->fields).position.y;
      fVar6 = (pNVar1->fields).position.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.y = fVar3;
      a.x = fVar2;
      a.z = fVar4;
      b.z = fVar6;
      b.x = (float)(int)uVar5;
      b.y = (float)(int)((ulonglong)uVar5 >> 0x20);
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         ((Vector3 *)&stack0xffffffe8,a,b,(MethodInfo *)0x0);
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                         ((Vector3 *)&stack0xffffffe8,interpFactor - _UNK_?,*pVVar7,
                          (MethodInfo *)0x0);
      pNVar1 = (this->fields).nextPackage;
      if (pNVar1 != (NetworkTransformPackage *)0x0) {
        pNVar8 = &pNVar1->fields;
        uVar9 = (pNVar8->position).x;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xffffffe8,*pVVar7,pNVar8->position,(MethodInfo *)0x0);
        fVar2 = pVVar7->z;
        *(undefined8 *)uVar9 = *(undefined8 *)pVVar7;
        *(float *)(uVar9 + 8) = fVar2;
        return (Vector3 *)uVar9;
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar10)();
  return pVVar7;
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
  func_?(0);
  pcVar5 = (code *)swi(3);
  pQVar6 = (Quaternion *)(*pcVar5)();
  return pQVar6;
}


/* Void RmoveNetorkUpdateListener(INetworkUpdateListener) */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_RmoveNetorkUpdateListener
               (MVNetworkListener *this,INetworkUpdateListener *listener,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_MVRotator_ *)(this->fields).updateListenerList;
  if (this_00 != (HashSet_1_MVRotator_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MVRotator]::HashSet_1_MVRotator__Remove
              (this_00,(MVRotator *)listener,
               MethodInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>__Remove_INetworkUpdateListener_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  iStack_7 = 0;
  uStack_8 = 0;
  func_?();
  pNVar9 = (NetworkTransformPackage *)0x0;
  pNStack_10 = (NetworkTransformPackage *)0x0;
  this_00 = (this->fields).transformQueue;
  puStack_11 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (this_00 != (Queue_1_NetworkTransformPackage_ *)0x0) {
    puStack_11 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    pQVar12 = System.dll::System::Collections::Generic::Queue`1[System::Int32]::
             Queue_1_System_Int32__GetEnumerator
                       (&QStack_13,(Queue_1_System_Int32_ *)this_00,
                        MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__GetEnumerator__
                       );
    uStack_8._0_4_ = pQVar12->q;
    uStack_8._4_4_ = pQVar12->idx;
    iStack_6 = pQVar12->ver;
    uStack_1 = 0;
    while( true ) {
      cVar14 = func_?();
      if (cVar14 == '\0') break;
      pNVar9 = (NetworkTransformPackage *)func_?();
      pNStack_10 = pNVar9;
    }
    *puStack_11 = 0x3c;
    uStack_1 = 0xffffffff;
    func_?();
    if (iStack_7 != 0) goto code_?;
    if (((pNVar9 == (NetworkTransformPackage *)0x0) &&
        (pNVar9 = (this->fields).nextPackage, pNVar9 == (NetworkTransformPackage *)0x0)) &&
       (pNVar9 = (this->fields).currentPackage, pNVar9 == (NetworkTransformPackage *)0x0)) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pMVar15 = (this->fields)._.worldObject;
    if ((pNVar9 != (NetworkTransformPackage *)0x0) && (pMVar15 != (MVWorldObjectClient *)0x0)) {
      pMVar16 = pMVar15->klass;
      uVar17._0_4_ = (pNVar9->fields).position.x;
      uVar17._4_4_ = (pNVar9->fields).position.y;
      (*(code *)(pMVar16->vtable).set_Position.method)
                ((this->fields)._.worldObject,uVar17,(pNVar9->fields).position.z,
                 (pMVar16->vtable).get_Rotation.methodPtr);
      pMVar15 = (this->fields)._.worldObject;
      if (pMVar15 != (MVWorldObjectClient *)0x0) {
        (*(code *)(pMVar15->klass->vtable).set_Rotation.method)
                  (pMVar15,(pNVar9->fields).rotation.x,(pNVar9->fields).rotation.y,
                   (pNVar9->fields).rotation.z,(pNVar9->fields).rotation.w,
                   (pMVar15->klass->vtable).get_Scale.methodPtr);
        goto code_?;
      }
    }
  }
  func_?(0);
code_?:
  uVar18 = 0;
  uVar19 = 0;
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)(uVar19,uVar18);
  return;
}


/* Void SetToCurrentPosition() */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_SetToCurrentPosition
               (MVNetworkListener *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).transformQueue;
  if (pQVar1 != (Queue_1_NetworkTransformPackage_ *)0x0) {
    System.dll::System::Collections::Generic::Queue`1[System::Int32]::Queue_1_System_Int32__Clear
              ((Queue_1_System_Int32_ *)pQVar1,
               MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Clear__);
    item = MVNetworkListener_CreateCurPosTransformPackage(this,(MethodInfo *)0x0);
    pQVar1 = (this->fields).transformQueue;
    if (pQVar1 != (Queue_1_NetworkTransformPackage_ *)0x0) {
      System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
      Queue_1_SmoothPhysicsMovement_Package__Enqueue
                ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar1,
                 (SmoothPhysicsMovement_Package *)item,
                 MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
                );
      MVNetworkListener_SetOwnerTransformToMostResentPackage(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_Update
               (MVNetworkListener *this,MVNetworkGame *game,MethodInfo *method)

{
  delayedTime = TransformNetworkManager::TransformNetworkManager_get_DelayedTime((MethodInfo *)0x0);
  MVNetworkListener_UpdateTransform(this,game,delayedTime,(MethodInfo *)0x0);
  return;
}


/* Void UpdateTransform(MVNetworkGame, Int32) */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_UpdateTransform
               (MVNetworkListener *this,MVNetworkGame *game,int32_t delayedTime,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields).transformReportingHasStopped == 0) {
    if ((this->fields).currentPackage == (NetworkTransformPackage *)0x0) {
      pQVar2 = (this->fields).transformQueue;
      if (pQVar2 == (Queue_1_NetworkTransformPackage_ *)0x0) goto code_?;
      pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)pQVar2,
                          MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__get_Count__
                         );
      if (0 < (int)pIVar3) {
        pQVar2 = (this->fields).transformQueue;
        if (pQVar2 == (Queue_1_NetworkTransformPackage_ *)0x0) goto code_?;
        pNVar4 = (NetworkTransformPackage *)
                 System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                 Queue_1_SmoothPhysicsMovement_Package__Dequeue
                           ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar2,
                            MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Dequeue__
                           );
        (this->fields).currentPackage = pNVar4;
      }
      if ((this->fields).currentPackage == (NetworkTransformPackage *)0x0) goto code_?;
    }
    if ((this->fields).nextPackage == (NetworkTransformPackage *)0x0) {
      pQVar2 = (this->fields).transformQueue;
      if (pQVar2 == (Queue_1_NetworkTransformPackage_ *)0x0) goto code_?;
      pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)pQVar2,
                          MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__get_Count__
                         );
      if (0 < (int)pIVar3) {
        pQVar2 = (this->fields).transformQueue;
        if (pQVar2 == (Queue_1_NetworkTransformPackage_ *)0x0) goto code_?;
        pNVar4 = (NetworkTransformPackage *)
                 System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                 Queue_1_SmoothPhysicsMovement_Package__Dequeue
                           ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar2,
                            MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Dequeue__
                           );
        (this->fields).nextPackage = pNVar4;
      }
    }
  }
code_?:
  if ((this->fields).currentPackage == (NetworkTransformPackage *)0x0) {
    return;
  }
  pNVar4 = (this->fields).nextPackage;
  if (pNVar4 == (NetworkTransformPackage *)0x0) {
    pMVar5 = (this->fields)._.worldObject;
    if (pMVar5 == (MVWorldObjectClient *)0x0) goto code_?;
    pMVar6 = pMVar5->klass;
code_?:
    (*(code *)(pMVar6->vtable).set_Position.method)();
    if (((pMVar1->fields).currentPackage != (NetworkTransformPackage *)0x0) &&
       (pMVar5 = (pMVar1->fields)._.worldObject, pMVar5 != (MVWorldObjectClient *)0x0)) {
      pMVar6 = pMVar5->klass;
code_?:
      (*(code *)(pMVar6->vtable).set_Rotation.method)();
      return;
    }
  }
  else {
    if ((this->fields).transformReportingHasStopped == 0) {
      do {
        if (delayedTime < (pNVar4->fields).timestamp) goto code_?;
        pQVar2 = (this->fields).transformQueue;
        if (pQVar2 == (Queue_1_NetworkTransformPackage_ *)0x0) break;
        pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                 KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                 KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                           ((KogamaSettingNumericBase_1_System_Single_ *)pQVar2,
                            MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__get_Count__
                           );
        if ((int)pIVar3 < 1) goto code_?;
        (this->fields).currentPackage = (this->fields).nextPackage;
        pQVar2 = (this->fields).transformQueue;
        if (pQVar2 == (Queue_1_NetworkTransformPackage_ *)0x0) break;
        pNVar4 = (NetworkTransformPackage *)
                 System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                 Queue_1_SmoothPhysicsMovement_Package__Dequeue
                           ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar2,
                            MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Dequeue__
                           );
        (this->fields).nextPackage = pNVar4;
      } while (pNVar4 != (NetworkTransformPackage *)0x0);
      goto code_?;
    }
code_?:
    pNVar4 = (this->fields).nextPackage;
    if ((pNVar4 == (NetworkTransformPackage *)0x0) ||
       (pNVar7 = (this->fields).currentPackage, pNVar7 == (NetworkTransformPackage *)0x0))
    goto code_?;
    iVar8 = (pNVar7->fields).timestamp;
    this = (MVNetworkListener *)0x0;
    fVar9 = (float)((pNVar4->fields).timestamp - iVar8);
    if (pNVar4 == (NetworkTransformPackage *)0x0) goto code_?;
    uVar10 = (pNVar4->fields).packageType;
    if (uVar10 == 1) {
      if (pNVar7 == (NetworkTransformPackage *)0x0) goto code_?;
code_?:
      this = (MVNetworkListener *)((float)(delayedTime - iVar8) / fVar9);
    }
    else {
      if (pNVar4 == (NetworkTransformPackage *)0x0) goto code_?;
      if (uVar10 == 0) {
        this = _UNK_?;
      }
      else if (uVar10 == 2) {
        if (pNVar7 == (NetworkTransformPackage *)0x0) goto code_?;
        (pMVar1->fields).transformReportingHasStopped = 1;
        goto code_?;
      }
    }
    if (fVar9 == 0.0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Interpolation_INTERVAL_IS_ZERO__,(MethodInfo *)0x0);
      this = _UNK_?;
    }
    else {
      if ((float)this < 0.0) {
        if ((pNVar7 == (NetworkTransformPackage *)0x0) ||
           (pMVar5 = (pMVar1->fields)._.worldObject, pMVar5 == (MVWorldObjectClient *)0x0))
        goto code_?;
        pMVar6 = pMVar5->klass;
        goto code_?;
      }
      if ((float)_UNK_? < (float)this) {
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        fStack_11 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                             ((float)this,2.0,(MethodInfo *)0x0);
        if ((pMVar1->fields).transformReportingHasStopped != 0) {
          if (((((pMVar1->fields).nextPackage != (NetworkTransformPackage *)0x0) &&
               (pMVar5 = (pMVar1->fields)._.worldObject, pMVar5 != (MVWorldObjectClient *)0x0)) &&
              ((*(code *)(pMVar5->klass->vtable).set_Position.method)(),
              (pMVar1->fields).nextPackage != (NetworkTransformPackage *)0x0)) &&
             (pMVar5 = (pMVar1->fields)._.worldObject, pMVar5 != (MVWorldObjectClient *)0x0)) {
            (*(code *)(pMVar5->klass->vtable).set_Rotation.method)();
            (pMVar1->fields).currentPackage = (NetworkTransformPackage *)0x0;
            (pMVar1->fields).nextPackage = (NetworkTransformPackage *)0x0;
            (pMVar1->fields).stopListening = 1;
            return;
          }
          goto code_?;
        }
        pMVar5 = (pMVar1->fields)._.worldObject;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        fStack_12 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                              ((float)this,fStack_11,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pNVar4 = (pMVar1->fields).nextPackage;
        if (pNVar4 == (NetworkTransformPackage *)0x0) goto code_?;
        VStack_13.y = (pNVar4->fields).position.x;
        VStack_13.z = (pNVar4->fields).position.y;
        fStack_14 = (pNVar4->fields).position.z;
        pNVar4 = (pMVar1->fields).currentPackage;
        if (pNVar4 == (NetworkTransformPackage *)0x0) goto code_?;
        VStack_15.y = (pNVar4->fields).position.x;
        VStack_15.z = (pNVar4->fields).position.y;
        fVar9 = (pNVar4->fields).position.z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a.z = fStack_14;
        a.x = VStack_13.y;
        a.y = VStack_13.z;
        b.z = fVar9;
        b.x = VStack_15.y;
        b.y = VStack_15.z;
        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            (&VStack_13,a,b,(MethodInfo *)0x0);
        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                            (&VStack_15,fStack_12 - (float)_UNK_?,*pVVar16,(MethodInfo *)0x0)
        ;
        pNVar4 = (pMVar1->fields).nextPackage;
        if ((pNVar4 == (NetworkTransformPackage *)0x0) ||
           (pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                ((Vector3 *)(auStack_17 + 4),*pVVar16,(pNVar4->fields).position,
                                 (MethodInfo *)0x0), pMVar5 == (MVWorldObjectClient *)0x0))
        goto code_?;
        auStack_17._4_4_ = pVVar16->x;
        fStack_18 = pVVar16->y;
        fStack_19 = pVVar16->z;
        pIStack_20 = (pMVar5->klass->vtable).get_Rotation.methodPtr;
        auStack_17._0_4_ = pMVar5;
        (*(code *)(pMVar5->klass->vtable).set_Position.method)();
        pMVar5 = (pMVar1->fields)._.worldObject;
        UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                  ((float)this,fStack_11,(MethodInfo *)0x0);
        if (((pMVar1->fields).nextPackage == (NetworkTransformPackage *)0x0) ||
           (pMVar5 == (MVWorldObjectClient *)0x0)) goto code_?;
        pMVar6 = pMVar5->klass;
        goto code_?;
      }
    }
    pNVar4 = (pMVar1->fields).currentPackage;
    pMVar5 = (pMVar1->fields)._.worldObject;
    if (pNVar4 != (NetworkTransformPackage *)0x0) {
      VStack_15.y = (pNVar4->fields).position.x;
      VStack_15.z = (pNVar4->fields).position.y;
      fVar9 = (pNVar4->fields).position.z;
      pNVar4 = (pMVar1->fields).nextPackage;
      if (pNVar4 != (NetworkTransformPackage *)0x0) {
        VStack_13.y = (pNVar4->fields).position.x;
        VStack_13.z = (pNVar4->fields).position.y;
        fStack_12 = (pNVar4->fields).position.z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a_01.z = fVar9;
        a_01.x = VStack_15.y;
        a_01.y = VStack_15.z;
        b_01.z = fStack_12;
        b_01.x = VStack_13.y;
        b_01.y = VStack_13.z;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                  ((Vector3 *)(auStack_17 + 4),a_01,b_01,(float)this,(MethodInfo *)0x0);
        if (pMVar5 != (MVWorldObjectClient *)0x0) {
          (*(code *)(pMVar5->klass->vtable).set_Position.method)();
          pNVar4 = (pMVar1->fields).currentPackage;
          pMVar5 = (pMVar1->fields)._.worldObject;
          if (pNVar4 != (NetworkTransformPackage *)0x0) {
            pIStack_20 = (Il2CppMethodPointer)(pNVar4->fields).rotation.x;
            VStack_13.x = (pNVar4->fields).rotation.y;
            VStack_13.y = (pNVar4->fields).rotation.z;
            VStack_13.z = (pNVar4->fields).rotation.w;
            pNVar4 = (pMVar1->fields).nextPackage;
            if (pNVar4 != (NetworkTransformPackage *)0x0) {
              auStack_17._0_4_ = (pNVar4->fields).rotation.x;
              auStack_17._4_4_ = (pNVar4->fields).rotation.y;
              fStack_18 = (pNVar4->fields).rotation.z;
              fStack_19 = (pNVar4->fields).rotation.w;
              if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                func_?();
              }
              a_00.y = VStack_13.x;
              a_00.x = (float)pIStack_20;
              a_00.z = VStack_13.y;
              a_00.w = VStack_13.z;
              b_00.y = (float)auStack_17._4_4_;
              b_00.x = (float)auStack_17._0_4_;
              b_00.z = fStack_18;
              b_00.w = fStack_19;
              UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Lerp
                        ((Quaternion *)auStack_17,a_00,b_00,(float)this,(MethodInfo *)0x0);
              if (pMVar5 != (MVWorldObjectClient *)0x0) {
                pMVar6 = pMVar5->klass;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* MVNetworkListener(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener__ctor
               (MVNetworkListener *this,MVWorldObjectClient *owner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>)
  ;
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__HashSet<INetworkUpdateListener>__HashSet__);
  (this->fields).updateListenerList = (HashSet_1_INetworkUpdateListener_ *)this_00;
  method_00 = TypeInfo__System__Collections__Generic__Queue<NetworkTransformPackage>;
  pQVar1 = (Queue_1_NetworkTransformPackage_ *)func_?();
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar1,
             MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Queue__);
  (this->fields).transformQueue = pQVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields)._.worldObject = owner;
  item = MVNetworkListener_CreateCurPosTransformPackage(this,(MethodInfo *)0x0);
  pQVar1 = (this->fields).transformQueue;
  if (pQVar1 != (Queue_1_NetworkTransformPackage_ *)0x0) {
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package__Enqueue
              ((Queue_1_SmoothPhysicsMovement_Package_ *)pQVar1,
               (SmoothPhysicsMovement_Package *)item,
               MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean get_RemoveFromUpdate() */

bool Assembly-CSharp.dll::MVNetworkListener::MVNetworkListener_get_RemoveFromUpdate
               (MVNetworkListener *this,MethodInfo *method)

{
  return (this->fields).stopListening;
}

