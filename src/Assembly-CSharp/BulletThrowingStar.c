
/* Void Awake() */

void Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_Awake
               (BulletThrowingStar *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  (this->fields).tfrm = pTVar1;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  return;
}


/* BulletThrowingStar CreateBullet(PoolEnums, Vector3) */

BulletThrowingStar *
Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_CreateBullet
          (PoolEnums__Enum poolEnum,Vector3 pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    this_01 = (EnumPoolManager *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                         (MethodInfo *)0x0);
    if (this_01 != (EnumPoolManager *)0x0) {
      pBVar1 = (BulletThrowingStar *)
               EnumPoolManager::EnumPoolManager_Instantiate_18
                         (this_01,poolEnum,
                          BulletThrowingStar_MethodInfo__EnumPoolManager__Instantiate<BulletThrowingStar>_PoolEnums_
                         );
      if (pBVar1 != (BulletThrowingStar *)0x0) {
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pBVar1,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          auVar2._8_4_ = 0;
          auVar2._0_8_ = pos._4_8_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (this_02,(Vector3)(auVar2 << 0x20),(MethodInfo *)0x0);
          this = (HashSet_1_UnityEngine_Vector3_ *)(pBVar1->fields).ignoreWoIDs;
          if (this != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
            HashSet_1_UnityEngine_Vector3__Clear
                      (this,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
            (pBVar1->fields).initiatedPoolEnum = poolEnum;
            (pBVar1->fields).isFired = 0;
            (pBVar1->fields).fallRate = 0.0;
            ((Color *)&(pBVar1->fields).onHitLocal)->r = 0.0;
            (pBVar1->fields).onHit = (BulletThrowingStar_OnHitDelegate *)0x0;
            return pBVar1;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pBVar1 = (BulletThrowingStar *)(*pcVar3)();
  return pBVar1;
}


/* Boolean DoBulletCollision(Ray, VoxelHit ByRef, Single, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_DoBulletCollision
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
  uVar4 = ray.m_Origin._0_8_;
  fVar5 = distance;
  auVar6 = CONCAT48(fVar5,uVar4);
  fVar7 = (float)ignoreWoIDs;
  auVar8 = CONCAT412(fVar7,auVar6);
  auVar9._16_4_ = (float)pOVar2;
  auVar9 = CONCAT416(auVar9._16_4_,auVar8);
  ray.m_Origin.x = 0.0;
  bVar10 = CollisionDetection::CollisionDetection_MVHit_1
                    ((Ray)CONCAT420(ray.m_Origin.x,auVar9),voxelHit,distance,ignoreWoIDs,
                     (int32_t)pOVar2,(MethodInfo *)0x0);
  if (bVar10 == 0) {
    return 0;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this != (MVWorldObjectClientManager *)0x0) &&
     (this_00 = (PrefabPool *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this,voxelHit->woId,(MethodInfo *)0x0), this_00 != (PrefabPool *)0x0)) {
    pMVar11 = PrefabPool::PrefabPool_get_MVTextMsgPrefab(this_00,(MethodInfo *)0x0);
    if (pMVar11 != (MVTextMsgObject *)0x0) {
      this_01 = MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
                          ((MVWorldObjectClient *)this_00,(MethodInfo *)0x0);
      if (this_01 == (MVWorldObjectClient *)0x0) {
        return 0;
      }
      pIVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0)
      ;
      voxelHit->woId = (int32_t)pIVar12;
    }
    return 1;
  }
  func_?();
  pcVar13 = (code *)swi(3);
  bVar10 = (*pcVar13)();
  return bVar10;
}


/* Boolean DoCollisionCheck(Vector3, Single, Vector3, VoxelHit ByRef) */

bool Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_DoCollisionCheck
               (BulletThrowingStar *this,Vector3 pos,float dist,Vector3 dir,VoxelHit *voxelHit,
               MethodInfo *method)

{
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  func_?(&stack0xffffffd4,pos._0_8_,pos.z,dir._0_8_,dir.z,0);
  ignoreWoIds = (this->fields).ignoreWoIDs;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                        ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)0xfffffffb,(MethodInfo *)0x0);
  pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                     (pDVar4,(MethodInfo *)0x0);
  uVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                        ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)((uint)pOVar5 & ~(1 << (uVar6 & 0x1f))),(MethodInfo *)0x0);
  pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                     (pDVar4,(MethodInfo *)0x0);
  ray.m_Origin.y = 0.0;
  ray.m_Origin.x = (float)pOVar5;
  ray.m_Origin.z = (float)uVar2;
  ray.m_Direction.x = (float)uVar3;
  ray.m_Direction.y = (float)(int)uVar1;
  ray.m_Direction.z = (float)((ulonglong)uVar1 >> 0x20);
  bVar7 = CollisionDetection::CollisionDetection_MVHit_1
                    (ray,voxelHit,dist,ignoreWoIds,(int32_t)pOVar5,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    return 0;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_00 != (MVWorldObjectClientManager *)0x0) &&
     (this_01 = (PrefabPool *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_00,voxelHit->woId,(MethodInfo *)0x0), this_01 != (PrefabPool *)0x0))
  {
    pMVar8 = PrefabPool::PrefabPool_get_MVTextMsgPrefab(this_01,(MethodInfo *)0x0);
    if (pMVar8 != (MVTextMsgObject *)0x0) {
      this_02 = MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
                          ((MVWorldObjectClient *)this_01,(MethodInfo *)0x0);
      if (this_02 == (MVWorldObjectClient *)0x0) {
        return 0;
      }
      pIVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0)
      ;
      voxelHit->woId = (int32_t)pIVar9;
    }
    return 1;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar7 = (*pcVar10)();
  return bVar7;
}


