
/* Void Awake() */

void Assembly-CSharp.dll::MaterialPreviewer::MaterialPreviewer_Awake
               (MaterialPreviewer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).meshRenderer;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if ((pMVar1 != (MaterialLoader *)0x0) && (this_00 != (MeshRenderer *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              ((Renderer *)this_00,(pMVar1->fields)._CubeModelMaterial_k__BackingField,
               (MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(Mesh) */

void Assembly-CSharp.dll::MaterialPreviewer::MaterialPreviewer_Initialize
               (MaterialPreviewer *this,Mesh *mesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
        width = (this->fields).previewResolution;
        pRVar2 = (RenderTexture *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_6
                  (pRVar2,width,width,0x10,(MethodInfo *)0x0);
        (this->fields).renderTexture = pRVar2;
        if (pRVar2 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                    ((Texture *)pRVar2,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
          pRVar2 = (this->fields).renderTexture;
          if (pRVar2 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                      ((Object_1 *)pRVar2,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
            pRVar2 = (this->fields).renderTexture;
            if (pRVar2 != (RenderTexture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
                        (pRVar2,2,(MethodInfo *)0x0);
              pCVar1 = (this->fields).pictureCamera;
              if (pCVar1 != (Camera *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                          (pCVar1,(this->fields).renderTexture,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).cube;
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                       (&VStack_3,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fVar5 = pVVar2->z;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      axis.z = fVar5;
      axis.x = (float)(undefined4)uStack_4;
      axis.y = (float)uStack_4._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
                (pTVar1,axis,fVar6 * _UNK_?,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MaterialPreviewer() */

void Assembly-CSharp.dll::MaterialPreviewer::MaterialPreviewer__ctor
               (MaterialPreviewer *this,MethodInfo *method)

{
  (this->fields).previewResolution = 0x80;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

