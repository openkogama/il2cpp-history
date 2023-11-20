
/* Void FixedUpdate() */

void Assembly-CSharp.dll::SmoothPhysicsMovement::SmoothPhysicsMovement_FixedUpdate
               (SmoothPhysicsMovement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SmoothPhysicsMovement__Package);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Enqueue_SmoothPhysicsMovement__Package_
                   );
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).targetTransform;
  this_00 = (this->fields).packages;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)(auStack_3 + 4),pTVar1,(MethodInfo *)0x0);
    OStack_4.klass = (Object__Class *)pVVar2->x;
    OStack_4.monitor = (MonitorData *)pVVar2->y;
    pOVar5 = (Object__Class *)pVVar2->z;
    pTVar1 = (this->fields).targetTransform;
    if (pTVar1 != (Transform *)0x0) {
      pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)auStack_3,pTVar1,(MethodInfo *)0x0);
      auStack_3._0_4_ = pQVar6->x;
      auStack_3._4_4_ = pQVar6->y;
      pMStack_7 = (MonitorData *)pQVar6->z;
      pOStack_8 = (Object__Class *)pQVar6->w;
      value = (Object *)func_?(TypeInfo__SmoothPhysicsMovement__Package);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (value,ExceptionArgument__Enum_obj,in_stack_9);
      pMVar10 = (MonitorData *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedTime
                         ((MethodInfo *)0x0);
      value[1] = OStack_4;
      value[2].klass = pOVar5;
      value[4].monitor = pMVar10;
      value[2].monitor = (MonitorData *)auStack_3._0_4_;
      value[3].klass = (Object__Class *)auStack_3._4_4_;
      value[3].monitor = pMStack_7;
      value[4].klass = pOStack_8;
      if (this_00 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
        Queue_1_System_Object__Enqueue
                  ((Queue_1_System_Object_ *)this_00,value,
                   MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Enqueue_SmoothPhysicsMovement__Package_
                  );
        return;
      }
    }
  }
  func_?();
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
  func_?(&(this->fields).targetTransform,targetTransform);
  (this->fields).cullingSubscriberBase = cullingSubscriberBase;
  func_?(&(this->fields).cullingSubscriberBase,cullingSubscriberBase);
  (this->fields).worldObjectOwner = worldObjectOwner;
  func_?(&(this->fields).worldObjectOwner,worldObjectOwner);
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SmoothPhysicsMovement::SmoothPhysicsMovement_Reset
               (SmoothPhysicsMovement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                   );
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
    (this->fields).current = (SmoothPhysicsMovement_Package *)0x0;
    func_?(&(this->fields).current,0);
    (this->fields).next = (SmoothPhysicsMovement_Package *)0x0;
    func_?(&(this->fields).next,0);
    pTVar1 = (this->fields).targetTransform;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)(auStack_4 + 4),pTVar2,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar1,*pVVar3,(MethodInfo *)0x0);
        pTVar1 = (this->fields).targetTransform;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)auStack_4,pTVar2,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar1,*pQVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SmoothMove() */

