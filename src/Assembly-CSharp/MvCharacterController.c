
/* Void Awake() */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_Awake
               (MvCharacterController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MvCharacterController);
    func_?(&StringLiteral_Player);
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MvCharacterController);
  }
  if (TypeInfo__MvCharacterController->static_fields->layerMask == -1) {
    uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Player,(MethodInfo *)0x0);
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
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
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    uVar4 = (this->fields).center.x;
    uVar5 = (this->fields).center.y;
    R3Position.y = (float)uVar3 + (float)uVar5;
    R3Position.x = (float)uVar4 + (float)uVar2;
    R3Position.z = pVVar1->z + (this->fields).center.z;
    bVar6 = MvCharacterController_OverlapCheckCollision(this,R3Position,(MethodInfo *)0x0);
    return bVar6;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Vector3 CollideWithWorld(Vector3 ByRef, Vector3 ByRef, Boolean ByRef) */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_CollideWithWorld
                    (Vector3 *__return_storage_ptr__,MvCharacterController *this,Vector3 *ePos,
                    Vector3 *eVel,bool *foundValidPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MvCharacterController);
    cRam_? = '\x01';
  }
  func_?(&stack0xfffffef4,0,0x48);
  if ((this->fields).collisionRecursionDepth < 8) {
    pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                        ((Vector3 *)&stack0xffffffec,ePos,&(this->fields).elipsoidRadius,
                         (MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                        ((Vector3 *)&stack0xffffffa0,eVel,&(this->fields).elipsoidRadius,
                         (MethodInfo *)0x0);
    fVar5 = pVVar1->z;
    uVar6 = pVVar1->x;
    uVar7 = pVVar1->y;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffa0,*pVVar1,(MethodInfo *)0x0);
    uVar8 = SUB41(fVar4,0);
    uVar9 = (undefined1)((uint)fVar4 >> 8);
    uVar10 = (undefined1)((uint)fVar4 >> 0x10);
    uVar11 = (undefined1)((uint)fVar4 >> 0x18);
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffa0,*pVVar1,(MethodInfo *)0x0);
    uVar12 = pVVar1->x;
    uVar13 = pVVar1->y;
    uVar14._0_4_ = pVVar1->z;
    bVar15 = SUB41((float)uVar14,0);
    uVar16 = (undefined1)((uint)(float)uVar14 >> 8);
    uVar17 = (undefined1)((uint)(float)uVar14 >> 0x10);
    uVar18 = (undefined1)((uint)(float)uVar14 >> 0x18);
    uVar14._4_4_ = (this->fields).elipsoidRadius.z;
    uVar19 = (undefined1)uVar12;
    uVar20 = (undefined1)((uint)uVar12 >> 8);
    uVar21 = (undefined1)((uint)uVar12 >> 0x10);
    uVar22 = (undefined1)((uint)uVar12 >> 0x18);
    uVar23 = (undefined1)uVar13;
    uVar24 = (undefined1)((uint)uVar13 >> 8);
    uVar25 = (undefined1)((uint)uVar13 >> 0x10);
    uVar26 = (undefined1)((uint)uVar13 >> 0x18);
    uVar27._0_4_ = (this->fields).elipsoidRadius.x;
    uVar27._4_4_ = (this->fields).elipsoidRadius.y;
    fVar28 = (float10)func_?();
    ignoreWoIds = (this->fields).IgnoreWoIds;
    uVar14._0_4_ = (float)fVar28;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ray.m_Origin.z._1_1_ = uVar9;
    ray.m_Origin.z._0_1_ = uVar8;
    ray.m_Origin.z._2_1_ = uVar10;
    ray.m_Origin.z._3_1_ = uVar11;
    ray.m_Direction.x._1_1_ = uVar20;
    ray.m_Direction.x._0_1_ = uVar19;
    ray.m_Direction.x._2_1_ = uVar21;
    ray.m_Direction.x._3_1_ = uVar22;
    uVar29 = CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)));
    ray.m_Origin.y = (float)uVar3;
    ray.m_Origin.x = (float)uVar2;
    ray.m_Direction.y = (float)uVar29;
    ray.m_Direction.z =
         (float)(CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(bVar15,uVar29)))) >> 0x20);
    radius.z = uVar14._4_4_;
    radius.x = (float)(int)uVar27;
    radius.y = (float)(int)((ulonglong)uVar27 >> 0x20);
    bVar30 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray,radius,(float)uVar14,(VoxelHit *)&stack0xfffffef4,ignoreWoIds,
                        TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0)
    ;
    if (bVar30 != 0) {
      uVar14._0_4_ = (this->fields).elipsoidRadius.z;
      uVar31._0_4_ = (this->fields).elipsoidRadius.x;
      uVar31._4_4_ = (this->fields).elipsoidRadius.y;
      if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      R3Dir.y = (float)uVar7;
      R3Dir.x = (float)uVar6;
      R3Dir.z = fVar5;
      R3Radius.z = (float)uVar14;
      R3Radius.x = (float)(int)uVar31;
      R3Radius.y = (float)(int)((ulonglong)uVar31 >> 0x20);
      distance = (Cube *)MvCharacterController_DistanceR3SpaceToESpace
                                   (in_stack_32,R3Dir,R3Radius,(MethodInfo *)0x0);
      pVVar1 = MathFunctions::MathFunctions_DivideVector
                          ((Vector3 *)&stack0xffffffec,(Vector3 *)&stack0xfffffef4,
                           &(this->fields).elipsoidRadius,(MethodInfo *)0x0);
      fVar33 = pVVar1->z;
      uVar14._0_4_ = pVVar1->x;
      uVar14._4_4_ = pVVar1->y;
      fVar34 = pVVar1->z;
      fVar35 = (float)uVar14;
      fVar36 = uVar14._4_4_;
      uVar27 = uVar14;
      fVar37 = fVar33;
      fVar38 = MvCharacterController_GetCollisionAngle
                         (*ePos,*eVel,(float)distance,*pVVar1,(MethodInfo *)0x0);
      if ((fVar38 <= _UNK_?) || ((float)distance == 0.0)) {
        uVar39 = ePos->y;
        uVar40 = eVel->y;
        method_00 = (MethodInfo *)((float)uVar40 + (float)uVar39);
        fVar38 = eVel->z;
        fVar41 = ePos->z;
        uVar29 = eVel->x;
        uVar42 = eVel->y;
        fVar43 = eVel->z;
        uVar44 = ePos->x;
        uVar45 = ePos->y;
        uVar46 = eVel->x;
        uVar47 = eVel->y;
        if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        ePos_00.y = (float)uVar45;
        ePos_00.x = (float)uVar44;
        ePos_00.z = fVar41;
        eDir.y = (float)uVar47;
        eDir.x = (float)uVar46;
        eDir.z = fVar43;
        ePoint.z = fVar37;
        ePoint.x = (float)(int)uVar27;
        ePoint.y = (float)(int)((ulonglong)uVar27 >> 0x20);
        pCVar48 = distance;
        fVar43 = MvCharacterController_GetCollisionAngle
                          (ePos_00,eDir,(float)distance,ePoint,(MethodInfo *)0x0);
        dVar49 = (double)(fVar43 * _UNK_?);
        func_?();
        fVar50 = _UNK_? / (float)dVar49 - (_UNK_? / (float)dVar49) * _UNK_?;
        value.y = (float)uVar42;
        value.x = (float)uVar29;
        value.z = fVar38;
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffffb8,value,(MethodInfo *)0x0);
        fVar43 = pVVar1->x;
        fVar51 = pVVar1->y;
        fVar52 = pVVar1->z;
        if (((float)distance - fVar50 < 0.0) || (fVar50 <= 0.0)) {
          func_?();
          func_?();
          piVar53 = &(this->fields).collisionRecursionDepth;
          *piVar53 = *piVar53 + 1;
          pVVar1 = MvCharacterController_CollideWithWorld
                              ((Vector3 *)&stack0xffffffb8,this,ePos,(Vector3 *)&stack0xffffff58,
                               foundValidPosition,(MethodInfo *)0x0);
          fVar4 = pVVar1->y;
          uVar14._0_4_ = pVVar1->z;
          __return_storage_ptr__->x = pVVar1->x;
          __return_storage_ptr__->y = fVar4;
          __return_storage_ptr__->z = (float)uVar14;
          return __return_storage_ptr__;
        }
        fVar54 = ePos->x;
        uVar55 = ePos->y;
        fVar56 = ePos->z;
        fVar57 = pVVar1->x;
        uVar58 = pVVar1->y;
        fVar59 = fVar54 + fVar57 * ((float)distance - fVar50);
        fVar60 = fVar56 + fVar52 * ((float)distance - fVar50);
        fVar61 = fVar35 - fVar43 * fVar50;
        fVar62 = fVar36 - fVar51 * fVar50;
        fVar33 = fVar33 - fVar52 * fVar50;
        fVar63 = fVar33;
        puVar64 = (undefined8 *)(*(code *)(this->klass->vtable).__unknown_2.method)();
        method_01 = (MethodInfo *)((ulonglong)*puVar64 >> 0x20);
        fVar65 = *(float *)(puVar64 + 1);
        puVar66 = &UNK_?;
        func_?();
        fVar67 = 0.0;
        fVar68 = 0.0;
        uVar69 = (this->fields).elipsoidRadius.x;
        uVar70 = (this->fields).elipsoidRadius.y;
        hit.point.y = uVar14._4_4_;
        hit.point.x = (float)uVar14;
        hit.point.z = fVar34;
        hit.normal.x = (float)uVar14;
        hit.normal.y = uVar14._4_4_;
        hit.normal.z = fVar34;
        hit.cubePos._0_4_ = fVar41;
        hit._28_4_ = uVar14._4_4_;
        hit.face = (int32_t)fVar34;
        hit._36_4_ = fVar41;
        hit.woId = (int32_t)pCVar48;
        hit.cube = (Cube *)fVar34;
        hit.distance = fVar41;
        hit.collider = (Collider *)pCVar48;
        hit.transform = (Transform *)puVar66;
        hit._60_4_ = fVar41;
        hit.interactionFlags._0_4_ = pCVar48;
        hit.interactionFlags._4_4_ = fVar61;
        position.y = fVar4;
        position.x = fVar62;
        position.z = (float)uVar69;
        elipsoidRadius.y = (this->fields).elipsoidRadius.z;
        elipsoidRadius.x = (float)uVar70;
        elipsoidRadius.z = fVar33;
        R3Velocity.y = fVar5;
        R3Velocity.x = fVar59;
        R3Velocity.z = 0.0;
        uVar14._0_4_ = fVar5;
        MVControllerColliderHit::MVControllerColliderHit__ctor
                  ((MVControllerColliderHit *)&stack0xfffffe64,hit,position,elipsoidRadius,
                   R3Velocity,0,method_01);
        uVar14._4_4_ = 0.0;
        puVar71 = (undefined4 *)&stack0xfffffe64;
        puVar72 = (undefined4 *)&stack0xffffff5c;
        for (iVar73 = 0x24; iVar73 != 0; iVar73 = iVar73 + -1) {
          *puVar72 = *puVar71;
          puVar71 = puVar71 + 1;
          puVar72 = puVar72 + 1;
        }
        controllerColliderHit.positionTouchingHit.y = fVar59;
        controllerColliderHit.positionTouchingHit.x = fVar33;
        controllerColliderHit.positionTouchingHit.z = fVar5;
        controllerColliderHit.moveDirection.x = fVar68;
        controllerColliderHit.moveDirection.y = fVar67;
        controllerColliderHit.moveDirection.z = (float)method_01;
        controllerColliderHit.elipsoidNormal.x = fVar65;
        controllerColliderHit.elipsoidNormal.y = (float)in_stack_74;
        controllerColliderHit.elipsoidNormal.z = SUB84(in_stack_74,4);
        controllerColliderHit.slopeNormal.x = in_stack_75;
        controllerColliderHit.slopeNormal.y = fVar38;
        controllerColliderHit.slopeNormal.z = fVar43;
        controllerColliderHit.impactVelocity.x = fVar51;
        controllerColliderHit.impactVelocity.y = fVar52;
        controllerColliderHit.impactVelocity.z = fVar4;
        controllerColliderHit._60_4_ = (float)uVar14;
        controllerColliderHit.hit.point.x = fVar35;
        controllerColliderHit.hit.point.y = fVar36;
        controllerColliderHit.hit.point.z = fVar63;
        controllerColliderHit.hit.normal.x = (float)uVar2;
        controllerColliderHit.hit.normal.y = (float)uVar3;
        controllerColliderHit.hit.normal.z._0_1_ = uVar8;
        controllerColliderHit.hit.normal.z._1_1_ = uVar9;
        controllerColliderHit.hit.normal.z._2_1_ = uVar10;
        controllerColliderHit.hit.normal.z._3_1_ = uVar11;
        controllerColliderHit.hit.cubePos.x._0_1_ = uVar19;
        controllerColliderHit.hit.cubePos.x._1_1_ = uVar20;
        controllerColliderHit.hit.cubePos.y._0_1_ = uVar21;
        controllerColliderHit.hit.cubePos.y._1_1_ = uVar22;
        controllerColliderHit.hit.cubePos.z._0_1_ = uVar23;
        controllerColliderHit.hit.cubePos.z._1_1_ = uVar24;
        controllerColliderHit.hit._30_1_ = uVar25;
        controllerColliderHit.hit._31_1_ = uVar26;
        controllerColliderHit.hit.face._0_1_ = bVar15;
        controllerColliderHit.hit.face._1_1_ = uVar16;
        controllerColliderHit.hit.face._2_1_ = uVar17;
        controllerColliderHit.hit.face._3_1_ = uVar18;
        controllerColliderHit.hit.isCubeHit = (char)uVar27;
        controllerColliderHit.hit._37_3_ = (int3)((ulonglong)uVar27 >> 8);
        controllerColliderHit.hit.woId = (int)((ulonglong)uVar27 >> 0x20);
        controllerColliderHit.hit.cube = (Cube *)fVar50;
        controllerColliderHit.hit.distance = fVar54;
        controllerColliderHit.hit.collider = (Collider *)uVar55;
        controllerColliderHit.hit.transform = (Transform *)fVar56;
        controllerColliderHit.hit._60_4_ = fVar37;
        controllerColliderHit.hit.interactionFlags._0_4_ = fVar57;
        controllerColliderHit.hit.interactionFlags._4_4_ = uVar58;
        controllerColliderHit.material = (MVMaterial *)fVar60;
        controllerColliderHit._140_4_ = uVar14._4_4_;
        MvCharacterController_SendCharacterCollision(this,controllerColliderHit,method_00);
        piVar53 = &(this->fields).collisionRecursionDepth;
        *piVar53 = *piVar53 + 1;
        pVVar1 = MvCharacterController_CollideWithWorld
                            ((Vector3 *)&stack0xffffffb8,this,(Vector3 *)&stack0xffffff64,
                             (Vector3 *)&stack0xffffff70,foundValidPosition,(MethodInfo *)0x0);
      }
      else {
        func_?();
        func_?();
        piVar53 = &(this->fields).collisionRecursionDepth;
        *piVar53 = *piVar53 + 1;
        pVVar1 = MvCharacterController_CollideWithWorld
                            ((Vector3 *)&stack0xffffffec,this,ePos,(Vector3 *)&stack0xffffff7c,
                             foundValidPosition,(MethodInfo *)0x0);
      }
      fVar4 = pVVar1->y;
      uVar14._0_4_ = pVVar1->z;
      __return_storage_ptr__->x = pVVar1->x;
      __return_storage_ptr__->y = fVar4;
      __return_storage_ptr__->z = (float)uVar14;
      return __return_storage_ptr__;
    }
    pMVar76 = MvCharacterController_HandleNoCollision
                        ((MvCharacterController_NoCollisionData *)&stack0xffffffb4,this,*ePos,*eVel,
                         1,(MethodInfo *)0x0);
    uVar8 = *(undefined1 *)&(pMVar76->position).x;
    uVar9 = *(undefined1 *)((int)&(pMVar76->position).x + 1);
    uVar10 = *(undefined1 *)((int)&(pMVar76->position).x + 2);
    uVar11 = *(undefined1 *)((int)&(pMVar76->position).x + 3);
    uVar19 = *(undefined1 *)&(pMVar76->position).y;
    uVar20 = *(undefined1 *)((int)&(pMVar76->position).y + 1);
    uVar21 = *(undefined1 *)((int)&(pMVar76->position).y + 2);
    uVar22 = *(undefined1 *)((int)&(pMVar76->position).y + 3);
    uVar23 = *(undefined1 *)&(pMVar76->position).z;
    uVar24 = *(undefined1 *)((int)&(pMVar76->position).z + 1);
    uVar25 = *(undefined1 *)((int)&(pMVar76->position).z + 2);
    uVar26 = *(undefined1 *)((int)&(pMVar76->position).z + 3);
    if (pMVar76->valid == 0) {
      fVar4 = ePos->y;
      uVar14._0_4_ = ePos->z;
      __return_storage_ptr__->x = ePos->x;
      __return_storage_ptr__->y = fVar4;
      __return_storage_ptr__->z = (float)uVar14;
      return __return_storage_ptr__;
    }
  }
  else {
    pMVar76 = MvCharacterController_HandleNoCollision
                        ((MvCharacterController_NoCollisionData *)&stack0xffffffb4,this,*ePos,*eVel,
                         1,(MethodInfo *)0x0);
    uVar8 = *(undefined1 *)&(pMVar76->position).x;
    uVar9 = *(undefined1 *)((int)&(pMVar76->position).x + 1);
    uVar10 = *(undefined1 *)((int)&(pMVar76->position).x + 2);
    uVar11 = *(undefined1 *)((int)&(pMVar76->position).x + 3);
    uVar19 = *(undefined1 *)&(pMVar76->position).y;
    uVar20 = *(undefined1 *)((int)&(pMVar76->position).y + 1);
    uVar21 = *(undefined1 *)((int)&(pMVar76->position).y + 2);
    uVar22 = *(undefined1 *)((int)&(pMVar76->position).y + 3);
    uVar23 = *(undefined1 *)&(pMVar76->position).z;
    uVar24 = *(undefined1 *)((int)&(pMVar76->position).z + 1);
    uVar25 = *(undefined1 *)((int)&(pMVar76->position).z + 2);
    uVar26 = *(undefined1 *)((int)&(pMVar76->position).z + 3);
    if (pMVar76->valid == 0) {
      *foundValidPosition = 0;
      fVar4 = ePos->y;
      uVar14._0_4_ = ePos->z;
      __return_storage_ptr__->x = ePos->x;
      __return_storage_ptr__->y = fVar4;
      __return_storage_ptr__->z = (float)uVar14;
      return __return_storage_ptr__;
    }
  }
  uVar2 = CONCAT13(uVar11,CONCAT12(uVar10,CONCAT11(uVar9,uVar8)));
  __return_storage_ptr__->x = (float)uVar2;
  __return_storage_ptr__->y =
       (float)(int)(CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,uVar2)))) >>
                   0x20);
  __return_storage_ptr__->z = (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)));
  return __return_storage_ptr__;
}


