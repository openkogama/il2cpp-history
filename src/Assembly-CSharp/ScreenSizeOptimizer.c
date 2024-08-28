
/* Void Awake() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_Awake
               (ScreenSizeOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ScreenSizeOptimizer);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  ppSStack_2 = (ScreenSizeOptimizer__Class **)(float)iVar1;
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  bVar3 = cRam_? == '\0';
  pSVar4 = TypeInfo__ScreenSizeOptimizer->static_fields;
  (pSVar4->originalSize).x = (float)ppSStack_2;
  (pSVar4->originalSize).y = (float)iVar1;
  if (bVar3) {
    ppSStack_2 = &TypeInfo__ScreenSizeOptimizer;
    func_?();
    ppSStack_5 = &StringLiteral_ScreenSizeOptimizer_UpdateOrigin;
    func_?();
    cRam_? = '\x01';
  }
  ppSStack_2 = (ScreenSizeOptimizer__Class **)0x0;
  ppSStack_5 = (String **)0x0;
  str1 = (String *)func_?(&ppSStack_5,0);
  mscorlib.dll::System::String::String_Concat_3
            (StringLiteral_ScreenSizeOptimizer_UpdateOrigin,str1,(MethodInfo *)0x0);
  pAVar6 = TypeInfo__ScreenSizeOptimizer->static_fields->OnHalfResolution;
  if (pAVar6 != (Action *)0x0) {
    (*(pAVar6->fields)._._.invoke_impl)();
  }
  ScreenSizeOptimizer_HalfResolution((ScreenSizeOptimizer *)0x0,(MethodInfo *)0x0);
  return;
}


/* Void HalfResolution() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_HalfResolution
               (ScreenSizeOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_ScreenSizeOptimizer_HalfResoluti);
    func_?(&StringLiteral__newHeight_);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_touchCount
                    ((MethodInfo *)0x0);
  if (iVar1 < 1) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    IStack_3.m_value = (this->fields).minWidthInPixels;
    if (IStack_3.m_value <= iVar2) {
      if (IStack_3.m_value <= iVar1 / 2) {
        IStack_3.m_value = iVar1 / 2;
      }
      iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      IStack_4.m_value = (int32_t)((float)IStack_3.m_value * ((float)iVar1 / (float)iVar2));
      pSVar5 = mscorlib.dll::System::Single::Single_ToString
                         ((Single *)&stack0xffffffec,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_4,(MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_5
                (StringLiteral_ScreenSizeOptimizer_HalfResoluti,pSVar5,StringLiteral__newHeight_,
                 pSVar6,(MethodInfo *)0x0);
      IStack_7.m_value = IStack_4.m_value;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_7,(MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_5
                (StringLiteral_ScreenSizeOptimizer_SetResolutio,pSVar5,StringLiteral__h_,pSVar6,
                 (MethodInfo *)0x0);
      ppRVar8 = &(this->fields).renderTarget;
      pRVar9 = *ppRVar8;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pRVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ReleaseTemporary
                  (*ppRVar8,(MethodInfo *)0x0);
      }
      pRVar9 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_GetTemporary_4
                         (IStack_3.m_value,IStack_7.m_value,0x18,RenderTextureFormat__Enum_ARGB32,
                          RenderTextureReadWrite__Enum_Default,1,(MethodInfo *)0x0);
      *ppRVar8 = pRVar9;
      func_?();
      if (*ppRVar8 == (RenderTexture *)0x0) {
        func_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                ((Texture *)*ppRVar8,1,(MethodInfo *)0x0);
      width.m_value = IStack_3.m_value;
      height.m_value = IStack_7.m_value;
      if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                (width.m_value,height.m_value,
                 TypeInfo__FullScreenController->static_fields->fullscreenSupported,
                 (MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_OnDestroy
               (ScreenSizeOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullScreenController);
    func_?(&TypeInfo__ScreenSizeOptimizer);
    func_?(&StringLiteral__y_);
    func_?(&StringLiteral_ScreenSizeOptimizer_OnDestroy___);
    cRam_? = '\x01';
  }
  TypeInfo__ScreenSizeOptimizer->static_fields->OnHalfResolution = (Action *)0x0;
  func_?(&TypeInfo__ScreenSizeOptimizer->static_fields->OnHalfResolution,0);
  str1 = mscorlib.dll::System::Single::Single_ToString
                   ((Single *)TypeInfo__ScreenSizeOptimizer->static_fields,(MethodInfo *)0x0);
  str3 = mscorlib.dll::System::Single::Single_ToString
                   ((Single *)&(TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).y,
                    (MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_5
            (StringLiteral_ScreenSizeOptimizer_OnDestroy___,str1,StringLiteral__y_,str3,
             (MethodInfo *)0x0);
  fVar1 = (TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).x;
  fVar2 = (TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).y;
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  width = (int)fVar1;
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
            (width,(int)fVar2,TypeInfo__FullScreenController->static_fields->fullscreenSupported,
             (MethodInfo *)0x0);
  puVar3 = (undefined4 *)(width + 0x14);
  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ReleaseTemporary
            ((RenderTexture *)*puVar3,(MethodInfo *)0x0);
  *puVar3 = 0;
  func_?();
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
    func_?(&TypeInfo__FullScreenController);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral__h_);
    func_?(&StringLiteral_ScreenSizeOptimizer_SetResolutio);
    cRam_? = '\x01';
  }
  str1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&newWidth,(MethodInfo *)0x0);
  str3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&newHeight,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_5
            (StringLiteral_ScreenSizeOptimizer_SetResolutio,str1,StringLiteral__h_,str3,
             (MethodInfo *)0x0);
  ppRVar1 = &(this->fields).renderTarget;
  pRVar2 = *ppRVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    method = (MethodInfo *)&UNK_?;
    func_?();
  }
  method = (MethodInfo *)0x0;
  newWidth = (int32_t)&UNK_?;
  newHeight = (int32_t)pRVar2;
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pRVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ReleaseTemporary
              (*ppRVar1,(MethodInfo *)0x0);
  }
  iVar4 = newHeight;
  method = (MethodInfo *)newWidth;
  newHeight = (int32_t)&UNK_?;
  pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_GetTemporary_4
                     (newWidth,iVar4,0x18,RenderTextureFormat__Enum_ARGB32,
                      RenderTextureReadWrite__Enum_Default,1,(MethodInfo *)0x0);
  *ppRVar1 = pRVar2;
  func_?();
  if (*ppRVar1 != (RenderTexture *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
              ((Texture *)*ppRVar1,1,(MethodInfo *)0x0);
    height = newHeight;
    iVar4 = newWidth;
    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
              (iVar4,height,TypeInfo__FullScreenController->static_fields->fullscreenSupported,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateOriginalSizeIfNecessary() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_UpdateOriginalSizeIfNecessary
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ScreenSizeOptimizer);
    func_?(&StringLiteral_ScreenSizeOptimizer_UpdateOrigin);
    cRam_? = '\x01';
  }
  fStack_1 = (TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).x;
  fStack_2 = (TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).y;
  str1 = (String *)func_?(&fStack_1,0,0,0);
  mscorlib.dll::System::String::String_Concat_3
            (StringLiteral_ScreenSizeOptimizer_UpdateOrigin,str1,(MethodInfo *)0x0);
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

