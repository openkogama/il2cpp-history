
/* Vector3 ApplyBounceVelocity(Vector3) */

Vector3 * Assembly-CSharp.dll::BounceState::BounceState_ApplyBounceVelocity
                    (Vector3 *__return_storage_ptr__,BounceState *this,Vector3 velocity,
                    MethodInfo *method)

{
  uVar1 = (this->fields).bounceVelocity.x;
  uVar2 = (this->fields).bounceVelocity.y;
  fVar3 = (this->fields).bounceVelocity.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar4->zeroVector).x;
  uVar6 = (pVVar4->zeroVector).y;
  fVar3 = fVar3 - (pVVar4->zeroVector).z;
  if (((float)uVar2 - (float)uVar6) * ((float)uVar2 - (float)uVar6) +
      ((float)uVar1 - (float)uVar5) * ((float)uVar1 - (float)uVar5) + fVar3 * fVar3 < _UNK_?)
  {
    uVar7 = velocity._0_8_;
  }
  else {
    uVar7._0_4_ = (this->fields).bounceVelocity.x;
    uVar7._4_4_ = (this->fields).bounceVelocity.y;
    velocity.z = (this->fields).bounceVelocity.z;
  }
  (this->fields).bounced = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar8 = (pVVar4->zeroVector).y;
  fVar3 = (pVVar4->zeroVector).z;
  (this->fields).bounceVelocity.x = (pVVar4->zeroVector).x;
  (this->fields).bounceVelocity.y = fVar8;
  (this->fields).bounceVelocity.z = fVar3;
  __return_storage_ptr__->x = (float)(int)uVar7;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar7 >> 0x20);
  __return_storage_ptr__->z = velocity.z;
  return __return_storage_ptr__;
}


/* Void HandleMoveHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::BounceState::BounceState_HandleMoveHit
               (BounceState *this,MVControllerColliderHit moveHit,MethodInfo *method)

{
  if ((char)moveHit.material == '\0') {
    uVar1 = 0;
    puVar2 = (undefined4 *)&stack0x00000008;
    puVar3 = &uStack_4;
    for (iVar5 = 0x24; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    mvControllerColliderHit._140_4_ = uVar1;
    auVar6 = in_stack_7._0_12_;
    auVar8 = in_stack_7._12_12_;
    auVar9 = in_stack_7._24_12_;
    auVar10 = in_stack_7._36_12_;
    auVar11 = in_stack_7._48_12_;
    auVar12 = in_stack_7._64_72_;
    mvControllerColliderHit.positionTouchingHit.x = (float)auVar6._0_4_;
    mvControllerColliderHit.positionTouchingHit.y = (float)auVar6._4_4_;
    mvControllerColliderHit.positionTouchingHit.z = (float)auVar6._8_4_;
    mvControllerColliderHit.moveDirection.x = (float)auVar8._0_4_;
    mvControllerColliderHit.moveDirection.y = (float)auVar8._4_4_;
    mvControllerColliderHit.moveDirection.z = (float)auVar8._8_4_;
    mvControllerColliderHit.elipsoidNormal.x = (float)auVar9._0_4_;
    mvControllerColliderHit.elipsoidNormal.y = (float)auVar9._4_4_;
    mvControllerColliderHit.elipsoidNormal.z = (float)auVar9._8_4_;
    mvControllerColliderHit.slopeNormal.x = (float)auVar10._0_4_;
    mvControllerColliderHit.slopeNormal.y = (float)auVar10._4_4_;
    mvControllerColliderHit.slopeNormal.z = (float)auVar10._8_4_;
    mvControllerColliderHit.impactVelocity.x = (float)auVar11._0_4_;
    mvControllerColliderHit.impactVelocity.y = (float)auVar11._4_4_;
    mvControllerColliderHit.impactVelocity.z = (float)auVar11._8_4_;
    mvControllerColliderHit._60_4_ = in_stack_7._60_4_;
    auVar6 = auVar12._0_12_;
    auVar8 = auVar12._12_12_;
    uVar13 = auVar12._24_6_;
    mvControllerColliderHit.hit.point.x = (float)auVar6._0_4_;
    mvControllerColliderHit.hit.point.y = (float)auVar6._4_4_;
    mvControllerColliderHit.hit.point.z = (float)auVar6._8_4_;
    mvControllerColliderHit.hit.normal.x = (float)auVar8._0_4_;
    mvControllerColliderHit.hit.normal.y = (float)auVar8._4_4_;
    mvControllerColliderHit.hit.normal.z = (float)auVar8._8_4_;
    mvControllerColliderHit.hit.cubePos.x = (short)uVar13;
    mvControllerColliderHit.hit.cubePos.y = (short)((uint6)uVar13 >> 0x10);
    mvControllerColliderHit.hit.cubePos.z = (short)((uint6)uVar13 >> 0x20);
    mvControllerColliderHit.hit._30_2_ = auVar12._30_2_;
    mvControllerColliderHit.hit.face = auVar12._32_4_;
    mvControllerColliderHit.hit.isCubeHit = auVar12[0x24];
    mvControllerColliderHit.hit._37_3_ = auVar12._37_3_;
    mvControllerColliderHit.hit.woId = auVar12._40_4_;
    mvControllerColliderHit.hit.cube = (Cube *)auVar12._44_4_;
    mvControllerColliderHit.hit.distance = (float)auVar12._48_4_;
    mvControllerColliderHit.hit.collider = (Collider *)auVar12._52_4_;
    mvControllerColliderHit.hit.transform = (Transform *)auVar12._56_4_;
    mvControllerColliderHit.hit._60_4_ = auVar12._60_4_;
    mvControllerColliderHit.hit.interactionFlags = auVar12._64_8_;
    mvControllerColliderHit.material = (MVMaterial *)in_stack_7._136_4_;
    BounceState_UpdateBounceState(this,mvControllerColliderHit,unaff_EDI);
  }
  return;
}


/* Void UpdateBounceState(MVControllerColliderHit) */

