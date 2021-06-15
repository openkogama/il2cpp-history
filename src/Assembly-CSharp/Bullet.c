
/* Bullet CreateBullet(PoolEnums, Vector3) */

Bullet * Assembly-CSharp.dll::Bullet::Bullet_CreateBullet
                   (PoolEnums__Enum bulletType,Vector3 pos,MethodInfo *method)

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
      pBVar1 = (Bullet *)
               EnumPoolManager::EnumPoolManager_Instantiate_18
                         (this_01,bulletType,
                          Bullet_MethodInfo__EnumPoolManager__Instantiate<Bullet>_PoolEnums_);
      if (pBVar1 != (Bullet *)0x0) {
        this = (HashSet_1_UnityEngine_Vector3_ *)(pBVar1->fields).ignoreWoIDs;
        (pBVar1->fields).onHit = (Bullet_OnHitDelegate *)0x0;
        (pBVar1->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
        ((Color *)&(pBVar1->fields).onOutOfRange)->r = 0.0;
        if (this != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
          HashSet_1_UnityEngine_Vector3__Clear
                    (this,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)pBVar1,(MethodInfo *)0x0);
          if (this_02 != (Transform *)0x0) {
            auVar2._8_4_ = 0;
            auVar2._0_8_ = pos._4_8_;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (this_02,(Vector3)(auVar2 << 0x20),(MethodInfo *)0x0);
            (pBVar1->fields).initiatedPoolType = bulletType;
            *(undefined1 *)&((Color *)&(pBVar1->fields).isFired)->r = 0;
            (pBVar1->fields).hit = 0;
            (pBVar1->fields).hasCleaned = 0;
            (pBVar1->fields).currentAirTime = 0.0;
            (pBVar1->fields).maxAirTime = 0.0;
            return pBVar1;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pBVar1 = (Bullet *)(*pcVar3)();
  return pBVar1;
}


/* Void DoFire(Single, Single) */

void Assembly-CSharp.dll::Bullet::Bullet_DoFire
               (Bullet *this,float speed,float maxRange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = &(this->fields).lineOfFire;
  puVar2 = (undefined8 *)func_?(&stack0xffffffe0,pRVar1,0);
  uVar3 = *puVar2;
  fVar4 = *(float *)(puVar2 + 1);
  pVVar5 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                      ((Vector3 *)&stack0xffffffc8,(InputToPlayerMovementAndroid *)pRVar1,
                       (MethodInfo *)0x0);
  uVar6 = pVVar5->x;
  uVar7 = pVVar5->y;
  pHVar8 = (this->fields).ignoreWoIDs;
  method_00 = TypeInfo__Bullet__CollisionBullet;
  this_00 = (Bullet_CollisionBullet *)func_?();
  pRVar1 = &(this_00->fields).ray;
  (pRVar1->m_Origin).x = 0.0;
  (this_00->fields).ray.m_Origin.y = 0.0;
  (this_00->fields).ray.m_Origin.z = 0.0;
  (this_00->fields).ray.m_Direction.x = 0.0;
  (this_00->fields).ray.m_Direction.y = 0.0;
  (this_00->fields).ray.m_Direction.z = 0.0;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this_00,0.0,(MethodInfo *)method_00);
  (this_00->fields).currentPos.x = (float)(int)uVar3;
  (this_00->fields).currentPos.y = (float)(int)((ulonglong)uVar3 >> 0x20);
  (this_00->fields).prevPos.x = (float)(int)uVar3;
  (this_00->fields).prevPos.y = (float)(int)((ulonglong)uVar3 >> 0x20);
  (this_00->fields).currentPos.z = fVar4;
  (this_00->fields).prevPos.z = fVar4;
  func_?(pRVar1,uVar6,uVar7);
  (this_00->fields).range = maxRange;
  (((MonoBehaviour__Fields *)&(this_00->fields).speed)->_)._._.m_CachedPtr = (void *)speed;
  (this_00->fields).ignoreWoIDs = pHVar8;
  (this->fields).collisionBullet = this_00;
  pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  (this->fields).localTransform = pTVar9;
  if (pTVar9 != (Transform *)0x0) {
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffc8,pTVar9,(MethodInfo *)0x0);
    fVar10 = pVVar5->y;
    fVar4 = pVVar5->z;
    (this->fields).startPosition.x = pVVar5->x;
    (this->fields).startPosition.y = fVar10;
    (this->fields).startPosition.z = fVar4;
    pVVar5 = Bullet_FindTargetPos((Vector3 *)&stack0xffffffc8,this,maxRange,(MethodInfo *)0x0);
    uVar3._0_4_ = (this->fields).startPosition.x;
    uVar3._4_4_ = (this->fields).startPosition.y;
    pTVar9 = (this->fields).localTransform;
    uVar11._0_4_ = pVVar5->x;
    uVar11._4_4_ = pVVar5->y;
    fVar4 = pVVar5->z;
    fVar10 = (this->fields).startPosition.z;
    (this->fields).targetPosition.x = (float)(undefined4)uVar11;
    (this->fields).targetPosition.y = (float)uVar11._4_4_;
    (this->fields).targetPosition.z = fVar4;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      uVar3 = CONCAT44(uVar3._4_4_,TypeInfo__UnityEngine__Vector3);
      puVar12 = &UNK_?;
      func_?();
      uVar11 = CONCAT44(puVar12,(undefined4)uVar11);
    }
    a_00.z = fVar10;
    a_00.x = (float)(int)uVar3;
    a_00.y = (float)(int)((ulonglong)uVar3 >> 0x20);
    b.z = fVar4;
    b.x = (float)(int)uVar11;
    b.y = (float)(int)((ulonglong)uVar11 >> 0x20);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)&stack0xffffffc8,a_00,b,(MethodInfo *)0x0);
    puVar2 = (undefined8 *)func_?();
    uVar3 = *puVar2;
    fVar4 = *(float *)(puVar2 + 1);
    uVar6 = (undefined4)uVar3;
    uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
      uVar3 = CONCAT44(uVar7,uVar6);
    }
    forward.z = fVar4;
    forward.x = (float)(int)uVar3;
    forward.y = (float)(int)((ulonglong)uVar3 >> 0x20);
    pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0xffffffc4,forward,(MethodInfo *)0x0);
    if (pTVar9 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar9,*pQVar13,(MethodInfo *)0x0);
      uVar14 = (this->fields).targetPosition.x;
      uVar15 = (this->fields).targetPosition.y;
      fVar4 = (this->fields).targetPosition.z;
      pVVar5 = (Vector3 *)func_?();
      a.y = (float)uVar15;
      a.x = (float)uVar14;
      a.z = fVar4;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                         (a,*pVVar5,(MethodInfo *)0x0);
      pTVar16 = (this->fields).trailRenderer;
      (this->fields).maxAirTime = fVar4 / speed;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
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