void Assembly-CSharp.dll::SmoothPhysicsMovement::SmoothPhysicsMovement_SmoothMove
               (SmoothPhysicsMovement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                   );
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  if ((this->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar3 = (this->fields).packages;
    if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    if (0 < (pQVar3->fields)._size) {
      pSVar4 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar3,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (this->fields).current = pSVar4;
      func_?(&(this->fields).current,pSVar4);
    }
    if ((this->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  if ((this->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar3 = (this->fields).packages;
    if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    if (0 < (pQVar3->fields)._size) {
      pSVar4 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar3,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (this->fields).next = pSVar4;
      func_?(&(this->fields).next,pSVar4);
    }
  }
  if (((this->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
     ((this->fields).next == (SmoothPhysicsMovement_Package *)0x0)) {
    return;
  }
  pSVar4 = (this->fields).next;
  ppSVar5 = &(this->fields).current;
  ppSVar6 = &(this->fields).next;
  do {
    if (fVar1 - fVar2 < (pSVar4->fields).time) {
code_?:
      pSVar4 = (this->fields).current;
      if (pSVar4 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar7 = (pSVar4->fields).time;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      fVar8 = ((fVar1 - fVar2) - fVar7) / fVar8;
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      pSVar4 = (this->fields).current;
      if (pSVar4 == (SmoothPhysicsMovement_Package *)0x0) break;
      uVar10 = (pSVar4->fields).position.x;
      uVar11 = (pSVar4->fields).position.y;
      pSVar12 = (this->fields).next;
      fVar1 = (pSVar4->fields).position.z;
      if (pSVar12 == (SmoothPhysicsMovement_Package *)0x0) break;
      uVar13 = (pSVar12->fields).position.x;
      uVar14 = (pSVar12->fields).position.y;
      fVar2 = 0.0;
      if ((0.0 <= fVar8) && (fVar2 = _UNK_?, fVar8 <= _UNK_?)) {
        fVar2 = fVar8;
      }
      if (pTVar9 == (Transform *)0x0) break;
      value.y = ((float)uVar14 - (float)uVar11) * fVar2 + (float)uVar11;
      value.x = ((float)uVar13 - (float)uVar10) * fVar2 + (float)uVar10;
      value.z = ((pSVar12->fields).position.z - fVar1) * fVar2 + fVar1;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar9,value,(MethodInfo *)0x0);
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      pSVar4 = (this->fields).current;
      if (((pSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
          (pSVar12 = (this->fields).next, pSVar12 == (SmoothPhysicsMovement_Package *)0x0)) ||
         (pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                              ((Quaternion *)&stack0xffffffd0,(pSVar4->fields).rotation,
                               (pSVar12->fields).rotation,fVar8,(MethodInfo *)0x0),
         pTVar9 == (Transform *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar9,*pQVar15,(MethodInfo *)0x0);
      if ((this->fields).worldObjectOwner != (MVWorldObjectClient *)0x0) {
        if (((this->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
           ((this->fields).next == (SmoothPhysicsMovement_Package *)0x0)) break;
        (*(code *)(((this->fields).worldObjectOwner)->klass->vtable).set_WorldPosition.method)();
        pSVar4 = (this->fields).current;
        this_00 = (this->fields).worldObjectOwner;
        if ((pSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
           ((pSVar12 = (this->fields).next, pSVar12 == (SmoothPhysicsMovement_Package *)0x0 ||
            (pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                 ((Quaternion *)&stack0xffffffd0,(pSVar4->fields).rotation,
                                  (pSVar12->fields).rotation,3.3184414e-29,(MethodInfo *)0x0),
            this_00 == (MVWorldObjectClient *)0x0)))) break;
        MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(this_00,*pQVar15,(MethodInfo *)0x0);
      }
      if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
        return;
      }
      this_01 = (this->fields).cullingSubscriberBase;
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar9 != (Transform *)0x0) {
        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffd4,pTVar9,(MethodInfo *)0x0);
        CullingSubscriberBase::CullingSubscriberBase_set_Position
                  (this_01,*pVVar16,(MethodInfo *)0x0);
        return;
      }
      break;
    }
    pQVar3 = (this->fields).packages;
    if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    if ((pQVar3->fields)._size < 1) goto code_?;
    *ppSVar5 = *ppSVar6;
    func_?(ppSVar5,*ppSVar6);
    pQVar3 = (this->fields).packages;
    if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pSVar4 = (SmoothPhysicsMovement_Package *)
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Dequeue
                        ((Queue_1_System_Object_ *)pQVar3,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                        );
    *ppSVar6 = pSVar4;
    func_?(ppSVar6,pSVar4);
    pSVar4 = *ppSVar6;
  } while (pSVar4 != (SmoothPhysicsMovement_Package *)0x0);
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* SmoothPhysicsMovement() */

void Assembly-CSharp.dll::SmoothPhysicsMovement::SmoothPhysicsMovement__ctor
               (SmoothPhysicsMovement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Queue__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_SmoothPhysicsMovement_Package_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>
                           );
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            ((Stack_1_System_Int32_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Queue__
            );
  (this->fields).packages = this_00;
  func_?(&(this->fields).packages,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

