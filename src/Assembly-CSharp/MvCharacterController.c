
/* Void Awake() */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_Awake
               (MvCharacterController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
    func_?(TypeInfo__MvCharacterController);
  }
  if (TypeInfo__MvCharacterController->static_fields->layerMask == -1) {
    uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Player,(MethodInfo *)0x0);
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__MvCharacterController->static_fields->layerMask =
         ~(1 << (uVar1 & 0x1f)) & 0xfffffffbU & ~(1 << (uVar2 & 0x1f));
  }
  return;
}


/* Boolean CheckOverLap() */

bool Assembly-CSharp.dll::MvCharacterController::MvCharacterController_CheckOverLap
               (MvCharacterController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe0,this_00,(MethodInfo *)0x0);
    uVar2._0_4_ = (this->fields).center.x;
    uVar2._4_4_ = (this->fields).center.y;
    fVar3 = (this->fields).center.z;
    uVar4._0_4_ = pVVar1->x;
    uVar4._4_4_ = pVVar1->y;
    fVar5 = pVVar1->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = fVar5;
    a.x = (float)(int)uVar4;
    a.y = (float)(int)((ulonglong)uVar4 >> 0x20);
    b.z = fVar3;
    b.x = (float)(int)uVar2;
    b.y = (float)(int)((ulonglong)uVar2 >> 0x20);
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffe0,a,b,(MethodInfo *)0x0);
    puVar6 = (undefined *)pVVar1->z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar3 = (this->fields).elipsoidRadius.z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)&stack0xffffffd0,(MethodInfo *)0x0);
    fVar5 = pQVar7->x;
    fVar8 = pQVar7->y;
    fVar9 = pQVar7->z;
    fVar10 = pQVar7->w;
    if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
      puVar6 = &UNK_?;
      func_?();
    }
    ignoreWoIds = (this->fields).IgnoreWoIds;
    layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
    if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
      puVar6 = &UNK_?;
      func_?();
    }
    radius.y = fVar8;
    radius.x = fVar5;
    radius.z = fVar3;
    position.y = fVar10;
    position.x = fVar9;
    position.z = (float)puVar6;
    rotation.y = fVar8;
    rotation.x = fVar5;
    rotation.z = fVar9;
    rotation.w = fVar10;
    bVar11 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckBool
                      (radius,position,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
    return bVar11 != 0;
  }
  func_?();
  pcVar12 = (code *)swi(3);
  bVar11 = (*pcVar12)();
  return bVar11;
}


