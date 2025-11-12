
/* Vector3 ApplyBounceVelocity(Vector3) */

Vector3 * Assembly-CSharp.dll::BounceState::BounceState_ApplyBounceVelocity
                    (Vector3 *__return_storage_ptr__,BounceState *this,Vector3 *velocity,
                    MethodInfo *method)

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


/* Void HandleMoveHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::BounceState::BounceState_HandleMoveHit
               (BounceState *this,MVControllerColliderHit *moveHit,MethodInfo *method)

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
    BounceState_UpdateBounceState(this,&MStack_1,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateBounceState(MVControllerColliderHit) */

void Assembly-CSharp.dll::BounceState::BounceState_UpdateBounceState
               (BounceState *this,MVControllerColliderHit *mvControllerColliderHit,
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
  if ((pMStack_22 != (MVMaterial *)0x0) &&
     (fStack_23 = (pMStack_22->fields)._PhysicalProperties_k__BackingField.toughness,
     pMVar6 != (MVInteractable *)0x0)) {
    fVar24 = (float)(*(pMVar6->klass->vtable).HandleModifierEffect.methodPtr)
                             (pMVar6,0xd,pMVar6,(pMVar6->klass->vtable).HandleModifierEffect.method)
    ;
    if (0.0 < fVar24) {
      ppIStack_25 = *(Il2CppType ***)&mvControllerColliderHit->positionTouchingHit;
      _Stack_1d0 = *(_union_154 *)&(mvControllerColliderHit->positionTouchingHit).z;
      uStack_26 = *(undefined8 *)&mvControllerColliderHit->testWithOutMoving;
      _Stack_1c8 = *(_union_155 *)&(mvControllerColliderHit->moveDirection).y;
      uStack_27 = *(undefined8 *)&mvControllerColliderHit->elipsoidNormal;
      uStack_28._0_4_ = (mvControllerColliderHit->hit).point.x;
      uStack_28._4_4_ = (mvControllerColliderHit->hit).point.y;
      uStack_29 = *(undefined8 *)&(mvControllerColliderHit->hit).point.z;
      uStack_30 = *(undefined8 *)&(mvControllerColliderHit->elipsoidNormal).z;
      uStack_31._0_4_ = (mvControllerColliderHit->slopeNormal).y;
      uStack_31._4_4_ = (mvControllerColliderHit->slopeNormal).z;
      uStack_32._0_4_ = (mvControllerColliderHit->impactVelocity).x;
      uStack_32._4_4_ = (mvControllerColliderHit->impactVelocity).y;
      uStack_33 = *(undefined8 *)&(mvControllerColliderHit->impactVelocity).z;
      uStack_34._0_4_ = (mvControllerColliderHit->hit).normal.y;
      uStack_34._4_4_ = (mvControllerColliderHit->hit).normal.z;
      uStack_35 = *(undefined8 *)&(mvControllerColliderHit->hit).cubePos;
      uStack_36._0_4_ = (mvControllerColliderHit->hit).face;
      uStack_36._4_1_ = (mvControllerColliderHit->hit).isCubeHit;
      uStack_36._5_3_ = *(undefined3 *)&(mvControllerColliderHit->hit).field_0x25;
      uStack_37 = *(undefined8 *)&(mvControllerColliderHit->hit).woId;
      pCStack_38 = (mvControllerColliderHit->hit).cube;
      uStack_39 = *(undefined8 *)&(mvControllerColliderHit->hit).distance;
      pCStack_40 = (mvControllerColliderHit->hit).collider;
      pTStack_41 = (mvControllerColliderHit->hit).transform;
      uStack_42 = (undefined4)(mvControllerColliderHit->hit).interactionFlags;
      uStack_43 = *(undefined4 *)((longlong)&(mvControllerColliderHit->hit).interactionFlags + 4);
      uStack_44 = *(undefined4 *)&mvControllerColliderHit->material;
      uStack_45 = *(undefined4 *)((longlong)&mvControllerColliderHit->material + 4);
      fVar46 = (float)uStack_33;
      fStack_47 = (float)uStack_33;
      uStack_48 = uStack_32;
      fVar49 = (float)FUN_?(&uStack_32);
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
      uStack_32 = CONCAT44(fVar51,fVar50);
      fVar50 = (float)((uint)fVar50 ^ _UNK_?);
      fVar51 = (float)((uint)fVar51 ^ _UNK_?);
      fVar46 = (float)((uint)fVar46 ^ _UNK_?);
      ppIStack_25 = *(Il2CppType ***)&mvControllerColliderHit->positionTouchingHit;
      _Stack_1d0 = *(_union_154 *)&(mvControllerColliderHit->positionTouchingHit).z;
      uStack_26 = *(undefined8 *)&mvControllerColliderHit->testWithOutMoving;
      _Stack_1c8 = *(_union_155 *)&(mvControllerColliderHit->moveDirection).y;
      uStack_27 = *(undefined8 *)&mvControllerColliderHit->elipsoidNormal;
      uStack_30 = *(undefined8 *)&(mvControllerColliderHit->elipsoidNormal).z;
      uStack_31._0_4_ = (mvControllerColliderHit->slopeNormal).y;
      uStack_31._4_4_ = (mvControllerColliderHit->slopeNormal).z;
      uStack_48._0_4_ = (mvControllerColliderHit->impactVelocity).x;
      uStack_48._4_4_ = (mvControllerColliderHit->impactVelocity).y;
      uStack_33 = *(undefined8 *)&(mvControllerColliderHit->impactVelocity).z;
      uStack_28._0_4_ = (mvControllerColliderHit->hit).point.x;
      uStack_28._4_4_ = (mvControllerColliderHit->hit).point.y;
      uStack_29 = *(undefined8 *)&(mvControllerColliderHit->hit).point.z;
      uStack_34._0_4_ = (mvControllerColliderHit->hit).normal.y;
      uStack_34._4_4_ = (mvControllerColliderHit->hit).normal.z;
      uStack_35 = *(undefined8 *)&(mvControllerColliderHit->hit).cubePos;
      uStack_36._0_4_ = (mvControllerColliderHit->hit).face;
      uStack_36._4_1_ = (mvControllerColliderHit->hit).isCubeHit;
      uStack_36._5_3_ = *(undefined3 *)&(mvControllerColliderHit->hit).field_0x25;
      uStack_37 = *(undefined8 *)&(mvControllerColliderHit->hit).woId;
      pCStack_38 = (mvControllerColliderHit->hit).cube;
      uStack_39 = *(undefined8 *)&(mvControllerColliderHit->hit).distance;
      pCStack_40 = (mvControllerColliderHit->hit).collider;
      pTStack_41 = (mvControllerColliderHit->hit).transform;
      uStack_42 = (undefined4)(mvControllerColliderHit->hit).interactionFlags;
      uStack_43 = *(undefined4 *)((longlong)&(mvControllerColliderHit->hit).interactionFlags + 4);
      uStack_44 = *(undefined4 *)&mvControllerColliderHit->material;
      uStack_45 = *(undefined4 *)((longlong)&mvControllerColliderHit->material + 4);
      fVar49 = (float)FUN_?(&mvControllerColliderHit->impactVelocity);
      if (_UNK_? <
          fVar49 * _UNK_? *
          ((float)uStack_31 * fVar51 + fStack_54 * fVar50 + uStack_31._4_4_ * fVar46)) {
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
        fVar50 = fVar24 * _UNK_?;
        fVar46 = MVPhysics::MVPhysics_CalculateJumpForceFromVerticalVelocity
                           (fVar46,(MethodInfo *)0x0);
        fVar46 = fVar46 * fVar24;
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
        uStack_26 = *(undefined8 *)&mvControllerColliderHit->testWithOutMoving;
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
        uStack_34._0_4_ = (mvControllerColliderHit->hit).normal.y;
        uStack_34._4_4_ = (mvControllerColliderHit->hit).normal.z;
        uStack_35 = *(undefined8 *)&(mvControllerColliderHit->hit).cubePos;
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
        ppIStack_25 = *(Il2CppType ***)&mvControllerColliderHit->positionTouchingHit;
        _Stack_1d0 = *(_union_154 *)&(mvControllerColliderHit->positionTouchingHit).z;
        _Stack_1c8 = *(_union_155 *)&(mvControllerColliderHit->moveDirection).y;
        uStack_27 = *(undefined8 *)&mvControllerColliderHit->elipsoidNormal;
        uStack_30 = *(undefined8 *)&(mvControllerColliderHit->elipsoidNormal).z;
        uStack_31._0_4_ = (mvControllerColliderHit->slopeNormal).y;
        uStack_31._4_4_ = (mvControllerColliderHit->slopeNormal).z;
        uStack_48._0_4_ = (mvControllerColliderHit->impactVelocity).x;
        uStack_48._4_4_ = (mvControllerColliderHit->impactVelocity).y;
        uStack_33 = *(undefined8 *)&(mvControllerColliderHit->impactVelocity).z;
        uStack_28._0_4_ = (mvControllerColliderHit->hit).point.x;
        uStack_28._4_4_ = (mvControllerColliderHit->hit).point.y;
        uStack_29 = *(undefined8 *)&(mvControllerColliderHit->hit).point.z;
        uStack_36._0_4_ = (mvControllerColliderHit->hit).face;
        uStack_36._4_1_ = (mvControllerColliderHit->hit).isCubeHit;
        uStack_36._5_3_ = *(undefined3 *)&(mvControllerColliderHit->hit).field_0x25;
        uStack_37 = *(undefined8 *)&(mvControllerColliderHit->hit).woId;
        pCStack_40 = (mvControllerColliderHit->hit).collider;
        pTStack_41 = (mvControllerColliderHit->hit).transform;
        pCStack_38 = (mvControllerColliderHit->hit).cube;
        uStack_39 = *(undefined8 *)&(mvControllerColliderHit->hit).distance;
        uStack_42 = (undefined4)(mvControllerColliderHit->hit).interactionFlags;
        uStack_43 = *(undefined4 *)((longlong)&(mvControllerColliderHit->hit).interactionFlags + 4)
        ;
        uStack_44 = *(undefined4 *)&mvControllerColliderHit->material;
        uStack_45 = *(undefined4 *)((longlong)&mvControllerColliderHit->material + 4);
        fVar55 = (float)((uint)(float)uStack_48 ^ uVar53);
        fVar56 = (float)((uint)uStack_48._4_4_ ^ uVar53);
        fVar57 = (float)((uint)(float)uStack_33 ^ uVar53);
        uStack_32 = CONCAT44(fVar56,fVar55);
        fStack_47 = fVar57;
        uStack_13 = uStack_34;
        uStack_14 = uStack_35;
        uStack_3 = uStack_26;
        fVar24 = (float)FUN_?(&uStack_32);
        fStack_47 = uStack_8._4_4_ * fVar24;
        uStack_32 = CONCAT44((float)uStack_8 * fVar24,uStack_7._4_4_ * fVar24);
        method_00 = (MethodInfo *)auStack_58;
        auStack_58._0_8_ = CONCAT44(fVar56,fVar55);
        auStack_58._8_4_ = fVar57;
        puVar59 = (undefined8 *)FUN_?(auStack_60,method_00,&uStack_32);
        fVar51 = (float)*puVar59;
        fVar61 = (float)((ulonglong)*puVar59 >> 0x20);
        fVar24 = *(float *)(puVar59 + 1);
        fVar46 = *(float *)(puVar59 + 1);
        (this->fields).bounceVelocity.x = (fVar51 - fVar55) + fVar51;
        (this->fields).bounceVelocity.y = (fVar61 - fVar56) + fVar61;
        (this->fields).bounceVelocity.z = (fVar24 - fVar57) + fVar46;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                  (&(this->fields).bounceVelocity,method_00);
        if (fVar50 < fVar49) {
          fVar50 = fVar50 * (fVar50 / fVar49);
        }
        uVar62 = (this->fields).bounceVelocity.x;
        fVar24 = (this->fields).bounceVelocity.y;
        fVar46 = (this->fields).bounceVelocity.z;
        (this->fields).bounceVelocity.x = (float)uVar62 * fVar50;
        (this->fields).bounceVelocity.y = fVar24 * fVar50;
        (this->fields).bounceVelocity.z = fVar46 * fVar50;
      }
    }
    return;
  }
  FUN_?();
  pcVar63 = (code *)swi(3);
  (*pcVar63)();
  return;
}


/* BounceState(MVInteractable) */

void Assembly-CSharp.dll::BounceState::BounceState__ctor
               (BounceState *this,MVInteractable *interactable,MethodInfo *method)

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
    uVar5 = (uint)((ulonglong)&(this->fields).interactable >> 0xc);
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

