
/* Bullet CreateBullet(PoolEnums, Vector3) */

Bullet * Assembly-CSharp.dll::Bullet::Bullet_CreateBullet
                   (PoolEnums__Enum bulletType,Vector3 pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&Bullet_MethodInfo__EnumPoolManager__Instantiate<Bullet>_PoolEnums_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if ((pPVar1 != (PrefabPool *)0x0) &&
     (this = (pPVar1->fields).enumPoolManager, this != (EnumPoolManager *)0x0)) {
    pBVar2 = (Bullet *)
             EnumPoolManager::EnumPoolManager_Instantiate
                       (this,bulletType,
                        Bullet_MethodInfo__EnumPoolManager__Instantiate<Bullet>_PoolEnums_);
    if (pBVar2 != (Bullet *)0x0) {
      (pBVar2->fields).onHit = (Bullet_OnHitDelegate *)0x0;
      func_?(&(pBVar2->fields).onHit,0);
      (pBVar2->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
      func_?(&(pBVar2->fields).onHitLocal,0);
      (pBVar2->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
      func_?(&(pBVar2->fields).onOutOfRange,0);
      this_00 = (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                (pBVar2->fields).ignoreWoIDs;
      if (this_00 != (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
                  (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pBVar2,(MethodInfo *)0x0);
        if (this_01 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (this_01,pos,(MethodInfo *)0x0);
          (pBVar2->fields).initiatedPoolType = bulletType;
          (pBVar2->fields).isFired = 0;
          (pBVar2->fields).hit = 0;
          (pBVar2->fields).hasCleaned = 0;
          (pBVar2->fields).currentAirTime = 0.0;
          (pBVar2->fields).maxAirTime = 0.0;
          return pBVar2;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pBVar2 = (Bullet *)(*pcVar3)();
  return pBVar2;
}


/* Void DoFire(Single, Single) */

void Assembly-CSharp.dll::Bullet::Bullet_DoFire
               (Bullet *this,float speed,float maxRange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Bullet__CollisionBullet);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).lineOfFire.m_Origin.x;
  uVar2 = (this->fields).lineOfFire.m_Origin.y;
  fVar3 = (this->fields).lineOfFire.m_Origin.z;
  pHVar4 = (this->fields).ignoreWoIDs;
  method_00 = TypeInfo__Bullet__CollisionBullet;
  fStack_5 = (float)uVar1;
  fStack_6 = (float)uVar2;
  pBStack_7 = (Bullet_CollisionBullet *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)pBStack_7,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (pBStack_7->fields).currentPos.x = fStack_5;
  (pBStack_7->fields).currentPos.y = fStack_6;
  (pBStack_7->fields).prevPos.x = fStack_5;
  (pBStack_7->fields).prevPos.y = fStack_6;
  (pBStack_7->fields).currentPos.z = fVar3;
  (pBStack_7->fields).prevPos.z = fVar3;
  puVar8 = (undefined8 *)func_?(&uStack_9,&stack0xffffffe0,0);
  pBVar10 = pBStack_7;
  uVar11 = *puVar8;
  fVar3 = *(float *)(puVar8 + 1);
  (pBStack_7->fields).ray.m_Direction.x = (float)(int)uVar11;
  (pBStack_7->fields).ray.m_Direction.y = (float)(int)((ulonglong)uVar11 >> 0x20);
  (pBStack_7->fields).ray.m_Direction.z = fVar3;
  (pBStack_7->fields).range = maxRange;
  (pBStack_7->fields).speed = speed;
  (pBStack_7->fields).ignoreWoIDs = pHVar4;
  func_?(&(pBStack_7->fields).ignoreWoIDs,pHVar4);
  (this->fields).collisionBullet = pBVar10;
  func_?(&(this->fields).collisionBullet,pBVar10);
  pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  (this->fields).localTransform = pTVar12;
  func_?(&(this->fields).localTransform,pTVar12);
  pTVar12 = (this->fields).localTransform;
  if (pTVar12 != (Transform *)0x0) {
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffe0,pTVar12,(MethodInfo *)0x0);
    fVar14 = pVVar13->y;
    fVar3 = pVVar13->z;
    (this->fields).startPosition.x = pVVar13->x;
    (this->fields).startPosition.y = fVar14;
    (this->fields).startPosition.z = fVar3;
    pVVar13 = Bullet_FindTargetPos((Vector3 *)&stack0xffffffe0,this,maxRange,(MethodInfo *)0x0);
    pTVar12 = (this->fields).localTransform;
    uVar15 = pVVar13->x;
    uVar16 = pVVar13->y;
    fStack_6 = pVVar13->z;
    (this->fields).targetPosition.x = (float)uVar15;
    (this->fields).targetPosition.y = (float)uVar16;
    (this->fields).targetPosition.z = fStack_6;
    fStack_6 = (this->fields).startPosition.z - fStack_6;
    uStack_9 = uVar15;
    fStack_5 = (float)uVar16;
    pVVar13 = (Vector3 *)func_?();
    pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0xffffffdc,*pVVar13,(MethodInfo *)0x0);
    if (pTVar12 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar12,*pQVar17,(MethodInfo *)0x0);
      uVar18 = (this->fields).lineOfFire.m_Origin.y;
      fStack_5 = (this->fields).lineOfFire.m_Origin.z;
      fStack_6 = 0.0;
      uStack_9 = uVar18;
      fVar19 = (float10)func_?();
      pTVar20 = (this->fields).trailRenderer;
      (this->fields).maxAirTime = (float)(fVar19 / (float10)speed);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pTVar20,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar21 != 0) {
        pTVar20 = (this->fields).trailRenderer;
        if (pTVar20 == (TrailRenderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_Clear
                  (pTVar20,(MethodInfo *)0x0);
      }
      pPVar22 = (this->fields).pSystem;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pPVar22,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar21 != 0) {
        pPVar22 = (this->fields).pSystem;
        if (pPVar22 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                  (pPVar22,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Vector3 FindTargetPos(Single) */

Vector3 * Assembly-CSharp.dll::Bullet::Bullet_FindTargetPos
                    (Vector3 *__return_storage_ptr__,Bullet *this,float maxRange,MethodInfo *method)

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


/* Void Fire(Single, Single, Ray, HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::Bullet::Bullet_Fire
               (Bullet *this,float speed,float range,Ray lineOfFire,
               HashSet_1_System_Int32_ *ignoreWoIDs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__Bullet__OnStateChanged_UnityEngine__CullingGroupEvent_);
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
  (this->fields).lineOfFire.m_Direction.y = (float)(int)lineOfFire.m_Direction._4_8_;
  (this->fields).lineOfFire.m_Direction.z =
       (float)(int)((ulonglong)lineOfFire.m_Direction._4_8_ >> 0x20);
  func_?(&(this->fields).ignoreWoIDs,ignoreWoIDs);
  (this->fields).isFired = 1;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  Bullet_DoFire(this,speed,range,(MethodInfo *)0x0);
  x = (this->fields).pooledObjectReference;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    (this->fields).pooledObjectReference = (MonoBehaviour *)this;
    func_?();
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&puStack_3,this_00,(MethodInfo *)0x0);
    fVar4 = pVVar2->z;
    this_01 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
    puVar5 = &UNK_?;
    pUVar6 = this_01;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_01,(Object *)this,
               MethodInfo__Bullet__OnStateChanged_UnityEngine__CullingGroupEvent_,(MethodInfo *)0x0)
    ;
    pCVar7 = TypeInfo__CullingSubscriberBase;
    this_02 = (CullingSubscriberBase *)func_?();
    position.y = (float)pUVar6;
    position.x = (float)puVar5;
    position.z = fVar4;
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (this_02,1.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
               (MethodInfo *)0x0);
    (pCVar7->_1).genericContainerHandle = (Il2CppMetadataGenericContainerHandle)this_02;
    func_?();
    p_Var2 = (pCVar7->_1).genericContainerHandle;
    if (p_Var2 != (Il2CppMetadataGenericContainerHandle)0x0) {
      *(undefined4 *)(p_Var2 + 0xc) = 5;
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::Bullet::Bullet_OnStateChanged
               (Bullet *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

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


/* Void ResetBullet() */

void Assembly-CSharp.dll::Bullet::Bullet_ResetBullet(Bullet *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    cRam_? = '\x01';
  }
  (this->fields).onHit = (Bullet_OnHitDelegate *)0x0;
  func_?(&(this->fields).onHit,0);
  (this->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
  func_?(&(this->fields).onHitLocal,0);
  (this->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
  func_?(&(this->fields).onOutOfRange,0);
  this_00 = (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
            (this->fields).ignoreWoIDs;
  if (this_00 != (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    (this->fields).isFired = 0;
    (this->fields).hit = 0;
    (this->fields).hasCleaned = 0;
    (this->fields).currentAirTime = 0.0;
    (this->fields).maxAirTime = 0.0;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ReturnToPool(PoolEnums) */

void Assembly-CSharp.dll::Bullet::Bullet_ReturnToPool
               (Bullet *this,PoolEnums__Enum bulletType,MethodInfo *method)

{
  Bullet_ResetBullet(this,(MethodInfo *)0x0);
  this_00 = (this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    func_?(&(this->fields).cullingSubscriberBase,0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
    if ((pPVar1 != (PrefabPool *)0x0) &&
       (this_01 = (pPVar1->fields).enumPoolManager, this_01 != (EnumPoolManager *)0x0)) {
      EnumPoolManager::EnumPoolManager_Return
                (this_01,(this->fields).pooledObjectReference,bulletType,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::Bullet::Bullet_Update(Bullet *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  iStack_1 = 3;
  if ((this->fields).hit == 0) {
    pBVar2 = (this->fields).collisionBullet;
    if (pBVar2 == (Bullet_CollisionBullet *)0x0) goto code_?;
    fVar3 = (pBVar2->fields).currentPos.y;
    iStack_1 = 0;
    fVar4 = (pBVar2->fields).currentPos.z;
    (pBVar2->fields).prevPos.x = (pBVar2->fields).currentPos.x;
    (pBVar2->fields).prevPos.y = fVar3;
    fVar3 = (pBVar2->fields).speed;
    (pBVar2->fields).prevPos.z = fVar4;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar4 = fVar4 * fVar3;
    fVar3 = fVar4 + (pBVar2->fields).distanceTraveled;
    pfVar5 = &(pBVar2->fields).range;
    (pBVar2->fields).distanceTraveled = fVar3;
    if (*pfVar5 <= fVar3 && fVar3 != *pfVar5) {
      iStack_1 = 2;
      fVar4 = fVar4 - (fVar3 - (pBVar2->fields).range);
    }
    uVar6 = (pBVar2->fields).ray.m_Direction.x;
    uVar7 = (pBVar2->fields).ray.m_Direction.y;
    fVar3 = (pBVar2->fields).ray.m_Direction.z;
    uVar8 = (pBVar2->fields).prevPos.x;
    uVar9 = (pBVar2->fields).prevPos.y;
    fVar10 = (pBVar2->fields).prevPos.z;
    fVar11 = (pBVar2->fields).prevPos.x;
    fVar12 = (pBVar2->fields).prevPos.y;
    (pBVar2->fields).currentPos.x = (float)uVar8 + (float)uVar6 * fVar4;
    (pBVar2->fields).currentPos.y = (float)uVar9 + (float)uVar7 * fVar4;
    (pBVar2->fields).currentPos.z = fVar10 + fVar3 * fVar4;
    fVar3 = (pBVar2->fields).prevPos.z;
    (pBVar2->fields).ray.m_Origin.x = fVar11;
    (pBVar2->fields).ray.m_Origin.y = fVar12;
    (pBVar2->fields).ray.m_Origin.z = fVar3;
    fVar4 = (pBVar2->fields).ray.m_Origin.x;
    fVar10 = (pBVar2->fields).ray.m_Origin.y;
    fVar11 = (pBVar2->fields).ray.m_Origin.z;
    fVar12 = (pBVar2->fields).ray.m_Direction.x;
    uVar13 = (pBVar2->fields).ray.m_Direction.y;
    uVar14 = (pBVar2->fields).ray.m_Direction.z;
    fVar3 = (pBVar2->fields).speed;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    ray.m_Origin.y = fVar10;
    ray.m_Origin.x = fVar4;
    ray.m_Origin.z = fVar11;
    ray.m_Direction.x = fVar12;
    ray.m_Direction.y = (float)uVar13;
    ray.m_Direction.z = (float)uVar14;
    bVar16 = Bullet+CollisionBullet::Bullet_CollisionBullet_DoBulletCollision
                       (ray,&(this->fields).voxelHit,fVar15 * fVar3,(pBVar2->fields).ignoreWoIDs,
                        (MethodInfo *)0x0);
    if (bVar16 != 0) {
      iStack_1 = 1;
    }
    if (iStack_1 == 1) {
      (this->fields).hit = 1;
      iStack_1 = 3;
      if ((this->fields).onHit != (Bullet_OnHitDelegate *)0x0) {
        pBVar17 = (this->fields).onHit;
        uVar18 = (this->fields).lineOfFire.m_Direction.z;
        uVar19._0_2_ = (this->fields).voxelHit.cubePos.x;
        uVar19._2_2_ = (this->fields).voxelHit.cubePos.y;
        (*(pBVar17->fields)._._.invoke_impl)
                  ((pBVar17->fields)._._.method_code,(this->fields).voxelHit.point.x,
                   (this->fields).voxelHit.point.y,(this->fields).voxelHit.point.z,
                   (this->fields).voxelHit.normal.x,(this->fields).voxelHit.normal.y,
                   (this->fields).voxelHit.normal.z,uVar19,
                   *(undefined4 *)&(this->fields).voxelHit.cubePos.z,(this->fields).voxelHit.face,
                   *(undefined4 *)&(this->fields).voxelHit.isCubeHit,(this->fields).voxelHit.woId,
                   (this->fields).voxelHit.cube,(this->fields).voxelHit.distance,
                   (this->fields).voxelHit.collider,(this->fields).voxelHit.transform,
                   *(undefined4 *)&(this->fields).voxelHit.field_0x3c,
                   (int)(this->fields).voxelHit.interactionFlags);
        (this->fields).onHit = (Bullet_OnHitDelegate *)0x0;
        func_?(&(this->fields).onHit,0);
        iStack_1 = uVar18;
      }
      if ((this->fields).onHitLocal != (Bullet_OnHitDelegate *)0x0) {
        pBVar17 = (this->fields).onHitLocal;
        uVar20 = (this->fields).lineOfFire.m_Direction.y;
        uVar21 = (this->fields).lineOfFire.m_Direction.z;
        uVar22._0_2_ = (this->fields).voxelHit.cubePos.x;
        uVar22._2_2_ = (this->fields).voxelHit.cubePos.y;
        iVar23 = (this->fields).voxelHit.interactionFlags;
        (*(pBVar17->fields)._._.invoke_impl)
                  ((pBVar17->fields)._._.method_code,(this->fields).voxelHit.point.x,
                   (this->fields).voxelHit.point.y,(this->fields).voxelHit.point.z,
                   (this->fields).voxelHit.normal.x,(this->fields).voxelHit.normal.y,
                   (this->fields).voxelHit.normal.z,uVar22,
                   *(undefined4 *)&(this->fields).voxelHit.cubePos.z,(this->fields).voxelHit.face,
                   *(undefined4 *)&(this->fields).voxelHit.isCubeHit,(this->fields).voxelHit.woId,
                   (this->fields).voxelHit.cube,(this->fields).voxelHit.distance,
                   (this->fields).voxelHit.collider,(this->fields).voxelHit.transform,
                   *(undefined4 *)&(this->fields).voxelHit.field_0x3c,(int)iVar23,
                   (int)((ulonglong)iVar23 >> 0x20),(this->fields).lineOfFire.m_Origin.x,
                   (this->fields).lineOfFire.m_Origin.y,(this->fields).lineOfFire.m_Origin.z,
                   (this->fields).lineOfFire.m_Direction.x,uVar20,uVar21,(pBVar17->fields)._._.method
                  );
        (this->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
        func_?(&(this->fields).onHitLocal,0);
      }
    }
    else if (iStack_1 == 2) {
      (this->fields).hit = 1;
      iStack_1 = 3;
      if ((this->fields).onOutOfRange != (Action_1_UnityEngine_Ray_ *)0x0) {
        uVar24 = (this->fields).lineOfFire.m_Direction.z;
        (*(((this->fields).onOutOfRange)->fields)._._.invoke_impl)();
        (this->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
        func_?(&(this->fields).onOutOfRange,0);
        iStack_1 = uVar24;
      }
    }
  }
  fVar3 = (this->fields).currentAirTime;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar4 = fVar4 + fVar3;
  (this->fields).currentAirTime = fVar4;
  if (((this->fields).hit != 0) || ((this->fields).maxAirTime < fVar4)) {
    pMVar25 = (this->fields).meshRenderers;
    uVar26 = 0;
    if (pMVar25 == (MeshRenderer__Array *)0x0) goto code_?;
    ppMVar27 = pMVar25->vector;
    for (; (int)uVar26 < (int)pMVar25->max_length; uVar26 = uVar26 + 1) {
      if (pMVar25->max_length <= uVar26) goto code_?;
      if (*ppMVar27 == (MeshRenderer *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)*ppMVar27,0,(MethodInfo *)0x0);
      ppMVar27 = ppMVar27 + 1;
    }
  }
  else {
    fVar4 = fVar4 / (this->fields).maxAirTime;
    fVar3 = (this->fields).startPosition.z;
    pTVar28 = (this->fields).localTransform;
    uVar29 = (this->fields).startPosition.x;
    uVar30 = (this->fields).startPosition.y;
    uVar31 = (this->fields).targetPosition.x;
    uVar32 = (this->fields).targetPosition.y;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    if (pTVar28 == (Transform *)0x0) goto code_?;
    value.y = ((float)uVar32 - (float)uVar30) * fVar4 + (float)uVar30;
    value.x = ((float)uVar31 - (float)uVar29) * fVar4 + (float)uVar29;
    value.z = ((this->fields).targetPosition.z - fVar3) * fVar4 + fVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar28,value,(MethodInfo *)0x0);
  }
  pCVar33 = (this->fields).cullingSubscriberBase;
  pTVar28 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if ((pTVar28 != (Transform *)0x0) &&
     (pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffe0,pTVar28,(MethodInfo *)0x0),
     pCVar33 != (CullingSubscriberBase *)0x0)) {
    CullingSubscriberBase::CullingSubscriberBase_set_Position(pCVar33,*pVVar34,(MethodInfo *)0x0);
    if (iStack_1 != 3) {
      return;
    }
    if ((this->fields).hasCleaned == 0) {
      pMVar25 = (this->fields).meshRenderers;
      uVar26 = 0;
      if (pMVar25 == (MeshRenderer__Array *)0x0) goto code_?;
      ppMVar27 = pMVar25->vector;
      for (; (int)uVar26 < (int)pMVar25->max_length; uVar26 = uVar26 + 1) {
        if (pMVar25->max_length <= uVar26) goto code_?;
        if (*ppMVar27 == (MeshRenderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppMVar27,0,(MethodInfo *)0x0);
        ppMVar27 = ppMVar27 + 1;
      }
      pPVar35 = (this->fields).pSystem;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar16 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pPVar35,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar16 != 0) {
        pPVar35 = (this->fields).pSystem;
        if (pPVar35 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (pPVar35,(MethodInfo *)0x0);
      }
      (this->fields).hasCleaned = 1;
    }
    pPVar35 = (this->fields).pSystem;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar16 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       ((Object_1 *)pPVar35,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar16 == 0) {
      pPVar35 = (this->fields).pSystem;
      if (pPVar35 == (ParticleSystem *)0x0) goto code_?;
      bVar16 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_IsAlive_1(pPVar35,(MethodInfo *)0x0);
      if (bVar16 != 0) {
        return;
      }
    }
    pEnum = (this->fields).initiatedPoolType;
    Bullet_ResetBullet(this,(MethodInfo *)0x0);
    pCVar33 = (this->fields).cullingSubscriberBase;
    if (pCVar33 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar33,(MethodInfo *)0x0);
      (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
      func_?(&(this->fields).cullingSubscriberBase,0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar36 = TypeInfo__PrefabPool->static_fields->instance;
      if ((pPVar36 != (PrefabPool *)0x0) &&
         (this_00 = (pPVar36->fields).enumPoolManager, this_00 != (EnumPoolManager *)0x0)) {
        EnumPoolManager::EnumPoolManager_Return
                  (this_00,(this->fields).pooledObjectReference,pEnum,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
  return;
}


/* Bullet() */

void Assembly-CSharp.dll::Bullet::Bullet__ctor(Bullet *this,MethodInfo *method)

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
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

