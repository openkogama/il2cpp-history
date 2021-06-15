
/* Void FaceGameObject(GameObject) */

void Assembly-CSharp.dll::XpBoostParticlePreviewer::XpBoostParticlePreviewer_FaceGameObject
               (XpBoostParticlePreviewer *this,GameObject *go,MethodInfo *method)

{
  this_00 = (this->fields).previewCam;
  if (this_00 != (Camera *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (go != (GameObject *)0x0) {
      target = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (go,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt
                  (this_01,target,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(Int32, Int32, CameraClearFlags, LayerFlags, Vector3, Vector3) */

void Assembly-CSharp.dll::XpBoostParticlePreviewer::XpBoostParticlePreviewer_Initialize
               (XpBoostParticlePreviewer *this,int32_t textureWidth,int32_t textureHeight,
               CameraClearFlags__Enum clearFlags,LayerFlags__Enum layersToRender,
               Vector3 cameraOffset,Vector3 previewPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).xpBoostParticles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
              (pPVar1,(MethodInfo *)0x0);
    (this->fields).layersToRender = layersToRender | LayerFlags__Enum_Hidden;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      VStack_4.z = (float)TypeInfo__System__String;
      VStack_4.y = (float)&UNK_?;
      func_?();
    }
    pSVar3 = mscorlib.dll::System::String::String_Format
                       (StringLiteral_Preview__0__RenderCam,(Object *)pSVar3,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                ((Object_1 *)pGVar2,pSVar3,(MethodInfo *)0x0);
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Preview,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                  (pGVar2,value,(MethodInfo *)0x0);
        value_00 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                   RenderTexture_GetTemporary_1
                             (textureWidth,textureHeight,0x10,RenderTextureFormat__Enum_ARGB32,
                              RenderTextureReadWrite__Enum_Default,2,(MethodInfo *)0x0);
        pCVar5 = (this->fields).previewCam;
        (this->fields).previewTexture = value_00;
        if (pCVar5 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                    (pCVar5,value_00,(MethodInfo *)0x0);
          pPVar1 = (this->fields).xpBoostParticles;
          if (pPVar1 != (ParticleSystem *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pPVar1,(MethodInfo *)0x0);
            (this->fields)._PreviewGameObject_k__BackingField = pGVar2;
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this,(MethodInfo *)0x0);
            if (pTVar6 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar6,previewPosition,(MethodInfo *)0x0);
              pCVar5 = (this->fields).previewCam;
              if (pCVar5 != (Camera *)0x0) {
                pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)pCVar5,(MethodInfo *)0x0);
                pPVar1 = (this->fields).xpBoostParticles;
                if (pPVar1 != (ParticleSystem *)0x0) {
                  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_transform((Component_1 *)pPVar1,(MethodInfo *)0x0);
                  if (this_00 != (Transform *)0x0) {
                    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_position(&VStack_4,this_00,(MethodInfo *)0x0);
                    if (pTVar6 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                                (pTVar6,*pVVar7,(MethodInfo *)0x0);
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
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::XpBoostParticlePreviewer::XpBoostParticlePreviewer_OnDestroy
               (XpBoostParticlePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).previewCam;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pCVar1 = (this->fields).previewCam;
    if (pCVar1 == (Camera *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0);
  }
  x = (this->fields).previewTexture;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ReleaseTemporary
              ((this->fields).previewTexture,(MethodInfo *)0x0);
    (this->fields).previewTexture = (RenderTexture *)0x0;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                  ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::XpBoostParticlePreviewer::XpBoostParticlePreviewer_OnPostRender
               (XpBoostParticlePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._PreviewGameObject_k__BackingField;
  if (this_00 != (GameObject *)0x0) {
    transfrom = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
    LayerUtil::LayerUtil_SetLayerRecursively_3
              (transfrom,StringLiteral_Preview,StringLiteral_Hidden,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPreCull() */

void Assembly-CSharp.dll::XpBoostParticlePreviewer::XpBoostParticlePreviewer_OnPreCull
               (XpBoostParticlePreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._PreviewGameObject_k__BackingField;
  if (this_00 != (GameObject *)0x0) {
    transfrom = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
    layersToChange.m_Mask =
         (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                            ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                              *)(this->fields).layersToRender,(MethodInfo *)0x0);
    layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Preview,(MethodInfo *)0x0);
    LayerUtil::LayerUtil_SetLayerRecursively_2(transfrom,layersToChange,layer,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OverrideCameraForPreviewer(Vector3, Vector3) */

void Assembly-CSharp.dll::XpBoostParticlePreviewer::
     XpBoostParticlePreviewer_OverrideCameraForPreviewer
               (XpBoostParticlePreviewer *this,Vector3 cameraAngle,Vector3 cameraOffset,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).previewCam;
  if (this_00 != (Camera *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                       ((Quaternion *)&stack0xffffffec,cameraAngle,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_01,*pQVar1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,cameraOffset,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartParticleSystem() */

void Assembly-CSharp.dll::XpBoostParticlePreviewer::XpBoostParticlePreviewer_StartParticleSystem
               (XpBoostParticlePreviewer *this,MethodInfo *method)

{
  this_00 = (this->fields).xpBoostParticles;
  (this->fields).isParticlesPlaying = 1;
  if (((this_00 != (ParticleSystem *)0x0) &&
      (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)
      ) && (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,1,(MethodInfo *)0x0),
           (this->fields).xpBoostParticles != (ParticleSystem *)0x0)) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)func_?(), pcVar1 == (code *)0x0)) {
      func_?();
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    uStack2 = 1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)();
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StopParticleSystem() */

void Assembly-CSharp.dll::XpBoostParticlePreviewer::XpBoostParticlePreviewer_StopParticleSystem
               (XpBoostParticlePreviewer *this,MethodInfo *method)

{
  pPVar1 = (this->fields).xpBoostParticles;
  (this->fields).isParticlesPlaying = 0;
  if (pPVar1 != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
              (pPVar1,(MethodInfo *)0x0);
    pPVar1 = (this->fields).xpBoostParticles;
    if (pPVar1 != (ParticleSystem *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pPVar1,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_PreviewGameObject(GameObject) */

void Assembly-CSharp.dll::XpBoostParticlePreviewer::XpBoostParticlePreviewer_set_PreviewGameObject
               (XpBoostParticlePreviewer *this,GameObject *value,MethodInfo *method)

{
  (this->fields)._PreviewGameObject_k__BackingField = value;
  return;
}