/* Vector3 CollideWithWorld(Vector3 ByRef, Vector3 ByRef, Boolean ByRef) */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_CollideWithWorld
                    (Vector3 *__return_storage_ptr__,MvCharacterController *this,Vector3 *ePos,
                    Vector3 *eVel,bool *foundValidPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff00,0,0x48);
  puStack_1 = (undefined *)0x0;
  stack0xffffff4c = 0.0;
  if ((this->fields).collisionRecursionDepth < 8) {
    pVVar2 = &(this->fields).elipsoidRadius;
    pVVar3 = MathFunctions::MathFunctions_MultiplyVector
                        ((Vector3 *)&stack0xffffffd0,ePos,pVVar2,(MethodInfo *)0x0);
    uVar4._0_4_ = pVVar3->x;
    uVar4._4_4_ = pVVar3->y;
    pVVar2 = MathFunctions::MathFunctions_MultiplyVector
                        ((Vector3 *)&stack0xffffffd0,eVel,pVVar2,(MethodInfo *)0x0);
    uVar5 = pVVar2->x;
    uVar6 = pVVar2->y;
    fVar7 = pVVar2->z;
    func_?(&stack0xffffffd0,&stack0xffffffc4,0);
    fVar8 = 0.0;
    fVar9 = 0.0;
    uVar10 = 0;
    uVar11._0_4_ = 0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    func_?(&stack0xffffff8c,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    VVar14 = (this->fields).elipsoidRadius;
    fVar15 = (float10)func_?(&stack0xffffffc4,0);
    ignoreWoIds = (this->fields).IgnoreWoIds;
    if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
      func_?();
    }
    ray.m_Origin.y = (float)(undefined4)uVar11;
    ray.m_Origin.x = (float)uVar10;
    ray.m_Origin.z = fVar12;
    ray.m_Direction.x = fVar13;
    ray.m_Direction.y = fVar8;
    ray.m_Direction.z = fVar9;
    bVar16 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray,VVar14,(float)fVar15,(VoxelHit *)&stack0xffffff00,ignoreWoIds,
                        TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0)
    ;
    if (bVar16 != 0) {
      VVar14 = (this->fields).elipsoidRadius;
      if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
        func_?();
      }
      VVar17.y = (float)uVar6;
      VVar17.x = (float)uVar5;
      VVar17.z = fVar7;
      distance = MvCharacterController_DistanceR3SpaceToESpace
                           (in_stack_18,VVar17,VVar14,(MethodInfo *)0x0);
      uVar5 = 0;
      pVVar2 = &(this->fields).elipsoidRadius;
      vec0 = (Vector3 *)&stack0xffffff00;
      pVVar3 = (Vector3 *)&stack0xffffffd0;
      puVar19 = &UNK_?;
      pVVar20 = MathFunctions::MathFunctions_DivideVector(pVVar3,vec0,pVVar2,(MethodInfo *)0x0);
      fVar7 = pVVar20->z;
      iVar21 = (int32_t)pVVar20->x;
      pCVar22 = (Cube *)pVVar20->y;
      VVar17 = *pVVar20;
      VVar14 = *pVVar20;
      fVar12 = pVVar20->z;
      uVar6 = 0;
      fVar13 = eVel->z;
      uVar23._0_4_ = eVel->x;
      uVar23._4_4_ = eVel->y;
      uVar24._0_4_ = ePos->x;
      uVar24._4_4_ = ePos->y;
      fVar8 = ePos->z;
      puVar25 = &UNK_?;
      fVar9 = distance;
      iVar26 = iVar21;
      pCVar27 = pCVar22;
      fVar28 = MvCharacterController_GetCollisionAngle
                         (*ePos,*eVel,distance,*pVVar20,(MethodInfo *)0x0);
      if ((fVar28 <= _UNK_?) || (distance == 0.0)) {
        fVar29 = ePos->z;
        uVar10 = ePos->x;
        fVar28 = ePos->y;
        VVar30 = *ePos;
        uVar11._0_4_ = eVel->x;
        uVar11._4_4_ = eVel->y;
        fVar31 = eVel->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar20 = (Vector3 *)&stack0xffffff60;
        puVar32 = &UNK_?;
        b.z = fVar31;
        b.x = (float)(int)uVar11;
        b.y = (float)(int)((ulonglong)uVar11 >> 0x20);
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                  (pVVar20,VVar30,b,(MethodInfo *)0x0);
        fVar33 = ePos->z;
        fVar34 = eVel->z;
        fVar31 = ePos->x;
        fVar35 = ePos->y;
        uVar36 = eVel->x;
        uVar37 = eVel->y;
        if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
          func_?();
        }
        puVar38 = &UNK_?;
        VVar30.y = fVar35;
        VVar30.x = fVar31;
        VVar30.z = fVar33;
        eDir.y = (float)uVar37;
        eDir.x = (float)uVar36;
        eDir.z = fVar34;
        fVar39 = distance;
        fVar40 = MvCharacterController_GetCollisionAngle
                           (VVar30,eDir,distance,VVar14,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        dVar41 = (double)(fVar40 * _UNK_?);
        func_?();
        d = _UNK_? / (float)dVar41 - (_UNK_? / (float)dVar41) * _UNK_?;
        puVar42 = (undefined8 *)func_?();
        uVar11._0_4_ = (undefined4)*puVar42;
        uStack_43 = (undefined4)((ulonglong)*puVar42 >> 0x20);
        fVar40 = *(float *)(puVar42 + 1);
        if ((distance - d < 0.0) || (d <= 0.0)) {
          puStack_1 = (undefined *)eVel->x;
          unique0x0000a404 = eVel->y;
          pVVar2 = (Vector3 *)func_?();
          VVar14 = *pVVar2;
          fVar15 = (float10)func_?();
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          stack0xffffff4c = (float)&stack0xffffff98;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                    ((Vector3 *)&stack0xffffff98,VVar14,(float)fVar15,(MethodInfo *)0x0);
          piVar44 = &(this->fields).collisionRecursionDepth;
          *piVar44 = *piVar44 + 1;
          stack0xffffff4c = (float)&stack0xffffff98;
          pVVar2 = MvCharacterController_CollideWithWorld
                              ((Vector3 *)&stack0xffffff98,this,ePos,(Vector3 *)&stack0xffffff6c,
                               foundValidPosition,(MethodInfo *)0x0);
          fVar7 = pVVar2->y;
          unique0x00017200 = pVVar2->z;
          __return_storage_ptr__->x = pVVar2->x;
          __return_storage_ptr__->y = fVar7;
          __return_storage_ptr__->z = unique0x00017200;
          return __return_storage_ptr__;
        }
        uVar45 = ePos->x;
        uVar46 = ePos->y;
        fVar47 = *(float *)(puVar42 + 1);
        fVar48 = ePos->z;
        uVar4 = *puVar42;
        fVar49 = (float)uVar4;
        fVar50 = (float)((ulonglong)uVar4 >> 0x20);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
          uVar4 = CONCAT44(fVar50,fVar49);
        }
        stack0xffffff4c = (float)&stack0xffffff98;
        VVar14.z = fVar47;
        VVar14.x = (float)(int)uVar4;
        VVar14.y = (float)(int)((ulonglong)uVar4 >> 0x20);
        pVVar51 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                            ((Vector3 *)&stack0xffffff98,VVar14,distance - d,(MethodInfo *)0x0);
        a_00.y = (float)uVar46;
        a_00.x = (float)uVar45;
        a_00.z = fVar48;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                  ((Vector3 *)&stack0xffffff98,a_00,*pVVar51,(MethodInfo *)0x0);
        a_01.y = (float)uStack_43;
        a_01.x = (float)(undefined4)uVar11;
        a_01.z = fVar40;
        pVVar51 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                            ((Vector3 *)&stack0xffffff98,d,a_01,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                  ((Vector3 *)&stack0xffffff98,VVar17,*pVVar51,(MethodInfo *)0x0);
        puVar42 = (undefined8 *)(*(code *)(this->klass->vtable).__unknown_2.method)();
        _puStack_b8 = *puVar42;
        if (SUB41(fVar39,0) != 0) {
          func_?();
          func_?();
          pCVar52 = (Collider *)0x0;
          puVar53 = (undefined4 *)&stack0xfffffe70;
          puVar54 = (undefined4 *)&stack0xfffffea4;
          for (iVar55 = 0x24; iVar55 != 0; iVar55 = iVar55 + -1) {
            *puVar54 = *puVar53;
            puVar53 = puVar53 + 1;
            puVar54 = puVar54 + 1;
          }
          controllerColliderHit.positionTouchingHit.y = (float)pVVar3;
          controllerColliderHit.positionTouchingHit.x = (float)puVar19;
          controllerColliderHit.positionTouchingHit.z = (float)vec0;
          controllerColliderHit.moveDirection.x = (float)pVVar2;
          controllerColliderHit.moveDirection.y = (float)uVar5;
          controllerColliderHit.moveDirection.z = (float)puVar25;
          controllerColliderHit.elipsoidNormal.x = (float)(int)uVar24;
          controllerColliderHit.elipsoidNormal.y = (float)(int)((ulonglong)uVar24 >> 0x20);
          controllerColliderHit.elipsoidNormal.z = fVar8;
          controllerColliderHit.slopeNormal.x = (float)(int)uVar23;
          controllerColliderHit.slopeNormal.y = (float)(int)((ulonglong)uVar23 >> 0x20);
          controllerColliderHit.slopeNormal.z = fVar13;
          controllerColliderHit.impactVelocity.x = fVar9;
          controllerColliderHit.impactVelocity.y = (float)iVar26;
          controllerColliderHit.impactVelocity.z = (float)pCVar27;
          controllerColliderHit._60_4_ = fVar12;
          controllerColliderHit.hit.point.x = (float)uVar6;
          controllerColliderHit.hit.point.y = (float)in_stack_56;
          controllerColliderHit.hit.point.z = (float)in_stack_57;
          controllerColliderHit.hit.normal.x = (float)puVar32;
          controllerColliderHit.hit.normal.y = (float)pVVar20;
          controllerColliderHit.hit.normal.z = (float)uVar10;
          controllerColliderHit.hit.cubePos._0_4_ = fVar28;
          controllerColliderHit.hit._28_4_ = fVar29;
          controllerColliderHit.hit.face = (int32_t)puVar38;
          controllerColliderHit.hit._36_4_ = fVar31;
          controllerColliderHit.hit.woId = (int32_t)fVar35;
          controllerColliderHit.hit.cube = (Cube *)fVar33;
          controllerColliderHit.hit.distance = (float)uVar36;
          controllerColliderHit.hit.collider = (Collider *)uVar37;
          controllerColliderHit.hit.transform = (Transform *)fVar34;
          controllerColliderHit.hit._60_4_ = fVar39;
          controllerColliderHit.hit.interactionFlags._0_4_ = iVar21;
          controllerColliderHit.hit.interactionFlags._4_4_ = pCVar22;
          controllerColliderHit.material = (MVMaterial *)fVar7;
          controllerColliderHit._140_4_ = pCVar52;
          MvCharacterController_SendCharacterCollision(this,controllerColliderHit,in_stack_58)
          ;
        }
        piVar44 = &(this->fields).collisionRecursionDepth;
        *piVar44 = *piVar44 + 1;
        pVVar2 = MvCharacterController_CollideWithWorld
                            ((Vector3 *)&stack0xffffff98,this,(Vector3 *)&stack0xffffffa4,
                             (Vector3 *)&puStack_1,foundValidPosition,(MethodInfo *)0x0);
      }
      else {
        puVar42 = (undefined8 *)func_?();
        uVar4 = *puVar42;
        fVar7 = *(float *)(puVar42 + 1);
        fVar15 = (float10)func_?();
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a.z = fVar7;
        a.x = (float)(int)uVar4;
        a.y = (float)(int)((ulonglong)uVar4 >> 0x20);
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                  ((Vector3 *)&stack0xffffffd0,a,(float)fVar15,(MethodInfo *)0x0);
        piVar44 = &(this->fields).collisionRecursionDepth;
        *piVar44 = *piVar44 + 1;
        pVVar2 = MvCharacterController_CollideWithWorld
                            ((Vector3 *)&stack0xffffffd0,this,ePos,(Vector3 *)&stack0xffffff78,
                             foundValidPosition,(MethodInfo *)0x0);
      }
      fVar7 = pVVar2->y;
      unique0x00017200 = pVVar2->z;
      __return_storage_ptr__->x = pVVar2->x;
      __return_storage_ptr__->y = fVar7;
      __return_storage_ptr__->z = unique0x00017200;
      return __return_storage_ptr__;
    }
    pMVar59 = MvCharacterController_HandleNoCollision
                        ((MvCharacterController_NoCollisionData *)&stack0xffffff94,this,*ePos,*eVel,
                         1,(MethodInfo *)0x0);
    uVar60 = *(undefined1 *)&(pMVar59->position).x;
    uVar61 = *(undefined1 *)((int)&(pMVar59->position).x + 1);
    uVar62 = *(undefined1 *)((int)&(pMVar59->position).x + 2);
    uVar63 = *(undefined1 *)((int)&(pMVar59->position).x + 3);
    uVar64 = *(undefined1 *)&(pMVar59->position).y;
    uVar65 = *(undefined1 *)((int)&(pMVar59->position).y + 1);
    uVar66 = *(undefined1 *)((int)&(pMVar59->position).y + 2);
    uVar67 = *(undefined1 *)((int)&(pMVar59->position).y + 3);
    uVar68 = *(undefined1 *)&(pMVar59->position).z;
    uVar69 = *(undefined1 *)((int)&(pMVar59->position).z + 1);
    uVar70 = *(undefined1 *)((int)&(pMVar59->position).z + 2);
    uVar71 = *(undefined1 *)((int)&(pMVar59->position).z + 3);
    if (pMVar59->valid == 0) {
      fVar7 = ePos->y;
      unique0x00017200 = ePos->z;
      __return_storage_ptr__->x = ePos->x;
      __return_storage_ptr__->y = fVar7;
      __return_storage_ptr__->z = unique0x00017200;
      return __return_storage_ptr__;
    }
  }
  else {
    pMVar59 = MvCharacterController_HandleNoCollision
                        ((MvCharacterController_NoCollisionData *)&stack0xffffff94,this,*ePos,*eVel,
                         1,(MethodInfo *)0x0);
    uVar60 = *(undefined1 *)&(pMVar59->position).x;
    uVar61 = *(undefined1 *)((int)&(pMVar59->position).x + 1);
    uVar62 = *(undefined1 *)((int)&(pMVar59->position).x + 2);
    uVar63 = *(undefined1 *)((int)&(pMVar59->position).x + 3);
    uVar64 = *(undefined1 *)&(pMVar59->position).y;
    uVar65 = *(undefined1 *)((int)&(pMVar59->position).y + 1);
    uVar66 = *(undefined1 *)((int)&(pMVar59->position).y + 2);
    uVar67 = *(undefined1 *)((int)&(pMVar59->position).y + 3);
    uVar68 = *(undefined1 *)&(pMVar59->position).z;
    uVar69 = *(undefined1 *)((int)&(pMVar59->position).z + 1);
    uVar70 = *(undefined1 *)((int)&(pMVar59->position).z + 2);
    uVar71 = *(undefined1 *)((int)&(pMVar59->position).z + 3);
    if (pMVar59->valid == 0) {
      *foundValidPosition = 0;
      fVar7 = ePos->y;
      unique0x00017200 = ePos->z;
      __return_storage_ptr__->x = ePos->x;
      __return_storage_ptr__->y = fVar7;
      __return_storage_ptr__->z = unique0x00017200;
      return __return_storage_ptr__;
    }
  }
  *(undefined1 *)&__return_storage_ptr__->x = uVar60;
  *(undefined1 *)((int)&__return_storage_ptr__->x + 1) = uVar61;
  *(undefined1 *)((int)&__return_storage_ptr__->x + 2) = uVar62;
  *(undefined1 *)((int)&__return_storage_ptr__->x + 3) = uVar63;
  *(undefined1 *)&__return_storage_ptr__->y = uVar64;
  *(undefined1 *)((int)&__return_storage_ptr__->y + 1) = uVar65;
  *(undefined1 *)((int)&__return_storage_ptr__->y + 2) = uVar66;
  *(undefined1 *)((int)&__return_storage_ptr__->y + 3) = uVar67;
  *(undefined1 *)&__return_storage_ptr__->z = uVar68;
  *(undefined1 *)((int)&__return_storage_ptr__->z + 1) = uVar69;
  *(undefined1 *)((int)&__return_storage_ptr__->z + 2) = uVar70;
  *(undefined1 *)((int)&__return_storage_ptr__->z + 3) = uVar71;
  return __return_storage_ptr__;
}


