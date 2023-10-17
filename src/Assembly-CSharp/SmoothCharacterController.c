
/* SmoothCharacterController Clone(GameObject, GameObject, CullingSubscriberBase,
   MVWorldObjectClient) */

SmoothCharacterController *
Assembly-CSharp.dll::SmoothCharacterController::SmoothCharacterController_Clone
          (SmoothCharacterController *this,GameObject *targetGameObject,GameObject *seat,
          CullingSubscriberBase *cullingSubscriberBase,MVWorldObjectClient *worldObjectOwner,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                   );
    cRam_? = '\x01';
  }
  if (targetGameObject != (GameObject *)0x0) {
    pSVar1 = (SmoothCharacterController *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (targetGameObject,
                        SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                       );
    if (pSVar1 != (SmoothCharacterController *)0x0) {
      SmoothCharacterController_Init
                (pSVar1,targetGameObject,cullingSubscriberBase,worldObjectOwner,(MethodInfo *)0x0);
      this_00 = (pSVar1->fields).controller;
      pMVar2 = (this->fields).controller;
      if (pMVar2 != (MvCharacterController *)0x0) {
        UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_distance
                  ((RaycastHit *)pMVar2,(MethodInfo *)0x0);
        pMVar2 = (this->fields).controller;
        if (pMVar2 != (MvCharacterController *)0x0) {
          radius = &UNK_?;
          MvCharacterController::MvCharacterController_get_Height(pMVar2,(MethodInfo *)0x0);
          if (seat != (GameObject *)0x0) {
            this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (seat,(MethodInfo *)0x0);
            if (this_01 != (Transform *)0x0) {
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_localPosition
                                 ((Vector3 *)&stack0xffffffec,this_01,(MethodInfo *)0x0);
              if (this_00 != (MvCharacterController *)0x0) {
                MvCharacterController::MvCharacterController_Init
                          (this_00,(float)radius,(float)&stack0xffffffec,*pVVar3,(MethodInfo *)0x0);
                return pSVar1;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (SmoothCharacterController *)(*pcVar4)();
  return pSVar1;
}


/* Void Init(GameObject, CullingSubscriberBase, MVWorldObjectClient) */

void Assembly-CSharp.dll::SmoothCharacterController::SmoothCharacterController_Init
               (SmoothCharacterController *this,GameObject *worldObjectRoot,
               CullingSubscriberBase *cullingSubscriberBase,MVWorldObjectClient *worldObjectOwner,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVCharacterController3D_MethodInfo__UnityEngine__GameObject__AddComponent<MVCharacterController3D>__
                   );
    func_?(&
                    SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&StringLiteral__physics_controller);
    cRam_? = '\x01';
  }
  if (worldObjectRoot != (GameObject *)0x0) {
    pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)worldObjectRoot,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar1,StringLiteral__physics_controller,(MethodInfo *)0x0);
    pGVar2 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (pGVar2,pSVar1,(MethodInfo *)0x0);
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar2,(MethodInfo *)0x0);
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (worldObjectRoot,(MethodInfo *)0x0);
      if (pTVar4 != (Transform *)0x0) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar4,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar3,pTVar4,(MethodInfo *)0x0);
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar2,(MethodInfo *)0x0);
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (worldObjectRoot,(MethodInfo *)0x0);
          if (pTVar4 != (Transform *)0x0) {
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)(auStack_6 + 4),pTVar4,(MethodInfo *)0x0);
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar3,*pVVar5,(MethodInfo *)0x0);
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar2,(MethodInfo *)0x0);
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (worldObjectRoot,(MethodInfo *)0x0);
              if (pTVar4 != (Transform *)0x0) {
                pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                   ((Quaternion *)auStack_6,pTVar4,(MethodInfo *)0x0);
                if (pTVar3 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (pTVar3,*pQVar7,(MethodInfo *)0x0);
                  pMVar8 = (MvCharacterController *)
                           UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_AddComponent_1
                                     (pGVar2,
                                      MVCharacterController3D_MethodInfo__UnityEngine__GameObject__AddComponent<MVCharacterController3D>__
                                     );
                  (this->fields).controller = pMVar8;
                  func_?(&(this->fields).controller,pMVar8);
                  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  if (pGVar2 != (GameObject *)0x0) {
                    pSVar9 = (SmoothPhysicsMovement *)
                             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_AddComponent_1
                                       (pGVar2,
                                        SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                                       );
                    (this->fields).smoothPhysicsMovement = pSVar9;
                    func_?(&(this->fields).smoothPhysicsMovement,pSVar9);
                    pMVar8 = (this->fields).controller;
                    pSVar9 = (this->fields).smoothPhysicsMovement;
                    if (pMVar8 != (MvCharacterController *)0x0) {
                      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_transform((Component *)pMVar8,(MethodInfo *)0x0);
                      if (pSVar9 != (SmoothPhysicsMovement *)0x0) {
                        (pSVar9->fields).targetTransform = pTVar3;
                        func_?(&(pSVar9->fields).targetTransform,pTVar3);
                        (pSVar9->fields).cullingSubscriberBase = cullingSubscriberBase;
                        func_?(&(pSVar9->fields).cullingSubscriberBase,
                                        cullingSubscriberBase);
                        (pSVar9->fields).worldObjectOwner = worldObjectOwner;
                        func_?(&(pSVar9->fields).worldObjectOwner,worldObjectOwner);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SmoothCharacterController::SmoothCharacterController_OnDestroy
               (SmoothCharacterController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).controller;
  if (this_00 != (MvCharacterController *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    (this->fields).controller = (MvCharacterController *)0x0;
    func_?(&(this->fields).controller,0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)(this->fields).smoothPhysicsMovement,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SmoothCharacterController::SmoothCharacterController_Reset
               (SmoothCharacterController *this,MethodInfo *method)

{
  pMVar1 = (this->fields).controller;
  if (cRam_? == '\0') {
    ppVStack_2 = &TypeInfo__UnityEngine__Vector3;
    func_?();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar3->zeroVector).y;
  fVar5 = (pVVar3->zeroVector).z;
  if (pMVar1 != (MvCharacterController *)0x0) {
    (pMVar1->fields)._Velocity_k__BackingField.x = (pVVar3->zeroVector).x;
    (pMVar1->fields)._Velocity_k__BackingField.y = fVar4;
    (pMVar1->fields)._Velocity_k__BackingField.z = fVar5;
    this_00 = (this->fields).smoothPhysicsMovement;
    if (this_00 != (SmoothPhysicsMovement *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                        ,unaff_EDI,unaff_ESI);
        cRam_? = '\x01';
      }
      this_01 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
                (this_00->fields).packages;
      if (this_01 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::
        Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
        Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
                  (this_01,
                   MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                  );
        (this_00->fields).current = (SmoothPhysicsMovement_Package *)0x0;
        func_?(&(this_00->fields).current,0);
        (this_00->fields).next = (SmoothPhysicsMovement_Package *)0x0;
        func_?(&(this_00->fields).next,0);
        pTVar6 = (this_00->fields).targetTransform;
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&ppVStack_2,pTVar7,(MethodInfo *)0x0);
          if (pTVar6 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar6,*pVVar8,(MethodInfo *)0x0);
            pTVar6 = (this_00->fields).targetTransform;
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_00,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                 ((Quaternion *)&puStack_10,pTVar7,(MethodInfo *)0x0);
              if (pTVar6 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                          (pTVar6,*pQVar9,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      func_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SmoothMove() */

void Assembly-CSharp.dll::SmoothCharacterController::SmoothCharacterController_SmoothMove
               (SmoothCharacterController *this,MethodInfo *method)

{
  this_00 = (this->fields).smoothPhysicsMovement;
  if (this_00 != (SmoothPhysicsMovement *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      pQVar3 = (this_00->fields).packages;
      if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      if (0 < (pQVar3->fields)._size) {
        pSVar4 = (SmoothPhysicsMovement_Package *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar3,
                             MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                            );
        (this_00->fields).current = pSVar4;
        func_?();
      }
      if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
        return;
      }
    }
    if ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
      pQVar3 = (this_00->fields).packages;
      if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      if (0 < (pQVar3->fields)._size) {
        pSVar4 = (SmoothPhysicsMovement_Package *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar3,
                             MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                            );
        (this_00->fields).next = pSVar4;
        func_?();
      }
    }
    if (((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
       ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0)) {
      return;
    }
    pSVar4 = (this_00->fields).next;
    ppSVar5 = &(this_00->fields).next;
    do {
      if (fVar1 - fVar2 < (pSVar4->fields).time) {
code_?:
        pSVar4 = (this_00->fields).current;
        if (pSVar4 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar6 = (pSVar4->fields).time;
        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
        fVar7 = ((fVar1 - fVar2) - fVar6) / fVar7;
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        pSVar4 = (this_00->fields).current;
        if (pSVar4 == (SmoothPhysicsMovement_Package *)0x0) break;
        uVar9 = (pSVar4->fields).position.x;
        uVar10 = (pSVar4->fields).position.y;
        pSVar11 = (this_00->fields).next;
        fVar1 = (pSVar4->fields).position.z;
        if (pSVar11 == (SmoothPhysicsMovement_Package *)0x0) break;
        uVar12 = (pSVar11->fields).position.x;
        uVar13 = (pSVar11->fields).position.y;
        fVar2 = 0.0;
        if ((0.0 <= fVar7) && (fVar2 = _UNK_?, fVar7 <= _UNK_?)) {
          fVar2 = fVar7;
        }
        if (pTVar8 == (Transform *)0x0) break;
        value.y = ((float)uVar13 - (float)uVar10) * fVar2 + (float)uVar10;
        value.x = ((float)uVar12 - (float)uVar9) * fVar2 + (float)uVar9;
        value.z = ((pSVar11->fields).position.z - fVar1) * fVar2 + fVar1;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar8,value,(MethodInfo *)0x0);
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        pSVar4 = (this_00->fields).current;
        if (((pSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
            (pSVar11 = (this_00->fields).next, pSVar11 == (SmoothPhysicsMovement_Package *)0x0)) ||
           (pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                ((Quaternion *)&stack0xffffffd0,(pSVar4->fields).rotation,
                                 (pSVar11->fields).rotation,fVar7,(MethodInfo *)0x0),
           pTVar8 == (Transform *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar8,*pQVar14,(MethodInfo *)0x0);
        if ((this_00->fields).worldObjectOwner != (MVWorldObjectClient *)0x0) {
          if (((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
             ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0)) break;
          (*(((this_00->fields).worldObjectOwner)->klass->vtable).set_WorldPosition.methodPtr)();
          pSVar4 = (this_00->fields).current;
          this_01 = (this_00->fields).worldObjectOwner;
          if ((pSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
             ((pSVar11 = (this_00->fields).next, pSVar11 == (SmoothPhysicsMovement_Package *)0x0 ||
              (pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                   ((Quaternion *)&stack0xffffffd0,(pSVar4->fields).rotation,
                                    (pSVar11->fields).rotation,3.1695622e-29,(MethodInfo *)0x0),
              this_01 == (MVWorldObjectClient *)0x0)))) break;
          MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(this_01,*pQVar14,(MethodInfo *)0x0);
        }
        if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
          return;
        }
        this_02 = (this_00->fields).cullingSubscriberBase;
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar8 != (Transform *)0x0) {
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0);
          CullingSubscriberBase::CullingSubscriberBase_set_Position
                    (this_02,*pVVar15,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      pQVar3 = (this_00->fields).packages;
      if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
      if ((pQVar3->fields)._size < 1) goto code_?;
      (this_00->fields).current = *ppSVar5;
      func_?();
      pQVar3 = (this_00->fields).packages;
      if (pQVar3 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
      pSVar4 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar3,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      *ppSVar5 = pSVar4;
      func_?();
      pSVar4 = *ppSVar5;
    } while (pSVar4 != (SmoothPhysicsMovement_Package *)0x0);
  }
code_?:
  uVar16 = func_?(&stack0xffffffbc);
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