/* Vector3 FindTargetPos(Single) */

Vector3 * Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_FindTargetPos
                    (Vector3 *__return_storage_ptr__,BulletThrowingStar *this,float maxRange,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff90,0,0x48);
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
  uVar4._0_4_ = (this->fields).lineOfFire.m_Origin.x;
  fVar5 = (this->fields).lineOfFire.m_Origin.y;
  fVar6 = (this->fields).lineOfFire.m_Origin.z;
  fVar7 = (this->fields).lineOfFire.m_Direction.x;
  ignoreWoIds = (this->fields).ignoreWoIDs;
  fVar8 = (this->fields).lineOfFire.m_Direction.y;
  fVar9 = (this->fields).lineOfFire.m_Direction.z;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                     (pDVar1,(MethodInfo *)0x0);
  voxelHit = (VoxelHit *)&stack0xffffff90;
  uVar10._4_4_ = fVar9;
  uVar10._0_4_ = fVar8;
  ray.m_Origin.y = fVar5;
  ray.m_Origin.x = (float)uVar4;
  ray.m_Origin.z = fVar6;
  ray.m_Direction.x = fVar7;
  ray.m_Direction.y = fVar8;
  ray.m_Direction.z = fVar9;
  bVar11 = CollisionDetection::CollisionDetection_MVHit_1
                    (ray,voxelHit,maxRange,ignoreWoIds,(int32_t)pOVar2,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
        __return_storage_ptr__ = (Vector3 *)pVVar12->z;
        pVVar12 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                           ((Vector3 *)&stack0xffffffdc,
                            (InputToPlayerMovementAndroid *)&(this->fields).lineOfFire,
                            (MethodInfo *)0x0);
        uVar4._0_4_ = pVVar12->x;
        uVar4._4_4_ = pVVar12->y;
        fVar8 = pVVar12->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          puVar13 = &UNK_?;
          func_?();
          uVar4 = CONCAT44(puVar13,(float)uVar4);
        }
        uVar14 = (undefined4)uVar4;
        pVVar12 = (Vector3 *)&stack0xffffffdc;
        a.z = fVar8;
        a.x = (float)(int)uVar4;
        a.y = (float)(int)((ulonglong)uVar4 >> 0x20);
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           (pVVar12,a,maxRange,(MethodInfo *)0x0);
        fVar16 = (float)uVar14;
        VVar17.x = (float)pVVar12;
        VVar17 = (Vector3)CONCAT84(uVar18,VVar17.x);
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xffffffdc,VVar17,*pVVar15,(MethodInfo *)0x0);
        fVar9 = pVVar12->y;
        fVar8 = pVVar12->z;
        __return_storage_ptr__->x = pVVar12->x;
        __return_storage_ptr__->y = fVar9;
        __return_storage_ptr__->z = fVar8;
        return __return_storage_ptr__;
      }
    }
    func_?();
    pcVar19 = (code *)swi(3);
    pVVar12 = (Vector3 *)(*pcVar19)();
    return pVVar12;
  }
  puVar20 = (undefined8 *)func_?();
  fVar8 = *(float *)(puVar20 + 1);
  fVar6 = (float)*puVar20;
  fVar7 = (float)((ulonglong)*puVar20 >> 0x20);
  puVar20 = (undefined8 *)func_?();
  fVar9 = *(float *)(puVar20 + 1);
  uVar14 = (undefined4)*puVar20;
  uVar21 = (undefined4)((ulonglong)*puVar20 >> 0x20);
  pCVar22 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_yellow
                      ((Color *)&stack0xffffffd8,(MethodInfo *)0x0);
  puVar13 = (undefined *)pCVar22->r;
  pDVar23 = (Debug_1__Class *)pCVar22->g;
  uVar4._0_4_ = pCVar22->b;
  fVar5 = pCVar22->a;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    puVar13 = &UNK_?;
    pDVar23 = TypeInfo__UnityEngine__Debug;
    func_?();
  }
  VVar17.y = fVar7;
  VVar17.x = fVar6;
  VVar17.z = fVar8;
  end.y = (float)uVar21;
  end.x = (float)uVar14;
  end.z = fVar9;
  color.g = (float)pDVar23;
  color.r = (float)puVar13;
  color.b = (float)uVar4;
  color.a = fVar5;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
            (VVar17,end,color,10.0,(MethodInfo *)0x0);
  __return_storage_ptr__->x = (float)uVar10;
  __return_storage_ptr__->y = SUB84(uVar10,4);
  __return_storage_ptr__->z = (float)voxelHit;
  return __return_storage_ptr__;
}


