
/* Vector3 ApplyBounceVelocityMaterials(Vector3) */

Vector3 * Assembly-CSharp.dll::HamsterWheelBounceState::
          HamsterWheelBounceState_ApplyBounceVelocityMaterials
                    (Vector3 *__return_storage_ptr__,HamsterWheelBounceState *this,Vector3 velocity,
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


/* Vector3 GetOutVectorFromInVector(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::HamsterWheelBounceState::
          HamsterWheelBounceState_GetOutVectorFromInVector
                    (Vector3 *__return_storage_ptr__,Vector3 normal,Vector3 inVector,
                    MethodInfo *method)

{
  fVar1 = (float)((uint)inVector.x ^
                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  fVar2 = (float)((uint)inVector.y ^
                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  fVar3 = (float)((uint)inVector.z ^
                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  inVector.x = fVar1;
  inVector.y = fVar2;
  inVector.z = fVar3;
  fVar4 = (float10)func_?(&inVector,0);
  fVar5 = (float)fVar4;
  fVar6 = normal.x * fVar5;
  fVar7 = normal.y * fVar5;
  fVar5 = normal.z * fVar5;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf,fVar6,0,0,0);
    cRam_? = '\x01';
  }
  fVar11 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
  if (fVar11 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3,fVar6,uVar8,uVar9,uVar10);
      cRam_? = '\x01';
    }
    pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_13._0_4_ = (pVVar12->zeroVector).x;
    uStack_13._4_4_ = (pVVar12->zeroVector).y;
    fVar5 = (pVVar12->zeroVector).z;
  }
  else {
    fVar14 = fVar2 * fVar7 + fVar1 * fVar6 + fVar3 * fVar5;
    fVar5 = (fVar5 * fVar14) / fVar11;
    uStack_13 = CONCAT44((fVar7 * fVar14) / fVar11,(fVar6 * fVar14) / fVar11);
  }
  __return_storage_ptr__->x = (float)uStack_13 + ((float)uStack_13 - fVar1);
  __return_storage_ptr__->y = uStack_13._4_4_ + (uStack_13._4_4_ - fVar2);
  __return_storage_ptr__->z = fVar5 + (fVar5 - fVar3);
  return __return_storage_ptr__;
}


/* Void HandleMoveHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::HamsterWheelBounceState::HamsterWheelBounceState_HandleMoveHit
               (HamsterWheelBounceState *this,MVControllerColliderHit moveHit,MethodInfo *method)

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
    HamsterWheelBounceState_UpdateBounceStateMaterial(this,mvControllerColliderHit,unaff_EDI);
  }
  return;
}


/* Void UpdateBounceStateMaterial(MVControllerColliderHit) */

void Assembly-CSharp.dll::HamsterWheelBounceState::HamsterWheelBounceState_UpdateBounceStateMaterial
               (HamsterWheelBounceState *this,MVControllerColliderHit mvControllerColliderHit,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPhysics);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).interactable;
  (this->fields).bounced = 0;
  if (mvControllerColliderHit.hit.interactionFlags._4_4_ != 0) {
    uStack_2 = *(undefined4 *)(mvControllerColliderHit.hit.interactionFlags._4_4_ + 0x1c);
    fStack_3 = *(float *)(mvControllerColliderHit.hit.interactionFlags._4_4_ + 0x20);
    VStack_4._0_8_ = *(undefined8 *)(mvControllerColliderHit.hit.interactionFlags._4_4_ + 0x24);
    VStack_4.z = *(float *)(mvControllerColliderHit.hit.interactionFlags._4_4_ + 0x2c);
    if (pMVar1 != (MVInteractableBase *)0x0) {
      pMStack_5 = (pMVar1->klass->vtable).__unknown_8.method;
      fVar6 = (float10)(*(code *)pMStack_5)
                                  (pMVar1,0xd,fStack_3 + _UNK_?,
                                   (pMVar1->klass->vtable).__unknown_9.methodPtr);
      pMStack_5 = (MethodInfo *)(float)fVar6;
      if (_UNK_? < (float)pMStack_5) {
        VStack_4.z = mvControllerColliderHit.impactVelocity.y;
        VStack_4.x = mvControllerColliderHit.slopeNormal.z;
        VStack_4.y = mvControllerColliderHit.impactVelocity.x;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                  (&VStack_4,(MethodInfo *)0x0);
        fStack_7 = mvControllerColliderHit.elipsoidNormal.z *
                   (float)((uint)VStack_4.x ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
                   + mvControllerColliderHit.slopeNormal.x *
                     (float)((uint)VStack_4.y ^
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            ) +
                   mvControllerColliderHit.slopeNormal.y *
                   (float)((uint)VStack_4.z ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        if (_UNK_? < fStack_7) {
          fVar6 = (float10)func_?(&mvControllerColliderHit.slopeNormal.z,0);
          fStack_7 = (float)(fVar6 * (float10)fStack_7 * (float10)(float)pMStack_5);
          if (_UNK_? < fStack_7) {
            puVar8 = (undefined4 *)&stack0x00000008;
            puVar9 = (undefined4 *)&stack0xffffff50;
            for (iVar10 = 0x24; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            }
            (this->fields).bounced = 1;
            fVar6 = (float10)func_?(auStack_11,0);
            if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MVPhysics);
            }
            fStack_7 = (float)pMStack_5 * _UNK_?;
            fVar12 = MVPhysics::MVPhysics_CalculateJumpForceFromVerticalVelocity
                               ((float)fVar6,(MethodInfo *)0x0);
            fVar12 = fVar12 * (float)pMStack_5;
            if (fVar12 < 0.0) {
              fVar12 = 0.0;
            }
            else if (fStack_7 < fVar12) {
              fVar12 = fStack_7;
            }
            fVar13 = MVPhysics::MVPhysics_CalculateJumpVerticalSpeed(fVar12,(MethodInfo *)0x0);
            normal.y = mvControllerColliderHit.slopeNormal.x;
            normal.x = mvControllerColliderHit.elipsoidNormal.z;
            normal.z = mvControllerColliderHit.slopeNormal.y;
            inVector.z = mvControllerColliderHit.impactVelocity.y;
            inVector.x = mvControllerColliderHit.slopeNormal.z;
            inVector.y = mvControllerColliderHit.impactVelocity.x;
            pVVar14 = HamsterWheelBounceState_GetOutVectorFromInVector
                               ((Vector3 *)&mvControllerColliderHit.hit.interactionFlags,normal,
                                inVector,(MethodInfo *)0x0);
            fVar15 = pVVar14->y;
            fVar12 = pVVar14->z;
            (this->fields).bounceVelocity.x = pVVar14->x;
            (this->fields).bounceVelocity.y = fVar15;
            (this->fields).bounceVelocity.z = fVar12;
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                      (&(this->fields).bounceVelocity,(MethodInfo *)0x0);
            if (fVar13 < _UNK_?) {
              fVar13 = fVar13 * (fVar13 / _UNK_?);
            }
            uVar16 = (this->fields).bounceVelocity.x;
            uVar17 = (this->fields).bounceVelocity.y;
            fVar12 = (this->fields).bounceVelocity.z;
            (this->fields).bounceVelocity.x = (float)uVar16 * fVar13;
            (this->fields).bounceVelocity.y = (float)uVar17 * fVar13;
            (this->fields).bounceVelocity.z = fVar12 * fVar13;
          }
        }
      }
      return;
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* HamsterWheelBounceState(MVInteractableBase) */

void Assembly-CSharp.dll::HamsterWheelBounceState::HamsterWheelBounceState__ctor
               (HamsterWheelBounceState *this,MVInteractableBase *interactable,MethodInfo *method)

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
  (this->fields).interactable = interactable;
  func_?(&this->fields,interactable);
  return;
}

