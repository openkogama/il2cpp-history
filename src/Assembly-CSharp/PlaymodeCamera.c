
/* Void Awake() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_Awake
               (PlaymodeCamera *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  fVar1 = (this->fields).lookAtOffset.x;
  fVar2 = (this->fields).lookAtOffset.y;
  (this->fields).distance = (this->fields).distanceToAvatar;
  fVar3 = (this->fields).lookAtOffset.z;
  (this->fields).currentLookAtOffset.x = fVar1;
  (this->fields).currentLookAtOffset.y = fVar2;
  (this->fields).currentLookAtOffset.z = fVar3;
  return;
}


/* Void CameraCollision() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_CameraCollision
               (PlaymodeCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  func_?();
  pTVar1 = (this->fields).lookAtTransform;
  fVar2 = 0.0;
  fVar3 = 0.0;
  if (pTVar1 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffff50,pTVar1,(MethodInfo *)0x0);
    uVar5._0_4_ = (this->fields).avatarHeadOffset.x;
    uVar5._4_4_ = (this->fields).avatarHeadOffset.y;
    fVar6 = (this->fields).avatarHeadOffset.z;
    uVar7._0_4_ = pVVar4->x;
    uVar7._4_4_ = pVVar4->y;
    fVar8 = pVVar4->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    d = (float)uVar5;
    a_02.z = fVar8;
    a_02.x = (float)(int)uVar7;
    a_02.y = (float)(int)((ulonglong)uVar7 >> 0x20);
    b_00.z = fVar6;
    b_00.x = (float)uVar5;
    b_00.y = SUB84(uVar5,4);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffff5c,a_02,b_00,(MethodInfo *)0x0);
    uVar7._4_4_ = 0.0;
    uVar7._0_4_ = pVVar4->z;
    puVar9 = &UNK_?;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffff84,pTVar1,(MethodInfo *)0x0);
      b_01.y = (float)uStack_10;
      b_01.x = (float)pMStack_11;
      b_01.z = (float)uVar7;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         ((Vector3 *)&stack0xffffff90,*pVVar4,b_01,(MethodInfo *)0x0);
      fVar6 = pVVar4->z;
      puVar12 = &stack0xffffff98;
      func_?();
      func_?();
      pIVar13 = (InputToPlayerMovementAndroid__Class *)0x0;
      func_?();
      iVar14 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                         (StringLiteral_Default,(MethodInfo *)0x0);
      ray.m_Direction.z = in_stack_15;
      ray.m_Direction.y = in_stack_16;
      ray.m_Origin.y = (float)in_stack_17;
      ray.m_Origin.x = (float)in_stack_18;
      ray.m_Origin.z = (float)in_stack_19;
      ray.m_Direction.x = (float)in_stack_20;
      bVar21 = CollisionDetection::CollisionDetection_MVSphereCast
                        (ray,(this->fields)._._.cameraRadius,(VoxelHit *)&stack0xfffffee8,fStack_22
                         ,(this->fields).ignoreAvatarId,1 << ((byte)iVar14 & 0x1f),(MethodInfo *)0x0
                        );
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      if (((float)puVar12 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) || (bVar21 == 0)) {
        return;
      }
      fVar8 = uVar7._4_4_;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xfffffee0,pTVar1,(MethodInfo *)0x0);
        uVar23 = pVVar4->x;
        uVar24 = pVVar4->y;
        a.y = (float)uVar24;
        a.x = (float)uVar23;
        fVar25 = pVVar4->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a.z = fVar25;
        b.y = uVar7._4_4_;
        b.x = fStack_26;
        b.z = (float)in_stack_27;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xfffffeec,a,b,(MethodInfo *)0x0);
        point.y = uVar7._4_4_;
        point.x = fStack_26;
        point.z = (float)in_stack_28;
        lineStart.y = (float)in_stack_18;
        lineStart.x = (float)in_stack_29;
        lineStart.z = (float)uVar7;
        bVar21 = MathFunctions::MathFunctions_DistancePointLine_1
                          (point,lineStart,*pVVar4,(float *)&stack0xfffffee0,
                           (Vector3 *)&stack0xffffff1c,(MethodInfo *)0x0);
        if (bVar21 == 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
          pOVar30 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffefc);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar30,(MethodInfo *)0x0);
          pOVar30 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffefc);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar30,(MethodInfo *)0x0);
        }
        if ((float)puVar9 < (this->fields)._._.cameraRadius) {
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Mathf);
          }
          func_?();
        }
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this,(MethodInfo *)0x0);
        pVVar4 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                           ((Vector3 *)&stack0xffffff34,
                            (InputToPlayerMovementAndroid *)&stack0xffffff6c,(MethodInfo *)0x0);
        uVar31 = pVVar4->x;
        fVar25 = pVVar4->y;
        uVar7._4_4_ = pVVar4->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a_00.y = fVar25;
        a_00.x = (float)uVar31;
        a_00.z = uVar7._4_4_;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&stack0xffffff40,a_00,d,(MethodInfo *)0x0);
        a_01.y = (float)pIVar13;
        a_01.x = fVar6;
        a_01.z = fVar8;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           ((Vector3 *)&stack0xffffff58,a_01,*pVVar4,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar1,*pVVar4,(MethodInfo *)0x0);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffff94,pTVar1,(MethodInfo *)0x0);
            a_03.y = (float)uStack_10;
            a_03.x = (float)pMStack_11;
            a_03.z = (float)uVar7;
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                               ((Vector3 *)&stack0xffffffa0,a_03,*pVVar4,(MethodInfo *)0x0);
            uStack_32._0_4_ = pVVar4->x;
            uStack_32._4_4_ = pVVar4->y;
            fStack_33 = pVVar4->z;
            fVar34 = (float10)func_?();
            (this->fields).distance = (float)fVar34;
            b_02.y = fVar3;
            b_02.x = fVar2;
            b_02.z = (float)uVar7;
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                               (&VStack_35,(this->fields).currentLookAt,b_02,(MethodInfo *)0x0);
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                               (&VStack_36,0.0 / VStack_35.z,*pVVar4,(MethodInfo *)0x0);
            a_04.y = (float)uStack_37;
            a_04.x = VStack_35.z;
            a_04.z = (float)uVar7;
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               ((Vector3 *)&stack0xfffffff8,a_04,*pVVar4,(MethodInfo *)0x0);
            uVar38 = pVVar4->x;
            uVar39 = pVVar4->y;
            fVar2 = pVVar4->z;
            (this->fields).currentLookAt.x = (float)uVar38;
            (this->fields).currentLookAt.y = (float)uVar39;
            (this->fields).actualLookAt.x = (float)uVar38;
            (this->fields).actualLookAt.y = (float)uVar39;
            (this->fields).currentLookAt.z = fVar2;
            (this->fields).actualLookAt.z = fVar2;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
  return;
}


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_Enter
               (PlaymodeCamera *this,MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,(float)cameraController,(MethodInfo *)0x0);
  pMVar1 = (this->fields).avatarLocal;
  if (pMVar1 != (MVAvatarLocal *)0x0) {
    this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (this_01 != (CelestialParam *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)this_01,(MethodInfo *)0x0);
      (this->fields).lookAtTransform = pTVar2;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar3 != (MainCameraManager *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pMVar3,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
          fVar5 = pVVar4->y;
          fVar6 = pVVar4->z;
          (this->fields).currentLookAt.x = pVVar4->x;
          (this->fields).currentLookAt.y = fVar5;
          (this->fields).currentLookAt.z = fVar6;
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if (pMVar3 != (MainCameraManager *)0x0) {
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pMVar3,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&stack0xfffffff0,pTVar7,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar2,*pVVar4,(MethodInfo *)0x0);
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                   ((MethodInfo *)0x0);
                if (pMVar3 != (MainCameraManager *)0x0) {
                  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_transform((Component_1 *)pMVar3,(MethodInfo *)0x0);
                  if (pTVar7 != (Transform *)0x0) {
                    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_rotation
                                       ((Quaternion *)&stack0xffffffec,pTVar7,(MethodInfo *)0x0);
                    if (pTVar2 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                (pTVar2,*pQVar8,(MethodInfo *)0x0);
                      pTVar2 = (this->fields).lookAtTransform;
                      if (pTVar2 != (Transform *)0x0) {
                        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_1_get_transform((Component_1 *)pTVar2,(MethodInfo *)0x0);
                        if (pTVar2 != (Transform *)0x0) {
                          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                   Transform_get_position
                                             ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
                          this_00 = (this->fields).targetRot;
                          fVar5 = pVVar4->y;
                          fVar6 = pVVar4->z;
                          (this->fields).prevLookAtTransformPos.x = pVVar4->x;
                          (this->fields).prevLookAtTransformPos.y = fVar5;
                          (this->fields).prevLookAtTransformPos.z = fVar6;
                          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                             ((MethodInfo *)0x0);
                          if (pMVar3 != (MainCameraManager *)0x0) {
                            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_1_get_transform
                                               ((Component_1 *)pMVar3,(MethodInfo *)0x0);
                            if (pTVar2 != (Transform *)0x0) {
                              pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                       Transform_get_rotation
                                                 ((Quaternion *)&stack0xffffffec,pTVar2,
                                                  (MethodInfo *)0x0);
                              if (this_00 != (TargetRotation *)0x0) {
                                TargetRotation::TargetRotation_SetTargetRotation_2
                                          (this_00,*pQVar8,(MethodInfo *)0x0);
                                (this->fields).distance = (this->fields).distanceToAvatar;
                                this_02 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                                          func_?();
                                System.Core.dll::System::Collections::Generic::
                                HashSet`1[AvatarModifierPackage+AvatarModifier]::
                                HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                                          (this_02,
                                           MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__
                                          );
                                pMVar1 = (this->fields).avatarLocal;
                                if (pMVar1 != (MVAvatarLocal *)0x0) {
                                  item = (UnityWebRequest *)
                                         mscorlib.dll::System::Collections::ObjectModel::
                                         Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                                   ((Collection_1_VoxelHit_ *)pMVar1,
                                                    (MethodInfo *)0x0);
                                  if (this_02 !=
                                      (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
                                    System.Core.dll::System::Collections::Generic::
                                    HashSet`1[UnityEngine::Networking::UnityWebRequest]::
                                    HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                                              ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
                                               this_02,item,
                                               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_
                                              );
                                    (this->fields).ignoreAvatarId =
                                         (HashSet_1_System_Int32_ *)this_02;
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
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_Initialize
               (PlaymodeCamera *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  camMoveTowardsOffset = (this->fields).avatarHeadOffset;
  (this->fields).avatarLocal = avatarLocal;
  this_00 = (AvatarCameraDistTransparency *)func_?(TypeInfo__AvatarCameraDistTransparency);
  AvatarCameraDistTransparency::AvatarCameraDistTransparency__ctor
            (this_00,camMoveTowardsOffset,4.0,1.0,(MethodInfo *)0x0);
  (this->fields).avatarCameraDistTransparency = this_00;
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_Reset
               (PlaymodeCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  pTVar1 = (this->fields).lookAtTransform;
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_02,*pQVar2,(MethodInfo *)0x0);
      pTVar1 = (this->fields).lookAtTransform;
      this_00 = (this->fields).targetRot;
      if (pTVar1 != (Transform *)0x0) {
        pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           ((Quaternion *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
        if (this_00 != (TargetRotation *)0x0) {
          TargetRotation::TargetRotation_SetTargetRotation_2(this_00,*pQVar2,(MethodInfo *)0x0);
          pTVar1 = (this->fields).lookAtTransform;
          if (pTVar1 != (Transform *)0x0) {
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffe8,pTVar1,(MethodInfo *)0x0);
            b = (this->fields).avatarHeadOffset;
            a = *pVVar3;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               ((Vector3 *)&stack0xffffffe8,a,b,(MethodInfo *)0x0);
            fVar4 = pVVar3->y;
            fVar5 = pVVar3->z;
            (this->fields).currentLookAt.x = pVVar3->x;
            (this->fields).currentLookAt.y = fVar4;
            (this->fields).currentLookAt.z = fVar5;
            pPVar6 = (this->fields).smoothLookAt;
            if (pPVar6 != (PlaymodeCamera_SmoothLookAt *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              this_01 = (pPVar6->fields).prevVelocities;
              if (this_01 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
                System.dll::System::Collections::Generic::Queue`1[System::Int32]::
                Queue_1_System_Int32__Clear
                          ((Queue_1_System_Int32_ *)this_01,
                           MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Clear__
                          );
                return;
              }
            }
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


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_UpdateCamera
               (PlaymodeCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  func_?(&stack0xffffffd4,0,(this->fields).height,0,0);
  (this->fields).avatarHeadOffset.x = 0.0;
  (this->fields).avatarHeadOffset.y = 0.0;
  (this->fields).avatarHeadOffset.z = fVar1;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).targetRot;
  this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_03 != (Transform *)0x0) {
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffc4,this_03,(MethodInfo *)0x0);
    if (this_00 != (TargetRotation *)0x0) {
      pQVar3 = TargetRotation::TargetRotation_GetLerpRotation
                         ((Quaternion *)&stack0xffffffc4,this_00,*pQVar3,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar2,*pQVar3,(MethodInfo *)0x0);
        fVar1 = (this->fields).distance;
        uVar4._0_4_ = (this->fields).targetDistanceStrength;
        fVar5 = 0.0;
        uVar4._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                ((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                           (fVar1,fVar5,uVar4._4_4_ * (float)uVar4,(MethodInfo *)0x0);
        (this->fields).distance = fVar1;
        PlaymodeCamera_UpdatePosition(this,(MethodInfo *)0x0);
        this_01 = this->klass[1]._0.image;
        (*(code *)(this->klass->vtable).CameraCollision.method)();
        dVar6 = (double)((this->fields).actualLookAt.y - (this->fields).lookAtPos.y);
        fVar1 = (float)(double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & _UNK_?,
                                         SUB84(dVar6,0) & _UNK_?);
        fVar1 = fVar1 * fVar1;
        VVar7 = (this->fields).currentLookAt;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffc8,pTVar2,(MethodInfo *)0x0);
          uVar4._0_4_ = pVVar8->x;
          uVar4._4_4_ = pVVar8->y;
          fVar5 = pVVar8->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          b.z = fVar5;
          b.x = (float)(int)uVar4;
          b.y = (float)(int)((ulonglong)uVar4 >> 0x20);
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                             ((Vector3 *)&stack0xffffffc8,VVar7,b,(MethodInfo *)0x0);
          uVar4._0_4_ = (this->fields).lookAtPos.z;
          VVar7 = *pVVar8;
          fVar5 = (this->fields).lookAtPos.x;
          fVar9 = (this->fields).lookAtPos.y;
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffc8,pTVar2,(MethodInfo *)0x0);
            a.y = fVar9;
            a.x = fVar5;
            a.z = (float)uVar4;
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                               ((Vector3 *)&stack0xffffffc8,a,*pVVar8,(MethodInfo *)0x0);
            uVar10._0_4_ = pVVar8->x;
            uVar10._4_4_ = pVVar8->y;
            uVar4._0_4_ = pVVar8->z;
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Quaternion);
            }
            toDirection.z = (float)uVar4;
            toDirection.x = (float)(int)uVar10;
            toDirection.y = (float)(int)((ulonglong)uVar10 >> 0x20);
            pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
                               ((Quaternion *)&stack0xffffffc4,VVar7,toDirection,(MethodInfo *)0x0);
            uVar4._0_4_ = pQVar3->x;
            uVar4._4_4_ = pQVar3->y;
            fVar5 = pQVar3->z;
            fVar9 = pQVar3->w;
            pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                               ((Quaternion *)&stack0xffffffe4,(MethodInfo *)0x0);
            uVar10._0_4_ = pQVar3->x;
            uVar10._4_4_ = pQVar3->y;
            fVar11 = pQVar3->z;
            fVar12 = pQVar3->w;
            fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            a_00.y = uVar10._4_4_;
            a_00.x = (float)uVar10;
            a_00.z = fVar11;
            a_00.w = fVar12;
            b_00.y = uVar4._4_4_;
            b_00.x = (float)uVar4;
            b_00.z = fVar5;
            b_00.w = fVar9;
            pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                               ((Quaternion *)&stack0xffffffc4,a_00,b_00,
                                (this->fields).followRotationSpeed * fVar13 * fVar1,
                                (MethodInfo *)0x0);
            fVar1 = pQVar3->x;
            uVar4._0_4_ = pQVar3->y;
            uVar4._4_4_ = pQVar3->z;
            fVar5 = pQVar3->w;
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)&stack0xffffffc8,pTVar2,(MethodInfo *)0x0);
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                 ((Vector3 *)&stack0xffffffc8,*pVVar8,(this->fields)._.shakeOffset,
                                  (MethodInfo *)0x0);
              if (this_01 != (Il2CppImage *)0x0) {
                ProtectedTransform::ProtectedTransform_set_position
                          ((ProtectedTransform *)this_01,*pVVar8,(MethodInfo *)0x0);
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                if (pTVar2 != (Transform *)0x0) {
                  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_rotation
                                     ((Quaternion *)&stack0xffffffc4,pTVar2,(MethodInfo *)0x0);
                  lhs.y = (float)uVar4;
                  lhs.x = fVar1;
                  lhs.z = uVar4._4_4_;
                  lhs.w = fVar5;
                  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                           Quaternion_op_Multiply
                                     ((Quaternion *)&stack0xffffffc4,lhs,*pQVar3,(MethodInfo *)0x0);
                  ProtectedTransform::ProtectedTransform_set_rotation
                            ((ProtectedTransform *)this_01,*pQVar3,(MethodInfo *)0x0);
                  ScaleAnimationBase::ScaleAnimationBase_Play
                            ((ScaleAnimationBase *)this,(float)this_01,(MethodInfo *)0x0);
                  this_02 = (this->fields).avatarCameraDistTransparency;
                  if (this_02 != (AvatarCameraDistTransparency *)0x0) {
                    AvatarCameraDistTransparency::AvatarCameraDistTransparency_Update
                              (this_02,(this->fields).avatarLocal,(MethodInfo *)0x0);
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
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void UpdatePosition() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_UpdatePosition
               (PlaymodeCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  auStack_1._4_4_ = 0.0;
  fStack_2 = 0.0;
  VStack_3.x = 0.0;
  VStack_3.y = 0.0;
  VStack_3.z = 0.0;
  fStack_4 = 0.0;
  VStack_5.x = 0.0;
  VStack_5.y = 0.0;
  fVar6 = 0.0;
  auStack_1._0_4_ = 0.0;
  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar7 != (Transform *)0x0) {
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffff70,pTVar7,(MethodInfo *)0x0);
    fVar9 = pVVar8->z;
    pTVar10 = (this->fields).lookAtTransform;
    if (pTVar10 != (Transform *)0x0) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffff94,pTVar10,(MethodInfo *)0x0);
      uVar11._0_4_ = (this->fields).prevLookAtTransformPos.x;
      uVar11._4_4_ = (Il2CppMethodPointer)(this->fields).prevLookAtTransformPos.y;
      uVar12._0_4_ = pVVar8->x;
      uVar12._4_4_ = pVVar8->y;
      fVar13 = pVVar8->z;
      fVar14 = (this->fields).prevLookAtTransformPos.z;
      pIVar15 = uVar11._4_4_;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
        pIVar15 = uVar11._4_4_;
      }
      a.z = fVar13;
      a.x = (float)(int)uVar12;
      a.y = (float)(int)((ulonglong)uVar12 >> 0x20);
      b.z = fVar14;
      b.x = (float)(int)uVar11;
      b.y = (float)(int)((ulonglong)uVar11 >> 0x20);
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                          ((Vector3 *)&stack0xffffff88,a,b,(MethodInfo *)0x0);
      a_01.y = fVar6;
      a_01.x = in_stack_16;
      a_01.z = fVar9;
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)&stack0xffffff90,a_01,*pVVar8,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar7,*pVVar8,(MethodInfo *)0x0);
      auStack_1._4_4_ =
           ((this->fields).distance / (this->fields).distanceToAvatar) *
           (this->fields).lookAtScaleCorrection;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                          ((Quaternion *)((int)&uStack18 + 4),(MethodInfo *)0x0);
      in_stack_19 = pQVar17->y;
      in_stack_20 = pQVar17->z;
      in_stack_21 = pQVar17->w;
      _uStack00000050 = CONCAT44(pQVar17->x,uStack22);
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar7 != (Transform *)0x0) {
        pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)&stack0x00000024,pTVar7,(MethodInfo *)0x0);
        in_stack_23 = pQVar17->x;
        in_stack_24 = pQVar17->y;
        in_stack_25 = pQVar17->z;
        in_stack_26 = pQVar17->w;
        puVar27 = (undefined8 *)func_?();
        VStack_3._0_8_ = *puVar27;
        VStack_3.z = *(float *)(puVar27 + 1);
        in_stack_28 = 0;
        in_stack_29 = 0.0;
        func_?();
        fVar6 = in_stack_29;
        func_?();
        pTVar7 = (this->fields).lookAtTransform;
        if (pTVar7 != (Transform *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffff4c,pTVar7,(MethodInfo *)0x0);
          uVar12._0_4_ = (this->fields).avatarHeadOffset.z;
          fVar13 = pVVar8->x;
          fVar14 = pVVar8->y;
          uVar12._4_4_ = pVVar8->z;
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                              ((Vector3 *)&stack0xffffff88,(this->fields).currentLookAtOffset,fVar9
                               ,(MethodInfo *)0x0);
          a_00.y = fVar14;
          a_00.x = fVar13;
          a_00.z = (float)uVar12;
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                              ((Vector3 *)&stack0xffffff70,a_00,*pVVar8,(MethodInfo *)0x0);
          rotation.z = VStack_3.z;
          rotation.x = VStack_3.x;
          rotation.y = VStack_3.y;
          rotation.w = fStack_4;
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&stack0xffffff90,rotation,*pVVar8,(MethodInfo *)0x0);
          auVar30._4_8_ = 0;
          auVar30._0_4_ = uVar12._4_4_;
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                              ((Vector3 *)&stack0xffffffb4,(Vector3)(auVar30 << 0x40),*pVVar8,
                               (MethodInfo *)0x0);
          this_00 = (this->fields).smoothLookAt;
          uVar31 = pVVar8->x;
          uVar32 = pVVar8->y;
          fVar9 = pVVar8->z;
          (this->fields).lookAtPos.x = (float)uVar31;
          (this->fields).lookAtPos.y = (float)uVar32;
          (this->fields).currentLookAt.x = (float)uVar31;
          (this->fields).currentLookAt.y = (float)uVar32;
          (this->fields).lookAtPos.z = fVar9;
          (this->fields).currentLookAt.z = fVar9;
          pMVar33 = (this->fields).avatarLocal;
          if (pMVar33 != (MVAvatarLocal *)0x0) {
            pVVar8 = (Vector3 *)(*(code *)(pMVar33->klass->vtable).get_VelocityRelative.method)();
            if (this_00 != (PlaymodeCamera_SmoothLookAt *)0x0) {
              pVVar8 = PlaymodeCamera+SmoothLookAt::PlaymodeCamera_SmoothLookAt_GetCurrentLookAt
                                  ((Vector3 *)&stack0xffffff30,this_00,*pVVar8,(MethodInfo *)0x0);
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                  ((Vector3 *)&stack0xffffff48,(this->fields).currentLookAt,*pVVar8
                                   ,(MethodInfo *)0x0);
              uVar12._0_4_ = pVVar8->y;
              fVar9 = pVVar8->z;
              (this->fields).currentLookAt.x = pVVar8->x;
              (this->fields).currentLookAt.y = (float)uVar12;
              (this->fields).currentLookAt.z = fVar9;
              pTVar7 = (this->fields).lookAtTransform;
              if (pTVar7 != (Transform *)0x0) {
                pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffff68,pTVar7,(MethodInfo *)0x0);
                pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                    ((Vector3 *)&stack0xffffff74,*pVVar8,
                                     (this->fields).avatarHeadOffset,(MethodInfo *)0x0);
                fVar9 = pVVar8->z;
                pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                    ((Vector3 *)&stack0xffffff94,(this->fields).currentLookAt,
                                     *pVVar8,(MethodInfo *)0x0);
                pVVar8 = (Vector3 *)&stack0xffffffb4;
                puVar35 = &UNK_?;
                pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                    (pVVar8,*pVVar34,fVar6,(MethodInfo *)0x0);
                uVar11._0_4_ = 0;
                uStack18._0_4_ = pVVar34->x;
                uStack18._4_4_ = pVVar34->y;
                in_stack_36 = pVVar34->z;
                pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                if (pTVar7 != (Transform *)0x0) {
                  pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position((Vector3 *)auStack_1,pTVar7,(MethodInfo *)0x0);
                  b_01.y = (float)unaff_EBP;
                  b_01.x = VStack_5.z;
                  b_01.z = fVar9;
                  pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                      (&VStack_3,*pVVar34,b_01,(MethodInfo *)0x0);
                  in_stack_37._0_4_ = pVVar34->x;
                  in_stack_37._4_4_ = pVVar34->y;
                  in_stack_23 = pVVar34->z;
                  fVar38 = (float10)func_?();
                  _Var26.rgctx_data = (Il2CppRGCTXData *)&stack0x00000044;
                  ppIVar39 = (Il2CppType **)&stack0x00000030;
                  uStack18 = CONCAT44((float)fVar38,(float)uStack18);
                  iVar40 = func_?();
                  fVar6 = *(float *)(iVar40 + 8);
                  pVVar34 = (Vector3 *)func_?();
                  lhs.y = (float)pVVar8;
                  lhs.x = (float)puVar35;
                  lhs.z = fVar6;
                  auStack_1._0_4_ =
                       UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                                 (lhs,*pVVar34,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                    func_?();
                  }
                  method_00 = (MethodInfo *)&stack0xffffffa4;
                  a_03.y = (float)_Var26.rgctx_data;
                  a_03.x = (float)ppIVar39;
                  a_03.z = fVar9;
                  b_00.y = fStack_4;
                  b_00.x = VStack_3.z;
                  b_00.z = VStack_5.x;
                  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                      ((Vector3 *)method_00,a_03,b_00,(MethodInfo *)0x0);
                  uVar41 = pVVar8->x;
                  uVar42 = pVVar8->y;
                  fVar6 = pVVar8->z;
                  (this->fields).actualLookAt.x = (float)uVar41;
                  (this->fields).actualLookAt.y = (float)uVar42;
                  (this->fields).currentLookAt.x = (float)uVar41;
                  (this->fields).currentLookAt.y = (float)uVar42;
                  (this->fields).actualLookAt.z = fVar6;
                  (this->fields).currentLookAt.z = fVar6;
                  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                  VStack_3.y = (this->fields).actualLookAt.z;
                  pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                  if (pTVar10 != (Transform *)0x0) {
                    pVVar8 = (Vector3 *)&stack0x00000024;
                    pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_forward(pVVar8,pTVar10,(MethodInfo *)0x0);
                    dVar43 = (double)((in_stack_44 * in_stack_44 +
                                      VStack_5.y * VStack_5.y) -
                                     (in_stack_44 + in_stack_44) * VStack_5.y *
                                     (float)uStack18);
                    func_?();
                    pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                        ((Vector3 *)(auStack_1 + 4),*pVVar34,(float)dVar43,
                                         method_00);
                    a_02.y = (float)pIVar15;
                    a_02.x = (float)(undefined4)uVar11;
                    a_02.z = (float)pVVar8;
                    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                              Vector3_op_Subtraction(&VStack_5,a_02,*pVVar34,(MethodInfo *)0x0);
                    if (pTVar7 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                (pTVar7,*pVVar8,(MethodInfo *)0x0);
                      pMVar33 = (this->fields).avatarLocal;
                      if (pMVar33 != (MVAvatarLocal *)0x0) {
                        puVar27 = (undefined8 *)
                                  (*(code *)(pMVar33->klass->vtable).get_VelocityRelative.method)();
                        _uStack00000050 = *puVar27;
                        in_stack_19 = *(float *)(puVar27 + 1);
                        fVar38 = (float10)func_?();
                        VStack_3.x = (float)fVar38;
                        MVPlaymodeCameraBase::MVPlaymodeCameraBase_Shake
                                  ((MVPlaymodeCameraBase *)this,(float)fVar38,(MethodInfo *)0x0);
                        pTVar7 = (this->fields).lookAtTransform;
                        if (pTVar7 != (Transform *)0x0) {
                          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_position
                                              ((Vector3 *)&stack0x00000024,pTVar7,(MethodInfo *)0x0
                                              );
                          fVar9 = pVVar8->y;
                          fVar6 = pVVar8->z;
                          (this->fields).prevLookAtTransformPos.x = pVVar8->x;
                          (this->fields).prevLookAtTransformPos.y = fVar9;
                          (this->fields).prevLookAtTransformPos.z = fVar6;
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
  }
  func_?();
  pcVar45 = (code *)swi(3);
  (*pcVar45)();
  return;
}


/* PlaymodeCamera() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera__ctor
               (PlaymodeCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  (this->fields).distanceToAvatar = 5.0;
  (this->fields).height = 1.5;
  (this->fields).minimumY = -60.0;
  (this->fields).maximumY = 60.0;
  uStack_2 = 0;
  func_?(&uStack_2,0x3fc00000,0,0xbe4ccccd,0);
  (this->fields).shoulderOffset.x = (float)(undefined4)uStack_2;
  (this->fields).shoulderOffset.y = (float)uStack_2._4_4_;
  (this->fields).shoulderOffset.z = fStack_1;
  uStack_3 = 0;
  fStack_4 = 0.0;
  func_?(&uStack_3,0,0x3fc00000,0,0);
  (this->fields).avatarHeadOffset.x = (float)(undefined4)uStack_3;
  (this->fields).avatarHeadOffset.y = (float)uStack_3._4_4_;
  (this->fields).avatarHeadOffset.z = fStack_4;
  (this->fields).targetDistanceStrength = 2.0;
  (this->fields).followRotationSpeed = 2.0;
  uStack_5 = 0;
  fStack_6 = 0.0;
  func_?(&uStack_5,0,0x40200000,0,0);
  (this->fields).lookAtOffset.x = (float)(undefined4)uStack_5;
  (this->fields).lookAtOffset.y = (float)uStack_5._4_4_;
  (this->fields).lookAtOffset.z = fStack_6;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
  fVar8 = pVVar7->y;
  fVar9 = pVVar7->z;
  (this->fields).currentLookAt.x = pVVar7->x;
  (this->fields).currentLookAt.y = fVar8;
  (this->fields).currentLookAt.z = fVar9;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
  fVar8 = pVVar7->y;
  fVar9 = pVVar7->z;
  (this->fields).actualLookAt.x = pVVar7->x;
  (this->fields).actualLookAt.y = fVar8;
  (this->fields).actualLookAt.z = fVar9;
  (this->fields).distance = 2.0;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
  fVar8 = pVVar7->y;
  fVar9 = pVVar7->z;
  (this->fields).lookAtPos.x = pVVar7->x;
  (this->fields).lookAtPos.y = fVar8;
  (this->fields).lookAtPos.z = fVar9;
  (this->fields).mouseSensitivity = 0.25;
  (this->fields).lookAtScaleCorrection = 1.0;
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__PlaymodeCamera__SmoothLookAt);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  (this_00->fields)._._._._.m_CachedPtr = (void *)0x5;
  method_00 = TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>;
  this_01 = (Queue_1_SmoothPhysicsMovement_Package_ *)func_?();
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            (this_01,MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__)
  ;
  (this_00->fields).state = (int32_t)this_01;
  (this_00->fields).originalScale.x = 30.0;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields).smoothLookAt = (PlaymodeCamera_SmoothLookAt *)this_00;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
  fVar8 = pVVar7->y;
  fVar9 = pVVar7->z;
  (this->fields).prevLookAtTransformPos.x = pVVar7->x;
  (this->fields).prevLookAtTransformPos.y = fVar8;
  (this->fields).prevLookAtTransformPos.z = fVar9;
  MVPlaymodeCameraBase::MVPlaymodeCameraBase__ctor((MVPlaymodeCameraBase *)this,(MethodInfo *)0x0);
  return;
}

