
/* MVControllerColliderHit(VoxelHit, Vector3, Vector3, Vector3, Boolean) */

void Assembly-CSharp.dll::MVControllerColliderHit::MVControllerColliderHit__ctor
               (MVControllerColliderHit *this,VoxelHit hit,Vector3 position,Vector3 elipsoidRadius,
               Vector3 R3Velocity,bool testWithOutMoving,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined1 *)0x0;
  stack0xffffffe8 = 0.0;
  (this->hit).point.x = in_stack_2;
  (this->hit).point.y = hit.point.x;
  (this->hit).point.z = hit.point.y;
  (this->hit).normal.x = hit.point.z;
  (this->hit).normal.y = hit.normal.x;
  (this->hit).normal.z = hit.normal.y;
  *(float *)&(this->hit).cubePos = hit.normal.z;
  *(undefined4 *)&(this->hit).cubePos.z = hit.cubePos._0_4_;
  (this->hit).face = hit._28_4_;
  *(int32_t *)&(this->hit).isCubeHit = hit.face;
  (this->hit).woId = hit._36_4_;
  (this->hit).cube = (Cube *)hit.woId;
  (this->hit).distance = (float)hit.cube;
  (this->hit).collider = (Collider *)hit.distance;
  (this->hit).transform = (Transform *)hit.collider;
  *(Transform **)&(this->hit).field_0x3c = hit.transform;
  (this->hit).interactionFlags = hit._60_8_;
  func_?(&(this->hit).cube,0);
  puVar3 = (undefined8 *)func_?(auStack_4,&elipsoidRadius.z,0);
  uVar5 = *puVar3;
  fVar6 = *(float *)(puVar3 + 1);
  (this->moveDirection).x = (float)(int)uVar5;
  (this->moveDirection).y = (float)(int)((ulonglong)uVar5 >> 0x20);
  (this->moveDirection).z = fVar6;
  fVar7 = hit.interactionFlags._4_4_ + (float)uVar5 * (float)hit.cube;
  fVar8 = position.x + (float)((ulonglong)uVar5 >> 0x20) * (float)hit.cube;
  fVar6 = position.y + fVar6 * (float)hit.cube;
  hit.interactionFlags._4_4_ = fVar7 - in_stack_2;
  (this->positionTouchingHit).x = fVar7;
  (this->positionTouchingHit).y = fVar8;
  position.x = fVar8 - hit.point.x;
  position.y = fVar6 - hit.point.y;
  (this->positionTouchingHit).z = fVar6;
  puVar3 = (undefined8 *)
           func_?(auStack_4,(undefined1 *)((int)&hit.interactionFlags + 4),0);
  uVar5 = *puVar3;
  fVar6 = *(float *)(puVar3 + 1);
  (this->elipsoidNormal).x = (float)(int)uVar5;
  (this->elipsoidNormal).y = (float)(int)((ulonglong)uVar5 >> 0x20);
  (this->elipsoidNormal).z = fVar6;
  pVVar9 = MathFunctions::MathFunctions_DivideVector
                     ((Vector3 *)auStack_4,&this->elipsoidNormal,(Vector3 *)&position.z,
                      (MethodInfo *)0x0);
  puStack_1 = (undefined1 *)pVVar9->x;
  unique0x0000a404 = pVVar9->y;
  pVVar9 = MathFunctions::MathFunctions_DivideVector
                     ((Vector3 *)auStack_4,(Vector3 *)&puStack_1,(Vector3 *)&position.z,
                      (MethodInfo *)0x0);
  uVar10 = pVVar9->x;
  uVar11 = pVVar9->y;
  position.y = pVVar9->z;
  stack0xffffffe8 = (float)((int)&hit.interactionFlags + 4);
  puStack_1 = auStack_4;
  hit.interactionFlags._4_4_ = (float)uVar10;
  position.x = (float)uVar11;
  puVar3 = (undefined8 *)func_?();
  uVar5 = *puVar3;
  fVar6 = *(float *)(puVar3 + 1);
  (this->slopeNormal).x = (float)(int)uVar5;
  (this->slopeNormal).y = (float)(int)((ulonglong)uVar5 >> 0x20);
  (this->slopeNormal).z = fVar6;
  pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar12 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar12->fields)._MaterialRepository_k__BackingField;
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    stack0xffffffe8 = (float)hit.woId;
    materialId = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                           ((CubeBase *)hit.woId,hit._28_4_,(MethodInfo *)0x0);
    if (this_00 != (MVMaterialRepository *)0x0) {
      pMVar13 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                         (this_00,materialId,(MethodInfo *)0x0);
      this->material = pMVar13;
      func_?();
      join_0x00001100_4_ =
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      (this->impactVelocity).x = elipsoidRadius.z / join_0x00001100_4_;
      (this->impactVelocity).y = R3Velocity.x / join_0x00001100_4_;
      (this->impactVelocity).z = R3Velocity.y / join_0x00001100_4_;
      this->testWithOutMoving = R3Velocity.z._0_1_;
      return;
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

