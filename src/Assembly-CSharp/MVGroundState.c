
/* Vector3 ApplySlidingVelocity(Vector3, Single, MVInteractableBase) */

Vector3 * Assembly-CSharp.dll::MVGroundState::MVGroundState_ApplySlidingVelocity
                    (Vector3 *__return_storage_ptr__,MVGroundState *this,Vector3 velocity,
                    float density,MVInteractableBase *interactableLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPhysics);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    cRam_? = '\x01';
  }
  uVar1._0_1_ = (this->fields).grounded.currentCryptoKey;
  uVar1._1_3_ = *(undefined3 *)&(this->fields).grounded.field_0x1;
  uVar1._4_4_ = (this->fields).grounded.hiddenValue;
  uVar2 = (this->fields).grounded.fakeValue;
  uVar3 = (this->fields).grounded.fakeValueChanged;
  uVar4 = (this->fields).grounded.inited;
  uVar5 = (this->fields).grounded.field_0xb;
  value._11_1_ = uVar5;
  value.inited = uVar4;
  value.fakeValueChanged = uVar3;
  value.fakeValue = uVar2;
  fStack_6 = (float)uVar1;
  fStack_7 = (float)uVar1._4_4_;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    uVar1 = CONCAT44(fStack_7,fStack_6);
  }
  value.currentCryptoKey = (char)uVar1;
  value._1_3_ = (int3)((ulonglong)uVar1 >> 8);
  value.hiddenValue = (int)((ulonglong)uVar1 >> 0x20);
  bVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
           ObscuredBool_op_Implicit_1(value,(MethodInfo *)0x0);
  if (bVar8 != 0) {
    uVar9 = (this->fields).gradientDirection.x;
    uVar10 = (this->fields).gradientDirection.y;
    fStack_7 = (this->fields).gradientDirection.z;
    dVar11 = (double)((this->fields).gradientAngle * _UNK_?);
    pMStack_12 = (MVInteractableBase *)uVar9;
    fStack_6 = (float)uVar10;
    func_?();
    fStack_13 = (float)dVar11;
    fVar14 = (float)pMStack_12 * fStack_13;
    fStack_15 = fStack_6 * fStack_13;
    fStack_13 = fStack_7 * fStack_13;
    pMVar16 = (this->fields).groundMaterial;
    if (pMVar16 != (MVMaterial *)0x0) {
      if (interactableLocal != (MVInteractableBase *)0x0) {
        pMStack_17 = (interactableLocal->klass->vtable).__unknown_6.method;
        fVar18 = (float10)(*(code *)pMStack_17)
                                    (interactableLocal,0xc,
                                     (pMVar16->fields)._PhysicalProperties_k__BackingField.friction,
                                     (interactableLocal->klass->vtable).__unknown_7.methodPtr,
                                     (pMVar16->fields)._PhysicalProperties_k__BackingField.bouncyness
                                     ,(pMVar16->fields)._PhysicalProperties_k__BackingField.softness,
                                     (pMVar16->fields)._PhysicalProperties_k__BackingField.
                                     staticFriction,
                                     (pMVar16->fields)._PhysicalProperties_k__BackingField.toughness)
        ;
        pMStack_17 = (MethodInfo *)(float)fVar18;
        fVar19 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::Easing::
                 Easing_InQuad((float)pMStack_17,(MethodInfo *)0x0);
        pMStack_17 = (MethodInfo *)(1.0 - fVar19);
        fVar14 = fVar14 * (float)pMStack_17;
        fStack_15 = fStack_15 * (float)pMStack_17;
        fStack_13 = fStack_13 * (float)pMStack_17;
        if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVPhysics);
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVPhysics);
          cRam_? = '\x01';
        }
        if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVPhysics);
        }
        pMVar20 = TypeInfo__MVPhysics->static_fields;
        puVar21 = (undefined *)(pMVar20->gravity).currentCryptoKey;
        AVar22 = (pMVar20->gravity).hiddenValue;
        pBVar23 = (pMVar20->gravity).hiddenValueOld;
        fVar19 = (pMVar20->gravity).fakeValue;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
            cctor_finished_or_no_cctor == 0) {
          puVar21 = &UNK_?;
          AVar22 = (ACTkByte4)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
          func_?();
        }
        value_00.hiddenValue = AVar22;
        value_00.currentCryptoKey = (int32_t)puVar21;
        value_00.hiddenValueOld = pBVar23;
        value_00.fakeValue = fVar19;
        value_00.inited = (pMVar20->gravity).inited;
        value_00._17_3_ = *(undefined3 *)&(pMVar20->gravity).field_0x11;
        fVar19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
        fStack_15 = fStack_15 * fVar19;
        fStack_13 = fStack_13 * fVar19;
        pMStack_17 = (interactableLocal->klass->vtable).__unknown_6.method;
        fStack_7 = density;
        fStack_6 = 0.0;
        pMStack_12 = interactableLocal;
        fVar18 = (float10)(*(code *)pMStack_17)();
        pMStack_17 = (MethodInfo *)(float)fVar18;
        fStack_7 = fStack_13 * (float)pMStack_17;
        pMVar24 = (MVInteractableBase *)(fVar14 * fVar19 * (float)pMStack_17);
        fStack_6 = fStack_15 * (float)pMStack_17;
        pMStack_12 = pMVar24;
        fStack_13 = fStack_7;
        fStack_15 = fStack_6;
        fVar18 = (float10)func_?(&pMStack_12,0);
        pMVar16 = (this->fields).groundMaterial;
        fStack_7 = (float)fVar18;
        if (pMVar16 != (MVMaterial *)0x0) {
          pMStack_17 = (interactableLocal->klass->vtable).__unknown_6.method;
          fVar18 = (float10)(*(code *)pMStack_17)
                                      (interactableLocal,0x10,
                                       (pMVar16->fields)._PhysicalProperties_k__BackingField.
                                       staticFriction,
                                       (interactableLocal->klass->vtable).__unknown_7.methodPtr);
          pMStack_17 = (MethodInfo *)(float)fVar18;
          if ((float)pMStack_17 < fStack_7) {
            fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            __return_storage_ptr__->x = velocity.x + (float)pMVar24 * fVar14;
            __return_storage_ptr__->y = velocity.y + fStack_15 * fVar14;
            __return_storage_ptr__->z = velocity.z + fStack_13 * fVar14;
            return __return_storage_ptr__;
          }
          goto code_?;
        }
      }
    }
    func_?();
    pcVar25 = (code *)swi(3);
    pVVar26 = (Vector3 *)(*pcVar25)();
    return pVVar26;
  }