/* Single DistanceESpaceToR3Space(Single, Vector3, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_DistanceESpaceToR3Space
                (float eDistance,Vector3 eDir,Vector3 R3Radius,MethodInfo *method)

{
  VStack_1.z = 0.0;
  fStack_2 = 0.0;
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  uStack_3 = 0;
  puVar4 = (undefined8 *)func_?(&VStack_5,&eDir,0);
  VStack_1.x = (float)*puVar4;
  VStack_1.y = (float)((ulonglong)*puVar4 >> 0x20);
  VStack_1.y = VStack_1.y * eDistance;
  VStack_1.x = VStack_1.x * eDistance;
  VStack_1.z = *(float *)(puVar4 + 1) * eDistance;
  pVVar6 = MathFunctions::MathFunctions_MultiplyVector
                     (&VStack_5,&VStack_1,&R3Radius,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar6->x;
  uStack_3._4_4_ = pVVar6->y;
  fStack_2 = pVVar6->z;
  fVar7 = (float10)func_?(&uStack_3,0);
  return (float)fVar7;
}


/* Single DistanceR3SpaceToESpace(Single, Vector3, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_DistanceR3SpaceToESpace
                (float distance,Vector3 R3Dir,Vector3 R3Radius,MethodInfo *method)

{
  VStack_1.z = 0.0;
  fStack_2 = 0.0;
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  uStack_3 = 0;
  puVar4 = (undefined8 *)func_?(&VStack_5,&R3Dir,0);
  VStack_1.x = (float)*puVar4;
  VStack_1.y = (float)((ulonglong)*puVar4 >> 0x20);
  VStack_1.y = VStack_1.y * distance;
  VStack_1.x = VStack_1.x * distance;
  VStack_1.z = *(float *)(puVar4 + 1) * distance;
  pVVar6 = MathFunctions::MathFunctions_DivideVector
                     (&VStack_5,&VStack_1,&R3Radius,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar6->x;
  uStack_3._4_4_ = pVVar6->y;
  fStack_2 = pVVar6->z;
  fVar7 = (float10)func_?(&uStack_3,0);
  return (float)fVar7;
}


/* Single GetCollisionAngle(Vector3, Vector3, Single, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetCollisionAngle
                (Vector3 ePos,Vector3 eDir,float distance,Vector3 ePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
    func_?(TypeInfo__MvCharacterController);
  }
  uVar1 = eDir._0_8_;
  fVar2 = eDir.z;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffd8,0);
  fVar3 = (float)uVar1;
  fVar4 = (float)((ulonglong)uVar1 >> 0x20);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.y = fVar4;
  a.x = fVar3;
  a.z = fVar2;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xfffffff0,a,distance,(MethodInfo *)0x0);
  a_00.y = ePos.y;
  a_00.x = ePos.x;
  a_00.z = ePos.z;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (&ePos,a_00,*pVVar5,(MethodInfo *)0x0);
  ePos.x = 0.0;
  a_01.y = ePoint.y;
  a_01.x = ePoint.x;
  a_01.z = ePoint.z;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     (&ePoint,a_01,*pVVar5,(MethodInfo *)0x0);
  ePos.x = 0.0;
  uVar1._0_4_ = pVVar5->x;
  uVar1._4_4_ = pVVar5->y;
  fVar2 = pVVar5->z;
  func_?();
  ePoint.x = fVar2;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    ePoint.y = (float)TypeInfo__UnityEngine__Vector3;
    ePoint.x = (float)&UNK_?;
    func_?();
    ePoint.x = fVar2;
  }
  ePoint.y = 0.0;
  ePos.z = eDir.x;
  ePos.y = (float)&UNK_?;
  to.z = ePoint.x;
  to.x = (float)(int)uVar1;
  to.y = (float)(int)((ulonglong)uVar1 >> 0x20);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Angle(eDir,to,(MethodInfo *)0x0)
  ;
  return fVar2;
}


/* Vector3 GetGradientDirection(VoxelHit) */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetGradientDirection
                    (Vector3 *__return_storage_ptr__,MvCharacterController *this,
                    VoxelHit elipsoidHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    uVar3._0_4_ = (this->fields).center.x;
    uVar3._4_4_ = (this->fields).center.y;
    fVar4 = (this->fields).center.z;
    VStack_5.y = pVVar2->x;
    VStack_5.z = pVVar2->y;
    fVar6 = pVVar2->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = fVar6;
    a.x = VStack_5.y;
    a.y = VStack_5.z;
    b_00.z = fVar4;
    b_00.x = (float)(int)uVar3;
    b_00.y = (float)(int)((ulonglong)uVar3 >> 0x20);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       (&VStack_5,a,b_00,(MethodInfo *)0x0);
    fVar4 = pVVar2->x;
    uVar3._0_4_ = pVVar2->z;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down
                       (&VStack_5,(MethodInfo *)0x0);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (&VStack_5,*pVVar2,elipsoidHit.distance,(MethodInfo *)0x0);
    a_00.y = 0.0;
    a_00.x = fVar4;
    a_00.z = (float)uVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
              ((Vector3 *)&stack0xffffffe4,a_00,*pVVar2,(MethodInfo *)0x0);
    pVVar2 = &(this->fields).elipsoidRadius;
    pVVar7 = MathFunctions::MathFunctions_DivideVector
                        (&VStack_5,&elipsoidHit.point,pVVar2,(MethodInfo *)0x0);
    vec1 = pVVar7->x;
    method_00 = pVVar7->y;
    uVar3._0_4_ = pVVar7->z;
    pVVar7 = (Vector3 *)vec1;
    pMVar8 = (MethodInfo *)method_00;
    pVVar9 = MathFunctions::MathFunctions_DivideVector
                        (&VStack_5,(Vector3 *)&stack0xffffffd8,(Vector3 *)vec1,
                         (MethodInfo *)method_00);
    elipsoidHit.cubePos._0_4_ = pMVar8;
    elipsoidHit.normal.z = (float)pVVar7;
    elipsoidHit.face = 0;
    elipsoidHit.point.z = pVVar9->x;
    elipsoidHit.normal.x = pVVar9->y;
    elipsoidHit.normal.y = pVVar9->z;
    elipsoidHit.point.y = (float)&stack0xffffffe4;
    elipsoidHit.point.x = (float)&UNK_?;
    b.y = (float)elipsoidHit.cubePos._0_4_;
    b.x = elipsoidHit.normal.z;
    b.z = (float)uVar3;
    elipsoidHit._28_4_ = (float)uVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)elipsoidHit.point.y,*pVVar9,b,(MethodInfo *)0x0);
    elipsoidHit.face = 0;
    elipsoidHit._28_4_ = &stack0xffffffcc;
    elipsoidHit.cubePos._0_4_ = &stack0xffffffa8;
    elipsoidHit.normal.z = (float)&UNK_?;
    puVar10 = (undefined8 *)func_?();
    VStack_5._4_8_ = *puVar10;
    pTVar1 = *(Transform **)(puVar10 + 1);
    if (VStack_5.z == _UNK_?) {
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        elipsoidHit.interactionFlags._0_4_ = TypeInfo__UnityEngine__Vector3;
        elipsoidHit._60_4_ = &UNK_?;
        func_?();
      }
      elipsoidHit._60_4_ = &stack0xffffffa8;
      elipsoidHit.interactionFlags._0_4_ = (Vector3__Class *)0x0;
      elipsoidHit.transform = (Transform *)&UNK_?;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down
                         ((Vector3 *)elipsoidHit._60_4_,(MethodInfo *)0x0);
    }
    else {
      uVar3._0_4_ = (float)*puVar10;
      pCVar11 = (Collider *)((ulonglong)*puVar10 >> 0x20);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        elipsoidHit.interactionFlags._0_4_ = TypeInfo__UnityEngine__Vector3;
        elipsoidHit._60_4_ = &UNK_?;
        func_?();
      }
      elipsoidHit._60_4_ = &stack0xffffffa8;
      elipsoidHit.interactionFlags._0_4_ = (Vector3__Class *)0x0;
      elipsoidHit.transform = (Transform *)&UNK_?;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                          ((Vector3 *)elipsoidHit._60_4_,(MethodInfo *)0x0);
      elipsoidHit.collider = pCVar11;
      elipsoidHit.distance = (float)uVar3;
      uVar12 = pVVar7->x;
      uVar13 = pVVar7->y;
      elipsoidHit.interactionFlags._4_4_ = pVVar7->z;
      elipsoidHit.cube = (Cube *)&UNK_?;
      lhs.y = (float)elipsoidHit.collider;
      lhs.x = elipsoidHit.distance;
      lhs.z = (float)pTVar1;
      elipsoidHit.transform = pTVar1;
      elipsoidHit._60_4_ = uVar12;
      elipsoidHit.interactionFlags._0_4_ = (Vector3__Class *)uVar13;
      bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Equality
                        (lhs,*pVVar7,(MethodInfo *)0x0);
      if (bVar14 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                            ((Vector3 *)&stack0xffffffa8,(MethodInfo *)0x0);
        rhs.z = (float)pTVar1;
        rhs.x = VStack_5.y;
        rhs.y = VStack_5.z;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
                            ((Vector3 *)&stack0xffffffa8,*pVVar7,rhs,(MethodInfo *)0x0);
        lhs_00.z = (float)pTVar1;
        lhs_00.x = VStack_5.y;
        lhs_00.y = VStack_5.z;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
                  ((Vector3 *)&stack0xffffffa8,lhs_00,*pVVar7,(MethodInfo *)0x0);
        MathFunctions::MathFunctions_MultiplyVector
                  ((Vector3 *)&stack0xffffffa8,(Vector3 *)&stack0xffffffc0,pVVar2,(MethodInfo *)0x0)
        ;
        pVVar2 = (Vector3 *)func_?();
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                           ((Vector3 *)&stack0xffffffa8,*pVVar2,(MethodInfo *)0x0);
      }
      else {
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                           ((Vector3 *)&stack0xffffffa8,(MethodInfo *)0x0);
      }
    }
    uVar3._4_4_ = pVVar2->y;
    uVar3._0_4_ = pVVar2->z;
    __return_storage_ptr__->x = pVVar2->x;
    __return_storage_ptr__->y = uVar3._4_4_;
    __return_storage_ptr__->z = (float)uVar3;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar15 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar15)();
  return pVVar2;
}


