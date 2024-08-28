
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
  ppTVar1 = &(this->fields).targetTransform;
  *ppTVar1 = targetTransform;
  func_?(ppTVar1,targetTransform);
  ppCVar2 = &(this->fields).cullingSubscriberBase;
  *ppCVar2 = cullingSubscriberBase;
  func_?(ppCVar2,cullingSubscriberBase);
  ppMVar3 = &(this->fields).worldObjectOwner;
  *ppMVar3 = worldObjectOwner;
  func_?(ppMVar3,worldObjectOwner);
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
    ppSVar1 = &(this->fields).current;
    *ppSVar1 = (SmoothPhysicsMovement_Package *)0x0;
    func_?(ppSVar1,0);
    ppSVar1 = &(this->fields).next;
    *ppSVar1 = (SmoothPhysicsMovement_Package *)0x0;
    func_?(ppSVar1,0);
    pTVar2 = (this->fields).targetTransform;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)(auStack_5 + 4),pTVar3,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar2,*pVVar4,(MethodInfo *)0x0);
        pTVar2 = (this->fields).targetTransform;
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)auStack_5,pTVar3,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar2,*pQVar6,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  ppSVar3 = &(this->fields).current;
  if ((this->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar4 = (this->fields).packages;
    if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    if (0 < (pQVar4->fields)._size) {
      pSVar5 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar4,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      *ppSVar3 = pSVar5;
      func_?(ppSVar3,pSVar5);
    }
    if (*ppSVar3 == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  ppSVar6 = &(this->fields).next;
  if ((this->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar4 = (this->fields).packages;
    if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    if (0 < (pQVar4->fields)._size) {
      pSVar5 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar4,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      *ppSVar6 = pSVar5;
      func_?(ppSVar6,pSVar5);
    }
  }
  if (*ppSVar3 != (SmoothPhysicsMovement_Package *)0x0) {
    pSVar5 = (this->fields).next;
    ppSVar6 = &(this->fields).next;
    if (pSVar5 != (SmoothPhysicsMovement_Package *)0x0) {
      do {
        if (fVar1 - fVar2 < (pSVar5->fields).time) {
code_?:
          if (*ppSVar3 == (SmoothPhysicsMovement_Package *)0x0) break;
          fVar7 = ((*ppSVar3)->fields).time;
          fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                             ((MethodInfo *)0x0);
          fVar8 = ((fVar1 - fVar2) - fVar7) / fVar8;
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          pSVar5 = *ppSVar3;
          if (pSVar5 == (SmoothPhysicsMovement_Package *)0x0) break;
          uVar10 = (pSVar5->fields).position.x;
          uVar11 = (pSVar5->fields).position.y;
          pSVar12 = *ppSVar6;
          fVar1 = (pSVar5->fields).position.z;
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
          if (((*ppSVar3 == (SmoothPhysicsMovement_Package *)0x0) ||
              (*ppSVar6 == (SmoothPhysicsMovement_Package *)0x0)) ||
             (pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                  ((Quaternion *)&stack0xffffffcc,((*ppSVar3)->fields).rotation,
                                   ((*ppSVar6)->fields).rotation,fVar8,(MethodInfo *)0x0),
             pTVar9 == (Transform *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar9,*pQVar15,(MethodInfo *)0x0);
          pMVar16 = (this->fields).worldObjectOwner;
          if (pMVar16 != (MVWorldObjectClient *)0x0) {
            if ((*ppSVar3 == (SmoothPhysicsMovement_Package *)0x0) ||
               (*ppSVar6 == (SmoothPhysicsMovement_Package *)0x0)) break;
            (*(code *)(pMVar16->klass->vtable).set_WorldPosition.method)();
            pMVar16 = (this->fields).worldObjectOwner;
            if ((*ppSVar3 == (SmoothPhysicsMovement_Package *)0x0) ||
               ((*ppSVar6 == (SmoothPhysicsMovement_Package *)0x0 ||
                (pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                     ((Quaternion *)&stack0xffffffcc,((*ppSVar3)->fields).rotation,
                                      ((*ppSVar6)->fields).rotation,fVar8,(MethodInfo *)0x0),
                pMVar16 == (MVWorldObjectClient *)0x0)))) break;
            MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(pMVar16,*pQVar15,(MethodInfo *)0x0)
            ;
          }
          this_00 = (this->fields).cullingSubscriberBase;
          if (this_00 == (CullingSubscriberBase *)0x0) {
            return;
          }
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar9 != (Transform *)0x0) {
            pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffd0,pTVar9,(MethodInfo *)0x0);
            CullingSubscriberBase::CullingSubscriberBase_set_Position
                      (this_00,*pVVar17,(MethodInfo *)0x0);
            return;
          }
          break;
        }
        pQVar4 = (this->fields).packages;
        if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
        if ((pQVar4->fields)._size < 1) goto code_?;
        *ppSVar3 = *ppSVar6;
        func_?(ppSVar3,*ppSVar6);
        pQVar4 = (this->fields).packages;
        if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
        pSVar5 = (SmoothPhysicsMovement_Package *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar4,
                             MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                            );
        *ppSVar6 = pSVar5;
        func_?(ppSVar6,pSVar5);
        pSVar5 = *ppSVar6;
      } while (pSVar5 != (SmoothPhysicsMovement_Package *)0x0);
code_?:
      func_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
  }
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
  ppQVar1 = &(this->fields).packages;
  *ppQVar1 = this_00;
  func_?(ppQVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