/* Void Fire(Single, Single, Ray, HashSet`1[System.Int32], Single, Single) */

void Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_Fire
               (BulletThrowingStar *this,float speed,float rangeStraight,Ray lineOfFire,
               HashSet_1_System_Int32_ *ignoreWoIDs,float rangeFall,float fallRate,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  if ((this->fields).isFired != 0) {
    return;
  }
  (this->fields).ignoreWoIDs = ignoreWoIDs;
  pTVar3 = (this->fields).tfrm;
  (this->fields).isFired = 1;
  (this->fields).inAir = 1;
  (this->fields).isFalling = 0;
  (this->fields).hasHit = 0;
  (this->fields).hasHitStatic = 0;
  (this->fields).hasNotified = 0;
  (this->fields).downwardForce = 0.0;
  (this->fields).totalDistTravelled = 0.0;
  (this->fields).coolOffStartTime = 0.0;
  (this->fields).lineOfFire.m_Origin.x = lineOfFire.m_Origin.x;
  (this->fields).lineOfFire.m_Origin.y = lineOfFire.m_Origin.y;
  (this->fields).lineOfFire.m_Origin.z = lineOfFire.m_Origin.z;
  (this->fields).lineOfFire.m_Direction.x = lineOfFire.m_Direction.x;
  (this->fields).lineOfFire.m_Direction.y = lineOfFire.m_Direction.y;
  (this->fields).lineOfFire.m_Direction.z = lineOfFire.m_Direction.z;
  (this->fields).rangeFall = rangeFall;
  (this->fields).fallRate = fallRate;
  (this->fields).rangeStraight = rangeStraight;
  (this->fields).speed = speed;
  if (pTVar3 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_5,pTVar3,(MethodInfo *)0x0);
    VStack_6.y = pVVar4->x;
    VStack_6.z = pVVar4->y;
    fVar7 = pVVar4->z;
    pVVar4 = BulletThrowingStar_FindTargetPos(&VStack_5,this,rangeStraight,(MethodInfo *)0x0);
    pTVar3 = (this->fields).tfrm;
    VStack_8.y = pVVar4->x;
    VStack_8.z = pVVar4->y;
    pCStack_9 = (CullingSubscriberBase *)pVVar4->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = (float)pCStack_9;
    a.x = VStack_8.y;
    a.y = VStack_8.z;
    b.z = fVar7;
    b.x = VStack_6.y;
    b.y = VStack_6.z;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       (&VStack_5,a,b,(MethodInfo *)0x0);
    uStack_1._0_4_ = pVVar4->x;
    uStack_1._4_4_ = pVVar4->y;
    fStack_2 = pVVar4->z;
    puVar10 = (ulonglong *)func_?();
    VStack_8._4_8_ = *puVar10;
    pCStack_9 = *(CullingSubscriberBase **)(puVar10 + 1);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    forward.z = (float)pCStack_9;
    forward.x = VStack_8.y;
    forward.y = VStack_8.z;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                       (&QStack_12,forward,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar3,*pQVar11,(MethodInfo *)0x0);
      pTVar3 = (this->fields).tfrm;
      if (pTVar3 != (Transform *)0x0) {
        value.z = fVar7;
        value.x = VStack_6.y;
        value.y = VStack_6.z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar3,value,(MethodInfo *)0x0);
        pPVar13 = (this->fields).pSystem;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pPVar13,(MethodInfo *)0x0);
        if (bVar14 != 0) {
          pPVar13 = (this->fields).pSystem;
          if (pPVar13 == (ParticleSystem *)0x0) goto code_?;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                    (pPVar13,(MethodInfo *)0x0);
        }
        pAVar15 = (this->fields).aSource;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pAVar15,(MethodInfo *)0x0);
        if (bVar14 != 0) {
          pAVar15 = (this->fields).aSource;
          if (pAVar15 == (AudioSource *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                    (pAVar15,1,(MethodInfo *)0x0);
          pAVar15 = (this->fields).aSource;
          if (pAVar15 == (AudioSource *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                    (pAVar15,(MethodInfo *)0x0);
        }
        pTVar3 = (this->fields).tfrm;
        if (pTVar3 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                             (&VStack_6,pTVar3,(MethodInfo *)0x0);
          fVar16 = pVVar4->y;
          fVar7 = pVVar4->z;
          (this->fields).direction.x = pVVar4->x;
          (this->fields).direction.y = fVar16;
          (this->fields).direction.z = fVar7;
          fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                             (20.0,30.0,(MethodInfo *)0x0);
          VStack_8.z = fVar7;
          CStack_17.r = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                                  (2.0,8.0,(MethodInfo *)0x0);
          VStack_5.z = 0.0;
          VStack_5.x = 0.0;
          VStack_5.y = 0.0;
          CStack_17.g = 0.0;
          pCStack_9 = (CullingSubscriberBase *)CStack_17.r;
          func_?();
          (this->fields).airRotation.x = VStack_5.x;
          (this->fields).airRotation.y = VStack_5.y;
          (this->fields).airRotation.z = VStack_5.z;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this,1,(MethodInfo *)0x0);
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (&VStack_8,pTVar3,(MethodInfo *)0x0);
            VStack_6.y = pVVar4->x;
            VStack_6.z = pVVar4->y;
            fVar7 = pVVar4->z;
            this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_00,(Object *)this,
                       MethodInfo__BulletThrowingStar__OnStateChanged_UnityEngine__CullingGroupEvent_
                       ,
                       MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
                      );
            this_01 = (CullingSubscriberBase *)func_?();
            position.z = fVar7;
            position.x = VStack_6.y;
            position.y = VStack_6.z;
            pCStack_9 = this_01;
            CullingSubscriberBase::CullingSubscriberBase__ctor_2
                      (this_01,1.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,
                       (MethodInfo *)0x0);
            (this->fields).cullingSubscriberBase = this_01;
            if (this_01 != (CullingSubscriberBase *)0x0) {
              LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                        ((LockCursorManager3DMode *)this_01,(Action_1_Boolean_ *)0x5,
                         (MethodInfo *)0x0);
              pMVar18 = (this->fields).meshRenderers;
              uVar19 = 0;
              VStack_6.z = (float)pMVar18;
              VStack_8._4_8_ = VStack_8._4_8_ & 0xffffffff;
              if (pMVar18 != (MeshRenderer__Array *)0x0) {
                pCStack_9 = (CullingSubscriberBase *)pMVar18->vector;
                while ((int)uVar19 < (int)pMVar18->max_length) {
                  if (pMVar18->max_length <= uVar19) goto code_?;
                  if (pCStack_9->klass == (CullingSubscriberBase__Class *)0x0)
                  goto code_?;
                  pMVar20 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                            Renderer_get_materials((Renderer *)pCStack_9->klass,(MethodInfo *)0x0);
                  iVar21 = 0;
                  while( true ) {
                    if (pMVar20 == (Material__Array *)0x0) goto code_?;
                    if ((int)pMVar20->max_length <= iVar21) break;
                    this_02 = (Material *)func_?();
                    if (this_02 == (Material *)0x0) goto code_?;
                    pCVar22 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                        (&CStack_23,this_02,(MethodInfo *)0x0);
                    QStack_12.x = pCVar22->r;
                    QStack_12.y = pCVar22->g;
                    QStack_12.z = pCVar22->b;
                    QStack_12.w = pCVar22->a;
                    pCVar22 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                        (&CStack_17,this_02,(MethodInfo *)0x0);
                    fStack_24 = pCVar22->r;
                    fStack_25 = pCVar22->g;
                    fStack_26 = pCVar22->b;
                    fStack_27 = pCVar22->a;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                              ((Color *)&stack0xffffff68,this_02,(MethodInfo *)0x0);
                    CStack_17.g = 0.0;
                    uStack_28 = 0;
                    uStack_29 = 0;
                    uStack_30 = 0;
                    fStack_31 = 0.0;
                    CStack_17.r = 1.0;
                    func_?();
                    value_00.g = (float)uStack_29;
                    value_00.r = (float)uStack_28;
                    value_00.b = (float)uStack_30;
                    value_00.a = fStack_31;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                              (this_02,value_00,(MethodInfo *)0x0);
                    iVar21 = iVar21 + 1;
                  }
                  uVar19 = (int)VStack_8.z + 1;
                  pCStack_9 = (CullingSubscriberBase *)&pCStack_9->monitor;
                  VStack_8.z = (float)uVar19;
                  pMVar18 = (MeshRenderer__Array *)VStack_6.z;
                }
                pTVar32 = (this->fields).trailRenderer;
                if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                  func_?();
                }
                bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                  ((Object_1 *)pTVar32,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar14 != 0) {
                  pTVar32 = (this->fields).trailRenderer;
                  if (pTVar32 == (TrailRenderer *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                            ((Renderer *)pTVar32,1,(MethodInfo *)0x0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_OnStateChanged
               (BulletThrowingStar *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
         Serialization::JsonProperty]::
         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                    (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    CullingApiWrapper::CullingApiWrapper_Visible
              (cullingGroupEvent,(int32_t)distanceBandIndex,(MethodInfo *)0x0);
    pMVar1 = (this->fields).meshRenderers;
    uVar2 = 0;
    if (pMVar1 != (MeshRenderer__Array *)0x0) {
      ppMVar3 = pMVar1->vector;
      for (; (int)uVar2 < (int)pMVar1->max_length; uVar2 = uVar2 + 1) {
        if (pMVar1->max_length <= uVar2) goto code_?;
        if (*ppMVar3 == (MeshRenderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppMVar3,unaff_DI,(MethodInfo *)0x0);
        ppMVar3 = ppMVar3 + 1;
      }
      pTVar4 = (this->fields).trailRenderer;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        pTVar4 = (this->fields).trailRenderer;
        if (pTVar4 == (TrailRenderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)pTVar4,unaff_DI,(MethodInfo *)0x0);
      }
      x = (this->fields).pSystem;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(this->fields).pSystem;
        if (this_01 ==
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                  (this_01,(MethodInfo *)0x0);
        func_?();
      }
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_Update
               (BulletThrowingStar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).inAir == 0) {
    pAVar1 = (this->fields).aSource;
    bVar2 = true;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)pAVar1,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pAVar1 = (this->fields).aSource;
      if (pAVar1 == (AudioSource *)0x0) goto code_?;
      bVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                         (pAVar1,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pAVar1 = (this->fields).aSource;
        if (pAVar1 == (AudioSource *)0x0) goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                  (pAVar1,(MethodInfo *)0x0);
      }
    }
    pPVar4 = (this->fields).pSystem;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)pPVar4,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pPVar4 = (this->fields).pSystem;
      if (pPVar4 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                (pPVar4,(MethodInfo *)0x0);
      pPVar4 = (this->fields).pSystem;
      if (pPVar4 == (ParticleSystem *)0x0) goto code_?;
      bVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_IsAlive_1(pPVar4,(MethodInfo *)0x0);
      bVar2 = bVar3 == 0;
    }
    if (((this->fields).hasHit != 0) && ((this->fields).hasNotified == 0)) {
      pBVar5 = (this->fields).onHit;
      (this->fields).hasNotified = 1;
      if (pBVar5 != (BulletThrowingStar_OnHitDelegate *)0x0) {
        uVar6 = (this->fields).lineOfFire.m_Direction.z;
        hit.interactionFlags._0_4_ =
             (int)((ulonglong)(this->fields).voxelHit.interactionFlags >> 0x20);
        hit._0_64_ = *(undefined1 (*) [64])&(this->fields).voxelHit.point.y;
        hit.interactionFlags._4_4_ = (this->fields).lineOfFire.m_Origin.x;
        lineOfFire.m_Direction.y = (float)uVar6;
        lineOfFire._0_16_ = *(undefined1 (*) [16])&(this->fields).lineOfFire.m_Origin.y;
        lineOfFire.m_Direction.z = 0.0;
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate_Invoke
                  (pBVar5,hit,lineOfFire,in_stack_7);
      }
      pBVar5 = (this->fields).onHitLocal;
      if (pBVar5 != (BulletThrowingStar_OnHitDelegate *)0x0) {
        uVar8 = (this->fields).lineOfFire.m_Direction.z;
        hit_00.interactionFlags._0_4_ =
             (int)((ulonglong)(this->fields).voxelHit.interactionFlags >> 0x20);
        hit_00._0_64_ = *(undefined1 (*) [64])&(this->fields).voxelHit.point.y;
        hit_00.interactionFlags._4_4_ = (this->fields).lineOfFire.m_Origin.x;
        lineOfFire_00.m_Direction.y = (float)uVar8;
        lineOfFire_00._0_16_ = *(undefined1 (*) [16])&(this->fields).lineOfFire.m_Origin.y;
        lineOfFire_00.m_Direction.z = 0.0;
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate_Invoke
                  (pBVar5,hit_00,lineOfFire_00,in_stack_7);
      }
      if ((this->fields).hasHitStatic == 0) {
        (this->fields).hasHitStatic = 1;
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).coolOffStartTime = fVar9;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar10 == (MVWorldObjectClientManager *)0x0) goto code_?;
        id = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                       (pMVar10,(this->fields).voxelHit.woId,
                        int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                       );
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar10 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar11 = (MVWorldObjectClient *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar10,id,(MethodInfo *)0x0);
        if (pMVar11 != (MVWorldObjectClient *)0x0) {
          x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                        (pMVar11,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                             ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
          (this->fields).hasHitStatic = bVar3;
        }
      }
    }
    fVar9 = (this->fields).coolOffDuration + (this->fields).coolOffStartTime;
    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((fVar9 <= fVar12) || ((this->fields).hasHitStatic == 0)) {
      if (!bVar2) {
        return;
      }
      pCVar13 = (this->fields).cullingSubscriberBase;
      if (pCVar13 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar13,(MethodInfo *)0x0);
        (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?();
        }
        pPVar14 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if ((pPVar14 != (PrefabPool *)0x0) &&
           (this_02 = (EnumPoolManager *)
                      mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pPVar14
                                 ,(MethodInfo *)0x0), this_02 != (EnumPoolManager *)0x0)) {
          EnumPoolManager::EnumPoolManager_Return
                    (this_02,(MonoBehaviour *)this,(this->fields).initiatedPoolEnum,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pMVar15 = (this->fields).meshRenderers;
      fVar9 = 0.0;
      if (pMVar15 != (MeshRenderer__Array *)0x0) {
        while( true ) {
          if ((int)pMVar15->max_length <= (int)fVar9) {
            return;
          }
          this_00 = (Renderer *)func_?();
          if (this_00 == (Renderer *)0x0) break;
          pMVar16 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                              (this_00,(MethodInfo *)0x0);
          iVar17 = 0;
          while( true ) {
            if (pMVar16 == (Material__Array *)0x0) goto code_?;
            if ((int)pMVar16->max_length <= iVar17) break;
            this_01 = (Material *)func_?();
            if (this_01 == (Material *)0x0) goto code_?;
            pCVar18 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                ((Color *)&stack0xffffff90,this_01,(MethodInfo *)0x0);
            pMVar15 = (MeshRenderer__Array *)pCVar18->r;
            pCVar18 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                ((Color *)&stack0xffffff68,this_01,(MethodInfo *)0x0);
            fVar9 = pCVar18->g;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                      ((Color *)&stack0xffffff80,this_01,(MethodInfo *)0x0);
            uVar19 = 0;
            fVar12 = 0.0;
            uVar20._0_4_ = 0.0;
            uVar20._4_4_ = 0.0;
            func_?();
            value_00.g = fVar12;
            value_00.r = (float)uVar19;
            value_00.b = (float)uVar20;
            value_00.a = uVar20._4_4_;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                      ((Material *)0x0,value_00,(MethodInfo *)0x0);
            iVar17 = iVar17 + 1;
          }
          fVar9 = (float)((int)fVar9 + 1);
        }
      }
    }
    goto code_?;
  }
  fVar9 = (this->fields).airRotation.x;
  fVar12 = (this->fields).airRotation.y;
  uVar20._0_4_ = (this->fields).airRotation.z;
  pTVar21 = (this->fields).tfrm;
  uVar20._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.y = fVar12;
  a.x = fVar9;
  a.z = (float)uVar20;
  pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&stack0xffffffdc,a,uVar20._4_4_,(MethodInfo *)0x0);
  pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&stack0xffffffdc,*pVVar22,(this->fields).speed,(MethodInfo *)0x0);
  if (pTVar21 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
            (pTVar21,*pVVar22,(MethodInfo *)0x0);
  fVar9 = (this->fields).totalDistTravelled;
  pfVar23 = &(this->fields).rangeStraight;
  if ((*pfVar23 <= fVar9 && fVar9 != *pfVar23) && ((this->fields).isFalling == 0)) {
    (this->fields).isFalling = 1;
  }
  uVar20._0_4_ = (this->fields).direction.x;
  uVar20._4_4_ = (this->fields).direction.y;
  fVar9 = (this->fields).speed;
  fVar12 = (this->fields).direction.z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a_00.z = fVar12;
  a_00.x = (float)(int)uVar20;
  a_00.y = (float)(int)((ulonglong)uVar20 >> 0x20);
  pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&stack0xffffffdc,a_00,fVar9,(MethodInfo *)0x0);
  fVar24 = pVVar22->x;
  fVar25 = pVVar22->y;
  fVar9 = pVVar22->z;
  fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  a_02.y = fVar25;
  a_02.x = fVar24;
  a_02.z = fVar9;
  pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&stack0xffffffdc,a_02,fVar12,(MethodInfo *)0x0);
  uVar19 = pVVar22->x;
  fVar26 = pVVar22->y;
  fVar9 = pVVar22->z;
  if ((this->fields).isFalling != 0) {
    fVar12 = (this->fields).downwardForce;
    uVar20._0_4_ = (this->fields).fallRate;
    uVar20._4_4_ = (this->fields).speed;
    fVar24 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar25 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar12 = fVar25 * (float)((uint)(float)uVar20 ^ _UNK_?) * uVar20._4_4_ * uVar20._4_4_ *
                      fVar24 + fVar12;
    fVar26 = fVar26 + fVar12;
    (this->fields).downwardForce = fVar12;
  }
  pTVar21 = (this->fields).tfrm;
  if (pTVar21 == (Transform *)0x0) goto code_?;
  pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                      ((Vector3 *)&stack0xffffffdc,pTVar21,(MethodInfo *)0x0);
  uVar27._0_4_ = pVVar22->x;
  uVar27._4_4_ = pVVar22->y;
  fVar12 = pVVar22->z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a_01.z = fVar12;
  a_01.x = (float)(int)uVar27;
  a_01.y = (float)(int)((ulonglong)uVar27 >> 0x20);
  b.y = fVar26;
  b.x = (float)uVar19;
  b.z = fVar9;
  pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                      ((Vector3 *)&stack0xffffffdc,a_01,b,(MethodInfo *)0x0);
  fVar28 = pVVar22->x;
  puVar29 = (undefined *)pVVar22->y;
  fVar9 = pVVar22->z;
  pTVar21 = (this->fields).tfrm;
  if (pTVar21 == (Transform *)0x0) goto code_?;
  puVar30 = &UNK_?;
  pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                      ((Vector3 *)&stack0xffffffdc,pTVar21,(MethodInfo *)0x0);
  a_03.y = (float)puVar30;
  a_03.x = fVar28;
  a_03.z = fVar9;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            ((Vector3 *)&stack0xffffffdc,a_03,*pVVar22,(MethodInfo *)0x0);
  iVar17 = func_?();
  fVar12 = *(float *)(iVar17 + 8);
  pTVar21 = (this->fields).tfrm;
  if (pTVar21 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
            ((Vector3 *)&stack0xffffffdc,pTVar21,(MethodInfo *)0x0);
  fVar31 = (float10)func_?();
  uVar20._4_4_ = 0.0;
  fVar24 = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  uVar27._0_4_ = 0.0;
  uVar27._4_4_ = 0.0;
  uVar20._0_4_ = (float)fVar31;
  puVar30 = &stack0xffffff78;
  func_?();
  ignoreWoIds = (this->fields).ignoreWoIDs;
  puVar32 = puVar29;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
    puVar32 = puVar29;
  }
  pDVar33 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                         ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0xfffffffb,(MethodInfo *)0x0);
  pOVar34 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                      (pDVar33,(MethodInfo *)0x0);
  uVar35 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Logic,(MethodInfo *)0x0);
  pDVar33 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                         ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)((uint)pOVar34 & ~(1 << (uVar35 & 0x1f))),(MethodInfo *)0x0);
  pOVar34 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                      (pDVar33,(MethodInfo *)0x0);
  voxelHit = &(this->fields).voxelHit;
  uVar36 = 0;
  ray.m_Origin.y = fVar24;
  ray.m_Origin.x = uVar20._4_4_;
  ray.m_Origin.z = fVar25;
  ray.m_Direction.x = fVar26;
  ray.m_Direction.y = (float)uVar27;
  ray.m_Direction.z = uVar27._4_4_;
  bVar3 = CollisionDetection::CollisionDetection_MVHit_1
                     (ray,voxelHit,(float)uVar20,ignoreWoIds,(int32_t)pOVar34,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar10 == (MVWorldObjectClientManager *)0x0) goto code_?;
    puVar32 = &UNK_?;
    pPVar14 = (PrefabPool *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar10,(this->fields).voxelHit.woId,(MethodInfo *)0x0);
    if (pPVar14 == (PrefabPool *)0x0) goto code_?;
    puVar30 = (undefined *)0x0;
    pMVar37 = PrefabPool::PrefabPool_get_MVTextMsgPrefab(pPVar14,(MethodInfo *)0x0);
    if (pMVar37 != (MVTextMsgObject *)0x0) {
      puVar30 = &UNK_?;
      pMVar11 = MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
                          ((MVWorldObjectClient *)pPVar14,(MethodInfo *)0x0);
      if (pMVar11 == (MVWorldObjectClient *)0x0) goto code_?;
      pIVar38 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          ((Collection_1_VoxelHit_ *)pMVar11,(MethodInfo *)0x0);
      (this->fields).voxelHit.woId = (int32_t)pIVar38;
    }
    uVar36 = (voxelHit->point).x;
    puVar32 = (undefined *)(voxelHit->point).y;
    fVar9 = (this->fields).voxelHit.point.z;
    (this->fields).inAir = 0;
    (this->fields).hasHit = 1;
  }
