
/* Void CameraCollision() */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera_CameraCollision
               (AirCraftCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  uStack_7._0_4_ = 0.0;
  uStack_7._4_4_ = 0.0;
  func_?(&stack0xffffff4c,0,0x48);
  VStack_8.z = 0.0;
  VStack_8.x = 0.0;
  VStack_8.y = 0.0;
  fStack_9 = 0.0;
  pTVar10 = (this->fields).lookAt;
  if ((pTVar10 != (Transform *)0x0) &&
     (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pTVar10,(MethodInfo *)0x0), pTVar10 != (Transform *)0x0)) {
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_12,pTVar10,(MethodInfo *)0x0);
    fStack_13 = pVVar11->x;
    fStack_14 = pVVar11->y;
    fVar15 = pVVar11->z;
    fStack_16 = fVar15;
    VStack_17._4_8_ = _fStack_54;
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar10 != (Transform *)0x0) {
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_12,pTVar10,(MethodInfo *)0x0);
      VStack_18.y = pVVar11->x;
      VStack_18.z = pVVar11->y;
      fVar19 = pVVar11->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a_00.z = fVar15;
      a_00.x = VStack_17.y;
      a_00.y = VStack_17.z;
      b_00.z = fVar19;
      b_00.x = VStack_18.y;
      b_00.y = VStack_18.z;
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         (&VStack_12,a_00,b_00,(MethodInfo *)0x0);
      uStack_2._0_4_ = pVVar11->x;
      uStack_2._4_4_ = pVVar11->y;
      fStack_1 = pVVar11->z;
      fVar20 = (float10)func_?();
      pTVar10 = (this->fields).lookAt;
      if ((pTVar10 != (Transform *)0x0) &&
         (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pTVar10,(MethodInfo *)0x0), pTVar10 != (Transform *)0x0))
      {
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_12,pTVar10,(MethodInfo *)0x0);
        fVar15 = pVVar11->x;
        fVar19 = pVVar11->y;
        fVar21 = pVVar11->z;
        func_?(&uStack_3);
        iVar22 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Default,(MethodInfo *)0x0);
        uStack_23 = uStack_3;
        VStack_12.x = fStack_4;
        VStack_12.y = fStack_5;
        VStack_12.z = fStack_6;
        VStack_17.y = (float)uStack_7;
        VStack_17.z = uStack_7._4_4_;
        VStack_18.z = (this->fields)._._.cameraRadius;
        this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                  func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        ray.m_Origin.y = VStack_12.x;
        ray.m_Origin.x = (float)uStack_23;
        ray.m_Origin.z = VStack_12.y;
        ray.m_Direction.x = VStack_12.z;
        ray.m_Direction.y = VStack_17.y;
        ray.m_Direction.z = VStack_17.z;
        bVar24 = CollisionDetection::CollisionDetection_MVSphereCast
                          (ray,VStack_18.z,(VoxelHit *)&stack0xffffff4c,(float)fVar20,
                           (HashSet_1_System_Int32_ *)this_00,1 << ((byte)iVar22 & 0x1f),
                           (MethodInfo *)0x0);
        if (bVar24 == 0) {
          return;
        }
        VStack_12.z = fVar19;
        VStack_12.y = fVar15;
        pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar10 != (Transform *)0x0) {
          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_18,pTVar10,(MethodInfo *)0x0);
          VStack_18.y = (this->fields).lookAtToCamDir.x;
          VStack_18.z = (this->fields).lookAtToCamDir.y;
          VStack_17.y = pVVar11->x;
          VStack_17.z = pVVar11->y;
          fVar15 = pVVar11->z;
          fVar19 = (this->fields).lookAtToCamDir.z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          a.z = fVar15;
          a.x = VStack_17.y;
          a.y = VStack_17.z;
          b.z = fVar19;
          b.x = VStack_18.y;
          b.y = VStack_18.z;
          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                             (&VStack_17,a,b,(MethodInfo *)0x0);
          point.z = fVar21;
          point.x = VStack_12.y;
          point.y = VStack_12.z;
          lineStart.z = fStack_16;
          lineStart.x = fStack_13;
          lineStart.y = fStack_14;
          bVar24 = MathFunctions::MathFunctions_DistancePointLine_1
                            (point,lineStart,*pVVar11,&fStack_9,&VStack_8,(MethodInfo *)0x0);
          if (bVar24 == 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
            message = (Object *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
          }
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (pTVar10 != (Transform *)0x0) {
            value.z = VStack_8.z;
            value.x = VStack_8.x;
            value.y = VStack_8.y;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar10,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera_Enter
               (AirCraftCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  _puStack_28 = 0;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,(float)camController,(MethodInfo *)0x0);
  pTVar1 = (this->fields).lookAt;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffc8,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar1,*pQVar2,(MethodInfo *)0x0);
    pTVar1 = (this->fields).lookAt;
    if (pTVar1 != (Transform *)0x0) {
      _puStack_28 = CONCAT44(pTVar1,&UNK_?);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pTVar1,(MethodInfo *)0x0);
      _puStack_28 = CONCAT44(this,&UNK_?);
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&puStack_4,this_00,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                   Transform_InverseTransformPoint
                             ((Vector3 *)&puStack_4,pTVar1,*pVVar3,(MethodInfo *)0x0);
          uVar5._0_4_ = pVVar3->y;
          fVar6 = pVVar3->z;
          (this->fields).initialLocalCamPosition.x = pVVar3->x;
          (this->fields).initialLocalCamPosition.y = (float)uVar5;
          (this->fields).initialLocalCamPosition.z = fVar6;
          pTVar1 = (this->fields).lookAt;
          if (pTVar1 != (Transform *)0x0) {
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
            uVar7._0_4_ = pVVar3->x;
            uVar7._4_4_ = pVVar3->y;
            fVar6 = pVVar3->z;
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 (&VStack_8,pTVar1,(MethodInfo *)0x0);
              uVar5._0_4_ = pVVar3->x;
              uVar5._4_4_ = pVVar3->y;
              fVar9 = pVVar3->z;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              a.z = fVar6;
              a.x = (float)uVar7;
              a.y = SUB84(uVar7,4);
              b.z = fVar9;
              b.x = (float)(int)uVar5;
              b.y = (float)(int)((ulonglong)uVar5 >> 0x20);
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                 (&VStack_8,a,b,(MethodInfo *)0x0);
              puStack_10 = pVVar3->x;
              unique0x0000a404 = pVVar3->y;
              fVar11 = (float10)func_?();
              (this->fields).baseDistanceFromLookAt = (float)fVar11;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera_UpdateCamera
               (AirCraftCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).lookAt;
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                         ((Vector3 *)&stack0xffffffdc,pTVar1,(this->fields).initialLocalCamPosition,
                          (MethodInfo *)0x0);
      fVar3 = pVVar2->z;
      pTVar1 = (this->fields).lookAt;
      if (pTVar1 != (Transform *)0x0) {
        stack0xffffffe4 = (float)&UNK_?;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pTVar1,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = (Vector3 *)&stack0xffffffdc;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (pVVar2,pTVar1,(MethodInfo *)0x0);
          uVar5._0_4_ = pVVar4->x;
          uVar5._4_4_ = pVVar4->y;
          uVar6._0_4_ = pVVar4->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          stack0xffffffe4 = (float)&stack0xffffffdc;
          a_01.y = (float)pTVar1;
          a_01.x = (float)pVVar2;
          a_01.z = fVar3;
          b.z = (float)uVar6;
          b.x = (float)(int)uVar5;
          b.y = (float)(int)((ulonglong)uVar5 >> 0x20);
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                             ((Vector3 *)&stack0xffffffdc,a_01,b,(MethodInfo *)0x0);
          pVVar2 = &(this->fields).lookAtToCamDir;
          uVar6._0_4_ = pVVar4->y;
          fVar3 = pVVar4->z;
          pVVar2->x = pVVar4->x;
          pVVar2->y = (float)uVar6;
          (this->fields).lookAtToCamDir.z = fVar3;
          func_?();
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this,(MethodInfo *)0x0);
          pTVar1 = (this->fields).lookAt;
          if (pTVar1 != (Transform *)0x0) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffe8,pTVar1,(MethodInfo *)0x0);
            fVar3 = (this->fields).baseDistanceFromLookAt;
            puStack_7 = (undefined *)pVVar4->x;
            unique0x0000a404 = pVVar4->y;
            fVar8 = pVVar4->z;
            uVar6._0_4_ = pVVar2->x;
            uVar6._4_4_ = pVVar2->y;
            fVar9 = (this->fields).lookAtToCamDir.z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            a.z = fVar9;
            a.x = (float)(int)uVar6;
            a.y = (float)(int)((ulonglong)uVar6 >> 0x20);
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                               ((Vector3 *)&stack0xffffffe8,a,fVar3,(MethodInfo *)0x0);
            a_00.z = fVar8;
            a_00.x = (float)puStack_7;
            a_00.y = stack0xffffffe4;
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               ((Vector3 *)&stack0xffffffdc,a_00,*pVVar2,(MethodInfo *)0x0);
            if (this_00 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (this_00,*pVVar2,(MethodInfo *)0x0);
              AirCraftCamera_CameraCollision(this,(MethodInfo *)0x0);
              MVPlaymodeCameraBase::MVPlaymodeCameraBase_UpdateCamera
                        ((MVPlaymodeCameraBase *)this,camController,targetTransform,
                         (MethodInfo *)0x0);
              return;
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


/* Void UpdateCameraPosition() */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera_UpdateCameraPosition
               (AirCraftCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).lookAt;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
    d = (this->fields).baseDistanceFromLookAt;
    fVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    fVar4 = (this->fields).lookAtToCamDir.z;
    uVar5._0_4_ = (this->fields).lookAtToCamDir.x;
    uVar5._4_4_ = (this->fields).lookAtToCamDir.y;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    fVar6 = 0.0;
    a.z = fVar4;
    a.x = (float)uVar5;
    a.y = SUB84(uVar5,4);
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffec,a,d,(MethodInfo *)0x0);
    a_00.y = fVar2;
    a_00.x = fVar6;
    a_00.z = fVar3;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffe0,a_00,*pVVar1,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,*pVVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* AirCraftCamera() */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera__ctor
               (AirCraftCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).initialLocalCamPosition.x = pVVar1->x;
  (this->fields).initialLocalCamPosition.y = fVar3;
  (this->fields).initialLocalCamPosition.z = fVar4;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).lookAtToCamDir.x = pVVar1->x;
  (this->fields).lookAtToCamDir.y = fVar3;
  (this->fields).lookAtToCamDir.z = fVar4;
  MVPlaymodeCameraBase::MVPlaymodeCameraBase__ctor((MVPlaymodeCameraBase *)this,(MethodInfo *)0x0);
  return;
}

