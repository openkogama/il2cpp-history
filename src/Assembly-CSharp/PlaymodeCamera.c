
/* Void Awake() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_Awake
               (PlaymodeCamera *this,MethodInfo *method)

{
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Mathf);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_Not_within_line_segment);
    cRam_? = '\x01';
  }
  func_?(&uStack_1,0,0x48);
  pTVar2 = (this->fields).lookAtTransform;
  if (pTVar2 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xffffff40,pTVar2,(MethodInfo *)0x0);
    puStack_3 = (undefined *)(this->fields).avatarHeadOffset.z;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffff14,pTVar2,(MethodInfo *)0x0);
      puStack_3 = (undefined *)(pVVar4->z - in_stack_5);
      puVar6 = puStack_3;
      puVar7 = puStack_3;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                ((Vector3 *)&stack0xffffff34,(MethodInfo *)0x0);
      puStack_3 = puVar6;
      uStack_8 = (ulonglong)in_stack_9;
      fStack_10 = 0.0;
      puStack_11 = puVar7;
      puVar12 = (undefined8 *)func_?(&uStack_1,&puStack_3,0);
      uVar13 = *puVar12;
      uVar14 = *(undefined4 *)(puVar12 + 1);
      iVar15 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                         (StringLiteral_Default,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      fVar16 = (float)(1 << ((byte)iVar15 & 0x1f));
      ignoreWoIds = (this->fields).ignoreAvatarId;
      dVar17 = (double)(in_stack_18 * in_stack_18 +
                        in_stack_19 * in_stack_19 +
                       in_stack_20 * in_stack_20);
      if (dVar17 < 0.0) {
        func_?();
      }
      else {
        dVar17 = SQRT(dVar17);
      }
      uStack_21 = (undefined4)uVar13;
      uStack_22 = (undefined4)((ulonglong)uVar13 >> 0x20);
      ray.m_Origin.y = (float)uStack_21;
      ray.m_Origin.x = fStack_23;
      ray.m_Origin.z = (float)uStack_22;
      ray.m_Direction.x = (float)uVar14;
      ray.m_Direction.y = (float)uStack_1;
      ray.m_Direction.z = fStack_24;
      bVar25 = CollisionDetection::CollisionDetection_MVSphereCast
                        (ray,(this->fields)._._.cameraRadius,(VoxelHit *)&stack0xffffffd8,
                         (float)dVar17,ignoreWoIds,(int32_t)fVar16,method_00);
      if ((TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= in_stack_26) &&
         (bVar25 != 0)) {
        fStack_10 = 0.0;
        uStack_8 = 0;
        uStack_27 = 0;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_28,pTStack_29,(MethodInfo *)0x0);
        uVar30 = pVVar4->x;
        uVar31 = pVVar4->y;
        point.y = fStack_23;
        point.x = (float)in_stack_9;
        point.z = in_stack_32;
        lineStart.y = unaff_retaddr;
        lineStart.x = unaff_EBP;
        lineStart.z = (float)pTStack_29;
        lineEnd.y = (float)uVar31 + in_stack_33;
        lineEnd.x = (float)uVar30 + in_stack_34;
        lineEnd.z = pVVar4->z + (float)method;
        bVar25 = MathFunctions::MathFunctions_DistancePointLine_1
                          (point,lineStart,lineEnd,(float *)&uStack_8,&VStack_35,(MethodInfo *)0x0)
        ;
        if (bVar25 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
          VStack_35.y = in_stack_36;
          pOVar37 = (Object *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar37,(MethodInfo *)0x0);
          uStack_8 = CONCAT44(uStack_8._4_4_,(this->fields).distance);
          pOVar37 = (Object *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar37,(MethodInfo *)0x0);
        }
        fVar16 = (this->fields)._._.cameraRadius;
        if (fVar16 <= fStack_38) {
          fVar16 = 0.0;
        }
        else {
          dVar17 = (double)(fVar16 * fVar16 - fStack_38 * fStack_38);
          if (dVar17 < 0.0) {
            func_?();
            fVar16 = (float)dVar17;
          }
          else {
            fVar16 = (float)SQRT(dVar17);
          }
        }
        fStack_24 = (this->fields).distance;
        VStack_28.y = unaff_retaddr - in_stack_39 * fVar16;
        value.y = unaff_EBP - in_stack_40 * fVar16;
        value.x = fStack_41 - in_stack_32 * fVar16;
        value.z = VStack_28.y;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTStack_42,value,(MethodInfo *)0x0);
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0x00000030,pTStack_42,(MethodInfo *)0x0);
        uStack_8._0_4_ = pVVar4->x;
        uStack_8._4_4_ = pVVar4->y;
        fStack_10 = fStack_41 - pVVar4->z;
        fVar43 = (float10)func_?();
        uVar44 = (this->fields).currentLookAt.x;
        uVar45 = (this->fields).currentLookAt.y;
        fVar16 = (this->fields).currentLookAt.z;
        (this->fields).distance = (float)fVar43;
        VStack_35.y = (float)fVar43 / VStack_35.y;
        fStack_41 = (fVar16 - fStack_41) * VStack_35.y + fStack_41;
        fStack_46 = ((float)uVar44 - fStack_46) * VStack_35.y + fStack_46;
        VStack_28.x = ((float)uVar45 - VStack_28.x) * VStack_35.y + VStack_28.x;
        (this->fields).currentLookAt.x = fStack_46;
        (this->fields).currentLookAt.y = VStack_28.x;
        (this->fields).actualLookAt.x = fStack_46;
        (this->fields).actualLookAt.y = VStack_28.x;
        (this->fields).currentLookAt.z = fStack_41;
        (this->fields).actualLookAt.z = fStack_41;
      }
      return;
    }
  }
  func_?();
  pcVar47 = (code *)swi(3);
  (*pcVar47)();
  return;
}


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_Enter
               (PlaymodeCamera *this,MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    ppTVar3 = &(this->fields).lookAtTransform;
    *ppTVar3 = pTVar2;
    func_?(ppTVar3,pTVar2);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_02 != (MainCameraManager *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_02,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)(auStack_5 + 4),pTVar2,(MethodInfo *)0x0);
        uStack_6._0_4_ = pVVar4->x;
        uStack_6._4_4_ = pVVar4->y;
        fVar7 = pVVar4->z;
        (this->fields).currentLookAt.x = (float)(undefined4)uStack_6;
        (this->fields).currentLookAt.y = uStack_6._4_4_;
        (this->fields).currentLookAt.z = fVar7;
        pTStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
        if (pTStack_8 != (Transform *)0x0) {
          value.z = fVar7;
          value.x = (float)(undefined4)uStack_6;
          value.y = uStack_6._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTStack_8,value,(MethodInfo *)0x0);
          pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)auStack_5,pTVar2,(MethodInfo *)0x0);
          fStack_10 = pQVar9->x;
          fStack_11 = pQVar9->y;
          uStack_6._0_4_ = pQVar9->z;
          uStack_6._4_4_ = pQVar9->w;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (pTStack_8,*pQVar9,(MethodInfo *)0x0);
          if (*ppTVar3 != (Transform *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)*ppTVar3,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)(auStack_5 + 4),pTVar2,(MethodInfo *)0x0);
              this_01 = (this->fields).targetRot;
              fVar12 = pVVar4->y;
              fVar7 = pVVar4->z;
              (this->fields).prevLookAtTransformPos.x = pVVar4->x;
              (this->fields).prevLookAtTransformPos.y = fVar12;
              (this->fields).prevLookAtTransformPos.z = fVar7;
              if (this_01 != (TargetRotation *)0x0) {
                q.y = fStack_11;
                q.x = fStack_10;
                q.z = (float)(undefined4)uStack_6;
                q.w = uStack_6._4_4_;
                TargetRotation::TargetRotation_SetTargetRotation_2(this_01,q,(MethodInfo *)0x0);
                (this->fields).distance = (this->fields).distanceToAvatar;
                this_03 = (HashSet_1_System_Int32_ *)
                          func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
                System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                HashSet_1_System_Int32___ctor
                          (this_03,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__
                          );
                pMVar1 = (this->fields).avatarLocal;
                if ((pMVar1 != (MVAvatarLocal *)0x0) && (this_03 != (HashSet_1_System_Int32_ *)0x0))
                {
                  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                  HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                            (this_03,(pMVar1->fields)._._._._.id,
                             MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
                  ppHVar13 = &(this->fields).ignoreAvatarId;
                  *ppHVar13 = this_03;
                  func_?(ppHVar13,this_03);
                  return;
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


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_Initialize
               (PlaymodeCamera *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarCameraDistTransparency);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields).avatarLocal;
  *ppMVar1 = avatarLocal;
  func_?(ppMVar1,avatarLocal);
  camMoveTowardsOffset = (this->fields).avatarHeadOffset;
  this_00 = (AvatarCameraDistTransparency *)func_?(TypeInfo__AvatarCameraDistTransparency);
  AvatarCameraDistTransparency::AvatarCameraDistTransparency__ctor
            (this_00,camMoveTowardsOffset,4.0,1.0,(MethodInfo *)0x0);
  ppAVar2 = &(this->fields).avatarCameraDistTransparency;
  *ppAVar2 = this_00;
  func_?(ppAVar2,this_00);
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_Reset
               (PlaymodeCamera *this,MethodInfo *method)

{
  pTVar1 = (this->fields).lookAtTransform;
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
    fVar3 = pQVar2->x;
    fVar4 = pQVar2->y;
    fVar5 = pQVar2->z;
    fVar6 = pQVar2->w;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      fVar7 = 0.0;
      value.y = fVar4;
      value.x = fVar3;
      value.z = fVar5;
      value.w = fVar6;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar1,value,(MethodInfo *)0x0);
      this_00 = (this->fields).targetRot;
      if (this_00 != (TargetRotation *)0x0) {
        q.y = fVar5;
        q.x = fVar4;
        q.z = fVar6;
        q.w = fVar7;
        TargetRotation::TargetRotation_SetTargetRotation_2(this_00,q,(MethodInfo *)0x0);
        pTVar1 = (this->fields).lookAtTransform;
        if (pTVar1 != (Transform *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
          uVar9 = pVVar8->x;
          uVar10 = pVVar8->y;
          fVar3 = pVVar8->z;
          uVar11 = (this->fields).avatarHeadOffset.x;
          uVar12 = (this->fields).avatarHeadOffset.y;
          fVar4 = (this->fields).avatarHeadOffset.z;
          (this->fields).currentLookAt.x = (float)uVar9 + (float)uVar11;
          (this->fields).currentLookAt.y = (float)uVar12 + (float)uVar10;
          (this->fields).currentLookAt.z = fVar4 + fVar3;
          pPVar13 = (this->fields).smoothLookAt;
          if (pPVar13 != (PlaymodeCamera_SmoothLookAt *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            this_01 = (Queue_1_GameCoinStringRenderer_PriceTagString_ *)
                      (pPVar13->fields).prevVelocities;
            if (this_01 != (Queue_1_GameCoinStringRenderer_PriceTagString_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::
              Queue`1[GameCoinStringRenderer+PriceTagString]::
              Queue_1_GameCoinStringRenderer_PriceTagString__Clear
                        (this_01,
                         MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Clear__
                        );
              return;
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


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_UpdateCamera
               (PlaymodeCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  lVar1 = (ulonglong)(uint)(this->fields).height << 0x20;
  (this->fields).avatarHeadOffset.x = (float)(int)lVar1;
  (this->fields).avatarHeadOffset.y = (float)(int)((ulonglong)lVar1 >> 0x20);
  (this->fields).avatarHeadOffset.z = 0.0;
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_02 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffffa0,this_02,(MethodInfo *)0x0);
    this_00 = (this->fields).targetRot;
    if (this_00 != (TargetRotation *)0x0) {
      pQVar2 = TargetRotation::TargetRotation_GetLerpRotation
                          ((Quaternion *)&stack0xffffffb0,this_00,*pQVar2,(MethodInfo *)0x0);
      fVar3 = pQVar2->x;
      fVar4 = pQVar2->y;
      fVar5 = pQVar2->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_02,*pQVar2,(MethodInfo *)0x0);
      fVar6 = (this->fields).distance;
      fVar7 = (this->fields).targetDistanceStrength;
      fVar8 = (this->fields).distanceToAvatar;
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar9 = fVar9 * fVar7;
      if (fVar9 < 0.0) {
        fVar9 = 0.0;
      }
      else if (_UNK_? < fVar9) {
        fVar9 = _UNK_?;
      }
      (this->fields).distance = (fVar8 - fVar6) * fVar9 + fVar6;
      PlaymodeCamera_UpdatePosition(this,(MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).CameraCollision.method)();
      fVar10 = (float)((uint)((this->fields).actualLookAt.y - (this->fields).lookAtPos.y) &
                      _UNK_?);
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffb4,this_02,(MethodInfo *)0x0);
      uVar12 = pVVar11->x;
      uVar13 = pVVar11->y;
      fVar6 = pVVar11->z;
      uVar14 = (this->fields).currentLookAt.x;
      uVar15 = (this->fields).currentLookAt.y;
      uVar16 = pVVar11->x;
      uVar17 = pVVar11->y;
      uVar18 = (this->fields).lookAtPos.x;
      uVar19 = (this->fields).lookAtPos.y;
      uVar20 = pVVar11->x;
      uVar21 = pVVar11->y;
      fromDirection.y = (float)uVar15 - (float)uVar17;
      fromDirection.x = (float)uVar14 - (float)uVar16;
      fromDirection.z = (this->fields).currentLookAt.z - pVVar11->z;
      toDirection.y = (float)uVar19 - (float)uVar21;
      toDirection.x = (float)uVar18 - (float)uVar20;
      toDirection.z = (this->fields).lookAtPos.z - pVVar11->z;
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
                          ((Quaternion *)&stack0xffffffb0,fromDirection,toDirection,
                           (MethodInfo *)0x0);
      fVar7 = pQVar2->x;
      fVar8 = pQVar2->y;
      fVar9 = pQVar2->z;
      fVar22 = pQVar2->w;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      pQVar23 = TypeInfo__UnityEngine__Quaternion->static_fields;
      fVar24 = (pQVar23->identityQuaternion).x;
      fVar25 = (pQVar23->identityQuaternion).y;
      fVar26 = (pQVar23->identityQuaternion).z;
      fVar27 = (pQVar23->identityQuaternion).w;
      fVar28 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      a.y = fVar25;
      a.x = fVar24;
      a.z = fVar26;
      a.w = fVar27;
      b.y = fVar8;
      b.x = fVar7;
      b.z = fVar9;
      b.w = fVar22;
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                          ((Quaternion *)&stack0xffffffb0,a,b,
                           (this->fields).followRotationSpeed * fVar28 * fVar10 * fVar10,
                           (MethodInfo *)0x0);
      fVar7 = pQVar2->x;
      fVar8 = pQVar2->y;
      fVar9 = pQVar2->z;
      fVar22 = pQVar2->w;
      uVar29 = (this->fields)._.shakeOffset.x;
      uVar30 = (this->fields)._.shakeOffset.y;
      if (targetTransform != (ProtectedTransform *)0x0) {
        value.z = fVar6 + (this->fields)._.shakeOffset.z;
        value.x = (float)uVar12 + (float)uVar29;
        value.y = (float)uVar13 + (float)uVar30;
        ProtectedTransform::ProtectedTransform_set_position(targetTransform,value,(MethodInfo *)0x0)
        ;
        value_00.y = (fVar4 * fVar22 + fVar8 * 3.2234717e-29 + fVar3 * fVar9) - fVar5 * fVar7;
        value_00.x = (fVar3 * fVar22 + fVar7 * 3.2234717e-29 + fVar5 * fVar8) - fVar4 * fVar9;
        value_00.z = (fVar5 * fVar22 + fVar9 * 3.2234717e-29 + fVar4 * fVar7) - fVar3 * fVar8;
        value_00.w = ((fVar22 * 3.2234717e-29 - fVar3 * fVar7) - fVar4 * fVar8) -
                     fVar5 * fVar9;
        ProtectedTransform::ProtectedTransform_set_rotation
                  (targetTransform,value_00,(MethodInfo *)0x0);
        this_01 = (this->fields).avatarCameraDistTransparency;
        if (this_01 != (AvatarCameraDistTransparency *)0x0) {
          AvatarCameraDistTransparency::AvatarCameraDistTransparency_Update
                    (this_01,(this->fields).avatarLocal,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void UpdatePosition() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_UpdatePosition
               (PlaymodeCamera *this,MethodInfo *method)

{
  _fStack_8 = CONCAT44(unaff_EBP,fStack_1);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pTVar2 = this_00;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)auStack_4,this_00,(MethodInfo *)0x0);
    uVar5 = pVVar3->x;
    uVar6 = pVVar3->y;
    fStack_7 = pVVar3->z;
    pTVar8 = (this->fields).lookAtTransform;
    fStack_9 = (float)uVar5;
    fStack_10 = (float)uVar6;
    if (pTVar8 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)auStack_11,pTVar8,(MethodInfo *)0x0);
      auStack_12._0_4_ = pVVar3->x;
      auStack_12._4_4_ = pVVar3->y;
      fStack_13 = pVVar3->z;
      uVar14 = (this->fields).prevLookAtTransformPos.x;
      uVar15 = (this->fields).prevLookAtTransformPos.y;
      fStack_10 = (this->fields).prevLookAtTransformPos.z;
      fVar16 = fStack_17 + ((float)auStack_12._4_4_ - (float)uVar15);
      fVar18 = (float)auStack_4._0_4_ + (fStack_13 - fStack_10);
      fVar19 = (float)((ulonglong)_fStack_8 >> 0x20);
      _fStack_8 = CONCAT44(fVar19,fVar18);
      value_00.y = fVar16;
      value_00.x = fStack_20 + ((float)auStack_12._0_4_ - (float)uVar14);
      value_00.z = fVar18;
      fStack_21 = (float)uVar14;
      fStack_9 = (float)uVar15;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,value_00,(MethodInfo *)0x0);
      fVar22 = (this->fields).distanceToAvatar;
      fStack_23 = 0.0;
      _fStack_8 = 0;
      fVar24 = 0.0;
      if (fVar22 != 0.0) {
        fVar24 = (this->fields).distance / fVar22;
      }
      uStack_25 = CONCAT44((this->fields).lookAtScaleCorrection * fVar24,(undefined4)uStack_25);
      if (cRam_? == '\0') {
        uStack_26._0_4_ = (float)&TypeInfo__UnityEngine__Quaternion;
        func_?();
        cRam_? = '\x01';
      }
      uStack_26 = uStack_26 & 0xffffffff00000000;
      pQVar27 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0x00000014,this_00,(MethodInfo *)0x0);
      uStack_26 = uStack_26 & 0xffffffff00000000;
      in_stack_28 = pQVar27->x;
      in_stack_29 = pQVar27->y;
      in_stack_30 = pQVar27->z;
      in_stack_31 = pQVar27->w;
      iVar32 = func_?(&stack0x00000010,&stack0x00000020);
      fStack_33 = 0.0;
      euler.y = *(float *)(iVar32 + 4) * _UNK_?;
      euler.x = (float)uStack_26;
      euler.z = 0.0;
      pQVar27 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad((Quaternion *)auStack_12,euler,(MethodInfo *)0x0);
      fStack_9 = pQVar27->x;
      fStack_10 = pQVar27->y;
      fStack_7 = pQVar27->z;
      fStack_20 = pQVar27->w;
      pTVar8 = (this->fields).lookAtTransform;
      if (pTVar8 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)((int)register0x00000010 + -0x6c),pTVar8,(MethodInfo *)0x0)
        ;
        uVar34._0_4_ = pVVar3->x;
        uVar34._4_4_ = pVVar3->y;
        fVar22 = pVVar3->z;
        uStack_26._0_4_ = (this->fields).avatarHeadOffset.x;
        uStack_26._4_4_ = (this->fields).avatarHeadOffset.y;
        VStack_35.y = (this->fields).avatarHeadOffset.z;
        uStack_25._0_4_ = (this->fields).currentLookAtOffset.x;
        uStack_25._4_4_ = (this->fields).currentLookAtOffset.y;
        fStack_33 = VStack_35.y + (this->fields).currentLookAtOffset.z * (float)pTVar2;
        rotation.y = fStack_17;
        rotation.x = fStack_20;
        rotation.z = (float)auStack_4._0_4_;
        rotation.w = (float)auStack_4._4_4_;
        point.y = uStack_26._4_4_ + uStack_25._4_4_ * (float)pTVar2;
        point.x = (float)uStack_26 + (float)(undefined4)uStack_25 * (float)pTVar2;
        point.z = fStack_33;
        auStack_12 = (undefined1  [8])uVar34;
        fStack_13 = fVar22;
        fStack_21 = (float)uVar34;
        fStack_9 = uVar34._4_4_;
        fStack_10 = fVar22;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&stack0xffffff90,rotation,point,(MethodInfo *)0x0);
        uVar36 = pVVar3->x;
        uVar37 = pVVar3->y;
        fStack_7 = pVVar3->z;
        fVar24 = fStack_7 + (float)auStack_4._4_4_;
        auStack_4._4_4_ = fVar24;
        pMVar38 = (this->fields).avatarLocal;
        (this->fields).lookAtPos.x = (float)uVar36 + fStack_17;
        (this->fields).lookAtPos.y = (float)uVar37 + (float)auStack_4._0_4_;
        (this->fields).currentLookAt.x = (float)uVar36 + fStack_17;
        (this->fields).currentLookAt.y = (float)uVar37 + (float)auStack_4._0_4_;
        (this->fields).lookAtPos.z = fVar24;
        (this->fields).currentLookAt.z = fVar24;
        uStack_26._4_4_ = (float)(this->fields).smoothLookAt;
        fStack_9 = (float)uVar36;
        fStack_10 = (float)uVar37;
        if (pMVar38 != (MVAvatarLocal *)0x0) {
          pVVar3 = (Vector3 *)
                    (*(code *)(pMVar38->klass->vtable).get_VelocityRelative.method)
                              (&fStack_17,pMVar38,
                               (pMVar38->klass->vtable).get_VelocityAbsolute.methodPtr,fVar16,fVar18
                               ,fVar22,uVar34);
          if ((PlaymodeCamera_SmoothLookAt *)uStack_26._4_4_ != (PlaymodeCamera_SmoothLookAt *)0x0)
          {
            pPVar39 = (PlaymodeCamera_SmoothLookAt *)uStack_26._4_4_;
            pVVar3 = PlaymodeCamera+SmoothLookAt::PlaymodeCamera_SmoothLookAt_GetCurrentLookAt
                                ((Vector3 *)(auStack_12 + 4),
                                 (PlaymodeCamera_SmoothLookAt *)uStack_26._4_4_,*pVVar3,
                                 (MethodInfo *)0x0);
            uVar34 = _fStack_8;
            uVar40 = (this->fields).currentLookAt.x;
            uVar41 = (this->fields).currentLookAt.y;
            auStack_4._4_4_ = pVVar3->x;
            fStack_42 = pVVar3->y;
            auStack_11._0_4_ = pVVar3->z;
            fVar22 = (this->fields).currentLookAt.z - pVVar3->z;
            (this->fields).currentLookAt.x = (float)uVar40 - (float)auStack_4._4_4_;
            (this->fields).currentLookAt.y = (float)uVar41 - fStack_42;
            uVar43 = (this->fields).avatarHeadOffset.x;
            uVar44 = (this->fields).avatarHeadOffset.y;
            fVar19 = (float)((ulonglong)_fStack_8 >> 0x20);
            (this->fields).currentLookAt.z = fVar22;
            fStack_33 = (float)this + (this->fields).avatarHeadOffset.z;
            uStack_25 = CONCAT44((float)uVar44 + 0.0,fVar19 + (float)uVar43);
            fStack_23 = (fVar22 - fStack_33) * VStack_35.z;
            fVar19 = (((float)uVar40 - (float)auStack_4._4_4_) - (fVar19 + (float)uVar43)) *
                     VStack_35.z;
            VStack_35.y = (((float)uVar41 - fStack_42) - ((float)uVar44 + 0.0)) * VStack_35.z;
            _method = CONCAT44(fVar19,method);
            in_stack_45 = 0.0;
            in_stack_46 = 0.0;
            in_stack_47 = 0.0;
            fVar22 = 0.0;
            pVVar3 = (Vector3 *)(auStack_4 + 4);
            register0x00001200 = CONCAT44(VStack_35.y,fVar19);
            puVar48 = &UNK_?;
            pTVar8 = this_00;
            VStack_35.z = fStack_23;
            _fStack_8 = uVar34;
            pVVar49 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (pVVar3,this_00,(MethodInfo *)0x0);
            uVar50 = pVVar49->x;
            uVar51 = pVVar49->y;
            in_stack_45 = pVVar49->z - (float)auStack_12._4_4_;
            stack0xffffffec = CONCAT44(in_stack_45,auStack_11._8_4_);
            _method = CONCAT44((float)uVar51 - (float)auStack_12._0_4_,(float)uVar50 - fStack_52);
            if (cRam_? == '\0') {
              uStack_26 = 0x119c055c10237bb4;
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
              uStack_26._4_4_ = (float)TypeInfo__System__Math;
              uStack_26._0_4_ = (float)&UNK_?;
              func_?();
            }
            dVar53 = (double)(uStack_25._4_4_ * uStack_25._4_4_ +
                              in_stack_47 * in_stack_47 + fStack_33 * fStack_33);
            if (dVar53 < 0.0) {
              uStack_26._4_4_ = (float)&UNK_?;
              func_?();
            }
            else {
              dVar53 = SQRT(dVar53);
            }
            fStack_13 = (float)dVar53;
            uStack_26._4_4_ = 0.0;
            uStack_26._0_4_ = (float)&fStack_1;
            puVar54 = (undefined8 *)func_?(auStack_11 + 4);
            fVar55 = 0.0;
            _fStack_8 = *puVar54;
            ppMVar56 = &method;
            puVar57 = auStack_11 + 4;
            puVar54 = (undefined8 *)func_?();
            fStack_7 = *(float *)(puVar54 + 1);
            fStack_9 = (float)*puVar54;
            fStack_10 = (float)((ulonglong)*puVar54 >> 0x20);
            fVar18 = (this->fields).distance;
            fVar58 = (float)pPVar39 + (float)pTVar8;
            fVar24 = fVar18 * fVar18 + fVar16 * fVar16;
            fStack_17 = fStack_17 + (float)pVVar3;
            fVar59 = (float)puVar48 + fVar22;
            (this->fields).actualLookAt.x = fStack_17;
            (this->fields).actualLookAt.y = fVar58;
            (this->fields).currentLookAt.x = fStack_17;
            (this->fields).currentLookAt.y = fVar58;
            (this->fields).actualLookAt.z = fVar59;
            (this->fields).currentLookAt.z = fVar59;
            fStack_52 = fVar59;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                ((Vector3 *)((int)register0x00000010 + -0x6c),this_00,
                                 (MethodInfo *)0x0);
            auStack_12._0_4_ = pVVar3->x;
            auStack_12._4_4_ = pVVar3->y;
            fStack_13 = pVVar3->z;
            dVar53 = (double)(fVar55 - (fStack_17 * fStack_9 + fStack_20 * fStack_21 +
                                       (float)auStack_4._0_4_ * fStack_10) *
                                       ((float)ppMVar56 + (float)ppMVar56) * (float)puVar57);
            if (dVar53 < 0.0) {
              func_?(fVar58,fVar59);
            }
            else {
              dVar53 = SQRT(dVar53);
            }
            fVar59 = (float)dVar53;
            auStack_4._0_4_ = fVar22 - fStack_13 * fVar59;
            value.y = (float)pTVar8 - (float)auStack_12._4_4_ * fVar59;
            value.x = fStack_42 - (float)auStack_12._0_4_ * fVar59;
            value.z = (float)auStack_4._0_4_;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (this_00,value,(MethodInfo *)0x0);
            pMVar38 = (this->fields).avatarLocal;
            if (pMVar38 != (MVAvatarLocal *)0x0) {
              puVar54 = (undefined8 *)
                        (*(code *)(pMVar38->klass->vtable).get_VelocityRelative.method)
                                  (&fStack_17,pMVar38,
                                   (pMVar38->klass->vtable).get_VelocityAbsolute.methodPtr,fVar16,
                                   fVar18,fVar24);
              auStack_11._0_8_ = *puVar54;
              stack0xffffffec = CONCAT44(fStack_60,*(undefined4 *)(puVar54 + 1));
              if (cRam_? == '\0') {
                func_?(&TypeInfo__System__Math);
                cRam_? = '\x01';
              }
              if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__Math);
              }
              method_00 = (MethodInfo *)0x0;
              dVar53 = (double)((float)auStack_11._4_4_ * (float)auStack_11._4_4_ +
                                (float)auStack_11._0_4_ * (float)auStack_11._0_4_ +
                               (float)auStack_11._8_4_ * (float)auStack_11._8_4_);
              if (dVar53 < 0.0) {
                func_?();
              }
              else {
                dVar53 = SQRT(dVar53);
              }
              MVPlaymodeCameraBase::MVPlaymodeCameraBase_Shake
                        ((MVPlaymodeCameraBase *)this,(float)dVar53,method_00);
              (this->fields).prevLookAtTransformPos.x = (float)auStack_12._0_4_;
              (this->fields).prevLookAtTransformPos.y = (float)auStack_12._4_4_;
              (this->fields).prevLookAtTransformPos.z = fStack_52;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar61 = (code *)swi(3);
  (*pcVar61)();
  return;
}


/* PlaymodeCamera() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera__ctor
               (PlaymodeCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlaymodeCamera__SmoothLookAt);
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = (ulonglong)_UNK_?;
  (this->fields).shoulderOffset.x = (float)(int)uVar2;
  (this->fields).shoulderOffset.y = (float)(int)(uVar2 >> 0x20);
  (this->fields).avatarHeadOffset.x = (float)(int)((ulonglong)uVar1 << 0x20);
  uVar3 = _UNK_?;
  (this->fields).avatarHeadOffset.y = (float)(int)(((ulonglong)uVar1 << 0x20) >> 0x20);
  (this->fields).shoulderOffset.z = -0.2;
  (this->fields).avatarHeadOffset.z = 0.0;
  (this->fields).lookAtOffset.x = (float)(int)((ulonglong)uVar3 << 0x20);
  (this->fields).lookAtOffset.y = (float)(int)(((ulonglong)uVar3 << 0x20) >> 0x20);
  (this->fields).distanceToAvatar = 5.0;
  (this->fields).height = 1.5;
  (this->fields).minimumY = -60.0;
  (this->fields).maximumY = 60.0;
  (this->fields).targetDistanceStrength = 2.0;
  (this->fields).followRotationSpeed = 2.0;
  (this->fields).lookAtOffset.z = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar4->zeroVector).y;
  fVar6 = (pVVar4->zeroVector).z;
  (this->fields).currentLookAt.x = (pVVar4->zeroVector).x;
  (this->fields).currentLookAt.y = fVar5;
  (this->fields).currentLookAt.z = fVar6;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar4->zeroVector).y;
  fVar6 = (pVVar4->zeroVector).z;
  (this->fields).actualLookAt.x = (pVVar4->zeroVector).x;
  (this->fields).actualLookAt.y = fVar5;
  (this->fields).actualLookAt.z = fVar6;
  (this->fields).distance = 2.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar4->zeroVector).y;
  fVar6 = (pVVar4->zeroVector).z;
  (this->fields).lookAtPos.x = (pVVar4->zeroVector).x;
  (this->fields).lookAtPos.y = fVar5;
  (this->fields).lookAtPos.z = fVar6;
  (this->fields).mouseSensitivity = 0.25;
  (this->fields).lookAtScaleCorrection = 1.0;
  value = (PlaymodeCamera_SmoothLookAt *)func_?(TypeInfo__PlaymodeCamera__SmoothLookAt);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  (value->fields).samleLength = 5;
  this_00 = (Queue_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            ((Stack_1_System_Int32_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__);
  method_00 = (MethodInfo *)&(value->fields).prevVelocities;
  *(Queue_1_UnityEngine_Vector3_ **)method_00 = this_00;
  func_?(method_00,this_00);
  (value->fields).maxMag = 30.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,method_00);
  ppPVar7 = &(this->fields).smoothLookAt;
  *ppPVar7 = value;
  func_?(ppPVar7,value);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar4->zeroVector).y;
  fVar6 = (pVVar4->zeroVector).z;
  (this->fields).prevLookAtTransformPos.x = (pVVar4->zeroVector).x;
  (this->fields).prevLookAtTransformPos.y = fVar5;
  (this->fields).prevLookAtTransformPos.z = fVar6;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar4->zeroVector).y;
  fVar6 = (pVVar4->zeroVector).z;
  (this->fields)._.shakeOffset.x = (pVVar4->zeroVector).x;
  (this->fields)._.shakeOffset.y = fVar5;
  (this->fields)._.shakeOffset.z = fVar6;
  (this->fields)._.shakeMaxFactor = 1.0;
  (this->fields)._.shakeTimeFactor = 6.3;
  (this->fields)._.shakeStrengthFadeSpeed = 1.0;
  (this->fields)._._.cameraRadius = 0.3;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

