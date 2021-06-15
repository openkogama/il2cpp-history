
/* Boolean DoParticleEffect(Vector3) */

bool Assembly-CSharp.dll::SharedWorldObjectGameplayFunctions::
     SharedWorldObjectGameplayFunctions_DoParticleEffect(Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (((pMVar1 != (MainCameraManager *)0x0) &&
      (pCVar2 = (Component_1 *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar1,
                           (MethodInfo *)0x0), pCVar2 != (Component_1 *)0x0)) &&
     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         (pCVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffdc,pTVar3,(MethodInfo *)0x0);
    VVar5 = *pVVar4;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.y = position.y;
    a.x = position.x;
    a.z = position.z;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       (&position,a,VVar5,(MethodInfo *)0x0);
    VVar5 = *pVVar4;
    fVar6 = (float10)func_?();
    func_?();
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (((pMVar1 != (MainCameraManager *)0x0) &&
        (pCVar2 = (Component_1 *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar1,
                             (MethodInfo *)0x0), pCVar2 != (Component_1 *)0x0)) &&
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           (pCVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffcc,pTVar3,(MethodInfo *)0x0);
      fVar8 = pQVar7->x;
      fVar9 = pQVar7->y;
      fVar10 = pQVar7->z;
      fVar11 = pQVar7->w;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                         ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
      uVar12._0_4_ = pVVar4->x;
      uVar12._4_4_ = pVVar4->y;
      fVar13 = pVVar4->z;
      position.y = (float)(undefined4)uVar12;
      position.z = (float)uVar12._4_4_;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
        uVar12 = CONCAT44(position.z,position.y);
      }
      rotation.y = fVar9;
      rotation.x = fVar8;
      rotation.z = fVar10;
      rotation.w = fVar11;
      point.z = fVar13;
      point.x = (float)(int)uVar12;
      point.y = (float)(int)((ulonglong)uVar12 >> 0x20);
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         (&position,rotation,point,(MethodInfo *)0x0);
      position.z = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                             (*pVVar4,VVar5,(MethodInfo *)0x0);
      if (position.z <= _UNK_?) {
        return 0;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar1 != (MainCameraManager *)0x0) &&
         (pCVar14 = (Camera *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar1,
                              (MethodInfo *)0x0), pCVar14 != (Camera *)0x0)) {
        position.z = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                               (pCVar14,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if ((pMVar1 != (MainCameraManager *)0x0) &&
           (pCVar14 = (Camera *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar1,
                                (MethodInfo *)0x0), pCVar14 != (Camera *)0x0)) {
          fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                             (pCVar14,(MethodInfo *)0x0);
          if (fVar13 * position.z <= (float)fVar6) {
            return 0;
          }
          return 1;
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  bVar16 = (*pcVar15)();
  return bVar16;
}


/* Void DustEfffect(ParticleSystem, Vector3, Single) */

void Assembly-CSharp.dll::SharedWorldObjectGameplayFunctions::
     SharedWorldObjectGameplayFunctions_DustEfffect
               (ParticleSystem *particlePrefab,Vector3 position,float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = SharedWorldObjectGameplayFunctions_DoParticleEffect(position,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)&stack0xffffffe8,(MethodInfo *)0x0);
    fVar3 = pQVar2->x;
    fVar4 = pQVar2->y;
    fVar5 = pQVar2->z;
    puVar6 = (undefined *)pQVar2->w;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      puVar6 = &UNK_?;
      func_?();
    }
    rotation.y = fVar4;
    rotation.x = fVar3;
    rotation.z = fVar5;
    rotation.w = (float)puVar6;
    this = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                        ((SentryGunBeam *)particlePrefab,position,rotation,
                         UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                        );
    if (this == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
              (this,(MethodInfo *)0x0);
    uStack8 = 0;
    func_?();
  }
  return;
}

