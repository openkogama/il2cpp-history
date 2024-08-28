
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
      pMVar2 = (pSVar1->fields).controller;
      pMVar3 = (this->fields).controller;
      if (pMVar3 != (MvCharacterController *)0x0) {
        fStack_4 = (pMVar3->fields).elipsoidRadius.y;
        if (seat != (GameObject *)0x0) {
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (seat,(MethodInfo *)0x0);
          if (this_00 != (Transform *)0x0) {
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                               (&VStack_6,this_00,(MethodInfo *)0x0);
            uVar7 = pVVar5->x;
            uVar8 = pVVar5->y;
            fVar9 = pVVar5->z;
            if (pMVar2 != (MvCharacterController *)0x0) {
              (pMVar2->fields).center.x = (float)uVar7;
              (pMVar2->fields).center.y = (float)uVar8;
              (pMVar2->fields).centerBase.x = (float)uVar7;
              (pMVar2->fields).centerBase.y = (float)uVar8;
              fVar10 = (fStack_4 + fStack_4) * _UNK_?;
              (pMVar2->fields).center.z = fVar9;
              (pMVar2->fields).centerBase.z = fVar9;
              (pMVar2->fields).elipsoidRadius.x = (float)&UNK_?;
              (pMVar2->fields).elipsoidRadius.y = fVar10;
              (pMVar2->fields).elipsoidRadius.z = (float)&UNK_?;
              fVar10 = (pMVar2->fields).elipsoidRadius.y;
              fVar9 = (pMVar2->fields).elipsoidRadius.z;
              (pMVar2->fields).radiusBase.x = (pMVar2->fields).elipsoidRadius.x;
              (pMVar2->fields).radiusBase.y = fVar10;
              (pMVar2->fields).radiusBase.z = fVar9;
              return pSVar1;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pSVar1 = (SmoothCharacterController *)(*pcVar11)();
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
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (pGVar2,pSVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
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
                  ppMVar9 = &(this->fields).controller;
                  *ppMVar9 = pMVar8;
                  func_?(ppMVar9,pMVar8);
                  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  if (pGVar2 != (GameObject *)0x0) {
                    pSVar10 = (SmoothPhysicsMovement *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_AddComponent_1
                                        (pGVar2,
                                         SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                                        );
                    ppSVar11 = &(this->fields).smoothPhysicsMovement;
                    *ppSVar11 = pSVar10;
                    func_?(ppSVar11,pSVar10);
                    pSVar10 = *ppSVar11;
                    if (*ppMVar9 != (MvCharacterController *)0x0) {
                      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_transform((Component *)*ppMVar9,(MethodInfo *)0x0);
                      if (pSVar10 != (SmoothPhysicsMovement *)0x0) {
                        ppTVar12 = &(pSVar10->fields).targetTransform;
                        *ppTVar12 = pTVar3;
                        func_?(ppTVar12,pTVar3);
                        ppCVar13 = &(pSVar10->fields).cullingSubscriberBase;
                        *ppCVar13 = cullingSubscriberBase;
                        func_?(ppCVar13,cullingSubscriberBase);
                        ppMVar14 = &(pSVar10->fields).worldObjectOwner;
                        *ppMVar14 = worldObjectOwner;
                        func_?(ppMVar14,worldObjectOwner);
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
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
  ppMVar1 = &(this->fields).controller;
  if (this_00 != (MvCharacterController *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    *ppMVar1 = (MvCharacterController *)0x0;
    func_?(ppMVar1,0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)(this->fields).smoothPhysicsMovement,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SmoothCharacterController::SmoothCharacterController_Reset
               (SmoothCharacterController *this,MethodInfo *method)

{
  pMVar1 = (this->fields).controller;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  if (pMVar1 != (MvCharacterController *)0x0) {
    (pMVar1->fields)._Velocity_k__BackingField.x = (pVVar2->zeroVector).x;
    (pMVar1->fields)._Velocity_k__BackingField.y = fVar3;
    (pMVar1->fields)._Velocity_k__BackingField.z = fVar4;
    this_00 = (this->fields).smoothPhysicsMovement;
    if (this_00 != (SmoothPhysicsMovement *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                       );
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
        ppSVar5 = &(this_00->fields).current;
        *ppSVar5 = (SmoothPhysicsMovement_Package *)0x0;
        func_?(ppSVar5,0);
        ppSVar5 = &(this_00->fields).next;
        *ppSVar5 = (SmoothPhysicsMovement_Package *)0x0;
        func_?(ppSVar5,0);
        pTVar6 = (this_00->fields).targetTransform;
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)(auStack_9 + 4),pTVar7,(MethodInfo *)0x0);
          if (pTVar6 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar6,*pVVar8,(MethodInfo *)0x0);
            pTVar6 = (this_00->fields).targetTransform;
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_00,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                  ((Quaternion *)auStack_9,pTVar7,(MethodInfo *)0x0);
              if (pTVar6 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                          (pTVar6,*pQVar10,(MethodInfo *)0x0);
                return;
              }
            }
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


/* Void SmoothMove() */

void Assembly-CSharp.dll::SmoothCharacterController::SmoothCharacterController_SmoothMove
               (SmoothCharacterController *this,MethodInfo *method)

{
  this_00 = (this->fields).smoothPhysicsMovement;
  if (this_00 == (SmoothPhysicsMovement *)0x0) {
code_?:
    uVar1 = func_?(&stack0xffffffb8);
    func_?(uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  ppSVar5 = &(this_00->fields).current;
  if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar6 = (this_00->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    if (0 < (pQVar6->fields)._size) {
      pSVar7 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar6,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      *ppSVar5 = pSVar7;
      func_?();
    }
    if (*ppSVar5 == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  if ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar6 = (this_00->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    if (0 < (pQVar6->fields)._size) {
      pSVar7 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar6,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (this_00->fields).next = pSVar7;
      func_?();
    }
  }
  if (*ppSVar5 != (SmoothPhysicsMovement_Package *)0x0) {
    pSVar7 = (this_00->fields).next;
    ppSVar8 = &(this_00->fields).next;
    if (pSVar7 != (SmoothPhysicsMovement_Package *)0x0) {
      do {
        if (fVar3 - fVar4 < (pSVar7->fields).time) {
code_?:
          if (*ppSVar5 == (SmoothPhysicsMovement_Package *)0x0) break;
          fVar9 = ((*ppSVar5)->fields).time;
          fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                             ((MethodInfo *)0x0);
          fVar10 = ((fVar3 - fVar4) - fVar9) / fVar10;
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_00,(MethodInfo *)0x0);
          pSVar7 = *ppSVar5;
          if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
          uVar12 = (pSVar7->fields).position.x;
          uVar13 = (pSVar7->fields).position.y;
          pSVar14 = *ppSVar8;
          fVar3 = (pSVar7->fields).position.z;
          if (pSVar14 == (SmoothPhysicsMovement_Package *)0x0) break;
          uVar15 = (pSVar14->fields).position.x;
          uVar16 = (pSVar14->fields).position.y;
          fVar4 = 0.0;
          if ((0.0 <= fVar10) && (fVar4 = _UNK_?, fVar10 <= _UNK_?)) {
            fVar4 = fVar10;
          }
          if (pTVar11 == (Transform *)0x0) break;
          value.y = ((float)uVar16 - (float)uVar13) * fVar4 + (float)uVar13;
          value.x = ((float)uVar15 - (float)uVar12) * fVar4 + (float)uVar12;
          value.z = ((pSVar14->fields).position.z - fVar3) * fVar4 + fVar3;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar11,value,(MethodInfo *)0x0);
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (((*ppSVar5 == (SmoothPhysicsMovement_Package *)0x0) ||
              (*ppSVar8 == (SmoothPhysicsMovement_Package *)0x0)) ||
             (pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                  ((Quaternion *)&stack0xffffffcc,((*ppSVar5)->fields).rotation,
                                   ((*ppSVar8)->fields).rotation,fVar10,(MethodInfo *)0x0),
             pTVar11 == (Transform *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar11,*pQVar17,(MethodInfo *)0x0);
          pMVar18 = (this_00->fields).worldObjectOwner;
          if (pMVar18 != (MVWorldObjectClient *)0x0) {
            if ((*ppSVar5 == (SmoothPhysicsMovement_Package *)0x0) ||
               (*ppSVar8 == (SmoothPhysicsMovement_Package *)0x0)) break;
            (*(code *)(pMVar18->klass->vtable).set_WorldPosition.method)();
            pMVar18 = (this_00->fields).worldObjectOwner;
            if ((*ppSVar5 == (SmoothPhysicsMovement_Package *)0x0) ||
               ((*ppSVar8 == (SmoothPhysicsMovement_Package *)0x0 ||
                (pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                     ((Quaternion *)&stack0xffffffcc,((*ppSVar5)->fields).rotation,
                                      ((*ppSVar8)->fields).rotation,fVar10,(MethodInfo *)0x0),
                pMVar18 == (MVWorldObjectClient *)0x0)))) break;
            MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(pMVar18,*pQVar17,(MethodInfo *)0x0)
            ;
          }
          this_01 = (this_00->fields).cullingSubscriberBase;
          if (this_01 == (CullingSubscriberBase *)0x0) {
            return;
          }
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (pTVar11 != (Transform *)0x0) {
            pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffd0,pTVar11,(MethodInfo *)0x0);
            CullingSubscriberBase::CullingSubscriberBase_set_Position
                      (this_01,*pVVar19,(MethodInfo *)0x0);
            return;
          }
          break;
        }
        pQVar6 = (this_00->fields).packages;
        if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
        if ((pQVar6->fields)._size < 1) goto code_?;
        *ppSVar5 = *ppSVar8;
        func_?();
        pQVar6 = (this_00->fields).packages;
        if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
        pSVar7 = (SmoothPhysicsMovement_Package *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar6,
                             MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                            );
        *ppSVar8 = pSVar7;
        func_?();
        pSVar7 = *ppSVar8;
      } while (pSVar7 != (SmoothPhysicsMovement_Package *)0x0);
      goto code_?;
    }
  }
  return;
}

