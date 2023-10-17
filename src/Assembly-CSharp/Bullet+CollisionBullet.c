
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
  pVVar1 = (Void *)mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                             ((Void *)0xfffffffb,(MethodInfo *)0x0);
  ppOVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                       (pVVar1,(MethodInfo *)0x0);
  uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Logic,(MethodInfo *)0x0);
  pVVar1 = (Void *)mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                             ((Void *)((uint)ppOVar2 & ~(1 << (uVar3 & 0x1f))),(MethodInfo *)0x0);
  ppOVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                       (pVVar1,(MethodInfo *)0x0);
  bVar4 = CollisionDetection::CollisionDetection_MVHit_1
                    (ray,voxelHit,distance,ignoreWoIDs,(int32_t)ppOVar2,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    return 0;
  }
  uVar5._0_4_ = (voxelHit->point).x;
  uVar5._4_4_ = (voxelHit->point).y;
  fVar6 = (voxelHit->point).z;
  fVar7 = fVar6;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar9 = (pVVar8->upVector).x;
  uVar10 = (pVVar8->upVector).y;
  fVar11 = (float)uVar9 + (float)uVar5;
  fVar12 = (float)uVar10 + (float)((ulonglong)uVar5 >> 0x20);
  fVar7 = (pVVar8->upVector).z + fVar7;
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  start.y = _UNK_?;
  start.x = (float)_UNK_?;
  start.z = fVar6;
  VVar13.y = fVar12;
  VVar13.x = fVar11;
  VVar13.z = fVar7;
  color.g = (float)_UNK_?;
  color.r = (float)_UNK_?;
  color.b = (float)_UNK_?;
  color.a = _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
            (start,VVar13,color,10.0,(MethodInfo *)0x0);
  uVar14._0_4_ = (voxelHit->point).x;
  uVar14._4_4_ = (voxelHit->point).y;
  fStack15 = (voxelHit->point).z;
  VVar13 = voxelHit->point;
  fVar6 = fStack15;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar16 = (pVVar8->rightVector).x;
  uVar17 = (pVVar8->rightVector).y;
  end.y = (float)uVar17 + (float)((ulonglong)uVar14 >> 0x20);
  end.x = (float)uVar16 + (float)uVar14;
  end.z = (pVVar8->rightVector).z + fVar6;
  color_00.g = (float)_UNK_?;
  color_00.r = (float)_UNK_?;
  color_00.b = (float)_UNK_?;
  color_00.a = _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
            (VVar13,end,color_00,10.0,(MethodInfo *)0x0);
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this != (MVWorldObjectClientManager *)0x0) &&
     (pMVar18 = (MVWorldObjectClient *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this,voxelHit->woId,(MethodInfo *)0x0),
     pMVar18 != (MVWorldObjectClient *)0x0)) {
    if ((pMVar18->fields)._PlayInteractionType_k__BackingField != 0) {
      pMVar18 = MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
                          (pMVar18,(MethodInfo *)0x0);
      if (pMVar18 == (MVWorldObjectClient *)0x0) {
        return 0;
      }
      voxelHit->woId = (pMVar18->fields)._.id;
    }
    return 1;
  }
  func_?();
  pcVar19 = (code *)swi(3);
  bVar4 = (*pcVar19)();
  return bVar4;
}


/* Boolean DoCollisionCheck(VoxelHit ByRef) */

bool Assembly-CSharp.dll::Bullet+CollisionBullet::Bullet_CollisionBullet_DoCollisionCheck
               (Bullet_CollisionBullet *this,VoxelHit *voxelHit,MethodInfo *method)

{
  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
  ParticleSystem_Particle_set_position
            ((ParticleSystem_Particle *)&(this->fields).ray,(this->fields).prevPos,(MethodInfo *)0x0
            );
  fVar1 = (this->fields).ray.m_Origin.x;
  uVar2 = (this->fields).ray.m_Direction.z;
  fVar3 = (this->fields).speed;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar4 = fVar4 * fVar3;
  ignoreWoIDs = (this->fields).ignoreWoIDs;
  ray.m_Origin.y = (float)voxelHit;
  ray.m_Origin.x = fVar1;
  ray.m_Origin.z = fVar4;
  ray.m_Direction.x = (float)ignoreWoIDs;
  ray.m_Direction.y = 0.0;
  ray.m_Direction.z = (float)uVar2;
  bVar5 = Bullet_CollisionBullet_DoBulletCollision(ray,voxelHit,fVar4,ignoreWoIDs,(MethodInfo *)0x0)
  ;
  return bVar5;
}


