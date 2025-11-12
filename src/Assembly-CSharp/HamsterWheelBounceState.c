
/* Vector3 ApplyBounceVelocityMaterials(Vector3) */

Vector3 * Assembly-CSharp.dll::HamsterWheelBounceState::
          HamsterWheelBounceState_ApplyBounceVelocityMaterials
                    (Vector3 *__return_storage_ptr__,HamsterWheelBounceState *this,Vector3 *velocity
                    ,MethodInfo *method)

{
  uVar1 = (this->fields).bounceVelocity.x;
  uVar2 = (this->fields).bounceVelocity.y;
  fVar3 = (this->fields).bounceVelocity.z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar4 = cRam_?;
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar6 = (pVVar5->zeroVector).x;
  uVar7 = (pVVar5->zeroVector).y;
  fVar3 = fVar3 - (pVVar5->zeroVector).z;
  if (_UNK_? <=
      ((float)uVar2 - (float)uVar7) * ((float)uVar2 - (float)uVar7) +
      ((float)uVar1 - (float)uVar6) * ((float)uVar1 - (float)uVar6) + fVar3 * fVar3) {
    fVar8 = (this->fields).bounceVelocity.y;
    fVar3 = (this->fields).bounceVelocity.z;
    velocity->x = (this->fields).bounceVelocity.x;
    velocity->y = fVar8;
    velocity->z = fVar3;
  }
  (this->fields).bounced = 0;
  if (cVar4 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar5->zeroVector).z;
  fVar8 = (pVVar5->zeroVector).y;
  (this->fields).bounceVelocity.x = (pVVar5->zeroVector).x;
  (this->fields).bounceVelocity.y = fVar8;
  fVar8 = velocity->x;
  fVar9 = velocity->y;
  (this->fields).bounceVelocity.z = fVar3;
  fVar3 = velocity->z;
  __return_storage_ptr__->x = fVar8;
  __return_storage_ptr__->y = fVar9;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 GetOutVectorFromInVector(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::HamsterWheelBounceState::
          HamsterWheelBounceState_GetOutVectorFromInVector
                    (Vector3 *__return_storage_ptr__,Vector3 *normal,Vector3 *inVector,
                    MethodInfo *method)

{
  uStack_1._0_4_ = inVector->x;
  uStack_1._4_4_ = inVector->y;
  fVar2 = (float)((undefined4)uStack_1 ^ _UNK_?);
  fVar3 = (float)((uint)inVector->z ^ _UNK_?);
  fVar4 = (float)(uStack_1._4_4_ ^ _UNK_?);
  inVector->x = fVar2;
  inVector->y = fVar4;
  inVector->z = fVar3;
  fVar5 = (float)FUN_?(inVector);
  uVar6 = normal->x;
  uVar7 = normal->y;
  fStack_8 = normal->z * fVar5;
  uStack_9 = CONCAT44((float)uVar7 * fVar5,(float)uVar6 * fVar5);
  uStack_1 = CONCAT44(fVar4,fVar2);
  fStack_10 = fVar3;
  puVar11 = (undefined8 *)FUN_?(auStack_12,&uStack_1,&uStack_9);
  fVar5 = *(float *)(puVar11 + 1);
  fVar13 = (float)*puVar11;
  fVar14 = (float)((ulonglong)*puVar11 >> 0x20);
  fVar15 = *(float *)(puVar11 + 1);
  __return_storage_ptr__->x = (fVar13 - fVar2) + fVar13;
  __return_storage_ptr__->y = (fVar14 - fVar4) + fVar14;
  __return_storage_ptr__->z = (fVar5 - fVar3) + fVar15;
  return __return_storage_ptr__;
}


/* Void HandleMoveHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::HamsterWheelBounceState::HamsterWheelBounceState_HandleMoveHit
               (HamsterWheelBounceState *this,MVControllerColliderHit *moveHit,MethodInfo *method)

{
  if (moveHit->testWithOutMoving == 0) {
    MStack_1.positionTouchingHit.x = (moveHit->positionTouchingHit).x;
    MStack_1.positionTouchingHit.y = (moveHit->positionTouchingHit).y;
    MStack_1._8_8_ = *(undefined8 *)&(moveHit->positionTouchingHit).z;
    MStack_1.testWithOutMoving = moveHit->testWithOutMoving;
    MStack_1._161_7_ = *(undefined7 *)&moveHit->field_0xa1;
    MStack_1.moveDirection.y = (moveHit->moveDirection).y;
    MStack_1.moveDirection.z = (moveHit->moveDirection).z;
    MStack_1.elipsoidNormal.x = (moveHit->elipsoidNormal).x;
    MStack_1.elipsoidNormal.y = (moveHit->elipsoidNormal).y;
    MStack_1._32_8_ = *(undefined8 *)&(moveHit->elipsoidNormal).z;
    MStack_1.slopeNormal.y = (moveHit->slopeNormal).y;
    MStack_1.slopeNormal.z = (moveHit->slopeNormal).z;
    MStack_1.impactVelocity.x = (moveHit->impactVelocity).x;
    MStack_1.impactVelocity.y = (moveHit->impactVelocity).y;
    MStack_1._56_8_ = *(undefined8 *)&(moveHit->impactVelocity).z;
    MStack_1.hit.point.x = (moveHit->hit).point.x;
    MStack_1.hit.point.y = (moveHit->hit).point.y;
    MStack_1.hit._8_8_ = *(undefined8 *)&(moveHit->hit).point.z;
    MStack_1.hit.normal.y = (moveHit->hit).normal.y;
    MStack_1.hit.normal.z = (moveHit->hit).normal.z;
    MStack_1.hit.cubePos = (moveHit->hit).cubePos;
    MStack_1.hit._30_2_ = *(undefined2 *)&(moveHit->hit).field_0x1e;
    MStack_1.hit.face = (moveHit->hit).face;
    MStack_1.hit.isCubeHit = (moveHit->hit).isCubeHit;
    MStack_1.hit._37_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
    MStack_1.hit.woId = (moveHit->hit).woId;
    MStack_1.hit._44_4_ = *(undefined4 *)&(moveHit->hit).field_0x2c;
    MStack_1.hit.collider = (moveHit->hit).collider;
    MStack_1.hit.transform = (moveHit->hit).transform;
    MStack_1.hit.cube = (moveHit->hit).cube;
    MStack_1.hit.distance = (moveHit->hit).distance;
    MStack_1.hit._60_4_ = *(undefined4 *)&(moveHit->hit).field_0x3c;
    MStack_1.hit.interactionFlags = (moveHit->hit).interactionFlags;
    MStack_1.material = moveHit->material;
    HamsterWheelBounceState_UpdateBounceStateMaterial(this,&MStack_1,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateBounceStateMaterial(MVControllerColliderHit) */

void Assembly-CSharp.dll::HamsterWheelBounceState::HamsterWheelBounceState_UpdateBounceStateMaterial
               (HamsterWheelBounceState *this,MVControllerColliderHit *mvControllerColliderHit,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = (mvControllerColliderHit->positionTouchingHit).x;
  uStack_1._4_4_ = (mvControllerColliderHit->positionTouchingHit).y;
  uStack_2 = *(undefined8 *)&(mvControllerColliderHit->positionTouchingHit).z;
  uStack_3 = *(undefined8 *)&mvControllerColliderHit->testWithOutMoving;
  uStack_4._0_4_ = (mvControllerColliderHit->moveDirection).y;
  uStack_4._4_4_ = (mvControllerColliderHit->moveDirection).z;
  uStack_5._0_4_ = (mvControllerColliderHit->elipsoidNormal).x;
  uStack_5._4_4_ = (mvControllerColliderHit->elipsoidNormal).y;
  pMVar6 = (this->fields).interactable;
  (this->fields).bounced = 0;
  uStack_7 = *(undefined8 *)&(mvControllerColliderHit->elipsoidNormal).z;
  uStack_8._0_4_ = (mvControllerColliderHit->slopeNormal).y;
  uStack_8._4_4_ = (mvControllerColliderHit->slopeNormal).z;
  uStack_9._0_4_ = (mvControllerColliderHit->impactVelocity).x;
  uStack_9._4_4_ = (mvControllerColliderHit->impactVelocity).y;
  uStack_10 = *(undefined8 *)&(mvControllerColliderHit->impactVelocity).z;
  uStack_11._0_4_ = (mvControllerColliderHit->hit).point.x;
  uStack_11._4_4_ = (mvControllerColliderHit->hit).point.y;
  uStack_12 = *(undefined8 *)&(mvControllerColliderHit->hit).point.z;
  uStack_13._0_4_ = (mvControllerColliderHit->hit).normal.y;
  uStack_13._4_4_ = (mvControllerColliderHit->hit).normal.z;
  uStack_14 = *(undefined8 *)&(mvControllerColliderHit->hit).cubePos;
  uStack_15._0_4_ = (mvControllerColliderHit->hit).face;
  uStack_15._4_1_ = (mvControllerColliderHit->hit).isCubeHit;
  uStack_15._5_3_ = *(undefined3 *)&(mvControllerColliderHit->hit).field_0x25;
  uStack_16 = *(undefined8 *)&(mvControllerColliderHit->hit).woId;
  pCStack_17 = (mvControllerColliderHit->hit).collider;
  pTStack_18 = (mvControllerColliderHit->hit).transform;
  pCStack_19 = (mvControllerColliderHit->hit).cube;
  uStack_20 = *(undefined8 *)&(mvControllerColliderHit->hit).distance;
  iStack_21 = (mvControllerColliderHit->hit).interactionFlags;
  pMStack_22 = mvControllerColliderHit->material;
  if (pMStack_22 != (MVMaterial *)0x0) {
    fVar23 = (pMStack_22->fields)._PhysicalProperties_k__BackingField.bouncyness;
    fStack_24 = (pMStack_22->fields)._PhysicalProperties_k__BackingField.toughness;
    if (pMVar6 != (MVInteractableBase *)0x0) {
      auVar25._4_4_ = fVar23;
      auVar25._0_4_ = fVar23;
      auVar25._8_4_ = fVar23;
      auVar25._12_4_ = fVar23;
      auVar26._4_12_ = auVar25._4_12_;
      auVar26._0_4_ = fVar23 + _UNK_?;
      fVar23 = (float)(*(pMVar6->klass->vtable).__unknown_8.methodPtr)
                               (pMVar6,0xd,auVar26._0_8_,(pMVar6->klass->vtable).__unknown_8.method)
      ;
      if (0.0 < fVar23) {
        ppIStack_27 = *(Il2CppType ***)&mvControllerColliderHit->positionTouchingHit;
        _Stack_1d0 = *(_union_154 *)&(mvControllerColliderHit->positionTouchingHit).z;
        uStack_28 = *(undefined8 *)&mvControllerColliderHit->testWithOutMoving;
        _Stack_1c8 = *(_union_155 *)&(mvControllerColliderHit->moveDirection).y;
        uStack_29 = *(undefined8 *)&mvControllerColliderHit->elipsoidNormal;
        uStack_30._0_4_ = (mvControllerColliderHit->hit).point.x;
        uStack_30._4_4_ = (mvControllerColliderHit->hit).point.y;
        uStack_31 = *(undefined8 *)&(mvControllerColliderHit->hit).point.z;
        uStack_32 = *(undefined8 *)&(mvControllerColliderHit->elipsoidNormal).z;
        uStack_33._0_4_ = (mvControllerColliderHit->slopeNormal).y;
        uStack_33._4_4_ = (mvControllerColliderHit->slopeNormal).z;
        uStack_34._0_4_ = (mvControllerColliderHit->impactVelocity).x;
        uStack_34._4_4_ = (mvControllerColliderHit->impactVelocity).y;
        uStack_35 = *(undefined8 *)&(mvControllerColliderHit->impactVelocity).z;
        uStack_36._0_4_ = (mvControllerColliderHit->hit).normal.y;
        uStack_36._4_4_ = (mvControllerColliderHit->hit).normal.z;
        uStack_37 = *(undefined8 *)&(mvControllerColliderHit->hit).cubePos;
        uStack_38._0_4_ = (mvControllerColliderHit->hit).face;
        uStack_38._4_1_ = (mvControllerColliderHit->hit).isCubeHit;
        uStack_38._5_3_ = *(undefined3 *)&(mvControllerColliderHit->hit).field_0x25;
        uStack_39 = *(undefined8 *)&(mvControllerColliderHit->hit).woId;
        pCStack_40 = (mvControllerColliderHit->hit).cube;
        uStack_41 = *(undefined8 *)&(mvControllerColliderHit->hit).distance;
        pCStack_42 = (mvControllerColliderHit->hit).collider;
        pTStack_43 = (mvControllerColliderHit->hit).transform;
        iStack_44 = (mvControllerColliderHit->hit).interactionFlags;
        pMStack_45 = mvControllerColliderHit->material;
        fVar46 = (float)uStack_35;
        fStack_47 = (float)uStack_35;
        uStack_48 = uStack_34;
        fVar49 = (float)FUN_?(&uStack_34);
        if (_UNK_? < fVar49) {
          fVar50 = (float)uStack_48 / fVar49;
          fVar51 = uStack_48._4_4_ / fVar49;
          fVar46 = fVar46 / fVar49;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar52 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar50 = (pVVar52->zeroVector).x;
          fVar51 = (pVVar52->zeroVector).y;
          fVar46 = (pVVar52->zeroVector).z;
        }
        uVar53 = _UNK_?;
        uStack_34 = CONCAT44(fVar51,fVar50);
        ppIStack_27 = *(Il2CppType ***)&mvControllerColliderHit->positionTouchingHit;
        _Stack_1d0 = *(_union_154 *)&(mvControllerColliderHit->positionTouchingHit).z;
        uStack_28 = *(undefined8 *)&mvControllerColliderHit->testWithOutMoving;
        _Stack_1c8 = *(_union_155 *)&(mvControllerColliderHit->moveDirection).y;
        uStack_29 = *(undefined8 *)&mvControllerColliderHit->elipsoidNormal;
        uStack_32 = *(undefined8 *)&(mvControllerColliderHit->elipsoidNormal).z;
        uStack_33._0_4_ = (mvControllerColliderHit->slopeNormal).y;
        uStack_33._4_4_ = (mvControllerColliderHit->slopeNormal).z;
        uStack_48._0_4_ = (mvControllerColliderHit->impactVelocity).x;
        uStack_48._4_4_ = (mvControllerColliderHit->impactVelocity).y;
        uStack_35 = *(undefined8 *)&(mvControllerColliderHit->impactVelocity).z;
        uStack_30._0_4_ = (mvControllerColliderHit->hit).point.x;
        uStack_30._4_4_ = (mvControllerColliderHit->hit).point.y;
        uStack_31 = *(undefined8 *)&(mvControllerColliderHit->hit).point.z;
        uStack_36._0_4_ = (mvControllerColliderHit->hit).normal.y;
        uStack_36._4_4_ = (mvControllerColliderHit->hit).normal.z;
        uStack_37 = *(undefined8 *)&(mvControllerColliderHit->hit).cubePos;
        uStack_38._0_4_ = (mvControllerColliderHit->hit).face;
        uStack_38._4_1_ = (mvControllerColliderHit->hit).isCubeHit;
        uStack_38._5_3_ = *(undefined3 *)&(mvControllerColliderHit->hit).field_0x25;
        uStack_39 = *(undefined8 *)&(mvControllerColliderHit->hit).woId;
        pCStack_40 = (mvControllerColliderHit->hit).cube;
        uStack_41 = *(undefined8 *)&(mvControllerColliderHit->hit).distance;
        pCStack_42 = (mvControllerColliderHit->hit).collider;
        pTStack_43 = (mvControllerColliderHit->hit).transform;
        iStack_44 = (mvControllerColliderHit->hit).interactionFlags;
        pMStack_45 = mvControllerColliderHit->material;
        fVar46 = (float)(undefined4)uStack_33 * (float)((uint)fVar51 ^ _UNK_?) +
                 fStack_54 * (float)((uint)fVar50 ^ _UNK_?) +
                 (float)uStack_33._4_4_ * (float)((uint)fVar46 ^ _UNK_?);
        if ((0.0 < fVar46) &&
           (fVar49 = (float)FUN_?(&mvControllerColliderHit->impactVelocity),
           _UNK_? < fVar49 * fVar46 * fVar23)) {
          uStack_4._0_4_ = (mvControllerColliderHit->moveDirection).y;
          uStack_4._4_4_ = (mvControllerColliderHit->moveDirection).z;
          uStack_5._0_4_ = (mvControllerColliderHit->elipsoidNormal).x;
          uStack_5._4_4_ = (mvControllerColliderHit->elipsoidNormal).y;
          uStack_3 = *(undefined8 *)&mvControllerColliderHit->testWithOutMoving;
          uStack_1._0_4_ = (mvControllerColliderHit->positionTouchingHit).x;
          uStack_1._4_4_ = (mvControllerColliderHit->positionTouchingHit).y;
          uStack_2 = *(undefined8 *)&(mvControllerColliderHit->positionTouchingHit).z;
          (this->fields).bounced = 1;
          uStack_7 = *(undefined8 *)&(mvControllerColliderHit->elipsoidNormal).z;
          uStack_8._0_4_ = (mvControllerColliderHit->slopeNormal).y;
          uStack_8._4_4_ = (mvControllerColliderHit->slopeNormal).z;
          uStack_9._0_4_ = (mvControllerColliderHit->impactVelocity).x;
          uStack_9._4_4_ = (mvControllerColliderHit->impactVelocity).y;
          uStack_10 = *(undefined8 *)&(mvControllerColliderHit->impactVelocity).z;
          uStack_11._0_4_ = (mvControllerColliderHit->hit).point.x;
          uStack_11._4_4_ = (mvControllerColliderHit->hit).point.y;
          uStack_12 = *(undefined8 *)&(mvControllerColliderHit->hit).point.z;
          uStack_13._0_4_ = (mvControllerColliderHit->hit).normal.y;
          uStack_13._4_4_ = (mvControllerColliderHit->hit).normal.z;
          uStack_14 = *(undefined8 *)&(mvControllerColliderHit->hit).cubePos;
          uStack_15._0_4_ = (mvControllerColliderHit->hit).face;
          uStack_15._4_1_ = (mvControllerColliderHit->hit).isCubeHit;
          uStack_15._5_3_ = *(undefined3 *)&(mvControllerColliderHit->hit).field_0x25;
          uStack_16 = *(undefined8 *)&(mvControllerColliderHit->hit).woId;
          pCStack_19 = (mvControllerColliderHit->hit).cube;
          uStack_20 = *(undefined8 *)&(mvControllerColliderHit->hit).distance;
          pCStack_17 = (mvControllerColliderHit->hit).collider;
          pTStack_18 = (mvControllerColliderHit->hit).transform;
          iStack_21 = (mvControllerColliderHit->hit).interactionFlags;
          pMStack_22 = mvControllerColliderHit->material;
          fVar46 = (float)FUN_?(&uStack_9);
          if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
            FUN_?();
          }
          fVar49 = _UNK_?;
          fVar50 = fVar23 * _UNK_?;
          fVar46 = MVPhysics::MVPhysics_CalculateJumpForceFromVerticalVelocity
                             (fVar46,(MethodInfo *)0x0);
          fVar46 = fVar46 * fVar23;
          if (fVar46 < 0.0) {
            fVar46 = 0.0;
          }
          else if (fVar50 < fVar46) {
            fVar46 = fVar50;
          }
          fVar50 = MVPhysics::MVPhysics_CalculateJumpVerticalSpeed(fVar46,(MethodInfo *)0x0);
          uStack_1._0_4_ = (mvControllerColliderHit->positionTouchingHit).x;
          uStack_1._4_4_ = (mvControllerColliderHit->positionTouchingHit).y;
          uStack_2 = *(undefined8 *)&(mvControllerColliderHit->positionTouchingHit).z;
          uStack_28 = *(undefined8 *)&mvControllerColliderHit->testWithOutMoving;
          uStack_4._0_4_ = (mvControllerColliderHit->moveDirection).y;
          uStack_4._4_4_ = (mvControllerColliderHit->moveDirection).z;
          uStack_5._0_4_ = (mvControllerColliderHit->elipsoidNormal).x;
          uStack_5._4_4_ = (mvControllerColliderHit->elipsoidNormal).y;
          uStack_7 = *(undefined8 *)&(mvControllerColliderHit->elipsoidNormal).z;
          uStack_8._0_4_ = (mvControllerColliderHit->slopeNormal).y;
          uStack_8._4_4_ = (mvControllerColliderHit->slopeNormal).z;
          uStack_9._0_4_ = (mvControllerColliderHit->impactVelocity).x;
          uStack_9._4_4_ = (mvControllerColliderHit->impactVelocity).y;
          uStack_10 = *(undefined8 *)&(mvControllerColliderHit->impactVelocity).z;
          uStack_11._0_4_ = (mvControllerColliderHit->hit).point.x;
          uStack_11._4_4_ = (mvControllerColliderHit->hit).point.y;
          uStack_12 = *(undefined8 *)&(mvControllerColliderHit->hit).point.z;
          uStack_36._0_4_ = (mvControllerColliderHit->hit).normal.y;
          uStack_36._4_4_ = (mvControllerColliderHit->hit).normal.z;
          uStack_37 = *(undefined8 *)&(mvControllerColliderHit->hit).cubePos;
          pCStack_19 = (mvControllerColliderHit->hit).cube;
          uStack_20 = *(undefined8 *)&(mvControllerColliderHit->hit).distance;
          uStack_15._0_4_ = (mvControllerColliderHit->hit).face;
          uStack_15._4_1_ = (mvControllerColliderHit->hit).isCubeHit;
          uStack_15._5_3_ = *(undefined3 *)&(mvControllerColliderHit->hit).field_0x25;
          uStack_16 = *(undefined8 *)&(mvControllerColliderHit->hit).woId;
          pCStack_17 = (mvControllerColliderHit->hit).collider;
          pTStack_18 = (mvControllerColliderHit->hit).transform;
          iStack_21 = (mvControllerColliderHit->hit).interactionFlags;
          pMStack_22 = mvControllerColliderHit->material;
          ppIStack_27 = *(Il2CppType ***)&mvControllerColliderHit->positionTouchingHit;
          _Stack_1d0 = *(_union_154 *)&(mvControllerColliderHit->positionTouchingHit).z;
          _Stack_1c8 = *(_union_155 *)&(mvControllerColliderHit->moveDirection).y;
          uStack_29 = *(undefined8 *)&mvControllerColliderHit->elipsoidNormal;
          uStack_32 = *(undefined8 *)&(mvControllerColliderHit->elipsoidNormal).z;
          uStack_33._0_4_ = (mvControllerColliderHit->slopeNormal).y;
          uStack_33._4_4_ = (mvControllerColliderHit->slopeNormal).z;
          uStack_48._0_4_ = (mvControllerColliderHit->impactVelocity).x;
          uStack_48._4_4_ = (mvControllerColliderHit->impactVelocity).y;
          uStack_35 = *(undefined8 *)&(mvControllerColliderHit->impactVelocity).z;
          uStack_30._0_4_ = (mvControllerColliderHit->hit).point.x;
          uStack_30._4_4_ = (mvControllerColliderHit->hit).point.y;
          uStack_31 = *(undefined8 *)&(mvControllerColliderHit->hit).point.z;
          uStack_38._0_4_ = (mvControllerColliderHit->hit).face;
          uStack_38._4_1_ = (mvControllerColliderHit->hit).isCubeHit;
          uStack_38._5_3_ = *(undefined3 *)&(mvControllerColliderHit->hit).field_0x25;
          uStack_39 = *(undefined8 *)&(mvControllerColliderHit->hit).woId;
          pCStack_42 = (mvControllerColliderHit->hit).collider;
          pTStack_43 = (mvControllerColliderHit->hit).transform;
          pCStack_40 = (mvControllerColliderHit->hit).cube;
          uStack_41 = *(undefined8 *)&(mvControllerColliderHit->hit).distance;
          iStack_44 = (mvControllerColliderHit->hit).interactionFlags;
          pMStack_45 = mvControllerColliderHit->material;
          fVar55 = (float)((uint)(float)uStack_48 ^ uVar53);
          fVar56 = (float)((uint)uStack_48._4_4_ ^ uVar53);
          fVar57 = (float)((uint)(float)uStack_35 ^ uVar53);
          uStack_34 = CONCAT44(fVar56,fVar55);
          fStack_47 = fVar57;
          uStack_13 = uStack_36;
          uStack_14 = uStack_37;
          uStack_3 = uStack_28;
          fVar23 = (float)FUN_?(&uStack_34);
          fStack_47 = uStack_8._4_4_ * fVar23;
          uStack_34 = CONCAT44((float)uStack_8 * fVar23,uStack_7._4_4_ * fVar23);
          method_00 = (MethodInfo *)auStack_58;
          auStack_58._0_8_ = CONCAT44(fVar56,fVar55);
          auStack_58._8_4_ = fVar57;
          puVar59 = (undefined8 *)FUN_?(auStack_60,method_00,&uStack_34);
          fVar51 = (float)*puVar59;
          fVar61 = (float)((ulonglong)*puVar59 >> 0x20);
          fVar23 = *(float *)(puVar59 + 1);
          fVar46 = *(float *)(puVar59 + 1);
          (this->fields).bounceVelocity.x = (fVar51 - fVar55) + fVar51;
          (this->fields).bounceVelocity.y = (fVar61 - fVar56) + fVar61;
          (this->fields).bounceVelocity.z = (fVar23 - fVar57) + fVar46;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                    (&(this->fields).bounceVelocity,method_00);
          if (fVar50 < fVar49) {
            fVar50 = fVar50 * (fVar50 / fVar49);
          }
          uVar62 = (this->fields).bounceVelocity.x;
          fVar23 = (this->fields).bounceVelocity.y;
          fVar46 = (this->fields).bounceVelocity.z;
          (this->fields).bounceVelocity.x = (float)uVar62 * fVar50;
          (this->fields).bounceVelocity.y = fVar23 * fVar50;
          (this->fields).bounceVelocity.z = fVar46 * fVar50;
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar63 = (code *)swi(3);
  (*pcVar63)();
  return;
}


/* HamsterWheelBounceState(MVInteractableBase) */

void Assembly-CSharp.dll::HamsterWheelBounceState::HamsterWheelBounceState__ctor
               (HamsterWheelBounceState *this,MVInteractableBase *interactable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).bounceVelocity.x = (pVVar2->zeroVector).x;
  (this->fields).bounceVelocity.y = fVar3;
  (this->fields).bounceVelocity.z = fVar4;
  (this->fields).interactable = interactable;
  if (bVar1) {
    uVar5 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return;
}

