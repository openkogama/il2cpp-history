
/* Boolean DoBulletCollision(Ray, VoxelHit ByRef, Single, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::Bullet+CollisionBullet::Bullet_CollisionBullet_DoBulletCollision
               (Ray ray,VoxelHit *voxelHit,float distance,HashSet_1_System_Int32_ *ignoreWoIDs,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  p_Var12 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_AsRef_1((Void *)0xfffffffb,(MethodInfo *)0x0);
  p_Var12 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_AsRef_1((Void *)p_Var12,(MethodInfo *)0x0);
  uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Logic,(MethodInfo *)0x0);
  p_Var12 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_AsRef_1
                      ((Void *)((uint)p_Var12 & ~(1 << (uVar1 & 0x1f))),(MethodInfo *)0x0);
  p_Var12 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_AsRef_1((Void *)p_Var12,(MethodInfo *)0x0);
  bVar2 = CollisionDetection::CollisionDetection_MVHit_1
                     (ray,voxelHit,distance,ignoreWoIDs,(int32_t)p_Var12,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  uVar3 = (voxelHit->point).x;
  fVar4 = (voxelHit->point).y;
  fVar5 = (voxelHit->point).z;
  fVar6 = (float)uVar3;
  fVar7 = fVar5;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar9 = (pVVar8->upVector).x;
  uVar10 = (pVVar8->upVector).y;
  fVar6 = (float)uVar9 + fVar6;
  fVar4 = (float)uVar10 + fVar4;
  fVar7 = (pVVar8->upVector).z + fVar7;
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  VVar11.y = (float)_UNK_?;
  VVar11.x = (float)uVar3;
  VVar11.z = fVar5;
  end.y = fVar4;
  end.x = fVar6;
  end.z = fVar7;
  color.g = (float)_UNK_?;
  color.r = (float)_UNK_?;
  color.b = (float)_UNK_?;
  color.a = _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine
            (VVar11,end,color,10.0,(MethodInfo *)0x0);
  uVar12._0_4_ = (voxelHit->point).x;
  uVar12._4_4_ = (voxelHit->point).y;
  fVar4 = (voxelHit->point).z;
  VVar11 = voxelHit->point;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar13 = (pVVar8->rightVector).x;
  uVar14 = (pVVar8->rightVector).y;
  end_00.y = (float)uVar14 + (float)((ulonglong)uVar12 >> 0x20);
  end_00.x = (float)uVar13 + (float)uVar12;
  end_00.z = (pVVar8->rightVector).z + fVar4;
  color_00.g = (float)_UNK_?;
  color_00.r = (float)_UNK_?;
  color_00.b = (float)_UNK_?;
  color_00.a = _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine
            (VVar11,end_00,color_00,10.0,(MethodInfo *)0x0);
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this != (MVWorldObjectClientManager *)0x0) &&
     (pMVar15 = (MVWorldObjectClient *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this,voxelHit->woId,(MethodInfo *)0x0),
     pMVar15 != (MVWorldObjectClient *)0x0)) {
    if ((pMVar15->fields)._PlayInteractionType_k__BackingField != 0) {
      pMVar15 = MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
                          (pMVar15,(MethodInfo *)0x0);
      if (pMVar15 == (MVWorldObjectClient *)0x0) {
        return 0;
      }
      voxelHit->woId = (pMVar15->fields)._.id;
    }
    return 1;
  }
  func_?();
  pcVar16 = (code *)swi(3);
  bVar2 = (*pcVar16)();
  return bVar2;
}


/* Boolean DoCollisionCheck(VoxelHit ByRef) */

bool Assembly-CSharp.dll::Bullet+CollisionBullet::Bullet_CollisionBullet_DoCollisionCheck
               (Bullet_CollisionBullet *this,VoxelHit *voxelHit,MethodInfo *method)

{
  fVar1 = (this->fields).prevPos.y;
  fVar2 = (this->fields).prevPos.z;
  (this->fields).ray.m_Origin.x = (this->fields).prevPos.x;
  (this->fields).ray.m_Origin.y = fVar1;
  (this->fields).ray.m_Origin.z = fVar2;
  ray = (this->fields).ray;
  fVar2 = (this->fields).speed;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  bVar3 = Bullet_CollisionBullet_DoBulletCollision
                    (ray,voxelHit,fVar1 * fVar2,(this->fields).ignoreWoIDs,(MethodInfo *)0x0);
  return bVar3;
}


