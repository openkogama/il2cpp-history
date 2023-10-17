
/* Void CameraCollision() */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera_CameraCollision
               (AirCraftCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_Not_within_line_segment);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff5c,0,0x48);
  pTVar1 = (this->fields).lookAt;
  if ((pTVar1 != (Transform *)0x0) &&
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar1,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fStack_5 = pVVar2->z;
    fStack_6 = (float)(undefined4)uStack_4;
    fStack_7 = (float)uStack_4._4_4_;
    fStack_8 = fStack_5;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_3,pTVar1,(MethodInfo *)0x0);
      VStack_9.x = pVVar2->x;
      VStack_9.y = pVVar2->y;
      VStack_3.z = fStack_8 - pVVar2->z;
      VStack_3.y = fStack_7 - VStack_9.y;
      VStack_3.x = fStack_6 - VStack_9.x;
      VStack_9.z = VStack_3.z;
      fVar10 = (float10)func_?();
      pTVar1 = (this->fields).lookAt;
      if ((pTVar1 != (Transform *)0x0) &&
         (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar1,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_3,pTVar1,(MethodInfo *)0x0);
        fVar11 = pVVar2->x;
        fVar12 = pVVar2->y;
        fVar13 = pVVar2->z;
        RStack_14.m_Direction.y = 0.0;
        RStack_14.m_Direction.z = 0.0;
        RStack_14.m_Origin.x = 0.0;
        RStack_14.m_Origin.y = 0.0;
        RStack_14.m_Origin.z = 0.0;
        RStack_14.m_Direction.x = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
                  (&RStack_14,*pVVar2,(this->fields).lookAtToCamDir,(MethodInfo *)0x0);
        iVar15 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Default,(MethodInfo *)0x0);
        fStack_8 = (this->fields)._._.cameraRadius;
        this_00 = (HashSet_1_UnityEngine_Vector3_ *)func_?();
        if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
          HashSet_1_UnityEngine_Vector3___ctor
                    (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
          ray.m_Origin.y = RStack_14.m_Origin.y;
          ray.m_Origin.x = RStack_14.m_Origin.x;
          ray.m_Origin.z = RStack_14.m_Origin.z;
          ray.m_Direction.x = RStack_14.m_Direction.x;
          ray.m_Direction.y = RStack_14.m_Direction.y;
          ray.m_Direction.z = RStack_14.m_Direction.z;
          bVar16 = CollisionDetection::CollisionDetection_MVSphereCast
                            (ray,fStack_8,(VoxelHit *)&stack0xffffff5c,(float)fVar10,
                             (HashSet_1_System_Int32_ *)this_00,1 << ((byte)iVar15 & 0x1f),
                             (MethodInfo *)0x0);
          if (bVar16 == 0) {
            return;
          }
          VStack_17.x = 0.0;
          VStack_17.y = 0.0;
          VStack_17.z = 0.0;
          fStack_18 = 0.0;
          fStack_7 = fVar11;
          fStack_8 = fVar12;
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (&VStack_9,pTVar1,(MethodInfo *)0x0);
            VStack_3.x = pVVar2->x;
            VStack_3.y = pVVar2->y;
            VStack_9.x = (this->fields).lookAtToCamDir.x;
            VStack_9.y = (this->fields).lookAtToCamDir.y;
            VStack_9.z = (this->fields).lookAtToCamDir.z;
            VStack_3.z = VStack_9.z + pVVar2->z;
            point.y = fStack_8;
            point.x = fStack_7;
            point.z = fVar13;
            lineStart.z = fStack_5;
            lineStart.x = (float)(undefined4)uStack_4;
            lineStart.y = (float)uStack_4._4_4_;
            lineEnd.y = VStack_9.y + VStack_3.y;
            lineEnd.x = VStack_9.x + VStack_3.x;
            lineEnd.z = VStack_3.z;
            bVar16 = MathFunctions::MathFunctions_DistancePointLine_1
                              (point,lineStart,lineEnd,&fStack_18,&VStack_17,(MethodInfo *)0x0);
            if (bVar16 == 0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
              message = (Object *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0)
              ;
            }
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              value.z = VStack_17.z;
              value.x = VStack_17.x;
              value.y = VStack_17.y;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar1,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera_Enter
               (AirCraftCamera *this,MVCameraController *camController,MethodInfo *method)

{
  this_00 = this;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,(ExceptionArgument__Enum)camController,(MethodInfo *)0x0);
  pTVar1 = (this->fields).lookAt;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar1,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
               (MethodInfo *)0x0);
    pTVar1 = (this->fields).lookAt;
    if (pTVar1 != (Transform *)0x0) {
      stack0xffffffe8 = (float)pTVar1;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pTVar1,(MethodInfo *)0x0);
      stack0xffffffe8 = (float)this;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&puStack_3,this_01,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          uVar4 = pVVar2->x;
          uVar5 = pVVar2->y;
          this = (AirCraftCamera *)pVVar2->z;
          fVar6 = (float)uVar5;
          position.x = (float)uVar4;
          position = (Vector3)CONCAT84(uVar7,position.x);
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_InverseTransformPoint
                              ((Vector3 *)&puStack_3,pTVar1,position,(MethodInfo *)0x0);
          fVar8 = pVVar2->y;
          fVar9 = pVVar2->z;
          (this_00->fields).initialLocalCamPosition.x = pVVar2->x;
          (this_00->fields).initialLocalCamPosition.y = fVar8;
          (this_00->fields).initialLocalCamPosition.z = fVar9;
          pTVar1 = (this_00->fields).lookAt;
          if (pTVar1 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&puStack_3,pTVar1,(MethodInfo *)0x0);
            uVar10 = pVVar2->x;
            uVar11 = pVVar2->y;
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_12,pTVar1,(MethodInfo *)0x0);
              uVar13 = pVVar2->x;
              uVar14 = pVVar2->y;
              unique0x100000f4 = (float)uVar11 - (float)uVar14;
              puStack_3 = (undefined *)((float)uVar10 - (float)uVar13);
              fVar15 = (float10)func_?();
              (this_00->fields).baseDistanceFromLookAt = (float)fVar15;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera_UpdateCamera
               (AirCraftCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  pTVar1 = (this->fields).lookAt;
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                         ((Vector3 *)&puStack_3,pTVar1,(this->fields).initialLocalCamPosition,
                          (MethodInfo *)0x0);
      fVar4 = pVVar2->z;
      pTVar1 = (this->fields).lookAt;
      if (pTVar1 != (Transform *)0x0) {
        stack0xffffffe8 = (float)pTVar1;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar1,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          fVar5 = 0.0;
          stack0xffffffe8 = (float)&UNK_?;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_6,pTVar1,(MethodInfo *)0x0);
          puStack_3 = (undefined *)pVVar2->x;
          unique0x0000a404 = pVVar2->y;
          fVar7 = pVVar2->z;
          (this->fields).lookAtToCamDir.x = (float)pTVar1 - (float)puStack_3;
          (this->fields).lookAtToCamDir.y = fVar5 - unique0x0000a404;
          (this->fields).lookAtToCamDir.z = fVar4 - fVar7;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                    (&(this->fields).lookAtToCamDir,(MethodInfo *)0x0);
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          pTVar1 = (this->fields).lookAt;
          if (pTVar1 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (&VStack_6,pTVar1,(MethodInfo *)0x0);
            uVar8 = pVVar2->x;
            uVar9 = pVVar2->y;
            uVar10 = (this->fields).lookAtToCamDir.x;
            uVar11 = (this->fields).lookAtToCamDir.y;
            fVar4 = (this->fields).baseDistanceFromLookAt;
            puStack_3 = (undefined *)((float)uVar8 + (float)uVar10 * fVar4);
            fVar7 = (float)uVar9 + (float)uVar11 * fVar4;
            stack0xffffffe8 = fVar7;
            if (this_00 != (Transform *)0x0) {
              value.y = fVar7;
              value.x = (float)puStack_3;
              value.z = pVVar2->z + (this->fields).lookAtToCamDir.z * fVar4;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (this_00,value,(MethodInfo *)0x0);
              AirCraftCamera_CameraCollision(this,(MethodInfo *)0x0);
              MVPlaymodeCameraBase::MVPlaymodeCameraBase_UpdateCamera
                        ((MVPlaymodeCameraBase *)this,(MVCameraController *)&UNK_?,
                         (ProtectedTransform *)this_00,(MethodInfo *)0x0);
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


/* Void UpdateCameraPosition() */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera_UpdateCameraPosition
               (AirCraftCamera *this,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).lookAt;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uVar3 = pVVar1->x;
    uVar4 = pVVar1->y;
    uVar5 = (this->fields).lookAtToCamDir.x;
    uVar6 = (this->fields).lookAtToCamDir.y;
    fVar7 = (this->fields).baseDistanceFromLookAt;
    VStack_2.x = (float)uVar3 + (float)uVar5 * fVar7;
    VStack_2.y = (float)uVar4 + (float)uVar6 * fVar7;
    VStack_2.z = pVVar1->z + (this->fields).lookAtToCamDir.z * fVar7;
    if (this_01 != (Transform *)0x0) {
      value.y = VStack_2.y;
      value.x = VStack_2.x;
      value.z = VStack_2.z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* AirCraftCamera() */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera__ctor
               (AirCraftCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).initialLocalCamPosition.x = (pVVar1->zeroVector).x;
  (this->fields).initialLocalCamPosition.y = fVar2;
  (this->fields).initialLocalCamPosition.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).lookAtToCamDir.x = (pVVar1->zeroVector).x;
  (this->fields).lookAtToCamDir.y = fVar2;
  (this->fields).lookAtToCamDir.z = fVar3;
  MVPlaymodeCameraBase::MVPlaymodeCameraBase__ctor((MVPlaymodeCameraBase *)this,(MethodInfo *)0x0);
  return;
}

