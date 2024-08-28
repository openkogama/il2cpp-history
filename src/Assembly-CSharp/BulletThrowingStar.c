
/* Void Awake() */

void Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_Awake
               (BulletThrowingStar *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  ppTVar2 = &(this->fields).tfrm;
  *ppTVar2 = pTVar1;
  func_?(ppTVar2,pTVar1);
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  return;
}


/* BulletThrowingStar CreateBullet(PoolEnums, Vector3) */

BulletThrowingStar *
Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_CreateBullet
          (PoolEnums__Enum poolEnum,Vector3 pos,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_EBP,unaff_ESI);
  if (cRam_? == '\0') {
    func_?(&
                    BulletThrowingStar_MethodInfo__EnumPoolManager__Instantiate<BulletThrowingStar>_PoolEnums_
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if ((pPVar2 != (PrefabPool *)0x0) &&
     (this = (pPVar2->fields).enumPoolManager, this != (EnumPoolManager *)0x0)) {
    pBVar3 = (BulletThrowingStar *)
             EnumPoolManager::EnumPoolManager_Instantiate
                       (this,poolEnum,
                        BulletThrowingStar_MethodInfo__EnumPoolManager__Instantiate<BulletThrowingStar>_PoolEnums_
                       );
    if (pBVar3 != (BulletThrowingStar *)0x0) {
      uVar1 = ZEXT48(pBVar3);
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pBVar3,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        uVar1 = pos._0_8_;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_01,pos,(MethodInfo *)0x0);
        this_00 = (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                  (pBVar3->fields).ignoreWoIDs;
        if (this_00 != (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
                    (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
          (pBVar3->fields).isFired = 0;
          (pBVar3->fields).fallRate = 0.0;
          (pBVar3->fields).onHitLocal = (BulletThrowingStar_OnHitDelegate *)0x0;
          func_?();
          (pBVar3->fields).onHit = (BulletThrowingStar_OnHitDelegate *)0x0;
          func_?();
          (pBVar3->fields).initiatedPoolEnum = poolEnum;
          return pBVar3;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pBVar3 = (BulletThrowingStar *)(*pcVar4)(uVar1);
  return pBVar3;
}


/* Boolean DoBulletCollision(Ray, VoxelHit ByRef, Single, HashSet`1[System.Int32]) */

bool Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_DoBulletCollision
               (Ray ray,VoxelHit *voxelHit,float distance,HashSet_1_System_Int32_ *ignoreWoIDs,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  p_Var3 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_AsRef_1((Void *)0xfffffffb,(MethodInfo *)0x0);
  p_Var3 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_AsRef_1((Void *)p_Var3,(MethodInfo *)0x0);
  uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  p_Var3 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_AsRef_1((Void *)((uint)p_Var3 & ~(1 << (uVar1 & 0x1f))),(MethodInfo *)0x0);
  p_Var3 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_AsRef_1((Void *)p_Var3,(MethodInfo *)0x0);
  VVar2 = ray.m_Origin;
  ray.m_Origin.x = (float)ignoreWoIDs;
  fVar3 = distance;
  ray.m_Origin.y = (float)p_Var3;
  ray_00 = (Ray)CONCAT1212(ray_00.m_Origin,VVar2);
  bVar4 = CollisionDetection::CollisionDetection_MVHit_1
                    (ray_00,voxelHit,distance,ignoreWoIDs,(int32_t)p_Var3,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    return 0;
  }
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this != (MVWorldObjectClientManager *)0x0) &&
     (pMVar5 = (MVWorldObjectClient *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this,voxelHit->woId,(MethodInfo *)0x0),
     pMVar5 != (MVWorldObjectClient *)0x0)) {
    if ((pMVar5->fields)._PlayInteractionType_k__BackingField != 0) {
      pMVar5 = MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
                         (pMVar5,(MethodInfo *)0x0);
      if (pMVar5 == (MVWorldObjectClient *)0x0) {
        return 0;
      }
      voxelHit->woId = (pMVar5->fields)._.id;
    }
    return 1;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Boolean DoCollisionCheck(Vector3, Single, Vector3, VoxelHit ByRef) */

bool Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_DoCollisionCheck
               (BulletThrowingStar *this,Vector3 pos,float dist,Vector3 dir,VoxelHit *voxelHit,
               MethodInfo *method)

{
  fVar1 = pos.x;
  fVar2 = pos.y;
  puVar3 = (undefined8 *)func_?(&dir,&stack0xfffffff0,0);
  uVar4 = (undefined4)*puVar3;
  ignoreWoIds = (this->fields).ignoreWoIDs;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  p_Var4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_AsRef_1((Void *)0xfffffffb,(MethodInfo *)0x0);
  p_Var4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_AsRef_1((Void *)p_Var4,(MethodInfo *)0x0);
  uVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  p_Var4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_AsRef_1((Void *)((uint)p_Var4 & ~(1 << (uVar5 & 0x1f))),(MethodInfo *)0x0);
  p_Var4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_AsRef_1((Void *)p_Var4,(MethodInfo *)0x0);
  ray.m_Origin.y = fVar2;
  ray.m_Origin.x = fVar1;
  ray.m_Origin.z = pos.z;
  ray.m_Direction.x = (float)uVar4;
  ray.m_Direction.y = dist;
  ray.m_Direction.z = (float)ignoreWoIds;
  bVar6 = CollisionDetection::CollisionDetection_MVHit_1
                    (ray,voxelHit,dist,ignoreWoIds,(int32_t)p_Var4,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    return 0;
  }
  dir.z = 0.0;
  dir.y = (float)&UNK_?;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    dir.z = (float)voxelHit->woId;
    dir.x = (float)&UNK_?;
    dir.y = (float)this_00;
    pMVar7 = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(int32_t)dir.z,(MethodInfo *)0x0);
    if (pMVar7 != (MVWorldObjectClient *)0x0) {
      if ((pMVar7->fields)._PlayInteractionType_k__BackingField != 0) {
        pMVar7 = MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
                           (pMVar7,(MethodInfo *)0x0);
        if (pMVar7 == (MVWorldObjectClient *)0x0) {
          return 0;
        }
        voxelHit->woId = (pMVar7->fields)._.id;
      }
      return 1;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar6 = (*pcVar8)();
  return bVar6;
}


/* Vector3 FindTargetPos(Single) */

Vector3 * Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_FindTargetPos
                    (Vector3 *__return_storage_ptr__,BulletThrowingStar *this,float maxRange,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff8c,0,0x48);
  p_Var12 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_AsRef_1((Void *)0xfffffffb,(MethodInfo *)0x0);
  p_Var12 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_AsRef_1((Void *)p_Var12,(MethodInfo *)0x0);
  uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Logic,(MethodInfo *)0x0);
  p_Var12 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_AsRef_1
                      ((Void *)((uint)p_Var12 & ~(1 << (uVar1 & 0x1f))),(MethodInfo *)0x0);
  fVar2 = (this->fields).lineOfFire.m_Origin.x;
  fVar3 = (this->fields).lineOfFire.m_Origin.y;
  fVar4 = (this->fields).lineOfFire.m_Origin.z;
  fVar5 = (this->fields).lineOfFire.m_Direction.x;
  this_00 = &(this->fields).lineOfFire;
  ignoreWoIds = (this->fields).ignoreWoIDs;
  uVar6 = (this->fields).lineOfFire.m_Direction.y;
  uVar7 = (this->fields).lineOfFire.m_Direction.z;
  fStack_8 = (float)uVar6;
  fStack_9 = (float)uVar7;
  p_Var12 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_AsRef_1((Void *)p_Var12,(MethodInfo *)0x0);
  voxelHit = (VoxelHit *)&stack0xffffff8c;
  uVar10._4_4_ = fStack_9;
  uVar10._0_4_ = fStack_8;
  ray.m_Origin.y = fVar3;
  ray.m_Origin.x = fVar2;
  ray.m_Origin.z = fVar4;
  ray.m_Direction.x = fVar5;
  ray.m_Direction.y = fStack_8;
  ray.m_Direction.z = fStack_9;
  bVar11 = CollisionDetection::CollisionDetection_MVHit_1
                     (ray,voxelHit,maxRange,ignoreWoIds,(int32_t)p_Var12,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_01,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_13,this_02,(MethodInfo *)0x0);
        uVar14 = pVVar12->x;
        uVar15 = pVVar12->y;
        fVar2 = pVVar12->z;
        uVar16 = (this->fields).lineOfFire.m_Direction.x;
        uVar17 = (this->fields).lineOfFire.m_Direction.y;
        fVar3 = (this->fields).lineOfFire.m_Direction.z;
        __return_storage_ptr__->x = (float)uVar14 + (float)uVar16 * maxRange;
        __return_storage_ptr__->y = (float)uVar15 + (float)uVar17 * maxRange;
        __return_storage_ptr__->z = fVar2 + fVar3 * maxRange;
        return __return_storage_ptr__;
      }
    }
    func_?();
    pcVar18 = (code *)swi(3);
    pVVar12 = (Vector3 *)(*pcVar18)();
    return pVVar12;
  }
  uVar19 = (this_00->m_Origin).x;
  uVar20 = (this_00->m_Origin).y;
  fVar2 = (this->fields).lineOfFire.m_Origin.z;
  VStack_13.y = (float)uVar19;
  VStack_13.z = (float)uVar20;
  pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                      ((Vector3 *)&stack0xffffffd8,this_00,in_stack_21,(MethodInfo *)0x0);
  uVar22._0_4_ = pVVar12->x;
  uVar22._4_4_ = pVVar12->y;
  fVar3 = pVVar12->z;
  fStack_8 = (float)(undefined4)uVar22;
  fStack_9 = (float)uVar22._4_4_;
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
    uVar22 = CONCAT44(fStack_9,fStack_8);
  }
  start.y = VStack_13.z;
  start.x = VStack_13.y;
  start.z = fVar2;
  end.z = fVar3;
  end.x = (float)(int)uVar22;
  end.y = (float)(int)((ulonglong)uVar22 >> 0x20);
  color.g = (float)_UNK_?;
  color.r = (float)_UNK_?;
  color.b = (float)_UNK_?;
  color.a = _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine
            (start,end,color,10.0,(MethodInfo *)0x0);
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
    func_?(&MethodInfo__BulletThrowingStar__OnStateChanged_UnityEngine__CullingGroupEvent_)
    ;
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    cRam_? = '\x01';
  }
  if ((this->fields).isFired != 0) {
    return;
  }
  ppHVar1 = &(this->fields).ignoreWoIDs;
  (this->fields).lineOfFire.m_Origin.x = lineOfFire.m_Origin.x;
  (this->fields).lineOfFire.m_Origin.y = lineOfFire.m_Origin.y;
  (this->fields).lineOfFire.m_Origin.z = lineOfFire.m_Origin.z;
  (this->fields).lineOfFire.m_Direction.x = lineOfFire.m_Direction.x;
  (this->fields).lineOfFire.m_Direction.y = lineOfFire.m_Direction.y;
  (this->fields).lineOfFire.m_Direction.z = lineOfFire.m_Direction.z;
  (this->fields).fallRate = fallRate;
  *ppHVar1 = ignoreWoIDs;
  func_?(ppHVar1,ignoreWoIDs);
  pTVar2 = (this->fields).tfrm;
  (this->fields).rangeFall = rangeFall;
  (this->fields).fallRate = fallRate;
  (this->fields).rangeStraight = rangeStraight;
  (this->fields).isFired = 1;
  (this->fields).speed = speed;
  (this->fields).inAir = 1;
  (this->fields).isFalling = 0;
  (this->fields).hasHit = 0;
  (this->fields).hasHitStatic = 0;
  (this->fields).hasNotified = 0;
  (this->fields).downwardForce = 0.0;
  (this->fields).totalDistTravelled = 0.0;
  (this->fields).coolOffStartTime = 0.0;
  if (pTVar2 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
    uVar4._0_4_ = pVVar3->x;
    uVar4._4_4_ = pVVar3->y;
    fVar5 = pVVar3->z;
    BulletThrowingStar_FindTargetPos
              ((Vector3 *)&stack0xffffffb8,this,rangeStraight,(MethodInfo *)0x0);
    pTVar2 = (this->fields).tfrm;
    pVVar3 = (Vector3 *)func_?(&stack0xffffffb8,&stack0xffffffc8,0);
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0xffffffb4,*pVVar3,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar2,*pQVar6,(MethodInfo *)0x0);
      pTVar2 = (this->fields).tfrm;
      if (pTVar2 != (Transform *)0x0) {
        value.z = fVar5;
        value.x = (float)(int)uVar4;
        value.y = (float)(int)((ulonglong)uVar4 >> 0x20);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar2,value,(MethodInfo *)0x0);
        pPVar7 = (this->fields).pSystem;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pPVar7,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          pPVar7 = (this->fields).pSystem;
          if (pPVar7 == (ParticleSystem *)0x0) goto code_?;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                    (pPVar7,(MethodInfo *)0x0);
        }
        pAVar9 = (this->fields).aSource;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pAVar9,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          pAVar9 = (this->fields).aSource;
          if (pAVar9 == (AudioSource *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                    (pAVar9,1,(MethodInfo *)0x0);
          pAVar9 = (this->fields).aSource;
          if (pAVar9 == (AudioSource *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                    (pAVar9,(MethodInfo *)0x0);
        }
        pTVar2 = (this->fields).tfrm;
        if (pTVar2 != (Transform *)0x0) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                             ((Vector3 *)&stack0xffffffb8,pTVar2,(MethodInfo *)0x0);
          fVar10 = pVVar3->y;
          fVar5 = pVVar3->z;
          (this->fields).direction.x = pVVar3->x;
          (this->fields).direction.y = fVar10;
          (this->fields).direction.z = fVar5;
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                             (20.0,30.0,(MethodInfo *)0x0);
          uVar11 = (ulonglong)(uint)fVar5;
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                             (2.0,8.0,(MethodInfo *)0x0);
          (this->fields).airRotation.x = (float)(int)uVar11;
          (this->fields).airRotation.y = (float)(int)(uVar11 >> 0x20);
          (this->fields).airRotation.z = fVar5;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this,1,(MethodInfo *)0x0);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffb8,pTVar2,(MethodInfo *)0x0);
            uVar12._0_4_ = pVVar3->x;
            uVar12._4_4_ = pVVar3->y;
            fVar5 = pVVar3->z;
            this_01 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
            UnityAction_1_UnityEngine_Vector2___ctor
                      (this_01,(Object *)this,
                       MethodInfo__BulletThrowingStar__OnStateChanged_UnityEngine__CullingGroupEvent_
                       ,(MethodInfo *)0x0);
            pCVar13 = (CullingSubscriberBase *)func_?();
            position.z = fVar5;
            position.x = (float)(int)uVar12;
            position.y = (float)(int)((ulonglong)uVar12 >> 0x20);
            CullingSubscriberBase::CullingSubscriberBase__ctor_2
                      (pCVar13,1.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
                       (MethodInfo *)0x0);
            ppCVar14 = &(this->fields).cullingSubscriberBase;
            *ppCVar14 = pCVar13;
            func_?();
            pCVar13 = *ppCVar14;
            if (pCVar13 != (CullingSubscriberBase *)0x0) {
              (pCVar13->fields)._DistanceBandIndex_k__BackingField = 5;
              pMVar15 = (this->fields).meshRenderers;
              lVar16 = ZEXT48(pMVar15) << 0x20;
              uStack_17 = 0;
              if (pMVar15 != (MeshRenderer__Array *)0x0) {
                ppMVar18 = pMVar15->vector;
                for (; (int)uStack_17 < (int)pMVar15->max_length; uStack_17 = uStack_17 + 1) {
                  if (pMVar15->max_length <= uStack_17) goto code_?;
                  if (*ppMVar18 == (MeshRenderer *)0x0) goto code_?;
                  pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                            Renderer_get_materials((Renderer *)*ppMVar18,(MethodInfo *)0x0);
                  uVar20 = 0;
                  ppMVar21 = pMVar19->vector;
                  while( true ) {
                    if (pMVar19 == (Material__Array *)0x0) goto code_?;
                    if ((int)pMVar19->max_length <= (int)uVar20) break;
                    if (pMVar19->max_length <= uVar20) goto code_?;
                    this_00 = *ppMVar21;
                    if (this_00 == (Material *)0x0) goto code_?;
                    pCVar22 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                        ((Color *)&stack0xffffffc4,this_00,(MethodInfo *)0x0);
                    fVar5 = pCVar22->r;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                              ((Color *)&stack0xffffffd4,this_00,(MethodInfo *)0x0);
                    pCVar22 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                        ((Color *)&stack0xffffffa4,this_00,(MethodInfo *)0x0);
                    value_00.g = 0.0;
                    value_00.r = fVar5;
                    value_00.b = pCVar22->b;
                    value_00.a = 1.0;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                              (this_00,value_00,(MethodInfo *)0x0);
                    uVar20 = uVar20 + 1;
                    ppMVar21 = ppMVar21 + 1;
                  }
                  pMVar15 = (MeshRenderer__Array *)((ulonglong)lVar16 >> 0x20);
                  ppMVar18 = ppMVar18 + 1;
                }
                pTVar23 = (this->fields).trailRenderer;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                  ((Object_1 *)pTVar23,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar8 != 0) {
                  pTVar23 = (this->fields).trailRenderer;
                  if (pTVar23 == (TrailRenderer *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                            ((Renderer *)pTVar23,1,(MethodInfo *)0x0);
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
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_OnStateChanged
               (BulletThrowingStar *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  PStack_1.m_ParticleSystem = (ParticleSystem *)0x0;
  pCVar2 = (this->fields).cullingSubscriberBase;
  if (pCVar2 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar2->fields)._DistanceBandIndex_k__BackingField;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    value = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
    pMVar3 = (this->fields).meshRenderers;
    uVar4 = 0;
    if (pMVar3 != (MeshRenderer__Array *)0x0) {
      ppMVar5 = pMVar3->vector;
      for (; (int)uVar4 < (int)pMVar3->max_length; uVar4 = uVar4 + 1) {
        if (pMVar3->max_length <= uVar4) goto code_?;
        if (*ppMVar5 == (MeshRenderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppMVar5,value,(MethodInfo *)0x0);
        ppMVar5 = ppMVar5 + 1;
      }
      pTVar6 = (this->fields).trailRenderer;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        pTVar6 = (this->fields).trailRenderer;
        if (pTVar6 == (TrailRenderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)pTVar6,value,(MethodInfo *)0x0);
      }
      pPVar8 = (this->fields).pSystem;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pPVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        pPVar8 = (this->fields).pSystem;
        if (pPVar8 == (ParticleSystem *)0x0) goto code_?;
        PStack_1.m_ParticleSystem =
             (ParticleSystem *)
             UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
             ParticleSystem_get_collision(pPVar8,(MethodInfo *)0x0);
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
        ParticleSystem_EmissionModule_set_enabled_Injected(&PStack_1,value,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_Update
               (BulletThrowingStar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).inAir == 0) {
    pAVar1 = (this->fields).aSource;
    ppMStack_2 = (Material **)CONCAT31(ppMStack_2._1_3_,1);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                  (pAVar1,(MethodInfo *)0x0);
      }
    }
    pPVar4 = (this->fields).pSystem;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)pPVar4,(MethodInfo *)0x0);
    if (bVar3 == 0) {
code_?:
      if (((this->fields).hasHit != 0) && ((this->fields).hasNotified == 0)) {
        pBVar5 = (this->fields).onHit;
        (this->fields).hasNotified = 1;
        if (pBVar5 != (BulletThrowingStar_OnHitDelegate *)0x0) {
          uVar6 = (this->fields).lineOfFire.m_Direction.y;
          uVar7 = (this->fields).lineOfFire.m_Direction.z;
          uVar8._0_2_ = (this->fields).voxelHit.cubePos.x;
          uVar8._2_2_ = (this->fields).voxelHit.cubePos.y;
          iVar9 = (this->fields).voxelHit.interactionFlags;
          (*(pBVar5->fields)._._.invoke_impl)
                    ((pBVar5->fields)._._.method_code,(this->fields).voxelHit.point.x,
                     (this->fields).voxelHit.point.y,(this->fields).voxelHit.point.z,
                     (this->fields).voxelHit.normal.x,(this->fields).voxelHit.normal.y,
                     (this->fields).voxelHit.normal.z,uVar8,
                     *(undefined4 *)&(this->fields).voxelHit.cubePos.z,(this->fields).voxelHit.face,
                     *(undefined4 *)&(this->fields).voxelHit.isCubeHit,(this->fields).voxelHit.woId,
                     (this->fields).voxelHit.cube,(this->fields).voxelHit.distance,
                     (this->fields).voxelHit.collider,(this->fields).voxelHit.transform,
                     *(undefined4 *)&(this->fields).voxelHit.field_0x3c,(int)iVar9,
                     (int)((ulonglong)iVar9 >> 0x20),(this->fields).lineOfFire.m_Origin.x,
                     (this->fields).lineOfFire.m_Origin.y,(this->fields).lineOfFire.m_Origin.z,
                     (this->fields).lineOfFire.m_Direction.x,uVar6,uVar7,
                     (pBVar5->fields)._._.method);
        }
        pBVar5 = (this->fields).onHitLocal;
        if (pBVar5 != (BulletThrowingStar_OnHitDelegate *)0x0) {
          uVar10 = (this->fields).lineOfFire.m_Direction.y;
          uVar11 = (this->fields).lineOfFire.m_Direction.z;
          uVar12._0_2_ = (this->fields).voxelHit.cubePos.x;
          uVar12._2_2_ = (this->fields).voxelHit.cubePos.y;
          iVar9 = (this->fields).voxelHit.interactionFlags;
          (*(pBVar5->fields)._._.invoke_impl)
                    ((pBVar5->fields)._._.method_code,(this->fields).voxelHit.point.x,
                     (this->fields).voxelHit.point.y,(this->fields).voxelHit.point.z,
                     (this->fields).voxelHit.normal.x,(this->fields).voxelHit.normal.y,
                     (this->fields).voxelHit.normal.z,uVar12,
                     *(undefined4 *)&(this->fields).voxelHit.cubePos.z,(this->fields).voxelHit.face,
                     *(undefined4 *)&(this->fields).voxelHit.isCubeHit,(this->fields).voxelHit.woId,
                     (this->fields).voxelHit.cube,(this->fields).voxelHit.distance,
                     (this->fields).voxelHit.collider,(this->fields).voxelHit.transform,
                     *(undefined4 *)&(this->fields).voxelHit.field_0x3c,(int)iVar9,
                     (int)((ulonglong)iVar9 >> 0x20),(this->fields).lineOfFire.m_Origin.x,
                     (this->fields).lineOfFire.m_Origin.y,(this->fields).lineOfFire.m_Origin.z,
                     (this->fields).lineOfFire.m_Direction.x,uVar10,uVar11,
                     (pBVar5->fields)._._.method);
        }
        if ((this->fields).hasHitStatic == 0) {
          (this->fields).hasHitStatic = 1;
          fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          (this->fields).coolOffStartTime = fVar13;
          pMVar14 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar14 != (MVWorldObjectClientManager *)0x0) {
            id = MVWorldObjectClientManager::
                 MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                           (pMVar14,(this->fields).voxelHit.woId,
                            int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                           );
            pMVar14 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar14 != (MVWorldObjectClientManager *)0x0) {
              pMVar15 = (MVWorldObjectClient *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar14,id,(MethodInfo *)0x0);
              if (pMVar15 != (MVWorldObjectClient *)0x0) {
                x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                              (pMVar15,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                   ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                (this->fields).hasHitStatic = bVar3;
              }
              goto code_?;
            }
          }
          goto code_?;
        }
      }
code_?:
      ppMStack_16 = (MeshRenderer **)
                    ((this->fields).coolOffDuration + (this->fields).coolOffStartTime);
      fStack_17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (((float)ppMStack_16 <= fStack_17) || ((this->fields).hasHitStatic == 0)) {
        if ((char)ppMStack_2 == '\0') {
          return;
        }
        pCVar18 = (this->fields).cullingSubscriberBase;
        ppCVar19 = &(this->fields).cullingSubscriberBase;
        if (pCVar18 != (CullingSubscriberBase *)0x0) {
          CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar18,(MethodInfo *)0x0);
          *ppCVar19 = (CullingSubscriberBase *)0x0;
          func_?(ppCVar19);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar20 = TypeInfo__PrefabPool->static_fields->instance;
          if ((pPVar20 != (PrefabPool *)0x0) &&
             (this_01 = (pPVar20->fields).enumPoolManager, this_01 != (EnumPoolManager *)0x0)) {
            EnumPoolManager::EnumPoolManager_Return
                      (this_01,(MonoBehaviour *)this,(this->fields).initiatedPoolEnum,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        ppMStack_16 = (MeshRenderer **)
                      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                ((MethodInfo *)0x0);
        fVar21 = (float)ppMStack_16 - (this->fields).coolOffStartTime;
        pMStack_22 = (this->fields).meshRenderers;
        fStack_17 = 0.0;
        fVar13 = (this->fields).coolOffDuration;
        if (pMStack_22 != (MeshRenderer__Array *)0x0) {
          ppMStack_16 = pMStack_22->vector;
          while( true ) {
            if ((int)pMStack_22->max_length <= (int)fStack_17) {
              return;
            }
            if (pMStack_22->max_length <= (uint)fStack_17) break;
            if (*ppMStack_16 == (MeshRenderer *)0x0) goto code_?;
            VStack_23.z = (float)UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                 Renderer_get_materials((Renderer *)*ppMStack_16,(MethodInfo *)0x0);
            uVar24 = 0;
            ppMStack_2 = ((Material__Array *)VStack_23.z)->vector;
            while( true ) {
              if ((Material__Array *)VStack_23.z == (Material__Array *)0x0) goto code_?;
              if ((int)*(il2cpp_array_size_t *)((int)VStack_23.z + 0xc) <= (int)uVar24) break;
              if (*(il2cpp_array_size_t *)((int)VStack_23.z + 0xc) <= uVar24) goto code_?;
              this_00 = *ppMStack_2;
              if (this_00 == (Material *)0x0) goto code_?;
              pCVar25 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                  ((Color *)&stack0xffffff50,this_00,(MethodInfo *)0x0);
              fVar26 = pCVar25->r;
              pCVar25 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                  ((Color *)&stack0xffffff68,this_00,(MethodInfo *)0x0);
              VStack_27.y = pCVar25->g;
              VStack_27.x = fVar26;
              pCVar25 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                  (&CStack_28,this_00,(MethodInfo *)0x0);
              VStack_27.z = pCVar25->b;
              pMStack_29 = (MeshRenderer__Array *)(_UNK_? - fVar21 / fVar13);
              value_00.g = VStack_27.y;
              value_00.r = VStack_27.x;
              value_00.b = pCVar25->b;
              value_00.a = (float)pMStack_29;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                        (this_00,value_00,(MethodInfo *)0x0);
              uVar24 = uVar24 + 1;
              ppMStack_2 = ppMStack_2 + 1;
            }
            fStack_17 = (float)((int)fStack_17 + 1);
            ppMStack_16 = ppMStack_16 + 1;
          }
          goto code_?;
        }
      }
    }
    else {
      pPVar4 = (this->fields).pSystem;
      if (pPVar4 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (pPVar4,(MethodInfo *)0x0);
        pPVar4 = (this->fields).pSystem;
        if (pPVar4 != (ParticleSystem *)0x0) {
          bVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                   ParticleSystem_IsAlive_1(pPVar4,(MethodInfo *)0x0);
          ppMStack_2 = (Material **)((uint)ppMStack_2 & 0xff);
          if (bVar3 != 0) {
            ppMStack_2 = (Material **)0x0;
          }
          goto code_?;
        }
      }
    }
  }
  else {
    uStack_30._0_4_ = (this->fields).airRotation.x;
    uStack_30._4_4_ = (this->fields).airRotation.y;
    pMStack_31 = (MeshRenderer__Array *)(this->fields).airRotation.z;
    pTVar32 = (this->fields).tfrm;
    pMStack_22 = (MeshRenderer__Array *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
    fVar13 = (this->fields).speed;
    fVar26 = (float)uStack_30 * (float)pMStack_22 * fVar13;
    fVar21 = uStack_30._4_4_ * (float)pMStack_22 * fVar13;
    pMStack_31 = (MeshRenderer__Array *)((float)pMStack_31 * (float)pMStack_22 * fVar13);
    uStack_30 = CONCAT44(fVar21,fVar26);
    if (pTVar32 != (Transform *)0x0) {
      eulers.y = fVar21;
      eulers.x = fVar26;
      eulers.z = (float)pMStack_31;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
                (pTVar32,eulers,(MethodInfo *)0x0);
      fVar13 = (this->fields).totalDistTravelled;
      pfVar33 = &(this->fields).rangeStraight;
      if ((*pfVar33 <= fVar13 && fVar13 != *pfVar33) && ((this->fields).isFalling == 0)) {
        (this->fields).isFalling = 1;
      }
      uStack_30._0_4_ = (this->fields).direction.x;
      uStack_30._4_4_ = (this->fields).direction.y;
      pMStack_31 = (MeshRenderer__Array *)(this->fields).direction.z;
      fVar13 = (this->fields).speed;
      fVar21 = (float)uStack_30 * fVar13;
      ppMStack_2 = (Material **)(uStack_30._4_4_ * fVar13);
      VStack_23.z = (float)pMStack_31 * fVar13;
      pMStack_22 = (MeshRenderer__Array *)
                   UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
      ppMStack_2 = (Material **)((float)ppMStack_2 * (float)pMStack_22);
      pMStack_34 = (MeshRenderer__Array *)(VStack_23.z * (float)pMStack_22);
      ppMStack_35 = ppMStack_2;
      fStack_36 = fVar21 * (float)pMStack_22;
      pMStack_29 = pMStack_34;
      if ((this->fields).isFalling != 0) {
        fVar13 = (this->fields).downwardForce;
        pMStack_22 = (MeshRenderer__Array *)(this->fields).fallRate;
        VStack_23.z = (this->fields).speed;
        fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar26 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        pMStack_22 = (MeshRenderer__Array *)
                     (fVar26 * (float)((uint)pMStack_22 ^
                                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                      ) * VStack_23.z * VStack_23.z * fVar21 + fVar13);
        ppMStack_2 = (Material **)((float)ppMStack_2 + (float)pMStack_22);
        (this->fields).downwardForce = (float)pMStack_22;
        ppMStack_35 = ppMStack_2;
      }
      pTVar32 = (this->fields).tfrm;
      if (pTVar32 != (Transform *)0x0) {
        pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                            (&VStack_27,pTVar32,(MethodInfo *)0x0);
        uVar38 = pVVar37->x;
        uVar39 = pVVar37->y;
        CStack_28.r = (float)uVar38 + fStack_36;
        ppMStack_2 = (Material **)((float)ppMStack_2 + (float)uVar39);
        pMVar40 = (MeshRenderer__Array *)(pVVar37->z + (float)pMStack_34);
        CStack_28.g = 0.0;
        CStack_28.b = 0.0;
        CStack_28.a = 0.0;
        pTVar32 = (this->fields).tfrm;
        uStack_30 = CONCAT44(ppMStack_2,CStack_28.r);
        pMStack_31 = pMVar40;
        pMStack_22 = pMVar40;
        if (pTVar32 != (Transform *)0x0) {
          pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                              (&VStack_27,pTVar32,(MethodInfo *)0x0);
          VStack_23.x = pVVar37->x;
          VStack_23.y = pVVar37->y;
          VStack_23.z = pVVar37->z;
          pMStack_29 = (MeshRenderer__Array *)((float)pMStack_22 - VStack_23.z);
          VStack_27.z = (float)ppMStack_2 - VStack_23.y;
          VStack_27.y = CStack_28.r - VStack_23.x;
          CStack_28.a = (float)pMStack_29;
          puVar41 = (undefined8 *)func_?();
          uVar42 = *puVar41;
          CStack_28.a = *(float *)(puVar41 + 1);
          pTVar32 = (this->fields).tfrm;
          CStack_28._4_8_ = uVar42;
          pMStack_22 = (MeshRenderer__Array *)CStack_28.a;
          if (pTVar32 != (Transform *)0x0) {
            pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localPosition(&VStack_23,pTVar32,(MethodInfo *)0x0);
            uVar8 = pVVar37->x;
            fVar13 = pVVar37->z;
            fVar43 = (float10)func_?(&fStack_36);
            pMStack_34 = pMStack_22;
            VStack_23.z = (float)fVar43;
            puVar44 = &UNK_?;
            _fStack_6c = uVar42;
            puVar41 = (undefined8 *)func_?(fVar13,&fStack_36,0);
            fVar21 = *(float *)(puVar41 + 1);
            pMStack_22 = (MeshRenderer__Array *)(this->fields).ignoreWoIDs;
            uVar12 = (undefined4)*puVar41;
            uVar45 = (undefined4)((ulonglong)*puVar41 >> 0x20);
            if (cRam_? == '\0') {
              func_?(&StringLiteral_Logic);
              cRam_? = '\x01';
            }
            p_Var23 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                      UnsafeUtility::UnsafeUtility_AsRef_1((Void *)0xfffffffb,(MethodInfo *)0x0);
            p_Var23 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                      UnsafeUtility::UnsafeUtility_AsRef_1((Void *)p_Var23,(MethodInfo *)0x0);
            uVar24 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                               (StringLiteral_Logic,(MethodInfo *)0x0);
            p_Var23 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                      UnsafeUtility::UnsafeUtility_AsRef_1
                                ((Void *)((uint)p_Var23 & ~(1 << (uVar24 & 0x1f))),(MethodInfo *)0x0
                                );
            p_Var23 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                      UnsafeUtility::UnsafeUtility_AsRef_1((Void *)p_Var23,(MethodInfo *)0x0);
            voxelHit = &(this->fields).voxelHit;
            ray.m_Origin.y = (float)puVar44;
            ray.m_Origin.x = (float)uVar8;
            ray.m_Origin.z = fVar13;
            ray.m_Direction.x = (float)uVar12;
            ray.m_Direction.y = (float)uVar45;
            ray.m_Direction.z = fVar21;
            bVar3 = CollisionDetection::CollisionDetection_MVHit_1
                               (ray,voxelHit,VStack_23.z,(HashSet_1_System_Int32_ *)pMStack_22,
                                (int32_t)p_Var23,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              pMVar14 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if ((pMVar14 == (MVWorldObjectClientManager *)0x0) ||
                 (pMVar15 = (MVWorldObjectClient *)
                            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                      (pMVar14,(this->fields).voxelHit.woId,(MethodInfo *)0x0),
                 pMVar15 == (MVWorldObjectClient *)0x0)) goto code_?;
              if ((pMVar15->fields)._PlayInteractionType_k__BackingField != 0) {
                pMVar15 = MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
                                    (pMVar15,(MethodInfo *)0x0);
                if (pMVar15 == (MVWorldObjectClient *)0x0) goto code_?;
                (this->fields).voxelHit.woId = (pMVar15->fields)._.id;
              }
              uStack_30._0_4_ = (voxelHit->point).x;
              uStack_30._4_4_ = (voxelHit->point).y;
              pMVar40 = (MeshRenderer__Array *)(this->fields).voxelHit.point.z;
              (this->fields).inAir = 0;
              (this->fields).hasHit = 1;
              pMStack_31 = pMVar40;
            }
code_?:
            pTVar32 = (this->fields).tfrm;
            if (pTVar32 != (Transform *)0x0) {
              pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localPosition
                                  ((Vector3 *)&stack0xffffff68,pTVar32,(MethodInfo *)0x0);
              VStack_23.x = pVVar37->x;
              VStack_23.y = pVVar37->y;
              pMStack_22 = (MeshRenderer__Array *)pVVar37->z;
              CStack_28.a = CStack_28.a * _UNK_? + (float)pMStack_31;
              CStack_28.b = CStack_28.b * _UNK_? + uStack_30._4_4_;
              CStack_28.g = CStack_28.g * _UNK_? + (float)uStack_30;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              start.z = (float)pMStack_22;
              start.x = VStack_23.x;
              start.y = VStack_23.y;
              end.z = CStack_28.a;
              end.x = CStack_28.g;
              end.y = CStack_28.b;
              color.g = _UNK_?;
              color.r = (float)_UNK_?;
              color.b = (float)_UNK_?;
              color.a = _UNK_?;
              fVar13 = _UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                        (start,end,color,(MethodInfo *)0x0);
              pMStack_22 = (MeshRenderer__Array *)(this->fields).totalDistTravelled;
              puVar44 = &UNK_?;
              fVar43 = (float10)func_?();
              pTVar32 = (this->fields).tfrm;
              (this->fields).totalDistTravelled = (float)(fVar43 + (float10)(float)pMStack_22);
              if (pTVar32 != (Transform *)0x0) {
                value.y = (float)puVar44;
                value.x = fVar13;
                value.z = (float)pMVar40;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar32,value,(MethodInfo *)0x0);
                if ((this->fields).rangeFall + (this->fields).rangeStraight <
                    (this->fields).totalDistTravelled) {
                  (this->fields).inAir = 0;
                }
                pCVar18 = (this->fields).cullingSubscriberBase;
                pTVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this,(MethodInfo *)0x0);
                if ((pTVar32 != (Transform *)0x0) &&
                   (pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position(&VStack_27,pTVar32,(MethodInfo *)0x0),
                   pCVar18 != (CullingSubscriberBase *)0x0)) {
                  CullingSubscriberBase::CullingSubscriberBase_set_Position
                            (pCVar18,*pVVar37,(MethodInfo *)0x0);
                  return;
                }
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
  pcVar46 = (code *)swi(3);
  (*pcVar46)();
  return;
}


/* BulletThrowingStar() */

void Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar__ctor
               (BulletThrowingStar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  ppHVar1 = &(this->fields).ignoreWoIDs;
  *ppHVar1 = this_00;
  func_?(ppHVar1,this_00);
  (this->fields).coolOffDuration = 3.5;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

