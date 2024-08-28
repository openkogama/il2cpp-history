
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
      ppBVar3 = &(pBVar2->fields).onHit;
      *ppBVar3 = (Bullet_OnHitDelegate *)0x0;
      func_?(ppBVar3,0);
      ppBVar3 = &(pBVar2->fields).onHitLocal;
      *ppBVar3 = (Bullet_OnHitDelegate *)0x0;
      func_?(ppBVar3,0);
      ppAVar4 = &(pBVar2->fields).onOutOfRange;
      *ppAVar4 = (Action_1_UnityEngine_Ray_ *)0x0;
      func_?(ppAVar4,0);
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
  pcVar5 = (code *)swi(3);
  pBVar2 = (Bullet *)(*pcVar5)();
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
  ppHVar12 = &(pBStack_7->fields).ignoreWoIDs;
  (pBStack_7->fields).range = maxRange;
  (pBStack_7->fields).speed = speed;
  *ppHVar12 = pHVar4;
  func_?(ppHVar12,pHVar4);
  ppBVar13 = &(this->fields).collisionBullet;
  *ppBVar13 = pBVar10;
  func_?(ppBVar13,pBVar10);
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  ppTVar15 = &(this->fields).localTransform;
  *ppTVar15 = pTVar14;
  func_?(ppTVar15,pTVar14);
  if (*ppTVar15 != (Transform *)0x0) {
    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffe0,*ppTVar15,(MethodInfo *)0x0);
    fVar17 = pVVar16->y;
    fVar3 = pVVar16->z;
    (this->fields).startPosition.x = pVVar16->x;
    (this->fields).startPosition.y = fVar17;
    (this->fields).startPosition.z = fVar3;
    pVVar16 = Bullet_FindTargetPos((Vector3 *)&stack0xffffffe0,this,maxRange,(MethodInfo *)0x0);
    pTVar14 = *ppTVar15;
    uVar18 = pVVar16->x;
    uVar19 = pVVar16->y;
    fStack_6 = pVVar16->z;
    (this->fields).targetPosition.x = (float)uVar18;
    (this->fields).targetPosition.y = (float)uVar19;
    (this->fields).targetPosition.z = fStack_6;
    fStack_6 = (this->fields).startPosition.z - fStack_6;
    uStack_9 = uVar18;
    fStack_5 = (float)uVar19;
    pVVar16 = (Vector3 *)func_?();
    pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0xffffffdc,*pVVar16,(MethodInfo *)0x0);
    if (pTVar14 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar14,*pQVar20,(MethodInfo *)0x0);
      uVar21 = (this->fields).lineOfFire.m_Origin.y;
      fStack_5 = (this->fields).lineOfFire.m_Origin.z;
      fStack_6 = 0.0;
      uStack_9 = uVar21;
      fVar22 = (float10)func_?();
      pTVar23 = (this->fields).trailRenderer;
      (this->fields).maxAirTime = (float)(fVar22 / (float10)speed);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar24 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pTVar23,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar24 != 0) {
        pTVar23 = (this->fields).trailRenderer;
        if (pTVar23 == (TrailRenderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_Clear
                  (pTVar23,(MethodInfo *)0x0);
      }
      pPVar25 = (this->fields).pSystem;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar24 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pPVar25,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar24 != 0) {
        pPVar25 = (this->fields).pSystem;
        if (pPVar25 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                  (pPVar25,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
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
  ppHVar1 = &(this->fields).ignoreWoIDs;
  (this->fields).lineOfFire.m_Origin.x = lineOfFire.m_Origin.x;
  (this->fields).lineOfFire.m_Origin.y = lineOfFire.m_Origin.y;
  (this->fields).lineOfFire.m_Origin.z = lineOfFire.m_Origin.z;
  (this->fields).lineOfFire.m_Direction.x = lineOfFire.m_Direction.x;
  (this->fields).lineOfFire.m_Direction.y = (float)(int)lineOfFire.m_Direction._4_8_;
  (this->fields).lineOfFire.m_Direction.z =
       (float)(int)((ulonglong)lineOfFire.m_Direction._4_8_ >> 0x20);
  *ppHVar1 = ignoreWoIDs;
  func_?(ppHVar1,ignoreWoIDs);
  (this->fields).isFired = 1;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  Bullet_DoFire(this,speed,range,(MethodInfo *)0x0);
  ppMVar2 = &(this->fields).pooledObjectReference;
  x = *ppMVar2;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    *ppMVar2 = (MonoBehaviour *)this;
    func_?();
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&puStack_5,this_00,(MethodInfo *)0x0);
    fVar6 = pVVar4->z;
    this_01 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
    puVar7 = &UNK_?;
    pUVar8 = this_01;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_01,(Object *)this,
               MethodInfo__Bullet__OnStateChanged_UnityEngine__CullingGroupEvent_,(MethodInfo *)0x0)
    ;
    pCVar9 = TypeInfo__CullingSubscriberBase;
    this_02 = (CullingSubscriberBase *)func_?();
    position.y = (float)pUVar8;
    position.x = (float)puVar7;
    position.z = fVar6;
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (this_02,1.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
               (MethodInfo *)0x0);
    pp_Var9 = &(pCVar9->_1).genericContainerHandle;
    *pp_Var9 = (Il2CppMetadataGenericContainerHandle)this_02;
    func_?();
    p_Var4 = *pp_Var9;
    if (p_Var4 != (Il2CppMetadataGenericContainerHandle)0x0) {
      *(undefined4 *)(p_Var4 + 0xc) = 5;
      return;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  ppBVar1 = &(this->fields).onHit;
  *ppBVar1 = (Bullet_OnHitDelegate *)0x0;
  func_?(ppBVar1,0);
  ppBVar1 = &(this->fields).onHitLocal;
  *ppBVar1 = (Bullet_OnHitDelegate *)0x0;
  func_?(ppBVar1,0);
  ppAVar2 = &(this->fields).onOutOfRange;
  *ppAVar2 = (Action_1_UnityEngine_Ray_ *)0x0;
  func_?(ppAVar2,0);
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ReturnToPool(PoolEnums) */

void Assembly-CSharp.dll::Bullet::Bullet_ReturnToPool
               (Bullet *this,PoolEnums__Enum bulletType,MethodInfo *method)

{
  Bullet_ResetBullet(this,(MethodInfo *)0x0);
  this_00 = (this->fields).cullingSubscriberBase;
  ppCVar1 = &(this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    *ppCVar1 = (CullingSubscriberBase *)0x0;
    func_?(ppCVar1,0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if ((pPVar2 != (PrefabPool *)0x0) &&
       (this_01 = (pPVar2->fields).enumPoolManager, this_01 != (EnumPoolManager *)0x0)) {
      EnumPoolManager::EnumPoolManager_Return
                (this_01,(this->fields).pooledObjectReference,bulletType,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    voxelHit = &(this->fields).voxelHit;
    if (pBVar2 == (Bullet_CollisionBullet *)0x0) goto code_?;
    fVar3 = (pBVar2->fields).currentPos.y;
    fVar4 = (pBVar2->fields).currentPos.z;
    (pBVar2->fields).prevPos.x = (pBVar2->fields).currentPos.x;
    (pBVar2->fields).prevPos.y = fVar3;
    fVar3 = (pBVar2->fields).speed;
    iStack_1 = 0;
    (pBVar2->fields).prevPos.z = fVar4;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar4 = fVar4 * fVar3;
    fVar3 = (pBVar2->fields).range;
    fVar5 = (pBVar2->fields).distanceTraveled + fVar4;
    (pBVar2->fields).distanceTraveled = fVar5;
    if (fVar3 < fVar5) {
      iStack_1 = 2;
      fVar4 = fVar4 - (fVar5 - fVar3);
    }
    uVar6 = (pBVar2->fields).ray.m_Direction.x;
    uVar7 = (pBVar2->fields).ray.m_Direction.y;
    fVar3 = (pBVar2->fields).ray.m_Direction.z;
    uVar8 = (pBVar2->fields).prevPos.x;
    uVar9 = (pBVar2->fields).prevPos.y;
    fVar5 = (pBVar2->fields).prevPos.z;
    fVar10 = (pBVar2->fields).prevPos.x;
    fVar11 = (pBVar2->fields).prevPos.y;
    (pBVar2->fields).currentPos.x = (float)uVar8 + (float)uVar6 * fVar4;
    (pBVar2->fields).currentPos.y = (float)uVar9 + (float)uVar7 * fVar4;
    (pBVar2->fields).currentPos.z = fVar5 + fVar3 * fVar4;
    fVar3 = (pBVar2->fields).prevPos.z;
    (pBVar2->fields).ray.m_Origin.x = fVar10;
    (pBVar2->fields).ray.m_Origin.y = fVar11;
    (pBVar2->fields).ray.m_Origin.z = fVar3;
    fVar4 = (pBVar2->fields).ray.m_Origin.x;
    fVar5 = (pBVar2->fields).ray.m_Origin.y;
    fVar10 = (pBVar2->fields).ray.m_Origin.z;
    fVar11 = (pBVar2->fields).ray.m_Direction.x;
    uVar12 = (pBVar2->fields).ray.m_Direction.y;
    uVar13 = (pBVar2->fields).ray.m_Direction.z;
    fVar3 = (pBVar2->fields).speed;
    fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    ray.m_Origin.y = fVar5;
    ray.m_Origin.x = fVar4;
    ray.m_Origin.z = fVar10;
    ray.m_Direction.x = fVar11;
    ray.m_Direction.y = (float)uVar12;
    ray.m_Direction.z = (float)uVar13;
    bVar15 = Bullet+CollisionBullet::Bullet_CollisionBullet_DoBulletCollision
                       (ray,voxelHit,fVar14 * fVar3,(pBVar2->fields).ignoreWoIDs,(MethodInfo *)0x0)
    ;
    if (bVar15 == 0) {
      if (iStack_1 == 2) {
        pAVar16 = (this->fields).onOutOfRange;
        ppAVar17 = &(this->fields).onOutOfRange;
        (this->fields).hit = 1;
        iStack_1 = 3;
        if (pAVar16 != (Action_1_UnityEngine_Ray_ *)0x0) {
          (*(pAVar16->fields)._._.invoke_impl)();
          *ppAVar17 = (Action_1_UnityEngine_Ray_ *)0x0;
          func_?(ppAVar17,0);
        }
      }
    }
    else {
      pBVar18 = (this->fields).onHit;
      ppBVar19 = &(this->fields).onHit;
      (this->fields).hit = 1;
      iStack_1 = 3;
      if (pBVar18 != (Bullet_OnHitDelegate *)0x0) {
        uVar20._0_2_ = (this->fields).voxelHit.cubePos.x;
        uVar20._2_2_ = (this->fields).voxelHit.cubePos.y;
        (*(pBVar18->fields)._._.invoke_impl)
                  ((pBVar18->fields)._._.method_code,(voxelHit->point).x,
                   (this->fields).voxelHit.point.y,(this->fields).voxelHit.point.z,
                   (this->fields).voxelHit.normal.x,(this->fields).voxelHit.normal.y,
                   (this->fields).voxelHit.normal.z,uVar20,
                   *(undefined4 *)&(this->fields).voxelHit.cubePos.z,(this->fields).voxelHit.face,
                   *(undefined4 *)&(this->fields).voxelHit.isCubeHit,(this->fields).voxelHit.woId,
                   (this->fields).voxelHit.cube,(this->fields).voxelHit.distance,
                   (this->fields).voxelHit.collider,(this->fields).voxelHit.transform,
                   *(undefined4 *)&(this->fields).voxelHit.field_0x3c,
                   (int)(this->fields).voxelHit.interactionFlags);
        *ppBVar19 = (Bullet_OnHitDelegate *)0x0;
        func_?(ppBVar19,0);
      }
      pBVar18 = (this->fields).onHitLocal;
      ppBVar19 = &(this->fields).onHitLocal;
      if (pBVar18 != (Bullet_OnHitDelegate *)0x0) {
        uVar21 = (this->fields).lineOfFire.m_Direction.y;
        uVar22 = (this->fields).lineOfFire.m_Direction.z;
        uVar23._0_2_ = (this->fields).voxelHit.cubePos.x;
        uVar23._2_2_ = (this->fields).voxelHit.cubePos.y;
        iVar24 = (this->fields).voxelHit.interactionFlags;
        (*(pBVar18->fields)._._.invoke_impl)
                  ((pBVar18->fields)._._.method_code,(voxelHit->point).x,
                   (this->fields).voxelHit.point.y,(this->fields).voxelHit.point.z,
                   (this->fields).voxelHit.normal.x,(this->fields).voxelHit.normal.y,
                   (this->fields).voxelHit.normal.z,uVar23,
                   *(undefined4 *)&(this->fields).voxelHit.cubePos.z,(this->fields).voxelHit.face,
                   *(undefined4 *)&(this->fields).voxelHit.isCubeHit,(this->fields).voxelHit.woId,
                   (this->fields).voxelHit.cube,(this->fields).voxelHit.distance,
                   (this->fields).voxelHit.collider,(this->fields).voxelHit.transform,
                   *(undefined4 *)&(this->fields).voxelHit.field_0x3c,(int)iVar24,
                   (int)((ulonglong)iVar24 >> 0x20),(this->fields).lineOfFire.m_Origin.x,
                   (this->fields).lineOfFire.m_Origin.y,(this->fields).lineOfFire.m_Origin.z,
                   (this->fields).lineOfFire.m_Direction.x,uVar21,uVar22,(pBVar18->fields)._._.method
                  );
        *ppBVar19 = (Bullet_OnHitDelegate *)0x0;
        func_?(ppBVar19,0);
      }
    }
  }
  fVar3 = (this->fields).currentAirTime;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar4 = fVar4 + fVar3;
  (this->fields).currentAirTime = fVar4;
  if (((this->fields).hit != 0) || (fVar3 = (this->fields).maxAirTime, fVar3 < fVar4)) {
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
    uVar28 = (this->fields).startPosition.x;
    uVar29 = (this->fields).startPosition.y;
    fVar5 = (this->fields).startPosition.z;
    fVar4 = fVar4 / fVar3;
    pTVar30 = (this->fields).localTransform;
    uVar31 = (this->fields).targetPosition.x;
    uVar32 = (this->fields).targetPosition.y;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    if (pTVar30 == (Transform *)0x0) goto code_?;
    value.y = ((float)uVar32 - (float)uVar29) * fVar4 + (float)uVar29;
    value.x = ((float)uVar31 - (float)uVar28) * fVar4 + (float)uVar28;
    value.z = ((this->fields).targetPosition.z - fVar5) * fVar4 + fVar5;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar30,value,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).cullingSubscriberBase;
  pTVar30 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if ((pTVar30 != (Transform *)0x0) &&
     (pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd0,pTVar30,(MethodInfo *)0x0),
     this_00 != (CullingSubscriberBase *)0x0)) {
    CullingSubscriberBase::CullingSubscriberBase_set_Position(this_00,*pVVar33,(MethodInfo *)0x0);
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
      pPVar34 = (this->fields).pSystem;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pPVar34,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        pPVar34 = (this->fields).pSystem;
        if (pPVar34 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (pPVar34,(MethodInfo *)0x0);
      }
      (this->fields).hasCleaned = 1;
    }
    ppCVar35 = &(this->fields).cullingSubscriberBase;
    pPVar34 = (this->fields).pSystem;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       ((Object_1 *)pPVar34,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar15 == 0) {
      pPVar34 = (this->fields).pSystem;
      if (pPVar34 == (ParticleSystem *)0x0) goto code_?;
      bVar15 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_IsAlive_1(pPVar34,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        return;
      }
    }
    pEnum = (this->fields).initiatedPoolType;
    Bullet_ResetBullet(this,(MethodInfo *)0x0);
    if (*ppCVar35 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy(*ppCVar35,(MethodInfo *)0x0);
      *ppCVar35 = (CullingSubscriberBase *)0x0;
      func_?(ppCVar35,0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar36 = TypeInfo__PrefabPool->static_fields->instance;
      if ((pPVar36 != (PrefabPool *)0x0) &&
         (this_01 = (pPVar36->fields).enumPoolManager, this_01 != (EnumPoolManager *)0x0)) {
        EnumPoolManager::EnumPoolManager_Return
                  (this_01,(this->fields).pooledObjectReference,pEnum,(MethodInfo *)0x0);
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
  ppHVar1 = &(this->fields).ignoreWoIDs;
  *ppHVar1 = this_00;
  func_?(ppHVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

