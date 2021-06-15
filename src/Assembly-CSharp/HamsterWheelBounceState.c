
/* Vector3 ApplyBounceVelocityMaterials(Vector3) */

Vector3 * Assembly-CSharp.dll::HamsterWheelBounceState::
          HamsterWheelBounceState_ApplyBounceVelocityMaterials
                    (Vector3 *__return_storage_ptr__,HamsterWheelBounceState *this,Vector3 velocity,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = (this->fields).bounceVelocity.x;
  uStack_1._4_4_ = (this->fields).bounceVelocity.y;
  fVar2 = (this->fields).bounceVelocity.z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_4,(MethodInfo *)0x0);
  lhs.z = fVar2;
  lhs.x = (float)(undefined4)uStack_1;
  lhs.y = (float)uStack_1._4_4_;
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Inequality
                    (lhs,*pVVar3,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    uVar6 = velocity._0_8_;
  }
  else {
    uVar6._0_4_ = (this->fields).bounceVelocity.x;
    uVar6._4_4_ = (this->fields).bounceVelocity.y;
    velocity.z = (this->fields).bounceVelocity.z;
  }
  (this->fields).bounced = 0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_4,(MethodInfo *)0x0);
  fVar7 = pVVar3->y;
  fVar2 = pVVar3->z;
  (this->fields).bounceVelocity.x = pVVar3->x;
  (this->fields).bounceVelocity.y = fVar7;
  (this->fields).bounceVelocity.z = fVar2;
  __return_storage_ptr__->x = (float)(int)uVar6;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar6 >> 0x20);
  __return_storage_ptr__->z = velocity.z;
  return __return_storage_ptr__;
}


