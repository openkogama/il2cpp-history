
/* Void Awake() */

void Assembly-CSharp.dll::MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_Awake
               (MaterialButtonTextureGenerator *this,MethodInfo *method)

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


/* Void OnDestroy() */

void Assembly-CSharp.dll::MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_OnDestroy
               (MaterialButtonTextureGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).pictureCamera;
  if (pCVar1 == (Camera *)0x0) goto code_?;
  pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                     (pCVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pRVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pCVar1 = (this->fields).pictureCamera;
    if (pCVar1 == (Camera *)0x0) goto code_?;
    pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture
                       (pCVar1,(MethodInfo *)0x0);
    pCVar1 = (this->fields).pictureCamera;
    if (pCVar1 == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0);
    if (pRVar2 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
              (pRVar2,(MethodInfo *)0x0);
  }
  pCVar1 = (this->fields).pictureCamera;
  if (pCVar1 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Texture2D TakePicture(Mesh) */

Texture2D *
Assembly-CSharp.dll::MaterialButtonTextureGenerator::MaterialButtonTextureGenerator_TakePicture
          (MaterialButtonTextureGenerator *this,Mesh *mesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RenderTexture);
    func_?(&TypeInfo__UnityEngine__Texture2D);
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
        iVar2 = (this->fields).previewResolution;
        this_01 = (RenderTexture *)func_?(TypeInfo__UnityEngine__RenderTexture);
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_10
                  (this_01,iVar2,iVar2,0x10,(MethodInfo *)0x0);
        if (this_01 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                    ((Texture *)this_01,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                    ((Object_1 *)this_01,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
                    (this_01,2,(MethodInfo *)0x0);
          pCVar1 = (this->fields).pictureCamera;
          if (pCVar1 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                      (pCVar1,this_01,(MethodInfo *)0x0);
            pCVar1 = (this->fields).pictureCamera;
            if (pCVar1 != (Camera *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_Render
                        (pCVar1,(MethodInfo *)0x0);
              pCVar1 = (this->fields).pictureCamera;
              if (pCVar1 != (Camera *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)pCVar1,0,(MethodInfo *)0x0);
                iVar2 = (this->fields).previewResolution;
                pTVar3 = (Texture2D *)func_?(TypeInfo__UnityEngine__Texture2D);
                UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_3
                          (pTVar3,iVar2,iVar2,TextureFormat__Enum_ARGB32,0,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                          (this_01,(MethodInfo *)0x0);
                iVar4 = (*(code *)(this_01->klass->vtable).get_width.method)
                                  (this_01,(this_01->klass->vtable).set_width.methodPtr);
                uVar5 = 0;
                uVar6 = 0;
                fVar7 = (float)iVar4;
                iVar4 = (*(code *)(this_01->klass->vtable).get_height.method)
                                  (this_01,(this_01->klass->vtable).set_height.methodPtr);
                if (pTVar3 != (Texture2D *)0x0) {
                  source.m_YMin = (float)uVar6;
                  source.m_XMin = (float)uVar5;
                  source.m_Width = fVar7;
                  source.m_Height = (float)iVar4;
                  UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                            (pTVar3,source,0,0,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                            (pTVar3,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                            ((RenderTexture *)0x0,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                            (this_01,(MethodInfo *)0x0);
                  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this,(MethodInfo *)0x0);
                  if (this_02 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                              (this_02,(Transform *)0x0,(MethodInfo *)0x0);
                    (this->fields).testTexture2D = pTVar3;
                    func_?(&(this->fields).testTexture2D,pTVar3);
                    return pTVar3;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pTVar3 = (Texture2D *)(*pcVar8)();
  return pTVar3;
}


/* MaterialButtonTextureGenerator() */

void Assembly-CSharp.dll::MaterialButtonTextureGenerator::MaterialButtonTextureGenerator__ctor
               (MaterialButtonTextureGenerator *this,MethodInfo *method)

{
  (this->fields).previewResolution = 0x100;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

