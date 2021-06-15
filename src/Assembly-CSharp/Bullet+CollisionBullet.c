
/* Boolean DoBulletCollision(Ray, VoxelHit ByRef, Single, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::Bullet+CollisionBullet::Bullet_CollisionBullet_DoBulletCollision
               (Ray ray,VoxelHit *voxelHit,float distance,HashSet_1_System_Int32_ *ignoreWoIDs,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                        ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)0xfffffffb,(MethodInfo *)0x0);
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                     (pDVar1,(MethodInfo *)0x0);
  uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                        ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)((uint)pOVar2 & ~(1 << (uVar3 & 0x1f))),(MethodInfo *)0x0);
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                     (pDVar1,(MethodInfo *)0x0);
  bVar4 = CollisionDetection::CollisionDetection_MVHit_1
                    (ray,voxelHit,distance,ignoreWoIDs,(int32_t)pOVar2,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    return 0;
  }
  uVar5._0_4_ = (voxelHit->point).x;
  uVar5._4_4_ = (voxelHit->point).y;
  fVar6 = (voxelHit->point).z;
  VVar7 = voxelHit->point;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffe8,VVar7,*pVVar8,(MethodInfo *)0x0);
  VVar7 = *pVVar8;
  pCVar9 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_green
                      ((Color *)&stack0xffffffe4,(MethodInfo *)0x0);
  fVar10 = pCVar9->r;
  fVar11 = pCVar9->g;
  fVar12 = pCVar9->b;
  fVar13 = pCVar9->a;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  VVar14.z = fVar6;
  VVar14.x = (float)(int)uVar5;
  VVar14.y = (float)(int)((ulonglong)uVar5 >> 0x20);
  color.g = fVar11;
  color.r = fVar10;
  color.b = fVar12;
  color.a = fVar13;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
            (VVar14,VVar7,color,10.0,(MethodInfo *)0x0);
  uVar15._0_4_ = (voxelHit->point).x;
  uVar15._4_4_ = (voxelHit->point).y;
  fVar6 = (voxelHit->point).z;
  VVar7 = voxelHit->point;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffe8,VVar7,*pVVar8,(MethodInfo *)0x0);
  VVar14 = *pVVar8;
  pCVar9 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_green
                      ((Color *)&stack0xffffffe4,(MethodInfo *)0x0);
  VVar7.z = fVar6;
  VVar7.x = (float)(int)uVar15;
  VVar7.y = (float)(int)((ulonglong)uVar15 >> 0x20);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
            (VVar7,VVar14,*pCVar9,10.0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this != (MVWorldObjectClientManager *)0x0) &&
     (this_00 = (PrefabPool *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this,voxelHit->woId,(MethodInfo *)0x0), this_00 != (PrefabPool *)0x0)) {
    pMVar16 = PrefabPool::PrefabPool_get_MVTextMsgPrefab(this_00,(MethodInfo *)0x0);
    if (pMVar16 != (MVTextMsgObject *)0x0) {
      this_01 = MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
                          ((MVWorldObjectClient *)this_00,(MethodInfo *)0x0);
      if (this_01 == (MVWorldObjectClient *)0x0) {
        return 0;
      }
      pIVar17 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
      voxelHit->woId = (int32_t)pIVar17;
    }
    return 1;
  }
  func_?();
  pcVar18 = (code *)swi(3);
  bVar4 = (*pcVar18)();
  return bVar4;
}


/* Boolean DoCollisionCheck(VoxelHit ByRef) */

bool Assembly-CSharp.dll::Bullet+CollisionBullet::Bullet_CollisionBullet_DoCollisionCheck
               (Bullet_CollisionBullet *this,VoxelHit *voxelHit,MethodInfo *method)

{
  uVar1 = (this->fields).prevPos.x;
  uVar2 = (this->fields).prevPos.y;
  pRVar3 = &(this->fields).ray;
  func_?(pRVar3,uVar1,uVar2,(this->fields).prevPos.z,0);
  uVar4 = (this->fields).ray.m_Direction.z;
  uVar5 = (pRVar3->m_Origin).x;
  uVar6 = (pRVar3->m_Origin).y;
  uVar7 = (pRVar3->m_Origin).z;
  ray.m_Origin.z = (float)uVar7;
  ray.m_Origin.y = (float)uVar6;
  ray.m_Origin.x = (float)uVar5;
  uVar8 = (pRVar3->m_Direction).x;
  uVar9 = (pRVar3->m_Direction).y;
  ray.m_Direction.y = (float)uVar9;
  ray.m_Direction.x = (float)uVar8;
  fVar10 = (this->fields).speed;
  fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  ray.m_Direction.z = (float)uVar4;
  bVar12 = Bullet_CollisionBullet_DoBulletCollision
                     (ray,voxelHit,fVar11 * fVar10,(this->fields).ignoreWoIDs,(MethodInfo *)0x0);
  return bVar12;
}


/* Bullet+CollisionBullet+State Update(VoxelHit ByRef) */