/* Single GetMoveBackDistance(Vector3, Vector3, Single, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetMoveBackDistance
                (Vector3 ePos,Vector3 eDir,float distance,Vector3 ePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
    func_?(TypeInfo__MvCharacterController);
  }
  fVar1 = MvCharacterController_GetCollisionAngle(ePos,eDir,distance,ePoint,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  dVar2 = (double)(fVar1 * _UNK_?);
  func_?();
  return _UNK_? / (float)dVar2 - (_UNK_? / (float)dVar2) * _UNK_?;
}


/* Vector3 GetNormal(Vector3, Vector3, Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetNormal
                    (Vector3 *__return_storage_ptr__,Vector3 ePos,Vector3 eDir,float distance,
                    Vector3 ePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&eDir,0);
  fVar1 = eDir.z;
  uVar2._4_4_ = eDir.y;
  uVar2._0_4_ = eDir.x;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = fVar1;
  a.x = (float)uVar2;
  a.y = SUB84(uVar2,4);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xfffffff0,a,distance,(MethodInfo *)0x0);
  a_00.y = ePos.y;
  a_00.x = ePos.x;
  a_00.z = ePos.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (&ePos,a_00,*pVVar3,(MethodInfo *)0x0);
  uVar4 = pVVar3->x;
  uVar5 = pVVar3->y;
  ePos.z = pVVar3->z;
  eDir.x = 0.0;
  ePos.x = (float)uVar4;
  ePos.y = (float)uVar5;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     (&ePos,ePoint,*pVVar3,(MethodInfo *)0x0);
  eDir.x = 0.0;
  uVar6 = pVVar3->x;
  uVar7 = pVVar3->y;
  fVar1 = pVVar3->z;
  ePos.z = (float)&stack0xffffffe4;
  ePos.y = (float)&UNK_?;
  func_?();
  *(ulonglong *)ePoint.z = CONCAT44(uVar7,uVar6);
  *(float *)((int)ePoint.z + 8) = fVar1;
  return (Vector3 *)ePoint.z;
}


/* Vector3 GetNormalizedVector(Vector3) */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetNormalizedVector
                    (Vector3 *__return_storage_ptr__,Vector3 InpVec,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  uStack_3 = 0;
  uStack_4 = 0;
  puVar5 = (undefined8 *)func_?(&VStack_6,&InpVec,0);
  uStack_3 = *puVar5;
  fStack_1 = *(float *)(puVar5 + 1);
  fVar7 = (float10)func_?(&uStack_3,0);
  fVar8 = InpVec.z;
  if ((float)fVar7 == _UNK_?) {
    VStack_6.y = InpVec.x;
    VStack_6.z = InpVec.y;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar8;
    a.x = VStack_6.y;
    a.y = VStack_6.z;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (&VStack_6,a,10000.0,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar9->x;
    uStack_4._4_4_ = pVVar9->y;
    fStack_2 = pVVar9->z;
    puVar5 = (undefined8 *)func_?(&VStack_6,&uStack_4,0);
    uVar10 = *puVar5;
    fVar8 = *(float *)(puVar5 + 1);
    __return_storage_ptr__->x = (float)(int)uVar10;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar10 >> 0x20);
    __return_storage_ptr__->z = fVar8;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = fStack_1;
  return __return_storage_ptr__;
}


/* List`1[MVOverlapResult] GetOverlappingObjects() */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetOverlappingObjects
          (MvCharacterController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe0,this_00,(MethodInfo *)0x0);
    uVar2._0_4_ = (this->fields).center.x;
    uStack_3 = (this->fields).center.y;
    fVar4 = (this->fields).center.z;
    VVar5 = *pVVar1;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    b.z = fVar4;
    b.x = (float)(int)uVar2;
    b.y = (float)(int)(uVar2 >> 0x20);
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffe0,VVar5,b,(MethodInfo *)0x0);
    uVar2._0_4_ = pVVar1->x;
    uStack_3 = pVVar1->y;
    fVar4 = pVVar1->z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar6 = (this->fields).elipsoidRadius.z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)&stack0xffffffc0,(MethodInfo *)0x0);
    fVar8 = pQVar7->x;
    fVar9 = pQVar7->y;
    fVar10 = pQVar7->z;
    fVar11 = pQVar7->w;
    if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
      uStack_3 = (undefined4)(uVar2 >> 0x20);
      uVar2 = CONCAT44(uStack_3,TypeInfo__MvCharacterController);
      func_?();
    }
    ignoreWoIds = (this->fields).IgnoreWoIds;
    layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
    if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
      uStack_3 = (undefined4)(uVar2 >> 0x20);
      uVar2 = CONCAT44(uStack_3,TypeInfo__MVElipsoidOverlapCheck);
      func_?();
    }
    uVar2 = uVar2 & 0xffffffff00000000;
    VVar5.y = (float)ignoreWoIds;
    VVar5.x = (float)layerMask;
    VVar5.z = fVar6;
    position.z = fVar4;
    uStack_3 = (undefined4)(uVar2 >> 0x20);
    position.x = (float)(undefined4)uVar2;
    position.y = (float)uStack_3;
    rotation.y = fVar9;
    rotation.x = fVar8;
    rotation.z = fVar10;
    rotation.w = fVar11;
    pLVar12 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector
                       (VVar5,position,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
    return pLVar12;
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pLVar12 = (List_1_MVOverlapResult_ *)(*pcVar13)();
  return pLVar12;
}