/* Bullet+CollisionBullet+State Update(VoxelHit ByRef) */

Bullet_CollisionBullet_State__Enum
Assembly-CSharp.dll::Bullet+CollisionBullet::Bullet_CollisionBullet_Update
          (Bullet_CollisionBullet *this,VoxelHit *voxelHit,MethodInfo *method)

{
  BVar1 = Bullet_CollisionBullet_State__Enum_Moving;
  fVar2 = (this->fields).currentPos.y;
  fVar3 = (this->fields).currentPos.z;
  (this->fields).prevPos.x = (this->fields).currentPos.x;
  (this->fields).prevPos.y = fVar2;
  fVar2 = (this->fields).speed;
  (this->fields).prevPos.z = fVar3;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar3 = fVar3 * fVar2;
  fVar2 = fVar3 + (this->fields).distanceTraveled;
  pfVar4 = &(this->fields).range;
  (this->fields).distanceTraveled = fVar2;
  if (*pfVar4 <= fVar2 && fVar2 != *pfVar4) {
    BVar1 = Bullet_CollisionBullet_State__Enum_OutOfRange;
    fVar3 = fVar3 - (fVar2 - (this->fields).range);
  }
  uVar5 = (this->fields).ray.m_Direction.x;
  uVar6 = (this->fields).ray.m_Direction.y;
  fVar2 = (this->fields).ray.m_Direction.z;
  uVar7 = (this->fields).prevPos.x;
  uVar8 = (this->fields).prevPos.y;
  fVar9 = (this->fields).prevPos.z;
  fVar10 = (this->fields).prevPos.x;
  fVar11 = (this->fields).prevPos.y;
  (this->fields).currentPos.x = (float)uVar7 + (float)uVar5 * fVar3;
  (this->fields).currentPos.y = (float)uVar8 + (float)uVar6 * fVar3;
  (this->fields).currentPos.z = fVar9 + fVar2 * fVar3;
  fVar2 = (this->fields).prevPos.z;
  (this->fields).ray.m_Origin.x = fVar10;
  (this->fields).ray.m_Origin.y = fVar11;
  (this->fields).ray.m_Origin.z = fVar2;
  ray = (this->fields).ray;
  fVar2 = (this->fields).speed;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  bVar12 = Bullet_CollisionBullet_DoBulletCollision
                    (ray,voxelHit,fVar2 * fVar3,(this->fields).ignoreWoIDs,(MethodInfo *)0x0);
  if (bVar12 != 0) {
    BVar1 = Bullet_CollisionBullet_State__Enum_Hit;
  }
  return BVar1;
}


/* Bullet+CollisionBullet(Single, Single, Vector3, Vector3, HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::Bullet+CollisionBullet::Bullet_CollisionBullet__ctor
               (Bullet_CollisionBullet *this,float range,float speed,Vector3 origin,
               Vector3 direction,HashSet_1_System_Int32_ *ignoreWoIDs,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).currentPos.x = origin.x;
  (this->fields).currentPos.y = origin.y;
  (this->fields).currentPos.z = origin.z;
  (this->fields).prevPos.x = origin.x;
  (this->fields).prevPos.y = origin.y;
  (this->fields).prevPos.z = origin.z;
  origin.z = direction.z;
  origin.x = direction.x;
  origin.y = direction.y;
  puVar1 = (undefined8 *)func_?(&direction,&origin,0);
  uVar2 = *puVar1;
  fVar3 = *(float *)(puVar1 + 1);
  (this->fields).ray.m_Direction.x = (float)(int)uVar2;
  (this->fields).ray.m_Direction.y = (float)(int)((ulonglong)uVar2 >> 0x20);
  (this->fields).ray.m_Direction.z = fVar3;
  (this->fields).ignoreWoIDs = ignoreWoIDs;
  (this->fields).range = range;
  (this->fields).speed = speed;
  func_?(&(this->fields).ignoreWoIDs,ignoreWoIDs);
  return;
}

