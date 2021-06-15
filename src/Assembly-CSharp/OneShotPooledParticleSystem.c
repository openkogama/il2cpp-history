
/* ParticleSystem Instantiate(PoolEnums) */

ParticleSystem *
Assembly-CSharp.dll::OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate
          (PoolEnums__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this != (PrefabPool *)0x0) {
    this_00 = (EnumPoolManager *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                         (MethodInfo *)0x0);
    if (this_00 != (EnumPoolManager *)0x0) {
      pIVar1 = EnumPoolManager::EnumPoolManager_Instantiate_18
                         (this_00,(PoolEnums__Enum)unaff_ESI,
                          OneShotPooledParticleSystem_MethodInfo__EnumPoolManager__Instantiate<OneShotPooledParticleSystem>_PoolEnums_
                         );
      if (pIVar1 != (ImpulseRay *)0x0) {
        (pIVar1->fields).radius = unaff_ESI;
        return (ParticleSystem *)(pIVar1->fields).rayRenderer;
      }
    }
  }
  uStack2 = 0;
  func_?();
  pcVar3 = (code *)swi(3);
  pPVar4 = (ParticleSystem *)(*pcVar3)();
  return pPVar4;
}


/* ParticleSystem Instantiate(PoolEnums, Vector3, Quaternion) */

ParticleSystem *
Assembly-CSharp.dll::OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
          (PoolEnums__Enum type,Vector3 position,Quaternion rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this != (PrefabPool *)0x0) {
    this_00 = (EnumPoolManager *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                         (MethodInfo *)0x0);
    if (this_00 != (EnumPoolManager *)0x0) {
      this_01 = EnumPoolManager::EnumPoolManager_Instantiate_18
                          (this_00,type,
                           OneShotPooledParticleSystem_MethodInfo__EnumPoolManager__Instantiate<OneShotPooledParticleSystem>_PoolEnums_
                          );
      if (this_01 != (ImpulseRay *)0x0) {
        (this_01->fields).radius = (float)type;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this_01,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          auVar2._8_4_ = 0;
          auVar2._0_8_ = position._4_8_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar1,(Vector3)(auVar2 << 0x20),(MethodInfo *)0x0);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this_01,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            puStack3 = (undefined *)rotation.w;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar1,rotation,(MethodInfo *)0x0);
            return (ParticleSystem *)(this_01->fields).rayRenderer;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pPVar5 = (ParticleSystem *)(*pcVar4)();
  return pPVar5;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::OneShotPooledParticleSystem::OneShotPooledParticleSystem_OnValidate
               (OneShotPooledParticleSystem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).particles;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystem>__
                       );
    (this->fields).particles = (ParticleSystem *)pMVar2;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::OneShotPooledParticleSystem::OneShotPooledParticleSystem_Update
               (OneShotPooledParticleSystem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  this_00 = (this->fields).particles;
  if (this_00 != (ParticleSystem *)0x0) {
    fVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_time(this_00,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).particles;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      pOStack_1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                            (this_01,(MethodInfo *)0x0);
      fVar3 = (float10)func_?(&pOStack_1,0);
      if (fVar2 < (float)fVar3) {
        return;
      }
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?(TypeInfo__PrefabPool);
      }
      this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if ((this_02 != (PrefabPool *)0x0) &&
         (this_03 = (EnumPoolManager *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                               (MethodInfo *)0x0), this_03 != (EnumPoolManager *)0x0)) {
        EnumPoolManager::EnumPoolManager_Return
                  (this_03,(MonoBehaviour *)this,(this->fields).type,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