/* MvCharacterController+NoCollisionData HandleNoCollision(Vector3, Vector3, Boolean) */

MvCharacterController_NoCollisionData *
Assembly-CSharp.dll::MvCharacterController::MvCharacterController_HandleNoCollision
          (MvCharacterController_NoCollisionData *__return_storage_ptr__,MvCharacterController *this
          ,Vector3 ePos,Vector3 eVel,bool adjustVerticalOnly,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = 0;
  func_?(&stack0xffffff38,0,0x48);
  func_?(&stack0xfffffef0,0,0x48);
  vec1 = &(this->fields).elipsoidRadius;
  pVVar3 = MathFunctions::MathFunctions_MultiplyVector
                      ((Vector3 *)&stack0xfffffff0,&ePos,vec1,(MethodInfo *)0x0);
  uVar4 = pVVar3->x;
  uVar5 = pVVar3->y;
  fVar6 = pVVar3->z;
  pVVar3 = MathFunctions::MathFunctions_MultiplyVector
                      ((Vector3 *)&stack0xfffffff0,&eVel,vec1,(MethodInfo *)0x0);
  fVar7 = pVVar3->x;
  uVar8 = pVVar3->y;
  fVar9 = pVVar3->z;
  uVar10._0_4_ = pVVar3->x;
  uVar10._4_4_ = pVVar3->y;
  uVar11._0_4_ = pVVar3->z;
  if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
    func_?();
  }
  InpVec.z = (float)uVar11;
  InpVec.x = (float)(int)uVar10;
  InpVec.y = (float)(int)((ulonglong)uVar10 >> 0x20);
  MvCharacterController_GetNormalizedVector((Vector3 *)&stack0xfffffff0,InpVec,(MethodInfo *)0x0);
  InpVec_00.y = eVel.y;
  InpVec_00.x = eVel.x;
  InpVec_00.z = eVel.z;
  pVVar3 = MvCharacterController_GetNormalizedVector
                      ((Vector3 *)&stack0xfffffff0,InpVec_00,(MethodInfo *)0x0);
  fVar12 = ePos.z;
  uVar13 = pVVar3->x;
  uVar14 = pVVar3->y;
  uVar11._0_4_ = pVVar3->z;
  uVar15 = uVar13;
  uVar16 = uVar14;
  fVar17 = eVel.z;
  fVar18 = eVel.x;
  fVar19 = eVel.y;
  fVar20 = ePos.x;
  uVar21._0_4_ = ePos.y;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
    uVar15 = uVar13;
    uVar16 = uVar14;
  }
  a_03.y = (float)uVar21;
  a_03.x = fVar20;
  a_03.z = fVar12;
  b_01.y = fVar19;
  b_01.x = fVar18;
  b_01.z = fVar17;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                      ((Vector3 *)&stack0xfffffff0,a_03,b_01,(MethodInfo *)0x0);
  uVar22 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  fVar12 = pVVar3->x;
  fVar17 = pVVar3->y;
  puVar23 = (undefined *)pVVar3->z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down
                      ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar20 = MvCharacterController_DistanceESpaceToR3Space(0.005,*pVVar3,*vec1,(MethodInfo *)0x0);
  a_06.y = (float)uVar5;
  a_06.x = (float)uVar4;
  a_06.z = fVar6;
  b_02.y = (float)uVar8;
  b_02.x = fVar7;
  b_02.z = fVar9;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
            ((Vector3 *)&stack0xffffffdc,a_06,b_02,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down
            ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
  uVar4 = 0;
  fVar6 = 0.0;
  auStack_24._0_4_ = 0.0;
  auStack_24._4_4_ = 0.0;
  auStack_24._8_4_ = 0.0;
  puStack_25 = (undefined *)0x0;
  func_?();
  voxelHit = (VoxelHit *)&stack0xffffff38;
  fVar18 = (this->fields).elipsoidRadius.z;
  fVar9 = vec1->y;
  ray_00.m_Origin.y = (float)auStack_24._4_4_;
  ray_00.m_Origin.x = (float)auStack_24._0_4_;
  ray_00.m_Origin.z = (float)auStack_24._8_4_;
  ray_00.m_Direction.x = (float)puStack_25;
  ray_00.m_Direction.y = (float)uVar4;
  ray_00.m_Direction.z = fVar6;
  fVar19 = (float)auStack_24._4_4_;
  bVar26 = CollisionDetection::CollisionDetection_MVElipsoidCast
                     (ray_00,*vec1,fVar20,voxelHit,(this->fields).IgnoreWoIds,
                      TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0);
  fVar6 = fVar9;
  if (bVar26 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down
                        ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
    uVar11._0_4_ = vec1->x;
    uVar11._4_4_ = vec1->y;
    fVar6 = (this->fields).elipsoidRadius.z;
    uVar21._0_4_ = pVVar3->x;
    uVar21._4_4_ = pVVar3->y;
    fVar9 = pVVar3->z;
    if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
      func_?();
    }
    uVar22 = (uint)uVar11;
    fVar12 = (float)((ulonglong)uVar11 >> 0x20);
    puVar23 = &UNK_?;
    R3Dir_00.z = fVar9;
    R3Dir_00.x = (float)(int)uVar21;
    R3Dir_00.y = (float)(int)((ulonglong)uVar21 >> 0x20);
    R3Radius_01.z = fVar6;
    R3Radius_01.x = (float)(int)uVar11;
    R3Radius_01.y = (float)(int)((ulonglong)uVar11 >> 0x20);
    MvCharacterController_DistanceR3SpaceToESpace(fVar19,R3Dir_00,R3Radius_01,(MethodInfo *)0x0);
    a_08.y = (float)voxelHit;
    a_08.x = fVar20;
    a_08.z = fVar12;
    b_04.y = (float)puVar23;
    b_04.x = fVar7;
    b_04.z = fVar19;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffdc,a_08,b_04,(MethodInfo *)0x0);
    __return_storage_ptr___00 = pVVar3->x;
    method_00 = pVVar3->y;
    fVar6 = pVVar3->z;
    this = (MvCharacterController *)__return_storage_ptr___00;
    pMVar27 = (MethodInfo *)method_00;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                        ((Vector3 *)__return_storage_ptr___00,(MethodInfo *)method_00);
    ePos.x = (float)pMVar27;
    uVar28 = pVVar3->x;
    uVar29 = pVVar3->y;
    eVel.y = pVVar3->z;
    eVel.z = 0.0;
    uVar4 = 0;
    fVar9 = 0.0;
    auStack_24._0_4_ = 0.0;
    auStack_24._4_4_ = 0.0;
    auStack_24._8_4_ = 0.0;
    puStack_25 = (undefined *)0x0;
    __return_storage_ptr__ = (MvCharacterController_NoCollisionData *)auStack_24;
    ePos.y = fVar6;
    ePos.z = (float)uVar28;
    eVel.x = (float)uVar29;
    func_?();
    ray.m_Origin.y = (float)auStack_24._4_4_;
    ray.m_Origin.x = (float)auStack_24._0_4_;
    ray.m_Origin.z = (float)auStack_24._8_4_;
    ray.m_Direction.x = (float)puStack_25;
    ray.m_Direction.y = (float)uVar4;
    ray.m_Direction.z = fVar9;
    bVar26 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray,*vec1,fVar12,(VoxelHit *)&stack0xffffff38,(this->fields).IgnoreWoIds,
                        TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0)
    ;
    fVar9 = eVel.z;
    fVar6 = ePos.z;
    if (bVar26 == 0) {
      uVar11._0_4_ = eVel.x;
      fVar12 = eVel.y;
      fVar17 = ePos.x;
      fVar18 = ePos.y;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a_01.y = fVar18;
      a_01.x = fVar17;
      a_01.z = fVar6;
      b.y = fVar12;
      b.x = (float)uVar11;
      b.z = fVar9;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)&stack0xffffffdc,a_01,b,(MethodInfo *)0x0);
      fVar30 = pVVar3->x;
      fVar31 = pVVar3->y;
      fVar6 = pVVar3->z;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                          ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                          ((Vector3 *)&stack0xffffffdc,_UNK_? - fVar7,*pVVar3,
                           (MethodInfo *)0x0);
      a_04.y = fVar31;
      a_04.x = fVar30;
      a_04.z = fVar6;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)&stack0xfffffff0,a_04,*pVVar3,(MethodInfo *)0x0);
    }
    else {
      uVar11._0_4_ = eVel.x;
      fVar12 = eVel.y;
      fVar17 = ePos.x;
      fVar18 = ePos.y;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a_02.y = fVar18;
      a_02.x = fVar17;
      a_02.z = fVar6;
      b_00.y = fVar12;
      b_00.x = (float)uVar11;
      b_00.z = fVar9;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)&stack0xffffffdc,a_02,b_00,(MethodInfo *)0x0);
      fVar19 = pVVar3->x;
      fVar20 = pVVar3->y;
      fVar6 = pVVar3->z;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                          ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                          ((Vector3 *)&stack0xffffffdc,_UNK_? - fVar7,*pVVar3,
                           (MethodInfo *)0x0);
      a_05.y = fVar20;
      a_05.x = fVar19;
      a_05.z = fVar6;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)&stack0xfffffff0,a_05,*pVVar3,(MethodInfo *)0x0);
      uVar22 = uVar22 & 0xffffff00;
    }
    fVar6 = ePos.z;
    fVar32 = pVVar3->x;
    fVar33 = pVVar3->y;
    fVar7 = pVVar3->z;
    fVar12 = fVar32;
    fVar17 = fVar33;
    puVar23 = (undefined *)fVar7;
    fVar9 = fVar32;
    uVar11._0_4_ = fVar33;
    fVar18 = ePos.x;
    fVar19 = ePos.y;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
      fVar12 = fVar32;
      fVar17 = fVar33;
    }
    a_07.y = (float)uVar11;
    a_07.x = fVar9;
    a_07.z = fVar7;
    b_03.y = fVar19;
    b_03.x = fVar18;
    b_03.z = fVar6;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        ((Vector3 *)&stack0xffffffdc,a_07,b_03,(MethodInfo *)0x0);
    uVar34._0_4_ = pVVar3->x;
    uVar34._4_4_ = pVVar3->y;
    fVar7 = pVVar3->z;
    if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
      func_?();
    }
    InpVec_01.z = fVar7;
    InpVec_01.x = (float)(int)uVar34;
    InpVec_01.y = (float)(int)((ulonglong)uVar34 >> 0x20);
    pVVar3 = MvCharacterController_GetNormalizedVector
                        ((Vector3 *)&stack0xfffffff0,InpVec_01,(MethodInfo *)0x0);
    uVar15 = pVVar3->x;
    uVar16 = pVVar3->y;
    uVar11._0_4_ = pVVar3->z;
    pVVar3 = MathFunctions::MathFunctions_MultiplyVector
                        ((Vector3 *)&stack0xfffffff0,(Vector3 *)&stack0xffffff90,vec1,
                         (MethodInfo *)0x0);
    pVVar3 = MvCharacterController_GetNormalizedVector
                        ((Vector3 *)&stack0xfffffff0,*pVVar3,(MethodInfo *)pVVar3->z);
    fVar6 = pVVar3->x;
    fVar18 = pVVar3->y;
  }
  if (adjustVerticalOnly == 0) {
    fVar7 = (pMVar1->fields).elipsoidRadius.z;
    uVar35._0_4_ = vec1->x;
    uVar35._4_4_ = vec1->y;
    if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
      func_?();
    }
    eDir.y = (float)uVar16;
    eDir.x = (float)uVar15;
    eDir.z = (float)uVar11;
    R3Radius_00.z = fVar7;
    R3Radius_00.x = (float)(int)uVar35;
    R3Radius_00.y = (float)(int)((ulonglong)uVar35 >> 0x20);
    MvCharacterController_DistanceESpaceToR3Space(0.005,eDir,R3Radius_00,(MethodInfo *)0x0);
    auStack_24._0_4_ = 0.0;
    auStack_24._4_4_ = 0.0;
    auStack_24._8_4_ = 0.0;
    puStack_25 = (undefined *)0x0;
    uVar22 = 0;
    fVar12 = 0.0;
    fVar19 = fVar18;
    func_?();
    fVar36 = vec1->x;
    fVar37 = vec1->y;
    fVar7 = (pMVar1->fields).elipsoidRadius.z;
    fVar38 = (float10)func_?();
    fVar9 = (float)TypeInfo__MvCharacterController->static_fields->layerMask;
    ray_01.m_Origin.y = (float)auStack_24._4_4_;
    ray_01.m_Origin.x = (float)auStack_24._0_4_;
    ray_01.m_Origin.z = (float)auStack_24._8_4_;
    ray_01.m_Direction.x = (float)puStack_25;
    ray_01.m_Direction.y = (float)uVar22;
    ray_01.m_Direction.z = fVar12;
    radius.y = fVar37;
    radius.x = fVar36;
    radius.z = fVar7;
    fVar12 = (float)auStack_24._4_4_;
    fVar17 = (float)auStack_24._8_4_;
    puVar23 = puStack_25;
    bVar26 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray_01,radius,(float)fVar38 + fVar19,(VoxelHit *)&stack0xfffffef0,
                        (this->fields).IgnoreWoIds,(int32_t)fVar9,(MethodInfo *)0x0);
    if (bVar26 != 0) {
      fVar7 = (pMVar1->fields).elipsoidRadius.z;
      uVar39._0_4_ = vec1->x;
      uVar39._4_4_ = vec1->y;
      if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
        func_?();
      }
      eVel.x = fVar9;
      ePos.z = fVar18;
      ePos.y = fVar6;
      eVel.y = (float)uVar39;
      eVel.z = (float)((ulonglong)uVar39 >> 0x20);
      R3Dir.y = ePos.z;
      R3Dir.x = ePos.y;
      R3Dir.z = eVel.x;
      R3Radius.z = fVar7;
      R3Radius.x = (float)(int)uVar39;
      R3Radius.y = (float)(int)((ulonglong)uVar39 >> 0x20);
      ePos.x = fVar7;
      fVar18 = MvCharacterController_DistanceR3SpaceToESpace(fVar7,R3Dir,R3Radius,(MethodInfo *)0x0)
      ;
      eVel.z = (float)&UNK_?;
      fVar38 = (float10)func_?();
      fVar6 = ePos.z;
      eVel.y = (float)&stack0xffffff90;
      eVel.z = 0.0;
      eVel.x = (float)&UNK_?;
      fVar9 = ePos.x;
      fVar12 = ePos.y;
      fVar40 = (float10)func_?();
      fVar17 = (float)fVar38 + _UNK_?;
      fVar7 = (float)fVar40;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.y = fVar37;
      a.x = fVar36;
      a.z = (float)uVar11;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          ((Vector3 *)&stack0xffffffdc,a,fVar7 - (fVar17 - fVar18),(MethodInfo *)0x0
                          );
      a_00.y = fVar12;
      a_00.x = fVar9;
      a_00.z = fVar6;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)&stack0xfffffff0,a_00,*pVVar3,(MethodInfo *)0x0);
      uVar22 = CONCAT31((int3)(uVar22 >> 8),1);
      uVar41 = pVVar3->x;
      uVar42 = pVVar3->y;
      puVar23 = (undefined *)pVVar3->z;
      fVar12 = (float)uVar41;
      fVar17 = (float)uVar42;
    }
  }
  (__return_storage_ptr__->position).x = fVar12;
  (__return_storage_ptr__->position).y = fVar17;
  (__return_storage_ptr__->position).z = (float)puVar23;
  *(uint *)&__return_storage_ptr__->valid = uVar22;
  return __return_storage_ptr__;
}


