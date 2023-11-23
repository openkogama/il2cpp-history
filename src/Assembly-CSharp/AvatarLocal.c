
/* Void CreateXPParticlesWithLayer(Int32, Int32) */

void Assembly-CSharp.dll::AvatarLocal::AvatarLocal_CreateXPParticlesWithLayer
               (AvatarLocal *this,int32_t xp,int32_t layer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AvatarPooledXPParticles_MethodInfo__EnumPoolManager__Instantiate<AvatarPooledXPParticles>_PoolEnums_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if ((pPVar1 != (PrefabPool *)0x0) &&
     (this_00 = (pPVar1->fields).enumPoolManager, this_00 != (EnumPoolManager *)0x0)) {
    this_01 = (AvatarPooledXPParticles *)
              EnumPoolManager::EnumPoolManager_Instantiate
                        (this_00,PoolEnums__Enum_XP,
                         AvatarPooledXPParticles_MethodInfo__EnumPoolManager__Instantiate<AvatarPooledXPParticles>_PoolEnums_
                        );
    if (this_01 != (AvatarPooledXPParticles *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_01,(MethodInfo *)0x0);
      value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar2,value,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_01,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar2,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                     (MethodInfo *)0x0);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_01,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                      (pTVar2,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                       (MethodInfo *)0x0);
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_01,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar2,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                         (MethodInfo *)0x0);
              this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this_01,(MethodInfo *)0x0);
              if (this_02 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                          (this_02,0,(MethodInfo *)0x0);
                AvatarPooledXPParticles::AvatarPooledXPParticles_Initialize
                          (this_01,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(MVAvatar, Boolean) */

void Assembly-CSharp.dll::AvatarLocal::AvatarLocal_Initialize
               (AvatarLocal *this,MVAvatar *mvAvatar,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IAvatarCameraController);
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&
                    AvatarCamerasDesktop_MethodInfo__UnityEngine__Object__Instantiate<AvatarCamerasDesktop>_AvatarCamerasDesktop_
                   );
    func_?(&
                    AvatarCamerasTouch_MethodInfo__UnityEngine__Object__Instantiate<AvatarCamerasTouch>_AvatarCamerasTouch_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  Avatar::Avatar_Initialize((Avatar *)this,mvAvatar,isLocal,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    original = (this->fields).avatarCamerasDesktop;
    method_00 = 
    AvatarCamerasDesktop_MethodInfo__UnityEngine__Object__Instantiate<AvatarCamerasDesktop>_AvatarCamerasDesktop_
    ;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
      method_00 = 
      AvatarCamerasDesktop_MethodInfo__UnityEngine__Object__Instantiate<AvatarCamerasDesktop>_AvatarCamerasDesktop_
      ;
    }
  }
  else {
    original = (AvatarCamerasDesktop *)(this->fields).avatarCamerasMobile;
    method_00 = 
    AvatarCamerasTouch_MethodInfo__UnityEngine__Object__Instantiate<AvatarCamerasTouch>_AvatarCamerasTouch_
    ;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
      method_00 = 
      AvatarCamerasTouch_MethodInfo__UnityEngine__Object__Instantiate<AvatarCamerasTouch>_AvatarCamerasTouch_
      ;
    }
  }
  pIVar1 = (IAvatarCameraController *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,method_00);
  (this->fields).avatarCameraController = pIVar1;
  func_?(&(this->fields).avatarCameraController);
  pIVar1 = (this->fields).avatarCameraController;
  if (pIVar1 == (IAvatarCameraController *)0x0) {
    func_?();
  }
  else if ((mvAvatar == (MVAvatar *)0x0) ||
          (((TypeInfo__MVAvatarLocal->_1).naturalAligment <= (mvAvatar->klass->_1).naturalAligment
           && ((MVAvatarLocal__Class *)
               (mvAvatar->klass->_1).typeHierarchy
               [(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] == TypeInfo__MVAvatarLocal)))) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__IAvatarCameraController) {
          ppMVar5 = &(&(pIVar2->vtable).Initialize)[pIVar2->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)func_?(pIVar1,TypeInfo__IAvatarCameraController);
code_?:
    (*(code *)*ppMVar5)(pIVar1,mvAvatar);
    layer = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Hidden,(MethodInfo *)0x0);
    AvatarLocal_CreateXPParticlesWithLayer(this,0,layer,(MethodInfo *)0x0);
    return;
  }
  func_?(mvAvatar);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarLocal::AvatarLocal_OnDestroy(AvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__MonoBehaviour);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (Component *)(this->fields).avatarCameraController;
  if (pCVar1 == (Component *)0x0) {
    this_00 = (Component *)0x0;
  }
  else {
    if (((pCVar1->klass->_1).naturalAligment <
         (TypeInfo__UnityEngine__MonoBehaviour->_1).naturalAligment) ||
       ((pCVar1->klass->_1).typeHierarchy
        [(TypeInfo__UnityEngine__MonoBehaviour->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__UnityEngine__MonoBehaviour)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    this_00 = (Component *)0x0;
    if (bVar2) {
      this_00 = pCVar1;
    }
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (this_00 == (Component *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    (this->fields).avatarCameraController = (IAvatarCameraController *)0x0;
    func_?();
  }
  return;
}


/* Void OnXpProgressing(Int32) */

void Assembly-CSharp.dll::AvatarLocal::AvatarLocal_OnXpProgressing
               (AvatarLocal *this,int32_t xp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_OnXpProgressing);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_OnXpProgressing,(MethodInfo *)0x0);
  pMVar1 = (this->fields)._.mvAvatar;
  if (((pMVar1 != (MVAvatar *)0x0) && (pMVar2 = (pMVar1->fields).body, pMVar2 != (MVBody *)0x0)) &&
     (this_00 = (pMVar2->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    layer = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (this_00,(MethodInfo *)0x0);
    AvatarLocal_CreateXPParticlesWithLayer(this,xp,layer,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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


/* AvatarLocal() */

void Assembly-CSharp.dll::AvatarLocal::AvatarLocal__ctor(AvatarLocal *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Dictionary__
            );
  (this->fields)._.modifiers = (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)pDVar1;
  func_?(&(this->fields)._.modifiers,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Dictionary__
            );
  (this->fields)._.currentModifierByteState =
       (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)pDVar1;
  func_?(&(this->fields)._.currentModifierByteState,pDVar1);
  pBVar2 = (Byte__Array *)func_?(TypeInfo__System__Byte,0x1b);
  (this->fields)._.modifierEffectCount = pBVar2;
  func_?(&(this->fields)._.modifierEffectCount,pBVar2);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

