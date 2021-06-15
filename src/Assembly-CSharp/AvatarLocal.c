
/* Void CreateXPParticlesWithLayer(Int32, Int32) */

void Assembly-CSharp.dll::AvatarLocal::AvatarLocal_CreateXPParticlesWithLayer
               (AvatarLocal *this,int32_t xp,int32_t layer,MethodInfo *method)

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
      this_02 = EnumPoolManager::EnumPoolManager_Instantiate_18
                          (this_01,PoolEnums__Enum_XP,
                           AvatarPooledXPParticles_MethodInfo__EnumPoolManager__Instantiate<AvatarPooledXPParticles>_PoolEnums_
                          );
      if (this_02 != (ImpulseRay *)0x0) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this_02,(MethodInfo *)0x0);
        value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar1,value,(MethodInfo *)0x0);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this_02,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                             ((Vector3 *)&puStack_3,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar1,*pVVar2,(MethodInfo *)0x0);
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this_02,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?();
            }
            pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                               ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        (pTVar1,*pQVar4,(MethodInfo *)0x0);
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this_02,(MethodInfo *)0x0);
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                                 ((Vector3 *)&puStack_3,(MethodInfo *)0x0);
              if (pTVar1 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (pTVar1,*pVVar2,(MethodInfo *)0x0);
                this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)this_02,(MethodInfo *)0x0);
                if (this_03 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                            (this_03,layer,(MethodInfo *)0x0);
                  AvatarPooledXPParticles::AvatarPooledXPParticles_Initialize
                            ((AvatarPooledXPParticles *)this_02,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize(MVAvatar, Boolean) */

void Assembly-CSharp.dll::AvatarLocal::AvatarLocal_Initialize
               (AvatarLocal *this,MVAvatar *mvAvatar,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Avatar::Avatar_1_Initialize((Avatar_1 *)this,mvAvatar,isLocal,(MethodInfo *)0x0);
  original = (this->fields).avatarCamerasDesktop;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)original,
                      AvatarCamerasDesktop_MethodInfo__UnityEngine__Object__Instantiate<AvatarCamerasDesktop>_AvatarCamerasDesktop_
                     );
  (this->fields).avatarCameraController = (IAvatarCameraController *)pXVar1;
  if (pXVar1 == (XpBoostParticlePreviewer *)0x0) {
    func_?();
code_?:
    func_?(mvAvatar);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (mvAvatar == (MVAvatar *)0x0) {
    pMVar3 = (MVAvatar *)0x0;
  }
  else {
    bVar4 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
    if (((mvAvatar->klass->_1).naturalAligment < bVar4) ||
       ((MVAvatarLocal__Class *)(mvAvatar->klass->_1).typeHierarchy[bVar4 - 1] !=
        TypeInfo__MVAvatarLocal)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar3 = (MVAvatar *)0x0;
    if (bVar5) {
      pMVar3 = mvAvatar;
    }
    if (pMVar3 == (MVAvatar *)0x0) goto code_?;
  }
  pXVar6 = pXVar1->klass;
  uVar7 = 0;
  uVar8._0_1_ = (pXVar6->_1).rank;
  uVar8._1_1_ = (pXVar6->_1).minimumAlignment;
  if (uVar8 != 0) {
    do {
      if (pXVar6->interfaceOffsets[uVar7].interfaceType ==
          (Il2CppClass *)TypeInfo__IAvatarCameraController) {
        ppMVar9 = &(&(pXVar6->vtable).Equals)[pXVar6->interfaceOffsets[uVar7].offset].method;
        goto code_?;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  ppMVar9 = (MethodInfo **)func_?(pXVar1,TypeInfo__IAvatarCameraController);
code_?:
  (*(code *)*ppMVar9)(pXVar1,pMVar3);
  layer = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Hidden,(MethodInfo *)0x0);
  AvatarLocal_CreateXPParticlesWithLayer(this,0,layer,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarLocal::AvatarLocal_OnDestroy(AvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (Component_1 *)(this->fields).avatarCameraController;
  if (pCVar1 == (Component_1 *)0x0) {
    this_00 = (Component_1 *)0x0;
  }
  else {
    bVar2 = (TypeInfo__UnityEngine__MonoBehaviour->_1).naturalAligment;
    if (((pCVar1->klass->_1).naturalAligment < bVar2) ||
       ((pCVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__UnityEngine__MonoBehaviour)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    this_00 = (Component_1 *)0x0;
    if (bVar3) {
      this_00 = pCVar1;
    }
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    if (this_00 == (Component_1 *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    (this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    (this->fields).avatarCameraController = (IAvatarCameraController *)0x0;
  }
  return;
}


/* Void OnXpProgressing(Int32) */

void Assembly-CSharp.dll::AvatarLocal::AvatarLocal_OnXpProgressing
               (AvatarLocal *this,int32_t xp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_OnXpProgressing,(MethodInfo *)0x0);
  this_00 = (this->fields)._.mvAvatar;
  if (this_00 != (MVAvatar *)0x0) {
    this_01 = MVAvatar::MVAvatar_get_Body(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVBody *)0x0) {
      this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)this_01,(MethodInfo *)0x0);
      if (this_02 != (CelestialParam *)0x0) {
        xp_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                          ((GameObject *)this_02,(MethodInfo *)0x0);
        AvatarLocal_CreateXPParticlesWithLayer(this,xp_00,xp_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PrewarmXPParticles() */

void Assembly-CSharp.dll::AvatarLocal::AvatarLocal_PrewarmXPParticles
               (AvatarLocal *this,MethodInfo *method)

{
  layer = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Hidden,(MethodInfo *)0x0);
  AvatarLocal_CreateXPParticlesWithLayer(this,0,layer,(MethodInfo *)0x0);
  return;
}