/* Void Init(Single, Single, Vector3) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_Init
               (MvCharacterController *this,float radius,float height,Vector3 center,
               MethodInfo *method)

{
  fStack_1 = 0.0;
  (this->fields).center.x = (float)(int)center._0_8_;
  (this->fields).center.y = (float)(int)((ulonglong)center._0_8_ >> 0x20);
  uStack_2 = 0;
  fVar3 = height * _UNK_?;
  (this->fields).center.z = center.z;
  func_?(&uStack_2,radius,fVar3,radius,0);
  (this->fields).elipsoidRadius.x = (float)(undefined4)uStack_2;
  (this->fields).elipsoidRadius.y = (float)uStack_2._4_4_;
  uStack_4 = 0;
  (this->fields).elipsoidRadius.z = fStack_1;
  fStack_5 = 0.0;
  func_?(&uStack_4,center.x,center.y,center.z,0);
  (this->fields).centerBase.x = (float)(undefined4)uStack_4;
  (this->fields).centerBase.y = (float)uStack_4._4_4_;
  (this->fields).centerBase.z = fStack_5;
  uStack_6 = 0;
  fStack_7 = 0.0;
  func_?(&uStack_6,(this->fields).elipsoidRadius.x,(this->fields).elipsoidRadius.y,
                  (this->fields).elipsoidRadius.z,0);
  (this->fields).radiusBase.x = (float)(undefined4)uStack_6;
  (this->fields).radiusBase.y = (float)uStack_6._4_4_;
  (this->fields).radiusBase.z = fStack_7;
  return;
}


/* Void Move(Vector3, Boolean) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_Move
               (MvCharacterController *this,Vector3 motion,bool sendCollisionData,MethodInfo *method
               )

{
  pMVar1 = this->klass;
  (this->fields).sendCollisionData = sendCollisionData;
  (*(code *)(pMVar1->vtable).__unknown_1.method)
            (this,motion._0_8_,motion.z,(pMVar1->vtable).__unknown_2.methodPtr);
  (this->fields).sendCollisionData = 1;
  return;
}


/* Boolean OverlapCheckCollision(Vector3) */

