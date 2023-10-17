
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
        this_00 = (HashSet_1_UnityEngine_Vector3_ *)(pBVar3->fields).ignoreWoIDs;
        if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
          HashSet_1_UnityEngine_Vector3__Clear
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
  VVar4 = ray.m_Origin;
  ray.m_Origin.x = (float)ignoreWoIDs;
  fVar5 = distance;
  ray.m_Origin.y = (float)ppOVar2;
  ray_00 = (Ray)CONCAT1212(ray_00.m_Origin,VVar4);
  bVar6 = CollisionDetection::CollisionDetection_MVHit_1
                    (ray_00,voxelHit,distance,ignoreWoIDs,(int32_t)ppOVar2,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    return 0;
  }
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this != (MVWorldObjectClientManager *)0x0) &&
     (pMVar7 = (MVWorldObjectClient *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this,voxelHit->woId,(MethodInfo *)0x0),
     pMVar7 != (MVWorldObjectClient *)0x0)) {
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
  func_?();
  pcVar8 = (code *)swi(3);
  bVar6 = (*pcVar8)();
  return bVar6;
}


/* Boolean DoCollisionCheck(Vector3, Single, Vector3, VoxelHit ByRef) */

bool Assembly-CSharp.dll::BulletThrowingStar::BulletThrowingStar_DoCollisionCheck
               (BulletThrowingStar *this,Vector3 pos,float dist,Vector3 dir,VoxelHit *voxelHit,
               MethodInfo *method)

