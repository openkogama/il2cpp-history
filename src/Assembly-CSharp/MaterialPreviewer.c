
/* Void Awake() */

void Assembly-CSharp.dll::MaterialPreviewer::MaterialPreviewer_Awake
               (MaterialPreviewer *this,MethodInfo *method)

{
  this_00 = (this->fields).meshRenderer;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if ((pMVar1 != (MaterialLoader *)0x0) && (this_00 != (MeshRenderer *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              ((Renderer *)this_00,(pMVar1->fields)._CubeModelMaterial_k__BackingField,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(Mesh) */

void Assembly-CSharp.dll::MaterialPreviewer::MaterialPreviewer_Initialize
               (MaterialPreviewer *this,Mesh *mesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RenderTexture);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).meshFilter;
  if (this_00 != (MeshFilter *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
              (this_00,mesh,(MethodInfo *)0x0);
    pCVar1 = (this->fields).pictureCamera;
    if (pCVar1 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                (pCVar1,1.0,(MethodInfo *)0x0);
      pCVar1 = (this->fields).pictureCamera;
      if (pCVar1 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pCVar1,1,(MethodInfo *)0x0);
        pRVar2 = TypeInfo__UnityEngine__RenderTexture;
        width = (this->fields).previewResolution;
        pRVar3 = (RenderTexture *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_10
                  (pRVar3,width,width,0x10,(MethodInfo *)0x0);
        (pRVar2->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)pRVar3;
        func_?(&(pRVar2->_0).byval_arg);
        this_01 = (Texture *)(pRVar2->_0).byval_arg.data.typeHandle;
        if (this_01 != (Texture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                    (this_01,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
          this_02 = (Object_1 *)(pRVar2->_0).byval_arg.data.typeHandle;
          if (this_02 != (Object_1 *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                      (this_02,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
            pRVar3 = (RenderTexture *)(pRVar2->_0).byval_arg.data.typeHandle;
            if (pRVar3 != (RenderTexture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
                        (pRVar3,2,(MethodInfo *)0x0);
              this_03 = (pRVar2->_0).element_class;
              if (this_03 != (Il2CppClass *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                          ((Camera *)this_03,(RenderTexture *)(pRVar2->_0).byval_arg.data.typeHandle
                           ,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MaterialPreviewer::MaterialPreviewer_OnDestroy
               (MaterialPreviewer *this,MethodInfo *method)

{
  this_00 = (this->fields).pictureCamera;
  if (this_00 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (this_00,(RenderTexture *)0x0,(MethodInfo *)0x0);
    this_01 = (this->fields).renderTexture;
    if (this_01 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                (this_01,(MethodInfo *)0x0);
      (this->fields).renderTexture = (RenderTexture *)0x0;
      func_?(&(this->fields).renderTexture);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MaterialPreviewer::MaterialPreviewer_Update
               (MaterialPreviewer *this,MethodInfo *method)

{
  pTVar1 = (this->fields).cube;
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    uVar2 = (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).y;
    fVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).z;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      auVar5._4_4_ = fVar3;
      auVar5._0_4_ = uVar2;
      auVar5._8_4_ = 0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                (pTVar1,(Vector3)(auVar5 << 0x20),fVar4 * _UNK_?,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MaterialPreviewer() */

void Assembly-CSharp.dll::MaterialPreviewer::MaterialPreviewer__ctor
               (MaterialPreviewer *this,MethodInfo *method)

{
  (this->fields).previewResolution = 0x80;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