bool Assembly-CSharp.dll::MvCharacterController::MvCharacterController_OverlapCheckCollision
               (MvCharacterController *this,Vector3 R3Position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = (this->fields).elipsoidRadius.x;
  uStack_1._4_4_ = (this->fields).elipsoidRadius.y;
  fVar2 = (this->fields).elipsoidRadius.z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     (&QStack_4,(MethodInfo *)0x0);
  QStack_4.x = pQVar3->x;
  QStack_4.y = pQVar3->y;
  QStack_4.z = pQVar3->z;
  QStack_4.w = pQVar3->w;
  if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
    func_?(TypeInfo__MvCharacterController);
  }
  ignoreWoIds = (this->fields).IgnoreWoIds;
  layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
  if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  radius.z = fVar2;
  radius.x = (float)(undefined4)uStack_1;
  radius.y = (float)uStack_1._4_4_;
  rotation.y = QStack_4.y;
  rotation.x = QStack_4.x;
  rotation.z = QStack_4.z;
  rotation.w = QStack_4.w;
  bVar5 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckBool
                    (radius,R3Position,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  return bVar5 != 0;
}


/* List`1[MVOverlapResult] OverlappingObjects(Vector3) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MvCharacterController::MvCharacterController_OverlappingObjects
          (MvCharacterController *this,Vector3 R3Position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = (this->fields).elipsoidRadius.x;
  uStack_1._4_4_ = (this->fields).elipsoidRadius.y;
  fVar2 = (this->fields).elipsoidRadius.z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     (&QStack_4,(MethodInfo *)0x0);
  QStack_4.x = pQVar3->x;
  QStack_4.y = pQVar3->y;
  QStack_4.z = pQVar3->z;
  QStack_4.w = pQVar3->w;
  if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
    func_?(TypeInfo__MvCharacterController);
  }
  ignoreWoIds = (this->fields).IgnoreWoIds;
  layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
  if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  radius.z = fVar2;
  radius.x = (float)(undefined4)uStack_1;
  radius.y = (float)uStack_1._4_4_;
  rotation.y = QStack_4.y;
  rotation.x = QStack_4.x;
  rotation.z = QStack_4.z;
  rotation.w = QStack_4.w;
  pLVar5 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector
                     (radius,R3Position,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  return pLVar5;
}


/* Void SendCharacterCollision(MVControllerColliderHit) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_SendCharacterCollision
               (MvCharacterController *this,MVControllerColliderHit controllerColliderHit,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    in_stack_1 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields).sendCollisionData != 0) {
    this_00 = (this->fields).OnControllerColliderHit;
    if (this_00 == (Action_1_MVControllerColliderHit_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar3 = (undefined4 *)&stack0x00000008;
    puVar4 = &uStack_5;
    pMVar6 = MethodInfo__System__Action<MVControllerColliderHit>__Invoke_MVControllerColliderHit_;
    for (iVar7 = 0x24; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    obj.material = (MVMaterial *)in_stack_1;
    auVar8 = in_stack_9._0_12_;
    auVar10 = in_stack_9._12_12_;
    auVar11 = in_stack_9._24_12_;
    auVar12 = in_stack_9._36_12_;
    auVar13 = in_stack_9._48_12_;
    auVar14 = in_stack_9._64_72_;
    obj.positionTouchingHit.x = (float)auVar8._0_4_;
    obj.positionTouchingHit.y = (float)auVar8._4_4_;
    obj.positionTouchingHit.z = (float)auVar8._8_4_;
    obj.moveDirection.x = (float)auVar10._0_4_;
    obj.moveDirection.y = (float)auVar10._4_4_;
    obj.moveDirection.z = (float)auVar10._8_4_;
    obj.elipsoidNormal.x = (float)auVar11._0_4_;
    obj.elipsoidNormal.y = (float)auVar11._4_4_;
    obj.elipsoidNormal.z = (float)auVar11._8_4_;
    obj.slopeNormal.x = (float)auVar12._0_4_;
    obj.slopeNormal.y = (float)auVar12._4_4_;
    obj.slopeNormal.z = (float)auVar12._8_4_;
    obj.impactVelocity.x = (float)auVar13._0_4_;
    obj.impactVelocity.y = (float)auVar13._4_4_;
    obj.impactVelocity.z = (float)auVar13._8_4_;
    obj._60_4_ = in_stack_9._60_4_;
    auVar8 = auVar14._0_12_;
    auVar10 = auVar14._12_12_;
    uVar15 = auVar14._24_6_;
    obj.hit.point.x = (float)auVar8._0_4_;
    obj.hit.point.y = (float)auVar8._4_4_;
    obj.hit.point.z = (float)auVar8._8_4_;
    obj.hit.normal.x = (float)auVar10._0_4_;
    obj.hit.normal.y = (float)auVar10._4_4_;
    obj.hit.normal.z = (float)auVar10._8_4_;
    obj.hit.cubePos.x = (short)uVar15;
    obj.hit.cubePos.y = (short)((uint6)uVar15 >> 0x10);
    obj.hit.cubePos.z = (short)((uint6)uVar15 >> 0x20);
    obj.hit._30_2_ = auVar14._30_2_;
    obj.hit.face = auVar14._32_4_;
    obj.hit.isCubeHit = auVar14[0x24];
    obj.hit._37_3_ = auVar14._37_3_;
    obj.hit.woId = auVar14._40_4_;
    obj.hit.cube = (Cube *)auVar14._44_4_;
    obj.hit.distance = (float)auVar14._48_4_;
    obj.hit.collider = (Collider *)auVar14._52_4_;
    obj.hit.transform = (Transform *)auVar14._56_4_;
    obj.hit._60_4_ = auVar14._60_4_;
    obj.hit.interactionFlags = auVar14._64_8_;
    obj._140_4_ = pMVar6;
    mscorlib.dll::System::Action`1[MVControllerColliderHit]::
    Action_1_MVControllerColliderHit__Invoke(this_00,obj,unaff_EDI);
  }
  return;
}


/* Void SetScale(Single) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_SetScale
               (MvCharacterController *this,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  VStack_1.y = (this->fields).centerBase.x;
  VStack_1.z = (this->fields).centerBase.y;
  fVar2 = (this->fields).centerBase.z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = fVar2;
  a.x = VStack_1.y;
  a.y = VStack_1.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&VStack_1,a,scale,(MethodInfo *)0x0);
  fVar4 = pVVar3->y;
  fVar2 = pVVar3->z;
  (this->fields).center.x = pVVar3->x;
  (this->fields).center.y = fVar4;
  (this->fields).center.z = fVar2;
  fStack_5 = (this->fields).radiusBase.z * scale;
  VStack_1.x = 0.0;
  uStack_6 = CONCAT44((this->fields).radiusBase.y * scale,(this->fields).radiusBase.x * scale);
  func_?(&uStack_6);
  (this->fields).elipsoidRadius.x = (float)(undefined4)uStack_6;
  (this->fields).elipsoidRadius.y = (float)uStack_6._4_4_;
  fVar2 = (this->fields).offsetBase;
  (this->fields).elipsoidRadius.z = fStack_5;
  (this->fields).offsetFactor = fVar2 * scale;
  return;
}


/* Boolean TestWithOutSliding(Single, Vector3, Vector3, MVControllerColliderHit ByRef) */

