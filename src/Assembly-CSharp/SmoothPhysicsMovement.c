
/* Void FixedUpdate() */

void Assembly-CSharp.dll::SmoothPhysicsMovement::SmoothPhysicsMovement_FixedUpdate
               (SmoothPhysicsMovement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).targetTransform;
  this_00 = (this->fields).packages;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)(auStack_3 + 4),pTVar1,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fVar5 = pVVar2->z;
    pTVar1 = (this->fields).targetTransform;
    if (pTVar1 != (Transform *)0x0) {
      pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)auStack_3,pTVar1,(MethodInfo *)0x0);
      auStack_3._0_4_ = pQVar6->x;
      auStack_3._4_4_ = pQVar6->y;
      pTStack_7 = (Transform *)pQVar6->z;
      fStack_8 = pQVar6->w;
      this_01 = (ScaleAnimationBase *)func_?(TypeInfo__SmoothPhysicsMovement__Package);
      ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,in_stack_9);
      pSVar10 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedTime
                         ((MethodInfo *)0x0);
      (this_01->fields)._ = (MonoBehaviour__Fields)(undefined4)uStack_4;
      (this_01->fields).state = uStack_4._4_4_;
      (this_01->fields).originalScale.x = fVar5;
      (this_01->fields).OnScaleAnimationStopped = pSVar10;
      (this_01->fields).originalScale.y = (float)auStack_3._0_4_;
      (this_01->fields).originalScale.z = (float)auStack_3._4_4_;
      (this_01->fields).target = pTStack_7;
      (this_01->fields).testState = (int32_t)fStack_8;
      if (this_00 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
        System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
        Queue_1_SmoothPhysicsMovement_Package__Enqueue
                  (this_00,(SmoothPhysicsMovement_Package *)this_01,
                   MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Enqueue_SmoothPhysicsMovement__Package_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Init(Transform, CullingSubscriberBase, MVWorldObjectClient) */

void Assembly-CSharp.dll::SmoothPhysicsMovement::SmoothPhysicsMovement_Init
               (SmoothPhysicsMovement *this,Transform *targetTransform,
               CullingSubscriberBase *cullingSubscriberBase,MVWorldObjectClient *worldObjectOwner,
               MethodInfo *method)

{
  (this->fields).targetTransform = targetTransform;
  (this->fields).cullingSubscriberBase = cullingSubscriberBase;
  (this->fields).worldObjectOwner = worldObjectOwner;
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SmoothPhysicsMovement::SmoothPhysicsMovement_Reset
               (SmoothPhysicsMovement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).packages;
  if (this_00 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
    System.dll::System::Collections::Generic::Queue`1[System::Int32]::Queue_1_System_Int32__Clear
              ((Queue_1_System_Int32_ *)this_00,
               MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
              );
    pTVar1 = (this->fields).targetTransform;
    (this->fields).current = (SmoothPhysicsMovement_Package *)0x0;
    (this->fields).next = (SmoothPhysicsMovement_Package *)0x0;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar1,*pVVar3,(MethodInfo *)0x0);
        pTVar1 = (this->fields).targetTransform;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)&stack0xffffffec,pTVar2,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar1,*pQVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SmoothMove() */

void Assembly-CSharp.dll::SmoothPhysicsMovement::SmoothPhysicsMovement_SmoothMove
               (SmoothPhysicsMovement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  if ((this->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar3 = (this->fields).packages;
    if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    pIVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar3,
                        MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                       );
    if (0 < (int)pIVar4) {
      pQVar3 = (this->fields).packages;
      if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      pSVar5 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                Queue_1_SmoothPhysicsMovement_Package__Dequeue
                          (pQVar3,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (this->fields).current = pSVar5;
    }
    if ((this->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  if ((this->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar3 = (this->fields).packages;
    if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    pIVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar3,
                        MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                       );
    if (0 < (int)pIVar4) {
      pQVar3 = (this->fields).packages;
      if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      pSVar5 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                Queue_1_SmoothPhysicsMovement_Package__Dequeue
                          (pQVar3,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (this->fields).next = pSVar5;
    }
  }
  if (((this->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
     (pSVar5 = (this->fields).next, pSVar5 == (SmoothPhysicsMovement_Package *)0x0)) {
    return;
  }
  do {
    if (fVar1 - fVar2 < (pSVar5->fields).time) {
code_?:
      pSVar5 = (this->fields).current;
      if (pSVar5 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar6 = (pSVar5->fields).time;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      fVar7 = ((fVar1 - fVar2) - fVar6) / fVar7;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      pSVar5 = (this->fields).current;
      if (pSVar5 == (SmoothPhysicsMovement_Package *)0x0) break;
      pSVar9 = (this->fields).next;
      VVar10 = (pSVar5->fields).position;
      if (pSVar9 == (SmoothPhysicsMovement_Package *)0x0) break;
      uVar11._0_4_ = (pSVar9->fields).position.x;
      uVar11._4_4_ = (pSVar9->fields).position.y;
      fVar1 = (pSVar9->fields).position.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      b_01.z = fVar1;
      b_01.x = (float)uVar11;
      b_01.y = SUB84(uVar11,4);
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                          ((Vector3 *)&stack0xffffffdc,VVar10,b_01,fVar7,(MethodInfo *)0x0);
      if (pTVar8 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar8,*pVVar12,(MethodInfo *)0x0);
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      pSVar5 = (this->fields).current;
      if (pSVar5 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar1 = (pSVar5->fields).rotation.x;
      fVar2 = (pSVar5->fields).rotation.y;
      fVar6 = (pSVar5->fields).rotation.z;
      fVar13 = (pSVar5->fields).rotation.w;
      pSVar5 = (this->fields).next;
      if (pSVar5 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar14 = (pSVar5->fields).rotation.x;
      puVar15 = (undefined *)(pSVar5->fields).rotation.y;
      pQVar16 = (Quaternion__Class *)(pSVar5->fields).rotation.z;
      fVar17 = (pSVar5->fields).rotation.w;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        puVar15 = &UNK_?;
        pQVar16 = TypeInfo__UnityEngine__Quaternion;
        func_?();
      }
      a_00.y = fVar2;
      a_00.x = fVar1;
      a_00.z = fVar6;
      a_00.w = fVar13;
      b_00.y = (float)puVar15;
      b_00.x = fVar14;
      b_00.z = (float)pQVar16;
      b_00.w = fVar17;
      pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                          ((Quaternion *)&stack0xffffffd8,a_00,b_00,fVar7,(MethodInfo *)0x0);
      if (pTVar8 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar8,*pQVar18,(MethodInfo *)0x0);
      pMVar19 = (this->fields).worldObjectOwner;
      if (pMVar19 != (MVWorldObjectClient *)0x0) {
        pSVar5 = (this->fields).current;
        if (pSVar5 == (SmoothPhysicsMovement_Package *)0x0) break;
        VVar10 = (pSVar5->fields).position;
        pSVar5 = (this->fields).next;
        if (pSVar5 == (SmoothPhysicsMovement_Package *)0x0) break;
        uVar20._0_4_ = (pSVar5->fields).position.x;
        uVar20._4_4_ = (pSVar5->fields).position.y;
        fVar1 = (pSVar5->fields).position.z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          uVar20._0_4_ = (float)TypeInfo__UnityEngine__Vector3;
          func_?();
        }
        b_02.z = fVar1;
        b_02.x = (float)uVar20;
        b_02.y = SUB84(uVar20,4);
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                            ((Vector3 *)&stack0xffffffdc,VVar10,b_02,fVar7,(MethodInfo *)0x0);
        if (pMVar19 == (MVWorldObjectClient *)0x0) break;
        uVar21 = pVVar12->x;
        (*(code *)(pMVar19->klass->vtable).set_WorldPosition.method)(pMVar19,uVar21);
        pSVar5 = (this->fields).current;
        pMVar19 = (this->fields).worldObjectOwner;
        if (pSVar5 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar1 = (pSVar5->fields).rotation.x;
        fVar2 = (pSVar5->fields).rotation.y;
        fVar6 = (pSVar5->fields).rotation.z;
        fVar13 = (pSVar5->fields).rotation.w;
        pSVar5 = (this->fields).next;
        if (pSVar5 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar14 = (pSVar5->fields).rotation.x;
        puVar15 = (undefined *)(pSVar5->fields).rotation.y;
        pQVar16 = (Quaternion__Class *)(pSVar5->fields).rotation.z;
        fVar17 = (pSVar5->fields).rotation.w;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          puVar15 = &UNK_?;
          pQVar16 = TypeInfo__UnityEngine__Quaternion;
          func_?();
        }
        a.y = fVar2;
        a.x = fVar1;
        a.z = fVar6;
        a.w = fVar13;
        b.y = (float)puVar15;
        b.x = fVar14;
        b.z = (float)pQVar16;
        b.w = fVar17;
        pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                            ((Quaternion *)&stack0xffffffd8,a,b,fVar7,(MethodInfo *)0x0);
        if (pMVar19 == (MVWorldObjectClient *)0x0) break;
        MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(pMVar19,*pQVar18,(MethodInfo *)0x0);
      }
      this_00 = (this->fields).cullingSubscriberBase;
      if (this_00 == (CullingSubscriberBase *)0x0) {
        return;
      }
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if ((pTVar8 != (Transform *)0x0) &&
         (pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffdc,pTVar8,(MethodInfo *)0x0),
         this_00 != (CullingSubscriberBase *)0x0)) {
        CullingSubscriberBase::CullingSubscriberBase_set_Position
                  (this_00,*pVVar12,(MethodInfo *)0x0);
        return;
      }
      break;
    }
    pQVar3 = (this->fields).packages;
    if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pIVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar3,
                        MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                       );
    if ((int)pIVar4 < 1) goto code_?;
    (this->fields).current = (this->fields).next;
    pQVar3 = (this->fields).packages;
    if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pSVar5 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
              Queue_1_SmoothPhysicsMovement_Package__Dequeue
                        (pQVar3,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                        );
    (this->fields).next = pSVar5;
  } while (pSVar5 != (SmoothPhysicsMovement_Package *)0x0);
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* SmoothPhysicsMovement() */

void Assembly-CSharp.dll::SmoothPhysicsMovement::SmoothPhysicsMovement__ctor
               (SmoothPhysicsMovement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_SmoothPhysicsMovement_Package_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>
                           );
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Queue__
            );
  (this->fields).packages = this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