/* Bullet+CollisionBullet+State Update(VoxelHit ByRef) */

Bullet_CollisionBullet_State__Enum
Assembly-CSharp.dll::Bullet+CollisionBullet::Bullet_CollisionBullet_Update
          (Bullet_CollisionBullet *this,VoxelHit *voxelHit,MethodInfo *method)

{
  pBVar1 = this;
  BVar2 = Bullet_CollisionBullet_State__Enum_Moving;
  fVar3 = (this->fields).currentPos.y;
  fVar4 = (this->fields).currentPos.z;
  (pBVar1->fields).prevPos.x = (this->fields).currentPos.x;
  (pBVar1->fields).prevPos.y = fVar3;
  fVar3 = (this->fields).speed;
  (this->fields).prevPos.z = fVar4;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pBVar5 = (Bullet_CollisionBullet *)(fVar4 * fVar3);
  fVar3 = (float)pBVar5 + (this->fields).distanceTraveled;
  pfVar6 = &(this->fields).range;
  (this->fields).distanceTraveled = fVar3;
  if (*pfVar6 <= fVar3 && fVar3 != *pfVar6) {
    BVar2 = Bullet_CollisionBullet_State__Enum_OutOfRange;
    pBVar5 = (Bullet_CollisionBullet *)((float)pBVar5 - (fVar3 - (this->fields).range));
  }
  this = pBVar5;
  pRVar7 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                      ((Regex_CachedCodeEntryKey *)&stack0xffffffe0,
                       (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)&(pBVar1->fields).ray,(MethodInfo *)0x0);
  uVar8 = pRVar7->_options;
  uVar9 = pRVar7->_cultureKey;
  pSVar10 = pRVar7->_pattern;
  uVar11 = (pBVar1->fields).prevPos.x;
  uVar12 = (pBVar1->fields).prevPos.y;
  fVar3 = (pBVar1->fields).prevPos.z;
  uVar13 = (pBVar1->fields).prevPos.x;
  uVar14 = (pBVar1->fields).prevPos.y;
  value.y = (float)uVar14;
  value.x = (float)uVar13;
  (pBVar1->fields).currentPos.x = (float)uVar11 + (float)uVar8 * (float)this;
  (pBVar1->fields).currentPos.y = (float)uVar12 + (float)uVar9 * (float)this;
  (pBVar1->fields).currentPos.z = fVar3 + (float)pSVar10 * (float)this;
  value.z = (pBVar1->fields).prevPos.z;
  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
  ParticleSystem_Particle_set_position
            ((ParticleSystem_Particle *)&(pBVar1->fields).ray,value,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)(pBVar1->fields).ray.m_Origin.y;
  pSVar10 = (String *)(pBVar1->fields).ray.m_Origin.z;
  pSVar15 = (String *)(pBVar1->fields).ray.m_Direction.x;
  fVar3 = (pBVar1->fields).speed;
  puVar16 = &UNK_?;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
  ignoreWoIDs = (pBVar1->fields).ignoreWoIDs;
  ray.m_Origin.y = (float)method_00;
  ray.m_Origin.x = (float)puVar16;
  ray.m_Origin.z = (float)pSVar10;
  ray.m_Direction.x = (float)pSVar15;
  ray.m_Direction.y = fVar4 * fVar3;
  ray.m_Direction.z = (float)ignoreWoIDs;
  bVar17 = Bullet_CollisionBullet_DoBulletCollision
                     (ray,voxelHit,fVar4 * fVar3,ignoreWoIDs,(MethodInfo *)0x0);
  if (bVar17 != 0) {
    BVar2 = Bullet_CollisionBullet_State__Enum_Hit;
  }
  return BVar2;
}


/* Bullet+CollisionBullet(Single, Single, Vector3, Vector3, HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::Bullet+CollisionBullet::Bullet_CollisionBullet__ctor
               (Bullet_CollisionBullet *this,float range,float speed,Vector3 origin,
               Vector3 direction,HashSet_1_System_Int32_ *ignoreWoIDs,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).currentPos.x = origin.x;
  (this->fields).currentPos.y = origin.y;
  (this->fields).prevPos.x = origin.x;
  (this->fields).prevPos.y = origin.y;
  (this->fields).currentPos.z = origin.z;
  (this->fields).prevPos.z = origin.z;
  UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_set_direction
            (&(this->fields).ray,direction,(MethodInfo *)0x0);
  (this->fields).ignoreWoIDs = ignoreWoIDs;
  (this->fields).range = range;
  (this->fields).speed = speed;
  func_?(&(this->fields).ignoreWoIDs,ignoreWoIDs);
  return;
}

