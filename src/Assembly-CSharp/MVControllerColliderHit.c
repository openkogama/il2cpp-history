
/* MVControllerColliderHit(VoxelHit, Vector3, Vector3, Vector3, Boolean) */

void Assembly-CSharp.dll::MVControllerColliderHit::MVControllerColliderHit__ctor
               (MVControllerColliderHit *this,VoxelHit hit,Vector3 position,Vector3 elipsoidRadius,
               Vector3 R3Velocity,bool testWithOutMoving,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
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
  value.y = R3Velocity.x;
  value.x = elipsoidRadius.z;
  value.z = R3Velocity.y;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffd8,value,(MethodInfo *)0x0);
  uStack_4._0_4_ = pVVar3->x;
  uStack_4._4_4_ = pVVar3->y;
  fStack_5 = pVVar3->z;
  (pMVar1->moveDirection).x = (float)(undefined4)uStack_4;
  (pMVar1->moveDirection).y = (float)uStack_4._4_4_;
  (this->moveDirection).z = fStack_5;
  fVar6 = hit.interactionFlags._4_4_ + (float)(undefined4)uStack_4 * (float)hit.cube;
  fVar7 = position.x + (float)uStack_4._4_4_ * (float)hit.cube;
  fVar8 = position.y + fStack_5 * (float)hit.cube;
  (pMVar1->positionTouchingHit).x = fVar6;
  (pMVar1->positionTouchingHit).y = fVar7;
  position.y = fVar8 - hit.point.y;
  (this->positionTouchingHit).z = fVar8;
  value_00.y = fVar7 - hit.point.x;
  value_00.x = fVar6 - in_stack_2;
  value_00.z = position.y;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)((int)&hit.interactionFlags + 4),value_00,(MethodInfo *)0x0);
  fVar7 = pVVar9->y;
  pVVar3 = &this->elipsoidNormal;
  fVar8 = pVVar9->z;
  pVVar3->x = pVVar9->x;
  pVVar3->y = fVar7;
  (this->elipsoidNormal).z = fVar8;
  pVVar3 = MathFunctions::MathFunctions_DivideVector
                     ((Vector3 *)((int)&hit.interactionFlags + 4),pVVar3,(Vector3 *)&position.z,
                      (MethodInfo *)0x0);
  VStack_10.x = pVVar3->x;
  VStack_10.y = pVVar3->y;
  VStack_10.z = pVVar3->z;
  pVVar9 = MathFunctions::MathFunctions_DivideVector
                     ((Vector3 *)((int)&hit.interactionFlags + 4),&VStack_10,(Vector3 *)&position.z,
                      (MethodInfo *)0x0);
  uVar11 = pVVar9->x;
  uVar12 = pVVar9->y;
  hit.point.y = pVVar9->z;
  hit.point.z = 0.0;
  pVVar3 = (Vector3 *)((int)&hit.interactionFlags + 4);
  in_stack_2 = (float)uVar11;
  hit.point.x = (float)uVar12;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (pVVar3,*pVVar9,(MethodInfo *)0x0);
  fVar7 = pVVar9->y;
  fVar8 = pVVar9->z;
  (pMVar1->slopeNormal).x = pVVar9->x;
  (pMVar1->slopeNormal).y = fVar7;
  hit.point.z = 0.0;
  (this->slopeNormal).z = fVar8;
  hit.point.y = (float)&UNK_?;
  pMVar13 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar13 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar13->fields)._MaterialRepository_k__BackingField;
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      hit.face = (int32_t)TypeInfo__MV__WorldObject__CubeBase;
      hit._28_4_ = &UNK_?;
      func_?();
    }
    hit.face = 0;
    hit.cubePos.x = (undefined2)hit.woId;
    hit.cubePos.y = hit.woId._2_2_;
    hit.normal.z = (float)&UNK_?;
    materialId = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                           ((CubeBase *)hit.woId,hit._28_4_,(MethodInfo *)0x0);
    this = (MVControllerColliderHit *)CONCAT31((int3)((uint)pVVar3 >> 8),materialId);
    if (this_00 != (MVMaterialRepository *)0x0) {
      hit.cube = (Cube *)0x0;
      hit.woId = (int32_t)this;
      hit.face = (int32_t)&UNK_?;
      hit._36_4_ = this_00;
      hit.cube = (Cube *)MVMaterialRepository::MVMaterialRepository_GetMaterial
                                   (this_00,materialId,(MethodInfo *)0x0);
      hit.woId = (int32_t)&pMVar1->material;
      *(Cube **)hit.woId = hit.cube;
      hit._36_4_ = &UNK_?;
      func_?();
      hit.isCubeHit = 0;
      hit._37_3_ = 0;
      hit.face = (int32_t)&UNK_?;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      (pMVar1->impactVelocity).x = elipsoidRadius.z / fVar8;
      (pMVar1->impactVelocity).y = R3Velocity.x / fVar8;
      (pMVar1->impactVelocity).z = R3Velocity.y / fVar8;
      pMVar1->testWithOutMoving = R3Velocity.z._0_1_;
      return;
    }
  }
  hit.face = (int32_t)&UNK_?;
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