/* Single DistanceESpaceToR3Space(Single, Vector3, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_DistanceESpaceToR3Space
                (float eDistance,Vector3 eDir,Vector3 R3Radius,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_2,eDir,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  eDir.x = (float)(undefined4)uStack_3 * eDistance;
  eDir.y = (float)uStack_3._4_4_ * eDistance;
  eDir.z = pVVar1->z * eDistance;
  pVVar1 = MathFunctions::MathFunctions_MultiplyVector(&VStack_2,&eDir,&R3Radius,(MethodInfo *)0x0)
  ;
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  fVar5 = (float10)func_?(&uStack_3,0);
  return (float)fVar5;
}


/* Single DistanceR3SpaceToESpace(Single, Vector3, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_DistanceR3SpaceToESpace
                (float distance,Vector3 R3Dir,Vector3 R3Radius,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_2,R3Dir,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  R3Dir.x = (float)(undefined4)uStack_3 * distance;
  R3Dir.y = (float)uStack_3._4_4_ * distance;
  R3Dir.z = pVVar1->z * distance;
  pVVar1 = MathFunctions::MathFunctions_DivideVector(&VStack_2,&R3Dir,&R3Radius,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  fVar5 = (float10)func_?(&uStack_3,0);
  return (float)fVar5;
}


/* Single GetCollisionAngle(Vector3, Vector3, Single, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetCollisionAngle
                (Vector3 ePos,Vector3 eDir,float distance,Vector3 ePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MvCharacterController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MvCharacterController);
  }
  VStack_1.x = eDir.x;
  VStack_1.y = eDir.y;
  VStack_1.z = eDir.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (&VStack_1,(MethodInfo *)0x0);
  ePos.x = ePoint.x - (ePos.x + VStack_1.x * distance);
  ePos.y = ePoint.y - (ePos.y + VStack_1.y * distance);
  ePos.z = ePoint.z - (ePos.z + VStack_1.z * distance);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&ePos,(MethodInfo *)0x0);
  VStack_1.z = 0.0;
  VStack_1.x = ePos.y;
  VStack_1.y = ePos.z;
  fVar2 = (float10)func_?(eDir._0_8_,eDir.z,ePos.x);
  return (float)fVar2;
}


/* Vector3 GetGradientDirection(VoxelHit) */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetGradientDirection
                    (Vector3 *__return_storage_ptr__,MvCharacterController *this,
                    VoxelHit elipsoidHit,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 == (Transform *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffb0,this_00,(MethodInfo *)0x0);
  uVar3 = pVVar2->x;
  uVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  uVar6 = (this->fields).center.x;
  uVar7 = (this->fields).center.y;
  fVar8 = (float)uVar6 + (float)uVar3;
  fVar9 = (this->fields).center.z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar11 = (pVVar10->downVector).x;
  uVar12 = (pVVar10->downVector).y;
  VStack_13.z = elipsoidHit.distance * (pVVar10->downVector).z + fVar9 + fVar5;
  VStack_13.y = elipsoidHit.distance * (float)uVar12 + (float)uVar7 + (float)uVar4;
  VStack_13.x = fVar8 + elipsoidHit.distance * (float)uVar11;
  pVVar2 = MathFunctions::MathFunctions_DivideVector
                      ((Vector3 *)&stack0xffffffb0,&elipsoidHit.point,&(this->fields).elipsoidRadius
                       ,(MethodInfo *)0x0);
  fVar5 = pVVar2->x;
  fVar9 = pVVar2->y;
  fVar8 = pVVar2->z;
  pVVar2 = MathFunctions::MathFunctions_DivideVector
                      ((Vector3 *)&stack0xffffffb0,&VStack_13,&(this->fields).elipsoidRadius,
                       (MethodInfo *)0x0);
  uVar14 = pVVar2->x;
  uVar15 = pVVar2->y;
  VStack_13.z = (float)&UNK_?;
  value.y = (float)uVar15 - fVar9;
  value.x = (float)uVar14 - fVar5;
  value.z = pVVar2->z - fVar8;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffffb0,value,(MethodInfo *)0x0);
  uVar16 = pVVar2->y;
  puVar17 = (undefined *)pVVar2->z;
  if ((float)uVar16 != _UNK_?) {
    uVar18._0_4_ = pVVar2->x;
    uVar18._4_4_ = pVVar2->y;
    if (cRam_? == '\0') {
      puVar17 = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar19 = (pVVar10->upVector).x;
    uVar20 = (pVVar10->upVector).y;
    fVar9 = (float)uVar18 - (float)uVar19;
    fVar8 = SUB84(uVar18,4) - (float)uVar20;
    fVar5 = (float)puVar17 - (pVVar10->upVector).z;
    if (_UNK_? <= fVar8 * fVar8 + fVar9 * fVar9 + fVar5 * fVar5) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar2 = MathFunctions::MathFunctions_MultiplyVector
                          ((Vector3 *)&stack0xffffffb0,(Vector3 *)&stack0xffffff98,
                           &(this->fields).elipsoidRadius,(MethodInfo *)0x0);
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffc8,*pVVar2,(MethodInfo *)0x0);
      uVar21 = pVVar2->x;
      uVar22 = pVVar2->y;
      uVar23 = uVar22 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
      fVar5 = (float)((uint)pVVar2->z ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      __return_storage_ptr__->x =
           (float)(uVar21 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
      ;
      __return_storage_ptr__->y = (float)uVar23;
      __return_storage_ptr__->z = fVar5;
      return __return_storage_ptr__;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar9 = (pVVar10->zeroVector).y;
    fVar5 = (pVVar10->zeroVector).z;
    __return_storage_ptr__->x = (pVVar10->zeroVector).x;
    __return_storage_ptr__->y = fVar9;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = (pVVar10->downVector).y;
  fVar5 = (pVVar10->downVector).z;
  __return_storage_ptr__->x = (pVVar10->downVector).x;
  __return_storage_ptr__->y = fVar9;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Single GetMoveBackDistance(Vector3, Vector3, Single, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetMoveBackDistance
                (Vector3 ePos,Vector3 eDir,float distance,Vector3 ePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MvCharacterController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MvCharacterController);
  }
  fVar1 = MvCharacterController_GetCollisionAngle(ePos,eDir,distance,ePoint,(MethodInfo *)0x0);
  dVar2 = (double)(fVar1 * _UNK_?);
  func_?();
  return _UNK_? / (float)dVar2 - (_UNK_? / (float)dVar2) * _UNK_?;
}


/* Vector3 GetNormal(Vector3, Vector3, Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetNormal
                    (Vector3 *__return_storage_ptr__,Vector3 ePos,Vector3 eDir,float distance,
                    Vector3 ePoint,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&eDir,(MethodInfo *)0x0);
  eDir.z = ePoint.z - (ePos.z + eDir.z * distance);
  __return_storage_ptr__->x = ePoint.x - (ePos.x + eDir.x * distance);
  __return_storage_ptr__->y = ePoint.y - (ePos.y + eDir.y * distance);
  __return_storage_ptr__->z = eDir.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (__return_storage_ptr__,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Vector3 GetNormalizedVector(Vector3) */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetNormalizedVector
                    (Vector3 *__return_storage_ptr__,Vector3 InpVec,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xfffffff0,InpVec,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  if (__return_storage_ptr__->x * __return_storage_ptr__->x +
      __return_storage_ptr__->y * __return_storage_ptr__->y +
      __return_storage_ptr__->z * __return_storage_ptr__->z == _UNK_?) {
    InpVec.z = InpVec.z * _UNK_?;
    value.y = InpVec.y * _UNK_?;
    value.x = InpVec.x * _UNK_?;
    value.z = InpVec.z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&InpVec,value,(MethodInfo *)0x0);
    fVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
  }
  return __return_storage_ptr__;
}


/* List`1[MVOverlapResult] GetOverlappingObjects() */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetOverlappingObjects
          (MvCharacterController *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_2,this_00,(MethodInfo *)0x0);
    uVar3 = pVVar1->x;
    uVar4 = pVVar1->y;
    uVar5 = (this->fields).center.x;
    uVar6 = (this->fields).center.y;
    VStack_2.z = (this->fields).center.z;
    fVar7 = VStack_2.z + pVVar1->z;
    VStack_2.x = (float)uVar5;
    if (cRam_? == '\0') {
      VStack_2.y = (float)uVar6;
      func_?(&TypeInfo__MVElipsoidOverlapCheck);
      func_?(&TypeInfo__MvCharacterController);
      cRam_? = '\x01';
    }
    uVar8 = (this->fields).elipsoidRadius.x;
    uVar9 = (this->fields).elipsoidRadius.y;
    fVar10 = (this->fields).elipsoidRadius.z;
    VStack_2.y = (float)uVar8;
    VStack_2.z = (float)uVar9;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
    puVar12 = (undefined *)(pQVar11->identityQuaternion).x;
    pMVar13 = (MvCharacterController__Class *)(pQVar11->identityQuaternion).y;
    fVar14 = (pQVar11->identityQuaternion).z;
    fVar15 = (pQVar11->identityQuaternion).w;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      puVar12 = &UNK_?;
      pMVar13 = TypeInfo__MvCharacterController;
      func_?();
    }
    ignoreWoIds = (this->fields).IgnoreWoIds;
    layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      puVar12 = &UNK_?;
      pMVar13 = (MvCharacterController__Class *)TypeInfo__MVElipsoidOverlapCheck;
      func_?();
    }
    radius.y = VStack_2.z;
    radius.x = VStack_2.y;
    radius.z = fVar10;
    position.z = fVar7;
    position.x = (float)uVar5 + (float)uVar3;
    position.y = (float)uVar6 + (float)uVar4;
    rotation.y = (float)pMVar13;
    rotation.x = (float)puVar12;
    rotation.z = fVar14;
    rotation.w = fVar15;
    pLVar16 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector
                        (radius,position,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
    return pLVar16;
  }
  func_?();
  pcVar17 = (code *)swi(3);
  pLVar16 = (List_1_MVOverlapResult_ *)(*pcVar17)();
  return pLVar16;
}