/* Void Fire(Single, Single, Ray, HashSet`1[System.Int32]) */

void Assembly-CSharp.dll::Bullet::Bullet_Fire
               (Bullet *this,float speed,float range,Ray lineOfFire,
               HashSet_1_System_Int32_ *ignoreWoIDs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isFired != 0) {
    return;
  }
  (this->fields).lineOfFire.m_Origin.x = lineOfFire.m_Origin.x;
  (this->fields).lineOfFire.m_Origin.y = lineOfFire.m_Origin.y;
  (this->fields).lineOfFire.m_Origin.z = lineOfFire.m_Origin.z;
  (this->fields).lineOfFire.m_Direction.x = lineOfFire.m_Direction.x;
  (this->fields).lineOfFire.m_Direction.y = lineOfFire.m_Direction.y;
  (this->fields).lineOfFire.m_Direction.z = lineOfFire.m_Direction.z;
  (this->fields).ignoreWoIDs = ignoreWoIDs;
  (this->fields).isFired = 1;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  Bullet_DoFire(this,speed,range,(MethodInfo *)0x0);
  x = (this->fields).pooledObjectReference;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    (this->fields).pooledObjectReference = (MonoBehaviour *)this;
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar2->z;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    puVar4 = &UNK_?;
    pUVar5 = this_01;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__Bullet__OnStateChanged_UnityEngine__CullingGroupEvent_,
               MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
              );
    this_02 = (CullingSubscriberBase *)func_?();
    position.y = (float)pUVar5;
    position.x = (float)puVar4;
    position.z = fVar3;
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (this_02,1.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
               (MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = this_02;
    if (this_02 != (CullingSubscriberBase *)0x0) {
      LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                ((LockCursorManager3DMode *)this_02,(Action_1_Boolean_ *)0x5,(MethodInfo *)0x0);
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


/* Void ResetBullet() */

void Assembly-CSharp.dll::Bullet::Bullet_ResetBullet(Bullet *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)(this->fields).ignoreWoIDs;
  (this->fields).onHit = (Bullet_OnHitDelegate *)0x0;
  (this->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
  (this->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
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
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ReturnToPool(PoolEnums) */

void Assembly-CSharp.dll::Bullet::Bullet_ReturnToPool
               (Bullet *this,PoolEnums__Enum bulletType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)(this->fields).ignoreWoIDs;
  (this->fields).onHit = (Bullet_OnHitDelegate *)0x0;
  (this->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
  (this->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3__Clear
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    this_01 = (this->fields).cullingSubscriberBase;
    (this->fields).isFired = 0;
    (this->fields).hit = 0;
    (this->fields).hasCleaned = 0;
    (this->fields).currentAirTime = 0.0;
    (this->fields).maxAirTime = 0.0;
    if (this_01 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy(this_01,(MethodInfo *)0x0);
      (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (this_02 != (PrefabPool *)0x0) {
        this_03 = (EnumPoolManager *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                             (MethodInfo *)0x0);
        if (this_03 != (EnumPoolManager *)0x0) {
          EnumPoolManager::EnumPoolManager_Return
                    (this_03,(this->fields).pooledObjectReference,PoolEnums__Enum_CenterGunBullet,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::Bullet::Bullet_Update(Bullet *this,MethodInfo *method)

{
  this_02 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = &this->fields;
  this = (Bullet *)0x3;
  if (pBVar1->hit == 0) {
    pBVar2 = (this_02->fields).collisionBullet;
    if (pBVar2 == (Bullet_CollisionBullet *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    fVar3 = (pBVar2->fields).currentPos.y;
    (pBVar2->fields).prevPos.x = (pBVar2->fields).currentPos.x;
    (pBVar2->fields).prevPos.y = fVar3;
    fStack_4 = (pBVar2->fields).speed;
    this = (Bullet *)0x0;
    (pBVar2->fields).prevPos.z = (pBVar2->fields).currentPos.z;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fStack_4 = fVar3 * fStack_4;
    fVar3 = (pBVar2->fields).range;
    fVar5 = fStack_4 + (pBVar2->fields).distanceTraveled;
    (pBVar2->fields).distanceTraveled = fVar5;
    if (fVar3 < fVar5) {
      this = (Bullet *)0x2;
      fStack_4 = fStack_4 - (fVar5 - fVar3);
    }
    pVVar6 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                        (&VStack_7,(InputToPlayerMovementAndroid *)&(pBVar2->fields).ray,
                         (MethodInfo *)0x0);
    uStack_8._0_4_ = pVVar6->x;
    uStack_8._4_4_ = pVVar6->y;
    pMStack_9 = (MeshRenderer__Array *)pVVar6->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    method_00 = (MethodInfo *)(uStack_8 >> 0x20);
    a_00.z = (float)pMStack_9;
    a_00.x = (float)(undefined4)uStack_8;
    a_00.y = (float)uStack_8._4_4_;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        (&VStack_10,a_00,fStack_4,(MethodInfo *)0x0);
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffc8,*pVVar6,(pBVar2->fields).prevPos,
                         (MethodInfo *)0x0);
    fVar5 = pVVar6->y;
    fVar3 = pVVar6->z;
    (pBVar2->fields).currentPos.x = pVVar6->x;
    (pBVar2->fields).currentPos.y = fVar5;
    VStack_7.y = (pBVar2->fields).prevPos.x;
    VStack_7.z = (pBVar2->fields).prevPos.y;
    (pBVar2->fields).currentPos.z = fVar3;
    uStack_8 = (ulonglong)(uint)(pBVar2->fields).prevPos.z;
    VStack_7.x = (float)&(pBVar2->fields).ray;
    VStack_10.z = (float)&UNK_?;
    func_?();
    fVar3 = (pBVar2->fields).ray.m_Origin.x;
    fVar5 = (pBVar2->fields).ray.m_Origin.y;
    fVar11 = (pBVar2->fields).ray.m_Origin.z;
    fVar12 = (pBVar2->fields).ray.m_Direction.x;
    uStack_8._0_4_ = (pBVar2->fields).ray.m_Direction.y;
    uStack_8._4_4_ = (pBVar2->fields).ray.m_Direction.z;
    fStack_4 = (pBVar2->fields).speed;
    pMStack_9 = (MeshRenderer__Array *)
                UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
    ray.m_Origin.y = fVar5;
    ray.m_Origin.x = fVar3;
    ray.m_Origin.z = fVar11;
    ray.m_Direction.x = fVar12;
    ray.m_Direction.y = (float)(int)uStack_8;
    ray.m_Direction.z = (float)(uStack_8 >> 0x20);
    bVar13 = Bullet+CollisionBullet::Bullet_CollisionBullet_DoBulletCollision
                       (ray,&(this_02->fields).voxelHit,(float)pMStack_9 * fStack_4,
                        (pBVar2->fields).ignoreWoIDs,(MethodInfo *)0x0);
    if (bVar13 != 0) {
      this = (Bullet *)0x1;
    }
    if (this == (Bullet *)0x1) {
      (this_02->fields).hit = 1;
      pBVar14 = (BulletThrowingStar_OnHitDelegate *)(this_02->fields).onHit;
      this = (Bullet *)0x3;
      if (pBVar14 != (BulletThrowingStar_OnHitDelegate *)0x0) {
        uVar15 = (this_02->fields).lineOfFire.m_Direction.z;
        hit.interactionFlags._0_4_ =
             (int)((ulonglong)(this_02->fields).voxelHit.interactionFlags >> 0x20);
        hit._0_64_ = *(undefined1 (*) [64])&(this_02->fields).voxelHit.point.y;
        hit.interactionFlags._4_4_ = (this_02->fields).lineOfFire.m_Origin.x;
        lineOfFire.m_Direction.y = (float)uVar15;
        lineOfFire._0_16_ = *(undefined1 (*) [16])&(this_02->fields).lineOfFire.m_Origin.y;
        lineOfFire.m_Direction.z = 0.0;
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate_Invoke
                  (pBVar14,hit,lineOfFire,in_stack_16);
        (this_02->fields).onHit = (Bullet_OnHitDelegate *)0x0;
      }
      pBVar14 = (BulletThrowingStar_OnHitDelegate *)(this_02->fields).onHitLocal;
      if (pBVar14 != (BulletThrowingStar_OnHitDelegate *)0x0) {
        uVar17 = (this_02->fields).lineOfFire.m_Direction.z;
        hit_00.interactionFlags._0_4_ =
             (int)((ulonglong)(this_02->fields).voxelHit.interactionFlags >> 0x20);
        hit_00._0_64_ = *(undefined1 (*) [64])&(this_02->fields).voxelHit.point.y;
        hit_00.interactionFlags._4_4_ = (this_02->fields).lineOfFire.m_Origin.x;
        lineOfFire_00.m_Direction.y = (float)uVar17;
        lineOfFire_00._0_16_ = *(undefined1 (*) [16])&(this_02->fields).lineOfFire.m_Origin.y;
        lineOfFire_00.m_Direction.z = 0.0;
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate_Invoke
                  (pBVar14,hit_00,lineOfFire_00,method_00);
        (this_02->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
      }
    }
    else if (this == (Bullet *)0x2) {
      (this_02->fields).hit = 1;
      this_00 = (Action_1_SpawnRolesSkillDataManager_SkillData_ *)(this_02->fields).onOutOfRange;
      this = (Bullet *)0x3;
      if (this_00 != (Action_1_SpawnRolesSkillDataManager_SkillData_ *)0x0) {
        uVar18 = (this_02->fields).lineOfFire.m_Direction.z;
        uVar19 = (this_02->fields).lineOfFire.m_Origin.x;
        uVar20 = (this_02->fields).lineOfFire.m_Origin.y;
        uVar21 = (this_02->fields).lineOfFire.m_Origin.z;
        obj.description = (String *)uVar21;
        obj.name = (String *)uVar20;
        obj.type = (String *)uVar19;
        uVar22 = (this_02->fields).lineOfFire.m_Direction.x;
        uVar23 = (this_02->fields).lineOfFire.m_Direction.y;
        obj.settingsPrefab = (SkillSettingBase *)uVar23;
        obj.iconPrefab = (SpawnRoleSkillIconController *)uVar22;
        obj.zeroValue = (float)uVar18;
        mscorlib.dll::System::Action`1[SpawnRolesSkillDataManager+SkillData]::
        Action_1_SpawnRolesSkillDataManager_SkillData__Invoke
                  (this_00,obj,
                   MethodInfo__System__Action<UnityEngine::Ray>__Invoke_UnityEngine__Ray_);
        (this_02->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
      }
    }
  }
  pMStack_9 = (MeshRenderer__Array *)(this_02->fields).currentAirTime;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar3 = fVar3 + (float)pMStack_9;
  (this_02->fields).currentAirTime = fVar3;
  if (((this_02->fields).hit != 0) || (fVar5 = (this_02->fields).maxAirTime, fVar5 < fVar3)) {
    pMStack_9 = (this_02->fields).meshRenderers;
    uVar24 = 0;
    if (pMStack_9 == (MeshRenderer__Array *)0x0) goto code_?;
    ppMVar25 = pMStack_9->vector;
    for (; (int)uVar24 < (int)pMStack_9->max_length; uVar24 = uVar24 + 1) {
      if (pMStack_9->max_length <= uVar24) goto code_?;
      if (*ppMVar25 == (MeshRenderer *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)*ppMVar25,0,(MethodInfo *)0x0);
      ppMVar25 = ppMVar25 + 1;
    }
  }
  else {
    fStack_4 = (this_02->fields).targetPosition.z;
    pMStack_9 = (MeshRenderer__Array *)(fVar3 / fVar5);
    pTVar26 = (this_02->fields).localTransform;
    fVar3 = (this_02->fields).startPosition.z;
    uStack_8._0_4_ = (this_02->fields).startPosition.x;
    uStack_8._4_4_ = (this_02->fields).startPosition.y;
    VStack_7.y = (this_02->fields).targetPosition.x;
    VStack_7.z = (this_02->fields).targetPosition.y;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar3;
    a.x = (float)(undefined4)uStack_8;
    a.y = (float)uStack_8._4_4_;
    b.z = fStack_4;
    b.x = VStack_7.y;
    b.y = VStack_7.z;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                        ((Vector3 *)&stack0xffffffc8,a,b,(float)pMStack_9,(MethodInfo *)0x0);
    if (pTVar26 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar26,*pVVar6,(MethodInfo *)0x0);
  }
  this_01 = (this_02->fields).cullingSubscriberBase;
  pTVar26 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this_02,(MethodInfo *)0x0);
  if ((pTVar26 == (Transform *)0x0) ||
     (pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffc8,pTVar26,(MethodInfo *)0x0),
     this_01 == (CullingSubscriberBase *)0x0)) goto code_?;
  CullingSubscriberBase::CullingSubscriberBase_set_Position(this_01,*pVVar6,(MethodInfo *)0x0);
  if (this == (Bullet *)0x3) {
    if ((this_02->fields).hasCleaned == 0) {
      pMVar27 = (this_02->fields).meshRenderers;
      uVar24 = 0;
      if (pMVar27 == (MeshRenderer__Array *)0x0) goto code_?;
      ppMVar25 = pMVar27->vector;
      for (; (int)uVar24 < (int)pMVar27->max_length; uVar24 = uVar24 + 1) {
        if (pMVar27->max_length <= uVar24) goto code_?;
        if (*ppMVar25 == (MeshRenderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppMVar25,0,(MethodInfo *)0x0);
        ppMVar25 = ppMVar25 + 1;
      }
      pPVar28 = (this_02->fields).pSystem;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                         ((Object_1 *)pPVar28,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar13 != 0) {
        pPVar28 = (this_02->fields).pSystem;
        if (pPVar28 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (pPVar28,(MethodInfo *)0x0);
      }
      (this_02->fields).hasCleaned = 1;
    }
    pPVar28 = (this_02->fields).pSystem;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       ((Object_1 *)pPVar28,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar13 == 0) {
      pPVar28 = (this_02->fields).pSystem;
      if (pPVar28 == (ParticleSystem *)0x0) {
code_?:
        func_?(0);
code_?:
        uVar29 = func_?(0,0);
        func_?(uVar29);
        pcVar30 = (code *)swi(3);
        (*pcVar30)();
        return;
      }
      bVar13 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_IsAlive_1(pPVar28,(MethodInfo *)0x0);
      if (bVar13 != 0) {
        return;
      }
    }
    Bullet_ReturnToPool(this_02,(this_02->fields).initiatedPoolType,(MethodInfo *)0x0);
  }
  return;
}


/* Bullet() */

void Assembly-CSharp.dll::Bullet::Bullet__ctor(Bullet *this,MethodInfo *method)

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
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