Bullet_CollisionBullet_State__Enum
Assembly-CSharp.dll::Bullet+CollisionBullet::Bullet_CollisionBullet_Update
          (Bullet_CollisionBullet *this,VoxelHit *voxelHit,MethodInfo *method)

{
  pBVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  BVar2 = Bullet_CollisionBullet_State__Enum_Moving;
  fVar3 = (this->fields).currentPos.y;
  fVar4 = (this->fields).currentPos.z;
  (pBVar1->fields).prevPos.x = (this->fields).currentPos.x;
  (pBVar1->fields).prevPos.y = fVar3;
  fVar3 = (this->fields).speed;
  (this->fields).prevPos.z = fVar4;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pBVar5 = (Bullet_CollisionBullet *)(fVar4 * fVar3);
  fVar3 = (this->fields).range;
  fVar4 = (this->fields).distanceTraveled + (float)pBVar5;
  (this->fields).distanceTraveled = fVar4;
  this = pBVar5;
  if (fVar3 < fVar4) {
    BVar2 = Bullet_CollisionBullet_State__Enum_OutOfRange;
    this = (Bullet_CollisionBullet *)((float)pBVar5 - (fVar4 - fVar3));
  }
  voxelHit_00 = &(pBVar1->fields).ray;
  pVVar6 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                     ((Vector3 *)&stack0xffffffe4,(InputToPlayerMovementAndroid *)voxelHit_00,
                      (MethodInfo *)0x0);
  uVar7 = pVVar6->x;
  uVar8 = pVVar6->y;
  fVar3 = pVVar6->z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.y = (float)uVar8;
  a.x = (float)uVar7;
  a.z = fVar3;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffe4,a,(float)this,(MethodInfo *)0x0);
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffe4,*pVVar6,(pBVar1->fields).prevPos,(MethodInfo *)0x0
                     );
  fVar4 = pVVar6->y;
  fVar3 = pVVar6->z;
  pHStack9 = (HashSet_1_System_Int32_ *)0x0;
  (pBVar1->fields).currentPos.x = pVVar6->x;
  (pBVar1->fields).currentPos.y = fVar4;
  uVar10 = (pBVar1->fields).prevPos.y;
  (pBVar1->fields).currentPos.z = fVar3;
  fStack11 = (pBVar1->fields).prevPos.z;
  pRStack12 = (Ray *)uVar10;
  func_?();
  fVar4 = (voxelHit_00->m_Origin).x;
  fVar13 = (pBVar1->fields).ray.m_Origin.y;
  fVar14 = (pBVar1->fields).ray.m_Origin.z;
  this = (Bullet_CollisionBullet *)(pBVar1->fields).ray.m_Direction.x;
  uVar15 = (pBVar1->fields).ray.m_Direction.y;
  uVar16 = (pBVar1->fields).ray.m_Direction.z;
  fVar3 = (pBVar1->fields).speed;
  fStack11 =
       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fStack11 = fStack11 * fVar3;
  uStack17 = 0;
  pHStack9 = (pBVar1->fields).ignoreWoIDs;
  fVar18 = fVar13;
  fVar19 = fVar4;
  uVar20 = CONCAT44(fVar18,fVar19);
  fVar21 = fVar14;
  voxelHit = (VoxelHit *)uVar15;
  method = (MethodInfo *)uVar16;
  ray = (Ray)CONCAT168(ray._0_16_,uVar20);
  pRStack12 = voxelHit_00;
  bVar22 = Bullet_CollisionBullet_DoBulletCollision
                    (ray,(VoxelHit *)voxelHit_00,fStack11,pHStack9,(MethodInfo *)0x0);
  if (bVar22 != 0) {
    BVar2 = Bullet_CollisionBullet_State__Enum_Hit;
  }
  return BVar2;
}


/* Bullet+CollisionBullet(Single, Single, Vector3, Vector3, HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::Bullet+CollisionBullet::Bullet_CollisionBullet__ctor
               (Bullet_CollisionBullet *this,float range,float speed,Vector3 origin,
               Vector3 direction,HashSet_1_System_Int32_ *ignoreWoIDs,MethodInfo *method)

{
  pRVar1 = &(this->fields).ray;
  (pRVar1->m_Origin).x = 0.0;
  (this->fields).ray.m_Origin.y = 0.0;
  (this->fields).ray.m_Origin.z = 0.0;
  (this->fields).ray.m_Direction.x = 0.0;
  (this->fields).ray.m_Direction.y = 0.0;
  (this->fields).ray.m_Direction.z = 0.0;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).currentPos.x = origin.x;
  (this->fields).currentPos.y = origin.y;
  (this->fields).prevPos.x = origin.x;
  (this->fields).prevPos.y = origin.y;
  (this->fields).currentPos.z = origin.z;
  (this->fields).prevPos.z = origin.z;
  func_?(pRVar1,direction._0_8_,direction.z,0);
  (this->fields).range = range;
  (this->fields).speed = speed;
  (this->fields).ignoreWoIDs = ignoreWoIDs;
  return;
}

