
/* Ray CalculateLineOfFireFromMuzzle(Single) */

Ray * Assembly-CSharp.dll::Bullet::Bullet_CalculateLineOfFireFromMuzzle
                (Ray *__return_storage_ptr__,Bullet *this,float maxRange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  func_?(auStack_1,0,0x48);
  p_Var15 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_AsRef_1((Void *)0xfffffffb,(MethodInfo *)0x0);
  p_Var15 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_AsRef_1((Void *)p_Var15,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Logic,(MethodInfo *)0x0);
  p_Var15 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_AsRef_1
                      ((Void *)((uint)p_Var15 & ~(1 << (uVar2 & 0x1f))),(MethodInfo *)0x0);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_4,this_01,(MethodInfo *)0x0);
      uStack_5._0_4_ = pVVar3->x;
      uStack_5._4_4_ = pVVar3->y;
      fStack_6 = pVVar3->z;
      uVar7 = (this->fields).lineOfFire.m_Direction.x;
      uVar8 = (this->fields).lineOfFire.m_Direction.y;
      fVar9 = (this->fields).handToMuzzleDist;
      VStack_4.x = (float)(undefined4)uStack_5 - (float)uVar7 * fVar9;
      VStack_4.y = (float)uStack_5._4_4_ - (float)uVar8 * fVar9;
      VStack_4.z = fStack_6 - (this->fields).lineOfFire.m_Direction.z * fVar9;
      fVar9 = (this->fields).lineOfFire.m_Origin.x;
      fStack_10 = (this->fields).lineOfFire.m_Origin.y;
      fStack_11 = (this->fields).lineOfFire.m_Origin.z;
      puStack_12 = (undefined *)(this->fields).lineOfFire.m_Direction.x;
      ignoreWoIds = (this->fields).ignoreWoIDs;
      uVar13 = (this->fields).lineOfFire.m_Direction.y;
      uVar14 = (this->fields).lineOfFire.m_Direction.z;
      fStack_15 = VStack_4.z;
      fStack_16 = VStack_4.y;
      fStack_17 = VStack_4.x;
      fStack_18 = (float)uVar7;
      fStack_19 = (float)uVar13;
      fStack_20 = (float)uVar14;
      p_Var15 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                UnsafeUtility_AsRef_1((Void *)p_Var15,(MethodInfo *)0x0);
      ray.m_Origin.y = fStack_10;
      ray.m_Origin.x = fVar9;
      ray.m_Origin.z = fStack_11;
      ray.m_Direction.x = (float)puStack_12;
      ray.m_Direction.y = fStack_19;
      ray.m_Direction.z = fStack_20;
      bVar21 = CollisionDetection::CollisionDetection_MVHit_1
                         (ray,(VoxelHit *)auStack_1,maxRange,ignoreWoIds,(int32_t)p_Var15,
                          (MethodInfo *)0x0);
      if (bVar21 == 0) {
        uVar22 = (this->fields).lineOfFire.m_Origin.x;
        uVar23 = (this->fields).lineOfFire.m_Origin.y;
        uVar24 = (this->fields).lineOfFire.m_Direction.x;
        uVar25 = (this->fields).lineOfFire.m_Direction.y;
        fStack_18 = (float)uVar22 + (float)uVar24 * maxRange;
        fStack_19 = (float)uVar23 + (float)uVar25 * maxRange;
        puVar26 = (undefined *)
                  ((this->fields).lineOfFire.m_Origin.z +
                  (this->fields).lineOfFire.m_Direction.z * maxRange);
      }
      else {
        fStack_18 = auStack_1._0_4_;
        fStack_19 = auStack_1._4_4_;
        puVar26 = puStack_27;
      }
      fStack_6 = (float)puVar26 - fStack_15;
      VStack_4.y = (float)&uStack_5;
      VStack_4.z = 0.0;
      VStack_4.x = (float)&fStack_10;
      uStack_5 = CONCAT44(fStack_19 - fStack_16,fStack_18 - fStack_17);
      fStack_20 = fStack_6;
      puVar28 = (undefined8 *)func_?();
      uStack_5 = *puVar28;
      fStack_20 = *(float *)(puVar28 + 1);
      fStack_18 = (float)uStack_5;
      fStack_19 = (float)((ulonglong)uStack_5 >> 0x20);
      uVar29 = (this->fields).lineOfFire.m_Direction.x;
      uVar30 = (this->fields).lineOfFire.m_Direction.y;
      fVar9 = (this->fields).lineOfFire.m_Direction.z;
      fStack_6 = fStack_20;
      if ((float)uVar30 * fStack_19 + (float)uVar29 * fStack_18 + fVar9 * fStack_20 < _UNK_?) {
        uStack_5._0_4_ = (this->fields).lineOfFire.m_Direction.x;
        uStack_5._4_4_ = (this->fields).lineOfFire.m_Direction.y;
        fStack_6 = fVar9;
      }
      VStack_4.z = 0.0;
      (__return_storage_ptr__->m_Direction).x = 0.0;
      (__return_storage_ptr__->m_Direction).y = 0.0;
      (__return_storage_ptr__->m_Direction).z = 0.0;
      (__return_storage_ptr__->m_Origin).x = VStack_4.x;
      (__return_storage_ptr__->m_Origin).y = VStack_4.y;
      (__return_storage_ptr__->m_Origin).z = 0.0;
      VStack_4.y = (float)&uStack_5;
      VStack_4.x = (float)&fStack_10;
      puVar28 = (undefined8 *)func_?();
      uVar31 = *puVar28;
      fVar9 = *(float *)(puVar28 + 1);
      (__return_storage_ptr__->m_Direction).x = (float)(int)uVar31;
      (__return_storage_ptr__->m_Direction).y = (float)(int)((ulonglong)uVar31 >> 0x20);
      (__return_storage_ptr__->m_Direction).z = fVar9;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar32 = (code *)swi(3);
  pRVar33 = (Ray *)(*pcVar32)();
  return pRVar33;
}