/* MvCharacterController+NoCollisionData HandleNoCollision(Vector3, Vector3, Boolean) */

MvCharacterController_NoCollisionData *
Assembly-CSharp.dll::MvCharacterController::MvCharacterController_HandleNoCollision
          (MvCharacterController_NoCollisionData *__return_storage_ptr__,MvCharacterController *this
          ,Vector3 ePos,Vector3 eVel,bool adjustVerticalOnly,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MvCharacterController);
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->position).x = 0.0;
  (__return_storage_ptr__->position).y = 0.0;
  (__return_storage_ptr__->position).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->valid = 0;
  func_?(&stack0xfffffef8,0,0x48);
  func_?(&stack0xfffffeb0,0,0x48);
  pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                      ((Vector3 *)&stack0xffffff80,&ePos,&(this->fields).elipsoidRadius,
                       (MethodInfo *)0x0);
  uVar2._0_4_ = pVVar1->x;
  uVar2._4_4_ = pVVar1->y;
  fStack_3 = pVVar1->z;
  VStack_4._4_8_ = uVar2;
  puStack_5 = (undefined *)fStack_3;
  pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                      ((Vector3 *)&stack0xffffff80,&eVel,&(this->fields).elipsoidRadius,
                       (MethodInfo *)0x0);
  fVar6 = pVVar1->z;
  uVar7._0_4_ = pVVar1->x;
  uVar7._4_4_ = pVVar1->y;
  uVar8 = uVar7;
  fVar9 = fVar6;
  if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  InpVec.z = fVar9;
  InpVec.x = (float)(int)uVar7;
  InpVec.y = (float)(int)((ulonglong)uVar7 >> 0x20);
  pVVar1 = MvCharacterController_GetNormalizedVector
                      ((Vector3 *)&stack0xffffff80,InpVec,(MethodInfo *)0x0);
  uVar10 = pVVar1->x;
  uVar11 = pVVar1->y;
  fStack_12 = pVVar1->z;
  InpVec_00.y = eVel.y;
  InpVec_00.x = eVel.x;
  InpVec_00.z = eVel.z;
  pVVar1 = MvCharacterController_GetNormalizedVector
                      ((Vector3 *)&stack0xffffffb8,InpVec_00,(MethodInfo *)0x0);
  puVar13 = (undefined *)pVVar1->y;
  fStack_14 = pVVar1->z;
  bVar15 = cRam_? == '\0';
  (__return_storage_ptr__->position).x = ePos.x + eVel.x;
  (__return_storage_ptr__->position).y = ePos.y + eVel.y;
  (__return_storage_ptr__->position).z = ePos.z + eVel.z;
  __return_storage_ptr__->valid = 1;
  puVar16 = puVar13;
  uVar17 = uVar10;
  uVar18 = uVar11;
  fVar9 = fStack_14;
  if (bVar15) {
    func_?();
    cRam_? = '\x01';
    puVar16 = puVar13;
    uVar17 = uVar10;
    uVar18 = uVar11;
  }
  distance = MvCharacterController_DistanceESpaceToR3Space
                       (0.005,TypeInfo__UnityEngine__Vector3->static_fields->downVector,
                        (this->fields).elipsoidRadius,(MethodInfo *)0x0);
  fVar19 = VStack_4.y + (float)uVar8;
  fVar20 = VStack_4.z + (float)((ulonglong)uVar8 >> 0x20);
  fVar21 = fStack_3 + fVar6;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffffb8,
                       TypeInfo__UnityEngine__Vector3->static_fields->downVector,(MethodInfo *)0x0);
  uVar22 = pVVar1->x;
  uVar23 = pVVar1->y;
  puVar13 = &UNK_?;
  ray_00.m_Origin.y = fVar20;
  ray_00.m_Origin.x = fVar19;
  ray_00.m_Origin.z = fVar21;
  ray_00.m_Direction.x = (float)uVar22;
  ray_00.m_Direction.y = (float)uVar23;
  ray_00.m_Direction.z = pVVar1->z;
  bVar24 = CollisionDetection::CollisionDetection_MVElipsoidCast
                     (ray_00,(this->fields).elipsoidRadius,distance,(VoxelHit *)&stack0xfffffef8,
                      (this->fields).IgnoreWoIds,
                      TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0);
  if (bVar24 != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar25._0_4_ = (this->fields).elipsoidRadius.x;
    uVar25._4_4_ = (this->fields).elipsoidRadius.y;
    pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar27._0_4_ = (pVVar26->downVector).x;
    uVar27._4_4_ = (pVVar26->downVector).y;
    fVar9 = (pVVar26->downVector).z;
    fVar19 = (this->fields).elipsoidRadius.z;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      puVar13 = &UNK_?;
      func_?();
      uVar27 = CONCAT44(puVar13,(undefined4)uVar27);
    }
    R3Dir.z = fVar9;
    R3Dir.x = (float)(int)uVar27;
    R3Dir.y = (float)(int)((ulonglong)uVar27 >> 0x20);
    R3Radius.z = fVar19;
    R3Radius.x = (float)(int)uVar25;
    R3Radius.y = (float)(int)((ulonglong)uVar25 >> 0x20);
    fVar19 = MvCharacterController_DistanceR3SpaceToESpace
                       (fStack_28,R3Dir,R3Radius,(MethodInfo *)0x0);
    fVar9 = VStack_4.y + (float)uVar8;
    uVar8._0_4_ = VStack_4.z + (float)((ulonglong)uVar8 >> 0x20);
    fVar6 = fStack_3 + fVar6;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_4,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                         (MethodInfo *)0x0);
    uVar29 = pVVar1->x;
    uVar30 = pVVar1->y;
    puVar13 = (undefined *)0x0;
    ray.m_Origin.y = (float)uVar8;
    ray.m_Origin.x = fVar9;
    ray.m_Origin.z = fVar6;
    ray.m_Direction.x = (float)uVar29;
    ray.m_Direction.y = (float)uVar30;
    ray.m_Direction.z = pVVar1->z;
    bVar24 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray,(this->fields).elipsoidRadius,distance,(VoxelHit *)&stack0xfffffef8,
                        (this->fields).IgnoreWoIds,
                        TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0)
    ;
    uVar8._4_4_ = ePos.y + eVel.y;
    uVar8._0_4_ = ePos.z + eVel.z;
    VStack_4.x = ePos.x + eVel.x;
    if (bVar24 == 0) {
      VStack_4.y = 0.0;
      VStack_4.z = 0.0;
      fStack_3 = 0.0;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      __return_storage_ptr__->valid = 1;
    }
    else {
      VStack_4.y = 0.0;
      VStack_4.z = 0.0;
      fStack_3 = 0.0;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      __return_storage_ptr__->valid = 0;
    }
    fVar19 = _UNK_? - fVar19;
    pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar31 = (pVVar26->upVector).x;
    uVar32 = (pVVar26->upVector).y;
    fStack_3 = (float)uVar8 + (pVVar26->upVector).z * fVar19;
    (__return_storage_ptr__->position).x = VStack_4.x + (float)uVar31 * fVar19;
    (__return_storage_ptr__->position).y = uVar8._4_4_ + (float)uVar32 * fVar19;
    (__return_storage_ptr__->position).z = fStack_3;
    uVar33 = (__return_storage_ptr__->position).x;
    uVar34 = (__return_storage_ptr__->position).y;
    uVar8._4_4_ = (float)uVar33 - ePos.x;
    uVar8._0_4_ = (float)uVar34 - ePos.y;
    VStack_4.z = fStack_3 - ePos.z;
    VStack_4.y = (float)uVar33;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    InpVec_01.y = (float)uVar8;
    InpVec_01.x = uVar8._4_4_;
    InpVec_01.z = VStack_4.z;
    pVVar1 = MvCharacterController_GetNormalizedVector(&VStack_4,InpVec_01,(MethodInfo *)0x0);
    puVar16 = (undefined *)pVVar1->y;
    fStack_14 = pVVar1->z;
    fVar9 = fStack_14;
    pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                        (&VStack_4,(Vector3 *)&stack0xffffff54,&(this->fields).elipsoidRadius,
                         (MethodInfo *)0x0);
    pVVar1 = MvCharacterController_GetNormalizedVector(&VStack_4,*pVVar1,(MethodInfo *)0x0);
    uVar17 = pVVar1->x;
    uVar18 = pVVar1->y;
    fStack_12 = pVVar1->z;
  }
  if (adjustVerticalOnly == 0) {
    uVar8._0_4_ = (this->fields).elipsoidRadius.x;
    uVar8._4_4_ = (this->fields).elipsoidRadius.y;
    fVar6 = (this->fields).elipsoidRadius.z;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      puVar16 = &UNK_?;
      func_?();
    }
    eDir.y = (float)puVar16;
    eDir.x = (float)(int)((ulonglong)uVar8 >> 0x20);
    eDir.z = fVar9;
    R3Radius_00.z = fVar6;
    R3Radius_00.x = (float)(int)uVar8;
    R3Radius_00.y = (float)(int)((ulonglong)uVar8 >> 0x20);
    fVar6 = MvCharacterController_DistanceESpaceToR3Space(0.005,eDir,R3Radius_00,(MethodInfo *)0x0)
    ;
    puVar16 = puStack_5;
    value.y = (float)uVar18;
    value.x = (float)uVar17;
    value.z = fStack_12;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_4,value,(MethodInfo *)0x0);
    uVar35 = pVVar1->x;
    uVar36 = pVVar1->y;
    uVar8._0_4_ = pVVar1->z;
    uVar8._4_4_ = (this->fields).elipsoidRadius.z;
    uVar37 = (this->fields).elipsoidRadius.x;
    uVar38 = (this->fields).elipsoidRadius.y;
    fVar39 = (float10)func_?();
    puStack_5 = (undefined *)(float)fVar39;
    layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
    uVar40 = (ulonglong)layerMask;
    ray_01.m_Origin.y = uVar2._4_4_;
    ray_01.m_Origin.x = (float)uVar2;
    ray_01.m_Origin.z = (float)puVar16;
    ray_01.m_Direction.x = (float)uVar35;
    ray_01.m_Direction.y = (float)uVar36;
    ray_01.m_Direction.z = (float)uVar8;
    radius.y = (float)uVar38;
    radius.x = (float)uVar37;
    radius.z = uVar8._4_4_;
    bVar24 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray_01,radius,(float)puStack_5 + fVar6,(VoxelHit *)&stack0xfffffeb0,
                        (this->fields).IgnoreWoIds,layerMask,(MethodInfo *)0x0);
    if (bVar24 != 0) {
      uVar41._0_4_ = (this->fields).elipsoidRadius.x;
      uVar41._4_4_ = (this->fields).elipsoidRadius.y;
      uVar2._0_4_ = (this->fields).elipsoidRadius.z;
      puStack_5 = puVar13;
      if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      R3Dir_00.y = (float)uVar38;
      R3Dir_00.x = (float)uVar37;
      R3Dir_00.z = fStack_12;
      R3Radius_01.z = (float)uVar2;
      R3Radius_01.x = (float)(int)uVar41;
      R3Radius_01.y = (float)(int)((ulonglong)uVar41 >> 0x20);
      uVar2._0_4_ = MvCharacterController_DistanceR3SpaceToESpace
                              ((float)puStack_5,R3Dir_00,R3Radius_01,(MethodInfo *)0x0);
      fVar39 = (float10)func_?();
      fStack_3 = ePos.z;
      VStack_4.y = ePos.x;
      VStack_4.z = ePos.y;
      puStack_5 = (undefined *)(float)(fVar39 + (float10)_UNK_?);
      fVar39 = (float10)func_?();
      uVar2._0_4_ = (float)(fVar39 - (float10)((float)puStack_5 - (float)uVar2));
      (__return_storage_ptr__->position).x = VStack_4.y + (float)uVar40 * (float)uVar2;
      (__return_storage_ptr__->position).y = VStack_4.z + (float)(uVar40 >> 0x20) * (float)uVar2;
      (__return_storage_ptr__->position).z = fStack_3 + fStack_14 * (float)uVar2;
      __return_storage_ptr__->valid = 1;
      return __return_storage_ptr__;
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}


