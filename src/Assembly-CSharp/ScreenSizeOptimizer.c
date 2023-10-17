
/* Void Awake() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_Awake
               (ScreenSizeOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ScreenSizeOptimizer);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  fVar2 = (float)iVar1;
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  pSVar3 = TypeInfo__ScreenSizeOptimizer->static_fields;
  (pSVar3->originalSize).x = fVar2;
  (pSVar3->originalSize).y = (float)iVar1;
  if (TypeInfo__ScreenSizeOptimizer->static_fields->OnHalfResolution != (Action *)0x0) {
    pAVar4 = TypeInfo__ScreenSizeOptimizer->static_fields->OnHalfResolution;
    (*(pAVar4->fields)._._.invoke_impl)
              ((pAVar4->fields)._._.method_code,(pAVar4->fields)._._.method);
  }
  iVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                    ((MethodInfo *)0x0);
  if (iVar1 < 1) {
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    if ((this->fields).minWidthInPixels <= iVar1) {
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      width = &UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pRVar5 = (this->fields).renderTarget;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      height = &UNK_?;
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pRVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ReleaseTemporary
                  ((this->fields).renderTarget,(MethodInfo *)0x0);
      }
      pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_GetTemporary_1
                         ((int32_t)width,(int32_t)height,0x18,RenderTextureFormat__Enum_ARGB32,
                          RenderTextureReadWrite__Enum_Default,1,(MethodInfo *)0x0);
      (this->fields).renderTarget = pRVar5;
      func_?();
      pRVar5 = (this->fields).renderTarget;
      if (pRVar5 == (RenderTexture *)0x0) {
        func_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                ((Texture *)pRVar5,1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                ((int32_t)width,(int32_t)height,1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void HalfResolution() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_HalfResolution
               (ScreenSizeOptimizer *this,MethodInfo *method)

{
  iVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                    ((MethodInfo *)0x0);
  if (iVar1 < 1) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    width = iVar1 / 2;
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    if ((this->fields).minWidthInPixels <= iVar1) {
      if (width < (this->fields).minWidthInPixels) {
        width = (this->fields).minWidthInPixels;
      }
      iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      height = (int)(((float)iVar1 / (float)iVar2) * (float)width);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Object);
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)0x0,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ReleaseTemporary
                  ((this->fields).renderTarget,(MethodInfo *)0x0);
      }
      pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_GetTemporary_1
                         (width,height,0x18,RenderTextureFormat__Enum_ARGB32,
                          RenderTextureReadWrite__Enum_Default,1,(MethodInfo *)0x0);
      (this->fields).renderTarget = pRVar4;
      func_?();
      pRVar4 = (this->fields).renderTarget;
      if (pRVar4 == (RenderTexture *)0x0) {
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                ((Texture *)pRVar4,1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                (width,height,1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_OnDestroy
               (ScreenSizeOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ScreenSizeOptimizer);
    cRam_? = '\x01';
  }
  TypeInfo__ScreenSizeOptimizer->static_fields->OnHalfResolution = (Action *)0x0;
  func_?(&TypeInfo__ScreenSizeOptimizer->static_fields->OnHalfResolution,0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
            ((int)(TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).x,
             (int)(TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).y,1,(MethodInfo *)0x0
            );
  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ReleaseTemporary
            ((this->fields).renderTarget,(MethodInfo *)0x0);
  (this->fields).renderTarget = (RenderTexture *)0x0;
  func_?(&(this->fields).renderTarget,0);
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_OnPostRender
               (ScreenSizeOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cam;
  if (this_00 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (this_00,(RenderTexture *)0x0,(MethodInfo *)0x0);
    source = (this->fields).renderTarget;
    if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_Blit
              ((Texture *)source,(RenderTexture *)0x0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPreRender() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_OnPreRender
               (ScreenSizeOptimizer *this,MethodInfo *method)

{
  this_00 = (this->fields).cam;
  if (this_00 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (this_00,(this->fields).renderTarget,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetResolution(Int32, Int32) */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_SetResolution
               (ScreenSizeOptimizer *this,int32_t newWidth,int32_t newHeight,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).renderTarget;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pRVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ReleaseTemporary
              ((this->fields).renderTarget,(MethodInfo *)0x0);
  }
  pRVar1 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_GetTemporary_1
                     (newWidth,newHeight,0x18,RenderTextureFormat__Enum_ARGB32,
                      RenderTextureReadWrite__Enum_Default,1,(MethodInfo *)0x0);
  (this->fields).renderTarget = pRVar1;
  func_?();
  pRVar1 = (this->fields).renderTarget;
  if (pRVar1 != (RenderTexture *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
              ((Texture *)pRVar1,1,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
              (newWidth,newHeight,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* ScreenSizeOptimizer() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer__ctor
               (ScreenSizeOptimizer *this,MethodInfo *method)

{
  (this->fields).minWidthInPixels = 0x400;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