code_?:
  __return_storage_ptr__->x = (float)(int)velocity._0_8_;
  __return_storage_ptr__->y = (float)(int)((ulonglong)velocity._0_8_ >> 0x20);
  __return_storage_ptr__->z = velocity.z;
  return __return_storage_ptr__;
}


/* Single GetGradientAngle(Vector3) */

float Assembly-CSharp.dll::MVGroundState::MVGroundState_GetGradientAngle
                (Vector3 gradientDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2._0_4_ = (pVVar1->upVector).x;
  uVar2._4_4_ = (pVVar1->upVector).y;
  fVar3 = (float10)func_?(uVar2,(pVVar1->upVector).z,gradientDirection._0_8_,
                                   gradientDirection.z,0);
  return (float)(fVar3 - (float10)_UNK_?);
}


/* Boolean GroundTest(MVControllerColliderHit ByRef, MvCharacterController, Vector3, Boolean,
   Single) */

bool Assembly-CSharp.dll::MVGroundState::MVGroundState_GroundTest
               (MVGroundState *this,MVControllerColliderHit *groundHit,
               MvCharacterController *controller,Vector3 velocity,bool sendCollData,
               float additionalGroundDepth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  direction = TypeInfo__UnityEngine__Vector3->static_fields->downVector;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
  if (controller != (MvCharacterController *)0x0) {
    motion.y = velocity.y * fVar1;
    motion.x = velocity.x * fVar1;
    motion.z = velocity.z * fVar1;
    bVar2 = MvCharacterController::MvCharacterController_TestWithOutSliding
                      (controller,additionalGroundDepth + _UNK_?,direction,motion,groundHit,
                       (MethodInfo *)0x0);
    return bVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean IsGroundedTest() */

bool Assembly-CSharp.dll::MVGroundState::MVGroundState_IsGroundedTest
               (MVGroundState *this,MethodInfo *method)

{
  return _UNK_? < (this->fields).groundNormal.y;
}


/* Boolean Update(MvCharacterController, Vector3, Single) */

bool Assembly-CSharp.dll::MVGroundState::MVGroundState_Update
               (MVGroundState *this,MvCharacterController *controller,Vector3 velocity,
               float additionalGroundDepth,MethodInfo *method)

{
  func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = &TypeInfo__UnityEngine__Vector3->static_fields->downVector;
  uVar2._0_4_ = pVVar1->x;
  uVar2._4_4_ = pVVar1->y;
  fVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->downVector).z;
  direction = *pVVar1;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
  fVar5 = fVar4 * velocity.x;
  fVar6 = velocity.y * fVar4;
  fVar4 = velocity.z * fVar4;
  if (controller != (MvCharacterController *)0x0) {
    colliderHit = (MVControllerColliderHit *)&stack0xffffff54;
    uVar7 = 0;
    distance = additionalGroundDepth + _UNK_?;
    puVar8 = &UNK_?;
    motion.y = fVar6;
    motion.x = fVar5;
    motion.z = fVar4;
    pMVar9 = controller;
    bVar10 = MvCharacterController::MvCharacterController_TestWithOutSliding
                      (controller,distance,direction,motion,colliderHit,(MethodInfo *)0x0);
    fVar11 = 0.0;
    puVar12 = (undefined4 *)&stack0xffffff54;
    puVar13 = &uStack_14;
    for (iVar15 = 0x24; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
    groundHit._60_4_ = puVar8;
    auVar16 = in_stack_17._0_12_;
    auVar18 = in_stack_17._12_12_;
    auVar19 = in_stack_17._24_12_;
    auVar20 = in_stack_17._36_12_;
    auVar21 = in_stack_17._48_12_;
    groundHit.positionTouchingHit.x = (float)auVar16._0_4_;
    groundHit.positionTouchingHit.y = (float)auVar16._4_4_;
    groundHit.positionTouchingHit.z = (float)auVar16._8_4_;
    groundHit.moveDirection.x = (float)auVar18._0_4_;
    groundHit.moveDirection.y = (float)auVar18._4_4_;
    groundHit.moveDirection.z = (float)auVar18._8_4_;
    groundHit.elipsoidNormal.x = (float)auVar19._0_4_;
    groundHit.elipsoidNormal.y = (float)auVar19._4_4_;
    groundHit.elipsoidNormal.z = (float)auVar19._8_4_;
    groundHit.slopeNormal.x = (float)auVar20._0_4_;
    groundHit.slopeNormal.y = (float)auVar20._4_4_;
    groundHit.slopeNormal.z = (float)auVar20._8_4_;
    groundHit.impactVelocity.x = (float)auVar21._0_4_;
    groundHit.impactVelocity.y = (float)auVar21._4_4_;
    groundHit.impactVelocity.z = (float)auVar21._8_4_;
    groundHit.hit.point.x = (float)pMVar9;
    groundHit.hit.point.y = distance;
    groundHit.hit.point.z = (float)(int)uVar2;
    groundHit.hit.normal.x = (float)(int)((ulonglong)uVar2 >> 0x20);
    groundHit.hit.normal.y = fVar3;
    groundHit.hit.normal.z = fVar5;
    groundHit.hit.cubePos._0_4_ = fVar6;
    groundHit.hit._28_4_ = fVar4;
    groundHit.hit.face = (int32_t)colliderHit;
    groundHit.hit._36_4_ = uVar7;
    groundHit.hit.woId = unaff_ESI;
    groundHit.hit.cube = (Cube *)unaff_EBX;
    groundHit.hit.distance = (float)in_stack_22._0_4_;
    groundHit.hit.collider = (Collider *)in_stack_22._4_4_;
    groundHit.hit.transform = (Transform *)in_stack_22._8_4_;
    groundHit.hit._60_4_ = in_stack_22._12_4_;
    groundHit.hit.interactionFlags = in_stack_22._16_8_;
    groundHit.material = (MVMaterial *)in_stack_22._24_4_;
    groundHit._140_4_ = fVar11;
    MVGroundState_UpdateGroundStateWithHit(this,controller,bVar10,groundHit,in_stack_23);
    return bVar10;
  }
  func_?();
  pcVar24 = (code *)swi(3);
  bVar10 = (*pcVar24)();
  return bVar10;
}


/* Void UpdateGroundChange() */

void Assembly-CSharp.dll::MVGroundState::MVGroundState_UpdateGroundChange
               (MVGroundState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    cRam_? = '\x01';
  }
  OVar1 = (this->fields).grounded;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  bVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_op_Implicit_1(OVar1,(MethodInfo *)0x0);
  if ((bVar2 == 0) || (_UNK_? < (this->fields).groundNormal.y)) {
    OVar1 = (this->fields).grounded;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    bVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_op_Implicit_1(OVar1,(MethodInfo *)0x0);
    if ((bVar2 != 0) || ((this->fields).groundNormal.y <= _UNK_?)) goto code_?;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
             ObscuredBool_op_Implicit((ObscuredBool *)&stack0xfffffff0,1,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
             ObscuredBool_op_Implicit((ObscuredBool *)&stack0xfffffff0,0,(MethodInfo *)0x0);
  }
  uVar4 = *(undefined3 *)&pOVar3->field_0x1;
  iVar5 = pOVar3->hiddenValue;
  bVar2 = pOVar3->fakeValue;
  bVar6 = pOVar3->fakeValueChanged;
  bVar7 = pOVar3->inited;
  uVar8 = pOVar3->field_0xb;
  (this->fields).grounded.currentCryptoKey = pOVar3->currentCryptoKey;
  *(undefined3 *)&(this->fields).grounded.field_0x1 = uVar4;
  (this->fields).grounded.hiddenValue = iVar5;
  (this->fields).grounded.fakeValue = bVar2;
  (this->fields).grounded.fakeValueChanged = bVar6;
  (this->fields).grounded.inited = bVar7;
  (this->fields).grounded.field_0xb = uVar8;
code_?:
  pAVar9 = (this->fields).OnGroundChange;
  if (pAVar9 != (Action_1_GroundChange_ *)0x0) {
    (*(pAVar9->fields)._._.invoke_impl)();
  }
  return;
}


/* Void UpdateGroundData(MvCharacterController, Boolean, MVControllerColliderHit) */

void Assembly-CSharp.dll::MVGroundState::MVGroundState_UpdateGroundData
               (MVGroundState *this,MvCharacterController *controller,bool foundGroundHit,
               MVControllerColliderHit groundHit,MethodInfo *method)

{
  MVar1 = groundHit;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).groundNormal.x = (pVVar2->zeroVector).x;
  (this->fields).groundNormal.y = fVar3;
  (this->fields).groundNormal.z = fVar4;
  if (foundGroundHit == 0) {
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar5 != (MVNetworkGame *)0x0) &&
       (pMVar6 = (pMVar5->fields)._MaterialRepository_k__BackingField,
       pMVar6 != (MVMaterialRepository *)0x0)) {
      pMVar7 = (pMVar6->fields).inAirMaterial;
      (this->fields).groundMaterial = pMVar7;
      func_?(&this->fields,pMVar7);
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    (this->fields).groundNormal.x = groundHit.elipsoidNormal.z;
    (this->fields).groundNormal.y = groundHit.slopeNormal.x;
    (this->fields).groundNormal.z = groundHit.slopeNormal.y;
    if (controller != (MvCharacterController *)0x0) {
      pVVar8 = MvCharacterController::MvCharacterController_GetGradientDirection
                         (&VStack_9,controller,MVar1._60_72_,(MethodInfo *)0x0);
      uStack_10._0_4_ = pVVar8->x;
      uStack_10._4_4_ = pVVar8->y;
      fVar4 = pVVar8->z;
      (this->fields).gradientDirection.x = (float)(undefined4)uStack_10;
      (this->fields).gradientDirection.y = (float)uStack_10._4_4_;
      (this->fields).gradientDirection.z = fVar4;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      fVar11 = (float10)func_?();
      (this->fields).gradientAngle = (float)(fVar11 - (float10)_UNK_?);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar5 != (MVNetworkGame *)0x0) {
        pMVar6 = (pMVar5->fields)._MaterialRepository_k__BackingField;
        if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MV__WorldObject__CubeBase);
        }
        materialId = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                               ((CubeBase *)groundHit.hit.woId,groundHit.hit._28_4_,
                                (MethodInfo *)0x0);
        if (pMVar6 != (MVMaterialRepository *)0x0) {
          pMVar7 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                             (pMVar6,materialId,(MethodInfo *)0x0);
          (this->fields).groundMaterial = pMVar7;
          func_?(&this->fields,pMVar7);
          return;
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateGroundStateWithHit(MvCharacterController, Boolean, MVControllerColliderHit) */

void Assembly-CSharp.dll::MVGroundState::MVGroundState_UpdateGroundStateWithHit
               (MVGroundState *this,MvCharacterController *controller,bool foundGroundHit,
               MVControllerColliderHit groundHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).groundNormal.x = (pVVar1->zeroVector).x;
  (this->fields).groundNormal.y = fVar2;
  (this->fields).groundNormal.z = fVar3;
  if (foundGroundHit == 0) {
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar4 == (MVNetworkGame *)0x0) ||
       (pMVar5 = (pMVar4->fields)._MaterialRepository_k__BackingField,
       pMVar5 == (MVMaterialRepository *)0x0)) goto code_?;
    pMVar6 = (pMVar5->fields).inAirMaterial;
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    (this->fields).groundNormal.x = groundHit.elipsoidNormal.z;
    (this->fields).groundNormal.y = groundHit.slopeNormal.x;
    (this->fields).groundNormal.z = groundHit.slopeNormal.y;
    if (controller == (MvCharacterController *)0x0) {
code_?:
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    elipsoidHit.point.y = groundHit.hit.point.x;
    elipsoidHit.point.x = (float)groundHit._60_4_;
    elipsoidHit.point.z = groundHit.hit.point.y;
    elipsoidHit.normal.x = groundHit.hit.point.z;
    elipsoidHit.normal.y = groundHit.hit.normal.x;
    elipsoidHit.normal.z = groundHit.hit.normal.y;
    elipsoidHit.cubePos._0_4_ = groundHit.hit.normal.z;
    elipsoidHit.cubePos.z = groundHit.hit.cubePos.x;
    elipsoidHit._30_2_ = groundHit.hit.cubePos.y;
    elipsoidHit.face = groundHit.hit._28_4_;
    elipsoidHit._36_4_ = groundHit.hit.face;
    elipsoidHit.woId = groundHit.hit._36_4_;
    elipsoidHit.cube = (Cube *)groundHit.hit.woId;
    elipsoidHit.distance = (float)groundHit.hit.cube;
    elipsoidHit.collider = (Collider *)groundHit.hit.distance;
    elipsoidHit.transform = (Transform *)groundHit.hit.collider;
    elipsoidHit._60_4_ = groundHit.hit.transform;
    elipsoidHit.interactionFlags._0_4_ = groundHit.hit._60_4_;
    elipsoidHit.interactionFlags._4_4_ = (int)groundHit.hit.interactionFlags;
    pVVar8 = MvCharacterController::MvCharacterController_GetGradientDirection
                        ((Vector3 *)&stack0xffffffe8,controller,elipsoidHit,(MethodInfo *)0x0);
    uVar9._0_4_ = pVVar8->x;
    uVar9._4_4_ = pVVar8->y;
    fVar3 = pVVar8->z;
    (this->fields).gradientDirection.x = (float)uVar9;
    (this->fields).gradientDirection.y = uVar9._4_4_;
    (this->fields).gradientDirection.z = fVar3;
    if (cRam_? == '\0') {
      groundHit.elipsoidNormal.x = (float)&TypeInfo__UnityEngine__Vector3;
      groundHit.moveDirection.z = (float)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    groundHit.elipsoidNormal.x = 0.0;
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    groundHit.positionTouchingHit.x = (pVVar1->upVector).x;
    groundHit.positionTouchingHit.y = (pVVar1->upVector).y;
    groundHit.positionTouchingHit.z = (pVVar1->upVector).z;
    in_stack_10 = &UNK_?;
    groundHit.moveDirection._0_8_ = uVar9;
    groundHit.moveDirection.z = fVar3;
    fVar11 = (float10)func_?();
    (this->fields).gradientAngle = (float)(fVar11 - (float10)_UNK_?);
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    pMVar5 = (pMVar4->fields)._MaterialRepository_k__BackingField;
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    materialId = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                           ((CubeBase *)groundHit.hit.woId,groundHit.hit._28_4_,(MethodInfo *)0x0);
    if (pMVar5 == (MVMaterialRepository *)0x0) goto code_?;
    pMVar6 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                        (pMVar5,materialId,(MethodInfo *)0x0);
  }
  (this->fields).groundMaterial = pMVar6;
  func_?(&this->fields,pMVar6);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    cRam_? = '\x01';
  }
  groundHit._132_8_ = *(undefined8 *)&(this->fields).grounded;
  uVar12 = (this->fields).grounded.fakeValue;
  uVar13 = (this->fields).grounded.fakeValueChanged;
  uVar14 = (this->fields).grounded.inited;
  uVar15 = (this->fields).grounded.field_0xb;
  value._11_1_ = uVar15;
  value.inited = uVar14;
  value.fakeValueChanged = uVar13;
  value.fakeValue = uVar12;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  value._0_8_ = groundHit._132_8_;
  bVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
           ObscuredBool_op_Implicit_1(value,(MethodInfo *)0x0);
  if ((bVar16 == 0) || (_UNK_? < (this->fields).groundNormal.y)) {
    groundHit._132_8_ = *(undefined8 *)&(this->fields).grounded;
    uVar17 = (this->fields).grounded.fakeValue;
    uVar18 = (this->fields).grounded.fakeValueChanged;
    uVar19 = (this->fields).grounded.inited;
    uVar20 = (this->fields).grounded.field_0xb;
    value_00._11_1_ = uVar20;
    value_00.inited = uVar19;
    value_00.fakeValueChanged = uVar18;
    value_00.fakeValue = uVar17;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    value_00._0_8_ = groundHit._132_8_;
    bVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
             ObscuredBool_op_Implicit_1(value_00,(MethodInfo *)0x0);
    if ((bVar16 != 0) || ((this->fields).groundNormal.y <= _UNK_?)) goto code_?;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    pOVar21 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
              ObscuredBool_op_Implicit
                        ((ObscuredBool *)&groundHit.hit.interactionFlags,1,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    pOVar21 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
              ObscuredBool_op_Implicit
                        ((ObscuredBool *)&groundHit.hit.interactionFlags,0,(MethodInfo *)0x0);
  }
  uVar22 = *(undefined3 *)&pOVar21->field_0x1;
  iVar23 = pOVar21->hiddenValue;
  bVar16 = pOVar21->fakeValue;
  bVar24 = pOVar21->fakeValueChanged;
  bVar25 = pOVar21->inited;
  uVar26 = pOVar21->field_0xb;
  (this->fields).grounded.currentCryptoKey = pOVar21->currentCryptoKey;
  *(undefined3 *)&(this->fields).grounded.field_0x1 = uVar22;
  (this->fields).grounded.hiddenValue = iVar23;
  (this->fields).grounded.fakeValue = bVar16;
  (this->fields).grounded.fakeValueChanged = bVar24;
  (this->fields).grounded.inited = bVar25;
  (this->fields).grounded.field_0xb = uVar26;
code_?:
  pAVar27 = (this->fields).OnGroundChange;
  if (pAVar27 != (Action_1_GroundChange_ *)0x0) {
    (*(pAVar27->fields)._._.invoke_impl)();
  }
  return;
}


/* Void UpdateGroundStateWithHitExternal(MvCharacterController, MVControllerColliderHit) */

void Assembly-CSharp.dll::MVGroundState::MVGroundState_UpdateGroundStateWithHitExternal
               (MVGroundState *this,MvCharacterController *controller,
               MVControllerColliderHit groundHit,MethodInfo *method)

{
  uVar1 = 0;
  pMVar2 = &groundHit;
  pfVar3 = &fStack_4;
  for (iVar5 = 0x24; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar3 = (pMVar2->positionTouchingHit).x;
    pMVar2 = (MVControllerColliderHit *)&(pMVar2->positionTouchingHit).y;
    pfVar3 = pfVar3 + 1;
  }
  groundHit_00._140_4_ = uVar1;
  auVar6 = in_stack_7._0_12_;
  auVar8 = in_stack_7._12_12_;
  auVar9 = in_stack_7._24_12_;
  auVar10 = in_stack_7._36_12_;
  auVar11 = in_stack_7._48_12_;
  auVar12 = in_stack_7._64_72_;
  groundHit_00.positionTouchingHit.x = (float)auVar6._0_4_;
  groundHit_00.positionTouchingHit.y = (float)auVar6._4_4_;
  groundHit_00.positionTouchingHit.z = (float)auVar6._8_4_;
  groundHit_00.moveDirection.x = (float)auVar8._0_4_;
  groundHit_00.moveDirection.y = (float)auVar8._4_4_;
  groundHit_00.moveDirection.z = (float)auVar8._8_4_;
  groundHit_00.elipsoidNormal.x = (float)auVar9._0_4_;
  groundHit_00.elipsoidNormal.y = (float)auVar9._4_4_;
  groundHit_00.elipsoidNormal.z = (float)auVar9._8_4_;
  groundHit_00.slopeNormal.x = (float)auVar10._0_4_;
  groundHit_00.slopeNormal.y = (float)auVar10._4_4_;
  groundHit_00.slopeNormal.z = (float)auVar10._8_4_;
  groundHit_00.impactVelocity.x = (float)auVar11._0_4_;
  groundHit_00.impactVelocity.y = (float)auVar11._4_4_;
  groundHit_00.impactVelocity.z = (float)auVar11._8_4_;
  groundHit_00._60_4_ = in_stack_7._60_4_;
  auVar6 = auVar12._0_12_;
  auVar8 = auVar12._12_12_;
  uVar13 = auVar12._24_6_;
  groundHit_00.hit.point.x = (float)auVar6._0_4_;
  groundHit_00.hit.point.y = (float)auVar6._4_4_;
  groundHit_00.hit.point.z = (float)auVar6._8_4_;
  groundHit_00.hit.normal.x = (float)auVar8._0_4_;
  groundHit_00.hit.normal.y = (float)auVar8._4_4_;
  groundHit_00.hit.normal.z = (float)auVar8._8_4_;
  groundHit_00.hit.cubePos.x = (short)uVar13;
  groundHit_00.hit.cubePos.y = (short)((uint6)uVar13 >> 0x10);
  groundHit_00.hit.cubePos.z = (short)((uint6)uVar13 >> 0x20);
  groundHit_00.hit._30_2_ = auVar12._30_2_;
  groundHit_00.hit.face = auVar12._32_4_;
  groundHit_00.hit.isCubeHit = auVar12[0x24];
  groundHit_00.hit._37_3_ = auVar12._37_3_;
  groundHit_00.hit.woId = auVar12._40_4_;
  groundHit_00.hit.cube = (Cube *)auVar12._44_4_;
  groundHit_00.hit.distance = (float)auVar12._48_4_;
  groundHit_00.hit.collider = (Collider *)auVar12._52_4_;
  groundHit_00.hit.transform = (Transform *)auVar12._56_4_;
  groundHit_00.hit._60_4_ = auVar12._60_4_;
  groundHit_00.hit.interactionFlags = auVar12._64_8_;
  groundHit_00.material = (MVMaterial *)in_stack_7._136_4_;
  MVGroundState_UpdateGroundStateWithHit(this,controller,1,groundHit_00,unaff_EDI);
  return;
}


/* MVGroundState() */

void Assembly-CSharp.dll::MVGroundState::MVGroundState__ctor(MVGroundState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVMaterial);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    cRam_? = '\x01';
  }
  this_00 = (MVMaterial *)func_?(TypeInfo__MVMaterial);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_00,(MethodInfo *)0x0);
  (this->fields).groundMaterial = this_00;
  func_?(&this->fields,this_00);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_op_Implicit((ObscuredBool *)&puStack_2,0,(MethodInfo *)0x0);
  uVar3 = *(undefined3 *)&pOVar1->field_0x1;
  iVar4 = pOVar1->hiddenValue;
  bVar5 = pOVar1->fakeValue;
  bVar6 = pOVar1->fakeValueChanged;
  bVar7 = pOVar1->inited;
  uVar8 = pOVar1->field_0xb;
  (this->fields).grounded.currentCryptoKey = pOVar1->currentCryptoKey;
  *(undefined3 *)&(this->fields).grounded.field_0x1 = uVar3;
  (this->fields).grounded.hiddenValue = iVar4;
  (this->fields).grounded.fakeValue = bVar5;
  (this->fields).grounded.fakeValueChanged = bVar6;
  (this->fields).grounded.inited = bVar7;
  (this->fields).grounded.field_0xb = uVar8;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar9->zeroVector).y;
  fVar11 = (pVVar9->zeroVector).z;
  (this->fields).groundNormal.x = (pVVar9->zeroVector).x;
  (this->fields).groundNormal.y = fVar10;
  (this->fields).groundNormal.z = fVar11;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  return;
}


/* Single get_GroundDepth() */

float Assembly-CSharp.dll::MVGroundState::MVGroundState_get_GroundDepth
                (MVGroundState *this,MethodInfo *method)

{
  return _UNK_?;
}


/* Boolean get_Grounded() */

bool Assembly-CSharp.dll::MVGroundState::MVGroundState_get_Grounded
               (MVGroundState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    cRam_? = '\x01';
  }
  value = (this->fields).grounded;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  bVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_op_Implicit_1(value,(MethodInfo *)0x0);
  return bVar1;
}