code_?:
  pTVar21 = (this->fields).tfrm;
  if (pTVar21 != (Transform *)0x0) {
    puVar29 = &UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
              ((Vector3 *)&stack0xffffffdc,pTVar21,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a_04.y = (float)puVar29;
    a_04.x = (float)puVar30;
    a_04.z = fVar12;
    pVVar39 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffdc,a_04,10.0,(MethodInfo *)0x0);
    pVVar22 = (Vector3 *)&stack0xffffffcc;
    a_05.y = (float)puVar32;
    a_05.x = (float)uVar36;
    a_05.z = fVar9;
    uVar19 = uVar36;
    fVar25 = fVar9;
    pVVar39 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (pVVar22,a_05,*pVVar39,(MethodInfo *)0x0);
    fVar40 = pVVar39->x;
    fVar41 = pVVar39->y;
    method_00 = (MethodInfo *)pVVar39->z;
    pCVar18 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_red
                        ((Color *)&stack0xffffff80,method_00);
    fVar12 = pCVar18->r;
    uVar20._0_4_ = pCVar18->g;
    uVar20._4_4_ = pCVar18->b;
    fVar24 = pCVar18->a;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    end.y = fVar41;
    end.x = fVar40;
    start.y = (float)uVar19;
    start.x = (float)pVVar22;
    start.z = fVar25;
    end.z = (float)method_00;
    color.g = (float)uVar20;
    color.r = fVar12;
    color.b = uVar20._4_4_;
    color.a = fVar24;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_1
              (start,end,color,(MethodInfo *)0x0);
    fVar12 = (this->fields).totalDistTravelled;
    fVar31 = (float10)func_?();
    pTVar21 = (this->fields).tfrm;
    (this->fields).totalDistTravelled = (float)(fVar31 + (float10)fVar12);
    if (pTVar21 != (Transform *)0x0) {
      value.y = (float)puVar32;
      value.x = (float)uVar36;
      value.z = fVar9;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar21,value,(MethodInfo *)0x0);
      if ((this->fields).rangeFall + (this->fields).rangeStraight <
          (this->fields).totalDistTravelled) {
        (this->fields).inAir = 0;
      }
      pCVar13 = (this->fields).cullingSubscriberBase;
      pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if ((pTVar21 != (Transform *)0x0) &&
         (pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffdc,pTVar21,(MethodInfo *)0x0),
         pCVar13 != (CullingSubscriberBase *)0x0)) {
        CullingSubscriberBase::CullingSubscriberBase_set_Position
                  (pCVar13,*pVVar22,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar42 = (code *)swi(3);
  (*pcVar42)();
  return;
}


/* BulletThrowingStar() */

void Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar__ctor
               (BulletThrowingStar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).ignoreWoIDs = (HashSet_1_System_Int32_ *)this_00;
  func_?(&fStack_1,0,0x48);
  (this->fields).voxelHit.point.x = fStack_1;
  (this->fields).voxelHit.point.y = fStack_2;
  (this->fields).voxelHit.point.z = fStack_3;
  (this->fields).voxelHit.normal.x = fStack_4;
  (this->fields).coolOffDuration = 3.5;
  (this->fields).voxelHit.normal.y = fStack_5;
  (this->fields).voxelHit.normal.z = fStack_6;
  (this->fields).voxelHit.cubePos.x = (undefined2)uStack_7;
  (this->fields).voxelHit.cubePos.y = uStack_7._2_2_;
  *(undefined4 *)&(this->fields).voxelHit.cubePos.z = uStack_8;
  (this->fields).voxelHit.face = iStack_9;
  *(undefined4 *)&(this->fields).voxelHit.isCubeHit = uStack_10;
  (this->fields).voxelHit.woId = iStack_11;
  (this->fields).voxelHit.cube = pCStack_12;
  (this->fields).voxelHit.distance = fStack_13;
  (this->fields).voxelHit.collider = pCStack_14;
  (this->fields).voxelHit.transform = pTStack_15;
  *(undefined4 *)&(this->fields).voxelHit.field_0x3c = uStack_16;
  (this->fields).voxelHit.interactionFlags = iStack_17;
  (this->fields).airRotation.x = 0.0;
  (this->fields).airRotation.y = 0.0;
  (this->fields).airRotation.z = 0.0;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