bool Assembly-CSharp.dll::MvCharacterController::MvCharacterController_TestWithOutSliding
               (MvCharacterController *this,float distance,Vector3 direction,Vector3 motion,
               MVControllerColliderHit *colliderHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  iStack_2 = 0;
  func_?();
  func_?();
  piVar3 = &iStack_2;
  func_?();
  pVVar4 = &direction;
  uVar5 = 0;
  func_?();
  uVar6 = 0;
  pMVar7 = this;
  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar8 == (Transform *)0x0) {
    func_?();
    pcVar9 = (code *)swi(3);
    bVar10 = (*pcVar9)();
    return bVar10;
  }
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     ((Vector3 *)&stack0xffffffd0,pTVar8,(MethodInfo *)0x0);
  VStack_12.y = (this->fields).center.x;
  VStack_12.z = (this->fields).center.y;
  uStack_13._0_4_ = pVVar11->x;
  uStack_13._4_4_ = (int32_t)pVVar11->y;
  fVar14 = pVVar11->z;
  fVar15 = (this->fields).center.z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a.z = fVar14;
  a.x = (float)(undefined4)uStack_13;
  a.y = (float)uStack_13._4_4_;
  b.z = fVar15;
  b.x = VStack_12.y;
  b.y = VStack_12.z;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (&VStack_12,a,b,(MethodInfo *)0x0);
  pCVar16 = (Collider *)pVVar11->x;
  pTVar8 = (Transform *)pVVar11->y;
  uStack_13 = CONCAT44(pVVar11->z,(undefined4)uStack_13);
  fVar17 = 0.0;
  fVar18 = 0.0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  func_?();
  fVar15 = fStack_1;
  ignoreWoIds = (this->fields).IgnoreWoIds;
  VStack_12.y = (float)(undefined4)iStack_2;
  VStack_12.z = (float)iStack_2._4_4_;
  fVar14 = (this->fields).offsetFactor;
  if ((((uint)(TypeInfo__MvCharacterController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MvCharacterController->_1).cctor_started == 0)) {
    func_?();
  }
  fVar14 = fVar14 + distance;
  fVar23 = 0.0;
  layerMask = (float)TypeInfo__MvCharacterController->static_fields->layerMask;
  voxelHit = (VoxelHit *)&stack0xffffff70;
  fVar24 = VStack_12.y;
  fVar25 = VStack_12.z;
  ray.m_Origin.y = (float)uVar20;
  ray.m_Origin.x = (float)uVar19;
  ray.m_Origin.z = (float)uVar21;
  ray.m_Direction.x = (float)uVar22;
  ray.m_Direction.y = fVar17;
  ray.m_Direction.z = fVar18;
  radius.z = fVar15;
  radius.x = VStack_12.y;
  radius.y = VStack_12.z;
  bVar10 = CollisionDetection::CollisionDetection_MVElipsoidCast
                    (ray,radius,fVar14,voxelHit,ignoreWoIds,(int32_t)layerMask,(MethodInfo *)0x0);
  if (bVar10 == 0) {
    return 0;
  }
  uVar19 = 1;
  fVar26 = motion.x;
  fVar27 = motion.y;
  pCVar28 = (Cube *)iStack_2;
  fVar29 = (float)((ulonglong)iStack_2 >> 0x20);
  puVar30 = &UNK_?;
  pMVar31 = colliderHit;
  iVar32 = uStack_13._4_4_;
  pCVar33 = pCVar16;
  pTVar34 = pTVar8;
  iVar35 = uStack_13._4_4_;
  iVar36 = iStack_2;
  fVar37 = fStack_1;
  func_?();
  uVar20 = 0;
  ppuVar38 = &puStack_39;
  for (iVar40 = 0x24; iVar40 != 0; iVar40 = iVar40 + -1) {
    *ppuVar38 = (undefined *)(colliderHit->positionTouchingHit).x;
    colliderHit = (MVControllerColliderHit *)&(colliderHit->positionTouchingHit).y;
    ppuVar38 = ppuVar38 + 1;
  }
  controllerColliderHit.positionTouchingHit.y = (float)uVar6;
  controllerColliderHit.positionTouchingHit.x = (float)pMVar7;
  controllerColliderHit.positionTouchingHit.z = (float)pVVar4;
  controllerColliderHit.moveDirection.x = (float)uVar5;
  controllerColliderHit.moveDirection.y = (float)piVar3;
  controllerColliderHit.moveDirection.z = (float)puVar30;
  controllerColliderHit.elipsoidNormal.x = (float)pMVar31;
  controllerColliderHit.elipsoidNormal.y = fVar17;
  controllerColliderHit.elipsoidNormal.z = fVar18;
  controllerColliderHit.slopeNormal.x = fVar24;
  controllerColliderHit.slopeNormal.y = fVar25;
  controllerColliderHit.slopeNormal.z = fVar15;
  controllerColliderHit.impactVelocity.x = fVar14;
  controllerColliderHit.impactVelocity.y = (float)voxelHit;
  controllerColliderHit.impactVelocity.z = (float)ignoreWoIds;
  controllerColliderHit._60_4_ = layerMask;
  controllerColliderHit.hit.point.x = fVar23;
  controllerColliderHit.hit.point.y = in_stack_41;
  controllerColliderHit.hit.point.z = (float)in_stack_42;
  controllerColliderHit.hit.normal.x = in_stack_43;
  controllerColliderHit.hit.normal.y = (float)pCVar16;
  controllerColliderHit.hit.normal.z = (float)pTVar8;
  controllerColliderHit.hit.cubePos.x = (short)iVar32;
  controllerColliderHit.hit.cubePos.y = (short)((uint)iVar32 >> 0x10);
  controllerColliderHit.hit._28_4_ = pCVar28;
  controllerColliderHit.hit.face = (int32_t)fVar29;
  controllerColliderHit.hit._36_4_ = pCVar33;
  controllerColliderHit.hit.woId = (int32_t)pTVar34;
  controllerColliderHit.hit.cube = (Cube *)iVar35;
  controllerColliderHit.hit.distance = (float)(int)iVar36;
  controllerColliderHit.hit.collider = (Collider *)(int)((ulonglong)iVar36 >> 0x20);
  controllerColliderHit.hit.transform = (Transform *)fVar37;
  controllerColliderHit.hit._60_4_ = fVar26;
  controllerColliderHit.hit.interactionFlags._0_4_ = fVar27;
  controllerColliderHit.hit.interactionFlags._4_4_ = motion.z;
  controllerColliderHit.material = (MVMaterial *)uVar19;
  controllerColliderHit._140_4_ = uVar20;
  MvCharacterController_SendCharacterCollision(this,controllerColliderHit,in_stack_44);
  return 1;
}


/* MvCharacterController() */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__MvCharacterController->static_fields->layerMask = -1;
  return;
}


/* MvCharacterController() */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController__ctor
               (MvCharacterController *this,MethodInfo *method)

{
  (this->fields).sendCollisionData = 1;
  (this->fields).offsetFactor = 0.1;
  (this->fields).offsetBase = 0.1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Single get_Height() */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_get_Height
                (MvCharacterController *this,MethodInfo *method)

{
  fVar1 = (this->fields).elipsoidRadius.y;
  return fVar1 + fVar1;
}


/* Boolean get_IsGrounded() */

bool Assembly-CSharp.dll::MvCharacterController::MvCharacterController_get_IsGrounded
               (MvCharacterController *this,MethodInfo *method)

{
  return (this->fields)._IsGrounded_k__BackingField;
}


/* Vector3 get_Velocity() */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_get_Velocity
                    (Vector3 *__return_storage_ptr__,MvCharacterController *this,MethodInfo *method)

{
  fVar1 = (this->fields)._Velocity_k__BackingField.y;
  fVar2 = (this->fields)._Velocity_k__BackingField.z;
  __return_storage_ptr__->x = (this->fields)._Velocity_k__BackingField.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Void set_IsGrounded(Boolean) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_set_IsGrounded
               (MvCharacterController *this,bool value,MethodInfo *method)

{
  (this->fields)._IsGrounded_k__BackingField = value;
  return;
}


/* Void set_Velocity(Vector3) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_set_Velocity
               (MvCharacterController *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._Velocity_k__BackingField.x = value.x;
  (this->fields)._Velocity_k__BackingField.y = value.y;
  (this->fields)._Velocity_k__BackingField.z = value.z;
  return;
}

