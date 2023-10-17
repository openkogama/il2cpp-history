
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
      this_00 = (HashSet_1_UnityEngine_Vector3_ *)(pBVar2->fields).ignoreWoIDs;
      if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
        HashSet_1_UnityEngine_Vector3__Clear
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
  pRVar1 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                      ((Regex_CachedCodeEntryKey *)&stack0xffffffe0,
                       (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)&(this->fields).lineOfFire,(MethodInfo *)0x0);
  uVar2 = pRVar1->_options;
  uVar3 = pRVar1->_cultureKey;
  pSVar4 = pRVar1->_pattern;
  pRVar1 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                      ((Regex_CachedCodeEntryKey *)&stack0xffffffd4,
                       (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)&(this->fields).lineOfFire,(MethodInfo *)0x0);
  pSVar5 = (String *)pRVar1->_options;
  uVar6 = pRVar1->_cultureKey;
  pSVar7 = pRVar1->_pattern;
  pHVar8 = (this->fields).ignoreWoIDs;
  value_00 = (Bullet_CollisionBullet *)func_?(TypeInfo__Bullet__CollisionBullet);
  if (value_00 != (Bullet_CollisionBullet *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value_00,ExceptionArgument__Enum_obj,in_stack_9);
    (value_00->fields).currentPos.x = (float)uVar2;
    (value_00->fields).currentPos.y = (float)uVar3;
    (value_00->fields).prevPos.x = (float)uVar2;
    (value_00->fields).prevPos.y = (float)uVar3;
    (value_00->fields).currentPos.z = (float)pSVar4;
    (value_00->fields).prevPos.z = (float)pSVar4;
    value.y = (float)uVar6;
    value.x = (float)pSVar5;
    value.z = (float)pSVar7;
    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_set_direction
              (&(value_00->fields).ray,value,(MethodInfo *)0x0);
    (value_00->fields).ignoreWoIDs = pHVar8;
    (value_00->fields).range = maxRange;
    (value_00->fields).speed = speed;
    func_?();
    (this->fields).collisionBullet = value_00;
    func_?();
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    (this->fields).localTransform = pTVar10;
    func_?(&(this->fields).localTransform);
    pTVar10 = (this->fields).localTransform;
    if (pTVar10 != (Transform *)0x0) {
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd4,pTVar10,(MethodInfo *)0x0);
      fVar12 = pVVar11->y;
      fVar13 = pVVar11->z;
      (this->fields).startPosition.x = pVVar11->x;
      (this->fields).startPosition.y = fVar12;
      (this->fields).startPosition.z = fVar13;
      pVVar11 = Bullet_FindTargetPos((Vector3 *)&stack0xffffffd4,this,maxRange,(MethodInfo *)0x0);
      pTVar10 = (this->fields).localTransform;
      fVar12 = pVVar11->y;
      fVar13 = pVVar11->z;
      (this->fields).targetPosition.x = pVVar11->x;
      (this->fields).targetPosition.y = fVar12;
      (this->fields).targetPosition.z = fVar13;
      pVVar11 = (Vector3 *)func_?();
      pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                          ((Quaternion *)&stack0xffffffd0,*pVVar11,(MethodInfo *)0x0);
      if (pTVar10 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar10,*pQVar14,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::RegularExpressions
        ::Regex+CachedCodeEntryKey,System::Object]::
        KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                  ((Regex_CachedCodeEntryKey *)&stack0xffffffd4,
                   (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)&(this->fields).lineOfFire,(MethodInfo *)0x0);
        fVar15 = (float10)func_?();
        pTVar16 = (this->fields).trailRenderer;
        (this->fields).maxAirTime = (float)(fVar15 / (float10)speed);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                           ((Object_1 *)pTVar16,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar17 != 0) {
          pTVar16 = (this->fields).trailRenderer;
          if (pTVar16 == (TrailRenderer *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_Clear
                    (pTVar16,(MethodInfo *)0x0);
        }
        pPVar18 = (this->fields).pSystem;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                           ((Object_1 *)pPVar18,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar17 != 0) {
          pPVar18 = (this->fields).pSystem;
          if (pPVar18 == (ParticleSystem *)0x0) goto code_?;
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                    (pPVar18,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
  (this->fields).lineOfFire.m_Direction.y = lineOfFire.m_Direction.y;
  (this->fields).lineOfFire.m_Direction.z = lineOfFire.m_Direction.z;
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
    uVar4 = pVVar2->x;
    this_01 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
    if (this_01 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
      puVar5 = &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
      UnityAction_1_UnityEngine_Vector2___ctor
                (this_01,(Object *)this,
                 MethodInfo__Bullet__OnStateChanged_UnityEngine__CullingGroupEvent_,
                 (MethodInfo *)0x0);
      pCVar6 = (CullingSubscriberBase *)func_?();
      if (pCVar6 != (CullingSubscriberBase *)0x0) {
        position.y = (float)puVar5;
        position.x = (float)uVar4;
        position.z = (float)&UNK_?;
        CullingSubscriberBase::CullingSubscriberBase__ctor_2
                  (pCVar6,1.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
                   (MethodInfo *)0x0);
        (this->fields).cullingSubscriberBase = pCVar6;
        func_?();
        pCVar6 = (this->fields).cullingSubscriberBase;
        if (pCVar6 != (CullingSubscriberBase *)0x0) {
          (pCVar6->fields)._DistanceBandIndex_k__BackingField = 5;
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)(this->fields).ignoreWoIDs;
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3__Clear
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
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  fStack_1 = 4.2039e-45;
  if ((this->fields).hit == 0) {
    pBVar2 = (this->fields).collisionBullet;
    if (pBVar2 == (Bullet_CollisionBullet *)0x0) goto code_?;
    fVar3 = (pBVar2->fields).currentPos.y;
    fStack_1 = 0.0;
    fVar4 = (pBVar2->fields).currentPos.z;
    (pBVar2->fields).prevPos.x = (pBVar2->fields).currentPos.x;
    (pBVar2->fields).prevPos.y = fVar3;
    fVar3 = (pBVar2->fields).speed;
    (pBVar2->fields).prevPos.z = fVar4;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    this = (Bullet *)(fVar4 * fVar3);
    fVar3 = (float)this + (pBVar2->fields).distanceTraveled;
    pfVar5 = &(pBVar2->fields).range;
    (pBVar2->fields).distanceTraveled = fVar3;
    if (*pfVar5 <= fVar3 && fVar3 != *pfVar5) {
      fStack_1 = 2.8026e-45;
      this = (Bullet *)((float)this - (fVar3 - (pBVar2->fields).range));
    }
    pRVar6 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                        ((Regex_CachedCodeEntryKey *)&stack0xffffffe0,
                         (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)&(pBVar2->fields).ray,(MethodInfo *)0x0);
    uVar7 = pRVar6->_options;
    uVar8 = pRVar6->_cultureKey;
    pSVar9 = pRVar6->_pattern;
    uVar10 = (pBVar2->fields).prevPos.x;
    uVar11 = (pBVar2->fields).prevPos.y;
    fVar3 = (pBVar2->fields).prevPos.z;
    uVar12 = (pBVar2->fields).prevPos.x;
    uVar13 = (pBVar2->fields).prevPos.y;
    value_00.y = (float)uVar13;
    value_00.x = (float)uVar12;
    (pBVar2->fields).currentPos.x = (float)uVar10 + (float)uVar7 * (float)this;
    (pBVar2->fields).currentPos.y = (float)uVar11 + (float)uVar8 * (float)this;
    (pBVar2->fields).currentPos.z = fVar3 + (float)pSVar9 * (float)this;
    value_00.z = (pBVar2->fields).prevPos.z;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+Particle::
    ParticleSystem_Particle_set_position
              ((ParticleSystem_Particle *)&(pBVar2->fields).ray,value_00,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)(pBVar2->fields).ray.m_Origin.x;
    fVar4 = (pBVar2->fields).ray.m_Origin.y;
    fVar14 = (pBVar2->fields).ray.m_Origin.z;
    fVar15 = (pBVar2->fields).ray.m_Direction.x;
    uVar16 = (pBVar2->fields).ray.m_Direction.y;
    uVar17 = (pBVar2->fields).ray.m_Direction.z;
    fVar3 = (pBVar2->fields).speed;
    fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
    ray.m_Origin.y = fVar4;
    ray.m_Origin.x = (float)method_00;
    ray.m_Origin.z = fVar14;
    ray.m_Direction.x = fVar15;
    ray.m_Direction.y = (float)uVar16;
    ray.m_Direction.z = (float)uVar17;
    bVar19 = Bullet+CollisionBullet::Bullet_CollisionBullet_DoBulletCollision
                       (ray,&(this_01->fields).voxelHit,fVar18 * fVar3,
                        (pBVar2->fields).ignoreWoIDs,(MethodInfo *)0x0);
    if (bVar19 != 0) {
      fStack_1 = 1.4013e-45;
    }
    if (fStack_1 == 1.4013e-45) {
      (this_01->fields).hit = 1;
      fStack_1 = 4.2039e-45;
      if ((this_01->fields).onHit != (Bullet_OnHitDelegate *)0x0) {
        pBVar20 = (this_01->fields).onHit;
        fStack_1 = (this_01->fields).lineOfFire.m_Origin.x;
        uVar21._0_2_ = (this_01->fields).voxelHit.cubePos.x;
        uVar21._2_2_ = (this_01->fields).voxelHit.cubePos.y;
        (*(pBVar20->fields)._._.invoke_impl)
                  ((pBVar20->fields)._._.method_code,(this_01->fields).voxelHit.point.x,
                   (this_01->fields).voxelHit.point.y,(this_01->fields).voxelHit.point.z,
                   (this_01->fields).voxelHit.normal.x,(this_01->fields).voxelHit.normal.y,
                   (this_01->fields).voxelHit.normal.z,uVar21,
                   *(undefined4 *)&(this_01->fields).voxelHit.cubePos.z,
                   (this_01->fields).voxelHit.face);
        (this_01->fields).onHit = (Bullet_OnHitDelegate *)0x0;
        func_?();
      }
      if ((this_01->fields).onHitLocal != (Bullet_OnHitDelegate *)0x0) {
        pBVar20 = (this_01->fields).onHitLocal;
        uVar22 = (this_01->fields).lineOfFire.m_Direction.y;
        uVar23 = (this_01->fields).lineOfFire.m_Direction.z;
        uVar24._0_2_ = (this_01->fields).voxelHit.cubePos.x;
        uVar24._2_2_ = (this_01->fields).voxelHit.cubePos.y;
        (*(pBVar20->fields)._._.invoke_impl)
                  ((pBVar20->fields)._._.method_code,(this_01->fields).voxelHit.point.x,
                   (this_01->fields).voxelHit.point.y,(this_01->fields).voxelHit.point.z,
                   (this_01->fields).voxelHit.normal.x,(this_01->fields).voxelHit.normal.y,
                   (this_01->fields).voxelHit.normal.z,uVar24,
                   *(undefined4 *)&(this_01->fields).voxelHit.cubePos.z,
                   (this_01->fields).voxelHit.face,
                   *(undefined4 *)&(this_01->fields).voxelHit.isCubeHit,
                   (this_01->fields).voxelHit.woId,(this_01->fields).voxelHit.cube,
                   (this_01->fields).voxelHit.distance,(this_01->fields).voxelHit.collider,
                   (this_01->fields).voxelHit.transform,
                   *(undefined4 *)&(this_01->fields).voxelHit.field_0x3c,
                   (this_01->fields).voxelHit.interactionFlags,
                   (this_01->fields).lineOfFire.m_Origin.x,(this_01->fields).lineOfFire.m_Origin.y,
                   (this_01->fields).lineOfFire.m_Origin.z,
                   (this_01->fields).lineOfFire.m_Direction.x,uVar22,uVar23,
                   (pBVar20->fields)._._.method);
        (this_01->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
        func_?(&(this_01->fields).onHitLocal,0);
      }
    }
    else if (fStack_1 == 2.8026e-45) {
      (this_01->fields).hit = 1;
      fStack_1 = 4.2039e-45;
      if ((this_01->fields).onOutOfRange != (Action_1_UnityEngine_Ray_ *)0x0) {
        fStack_1 = (this_01->fields).lineOfFire.m_Origin.x;
        (*(((this_01->fields).onOutOfRange)->fields)._._.invoke_impl)();
        (this_01->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
        func_?();
      }
    }
  }
  fVar3 = (this_01->fields).currentAirTime;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar4 = fVar4 + fVar3;
  (this_01->fields).currentAirTime = fVar4;
  if (((this_01->fields).hit != 0) || ((this_01->fields).maxAirTime < fVar4)) {
    pMVar25 = (this_01->fields).meshRenderers;
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
    fVar4 = fVar4 / (this_01->fields).maxAirTime;
    fVar3 = (this_01->fields).startPosition.z;
    pTVar28 = (this_01->fields).localTransform;
    uVar29 = (this_01->fields).startPosition.x;
    uVar30 = (this_01->fields).startPosition.y;
    uVar31 = (this_01->fields).targetPosition.x;
    uVar32 = (this_01->fields).targetPosition.y;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    if (pTVar28 == (Transform *)0x0) goto code_?;
    value.y = ((float)uVar32 - (float)uVar30) * fVar4 + (float)uVar30;
    value.x = ((float)uVar31 - (float)uVar29) * fVar4 + (float)uVar29;
    value.z = ((this_01->fields).targetPosition.z - fVar3) * fVar4 + fVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar28,value,(MethodInfo *)0x0);
  }
  pCVar33 = (this_01->fields).cullingSubscriberBase;
  pTVar28 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_01,(MethodInfo *)0x0);
  if ((pTVar28 != (Transform *)0x0) &&
     (pVVar34 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd4,pTVar28,(MethodInfo *)0x0),
     pCVar33 != (CullingSubscriberBase *)0x0)) {
    CullingSubscriberBase::CullingSubscriberBase_set_Position(pCVar33,*pVVar34,(MethodInfo *)0x0);
    if (fStack_1 != 4.2039e-45) {
      return;
    }
    if ((this_01->fields).hasCleaned == 0) {
      pMVar25 = (this_01->fields).meshRenderers;
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
      pPVar35 = (this_01->fields).pSystem;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pPVar35,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar19 != 0) {
        pPVar35 = (this_01->fields).pSystem;
        if (pPVar35 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (pPVar35,(MethodInfo *)0x0);
      }
      (this_01->fields).hasCleaned = 1;
    }
    pPVar35 = (this_01->fields).pSystem;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       ((Object_1 *)pPVar35,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar19 == 0) {
      pPVar35 = (this_01->fields).pSystem;
      if (pPVar35 == (ParticleSystem *)0x0) goto code_?;
      bVar19 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_IsAlive_1(pPVar35,(MethodInfo *)0x0);
      if (bVar19 != 0) {
        return;
      }
    }
    pEnum = (this_01->fields).initiatedPoolType;
    Bullet_ResetBullet(this_01,(MethodInfo *)0x0);
    pCVar33 = (this_01->fields).cullingSubscriberBase;
    if (pCVar33 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar33,(MethodInfo *)0x0);
      (this_01->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
      func_?(&(this_01->fields).cullingSubscriberBase,0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar36 = TypeInfo__PrefabPool->static_fields->instance;
      if ((pPVar36 != (PrefabPool *)0x0) &&
         (this_00 = (pPVar36->fields).enumPoolManager, this_00 != (EnumPoolManager *)0x0)) {
        EnumPoolManager::EnumPoolManager_Return
                  (this_00,(this_01->fields).pooledObjectReference,pEnum,(MethodInfo *)0x0);
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
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    (this->fields).ignoreWoIDs = (HashSet_1_System_Int32_ *)this_00;
    func_?(&(this->fields).ignoreWoIDs,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