/* Bullet CreateBullet(PoolEnums, Vector3, Single) */

Bullet * Assembly-CSharp.dll::Bullet::Bullet_CreateBullet
                   (PoolEnums__Enum bulletType,Vector3 pos,float handToMuzzleDist,MethodInfo *method
                   )

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
          (pBVar2->fields).isFired = 0;
          (pBVar2->fields).hit = 0;
          (pBVar2->fields).hasCleaned = 0;
          (pBVar2->fields).currentAirTime = 0.0;
          (pBVar2->fields).targetAirTime = 0.0;
          (pBVar2->fields).handToMuzzleDist = handToMuzzleDist;
          (pBVar2->fields).initiatedPoolType = bulletType;
          if (bulletType != PoolEnums__Enum_BazookaBullet) {
            (pBVar2->fields).maxAirTime = 20.0;
          }
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


/* Void DoFire(Single, Single, Boolean) */

void Assembly-CSharp.dll::Bullet::Bullet_DoFire
               (Bullet *this,float speed,float maxRange,bool thirdPersonWeapon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Bullet__CollisionBullet);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (thirdPersonWeapon != 0) {
    pRVar1 = Bullet_CalculateLineOfFireFromMuzzle
                        ((Ray *)&stack0xffffffd8,this,maxRange,(MethodInfo *)0x0);
    fVar2 = (pRVar1->m_Origin).y;
    fVar3 = (pRVar1->m_Origin).z;
    fVar4 = (pRVar1->m_Direction).x;
    fVar5 = (pRVar1->m_Direction).y;
    fVar6 = (pRVar1->m_Direction).z;
    (this->fields).lineOfFire.m_Origin.x = (pRVar1->m_Origin).x;
    (this->fields).lineOfFire.m_Origin.y = fVar2;
    (this->fields).lineOfFire.m_Origin.z = fVar3;
    (this->fields).lineOfFire.m_Direction.x = fVar4;
    (this->fields).lineOfFire.m_Direction.y = fVar5;
    (this->fields).lineOfFire.m_Direction.z = fVar6;
  }
  uVar7 = (this->fields).lineOfFire.m_Origin.x;
  uVar8 = (this->fields).lineOfFire.m_Origin.y;
  fVar2 = (this->fields).lineOfFire.m_Origin.z;
  pHVar9 = (this->fields).ignoreWoIDs;
  method_00 = TypeInfo__Bullet__CollisionBullet;
  uStack_10 = uVar7;
  fStack_11 = (float)uVar8;
  value = (Bullet_CollisionBullet *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (value->fields).currentPos.x = (float)uStack_10;
  (value->fields).currentPos.y = fStack_11;
  (value->fields).prevPos.x = (float)uStack_10;
  (value->fields).prevPos.y = fStack_11;
  (value->fields).currentPos.z = fVar2;
  (value->fields).prevPos.z = fVar2;
  puVar12 = (undefined8 *)func_?(&uStack_13,&stack0xffffffe4,0);
  uVar14 = *puVar12;
  fVar2 = *(float *)(puVar12 + 1);
  (value->fields).ray.m_Direction.x = (float)(int)uVar14;
  (value->fields).ray.m_Direction.y = (float)(int)((ulonglong)uVar14 >> 0x20);
  (value->fields).ray.m_Direction.z = fVar2;
  (value->fields).range = maxRange;
  (value->fields).speed = speed;
  (value->fields).ignoreWoIDs = pHVar9;
  func_?(&(value->fields).ignoreWoIDs,pHVar9);
  (this->fields).collisionBullet = value;
  func_?(&(this->fields).collisionBullet,value);
  pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  (this->fields).localTransform = pTVar15;
  func_?(&(this->fields).localTransform,pTVar15);
  pTVar15 = (this->fields).localTransform;
  if (pTVar15 != (Transform *)0x0) {
    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffe4,pTVar15,(MethodInfo *)0x0);
    fVar3 = pVVar16->y;
    fVar2 = pVVar16->z;
    (this->fields).startPosition.x = pVVar16->x;
    (this->fields).startPosition.y = fVar3;
    (this->fields).startPosition.z = fVar2;
    pVVar16 = Bullet_FindTargetPos((Vector3 *)&stack0xffffffe4,this,maxRange,(MethodInfo *)0x0);
    pTVar15 = (this->fields).localTransform;
    uVar17 = pVVar16->x;
    uVar18 = pVVar16->y;
    fStack_11 = pVVar16->z;
    (this->fields).targetPosition.x = (float)uVar17;
    (this->fields).targetPosition.y = (float)uVar18;
    (this->fields).targetPosition.z = fStack_11;
    fStack_11 = (this->fields).startPosition.z - fStack_11;
    uStack_13 = uVar17;
    uStack_10 = uVar18;
    pVVar16 = (Vector3 *)func_?();
    pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0xffffffe0,*pVVar16,(MethodInfo *)0x0);
    if (pTVar15 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar15,*pQVar19,(MethodInfo *)0x0);
      uStack_13 = 0;
      fVar20 = (float10)func_?();
      pTVar21 = (this->fields).trailRenderer;
      (this->fields).targetAirTime = (float)(fVar20 / (float10)speed);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pTVar21,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar22 != 0) {
        pTVar21 = (this->fields).trailRenderer;
        if (pTVar21 == (TrailRenderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_Clear
                  (pTVar21,(MethodInfo *)0x0);
      }
      pPVar23 = (this->fields).pSystem;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pPVar23,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar22 != 0) {
        pPVar23 = (this->fields).pSystem;
        if (pPVar23 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                  (pPVar23,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
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
  if (bVar8 != 0) {
    start = (this->fields).lineOfFire.m_Origin;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)&stack0xffffffd8,&(this->fields).lineOfFire,in_stack_10,
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
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd8,this_01,(MethodInfo *)0x0);
      uVar11 = pVVar9->x;
      uVar12 = pVVar9->y;
      fVar6 = pVVar9->z;
      uVar13 = (this->fields).lineOfFire.m_Direction.x;
      uVar14 = (this->fields).lineOfFire.m_Direction.y;
      fVar7 = (this->fields).lineOfFire.m_Direction.z;
      __return_storage_ptr__->x = (float)uVar11 + (float)uVar13 * maxRange;
      __return_storage_ptr__->y = (float)uVar12 + (float)uVar14 * maxRange;
      __return_storage_ptr__->z = fVar6 + fVar7 * maxRange;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar15)();
  return pVVar9;
}


/* Void Fire(Single, Single, Ray, HashSet`1[System.Int32], Boolean) */

void Assembly-CSharp.dll::Bullet::Bullet_Fire
               (Bullet *this,float speed,float range,Ray lineOfFire,
               HashSet_1_System_Int32_ *ignoreWoIDs,bool thirdPersonWeapon,MethodInfo *method)

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
  (this->fields).isFired = 1;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  (this->fields).lineOfFire.m_Origin.x = lineOfFire.m_Origin.x;
  (this->fields).lineOfFire.m_Origin.y = lineOfFire.m_Origin.y;
  (this->fields).lineOfFire.m_Origin.z = lineOfFire.m_Origin.z;
  (this->fields).lineOfFire.m_Direction.x = lineOfFire.m_Direction.x;
  (this->fields).ignoreWoIDs = ignoreWoIDs;
  (this->fields).lineOfFire.m_Direction.y = (float)(int)lineOfFire.m_Direction._4_8_;
  (this->fields).lineOfFire.m_Direction.z =
       (float)(int)((ulonglong)lineOfFire.m_Direction._4_8_ >> 0x20);
  func_?(&(this->fields).ignoreWoIDs,ignoreWoIDs);
  Bullet_DoFire(this,speed,range,thirdPersonWeapon,(MethodInfo *)0x0);
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
                       ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    fVar4 = pVVar2->z;
    this_01 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
    uVar5 = CONCAT44(&UNK_?,uVar3);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_01,(Object *)this,
               MethodInfo__Bullet__OnStateChanged_UnityEngine__CullingGroupEvent_,(MethodInfo *)0x0)
    ;
    this_02 = (CullingSubscriberBase *)func_?();
    position.z = fVar4;
    position.x = (float)(int)uVar5;
    position.y = (float)(int)((ulonglong)uVar5 >> 0x20);
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (this_02,1.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
               (MethodInfo *)0x0);
    _UNK_? = this_02;
    func_?();
    if (_UNK_? != (CullingSubscriberBase *)0x0) {
      (_UNK_?->fields)._DistanceBandIndex_k__BackingField = 5;
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    uVar3 = 0;
    pMVar4 = (this->fields).meshRenderers;
    if (pMVar4 != (MeshRenderer__Array *)0x0) {
      ppMVar5 = pMVar4->vector;
      for (; (int)uVar3 < (int)pMVar4->max_length; uVar3 = uVar3 + 1) {
        if (pMVar4->max_length <= uVar3) goto code_?;
        if (*ppMVar5 == (MeshRenderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppMVar5,value,(MethodInfo *)0x0);
        ppMVar5 = ppMVar5 + 1;
      }
      uVar3 = 0;
      pSVar6 = (this->fields).spriteRenderers;
      if (pSVar6 != (SpriteRenderer__Array *)0x0) {
        ppSVar7 = pSVar6->vector;
        for (; (int)uVar3 < (int)pSVar6->max_length; uVar3 = uVar3 + 1) {
          if (pSVar6->max_length <= uVar3) goto code_?;
          if (*ppSVar7 == (SpriteRenderer *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                    ((Renderer *)*ppSVar7,value,(MethodInfo *)0x0);
          ppSVar7 = ppSVar7 + 1;
        }
        pTVar8 = (this->fields).trailRenderer;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pTVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar9 != 0) {
          pTVar8 = (this->fields).trailRenderer;
          if (pTVar8 == (TrailRenderer *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                    ((Renderer *)pTVar8,value,(MethodInfo *)0x0);
        }
        pPVar10 = (this->fields).pSystem;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pPVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar9 != 0) {
          pPVar10 = (this->fields).pSystem;
          if (pPVar10 == (ParticleSystem *)0x0) goto code_?;
          PStack_1.m_ParticleSystem =
               (ParticleSystem *)
               UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_get_collision(pPVar10,(MethodInfo *)0x0);
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
          ParticleSystem_EmissionModule_set_enabled_Injected(&PStack_1,value,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
    (this->fields).targetAirTime = 0.0;
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


/* Void SetBulletTrail(Color, Color, Single, Single) */

void Assembly-CSharp.dll::Bullet::Bullet_SetBulletTrail
               (Bullet *this,Color bulletColor,Color trailColor,float speed,float size,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GradientAlphaKey);
    func_?(&TypeInfo__UnityEngine__GradientColorKey);
    func_?(&TypeInfo__UnityEngine__Gradient);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral__TintColor);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).trailRenderer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                     ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  this_02 = (Gradient *)func_?(TypeInfo__UnityEngine__Gradient);
  UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient__ctor(this_02,(MethodInfo *)0x0);
  value_01 = (GradientAlphaKey__Array *)func_?(TypeInfo__UnityEngine__GradientAlphaKey,3);
  mscorlib.dll::System::ValueTuple`2[Single,Single]::ValueTuple_2_Single_Single___ctor
            ((ValueTuple_2_Single_Single_ *)&stack0xffffffe8,bulletColor.a,0.0,(MethodInfo *)0x0);
  if (value_01 == (GradientAlphaKey__Array *)0x0) goto code_?;
  if (value_01->max_length != 0) {
    value_01->vector[0].alpha = 0.0;
    value_01->vector[0].time = 0.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
    mscorlib.dll::System::ValueTuple`2[Single,Single]::ValueTuple_2_Single_Single___ctor
              ((ValueTuple_2_Single_Single_ *)&stack0xffffffe0,trailColor.a,0.1,(MethodInfo *)0x0);
    if (1 < value_01->max_length) {
      value_01->vector[1].alpha = fVar3;
      value_01->vector[1].time = fVar4;
      fVar3 = 0.0;
      fVar4 = 0.0;
      mscorlib.dll::System::ValueTuple`2[Single,Single]::ValueTuple_2_Single_Single___ctor
                ((ValueTuple_2_Single_Single_ *)&stack0xffffffd8,0.0,1.0,(MethodInfo *)0x0);
      if (2 < value_01->max_length) {
        value_01->vector[2].alpha = fVar3;
        value_01->vector[2].time = fVar4;
        if (this_02 == (Gradient *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_alphaKeys
                  (this_02,value_01,(MethodInfo *)0x0);
        value_02 = (GradientColorKey__Array *)func_?();
        fVar5 = 0.0;
        fVar3 = 0.0;
        fVar4 = 0.0;
        fVar6 = 0.0;
        fVar7 = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::GradientColorKey::GradientColorKey__ctor
                  ((GradientColorKey *)&stack0xffffffac,bulletColor,0.0,(MethodInfo *)0x0);
        if (value_02 == (GradientColorKey__Array *)0x0) goto code_?;
        if (value_02->max_length != 0) {
          value_02->vector[0].color.r = fVar3;
          value_02->vector[0].color.g = fVar4;
          value_02->vector[0].color.b = fVar6;
          value_02->vector[0].color.a = fVar7;
          value_02->vector[0].time = fVar5;
          fVar5 = 0.0;
          fVar3 = 0.0;
          fVar4 = 0.0;
          fVar6 = 0.0;
          fVar7 = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::GradientColorKey::GradientColorKey__ctor
                    ((GradientColorKey *)&stack0xffffff98,trailColor,0.1,(MethodInfo *)0x0);
          if (1 < value_02->max_length) {
            value_02->vector[1].color.r = fVar3;
            value_02->vector[1].color.g = fVar4;
            value_02->vector[1].color.b = fVar6;
            value_02->vector[1].color.a = fVar7;
            value_02->vector[1].time = fVar5;
            UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_colorKeys
                      (this_02,value_02,(MethodInfo *)0x0);
            fStack_8 = _UNK_? / speed;
            if (fStack_8 <= _UNK_?) {
              fStack_8 = _UNK_?;
            }
            pTVar1 = (this->fields).trailRenderer;
            if (pTVar1 == (TrailRenderer *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_SetColorGradient
                      (pTVar1,this_02,(MethodInfo *)0x0);
            pTVar1 = (this->fields).trailRenderer;
            if (pTVar1 == (TrailRenderer *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_set_startWidth
                      (pTVar1,size,(MethodInfo *)0x0);
            pTVar1 = (this->fields).trailRenderer;
            if (pTVar1 == (TrailRenderer *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_set_time
                      (pTVar1,fStack_8,(MethodInfo *)0x0);
            pMVar9 = (this->fields).meshRenderers;
            uVar10 = 0;
            if (pMVar9 == (MeshRenderer__Array *)0x0) goto code_?;
            ppMVar11 = pMVar9->vector;
            for (; (int)uVar10 < (int)pMVar9->max_length; uVar10 = uVar10 + 1) {
              if (pMVar9->max_length <= uVar10) goto code_?;
              this_00 = *ppMVar11;
              if (this_00 == (MeshRenderer *)0x0) goto code_?;
              pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_00,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar14 = (pVVar13->oneVector).x;
              uVar15 = (pVVar13->oneVector).y;
              if (pTVar12 == (Transform *)0x0) goto code_?;
              value.y = (float)uVar15 * size;
              value.x = (float)uVar14 * size;
              value.z = (pVVar13->oneVector).z * size;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar12,value,(MethodInfo *)0x0);
              pMVar16 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  ((Renderer *)this_00,(MethodInfo *)0x0);
              if (pMVar16 == (Material *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                        (pMVar16,StringLiteral__TintColor,(Vector4)bulletColor,(MethodInfo *)0x0);
              ppMVar11 = ppMVar11 + 1;
            }
            uVar10 = 0;
            pSVar17 = (this->fields).spriteRenderers;
            if (pSVar17 == (SpriteRenderer__Array *)0x0) goto code_?;
            ppSVar18 = pSVar17->vector;
            while( true ) {
              if ((int)pSVar17->max_length <= (int)uVar10) {
                return;
              }
              if (pSVar17->max_length <= uVar10) break;
              this_01 = *ppSVar18;
              if (this_01 == (SpriteRenderer *)0x0) goto code_?;
              pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_01,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar19 = (pVVar13->oneVector).x;
              uVar20 = (pVVar13->oneVector).y;
              if (pTVar12 == (Transform *)0x0) goto code_?;
              value_00.y = (float)uVar20 * size;
              value_00.x = (float)uVar19 * size;
              value_00.z = (pVVar13->oneVector).z * size;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar12,value_00,(MethodInfo *)0x0);
              pMVar16 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  ((Renderer *)this_01,(MethodInfo *)0x0);
              if (pMVar16 == (Material *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                        (pMVar16,StringLiteral__TintColor,(Vector4)bulletColor,(MethodInfo *)0x0);
              uVar10 = uVar10 + 1;
              ppSVar18 = ppSVar18 + 1;
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
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::Bullet::Bullet_Update(Bullet *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  iVar1 = 3;
  if ((this->fields).hit == 0) {
    pBVar2 = (this->fields).collisionBullet;
    if (pBVar2 == (Bullet_CollisionBullet *)0x0) goto code_?;
    fVar3 = (pBVar2->fields).currentPos.y;
    iVar1 = 0;
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
      iVar1 = 2;
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
    fVar3 = (pBVar2->fields).ray.m_Origin.x;
    VStack_13.x = (pBVar2->fields).ray.m_Origin.y;
    VStack_13.y = (pBVar2->fields).ray.m_Origin.z;
    VStack_13.z = (pBVar2->fields).ray.m_Direction.x;
    uVar14 = (pBVar2->fields).ray.m_Direction.y;
    uVar15 = (pBVar2->fields).ray.m_Direction.z;
    fStack_16 = (pBVar2->fields).speed;
    fStack_17 = (float)uVar8;
    fStack_18 = (float)uVar14;
    fStack_19 = (float)uVar15;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    ray.m_Origin.y = VStack_13.x;
    ray.m_Origin.x = fVar3;
    ray.m_Origin.z = VStack_13.y;
    ray.m_Direction.x = VStack_13.z;
    ray.m_Direction.y = fStack_18;
    ray.m_Direction.z = fStack_19;
    bVar20 = Bullet+CollisionBullet::Bullet_CollisionBullet_DoBulletCollision
                       (ray,&(this->fields).voxelHit,fVar4 * fStack_16,(pBVar2->fields).ignoreWoIDs
                        ,(MethodInfo *)0x0);
    if (bVar20 != 0) {
      iVar1 = 1;
    }
    if (iVar1 == 1) {
      (this->fields).hit = 1;
      if ((this->fields).onHit != (Bullet_OnHitDelegate *)0x0) {
        pBVar21 = (this->fields).onHit;
        VStack_13.y = (this->fields).lineOfFire.m_Origin.x;
        VStack_13.z = (this->fields).lineOfFire.m_Origin.y;
        fStack_17 = (this->fields).lineOfFire.m_Origin.z;
        fStack_18 = (this->fields).lineOfFire.m_Direction.x;
        uVar22 = (this->fields).lineOfFire.m_Direction.y;
        uVar23 = (this->fields).lineOfFire.m_Direction.z;
        uVar24._0_2_ = (this->fields).voxelHit.cubePos.x;
        uVar24._2_2_ = (this->fields).voxelHit.cubePos.y;
        iVar25 = (this->fields).voxelHit.interactionFlags;
        VStack_13.x = (float)((ulonglong)iVar25 >> 0x20);
        fStack_19 = (float)uVar22;
        fStack_16 = (float)uVar23;
        (*(pBVar21->fields)._._.invoke_impl)
                  ((pBVar21->fields)._._.method_code,(this->fields).voxelHit.point.x,
                   (this->fields).voxelHit.point.y,(this->fields).voxelHit.point.z,
                   (this->fields).voxelHit.normal.x,(this->fields).voxelHit.normal.y,
                   (this->fields).voxelHit.normal.z,uVar24,
                   *(undefined4 *)&(this->fields).voxelHit.cubePos.z,(this->fields).voxelHit.face,
                   *(undefined4 *)&(this->fields).voxelHit.isCubeHit,(this->fields).voxelHit.woId,
                   (this->fields).voxelHit.cube,(this->fields).voxelHit.distance,
                   (this->fields).voxelHit.collider,(this->fields).voxelHit.transform,
                   *(undefined4 *)&(this->fields).voxelHit.field_0x3c,(int)iVar25);
        (this->fields).onHit = (Bullet_OnHitDelegate *)0x0;
        func_?(&(this->fields).onHit,0);
      }
      iVar1 = 3;
      if ((this->fields).onHitLocal != (Bullet_OnHitDelegate *)0x0) {
        pBVar21 = (this->fields).onHitLocal;
        uVar26 = (this->fields).lineOfFire.m_Direction.y;
        uVar27 = (this->fields).lineOfFire.m_Direction.z;
        uVar28._0_2_ = (this->fields).voxelHit.cubePos.x;
        uVar28._2_2_ = (this->fields).voxelHit.cubePos.y;
        iVar25 = (this->fields).voxelHit.interactionFlags;
        (*(pBVar21->fields)._._.invoke_impl)
                  ((pBVar21->fields)._._.method_code,(this->fields).voxelHit.point.x,
                   (this->fields).voxelHit.point.y,(this->fields).voxelHit.point.z,
                   (this->fields).voxelHit.normal.x,(this->fields).voxelHit.normal.y,
                   (this->fields).voxelHit.normal.z,uVar28,
                   *(undefined4 *)&(this->fields).voxelHit.cubePos.z,(this->fields).voxelHit.face,
                   *(undefined4 *)&(this->fields).voxelHit.isCubeHit,(this->fields).voxelHit.woId,
                   (this->fields).voxelHit.cube,(this->fields).voxelHit.distance,
                   (this->fields).voxelHit.collider,(this->fields).voxelHit.transform,
                   *(undefined4 *)&(this->fields).voxelHit.field_0x3c,(int)iVar25,
                   (int)((ulonglong)iVar25 >> 0x20),(this->fields).lineOfFire.m_Origin.x,
                   (this->fields).lineOfFire.m_Origin.y,(this->fields).lineOfFire.m_Origin.z,
                   (this->fields).lineOfFire.m_Direction.x,uVar26,uVar27,(pBVar21->fields)._._.method
                  );
        (this->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
        func_?(&(this->fields).onHitLocal,0);
        iVar1 = 3;
      }
    }
    else if (iVar1 == 2) {
      iVar1 = 3;
      (this->fields).hit = 1;
      if ((this->fields).onOutOfRange != (Action_1_UnityEngine_Ray_ *)0x0) {
        pAVar29 = (this->fields).onOutOfRange;
        VStack_13.y = (this->fields).lineOfFire.m_Origin.x;
        VStack_13.z = (this->fields).lineOfFire.m_Origin.y;
        fStack_17 = (this->fields).lineOfFire.m_Origin.z;
        fStack_18 = (this->fields).lineOfFire.m_Direction.x;
        VStack_13.x = (float)(pAVar29->fields)._._.method_code;
        uVar30 = (this->fields).lineOfFire.m_Direction.y;
        uVar31 = (this->fields).lineOfFire.m_Direction.z;
        fStack_19 = (float)uVar30;
        fStack_16 = (float)uVar31;
        (*(pAVar29->fields)._._.invoke_impl)();
        (this->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
        func_?(&(this->fields).onOutOfRange,0);
      }
    }
  }
  fVar3 = (this->fields).currentAirTime;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar4 = fVar4 + fVar3;
  (this->fields).currentAirTime = fVar4;
  if ((((this->fields).hit != 0) || ((this->fields).targetAirTime < fVar4)) ||
     ((this->fields).maxAirTime <= fVar4)) {
    iVar1 = 3;
  }
  else {
    fVar4 = fVar4 / (this->fields).targetAirTime;
    VStack_13.z = (this->fields).startPosition.z;
    pTVar32 = (this->fields).localTransform;
    fStack_19 = (this->fields).targetPosition.z;
    uVar33 = (this->fields).startPosition.x;
    uVar34 = (this->fields).startPosition.y;
    uVar35 = (this->fields).targetPosition.x;
    uVar36 = (this->fields).targetPosition.y;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    VStack_13.x = ((float)uVar35 - (float)uVar33) * fVar4 + (float)uVar33;
    VStack_13.y = ((float)uVar36 - (float)uVar34) * fVar4 + (float)uVar34;
    VStack_13.z = (fStack_19 - VStack_13.z) * fVar4 + VStack_13.z;
    fStack_17 = (float)uVar35;
    fStack_18 = (float)uVar36;
    if (pTVar32 == (Transform *)0x0) goto code_?;
    value.y = VStack_13.y;
    value.x = VStack_13.x;
    value.z = VStack_13.z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar32,value,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).cullingSubscriberBase;
  pTVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if ((pTVar32 == (Transform *)0x0) ||
     (pVVar37 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_13,pTVar32,(MethodInfo *)0x0),
     this_00 == (CullingSubscriberBase *)0x0)) goto code_?;
  CullingSubscriberBase::CullingSubscriberBase_set_Position(this_00,*pVVar37,(MethodInfo *)0x0);
  if (iVar1 == 3) {
    if ((this->fields).hasCleaned == 0) {
      pMVar38 = (this->fields).meshRenderers;
      uVar39 = 0;
      if (pMVar38 == (MeshRenderer__Array *)0x0) goto code_?;
      ppMVar40 = pMVar38->vector;
      for (; (int)uVar39 < (int)pMVar38->max_length; uVar39 = uVar39 + 1) {
        if (pMVar38->max_length <= uVar39) goto code_?;
        if (*ppMVar40 == (MeshRenderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppMVar40,0,(MethodInfo *)0x0);
        ppMVar40 = ppMVar40 + 1;
      }
      pSVar41 = (this->fields).spriteRenderers;
      uVar39 = 0;
      if (pSVar41 == (SpriteRenderer__Array *)0x0) goto code_?;
      ppSVar42 = pSVar41->vector;
      for (; (int)uVar39 < (int)pSVar41->max_length; uVar39 = uVar39 + 1) {
        if (pSVar41->max_length <= uVar39) goto code_?;
        if (*ppSVar42 == (SpriteRenderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppSVar42,0,(MethodInfo *)0x0);
        ppSVar42 = ppSVar42 + 1;
      }
      pPVar43 = (this->fields).pSystem;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar20 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pPVar43,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar20 != 0) {
        pPVar43 = (this->fields).pSystem;
        if (pPVar43 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (pPVar43,(MethodInfo *)0x0);
      }
      (this->fields).hasCleaned = 1;
    }
    pPVar43 = (this->fields).pSystem;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar20 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       ((Object_1 *)pPVar43,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar20 == 0) {
      pPVar43 = (this->fields).pSystem;
      if (pPVar43 == (ParticleSystem *)0x0) {
code_?:
        func_?();
code_?:
        func_?();
        pcVar44 = (code *)swi(3);
        (*pcVar44)();
        return;
      }
      bVar20 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_IsAlive_1(pPVar43,(MethodInfo *)0x0);
      if (bVar20 != 0) {
        return;
      }
    }
    Bullet_ReturnToPool(this,(this->fields).initiatedPoolType,(MethodInfo *)0x0);
  }
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
  (this->fields).maxAirTime = 3.4028235e+38;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