{
  fVar1 = 0.0;
  fVar2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  puStack_6 = (undefined *)0x0;
  UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
            ((Ray *)&fStack_3,pos,dir,(MethodInfo *)0x0);
  ignoreWoIds = (this->fields).ignoreWoIDs;
  fVar7 = fStack_3;
  fVar8 = fStack_4;
  fVar9 = fStack_5;
  puVar10 = puStack_6;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
    puVar10 = puStack_6;
  }
  pVVar11 = (Void *)mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                             ((Void *)0xfffffffb,(MethodInfo *)0x0);
  ppOVar12 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                      (pVVar11,(MethodInfo *)0x0);
  uVar13 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  pVVar11 = (Void *)mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                             ((Void *)((uint)ppOVar12 & ~(1 << (uVar13 & 0x1f))),(MethodInfo *)0x0);
  ppOVar12 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                      (pVVar11,(MethodInfo *)0x0);
  ray.m_Origin.y = fVar8;
  ray.m_Origin.x = fVar7;
  ray.m_Origin.z = fVar9;
  ray.m_Direction.x = (float)puVar10;
  ray.m_Direction.y = fVar1;
  ray.m_Direction.z = fVar2;
  bVar14 = CollisionDetection::CollisionDetection_MVHit_1
                    (ray,voxelHit,dist,ignoreWoIds,(int32_t)ppOVar12,(MethodInfo *)0x0);
  if (bVar14 == 0) {
    return 0;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_00 != (MVWorldObjectClientManager *)0x0) &&
     (pMVar15 = (MVWorldObjectClient *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_00,voxelHit->woId,(MethodInfo *)0x0),
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
  bVar14 = (*pcVar16)();
  return bVar14;
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
  pVVar1 = (Void *)mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                             ((Void *)0xfffffffb,(MethodInfo *)0x0);
  ppOVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                       (pVVar1,(MethodInfo *)0x0);
  uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Logic,(MethodInfo *)0x0);
  pVVar1 = (Void *)mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                             ((Void *)((uint)ppOVar2 & ~(1 << (uVar3 & 0x1f))),(MethodInfo *)0x0);
  fVar4 = (this->fields).lineOfFire.m_Origin.x;
  fVar5 = (this->fields).lineOfFire.m_Origin.y;
  pSVar6 = (String *)(this->fields).lineOfFire.m_Origin.z;
  pSVar7 = (String *)(this->fields).lineOfFire.m_Direction.x;
  ignoreWoIds = (this->fields).ignoreWoIDs;
  fVar8 = (this->fields).lineOfFire.m_Direction.y;
  fVar9 = (this->fields).lineOfFire.m_Direction.z;
  ppOVar2 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                       (pVVar1,(MethodInfo *)0x0);
  ray.m_Origin.y = fVar5;
  ray.m_Origin.x = fVar4;
  ray.m_Origin.z = (float)pSVar6;
  ray.m_Direction.x = (float)pSVar7;
  ray.m_Direction.y = fVar8;
  ray.m_Direction.z = fVar9;
  bVar10 = CollisionDetection::CollisionDetection_MVHit_1
                    (ray,(VoxelHit *)&stack0xffffff8c,maxRange,ignoreWoIds,(int32_t)ppOVar2,
                     (MethodInfo *)0x0);
  if (bVar10 == 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffe4,this_01,(MethodInfo *)0x0);
        fVar4 = pVVar11->x;
        uVar12 = pVVar11->y;
        fVar8 = pVVar11->z;
        pRVar13 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            ((Regex_CachedCodeEntryKey *)&stack0xffffffd8,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)&(this->fields).lineOfFire,(MethodInfo *)0x0);
        uVar14 = pRVar13->_options;
        uVar15 = pRVar13->_cultureKey;
        pSVar6 = pRVar13->_pattern;
        __return_storage_ptr__->x = fVar4 + (float)uVar14 * maxRange;
        __return_storage_ptr__->y = (float)uVar12 + (float)uVar15 * maxRange;
        __return_storage_ptr__->z = fVar8 + (float)pSVar6 * maxRange;
        return __return_storage_ptr__;
      }
    }
    func_?();
    pcVar16 = (code *)swi(3);
    pVVar11 = (Vector3 *)(*pcVar16)();
    return pVVar11;
  }
  pRVar13 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                      ((Regex_CachedCodeEntryKey *)&stack0xffffffd8,
                       (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)&(this->fields).lineOfFire,(MethodInfo *)0x0);
  pSVar6 = pRVar13->_pattern;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                      ((Vector3 *)&stack0xffffffd8,&(this->fields).lineOfFire,fStack_17,
                       (MethodInfo *)0x0);
  end = *pVVar11;
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  start.y = 10.0;
  start.x = _UNK_?;
  start.z = (float)pSVar6;
  color.g = (float)_UNK_?;
  color.r = (float)_UNK_?;
  color.b = (float)_UNK_?;
  color.a = _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine
            (start,end,color,10.0,(MethodInfo *)0x0);
  __return_storage_ptr__->x = (float)pSVar7;
  __return_storage_ptr__->y = fVar8;
  __return_storage_ptr__->z = fVar9;
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
    func_?();
    func_?();
    func_?();
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
  func_?();
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
                       ((Vector3 *)(auStack_3 + 4),pTVar1,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = (MeshRenderer__Array *)pVVar2->y;
    fVar5 = pVVar2->z;
    pVVar2 = BulletThrowingStar_FindTargetPos
                       ((Vector3 *)&stack0xffffffb8,this,rangeStraight,(MethodInfo *)0x0);
    pTVar1 = (this->fields).tfrm;
    auStack_3._4_4_ = pVVar2->x;
    auStack_3._8_4_ = pVVar2->y;
    fStack_6 = pVVar2->z - fVar5;
    pVVar2 = (Vector3 *)func_?();
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                       ((Quaternion *)&stack0xffffffb4,*pVVar2,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar1,*pQVar7,(MethodInfo *)0x0);
      pTVar1 = (this->fields).tfrm;
      if (pTVar1 != (Transform *)0x0) {
        value.z = fVar5;
        value.x = (float)(undefined4)uStack_4;
        value.y = (float)uStack_4._4_4_;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar1,value,(MethodInfo *)0x0);
        pPVar8 = (this->fields).pSystem;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pPVar8,(MethodInfo *)0x0);
        if (bVar9 != 0) {
          pPVar8 = (this->fields).pSystem;
          if (pPVar8 == (ParticleSystem *)0x0) goto code_?;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                    (pPVar8,(MethodInfo *)0x0);
        }
        pAVar10 = (this->fields).aSource;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pAVar10,(MethodInfo *)0x0);
        if (bVar9 != 0) {
          pAVar10 = (this->fields).aSource;
          if (pAVar10 == (AudioSource *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                    (pAVar10,1,(MethodInfo *)0x0);
          pAVar10 = (this->fields).aSource;
          if (pAVar10 == (AudioSource *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                    (pAVar10,(MethodInfo *)0x0);
        }
        pTVar1 = (this->fields).tfrm;
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                             ((Vector3 *)&stack0xffffffb8,pTVar1,(MethodInfo *)0x0);
          fVar11 = pVVar2->y;
          fVar5 = pVVar2->z;
          (this->fields).direction.x = pVVar2->x;
          (this->fields).direction.y = fVar11;
          (this->fields).direction.z = fVar5;
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                             (20.0,30.0,(MethodInfo *)0x0);
          uVar12 = (ulonglong)(uint)fVar5;
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                             (2.0,8.0,(MethodInfo *)0x0);
          (this->fields).airRotation.x = (float)(int)uVar12;
          (this->fields).airRotation.y = (float)(int)(uVar12 >> 0x20);
          (this->fields).airRotation.z = fVar5;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this,1,(MethodInfo *)0x0);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffb8,pTVar1,(MethodInfo *)0x0);
            uStack_4._0_4_ = pVVar2->x;
            uStack_4._4_4_ = (MeshRenderer__Array *)pVVar2->y;
            ppMStack_13 = (MeshRenderer **)pVVar2->z;
            this_01 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
            if (this_01 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
              UnityAction_1_UnityEngine_Vector2___ctor
                        (this_01,(Object *)this,
                         MethodInfo__BulletThrowingStar__OnStateChanged_UnityEngine__CullingGroupEvent_
                         ,(MethodInfo *)0x0);
              pCVar14 = (CullingSubscriberBase *)func_?();
              if (pCVar14 != (CullingSubscriberBase *)0x0) {
                position.z = (float)ppMStack_13;
                position.x = (float)(undefined4)uStack_4;
                position.y = (float)uStack_4._4_4_;
                CullingSubscriberBase::CullingSubscriberBase__ctor_2
                          (pCVar14,1.0,position,
                           (UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,(MethodInfo *)0x0
                          );
                (this->fields).cullingSubscriberBase = pCVar14;
                func_?();
                pCVar14 = (this->fields).cullingSubscriberBase;
                if (pCVar14 != (CullingSubscriberBase *)0x0) {
                  (pCVar14->fields)._DistanceBandIndex_k__BackingField = 5;
                  pMVar15 = (this->fields).meshRenderers;
                  uStack_4 = CONCAT44(pMVar15,(undefined4)uStack_4);
                  uStack_16 = 0;
                  if (pMVar15 != (MeshRenderer__Array *)0x0) {
                    ppMStack_13 = pMVar15->vector;
                    for (; (int)uStack_16 < (int)pMVar15->max_length; uStack_16 = uStack_16 + 1) {
                      if (pMVar15->max_length <= uStack_16) goto code_?;
                      if (*ppMStack_13 == (MeshRenderer *)0x0) goto code_?;
                      pMVar17 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                Renderer_get_materials((Renderer *)*ppMStack_13,(MethodInfo *)0x0);
                      ppMStack_18 = pMVar17->vector;
                      uVar19 = 0;
                      if (pMVar17 == (Material__Array *)0x0) goto code_?;
                      for (; (int)uVar19 < (int)pMVar17->max_length; uVar19 = uVar19 + 1) {
                        if (pMVar17->max_length <= uVar19) goto code_?;
                        this_00 = *ppMStack_18;
                        if (this_00 == (Material *)0x0) goto code_?;
                        pCVar20 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                                  Material_get_color((Color *)&stack0xffffffc4,this_00,
                                                     (MethodInfo *)0x0);
                        fStack_21 = pCVar20->r;
                        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                  ((Color *)auStack_3,this_00,(MethodInfo *)0x0);
                        fVar5 = fStack_21;
                        pCVar20 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                                  Material_get_color((Color *)&stack0xffffffa4,this_00,
                                                     (MethodInfo *)0x0);
                        value_00.g = 0.0;
                        value_00.r = fVar5;
                        value_00.b = pCVar20->b;
                        value_00.a = 1.0;
                        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                                  (this_00,value_00,(MethodInfo *)0x0);
                        ppMStack_18 = ppMStack_18 + 1;
                      }
                      ppMStack_13 = ppMStack_13 + 1;
                      pMVar15 = uStack_4._4_4_;
                    }
                    pTVar22 = (this->fields).trailRenderer;
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                      ((Object_1 *)pTVar22,(Object_1 *)0x0,(MethodInfo *)0x0);
                    if (bVar9 != 0) {
                      pTVar22 = (this->fields).trailRenderer;
                      if (pTVar22 == (TrailRenderer *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                                ((Renderer *)pTVar22,1,(MethodInfo *)0x0);
                    }
                    return;
                  }
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
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
    if (bVar3 != 0) {
      pPVar4 = (this->fields).pSystem;
      if (pPVar4 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                (pPVar4,(MethodInfo *)0x0);
      pPVar4 = (this->fields).pSystem;
      if (pPVar4 == (ParticleSystem *)0x0) goto code_?;
      bVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_IsAlive_1(pPVar4,(MethodInfo *)0x0);
      ppMStack_2 = (Material **)((uint)ppMStack_2 & 0xff);
      if (bVar3 != 0) {
        ppMStack_2 = (Material **)0x0;
      }
    }
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
                   (int)((ulonglong)iVar7 >> 0x20),(this->fields).lineOfFire.m_Origin.x);
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
                   (int)((ulonglong)iVar7 >> 0x20),(this->fields).lineOfFire.m_Origin.x);
      }
      if ((this->fields).hasHitStatic == 0) {
        (this->fields).hasHitStatic = 1;
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).coolOffStartTime = fVar9;
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar10 == (MVWorldObjectClientManager *)0x0) goto code_?;
        id = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
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
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                             ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
          (this->fields).hasHitStatic = bVar3;
        }
      }
    }
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
      pMStack_16 = (this->fields).meshRenderers;
      fStack_13 = 0.0;
      pMStack_17 = (Material__Array *)
                   (((float)ppMStack_12 - (this->fields).coolOffStartTime) /
                   (this->fields).coolOffDuration);
      if (pMStack_16 != (MeshRenderer__Array *)0x0) {
        ppMStack_12 = pMStack_16->vector;
        while( true ) {
          if ((int)pMStack_16->max_length <= (int)fStack_13) {
            return;
          }
          if (pMStack_16->max_length <= (uint)fStack_13) break;
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
                                ((Color *)&stack0xffffff50,this_00,(MethodInfo *)0x0);
            fVar9 = pCVar20->r;
            pCVar20 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                ((Color *)&stack0xffffff68,this_00,(MethodInfo *)0x0);
            VStack_21.y = pCVar20->g;
            VStack_21.x = fVar9;
            pCVar20 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                (&CStack_22,this_00,(MethodInfo *)0x0);
            VStack_21.z = pCVar20->b;
            fStack_23 = _UNK_? - (float)pMStack_17;
            value_00.g = VStack_21.y;
            value_00.r = VStack_21.x;
            value_00.b = pCVar20->b;
            value_00.a = fStack_23;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                      (this_00,value_00,(MethodInfo *)0x0);
            ppMStack_2 = ppMStack_2 + 1;
          }
          fStack_13 = (float)((int)fStack_13 + 1);
          ppMStack_12 = ppMStack_12 + 1;
        }
code_?:
        func_?();
      }
    }
    goto code_?;
  }
  uStack_24._0_4_ = (this->fields).airRotation.x;
  uStack_24._4_4_ = (this->fields).airRotation.y;
  pMStack_25 = (MeshRenderer__Array *)(this->fields).airRotation.z;
  pTVar26 = (this->fields).tfrm;
  pMStack_16 = (MeshRenderer__Array *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
  fVar9 = (this->fields).speed;
  fVar27 = (float)uStack_24 * (float)pMStack_16 * fVar9;
  fVar28 = uStack_24._4_4_ * (float)pMStack_16 * fVar9;
  pMStack_25 = (MeshRenderer__Array *)((float)pMStack_25 * (float)pMStack_16 * fVar9);
  uStack_24 = CONCAT44(fVar28,fVar27);
  if (pTVar26 == (Transform *)0x0) goto code_?;
  VVar29.y = fVar28;
  VVar29.x = fVar27;
  VVar29.z = (float)pMStack_25;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
            (pTVar26,VVar29,(MethodInfo *)0x0);
  fVar9 = (this->fields).totalDistTravelled;
  pfVar30 = &(this->fields).rangeStraight;
  if ((*pfVar30 <= fVar9 && fVar9 != *pfVar30) && ((this->fields).isFalling == 0)) {
    (this->fields).isFalling = 1;
  }
  uStack_24._0_4_ = (this->fields).direction.x;
  uStack_24._4_4_ = (this->fields).direction.y;
  pMStack_25 = (MeshRenderer__Array *)(this->fields).direction.z;
  fVar9 = (this->fields).speed;
  fVar28 = (float)uStack_24 * fVar9;
  ppMStack_2 = (Material **)(uStack_24._4_4_ * fVar9);
  VStack_18.z = (float)pMStack_25 * fVar9;
  pMStack_16 = (MeshRenderer__Array *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
  ppMStack_2 = (Material **)((float)ppMStack_2 * (float)pMStack_16);
  fVar9 = VStack_18.z * (float)pMStack_16;
  fVar28 = fVar28 * (float)pMStack_16;
  fStack_23 = fVar9;
  if ((this->fields).isFalling != 0) {
    ppMStack_12 = (MeshRenderer **)(this->fields).downwardForce;
    pMStack_16 = (MeshRenderer__Array *)(this->fields).fallRate;
    VStack_18.z = (this->fields).speed;
    pMStack_17 = (Material__Array *)VStack_18.z;
    fVar27 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar31 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    pMStack_16 = (MeshRenderer__Array *)
                 (fVar31 * (float)((uint)pMStack_16 ^
                                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                  ) * VStack_18.z * (float)pMStack_17 * fVar27 + (float)ppMStack_12)
    ;
    ppMStack_2 = (Material **)((float)ppMStack_2 + (float)pMStack_16);
    (this->fields).downwardForce = (float)pMStack_16;
  }
  pTVar26 = (this->fields).tfrm;
  if (pTVar26 == (Transform *)0x0) goto code_?;
  pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                      (&VStack_21,pTVar26,(MethodInfo *)0x0);
  uVar33 = pVVar32->x;
  uVar34 = pVVar32->y;
  CStack_22.r = fVar28 + (float)uVar33;
  ppMStack_2 = (Material **)((float)ppMStack_2 + (float)uVar34);
  pMVar35 = (MeshRenderer__Array *)(fVar9 + pVVar32->z);
  CStack_22.g = 0.0;
  CStack_22.b = 0.0;
  CStack_22.a = 0.0;
  pTVar26 = (this->fields).tfrm;
  uStack_24 = CONCAT44(ppMStack_2,CStack_22.r);
  pMStack_25 = pMVar35;
  pMStack_16 = pMVar35;
  if (pTVar26 == (Transform *)0x0) goto code_?;
  pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                      (&VStack_21,pTVar26,(MethodInfo *)0x0);
  VStack_18.x = pVVar32->x;
  VStack_18.y = pVVar32->y;
  VStack_18.z = pVVar32->z;
  fStack_23 = (float)pMStack_16 - VStack_18.z;
  VStack_21.z = (float)ppMStack_2 - VStack_18.y;
  VStack_21.y = CStack_22.r - VStack_18.x;
  CStack_22.a = fStack_23;
  puVar36 = (undefined8 *)func_?();
  CStack_22._4_8_ = *puVar36;
  CStack_22.a = *(float *)(puVar36 + 1);
  pTVar26 = (this->fields).tfrm;
  _fStack_48 = CStack_22._4_8_;
  pMStack_16 = (MeshRenderer__Array *)CStack_22.a;
  if (pTVar26 == (Transform *)0x0) goto code_?;
  pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                      (&VStack_18,pTVar26,(MethodInfo *)0x0);
  VVar29 = *pVVar32;
  fVar37 = (float10)func_?();
  fVar9 = 0.0;
  fVar28 = 0.0;
  fVar27 = 0.0;
  fVar31 = 0.0;
  fVar38 = 0.0;
  fVar39 = 0.0;
  VStack_18.z = (float)fVar37;
  direction.z = (float)pMStack_16;
  direction.x = fStack_40;
  direction.y = (float)pMStack_17;
  UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
            ((Ray *)&stack0xffffff38,VVar29,direction,(MethodInfo *)0x0);
  pMStack_16 = (MeshRenderer__Array *)(this->fields).ignoreWoIDs;
  pMStack_17 = (Material__Array *)fVar39;
  fStack_40 = fVar38;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  pVVar41 = (Void *)mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                              ((Void *)0xfffffffb,(MethodInfo *)0x0);
  ppOVar42 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                       (pVVar41,(MethodInfo *)0x0);
  uVar19 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Logic,(MethodInfo *)0x0);
  pVVar41 = (Void *)mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                              ((Void *)((uint)ppOVar42 & ~(1 << (uVar19 & 0x1f))),(MethodInfo *)0x0)
  ;
  ppOVar42 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                       (pVVar41,(MethodInfo *)0x0);
  ray.m_Origin.y = fVar28;
  ray.m_Origin.x = fVar9;
  ray.m_Origin.z = fVar27;
  ray.m_Direction.x = fVar31;
  ray.m_Direction.y = (float)_fStack_48;
  ray.m_Direction.z = SUB84(_fStack_48,4);
  bVar3 = CollisionDetection::CollisionDetection_MVHit_1
                     (ray,&(this->fields).voxelHit,VStack_18.z,(HashSet_1_System_Int32_ *)pMStack_16
                      ,(int32_t)ppOVar42,(MethodInfo *)0x0);
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
    uStack_24._0_4_ = (this->fields).voxelHit.point.x;
    uStack_24._4_4_ = (this->fields).voxelHit.point.y;
    pMVar35 = (MeshRenderer__Array *)(this->fields).voxelHit.point.z;
    (this->fields).inAir = 0;
    (this->fields).hasHit = 1;
    pMStack_25 = pMVar35;
  }
