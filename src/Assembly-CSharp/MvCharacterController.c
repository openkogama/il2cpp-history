
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
    func_?();
    cRam_? = '\x01';
  }
  func_?();
  if ((this->fields).collisionRecursionDepth < 8) {
    pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                        (&VStack_2,ePos,&(this->fields).elipsoidRadius,(MethodInfo *)0x0);
    uVar3 = pVVar1->x;
    uVar4 = pVVar1->y;
    fStack_5 = pVVar1->z;
    pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                        (&VStack_6,eVel,&(this->fields).elipsoidRadius,(MethodInfo *)0x0);
    fStack_7 = pVVar1->z;
    uVar8._0_4_ = pVVar1->x;
    uVar8._4_4_ = pVVar1->y;
    puVar9 = &UNK_?;
    VStack_2._0_8_ = uVar8;
    VStack_2.z = fStack_7;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_6,*pVVar1,(MethodInfo *)0x0);
    MStack_10.position.y._0_1_ = 0;
    MStack_10.position.y._1_1_ = 0;
    MStack_10.position.y._2_1_ = 0;
    MStack_10.position.y._3_1_ = 0;
    MStack_10.position.z._0_1_ = 0;
    MStack_10.position.z._1_1_ = 0;
    MStack_10.position.z._2_1_ = 0;
    MStack_10.position.z._3_1_ = 0;
    uStack_11 = CONCAT44(uVar4,uVar3);
    MStack_10.position.x._0_1_ = SUB41(fStack_5,0);
    MStack_10.position.x._1_1_ = (undefined1)((uint)fStack_5 >> 8);
    MStack_10.position.x._2_1_ = (undefined1)((uint)fStack_5 >> 0x10);
    MStack_10.position.x._3_1_ = (undefined1)((uint)fStack_5 >> 0x18);
    MStack_10.valid = 0;
    MStack_10._13_1_ = 0;
    MStack_10._14_1_ = 0;
    MStack_10._15_1_ = 0;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_6,*pVVar1,(MethodInfo *)0x0);
    uVar12 = pVVar1->x;
    uVar13 = pVVar1->y;
    fVar14 = pVVar1->z;
    MStack_10.valid = SUB41(fVar14,0);
    MStack_10._13_1_ = SUB41((uint)fVar14 >> 8,0);
    MStack_10._14_1_ = SUB41((uint)fVar14 >> 0x10,0);
    MStack_10._15_1_ = SUB41((uint)fVar14 >> 0x18,0);
    fStack_15 = (this->fields).elipsoidRadius.z;
    MStack_10.position.y._0_1_ = (undefined1)uVar12;
    MStack_10.position.y._1_1_ = (undefined1)((uint)uVar12 >> 8);
    MStack_10.position.y._2_1_ = (undefined1)((uint)uVar12 >> 0x10);
    MStack_10.position.y._3_1_ = (undefined1)((uint)uVar12 >> 0x18);
    MStack_10.position.z._0_1_ = (undefined1)uVar13;
    MStack_10.position.z._1_1_ = (undefined1)((uint)uVar13 >> 8);
    MStack_10.position.z._2_1_ = (undefined1)((uint)uVar13 >> 0x10);
    MStack_10.position.z._3_1_ = (undefined1)((uint)uVar13 >> 0x18);
    VStack_16.x = (this->fields).elipsoidRadius.x;
    VStack_16.y = (this->fields).elipsoidRadius.y;
    fVar17 = (float10)func_?();
    ignoreWoIds = (this->fields).IgnoreWoIds;
    pTStack_18 = (Transform *)(float)fVar17;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar19 = 0.0;
    fVar14 = (float)TypeInfo__MvCharacterController->static_fields->layerMask;
    voxelHit = (VoxelHit *)&stack0xfffffef4;
    fVar20 = VStack_16.x;
    fVar21 = VStack_16.y;
    fVar22 = (float)uStack_11;
    fVar23 = uStack_11._4_4_;
    fVar24 = (float)CONCAT13(MStack_10.position.x._3_1_,
                             CONCAT12(MStack_10.position.x._2_1_,
                                      CONCAT11(MStack_10.position.x._1_1_,MStack_10.position.x._0_1_
                                              )));
    fVar25 = (float)CONCAT13(MStack_10.position.y._3_1_,
                             CONCAT12(MStack_10.position.y._2_1_,
                                      CONCAT11(MStack_10.position.y._1_1_,MStack_10.position.y._0_1_
                                              )));
    fVar26 = (float)CONCAT13(MStack_10.position.z._3_1_,
                             CONCAT12(MStack_10.position.z._2_1_,
                                      CONCAT11(MStack_10.position.z._1_1_,MStack_10.position.z._0_1_
                                              )));
    fVar27 = (float)(CONCAT17(MStack_10._15_1_,
                              CONCAT16(MStack_10._14_1_,
                                       CONCAT15(MStack_10._13_1_,CONCAT14(MStack_10.valid,fVar26))))
                    >> 0x20);
    puVar28 = &UNK_?;
    ray.m_Origin.z = fVar24;
    ray.m_Origin.x = (float)uStack_11;
    ray.m_Origin.y = uStack_11._4_4_;
    ray.m_Direction.x = fVar25;
    ray.m_Direction.y = fVar26;
    ray.m_Direction.z = fVar27;
    radius.z = fStack_15;
    radius.x = VStack_16.x;
    radius.y = VStack_16.y;
    fVar29 = fStack_15;
    pTVar30 = pTStack_18;
    bVar31 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray,radius,(float)pTStack_18,voxelHit,ignoreWoIds,(int32_t)fVar14,
                        (MethodInfo *)0x0);
    if (bVar31 != 0) {
      uVar32._0_4_ = (this->fields).elipsoidRadius.z;
      VStack_16.x = (this->fields).elipsoidRadius.x;
      VStack_16.y = (this->fields).elipsoidRadius.y;
      if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      puVar33 = &UNK_?;
      R3Dir.y = uVar8._4_4_;
      R3Dir.x = (float)uVar8;
      R3Dir.z = fStack_7;
      R3Radius.z = (float)uVar32;
      R3Radius.x = VStack_16.x;
      R3Radius.y = VStack_16.y;
      distance = (Cube *)MvCharacterController_DistanceR3SpaceToESpace
                                   (in_stack_34,R3Dir,R3Radius,(MethodInfo *)0x0);
      vec1 = (Cube *)&(this->fields).elipsoidRadius;
      vec0 = (Vector3 *)&stack0xfffffef4;
      pVVar1 = &VStack_2;
      puVar35 = &UNK_?;
      pVVar36 = MathFunctions::MathFunctions_DivideVector
                          (pVVar1,vec0,(Vector3 *)vec1,(MethodInfo *)0x0);
      uVar32._0_4_ = pVVar36->x;
      uVar32._4_4_ = pVVar36->y;
      pTVar37 = (Transform *)pVVar36->z;
      method_00 = (MethodInfo *)&UNK_?;
      VStack_6._0_8_ = uVar32;
      VStack_6.z = (float)pTVar37;
      VStack_16._0_8_ = uVar32;
      pTStack_18 = pTVar37;
      fStack_15 = MvCharacterController_GetCollisionAngle
                            (*ePos,*eVel,(float)distance,*pVVar36,(MethodInfo *)0x0);
      if ((fStack_15 <= _UNK_?) || ((float)distance == 0.0)) {
        uVar38 = ePos->x;
        uVar39 = ePos->y;
        uVar40 = eVel->x;
        uVar41 = eVel->y;
        VStack_2.z = eVel->z + ePos->z;
        fStack_42 = eVel->z;
        VStack_16.z = ePos->z;
        uVar43 = eVel->x;
        uVar44 = eVel->y;
        fStack_15 = eVel->z;
        uVar45 = ePos->x;
        uVar46 = ePos->y;
        uVar47 = eVel->x;
        uVar48 = eVel->y;
        VStack_2.y = (float)uVar41 + (float)uVar39;
        VStack_2.x = (float)uVar40 + (float)uVar38;
        fStack_49 = (float)uVar47;
        fStack_50 = (float)uVar48;
        fStack_51 = (float)uVar38;
        auStack_52._0_4_ = uVar45;
        auStack_52._4_4_ = uVar46;
        fStack_53 = (float)uVar40;
        fStack_54 = (float)uVar43;
        fStack_55 = (float)uVar44;
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
        uVar56 = 0;
        fVar57 = VStack_16.x;
        pCVar58 = VStack_16.y;
        puVar59 = &UNK_?;
        ePos_00.y = (float)auStack_52._4_4_;
        ePos_00.x = (float)auStack_52._0_4_;
        ePos_00.z = VStack_16.z;
        eDir.y = fStack_50;
        eDir.x = fStack_49;
        eDir.z = fStack_15;
        ePoint.z = (float)pTStack_18;
        ePoint.x = VStack_16.x;
        ePoint.y = VStack_16.y;
        fVar60 = VStack_16.z;
        fVar61 = fStack_49;
        fVar62 = fStack_50;
        fVar63 = fStack_15;
        pCVar64 = distance;
        pTVar65 = pTStack_18;
        fVar66 = MvCharacterController_GetCollisionAngle
                           (ePos_00,eDir,(float)distance,ePoint,(MethodInfo *)0x0);
        dVar67 = (double)(fVar66 * _UNK_?);
        fVar66 = (float)auStack_52._0_4_;
        uVar4 = auStack_52._4_4_;
        auStack_52 = (undefined1  [8])dVar67;
        func_?();
        VStack_16.z = _UNK_? / (float)dVar67 -
                      (_UNK_? / (float)dVar67) * _UNK_?;
        value.y = fStack_55;
        value.x = fStack_54;
        value.z = fStack_42;
        pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&MStack_10.position.y,value,(MethodInfo *)0x0);
        uVar68 = pVVar36->x;
        uVar69 = pVVar36->y;
        fStack_50 = pVVar36->z;
        fStack_70 = (float)uVar68;
        fStack_49 = (float)uVar69;
        if (((float)distance - VStack_16.z < 0.0) || (VStack_16.z <= 0.0)) {
          puVar71 = (undefined8 *)func_?();
          VStack_2._0_8_ = *puVar71;
          VStack_2.z = *(float *)(puVar71 + 1);
          fVar17 = (float10)func_?();
          VStack_2.z = VStack_2.z * (float)fVar17;
          piVar72 = &(this->fields).collisionRecursionDepth;
          *piVar72 = *piVar72 + 1;
          pVVar1 = MvCharacterController_CollideWithWorld
                              ((Vector3 *)&MStack_10.position.y,this,ePos,
                               (Vector3 *)&stack0xffffff58,foundValidPosition,(MethodInfo *)0x0);
          uVar8._4_4_ = pVVar1->y;
          uVar8._0_4_ = pVVar1->z;
          __return_storage_ptr__->x = pVVar1->x;
          __return_storage_ptr__->y = uVar8._4_4_;
          __return_storage_ptr__->z = (float)uVar8;
          return __return_storage_ptr__;
        }
        uVar73 = ePos->x;
        uVar74 = ePos->y;
        auStack_52._4_4_ = ePos->z;
        uVar75 = pVVar36->x;
        uVar76 = pVVar36->y;
        fVar77 = (float)uVar73 + (float)uVar75 * ((float)distance - VStack_16.z);
        fStack_55 = (float)auStack_52._4_4_ + fStack_50 * ((float)distance - VStack_16.z);
        fVar78 = VStack_6.x - (float)uVar68 * VStack_16.z;
        fVar79 = VStack_6.y - (float)uVar69 * VStack_16.z;
        fVar80 = VStack_6.z - fStack_50 * VStack_16.z;
        VStack_6.z = fVar80;
        fStack_51 = (float)uVar73;
        auStack_52._0_4_ = uVar74;
        fStack_53 = (float)uVar75;
        fStack_54 = (float)uVar76;
        (*(code *)(this->klass->vtable).__unknown_2.method)();
        if (SUB41(fVar62,0) != 0) {
          func_?();
          uVar81 = 0;
          uVar82 = 0;
          uVar83 = (this->fields).elipsoidRadius.x;
          uVar84 = (this->fields).elipsoidRadius.y;
          hit.point.y = uVar32._4_4_;
          hit.point.x = (float)uVar32;
          hit.point.z = (float)pTVar37;
          hit.normal.x = (float)puVar59;
          hit.normal.y = fVar66;
          hit.normal.z = (float)uVar4;
          hit.cubePos._0_4_ = fVar60;
          hit._28_4_ = fVar61;
          hit.face = (int32_t)fVar62;
          hit._36_4_ = fVar63;
          hit.woId = (int32_t)pCVar64;
          hit.cube = (Cube *)fVar57;
          hit.distance = (float)pCVar58;
          hit.collider = (Collider *)pTVar65;
          hit.transform = (Transform *)uVar56;
          hit._60_4_ = in_stack_85;
          hit.interactionFlags._0_4_ = uStack_86;
          hit.interactionFlags._4_4_ = fVar78;
          position.y = fStack_5;
          position.x = fVar79;
          position.z = (float)uVar83;
          elipsoidRadius.y = (this->fields).elipsoidRadius.z;
          elipsoidRadius.x = (float)uVar84;
          elipsoidRadius.z = fVar80;
          R3Velocity.y = fStack_7;
          R3Velocity.x = fVar77;
          R3Velocity.z = 0.0;
          uVar32._0_4_ = fStack_7;
          MVControllerColliderHit::MVControllerColliderHit__ctor
                    ((MVControllerColliderHit *)&stack0xfffffe64,hit,position,elipsoidRadius,
                     R3Velocity,0,unaff_ESI);
          uVar32._4_4_ = 0.0;
          puVar87 = (undefined4 *)&stack0xfffffe64;
          puVar88 = (undefined4 *)&stack0xfffffe44;
          for (iVar89 = 0x24; iVar89 != 0; iVar89 = iVar89 + -1) {
            *puVar88 = *puVar87;
            puVar87 = puVar87 + 1;
            puVar88 = puVar88 + 1;
          }
          controllerColliderHit.positionTouchingHit.y = fVar77;
          controllerColliderHit.positionTouchingHit.x = fVar80;
          controllerColliderHit.positionTouchingHit.z = (float)uVar32;
          controllerColliderHit.moveDirection.x = (float)uVar82;
          controllerColliderHit.moveDirection.y = (float)uVar81;
          controllerColliderHit.moveDirection.z = (float)unaff_ESI;
          controllerColliderHit.elipsoidNormal.x = (float)puVar9;
          controllerColliderHit.elipsoidNormal.y = (float)puVar28;
          controllerColliderHit.elipsoidNormal.z = fVar22;
          controllerColliderHit.slopeNormal.x = fVar23;
          controllerColliderHit.slopeNormal.y = fVar24;
          controllerColliderHit.slopeNormal.z = fVar25;
          controllerColliderHit.impactVelocity.x = fVar26;
          controllerColliderHit.impactVelocity.y = fVar27;
          controllerColliderHit.impactVelocity.z = fVar20;
          controllerColliderHit._60_4_ = fVar21;
          controllerColliderHit.hit.point.x = fVar29;
          controllerColliderHit.hit.point.y = (float)pTVar30;
          controllerColliderHit.hit.point.z = (float)voxelHit;
          controllerColliderHit.hit.normal.x = (float)ignoreWoIds;
          controllerColliderHit.hit.normal.y = fVar14;
          controllerColliderHit.hit.normal.z = fVar19;
          uVar90 = in_stack_91._0_6_;
          controllerColliderHit.hit.cubePos.x = (short)uVar90;
          controllerColliderHit.hit.cubePos.y = (short)((uint6)uVar90 >> 0x10);
          controllerColliderHit.hit.cubePos.z = (short)((uint6)uVar90 >> 0x20);
          controllerColliderHit.hit._30_2_ = in_stack_91._6_2_;
          controllerColliderHit.hit.face = in_stack_91._8_4_;
          controllerColliderHit.hit._36_4_ = in_stack_92;
          controllerColliderHit.hit.woId = (int32_t)in_stack_93;
          controllerColliderHit.hit.cube = (Cube *)puVar33;
          controllerColliderHit.hit.distance = in_stack_34;
          controllerColliderHit.hit.collider = (Collider *)(float)uVar8;
          controllerColliderHit.hit.transform = (Transform *)uVar8._4_4_;
          controllerColliderHit.hit._60_4_ = puVar35;
          controllerColliderHit.hit.interactionFlags._0_4_ = pVVar1;
          controllerColliderHit.hit.interactionFlags._4_4_ = vec0;
          controllerColliderHit.material = (MVMaterial *)vec1;
          controllerColliderHit._140_4_ = uVar32._4_4_;
          MvCharacterController_SendCharacterCollision(this,controllerColliderHit,method_00);
        }
        piVar72 = &(this->fields).collisionRecursionDepth;
        *piVar72 = *piVar72 + 1;
        pVVar1 = MvCharacterController_CollideWithWorld
                            ((Vector3 *)&MStack_10.position.y,this,(Vector3 *)&stack0xffffff64,
                             (Vector3 *)&stack0xffffff70,foundValidPosition,(MethodInfo *)0x0);
      }
      else {
        puVar71 = (undefined8 *)func_?();
        VStack_94._0_8_ = *puVar71;
        VStack_94.z = *(float *)(puVar71 + 1);
        fStack_55 = *(float *)(puVar71 + 1);
        fStack_53 = (float)*puVar71;
        fStack_54 = (float)((ulonglong)*puVar71 >> 0x20);
        fVar17 = (float10)func_?();
        uVar8._0_4_ = (float)fVar17;
        VStack_94.z = fStack_55 * (float)uVar8;
        piVar72 = &(this->fields).collisionRecursionDepth;
        *piVar72 = *piVar72 + 1;
        VStack_94.y = fStack_54 * (float)uVar8;
        VStack_94.x = fStack_53 * (float)uVar8;
        VStack_2.z = VStack_94.z;
        pVVar1 = MvCharacterController_CollideWithWorld
                            (&VStack_2,this,ePos,&VStack_94,foundValidPosition,(MethodInfo *)0x0);
      }
      uVar8._4_4_ = pVVar1->y;
      uVar8._0_4_ = pVVar1->z;
      __return_storage_ptr__->x = pVVar1->x;
      __return_storage_ptr__->y = uVar8._4_4_;
      __return_storage_ptr__->z = (float)uVar8;
      return __return_storage_ptr__;
    }
    pMVar95 = MvCharacterController_HandleNoCollision
                        (&MStack_10,this,*ePos,*eVel,1,(MethodInfo *)0x0);
    MStack_10.position.x._0_1_ = *(undefined1 *)&(pMVar95->position).x;
    MStack_10.position.x._1_1_ = *(undefined1 *)((int)&(pMVar95->position).x + 1);
    MStack_10.position.x._2_1_ = *(undefined1 *)((int)&(pMVar95->position).x + 2);
    MStack_10.position.x._3_1_ = *(undefined1 *)((int)&(pMVar95->position).x + 3);
    MStack_10.position.y._0_1_ = *(undefined1 *)&(pMVar95->position).y;
    MStack_10.position.y._1_1_ = *(undefined1 *)((int)&(pMVar95->position).y + 1);
    MStack_10.position.y._2_1_ = *(undefined1 *)((int)&(pMVar95->position).y + 2);
    MStack_10.position.y._3_1_ = *(undefined1 *)((int)&(pMVar95->position).y + 3);
    MStack_10.position.z._0_1_ = *(undefined1 *)&(pMVar95->position).z;
    MStack_10.position.z._1_1_ = *(undefined1 *)((int)&(pMVar95->position).z + 1);
    MStack_10.position.z._2_1_ = *(undefined1 *)((int)&(pMVar95->position).z + 2);
    MStack_10.position.z._3_1_ = *(undefined1 *)((int)&(pMVar95->position).z + 3);
    if (pMVar95->valid == 0) {
      uVar8._4_4_ = ePos->y;
      uVar8._0_4_ = ePos->z;
      __return_storage_ptr__->x = ePos->x;
      __return_storage_ptr__->y = uVar8._4_4_;
      __return_storage_ptr__->z = (float)uVar8;
      return __return_storage_ptr__;
    }
  }
  else {
    pMVar95 = MvCharacterController_HandleNoCollision
                        (&MStack_10,this,*ePos,*eVel,1,(MethodInfo *)0x0);
    MStack_10.position.x._0_1_ = *(undefined1 *)&(pMVar95->position).x;
    MStack_10.position.x._1_1_ = *(undefined1 *)((int)&(pMVar95->position).x + 1);
    MStack_10.position.x._2_1_ = *(undefined1 *)((int)&(pMVar95->position).x + 2);
    MStack_10.position.x._3_1_ = *(undefined1 *)((int)&(pMVar95->position).x + 3);
    MStack_10.position.y._0_1_ = *(undefined1 *)&(pMVar95->position).y;
    MStack_10.position.y._1_1_ = *(undefined1 *)((int)&(pMVar95->position).y + 1);
    MStack_10.position.y._2_1_ = *(undefined1 *)((int)&(pMVar95->position).y + 2);
    MStack_10.position.y._3_1_ = *(undefined1 *)((int)&(pMVar95->position).y + 3);
    MStack_10.position.z._0_1_ = *(undefined1 *)&(pMVar95->position).z;
    MStack_10.position.z._1_1_ = *(undefined1 *)((int)&(pMVar95->position).z + 1);
    MStack_10.position.z._2_1_ = *(undefined1 *)((int)&(pMVar95->position).z + 2);
    MStack_10.position.z._3_1_ = *(undefined1 *)((int)&(pMVar95->position).z + 3);
    if (pMVar95->valid == 0) {
      *foundValidPosition = 0;
      uVar8._4_4_ = ePos->y;
      uVar8._0_4_ = ePos->z;
      __return_storage_ptr__->x = ePos->x;
      __return_storage_ptr__->y = uVar8._4_4_;
      __return_storage_ptr__->z = (float)uVar8;
      return __return_storage_ptr__;
    }
  }
  uVar4 = CONCAT13(MStack_10.position.x._3_1_,
                    CONCAT12(MStack_10.position.x._2_1_,
                             CONCAT11(MStack_10.position.x._1_1_,MStack_10.position.x._0_1_)));
  __return_storage_ptr__->x = (float)uVar4;
  __return_storage_ptr__->y =
       (float)(int)(CONCAT17(MStack_10.position.y._3_1_,
                             CONCAT16(MStack_10.position.y._2_1_,
                                      CONCAT15(MStack_10.position.y._1_1_,
                                               CONCAT14(MStack_10.position.y._0_1_,uVar4)))) >>
                   0x20);
  __return_storage_ptr__->z =
       (float)CONCAT13(MStack_10.position.z._3_1_,
                       CONCAT12(MStack_10.position.z._2_1_,
                                CONCAT11(MStack_10.position.z._1_1_,MStack_10.position.z._0_1_)));
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
      uVar23 = uVar22 ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
      fVar5 = (float)((uint)pVVar2->z ^
                     __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
      __return_storage_ptr__->x =
           (float)(uVar21 ^ __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field)
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
  func_?(&stack0xfffffee8,0,0x48);
  func_?(&stack0xfffffea0,0,0x48);
  pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                      ((Vector3 *)&stack0xffffff70,&ePos,&(this->fields).elipsoidRadius,
                       (MethodInfo *)0x0);
  uVar2._0_4_ = pVVar1->x;
  uVar2._4_4_ = pVVar1->y;
  fStack_3 = pVVar1->z;
  VStack_4._4_8_ = uVar2;
  puStack_5 = (undefined *)fStack_3;
  pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                      ((Vector3 *)&stack0xffffff70,&eVel,&(this->fields).elipsoidRadius,
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
                      ((Vector3 *)&stack0xffffff70,InpVec,(MethodInfo *)0x0);
  uVar10 = pVVar1->x;
  uVar11 = pVVar1->y;
  fStack_12 = pVVar1->z;
  InpVec_00.y = eVel.y;
  InpVec_00.x = eVel.x;
  InpVec_00.z = eVel.z;
  pVVar1 = MvCharacterController_GetNormalizedVector(&VStack_13,InpVec_00,(MethodInfo *)0x0);
  puVar14 = (undefined *)pVVar1->y;
  fStack_15 = pVVar1->z;
  VStack_13.z = ePos.z + eVel.z;
  bVar16 = cRam_? == '\0';
  (__return_storage_ptr__->position).x = ePos.x + eVel.x;
  (__return_storage_ptr__->position).y = ePos.y + eVel.y;
  (__return_storage_ptr__->position).z = VStack_13.z;
  __return_storage_ptr__->valid = 1;
  puVar17 = puVar14;
  uVar18 = uVar10;
  uVar19 = uVar11;
  fVar9 = fStack_15;
  if (bVar16) {
    func_?();
    cRam_? = '\x01';
    puVar17 = puVar14;
    uVar18 = uVar10;
    uVar19 = uVar11;
  }
  distance = MvCharacterController_DistanceESpaceToR3Space
                       (0.005,TypeInfo__UnityEngine__Vector3->static_fields->downVector,
                        (this->fields).elipsoidRadius,(MethodInfo *)0x0);
  fStack_20 = VStack_4.y + (float)uVar8;
  fStack_21 = VStack_4.z + (float)((ulonglong)uVar8 >> 0x20);
  VStack_13.z = fStack_3 + fVar6;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar22 = fStack_21;
  fVar23 = fStack_20;
  fVar24 = VStack_13.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      (&VStack_13,TypeInfo__UnityEngine__Vector3->static_fields->downVector,
                       (MethodInfo *)0x0);
  uVar25 = pVVar1->x;
  uVar26 = pVVar1->y;
  puVar14 = &UNK_?;
  ray_00.m_Origin.y = fVar22;
  ray_00.m_Origin.x = fVar23;
  ray_00.m_Origin.z = fVar24;
  ray_00.m_Direction.x = (float)uVar25;
  ray_00.m_Direction.y = (float)uVar26;
  ray_00.m_Direction.z = pVVar1->z;
  bVar27 = CollisionDetection::CollisionDetection_MVElipsoidCast
                     (ray_00,(this->fields).elipsoidRadius,distance,(VoxelHit *)&stack0xfffffee8,
                      (this->fields).IgnoreWoIds,
                      TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0);
  if (bVar27 != 0) {
    fStack_20 = fStack_28;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar29._0_4_ = (this->fields).elipsoidRadius.x;
    uVar29._4_4_ = (this->fields).elipsoidRadius.y;
    pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar31._0_4_ = (pVVar30->downVector).x;
    uVar31._4_4_ = (pVVar30->downVector).y;
    fStack_21 = (pVVar30->downVector).z;
    VStack_13.z = (this->fields).elipsoidRadius.z;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      puVar14 = &UNK_?;
      func_?();
      uVar31 = CONCAT44(puVar14,(undefined4)uVar31);
    }
    R3Dir.z = fStack_21;
    R3Dir.x = (float)(int)uVar31;
    R3Dir.y = (float)(int)((ulonglong)uVar31 >> 0x20);
    R3Radius.z = VStack_13.z;
    R3Radius.x = (float)(int)uVar29;
    R3Radius.y = (float)(int)((ulonglong)uVar29 >> 0x20);
    fStack_12 = MvCharacterController_DistanceR3SpaceToESpace
                          (fStack_20,R3Dir,R3Radius,(MethodInfo *)0x0);
    VStack_13.z = VStack_4.y + (float)uVar8;
    fStack_21 = VStack_4.z + (float)((ulonglong)uVar8 >> 0x20);
    fStack_20 = fStack_3 + fVar6;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar24 = fStack_21;
    fVar9 = fStack_20;
    fVar6 = VStack_13.z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_4,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                         (MethodInfo *)0x0);
    uVar32 = pVVar1->x;
    uVar33 = pVVar1->y;
    puVar14 = (undefined *)0x0;
    ray.m_Origin.y = fVar24;
    ray.m_Origin.x = fVar6;
    ray.m_Origin.z = fVar9;
    ray.m_Direction.x = (float)uVar32;
    ray.m_Direction.y = (float)uVar33;
    ray.m_Direction.z = pVVar1->z;
    bVar27 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray,(this->fields).elipsoidRadius,distance,(VoxelHit *)&stack0xfffffee8,
                        (this->fields).IgnoreWoIds,
                        TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0)
    ;
    fStack_21 = ePos.y + eVel.y;
    VStack_13.z = ePos.z + eVel.z;
    VStack_4.x = ePos.x + eVel.x;
    if (bVar27 == 0) {
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
    fVar6 = _UNK_? - fStack_12;
    pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar34 = (pVVar30->upVector).x;
    uVar35 = (pVVar30->upVector).y;
    fStack_3 = VStack_13.z + (pVVar30->upVector).z * fVar6;
    (__return_storage_ptr__->position).x = VStack_4.x + (float)uVar34 * fVar6;
    (__return_storage_ptr__->position).y = fStack_21 + (float)uVar35 * fVar6;
    (__return_storage_ptr__->position).z = fStack_3;
    uVar36 = (__return_storage_ptr__->position).x;
    uVar37 = (__return_storage_ptr__->position).y;
    fVar9 = (float)uVar36 - ePos.x;
    fVar6 = (float)uVar37 - ePos.y;
    VStack_4.z = fStack_3 - ePos.z;
    VStack_4.y = (float)uVar36;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    InpVec_01.y = fVar6;
    InpVec_01.x = fVar9;
    InpVec_01.z = VStack_4.z;
    pVVar1 = MvCharacterController_GetNormalizedVector(&VStack_4,InpVec_01,(MethodInfo *)0x0);
    puVar17 = (undefined *)pVVar1->y;
    fStack_15 = pVVar1->z;
    fVar9 = fStack_15;
    pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                        (&VStack_4,(Vector3 *)&stack0xffffff44,&(this->fields).elipsoidRadius,
                         (MethodInfo *)0x0);
    pVVar1 = MvCharacterController_GetNormalizedVector(&VStack_4,*pVVar1,(MethodInfo *)0x0);
    uVar18 = pVVar1->x;
    uVar19 = pVVar1->y;
    fStack_12 = pVVar1->z;
  }
  if (adjustVerticalOnly == 0) {
    VStack_13.x = (this->fields).elipsoidRadius.x;
    VStack_13.y = (this->fields).elipsoidRadius.y;
    fVar6 = (this->fields).elipsoidRadius.z;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      puVar17 = &UNK_?;
      func_?();
    }
    eDir.y = (float)puVar17;
    eDir.x = VStack_13.y;
    eDir.z = fVar9;
    R3Radius_00.z = fVar6;
    R3Radius_00.x = VStack_13.x;
    R3Radius_00.y = VStack_13.y;
    VStack_13.z = MvCharacterController_DistanceESpaceToR3Space
                            (0.005,eDir,R3Radius_00,(MethodInfo *)0x0);
    puVar17 = puStack_5;
    value.y = (float)uVar19;
    value.x = (float)uVar18;
    value.z = fStack_12;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_4,value,(MethodInfo *)0x0);
    uVar38 = pVVar1->x;
    uVar39 = pVVar1->y;
    fVar6 = pVVar1->z;
    fVar9 = (this->fields).elipsoidRadius.z;
    uVar40 = (this->fields).elipsoidRadius.x;
    uVar41 = (this->fields).elipsoidRadius.y;
    fVar42 = (float10)func_?();
    puStack_5 = (undefined *)(float)fVar42;
    layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
    uVar43 = (ulonglong)layerMask;
    ray_01.m_Origin.y = uVar2._4_4_;
    ray_01.m_Origin.x = (float)uVar2;
    ray_01.m_Origin.z = (float)puVar17;
    ray_01.m_Direction.x = (float)uVar38;
    ray_01.m_Direction.y = (float)uVar39;
    ray_01.m_Direction.z = fVar6;
    radius.y = (float)uVar41;
    radius.x = (float)uVar40;
    radius.z = fVar9;
    bVar27 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray_01,radius,(float)puStack_5 + VStack_13.z,(VoxelHit *)&stack0xfffffea0,
                        (this->fields).IgnoreWoIds,layerMask,(MethodInfo *)0x0);
    if (bVar27 != 0) {
      uVar8._0_4_ = (this->fields).elipsoidRadius.x;
      uVar8._4_4_ = (this->fields).elipsoidRadius.y;
      uVar2._0_4_ = (this->fields).elipsoidRadius.z;
      puStack_5 = puVar14;
      if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      R3Dir_00.y = (float)uVar41;
      R3Dir_00.x = (float)uVar40;
      R3Dir_00.z = fStack_12;
      R3Radius_01.z = (float)uVar2;
      R3Radius_01.x = (float)(int)uVar8;
      R3Radius_01.y = (float)(int)((ulonglong)uVar8 >> 0x20);
      puStack_5 = (undefined *)
                   MvCharacterController_DistanceR3SpaceToESpace
                             ((float)puStack_5,R3Dir_00,R3Radius_01,(MethodInfo *)0x0);
      fVar42 = (float10)func_?();
      fStack_3 = ePos.z;
      VStack_4.y = ePos.x;
      VStack_4.z = ePos.y;
      puStack_5 = (undefined *)
                   (float)((fVar42 + (float10)_UNK_?) - (float10)(float)puStack_5);
      fVar42 = (float10)func_?();
      uVar2._0_4_ = (float)(fVar42 - (float10)(float)puStack_5);
      (__return_storage_ptr__->position).x = VStack_4.y + (float)uVar43 * (float)uVar2;
      (__return_storage_ptr__->position).y = VStack_4.z + (float)(uVar43 >> 0x20) * (float)uVar2;
      (__return_storage_ptr__->position).z = fStack_3 + fStack_15 * (float)uVar2;
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