/* Void Init(Single, Single, Vector3) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_Init
               (MvCharacterController *this,float radius,float height,Vector3 center,
               MethodInfo *method)

{
  fVar1 = height * _UNK_?;
  (this->fields).center.x = center.x;
  (this->fields).center.y = center.y;
  (this->fields).centerBase.x = center.x;
  (this->fields).centerBase.y = center.y;
  (this->fields).elipsoidRadius.x = radius;
  (this->fields).elipsoidRadius.y = fVar1;
  (this->fields).elipsoidRadius.z = radius;
  (this->fields).center.z = center.z;
  (this->fields).centerBase.z = center.z;
  fVar2 = (this->fields).elipsoidRadius.y;
  fVar1 = (this->fields).elipsoidRadius.z;
  (this->fields).radiusBase.x = (this->fields).elipsoidRadius.x;
  (this->fields).radiusBase.y = fVar2;
  (this->fields).radiusBase.z = fVar1;
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
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    func_?(&TypeInfo__MvCharacterController);
    cRam_? = '\x01';
  }
  radius = (this->fields).elipsoidRadius;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
  if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MvCharacterController);
  }
  ignoreWoIds = (this->fields).IgnoreWoIds;
  layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  bVar1 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckBool
                    (radius,R3Position,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  return bVar1 != 0;
}


/* List`1[MVOverlapResult] OverlappingObjects(Vector3) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MvCharacterController::MvCharacterController_OverlappingObjects
          (MvCharacterController *this,Vector3 R3Position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    func_?(&TypeInfo__MvCharacterController);
    cRam_? = '\x01';
  }
  radius = (this->fields).elipsoidRadius;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
  if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MvCharacterController);
  }
  ignoreWoIds = (this->fields).IgnoreWoIds;
  layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  pLVar1 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector
                     (radius,R3Position,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  return pLVar1;
}


/* Void SendCharacterCollision(MVControllerColliderHit) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_SendCharacterCollision
               (MvCharacterController *this,MVControllerColliderHit controllerColliderHit,
               MethodInfo *method)

{
  if ((this->fields).sendCollisionData != 0) {
    pAVar1 = (this->fields).OnControllerColliderHit;
    if (pAVar1 == (Action_1_MVControllerColliderHit_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puStack_3 = (pAVar1->fields)._._.method;
    puVar4 = (undefined4 *)&stack0x00000008;
    puVar5 = auStack_6;
    for (iVar7 = 0x24; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    (*(pAVar1->fields)._._.invoke_impl)((pAVar1->fields)._._.method_code);
  }
  return;
}


/* Void SetScale(Single) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_SetScale
               (MvCharacterController *this,float scale,MethodInfo *method)

{
  uVar1 = (this->fields).centerBase.x;
  uVar2 = (this->fields).centerBase.y;
  fVar3 = (this->fields).centerBase.z;
  (this->fields).center.x = (float)uVar1 * scale;
  (this->fields).center.y = (float)uVar2 * scale;
  fVar4 = (this->fields).offsetBase;
  (this->fields).center.z = fVar3 * scale;
  fVar3 = (this->fields).radiusBase.y;
  fVar5 = (this->fields).radiusBase.z;
  (this->fields).elipsoidRadius.x = scale * (this->fields).radiusBase.x;
  (this->fields).elipsoidRadius.y = scale * fVar3;
  (this->fields).elipsoidRadius.z = scale * fVar5;
  (this->fields).offsetFactor = scale * fVar4;
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
  func_?();
  func_?();
  fStack_1 = (this->fields).elipsoidRadius.x;
  fStack_2 = (this->fields).elipsoidRadius.y - (this->fields).offsetFactor;
  fStack_3 = (this->fields).elipsoidRadius.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (&direction,(MethodInfo *)0x0);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_5,this_00,(MethodInfo *)0x0);
    uVar6 = pVVar4->x;
    uVar7 = pVVar4->y;
    VStack_5.x = (this->fields).center.x;
    VStack_5.y = (this->fields).center.y;
    VStack_5.z = (this->fields).center.z;
    fStack_8 = VStack_5.x + (float)uVar6;
    fStack_9 = VStack_5.y + (float)uVar7;
    fStack_10 = VStack_5.z + pVVar4->z;
    uStack_11 = 0;
    uStack_12 = 0;
    _fStack_1c = CONCAT44(fStack_9,fStack_8);
    fStack_13 = 0.0;
    value.z = direction.z;
    value.x = direction.x;
    value.y = direction.y;
    fStack_14 = fStack_10;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&VStack_5,value,(MethodInfo *)0x0);
    uVar15 = pVVar4->x;
    uVar16 = pVVar4->y;
    fStack_13 = pVVar4->z;
    fStack_17 = (this->fields).offsetFactor;
    ignoreWoIds = (this->fields).IgnoreWoIds;
    uStack_11 = uVar15;
    uStack_12 = uVar16;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar18 = fStack_3;
    ray.m_Origin.y = fStack_9;
    ray.m_Origin.x = fStack_8;
    ray.m_Origin.z = fStack_10;
    ray.m_Direction.x = (float)uStack_11;
    ray.m_Direction.y = (float)uStack_12;
    ray.m_Direction.z = fStack_13;
    radius.y = fStack_2;
    radius.x = fStack_1;
    radius.z = fStack_3;
    bVar19 = CollisionDetection::CollisionDetection_MVElipsoidCast
                      (ray,radius,fStack_17 + distance,&VStack_20,ignoreWoIds,
                       TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0);
    if (bVar19 == 0) {
      return 0;
    }
    func_?();
    hit.point.y = VStack_20.point.z;
    hit.point.x = VStack_20.point.y;
    hit.point.z = VStack_20.normal.x;
    hit.normal.x = VStack_20.normal.y;
    hit.normal.y = VStack_20.normal.z;
    hit.normal.z = (float)VStack_20.cubePos._0_4_;
    hit.cubePos.x = VStack_20.cubePos.z;
    hit.cubePos.y = VStack_20._30_2_;
    hit._28_4_ = VStack_20.face;
    hit.face = VStack_20._36_4_;
    hit._36_4_ = VStack_20.woId;
    hit.woId = (int32_t)VStack_20.cube;
    hit.cube = (Cube *)VStack_20.distance;
    hit.distance = (float)VStack_20.collider;
    hit.collider = (Collider *)VStack_20.transform;
    hit.transform = (Transform *)VStack_20._60_4_;
    hit._60_8_ = VStack_20.interactionFlags;
    hit.interactionFlags._4_4_ = (float)_fStack_1c;
    position.y = fStack_14;
    position.x = (float)((ulonglong)_fStack_1c >> 0x20);
    position.z = fStack_1;
    elipsoidRadius.y = fVar18;
    elipsoidRadius.x = fStack_2;
    elipsoidRadius.z = motion.x;
    R3Velocity.z = 1.4013e-45;
    R3Velocity.x = (float)(int)motion._4_8_;
    R3Velocity.y = (float)(int)((ulonglong)motion._4_8_ >> 0x20);
    MVControllerColliderHit::MVControllerColliderHit__ctor
              ((MVControllerColliderHit *)&stack0xfffffec0,hit,position,elipsoidRadius,R3Velocity,0,
               in_stack_21);
    pfVar22 = (float *)&stack0xfffffec0;
    pMVar23 = colliderHit;
    for (iVar24 = 0x24; iVar24 != 0; iVar24 = iVar24 + -1) {
      (pMVar23->positionTouchingHit).x = *pfVar22;
      pfVar22 = pfVar22 + 1;
      pMVar23 = (MVControllerColliderHit *)&(pMVar23->positionTouchingHit).y;
    }
    func_?();
    if ((this->fields).sendCollisionData != 0) {
      pAVar25 = (this->fields).OnControllerColliderHit;
      if (pAVar25 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
      pfVar22 = afStack_26;
      for (iVar24 = 0x24; iVar24 != 0; iVar24 = iVar24 + -1) {
        *pfVar22 = (colliderHit->positionTouchingHit).x;
        colliderHit = (MVControllerColliderHit *)&(colliderHit->positionTouchingHit).y;
        pfVar22 = pfVar22 + 1;
      }
      (*(pAVar25->fields)._._.invoke_impl)((pAVar25->fields)._._.method_code);
    }
    return 1;
  }
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  bVar19 = (*pcVar27)();
  return bVar19;
}


/* MvCharacterController() */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MvCharacterController);
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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


/* Void set_Velocity(Vector3) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_set_Velocity
               (MvCharacterController *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._Velocity_k__BackingField.x = value.x;
  (this->fields)._Velocity_k__BackingField.y = value.y;
  (this->fields)._Velocity_k__BackingField.z = value.z;
  return;
}