/* Vector3 GetOutVectorFromInVector(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::HamsterWheelBounceState::
          HamsterWheelBounceState_GetOutVectorFromInVector
                    (Vector3 *__return_storage_ptr__,Vector3 normal,Vector3 inVector,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = inVector.z;
  fVar2 = inVector.x;
  fVar3 = inVector.y;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a_00.y = fVar3;
  a_00.x = fVar2;
  a_00.z = fVar1;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                     ((Vector3 *)&stack0xfffffff0,a_00,(MethodInfo *)0x0);
  uVar5 = pVVar4->x;
  uVar6 = pVVar4->y;
  inVector.z = pVVar4->z;
  fVar2 = pVVar4->z;
  inVector.x = (float)uVar5;
  inVector.y = (float)uVar6;
  fVar7 = (float10)func_?(&inVector,0);
  fVar1 = (float)fVar7;
  a_01.y = normal.y;
  a_01.x = normal.x;
  a_01.z = normal.z;
  fVar3 = normal.z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&normal,a_01,fVar1,(MethodInfo *)0x0);
  uVar8 = pVVar4->x;
  uVar9 = pVVar4->y;
  __return_storage_ptr__ = (Vector3 *)pVVar4->z;
  normal.x = 0.0;
  fVar10 = (float)uVar9;
  vector.y = fVar1;
  vector.x = fVar3;
  vector.z = fVar2;
  VVar11.x = (float)uVar8;
  VVar11 = (Vector3)CONCAT84(uVar12,VVar11.x);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Project
                     ((Vector3 *)&stack0xffffffe4,vector,VVar11,(MethodInfo *)0x0);
  fStack13 = inVector.z;
  fVar1 = pVVar4->z;
  inVector.z = inVector.x;
  uVar14 = pVVar4->x;
  uVar15 = pVVar4->y;
  normal.y = (float)&stack0xffffffe4;
  normal.x = (float)&UNK_?;
  VVar11.y = inVector.y;
  VVar11.x = inVector.x;
  VVar11.z = fStack13;
  normal.z = (float)uVar14;
  inVector.x = (float)uVar15;
  inVector.y = fVar1;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)normal.y,*pVVar4,VVar11,(MethodInfo *)0x0);
  a.y = normal.z;
  a.x = normal.y;
  a.z = fVar1;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (&normal,a,*pVVar4,(MethodInfo *)0x0);
  fVar2 = pVVar4->y;
  fVar1 = pVVar4->z;
  __return_storage_ptr__->x = pVVar4->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
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
  pHVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_2 = 0.0;
  uStack_3 = 0;
  func_?(&stack0xffffff04,0,0x90);
  pMVar4 = (this->fields).interactable;
  (this->fields).bounced = 0;
  if (mvControllerColliderHit.hit.interactionFlags._4_4_ != (MVMaterial *)0x0) {
    pPVar5 = MVMaterial::MVMaterial_get_PhysicalProperties
                       ((PhysicalProperties *)&stack0xffffffa0,
                        mvControllerColliderHit.hit.interactionFlags._4_4_,(MethodInfo *)0x0);
    if (pMVar4 != (MVInteractableBase *)0x0) {
      fVar6 = (float10)(*(code *)(pMVar4->klass->vtable).__unknown_5.method)
                                  (pMVar4,0xd,pPVar5->bouncyness + _UNK_?,
                                   (pMVar4->klass->vtable).__unknown_6.methodPtr);
      fVar7 = (float)fVar6;
      if (0.0 < fVar7) {
        fStack_2 = mvControllerColliderHit.impactVelocity.y;
        uStack_3._0_4_ = mvControllerColliderHit.slopeNormal.z;
        uStack_3._4_4_ = mvControllerColliderHit.impactVelocity.x;
        func_?(&uStack_3,0);
        fVar8 = fStack_2;
        uVar9 = uStack_3;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a.z = fVar8;
        a.x = (float)uVar9;
        a.y = SUB84(uVar9,4);
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                           (&VStack_11,a,(MethodInfo *)0x0);
        uStack_3._0_4_ = pVVar10->x;
        uStack_3._4_4_ = pVVar10->y;
        fStack_2 = pVVar10->z;
        rhs.z = mvControllerColliderHit.slopeNormal.y;
        rhs.x = mvControllerColliderHit.elipsoidNormal.z;
        rhs.y = mvControllerColliderHit.slopeNormal.x;
        pHStack_12 = (HamsterWheelBounceState *)
                    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                              (*pVVar10,rhs,(MethodInfo *)0x0);
        if (0.0 < (float)pHStack_12) {
          fVar6 = (float10)func_?();
          pHStack_12 = (HamsterWheelBounceState *)
                      (float)(fVar6 * (float10)(float)pHStack_12 * (float10)fVar7);
          if (_UNK_? < (float)pHStack_12) {
            (this->fields).bounced = 1;
            puVar13 = (undefined4 *)&stack0x00000008;
            puVar14 = (undefined4 *)&stack0xffffff04;
            for (iVar15 = 0x24; iVar15 != 0; iVar15 = iVar15 + -1) {
              *puVar14 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
            }
            fVar6 = (float10)func_?();
            pHStack_12 = (HamsterWheelBounceState *)(float)fVar6;
            if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
              func_?();
            }
            pHStack_12 = (HamsterWheelBounceState *)
                        MVPhysics::MVPhysics_CalculateJumpForceFromVerticalVelocity
                                  ((float)pHStack_12,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
              func_?();
            }
            fVar8 = fVar7 * _UNK_?;
            fVar16 = 0.0;
            fVar7 = (float)pHStack_12 * fVar7;
            fVar17 = 0.0;
            targetJumpHeight =
                 UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                           (fVar7,0.0,fVar8,(MethodInfo *)0x0);
            pHStack_12 = (HamsterWheelBounceState *)
                        MVPhysics::MVPhysics_CalculateJumpVerticalSpeed
                                  (targetJumpHeight,(MethodInfo *)0x0);
            VStack_11.y = fVar16;
            VStack_11.x = fVar8;
            uVar9._4_4_ = fVar7;
            uVar9._0_4_ = (float)&UNK_?;
            VStack_11.z = fStack_18;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            uVar19 = VStack_11._0_8_;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            a_00.z = VStack_11.z;
            a_00.x = (float)uVar19;
            a_00.y = SUB84(uVar19,4);
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                               ((Vector3 *)&stack0xffffff94,a_00,(MethodInfo *)0x0);
            VStack_11.x = pVVar10->x;
            VStack_11.y = pVVar10->y;
            VStack_11.z = pVVar10->z;
            uVar19._0_4_ = pVVar10->x;
            uVar19._4_4_ = pVVar10->y;
            fVar7 = pVVar10->z;
            fVar6 = (float10)func_?();
            a_01.z = fVar17;
            a_01.x = (float)uVar9;
            a_01.y = SUB84(uVar9,4);
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                               ((Vector3 *)&stack0xffffffa8,a_01,(float)fVar6,(MethodInfo *)0x0);
            vector.z = fVar7;
            vector.x = (float)uVar19;
            vector.y = SUB84(uVar19,4);
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Project
                               ((Vector3 *)&stack0xffffffd4,vector,*pVVar10,(MethodInfo *)0x0);
            uVar20._0_4_ = pVVar10->x;
            uVar20._4_4_ = pVVar10->y;
            fVar7 = pVVar10->z;
            b.z = VStack_11.z;
            b.x = VStack_11.x;
            b.y = VStack_11.y;
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                               ((Vector3 *)&stack0xffffffbc,*pVVar10,b,(MethodInfo *)0x0);
            a_02.z = fVar7;
            a_02.x = (float)uVar20;
            a_02.y = SUB84(uVar20,4);
            pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               ((Vector3 *)&stack0xffffffc8,a_02,*pVVar10,(MethodInfo *)0x0);
            pVVar10 = &(this->fields).bounceVelocity;
            fVar8 = pVVar21->y;
            fVar7 = pVVar21->z;
            pVVar10->x = pVVar21->x;
            pVVar10->y = fVar8;
            (this->fields).bounceVelocity.z = fVar7;
            func_?();
            this = pHStack_12;
            if ((float)pHStack_12 < _UNK_?) {
              this = (HamsterWheelBounceState *)
                     (((float)pHStack_12 / _UNK_?) * (float)pHStack_12);
            }
            uVar22._0_4_ = pVVar10->x;
            uVar22._4_4_ = pVVar10->y;
            fVar7 = (pHVar1->fields).bounceVelocity.z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            a_03.z = fVar7;
            a_03.x = (float)uVar22;
            a_03.y = SUB84(uVar22,4);
            pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                               ((Vector3 *)&stack0xffffffbc,a_03,(float)this,(MethodInfo *)0x0);
            fVar8 = pVVar21->y;
            fVar7 = pVVar21->z;
            pVVar10->x = pVVar21->x;
            pVVar10->y = fVar8;
            (pHVar1->fields).bounceVelocity.z = fVar7;
          }
        }
      }
      return;
    }
  }
  func_?(0);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* HamsterWheelBounceState(MVInteractableBase) */

void Assembly-CSharp.dll::HamsterWheelBounceState::HamsterWheelBounceState__ctor
               (HamsterWheelBounceState *this,MVInteractableBase *interactable,MethodInfo *method)

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
  (this->fields).bounceVelocity.x = pVVar1->x;
  (this->fields).bounceVelocity.y = fVar3;
  (this->fields).bounceVelocity.z = fVar4;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).interactable = interactable;
  return;
}

