
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
    in_stack_1 = &StringLiteral_Not_within_line_segment;
    in_stack_2 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  func_?(&fStack_5,0,0x48);
  pCStack_6 = (Collider *)0x0;
  VStack_7.z = 0.0;
  uStack_8 = 0;
  pTVar9 = (this->fields).lookAtTransform;
  uStack_10 = 0;
  if (pTVar9 != (Transform *)0x0) {
    puVar11 = &UNK_?;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffff18,pTVar9,(MethodInfo *)0x0);
    uVar13 = pVVar12->x;
    uVar14 = pVVar12->y;
    VStack_7.y = pVVar12->z;
    auStack_15._4_4_ = (this->fields).avatarHeadOffset.x;
    auStack_15._8_4_ = (this->fields).avatarHeadOffset.y;
    auStack_15._12_4_ = (this->fields).avatarHeadOffset.z;
    fVar16 = (float)auStack_15._8_4_ + (float)uVar14;
    fVar17 = (float)auStack_15._12_4_ + VStack_7.y;
    auStack_18._4_4_ = fVar16;
    auStack_18._0_4_ = (float)auStack_15._4_4_ + (float)uVar13;
    auStack_15._0_4_ = fVar17;
    auStack_15._20_4_ = uVar13;
    VStack_7.x = (float)uVar14;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 != (Transform *)0x0) {
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)(auStack_15 + 0xc),pTVar9,(MethodInfo *)0x0);
      pTStack_19 = (Transform *)pVVar12->x;
      unique0x0000a404 = (Cube *)pVVar12->y;
      fStack_20 = pVVar12->z;
      VStack_7.x = (float)pTStack_19 - (float)auStack_15._12_4_;
      VStack_7.y = (float)unique0x0000a404 - (float)auStack_15._16_4_;
      VStack_7.z = fStack_20 - (float)auStack_15._20_4_;
      fStack_21 = VStack_7.z;
      uStack_22 = _pTStack_98;
      fVar23 = (float10)func_?();
      auStack_15._8_4_ = (float)fVar23;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (&VStack_7,(MethodInfo *)0x0);
      pCStack_24 = pCStack_6;
      fStack_21 = VStack_7.z;
      pTStack_25 = pTStack_19;
      fStack_5 = (float)auStack_15._20_4_;
      fVar26 = 0.0;
      VStack_27.x = VStack_7.x;
      VStack_27.y = VStack_7.y;
      puVar28 = (undefined8 *)func_?(auStack_29,&fStack_21);
      uVar30 = *puVar28;
      uVar31 = *(undefined4 *)(puVar28 + 1);
      iVar32 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                         (StringLiteral_Default,(MethodInfo *)0x0);
      ray.m_Direction.z = fVar17;
      ray.m_Direction.y = fVar16;
      ray.m_Origin.y = (float)uVar30;
      ray.m_Origin.x = fVar26;
      ray.m_Origin.z = SUB84(uVar30,4);
      ray.m_Direction.x = (float)uVar31;
      bVar33 = CollisionDetection::CollisionDetection_MVSphereCast
                        (ray,(this->fields)._._.cameraRadius,(VoxelHit *)auStack_15,
                         in_stack_34,(this->fields).ignoreAvatarId,1 << ((byte)iVar32 & 0x1f),
                         (MethodInfo *)0x0);
      if ((bVar33 == 0) || (fStack_35 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon)) {
        return;
      }
      point.z = (float)pTStack_25;
      point.x = fStack_21;
      point.y = (float)pCStack_24;
      lineStart.z = fStack_36;
      lineStart._0_8_ = uStack_37;
      lineEnd.y = fVar17 + (float)in_stack_1;
      lineEnd.x = fVar16 + (float)in_stack_2;
      lineEnd.z = fStack_38 + (float)puVar11;
      bVar33 = MathFunctions::MathFunctions_DistancePointLine_1
                        (point,lineStart,lineEnd,(float *)&stack0xffffff20,
                         (Vector3 *)(auStack_18 + 4),(MethodInfo *)0x0);
      if (bVar33 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
        pOVar39 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffff20);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar39,(MethodInfo *)0x0);
        VStack_7.y = (this->fields).distance;
        pOVar39 = (Object *)func_?(TypeInfo__System__Single,&VStack_7.y);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar39,(MethodInfo *)0x0);
      }
      fVar16 = (this->fields)._._.cameraRadius;
      if ((float)auStack_15._16_4_ < fVar16) {
        dVar40 = (double)(fVar16 * fVar16 - (float)auStack_15._16_4_ * (float)auStack_15._16_4_);
        if (dVar40 < 0.0) {
          func_?();
        }
        else {
          dVar40 = SQRT(dVar40);
        }
        auStack_15._20_4_ = (undefined4)dVar40;
      }
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar9 != (Transform *)0x0) {
        value.y = (float)pTStack_25 - fStack_20 * VStack_7.y;
        value.x = (float)pCStack_24 - (float)pCStack_41 * VStack_7.y;
        value.z = (float)uStack_8 - (float)uStack_4 * VStack_7.y;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar9,value,(MethodInfo *)0x0);
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar9 != (Transform *)0x0) {
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_27,pTVar9,(MethodInfo *)0x0);
          uVar42 = pVVar12->x;
          uVar43 = pVVar12->y;
          auStack_15._0_4_ = (float)auStack_15._20_4_ - pVVar12->z;
          auStack_18 = (undefined1  [8])
                       CONCAT44((float)auStack_15._16_4_ - (float)uVar43,
                                (float)auStack_15._12_4_ - (float)uVar42);
          fStack_20 = (float)auStack_15._0_4_;
          fVar23 = (float10)func_?();
          uVar44 = (this->fields).currentLookAt.x;
          uVar45 = (this->fields).currentLookAt.y;
          fVar16 = (this->fields).currentLookAt.z;
          (this->fields).distance = (float)fVar23;
          auStack_15._8_4_ = (float)fVar23 / (float)auStack_15._8_4_;
          auStack_15._20_4_ =
               (fVar16 - (float)auStack_15._20_4_) * (float)auStack_15._8_4_ +
               (float)auStack_15._20_4_;
          auStack_15._12_4_ =
               ((float)uVar44 - (float)auStack_15._12_4_) * (float)auStack_15._8_4_ +
               (float)auStack_15._12_4_;
          fVar16 = ((float)uVar45 - (float)auStack_15._16_4_) * (float)auStack_15._8_4_ +
                   (float)auStack_15._16_4_;
          (this->fields).currentLookAt.x = (float)auStack_15._12_4_;
          (this->fields).currentLookAt.y = fVar16;
          (this->fields).actualLookAt.x = (float)auStack_15._12_4_;
          (this->fields).actualLookAt.y = fVar16;
          (this->fields).currentLookAt.z = (float)auStack_15._20_4_;
          (this->fields).actualLookAt.z = (float)auStack_15._20_4_;
          return;
        }
      }
    }
  }
  func_?();
  pcVar46 = (code *)swi(3);
  (*pcVar46)();
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
    (this->fields).lookAtTransform = pTVar2;
    func_?(&(this->fields).lookAtTransform,pTVar2);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_02 != (MainCameraManager *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_02,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)(auStack_4 + 4),pTVar2,(MethodInfo *)0x0);
        uStack_5._0_4_ = pVVar3->x;
        uStack_5._4_4_ = pVVar3->y;
        fVar6 = pVVar3->z;
        (this->fields).currentLookAt.x = (float)(undefined4)uStack_5;
        (this->fields).currentLookAt.y = uStack_5._4_4_;
        (this->fields).currentLookAt.z = fVar6;
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_03 != (Transform *)0x0) {
          value.z = fVar6;
          value.x = (float)(undefined4)uStack_5;
          value.y = uStack_5._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_03,value,(MethodInfo *)0x0);
          pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)auStack_4,pTVar2,(MethodInfo *)0x0);
          fStack_8 = pQVar7->x;
          fStack_9 = pQVar7->y;
          uStack_5._0_4_ = pQVar7->z;
          uStack_5._4_4_ = pQVar7->w;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (this_03,*pQVar7,(MethodInfo *)0x0);
          pTVar2 = (this->fields).lookAtTransform;
          if (pTVar2 != (Transform *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pTVar2,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)(auStack_4 + 4),pTVar2,(MethodInfo *)0x0);
              this_01 = (this->fields).targetRot;
              fVar10 = pVVar3->y;
              fVar6 = pVVar3->z;
              (this->fields).prevLookAtTransformPos.x = pVVar3->x;
              (this->fields).prevLookAtTransformPos.y = fVar10;
              (this->fields).prevLookAtTransformPos.z = fVar6;
              if (this_01 != (TargetRotation *)0x0) {
                q.y = fStack_9;
                q.x = fStack_8;
                q.z = (float)(undefined4)uStack_5;
                q.w = uStack_5._4_4_;
                TargetRotation::TargetRotation_SetTargetRotation_2(this_01,q,(MethodInfo *)0x0);
                (this->fields).distance = (this->fields).distanceToAvatar;
                this_04 = (HashSet_1_System_Int32_ *)
                          func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
                System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                HashSet_1_System_Int32___ctor
                          (this_04,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__
                          );
                pMVar1 = (this->fields).avatarLocal;
                if ((pMVar1 != (MVAvatarLocal *)0x0) && (this_04 != (HashSet_1_System_Int32_ *)0x0))
                {
                  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                  HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                            (this_04,(pMVar1->fields)._._._._.id,
                             MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
                  (this->fields).ignoreAvatarId = this_04;
                  func_?(&(this->fields).ignoreAvatarId,this_04);
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  (this->fields).avatarLocal = avatarLocal;
  func_?(&(this->fields).avatarLocal,avatarLocal);
  camMoveTowardsOffset = (this->fields).avatarHeadOffset;
  this_00 = (AvatarCameraDistTransparency *)func_?(TypeInfo__AvatarCameraDistTransparency);
  AvatarCameraDistTransparency::AvatarCameraDistTransparency__ctor
            (this_00,camMoveTowardsOffset,4.0,1.0,(MethodInfo *)0x0);
  (this->fields).avatarCameraDistTransparency = this_00;
  func_?(&(this->fields).avatarCameraDistTransparency,this_00);
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
          (this->fields).currentLookAt.y = (float)uVar10 + (float)uVar12;
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
                           fVar28 * (this->fields).followRotationSpeed * fVar10 * fVar10,
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
        value_00.y = (fVar4 * fVar22 + fVar8 * 3.2454514e-29 + fVar9 * fVar3) - fVar5 * fVar7;
        value_00.x = (fVar22 * fVar3 + fVar7 * 3.2454514e-29 + fVar8 * fVar5) - fVar9 * fVar4;
        value_00.z = (fVar5 * fVar22 + fVar9 * 3.2454514e-29 + fVar4 * fVar7) - fVar8 * fVar3;
        value_00.w = ((fVar22 * 3.2454514e-29 - fVar3 * fVar7) - fVar4 * fVar8) -
                     fVar9 * fVar5;
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
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)auStack_3,this_00,(MethodInfo *)0x0);
    uVar4 = pVVar2->x;
    uVar5 = pVVar2->y;
    fStack_6 = pVVar2->z;
    pTVar7 = (this->fields).lookAtTransform;
    fStack_8 = (float)uVar4;
    fStack_9 = (float)uVar5;
    if (pTVar7 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)auStack_10,pTVar7,(MethodInfo *)0x0);
      auStack_11._0_4_ = pVVar2->x;
      auStack_11._4_4_ = pVVar2->y;
      fStack_12 = pVVar2->z;
      uVar13 = (this->fields).prevLookAtTransformPos.x;
      uVar14 = (this->fields).prevLookAtTransformPos.y;
      fStack_9 = (this->fields).prevLookAtTransformPos.z;
      fVar15 = uStack_16._4_4_ + ((float)auStack_11._4_4_ - (float)uVar14);
      fVar17 = (float)auStack_3._0_4_ + (fStack_12 - fStack_9);
      fVar18 = (float)((ulonglong)_fStack_8 >> 0x20);
      _fStack_8 = CONCAT44(fVar18,fVar17);
      puVar19 = &UNK_?;
      value_00.y = fVar15;
      value_00.x = (float)uStack_16 + ((float)auStack_11._0_4_ - (float)uVar13);
      value_00.z = fVar17;
      fStack_20 = (float)uVar13;
      fStack_8 = (float)uVar14;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,value_00,(MethodInfo *)0x0);
      fVar21 = (this->fields).distanceToAvatar;
      fStack_22 = 0.0;
      auStack_10._0_4_ = 0.0;
      auStack_10._4_4_ = 0.0;
      uStack_23 = 0;
      if (fVar21 != 0.0) {
        fStack_22 = (this->fields).distance / fVar21;
      }
      fStack_22 = fStack_22 * (this->fields).lookAtScaleCorrection;
      if (cRam_? == '\0') {
        uStack_24._0_4_ = (float)&TypeInfo__UnityEngine__Quaternion;
        func_?();
        cRam_? = '\x01';
      }
      uStack_24 = uStack_24 & 0xffffffff00000000;
      pQVar25 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0x00000014,this_00,(MethodInfo *)0x0);
      uStack_24 = uStack_24 & 0xffffffff00000000;
      fVar21 = pQVar25->x;
      fVar26 = pQVar25->y;
      method = (MethodInfo *)pQVar25->z;
      in_stack_27 = pQVar25->w;
      puVar28 = &stack0x00000010;
      iVar29 = func_?(puVar28,&stack0x00000000);
      fStack_30 = 0.0;
      euler.y = *(float *)(iVar29 + 4) * _UNK_?;
      euler.x = (float)uStack_31;
      euler.z = 0.0;
      pQVar25 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad((Quaternion *)auStack_11,euler,(MethodInfo *)0x0);
      fStack_8 = pQVar25->x;
      fStack_9 = pQVar25->y;
      fStack_6 = pQVar25->z;
      pTVar7 = (this->fields).lookAtTransform;
      uStack_16 = CONCAT44(uStack_16._4_4_,pQVar25->w);
      if (pTVar7 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)((int)register0x00000010 + -0x6c),pTVar7,(MethodInfo *)0x0)
        ;
        auStack_11._0_4_ = pVVar2->x;
        auStack_11._4_4_ = pVVar2->y;
        fVar32 = pVVar2->z;
        uStack_24._0_4_ = (this->fields).avatarHeadOffset.x;
        uStack_24._4_4_ = (this->fields).avatarHeadOffset.y;
        VStack_33.y = (this->fields).avatarHeadOffset.z;
        uStack_34._0_4_ = (this->fields).currentLookAtOffset.x;
        uStack_34._4_4_ = (this->fields).currentLookAtOffset.y;
        fStack_30 = VStack_33.y + (this->fields).currentLookAtOffset.z * (float)puVar19;
        rotation.z = (float)auStack_3._0_4_;
        rotation.x = (float)uStack_16;
        rotation.y = uStack_16._4_4_;
        rotation.w = (float)auStack_3._4_4_;
        point.y = uStack_24._4_4_ + uStack_34._4_4_ * (float)puVar19;
        point.x = (float)uStack_24 + (float)uStack_34 * (float)puVar19;
        point.z = fStack_30;
        fStack_12 = fVar32;
        fStack_20 = (float)auStack_11._0_4_;
        fStack_8 = (float)auStack_11._4_4_;
        fStack_9 = fVar32;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&stack0xffffff90,rotation,point,(MethodInfo *)0x0);
        uVar35 = pVVar2->x;
        uVar36 = pVVar2->y;
        fStack_6 = pVVar2->z;
        fVar37 = fStack_6 + (float)auStack_3._4_4_;
        auStack_3._4_4_ = fVar37;
        pMVar38 = (this->fields).avatarLocal;
        (this->fields).lookAtPos.x = (float)uVar35 + uStack_16._4_4_;
        (this->fields).lookAtPos.y = (float)uVar36 + (float)auStack_3._0_4_;
        (this->fields).currentLookAt.x = (float)uVar35 + uStack_16._4_4_;
        (this->fields).currentLookAt.y = (float)uVar36 + (float)auStack_3._0_4_;
        (this->fields).lookAtPos.z = fVar37;
        (this->fields).currentLookAt.z = fVar37;
        VStack_33.y = (float)(this->fields).smoothLookAt;
        fStack_8 = (float)uVar35;
        fStack_9 = (float)uVar36;
        if (pMVar38 != (MVAvatarLocal *)0x0) {
          pVVar2 = (Vector3 *)
                    (*(code *)(pMVar38->klass->vtable).get_VelocityRelative.method)
                              ((int)&uStack_16 + 4,pMVar38,
                               (pMVar38->klass->vtable).get_VelocityAbsolute.methodPtr);
          if ((PlaymodeCamera_SmoothLookAt *)VStack_33.y != (PlaymodeCamera_SmoothLookAt *)0x0) {
            pVVar2 = PlaymodeCamera+SmoothLookAt::PlaymodeCamera_SmoothLookAt_GetCurrentLookAt
                                ((Vector3 *)(auStack_11 + 4),
                                 (PlaymodeCamera_SmoothLookAt *)VStack_33.y,*pVVar2,
                                 (MethodInfo *)0x0);
            uVar39 = _fStack_8;
            uVar40 = (this->fields).currentLookAt.x;
            uVar41 = (this->fields).currentLookAt.y;
            auStack_3._4_4_ = pVVar2->x;
            fStack_42 = pVVar2->y;
            auStack_10._0_4_ = pVVar2->z;
            fVar37 = (this->fields).currentLookAt.z - pVVar2->z;
            (this->fields).currentLookAt.x = (float)uVar40 - (float)auStack_3._4_4_;
            (this->fields).currentLookAt.y = (float)uVar41 - fStack_42;
            uVar43 = (this->fields).avatarHeadOffset.x;
            uVar44 = (this->fields).avatarHeadOffset.y;
            fVar18 = (float)((ulonglong)_fStack_8 >> 0x20);
            fStack_30 = fVar18 + (float)uVar43;
            fStack_22 = fVar21 + (float)uVar44;
            (this->fields).currentLookAt.z = fVar37;
            fVar26 = fVar26 + (this->fields).avatarHeadOffset.z;
            auStack_11._0_4_ = fVar26;
            fStack_45 = (fVar37 - fVar26) * uStack_34._4_4_;
            fStack_6 = (((float)uVar40 - (float)auStack_3._4_4_) - fStack_30) * uStack_34._4_4_;
            uStack_34._0_4_ = (((float)uVar41 - fStack_42) - fStack_22) * uStack_34._4_4_;
            uStack_16 = 0;
            auStack_3._0_4_ = 0.0;
            uStack_23 = CONCAT44((float)uStack_34,fStack_6);
            _fStack_8 = uVar39;
            uStack_34._4_4_ = fStack_45;
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)(auStack_3 + 4),this_00,(MethodInfo *)0x0);
            uVar46 = pVVar2->x;
            uVar47 = pVVar2->y;
            in_stack_48 = pVVar2->z - fStack_49;
            uStack_23 = CONCAT44(in_stack_48,(float)uStack_23);
            pfVar50 = &fStack_1;
            fVar51 = 0.0;
            _method = CONCAT44((float)uVar47 - fStack_12,(float)uVar46 - (float)auStack_11._4_4_);
            fVar52 = (float10)func_?();
            fVar53 = 0.0;
            pfVar54 = &fStack_1;
            puVar55 = auStack_10 + 4;
            fStack_20 = (float)fVar52;
            puVar56 = (undefined8 *)func_?(puVar55,pfVar54);
            _fStack_8 = *puVar56;
            puVar56 = (undefined8 *)func_?(auStack_10 + 4,&method,0);
            fStack_8 = (float)*puVar56;
            fStack_9 = (float)((ulonglong)*puVar56 >> 0x20);
            fVar21 = (this->fields).distance;
            fVar26 = (this->fields).distance;
            fVar51 = uStack_24._4_4_ + fVar51;
            uStack_24._4_4_ = fVar51;
            fVar37 = (float)pfVar50 + fVar17;
            fVar21 = (fVar32 * fVar32 + fVar21 * fVar21) -
                     (fStack_9 * fStack_12 + fStack_8 * (float)auStack_11._4_4_ +
                     *(float *)(puVar56 + 1) * fStack_49) * (fVar26 + fVar26) * fVar32;
            fVar53 = fVar53 + fVar15;
            (this->fields).actualLookAt.x = fVar51;
            (this->fields).actualLookAt.y = fVar53;
            (this->fields).currentLookAt.x = fVar51;
            (this->fields).currentLookAt.y = fVar53;
            (this->fields).actualLookAt.z = fVar37;
            (this->fields).currentLookAt.z = fVar37;
            fStack_6 = fVar37;
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                ((Vector3 *)(auStack_11 + 4),this_00,(MethodInfo *)0x0);
            uStack_16._0_4_ = pVVar2->x;
            uStack_16._4_4_ = pVVar2->y;
            auStack_3._0_4_ = pVVar2->z;
            dVar57 = (double)(float)puVar28;
            if (dVar57 < 0.0) {
              func_?(puVar55,pfVar54,fVar53,fVar37);
            }
            else {
              dVar57 = SQRT(dVar57);
            }
            fVar26 = (float)dVar57;
            auStack_3._0_4_ = fVar17 - (float)auStack_3._0_4_ * fVar26;
            value.y = fVar15 - uStack_16._4_4_ * fVar26;
            value.x = (float)uStack_34 - (float)uStack_16 * fVar26;
            value.z = (float)auStack_3._0_4_;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (this_00,value,(MethodInfo *)0x0);
            pMVar38 = (this->fields).avatarLocal;
            if (pMVar38 != (MVAvatarLocal *)0x0) {
              puVar56 = (undefined8 *)
                        (*(code *)(pMVar38->klass->vtable).get_VelocityRelative.method)
                                  ((int)&uStack_16 + 4,pMVar38,
                                   (pMVar38->klass->vtable).get_VelocityAbsolute.methodPtr,fVar15,
                                   fVar17,fVar21);
              auStack_10 = (undefined1  [8])*puVar56;
              uStack_23 = CONCAT44(uStack_23._4_4_,*(undefined4 *)(puVar56 + 1));
              fVar52 = (float10)func_?(auStack_10,0);
              VStack_33.z = (float)fVar52;
              MVPlaymodeCameraBase::MVPlaymodeCameraBase_Shake
                        ((MVPlaymodeCameraBase *)this,VStack_33.z,(MethodInfo *)0x0);
              (this->fields).prevLookAtTransformPos.x = (float)auStack_11._0_4_;
              (this->fields).prevLookAtTransformPos.y = (float)auStack_11._4_4_;
              (this->fields).prevLookAtTransformPos.z = fStack_22;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar58 = (code *)swi(3);
  (*pcVar58)();
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
  this_00 = (Queue_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
  System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System::Object]::
  ReadOnlyCollectionBuilder_1_System_Object___ctor
            ((ReadOnlyCollectionBuilder_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__);
  method_00 = (MethodInfo *)&value->fields;
  (value->fields).prevVelocities = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,method_00);
  (this->fields).smoothLookAt = value;
  func_?(&(this->fields).smoothLookAt,value);
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