void Assembly-CSharp.dll::BounceState::BounceState_UpdateBounceState
               (BounceState *this,MVControllerColliderHit mvControllerColliderHit,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPhysics);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).interactable;
  (this->fields).bounced = 0;
  if (mvControllerColliderHit.hit.interactionFlags._4_4_ != 0) {
    uStack_2 = *(undefined4 *)(mvControllerColliderHit.hit.interactionFlags._4_4_ + 0x1c);
    uStack_3 = *(undefined4 *)(mvControllerColliderHit.hit.interactionFlags._4_4_ + 0x20);
    VStack_4._0_8_ = *(undefined8 *)(mvControllerColliderHit.hit.interactionFlags._4_4_ + 0x24);
    VStack_4.z = *(float *)(mvControllerColliderHit.hit.interactionFlags._4_4_ + 0x2c);
    if (pMVar1 != (MVInteractable *)0x0) {
      pMStack_5 = (pMVar1->klass->vtable).HandleModifierEffect.method;
      fVar6 = (float10)(*(code *)pMStack_5)
                                  (pMVar1,0xd,uStack_3,
                                   (pMVar1->klass->vtable).ClearModifiers.methodPtr);
      pMStack_5 = (MethodInfo *)(float)fVar6;
      if (_UNK_? < (float)pMStack_5) {
        VStack_4.z = mvControllerColliderHit.impactVelocity.y;
        VStack_4.x = mvControllerColliderHit.slopeNormal.z;
        VStack_4.y = mvControllerColliderHit.impactVelocity.x;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                  (&VStack_4,(MethodInfo *)0x0);
        fStack_7 = (float)((uint)VStack_4.x ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        fStack_8 = (float)((uint)VStack_4.y ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        fStack_9 = (float)((uint)VStack_4.z ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fVar6 = (float10)func_?(&mvControllerColliderHit.slopeNormal.z,0);
        fStack_9 = (float)(fVar6 * (float10)_UNK_? *
                          (float10)(mvControllerColliderHit.elipsoidNormal.z * fStack_7 +
                                    mvControllerColliderHit.slopeNormal.x * fStack_8 +
                                   mvControllerColliderHit.slopeNormal.y * fStack_9));
        if (_UNK_? < fStack_9) {
          puVar10 = (undefined4 *)&stack0x00000008;
          puVar11 = (undefined4 *)&stack0xffffff48;
          for (iVar12 = 0x24; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          (this->fields).bounced = 1;
          fVar6 = (float10)func_?(auStack_13,0);
          if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVPhysics);
          }
          fStack_9 = (float)pMStack_5 * _UNK_?;
          fVar14 = MVPhysics::MVPhysics_CalculateJumpForceFromVerticalVelocity
                             ((float)fVar6,(MethodInfo *)0x0);
          fVar14 = fVar14 * (float)pMStack_5;
          if (fVar14 < 0.0) {
            fVar14 = 0.0;
          }
          else if (fStack_9 < fVar14) {
            fVar14 = fStack_9;
          }
          fVar15 = MVPhysics::MVPhysics_CalculateJumpVerticalSpeed(fVar14,(MethodInfo *)0x0);
          normal.y = mvControllerColliderHit.slopeNormal.x;
          normal.x = mvControllerColliderHit.elipsoidNormal.z;
          normal.z = mvControllerColliderHit.slopeNormal.y;
          inVector.z = mvControllerColliderHit.impactVelocity.y;
          inVector.x = mvControllerColliderHit.slopeNormal.z;
          inVector.y = mvControllerColliderHit.impactVelocity.x;
          pVVar16 = HamsterWheelBounceState::HamsterWheelBounceState_GetOutVectorFromInVector
                             ((Vector3 *)&mvControllerColliderHit.hit.interactionFlags,normal,
                              inVector,(MethodInfo *)0x0);
          this_00 = &this->fields;
          fVar17 = pVVar16->y;
          fVar14 = pVVar16->z;
          (this_00->bounceVelocity).x = pVVar16->x;
          (this_00->bounceVelocity).y = fVar17;
          (this->fields).bounceVelocity.z = fVar14;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                    (&this_00->bounceVelocity,(MethodInfo *)0x0);
          if (fVar15 < _UNK_?) {
            fVar15 = fVar15 * (fVar15 / _UNK_?);
          }
          uVar18 = (this_00->bounceVelocity).x;
          uVar19 = (this_00->bounceVelocity).y;
          fVar14 = (this->fields).bounceVelocity.z;
          (this_00->bounceVelocity).x = (float)uVar18 * fVar15;
          (this_00->bounceVelocity).y = (float)uVar19 * fVar15;
          (this->fields).bounceVelocity.z = fVar14 * fVar15;
        }
      }
      return;
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* BounceState(MVInteractable) */

void Assembly-CSharp.dll::BounceState::BounceState__ctor
               (BounceState *this,MVInteractable *interactable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).bounceVelocity.x = (pVVar1->zeroVector).x;
  (this->fields).bounceVelocity.y = fVar2;
  (this->fields).bounceVelocity.z = fVar3;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  ppMVar4 = &(this->fields).interactable;
  *ppMVar4 = interactable;
  func_?(ppMVar4,interactable);
  return;
}