code_?:
  pTVar26 = (this->fields).tfrm;
  if (pTVar26 != (Transform *)0x0) {
    pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                        ((Vector3 *)&stack0xffffff68,pTVar26,(MethodInfo *)0x0);
    VStack_18.x = pVVar32->x;
    VStack_18.y = pVVar32->y;
    pMStack_16 = (MeshRenderer__Array *)pVVar32->z;
    CStack_22.a = CStack_22.a * _UNK_? + (float)pMStack_25;
    CStack_22.b = CStack_22.b * _UNK_? + uStack_24._4_4_;
    CStack_22.g = (float)uStack_24 + CStack_22.g * _UNK_?;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    start.z = (float)pMStack_16;
    start.x = VStack_18.x;
    start.y = VStack_18.y;
    end.z = CStack_22.a;
    end.x = CStack_22.g;
    end.y = CStack_22.b;
    color.g = _UNK_?;
    color.r = (float)_UNK_?;
    color.b = (float)_UNK_?;
    color.a = _UNK_?;
    fVar9 = _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_1
              (start,end,color,(MethodInfo *)0x0);
    pMStack_16 = (MeshRenderer__Array *)(this->fields).totalDistTravelled;
    puVar43 = &UNK_?;
    fVar37 = (float10)func_?();
    pTVar26 = (this->fields).tfrm;
    (this->fields).totalDistTravelled = (float)(fVar37 + (float10)(float)pMStack_16);
    if (pTVar26 != (Transform *)0x0) {
      value.y = (float)puVar43;
      value.x = fVar9;
      value.z = (float)pMVar35;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar26,value,(MethodInfo *)0x0);
      if ((this->fields).rangeFall + (this->fields).rangeStraight <
          (this->fields).totalDistTravelled) {
        (this->fields).inAir = 0;
      }
      pCVar14 = (this->fields).cullingSubscriberBase;
      pTVar26 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if ((pTVar26 != (Transform *)0x0) &&
         (pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_21,pTVar26,(MethodInfo *)0x0),
         pCVar14 != (CullingSubscriberBase *)0x0)) {
        CullingSubscriberBase::CullingSubscriberBase_set_Position(pCVar14,*pVVar32,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar44 = (code *)swi(3);
  (*pcVar44)();
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
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    (this->fields).ignoreWoIDs = (HashSet_1_System_Int32_ *)this_00;
    func_?(&(this->fields).ignoreWoIDs,this_00);
    (this->fields).coolOffDuration = 3.5;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

