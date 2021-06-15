
/* SmoothCharacterController Clone(GameObject, GameObject, CullingSubscriberBase,
   MVWorldObjectClient) */

SmoothCharacterController *
Assembly-CSharp.dll::SmoothCharacterController::SmoothCharacterController_Clone
          (SmoothCharacterController *this,GameObject *targetGameObject,GameObject *seat,
          CullingSubscriberBase *cullingSubscriberBase,MVWorldObjectClient *worldObjectOwner,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (targetGameObject != (GameObject *)0x0) {
    pSVar1 = (SmoothCharacterController *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       (targetGameObject,
                        SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                       );
    if (pSVar1 != (SmoothCharacterController *)0x0) {
      SmoothCharacterController_Init
                (pSVar1,targetGameObject,cullingSubscriberBase,worldObjectOwner,(MethodInfo *)0x0);
      this_00 = (pSVar1->fields).controller;
      pMVar2 = (this->fields).controller;
      if (pMVar2 != (MvCharacterController *)0x0) {
        System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System::
        Object,System::Single]::
        Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
                  ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_ *)
                   pMVar2,(MethodInfo *)0x0);
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (worldObjectRoot != (GameObject *)0x0) {
    pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)worldObjectRoot,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
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
                           GameObject_AddComponent_85
                                     (pGVar2,
                                      MVCharacterController3D_MethodInfo__UnityEngine__GameObject__AddComponent<MVCharacterController3D>__
                                     );
                  (this->fields).controller = pMVar8;
                  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                  if (pGVar2 != (GameObject *)0x0) {
                    pSVar9 = (SmoothPhysicsMovement *)
                             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_AddComponent_85
                                       (pGVar2,
                                        SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                                       );
                    pMVar8 = (this->fields).controller;
                    (this->fields).smoothPhysicsMovement = pSVar9;
                    if (pMVar8 != (MvCharacterController *)0x0) {
                      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_transform((Component_1 *)pMVar8,(MethodInfo *)0x0);
                      if (pSVar9 != (SmoothPhysicsMovement *)0x0) {
                        (pSVar9->fields).targetTransform = pTVar3;
                        (pSVar9->fields).cullingSubscriberBase = cullingSubscriberBase;
                        (pSVar9->fields).worldObjectOwner = worldObjectOwner;
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
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SmoothCharacterController::SmoothCharacterController_OnDestroy
               (SmoothCharacterController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).controller;
  if (this_00 != (MvCharacterController *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    (this->fields).controller = (MvCharacterController *)0x0;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).controller;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  if (this_00 != (MvCharacterController *)0x0) {
    MvCharacterController::MvCharacterController_set_Velocity(this_00,*pVVar1,(MethodInfo *)0x0);
    this_01 = (this->fields).smoothPhysicsMovement;
    if (this_01 != (SmoothPhysicsMovement *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_02 = (this_01->fields).packages;
      if (this_02 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
        System.dll::System::Collections::Generic::Queue`1[System::Int32]::
        Queue_1_System_Int32__Clear
                  ((Queue_1_System_Int32_ *)this_02,
                   MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                  );
        pTVar2 = (this_01->fields).targetTransform;
        (this_01->fields).current = (SmoothPhysicsMovement_Package *)0x0;
        (this_01->fields).next = (SmoothPhysicsMovement_Package *)0x0;
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this_01,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar2,*pVVar1,(MethodInfo *)0x0);
            pTVar2 = (this_01->fields).targetTransform;
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this_01,(MethodInfo *)0x0);
            if (pTVar3 != (Transform *)0x0) {
              pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                 ((Quaternion *)&stack0xffffffec,pTVar3,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                          (pTVar2,*pQVar4,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SmoothMove() */

void Assembly-CSharp.dll::SmoothCharacterController::SmoothCharacterController_SmoothMove
               (SmoothCharacterController *this,MethodInfo *method)

{
  this_00 = (this->fields).smoothPhysicsMovement;
  if (this_00 == (SmoothPhysicsMovement *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar4 = (this_00->fields).packages;
    if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                        MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                       );
    if (0 < (int)pIVar5) {
      pQVar4 = (this_00->fields).packages;
      if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      pSVar6 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                Queue_1_SmoothPhysicsMovement_Package__Dequeue
                          (pQVar4,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (this_00->fields).current = pSVar6;
    }
    if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  if ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar4 = (this_00->fields).packages;
    if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                        MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                       );
    if (0 < (int)pIVar5) {
      pQVar4 = (this_00->fields).packages;
      if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      pSVar6 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                Queue_1_SmoothPhysicsMovement_Package__Dequeue
                          (pQVar4,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (this_00->fields).next = pSVar6;
    }
  }
  if (((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
     (pSVar6 = (this_00->fields).next, pSVar6 == (SmoothPhysicsMovement_Package *)0x0)) {
    return;
  }
  do {
    if (fVar2 - fVar3 < (pSVar6->fields).time) {
code_?:
      pSVar6 = (this_00->fields).current;
      if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar7 = (pSVar6->fields).time;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      fVar8 = ((fVar2 - fVar3) - fVar7) / fVar8;
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      pSVar6 = (this_00->fields).current;
      if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
      pSVar10 = (this_00->fields).next;
      VVar11 = (pSVar6->fields).position;
      if (pSVar10 == (SmoothPhysicsMovement_Package *)0x0) break;
      uVar12._0_4_ = (pSVar10->fields).position.x;
      uVar12._4_4_ = (pSVar10->fields).position.y;
      fVar2 = (pSVar10->fields).position.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      b_01.z = fVar2;
      b_01.x = (float)uVar12;
      b_01.y = SUB84(uVar12,4);
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                          ((Vector3 *)&stack0xffffffdc,VVar11,b_01,fVar8,(MethodInfo *)0x0);
      if (pTVar9 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar9,*pVVar13,(MethodInfo *)0x0);
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      pSVar6 = (this_00->fields).current;
      if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar2 = (pSVar6->fields).rotation.x;
      fVar3 = (pSVar6->fields).rotation.y;
      fVar7 = (pSVar6->fields).rotation.z;
      fVar14 = (pSVar6->fields).rotation.w;
      pSVar6 = (this_00->fields).next;
      if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar15 = (pSVar6->fields).rotation.x;
      puVar16 = (undefined *)(pSVar6->fields).rotation.y;
      pQVar17 = (Quaternion__Class *)(pSVar6->fields).rotation.z;
      fVar18 = (pSVar6->fields).rotation.w;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        puVar16 = &UNK_?;
        pQVar17 = TypeInfo__UnityEngine__Quaternion;
        func_?();
      }
      a_00.y = fVar3;
      a_00.x = fVar2;
      a_00.z = fVar7;
      a_00.w = fVar14;
      b_00.y = (float)puVar16;
      b_00.x = fVar15;
      b_00.z = (float)pQVar17;
      b_00.w = fVar18;
      pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                          ((Quaternion *)&stack0xffffffd8,a_00,b_00,fVar8,(MethodInfo *)0x0);
      if (pTVar9 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar9,*pQVar19,(MethodInfo *)0x0);
      pMVar20 = (this_00->fields).worldObjectOwner;
      if (pMVar20 != (MVWorldObjectClient *)0x0) {
        pSVar6 = (this_00->fields).current;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        VVar11 = (pSVar6->fields).position;
        pSVar6 = (this_00->fields).next;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        uVar21._0_4_ = (pSVar6->fields).position.x;
        uVar21._4_4_ = (pSVar6->fields).position.y;
        fVar2 = (pSVar6->fields).position.z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          uVar21._0_4_ = (float)TypeInfo__UnityEngine__Vector3;
          func_?();
        }
        b_02.z = fVar2;
        b_02.x = (float)uVar21;
        b_02.y = SUB84(uVar21,4);
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                            ((Vector3 *)&stack0xffffffdc,VVar11,b_02,fVar8,(MethodInfo *)0x0);
        if (pMVar20 == (MVWorldObjectClient *)0x0) break;
        uVar22 = pVVar13->x;
        (*(code *)(pMVar20->klass->vtable).set_WorldPosition.method)(pMVar20,uVar22);
        pSVar6 = (this_00->fields).current;
        pMVar20 = (this_00->fields).worldObjectOwner;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar2 = (pSVar6->fields).rotation.x;
        fVar3 = (pSVar6->fields).rotation.y;
        fVar7 = (pSVar6->fields).rotation.z;
        fVar14 = (pSVar6->fields).rotation.w;
        pSVar6 = (this_00->fields).next;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar15 = (pSVar6->fields).rotation.x;
        puVar16 = (undefined *)(pSVar6->fields).rotation.y;
        pQVar17 = (Quaternion__Class *)(pSVar6->fields).rotation.z;
        fVar18 = (pSVar6->fields).rotation.w;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          puVar16 = &UNK_?;
          pQVar17 = TypeInfo__UnityEngine__Quaternion;
          func_?();
        }
        a.y = fVar3;
        a.x = fVar2;
        a.z = fVar7;
        a.w = fVar14;
        b.y = (float)puVar16;
        b.x = fVar15;
        b.z = (float)pQVar17;
        b.w = fVar18;
        pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                            ((Quaternion *)&stack0xffffffd8,a,b,fVar8,(MethodInfo *)0x0);
        if (pMVar20 == (MVWorldObjectClient *)0x0) break;
        MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(pMVar20,*pQVar19,(MethodInfo *)0x0);
      }
      this_01 = (this_00->fields).cullingSubscriberBase;
      if (this_01 == (CullingSubscriberBase *)0x0) {
        return;
      }
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      if ((pTVar9 != (Transform *)0x0) &&
         (pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffdc,pTVar9,(MethodInfo *)0x0),
         this_01 != (CullingSubscriberBase *)0x0)) {
        CullingSubscriberBase::CullingSubscriberBase_set_Position
                  (this_01,*pVVar13,(MethodInfo *)0x0);
        return;
      }
      break;
    }
    pQVar4 = (this_00->fields).packages;
    if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                        MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                       );
    if ((int)pIVar5 < 1) goto code_?;
    (this_00->fields).current = (this_00->fields).next;
    pQVar4 = (this_00->fields).packages;
    if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pSVar6 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
              Queue_1_SmoothPhysicsMovement_Package__Dequeue
                        (pQVar4,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                        );
    (this_00->fields).next = pSVar6;
  } while (pSVar6 != (SmoothPhysicsMovement_Package *)0x0);
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

