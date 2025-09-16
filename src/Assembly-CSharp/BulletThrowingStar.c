
/* Void Awake() */

void Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_Awake
               (BulletThrowingStar *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  (this->fields).tfrm = pTVar1;
  func_?(&(this->fields).tfrm,pTVar1);
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
  p_Var9 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_AsRef_1((Void *)0xfffffffb,(MethodInfo *)0x0);
  p_Var9 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_AsRef_1((Void *)p_Var9,(MethodInfo *)0x0);
  uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Logic,(MethodInfo *)0x0);
  p_Var9 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_AsRef_1((Void *)((uint)p_Var9 & ~(1 << (uVar1 & 0x1f))),(MethodInfo *)0x0)
  ;
  fVar2 = (this->fields).lineOfFire.m_Origin.x;
  fVar3 = (this->fields).lineOfFire.m_Origin.y;
  fVar4 = (this->fields).lineOfFire.m_Origin.z;
  fVar5 = (this->fields).lineOfFire.m_Direction.x;
  ignoreWoIds = (this->fields).ignoreWoIDs;
  fVar6 = (this->fields).lineOfFire.m_Direction.y;
  fVar7 = (this->fields).lineOfFire.m_Direction.z;
  p_Var9 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_AsRef_1((Void *)p_Var9,(MethodInfo *)0x0);
  ray.m_Origin.y = fVar3;
  ray.m_Origin.x = fVar2;
  ray.m_Origin.z = fVar4;
  ray.m_Direction.x = fVar5;
  ray.m_Direction.y = fVar6;
  ray.m_Direction.z = fVar7;
  bVar8 = CollisionDetection::CollisionDetection_MVHit_1
                    (ray,(VoxelHit *)&stack0xffffff8c,maxRange,ignoreWoIds,(int32_t)p_Var9,
                     (MethodInfo *)0x0);
  if (bVar8 == 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffe4,this_01,(MethodInfo *)0x0);
        uVar10 = pVVar9->x;
        uVar11 = pVVar9->y;
        fVar6 = pVVar9->z;
        uVar12 = (this->fields).lineOfFire.m_Direction.x;
        uVar13 = (this->fields).lineOfFire.m_Direction.y;
        fVar7 = (this->fields).lineOfFire.m_Direction.z;
        __return_storage_ptr__->x = (float)uVar10 + (float)uVar12 * maxRange;
        __return_storage_ptr__->y = (float)uVar11 + (float)uVar13 * maxRange;
        __return_storage_ptr__->z = fVar6 + fVar7 * maxRange;
        return __return_storage_ptr__;
      }
    }
    func_?();
    pcVar14 = (code *)swi(3);
    pVVar9 = (Vector3 *)(*pcVar14)();
    return pVVar9;
  }
  start = (this->fields).lineOfFire.m_Origin;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                      ((Vector3 *)&stack0xffffffd8,&(this->fields).lineOfFire,in_stack_15,
                       (MethodInfo *)0x0);
  end = *pVVar9;
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  color.g = (float)_UNK_?;
  color.r = (float)_UNK_?;
  color.b = (float)_UNK_?;
  color.a = _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine
            (start,end,color,10.0,(MethodInfo *)0x0);
  __return_storage_ptr__->x = fVar5;
  __return_storage_ptr__->y = fVar6;
  __return_storage_ptr__->z = fVar7;
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
  (this->fields).lineOfFire.m_Origin.x = lineOfFire.m_Origin.x;
  (this->fields).lineOfFire.m_Origin.y = lineOfFire.m_Origin.y;
  (this->fields).lineOfFire.m_Origin.z = lineOfFire.m_Origin.z;
  (this->fields).lineOfFire.m_Direction.x = lineOfFire.m_Direction.x;
  (this->fields).ignoreWoIDs = ignoreWoIDs;
  (this->fields).lineOfFire.m_Direction.y = lineOfFire.m_Direction.y;
  (this->fields).lineOfFire.m_Direction.z = lineOfFire.m_Direction.z;
  (this->fields).fallRate = fallRate;
  func_?(&(this->fields).ignoreWoIDs,ignoreWoIDs);
  pTVar1 = (this->fields).tfrm;
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
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
    uVar3._0_4_ = pVVar2->x;
    uVar3._4_4_ = pVVar2->y;
    fVar4 = pVVar2->z;
    BulletThrowingStar_FindTargetPos
              ((Vector3 *)&stack0xffffffb8,this,rangeStraight,(MethodInfo *)0x0);
    pTVar1 = (this->fields).tfrm;
    pVVar2 = (Vector3 *)func_?(&stack0xffffffb8,&stack0xffffffc8,0);
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                       ((Quaternion *)&stack0xffffffb4,*pVVar2,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar1,*pQVar5,(MethodInfo *)0x0);
      pTVar1 = (this->fields).tfrm;
      if (pTVar1 != (Transform *)0x0) {
        value.z = fVar4;
        value.x = (float)(int)uVar3;
        value.y = (float)(int)((ulonglong)uVar3 >> 0x20);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar1,value,(MethodInfo *)0x0);
        pPVar6 = (this->fields).pSystem;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pPVar6,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          pPVar6 = (this->fields).pSystem;
          if (pPVar6 == (ParticleSystem *)0x0) goto code_?;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                    (pPVar6,(MethodInfo *)0x0);
        }
        pAVar8 = (this->fields).aSource;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pAVar8,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          pAVar8 = (this->fields).aSource;
          if (pAVar8 == (AudioSource *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                    (pAVar8,1,(MethodInfo *)0x0);
          pAVar8 = (this->fields).aSource;
          if (pAVar8 == (AudioSource *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                    (pAVar8,(MethodInfo *)0x0);
        }
        pTVar1 = (this->fields).tfrm;
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                             ((Vector3 *)&stack0xffffffb8,pTVar1,(MethodInfo *)0x0);
          fVar9 = pVVar2->y;
          fVar4 = pVVar2->z;
          (this->fields).direction.x = pVVar2->x;
          (this->fields).direction.y = fVar9;
          (this->fields).direction.z = fVar4;
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                             (20.0,30.0,(MethodInfo *)0x0);
          uVar10 = (ulonglong)(uint)fVar4;
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                             (2.0,8.0,(MethodInfo *)0x0);
          (this->fields).airRotation.x = (float)(int)uVar10;
          (this->fields).airRotation.y = (float)(int)(uVar10 >> 0x20);
          (this->fields).airRotation.z = fVar4;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this,1,(MethodInfo *)0x0);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffb8,pTVar1,(MethodInfo *)0x0);
            uVar11._0_4_ = pVVar2->x;
            uVar11._4_4_ = pVVar2->y;
            fVar4 = pVVar2->z;
            this_01 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
            UnityAction_1_UnityEngine_Vector2___ctor
                      (this_01,(Object *)this,
                       MethodInfo__BulletThrowingStar__OnStateChanged_UnityEngine__CullingGroupEvent_
                       ,(MethodInfo *)0x0);
            pCVar12 = (CullingSubscriberBase *)func_?();
            position.z = fVar4;
            position.x = (float)(int)uVar11;
            position.y = (float)(int)((ulonglong)uVar11 >> 0x20);
            CullingSubscriberBase::CullingSubscriberBase__ctor_2
                      (pCVar12,1.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
                       (MethodInfo *)0x0);
            (this->fields).cullingSubscriberBase = pCVar12;
            func_?();
            pCVar12 = (this->fields).cullingSubscriberBase;
            if (pCVar12 != (CullingSubscriberBase *)0x0) {
              (pCVar12->fields)._DistanceBandIndex_k__BackingField = 5;
              pMVar13 = (this->fields).meshRenderers;
              lVar14 = ZEXT48(pMVar13) << 0x20;
              uStack_15 = 0;
              if (pMVar13 != (MeshRenderer__Array *)0x0) {
                ppMVar16 = pMVar13->vector;
                for (; (int)uStack_15 < (int)pMVar13->max_length; uStack_15 = uStack_15 + 1) {
                  if (pMVar13->max_length <= uStack_15) goto code_?;
                  if (*ppMVar16 == (MeshRenderer *)0x0) goto code_?;
                  pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                            Renderer_get_materials((Renderer *)*ppMVar16,(MethodInfo *)0x0);
                  ppMVar18 = pMVar17->vector;
                  uVar19 = 0;
                  if (pMVar17 == (Material__Array *)0x0) goto code_?;
                  for (; (int)uVar19 < (int)pMVar17->max_length; uVar19 = uVar19 + 1) {
                    if (pMVar17->max_length <= uVar19) goto code_?;
                    this_00 = *ppMVar18;
                    if (this_00 == (Material *)0x0) goto code_?;
                    pCVar20 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                        ((Color *)&stack0xffffffc4,this_00,(MethodInfo *)0x0);
                    fVar4 = pCVar20->r;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                              ((Color *)&stack0xffffffd4,this_00,(MethodInfo *)0x0);
                    pCVar20 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                        ((Color *)&stack0xffffffa4,this_00,(MethodInfo *)0x0);
                    value_00.g = 0.0;
                    value_00.r = fVar4;
                    value_00.b = pCVar20->b;
                    value_00.a = 1.0;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                              (this_00,value_00,(MethodInfo *)0x0);
                    ppMVar18 = ppMVar18 + 1;
                  }
                  pMVar13 = (MeshRenderer__Array *)((ulonglong)lVar14 >> 0x20);
                  ppMVar16 = ppMVar16 + 1;
                }
                pTVar21 = (this->fields).trailRenderer;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                  ((Object_1 *)pTVar21,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar7 != 0) {
                  pTVar21 = (this->fields).trailRenderer;
                  if (pTVar21 == (TrailRenderer *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                            ((Renderer *)pTVar21,1,(MethodInfo *)0x0);
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
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
        (this->fields).hasNotified = 1;
        if ((this->fields).onHit != (BulletThrowingStar_OnHitDelegate *)0x0) {
          pBVar5 = (this->fields).onHit;
          uVar6._0_2_ = (this->fields).voxelHit.cubePos.x;
          uVar6._2_2_ = (this->fields).voxelHit.cubePos.y;
          iVar7 = (this->fields).voxelHit.interactionFlags;
          (*(pBVar5->fields)._._.invoke_impl)
                    ((pBVar5->fields)._._.method_code,(this->fields).voxelHit.point.x,
                     (this->fields).voxelHit.point.y,(this->fields).voxelHit.point.z,
                     (this->fields).voxelHit.normal.x,(this->fields).voxelHit.normal.y,
                     (this->fields).voxelHit.normal.z,uVar6,
                     *(undefined4 *)&(this->fields).voxelHit.cubePos.z,(this->fields).voxelHit.face,
                     *(undefined4 *)&(this->fields).voxelHit.isCubeHit,(this->fields).voxelHit.woId,
                     (this->fields).voxelHit.cube,(this->fields).voxelHit.distance,
                     (this->fields).voxelHit.collider,(this->fields).voxelHit.transform,
                     *(undefined4 *)&(this->fields).voxelHit.field_0x3c,(int)iVar7,
                     (int)((ulonglong)iVar7 >> 0x20),(this->fields).lineOfFire.m_Origin.x,
                     (this->fields).lineOfFire.m_Origin.y,(this->fields).lineOfFire.m_Origin.z);
        }
        if ((this->fields).onHitLocal != (BulletThrowingStar_OnHitDelegate *)0x0) {
          pBVar5 = (this->fields).onHitLocal;
          uVar8._0_2_ = (this->fields).voxelHit.cubePos.x;
          uVar8._2_2_ = (this->fields).voxelHit.cubePos.y;
          iVar7 = (this->fields).voxelHit.interactionFlags;
          (*(pBVar5->fields)._._.invoke_impl)
                    ((pBVar5->fields)._._.method_code,(this->fields).voxelHit.point.x,
                     (this->fields).voxelHit.point.y,(this->fields).voxelHit.point.z,
                     (this->fields).voxelHit.normal.x,(this->fields).voxelHit.normal.y,
                     (this->fields).voxelHit.normal.z,uVar8,
                     *(undefined4 *)&(this->fields).voxelHit.cubePos.z,(this->fields).voxelHit.face,
                     *(undefined4 *)&(this->fields).voxelHit.isCubeHit,(this->fields).voxelHit.woId,
                     (this->fields).voxelHit.cube,(this->fields).voxelHit.distance,
                     (this->fields).voxelHit.collider,(this->fields).voxelHit.transform,
                     *(undefined4 *)&(this->fields).voxelHit.field_0x3c,(int)iVar7,
                     (int)((ulonglong)iVar7 >> 0x20),(this->fields).lineOfFire.m_Origin.x,
                     (this->fields).lineOfFire.m_Origin.y,(this->fields).lineOfFire.m_Origin.z);
        }
        if ((this->fields).hasHitStatic == 0) {
          (this->fields).hasHitStatic = 1;
          fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          (this->fields).coolOffStartTime = fVar9;
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar10 != (MVWorldObjectClientManager *)0x0) {
            id = MVWorldObjectClientManager::
                 MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                           (pMVar10,(this->fields).voxelHit.woId,
                            int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                           );
            pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar10 != (MVWorldObjectClientManager *)0x0) {
              pMVar11 = (MVWorldObjectClient *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar10,id,(MethodInfo *)0x0);
              if (pMVar11 != (MVWorldObjectClient *)0x0) {
                x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                              (pMVar11,(MethodInfo *)0x0);
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
      ppMStack_12 = (MeshRenderer **)
                    ((this->fields).coolOffDuration + (this->fields).coolOffStartTime);
      fStack_13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (((float)ppMStack_12 <= fStack_13) || ((this->fields).hasHitStatic == 0)) {
        if ((char)ppMStack_2 == '\0') {
          return;
        }
        pCVar14 = (this->fields).cullingSubscriberBase;
        if (pCVar14 != (CullingSubscriberBase *)0x0) {
          CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar14,(MethodInfo *)0x0);
          (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
          func_?();
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar15 = TypeInfo__PrefabPool->static_fields->instance;
          if ((pPVar15 != (PrefabPool *)0x0) &&
             (this_01 = (pPVar15->fields).enumPoolManager, this_01 != (EnumPoolManager *)0x0)) {
            EnumPoolManager::EnumPoolManager_Return
                      (this_01,(MonoBehaviour *)this,(this->fields).initiatedPoolEnum,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        ppMStack_12 = (MeshRenderer **)
                      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                ((MethodInfo *)0x0);
        fVar16 = (float)ppMStack_12 - (this->fields).coolOffStartTime;
        pMStack_17 = (this->fields).meshRenderers;
        fStack_13 = 0.0;
        fVar9 = (this->fields).coolOffDuration;
        if (pMStack_17 != (MeshRenderer__Array *)0x0) {
          ppMStack_12 = pMStack_17->vector;
          while( true ) {
            if ((int)pMStack_17->max_length <= (int)fStack_13) {
              return;
            }
            if (pMStack_17->max_length <= (uint)fStack_13) break;
            if (*ppMStack_12 == (MeshRenderer *)0x0) goto code_?;
            VStack_18.z = (float)UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                 Renderer_get_materials((Renderer *)*ppMStack_12,(MethodInfo *)0x0);
            ppMStack_2 = ((Material__Array *)VStack_18.z)->vector;
            uVar19 = 0;
            if ((Material__Array *)VStack_18.z == (Material__Array *)0x0) goto code_?;
            for (; (int)uVar19 < (int)*(il2cpp_array_size_t *)((int)VStack_18.z + 0xc);
                uVar19 = uVar19 + 1) {
              if (*(il2cpp_array_size_t *)((int)VStack_18.z + 0xc) <= uVar19) goto code_?;
              this_00 = *ppMStack_2;
              if (this_00 == (Material *)0x0) goto code_?;
              pCVar20 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                  ((Color *)&stack0xffffff30,this_00,(MethodInfo *)0x0);
              uStack_21 = CONCAT44(pCVar20->r,(undefined4)uStack_21);
              pCVar20 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                  (&CStack_22,this_00,(MethodInfo *)0x0);
              VStack_23.x = uStack_21._4_4_;
              VStack_23.y = pCVar20->g;
              pCVar20 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                  ((Color *)&stack0xffffff60,this_00,(MethodInfo *)0x0);
              VStack_23.z = pCVar20->b;
              fStack_24 = _UNK_? - fVar16 / fVar9;
              value_00.g = VStack_23.y;
              value_00.r = VStack_23.x;
              value_00.b = pCVar20->b;
              value_00.a = fStack_24;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                        (this_00,value_00,(MethodInfo *)0x0);
              ppMStack_2 = ppMStack_2 + 1;
            }
            fStack_13 = (float)((int)fStack_13 + 1);
            ppMStack_12 = ppMStack_12 + 1;
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
    uStack_25._0_4_ = (this->fields).airRotation.x;
    uStack_25._4_4_ = (this->fields).airRotation.y;
    fStack_26 = (this->fields).airRotation.z;
    pTVar27 = (this->fields).tfrm;
    pMStack_17 = (MeshRenderer__Array *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
    fVar9 = (this->fields).speed;
    fVar28 = (float)uStack_25 * (float)pMStack_17 * fVar9;
    fVar16 = uStack_25._4_4_ * (float)pMStack_17 * fVar9;
    fStack_26 = fStack_26 * (float)pMStack_17 * fVar9;
    uStack_25 = CONCAT44(fVar16,fVar28);
    if (pTVar27 != (Transform *)0x0) {
      eulers.y = fVar16;
      eulers.x = fVar28;
      eulers.z = fStack_26;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
                (pTVar27,eulers,(MethodInfo *)0x0);
      fVar9 = (this->fields).totalDistTravelled;
      pfVar29 = &(this->fields).rangeStraight;
      if ((*pfVar29 <= fVar9 && fVar9 != *pfVar29) && ((this->fields).isFalling == 0)) {
        (this->fields).isFalling = 1;
      }
      uStack_25._0_4_ = (this->fields).direction.x;
      uStack_25._4_4_ = (this->fields).direction.y;
      fStack_26 = (this->fields).direction.z;
      fVar9 = (this->fields).speed;
      VStack_18.z = (float)uStack_25 * fVar9;
      fVar16 = uStack_25._4_4_ * fVar9;
      uStack_21 = CONCAT44(fStack_26 * fVar9,(undefined4)uStack_21);
      pMStack_17 = (MeshRenderer__Array *)
                   UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
      fVar9 = uStack_21._4_4_ * (float)pMStack_17;
      ppMStack_2 = (Material **)((float)pMStack_17 * fVar16);
      fVar16 = (float)pMStack_17 * VStack_18.z;
      VStack_23.z = fVar9;
      if ((this->fields).isFalling != 0) {
        ppMStack_12 = (MeshRenderer **)(this->fields).downwardForce;
        pMStack_17 = (MeshRenderer__Array *)(this->fields).fallRate;
        pMVar30 = (Material__Array *)(this->fields).speed;
        VStack_18.z = (float)pMVar30;
        fVar28 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        uStack_21 = CONCAT44(fVar28,(undefined4)uStack_21);
        fVar28 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        pMStack_17 = (MeshRenderer__Array *)
                     (fVar28 * (float)((uint)pMStack_17 ^
                                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                      ) * VStack_18.z * (float)pMVar30 * uStack_21._4_4_ +
                     (float)ppMStack_12);
        ppMStack_2 = (Material **)((float)ppMStack_2 + (float)pMStack_17);
        (this->fields).downwardForce = (float)pMStack_17;
      }
      pTVar27 = (this->fields).tfrm;
      if (pTVar27 != (Transform *)0x0) {
        pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                            (&VStack_23,pTVar27,(MethodInfo *)0x0);
        uVar32 = pVVar31->x;
        uVar33 = pVVar31->y;
        CStack_22.r = fVar16 + (float)uVar32;
        ppMStack_2 = (Material **)((float)ppMStack_2 + (float)uVar33);
        fVar9 = fVar9 + pVVar31->z;
        CStack_22.g = 0.0;
        CStack_22.b = 0.0;
        CStack_22.a = 0.0;
        pTVar27 = (this->fields).tfrm;
        uStack_25 = CONCAT44(ppMStack_2,CStack_22.r);
        fStack_26 = fVar9;
        if (pTVar27 != (Transform *)0x0) {
          pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                              (&VStack_23,pTVar27,(MethodInfo *)0x0);
          VStack_18.x = pVVar31->x;
          VStack_18.y = pVVar31->y;
          VStack_18.z = pVVar31->z;
          fStack_24 = fVar9 - VStack_18.z;
          VStack_23.z = (float)ppMStack_2 - VStack_18.y;
          VStack_23.y = CStack_22.r - VStack_18.x;
          CStack_22.b = fStack_24;
          puVar34 = (undefined8 *)func_?();
          CStack_22.a = *(float *)(puVar34 + 1);
          pTVar27 = (this->fields).tfrm;
          CStack_22.g = (float)*puVar34;
          CStack_22.b = (float)((ulonglong)*puVar34 >> 0x20);
          pMStack_17 = (MeshRenderer__Array *)CStack_22.a;
          if (pTVar27 != (Transform *)0x0) {
            pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localPosition(&VStack_18,pTVar27,(MethodInfo *)0x0);
            uStack_21._0_4_ = pVVar31->x;
            uStack_21._4_4_ = pVVar31->y;
            fVar16 = pVVar31->z;
            fVar35 = (float10)func_?();
            VStack_18.z = (float)fVar35;
            uVar6 = (undefined4)uStack_21;
            uVar8 = (undefined4)((ulonglong)uStack_21 >> 0x20);
            puVar34 = (undefined8 *)func_?();
            fVar28 = *(float *)(puVar34 + 1);
            pMStack_17 = (MeshRenderer__Array *)(this->fields).ignoreWoIDs;
            uVar36 = (undefined4)*puVar34;
            uVar37 = (undefined4)((ulonglong)*puVar34 >> 0x20);
            if (cRam_? == '\0') {
              func_?(&StringLiteral_Logic);
              cRam_? = '\x01';
            }
            p_Var18 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                      UnsafeUtility::UnsafeUtility_AsRef_1((Void *)0xfffffffb,(MethodInfo *)0x0);
            p_Var18 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                      UnsafeUtility::UnsafeUtility_AsRef_1((Void *)p_Var18,(MethodInfo *)0x0);
            uVar19 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                               (StringLiteral_Logic,(MethodInfo *)0x0);
            p_Var18 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                      UnsafeUtility::UnsafeUtility_AsRef_1
                                ((Void *)((uint)p_Var18 & ~(1 << (uVar19 & 0x1f))),(MethodInfo *)0x0
                                );
            p_Var18 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::
                      UnsafeUtility::UnsafeUtility_AsRef_1((Void *)p_Var18,(MethodInfo *)0x0);
            ray.m_Origin.y = (float)uVar8;
            ray.m_Origin.x = (float)uVar6;
            ray.m_Origin.z = fVar16;
            ray.m_Direction.x = (float)uVar36;
            ray.m_Direction.y = (float)uVar37;
            ray.m_Direction.z = fVar28;
            bVar3 = CollisionDetection::CollisionDetection_MVHit_1
                               (ray,&(this->fields).voxelHit,VStack_18.z,
                                (HashSet_1_System_Int32_ *)pMStack_17,(int32_t)p_Var18,
                                (MethodInfo *)0x0);
            if (bVar3 != 0) {
              pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if ((pMVar10 == (MVWorldObjectClientManager *)0x0) ||
                 (pMVar11 = (MVWorldObjectClient *)
                            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                      (pMVar10,(this->fields).voxelHit.woId,(MethodInfo *)0x0),
                 pMVar11 == (MVWorldObjectClient *)0x0)) goto code_?;
              if ((pMVar11->fields)._PlayInteractionType_k__BackingField != 0) {
                pMVar11 = MVWorldObjectClient::MVWorldObjectClient_GetHitInteractionHandlingWO
                                    (pMVar11,(MethodInfo *)0x0);
                if (pMVar11 == (MVWorldObjectClient *)0x0) goto code_?;
                (this->fields).voxelHit.woId = (pMVar11->fields)._.id;
              }
              uStack_25._0_4_ = (this->fields).voxelHit.point.x;
              uStack_25._4_4_ = (this->fields).voxelHit.point.y;
              fVar9 = (this->fields).voxelHit.point.z;
              (this->fields).inAir = 0;
              (this->fields).hasHit = 1;
              fStack_26 = fVar9;
            }
code_?:
            pTVar27 = (this->fields).tfrm;
            if (pTVar27 != (Transform *)0x0) {
              pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localPosition
                                  ((Vector3 *)&stack0xffffff60,pTVar27,(MethodInfo *)0x0);
              VStack_18.x = pVVar31->x;
              VStack_18.y = pVVar31->y;
              pMStack_17 = (MeshRenderer__Array *)pVVar31->z;
              fVar16 = CStack_22.b * _UNK_?;
              CStack_22.r = (float)uStack_25 + CStack_22.g * _UNK_?;
              CStack_22.b = fStack_26 + CStack_22.a * _UNK_?;
              CStack_22.g = uStack_25._4_4_ + fVar16;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              start.z = (float)pMStack_17;
              start.x = VStack_18.x;
              start.y = VStack_18.y;
              end.y = CStack_22.g;
              end.x = CStack_22.r;
              end.z = CStack_22.b;
              color.g = (float)_UNK_?;
              color.r = (float)_UNK_?;
              color.b = (float)_UNK_?;
              color.a = _UNK_?;
              fVar16 = CStack_22.r;
              fVar28 = CStack_22.g;
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                        (start,end,color,(MethodInfo *)0x0);
              pMStack_17 = (MeshRenderer__Array *)(this->fields).totalDistTravelled;
              fVar35 = (float10)func_?();
              pTVar27 = (this->fields).tfrm;
              (this->fields).totalDistTravelled = (float)(fVar35 + (float10)(float)pMStack_17);
              if (pTVar27 != (Transform *)0x0) {
                value.y = fVar28;
                value.x = fVar16;
                value.z = fVar9;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar27,value,(MethodInfo *)0x0);
                if ((this->fields).rangeFall + (this->fields).rangeStraight <
                    (this->fields).totalDistTravelled) {
                  (this->fields).inAir = 0;
                }
                pCVar14 = (this->fields).cullingSubscriberBase;
                pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this,(MethodInfo *)0x0);
                if ((pTVar27 != (Transform *)0x0) &&
                   (pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position(&VStack_23,pTVar27,(MethodInfo *)0x0),
                   pCVar14 != (CullingSubscriberBase *)0x0)) {
                  CullingSubscriberBase::CullingSubscriberBase_set_Position
                            (pCVar14,*pVVar31,(MethodInfo *)0x0);
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
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
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
  (this->fields).ignoreWoIDs = this_00;
  func_?(&(this->fields).ignoreWoIDs,this_00);
  (this->fields).coolOffDuration = 3.5;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

