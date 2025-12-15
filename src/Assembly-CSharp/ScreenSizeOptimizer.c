
/* Void Awake() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_Awake
               (ScreenSizeOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ScreenSizeOptimizer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  iVar3 = (*pcRam_?)();
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  pSVar5 = TypeInfo__ScreenSizeOptimizer->static_fields;
  (pSVar5->originalSize).x = (float)iVar3;
  (pSVar5->originalSize).y = (float)iVar4;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ScreenSizeOptimizer);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ScreenSizeOptimizer_UpdateOrigin);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStackX_18 = TypeInfo__ScreenSizeOptimizer->static_fields->originalSize;
  pSVar6 = (String *)FUN_?(&VStackX_18,0);
  mscorlib.dll::System::String::String_Concat_4
            (StringLiteral_ScreenSizeOptimizer_UpdateOrigin,pSVar6,(MethodInfo *)0x0);
  pAVar7 = TypeInfo__ScreenSizeOptimizer->static_fields->OnHalfResolution;
  if (pAVar7 != (Action *)0x0) {
    (*(pAVar7->fields)._._.invoke_impl)
              ((pAVar7->fields)._._.method_code,(pAVar7->fields)._._.method);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ScreenSizeOptimizer,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ScreenSizeOptimizer_HalfResoluti);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__newHeight_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  iVar3 = (*pcRam_?)();
  if (iVar3 < 1) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    iVar3 = (*pcRam_?)();
    if ((this->fields).minWidthInPixels <= iVar3) {
      TypeInfo__ScreenSizeOptimizer->static_fields->IsInHalfResolution = 1;
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      iVar3 = (*pcRam_?)();
      newWidth = iVar3 / 2;
      if (newWidth < (this->fields).minWidthInPixels) {
        newWidth = (this->fields).minWidthInPixels;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      iVar3 = (*pcRam_?)();
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      iVar4 = (*pcRam_?)();
      newHeight = (float)(int)((float)newWidth * ((float)iVar3 / (float)iVar4));
      VStackX_18.x = newHeight;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                       ((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar6 = mscorlib.dll::System::Number::Number_FormatSingle
                         ((float)iVar3 / (float)iVar4,(String *)0x0,info,(MethodInfo *)0x0);
      str3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&VStackX_18,(MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_6
                (StringLiteral_ScreenSizeOptimizer_HalfResoluti,pSVar6,StringLiteral__newHeight_,
                 str3,(MethodInfo *)0x0);
      ScreenSizeOptimizer_SetResolution(this,newWidth,(int32_t)newHeight,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void HalfResolution() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_HalfResolution
               (ScreenSizeOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ScreenSizeOptimizer);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ScreenSizeOptimizer_HalfResoluti);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__newHeight_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  iVar3 = (*pcRam_?)();
  if (iVar3 < 1) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    iVar3 = (*pcRam_?)();
    if ((this->fields).minWidthInPixels <= iVar3) {
      TypeInfo__ScreenSizeOptimizer->static_fields->IsInHalfResolution = 1;
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      iVar3 = (*pcRam_?)();
      newWidth = iVar3 / 2;
      if (newWidth < (this->fields).minWidthInPixels) {
        newWidth = (this->fields).minWidthInPixels;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      iVar3 = (*pcRam_?)();
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      iVar4 = (*pcRam_?)();
      newHeight = (int)((float)newWidth * ((float)iVar3 / (float)iVar4));
      aIStackX_18[0].m_value = newHeight;
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                       ((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      str1 = mscorlib.dll::System::Number::Number_FormatSingle
                       ((float)iVar3 / (float)iVar4,(String *)0x0,info,(MethodInfo *)0x0);
      str3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_6
                (StringLiteral_ScreenSizeOptimizer_HalfResoluti,str1,StringLiteral__newHeight_,str3,
                 (MethodInfo *)0x0);
      ScreenSizeOptimizer_SetResolution(this,newWidth,newHeight,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_OnDestroy
               (ScreenSizeOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ScreenSizeOptimizer);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__y_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ScreenSizeOptimizer_OnDestroy___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__ScreenSizeOptimizer->static_fields->OnHalfResolution = (Action *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__ScreenSizeOptimizer->static_fields->OnHalfResolution >>
                   0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  str1 = mscorlib.dll::System::Single::Single_ToString
                   ((Single *)TypeInfo__ScreenSizeOptimizer->static_fields,(MethodInfo *)0x0);
  str3 = mscorlib.dll::System::Single::Single_ToString
                   ((Single *)&(TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).y,
                    (MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_6
            (StringLiteral_ScreenSizeOptimizer_OnDestroy___,str1,StringLiteral__y_,str3,
             (MethodInfo *)0x0);
  fVar6 = (TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).x;
  fVar7 = (TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).y;
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
            ((int)fVar6,(int)fVar7,
             TypeInfo__FullScreenController->static_fields->fullscreenSupported,(MethodInfo *)0x0);
  pRVar8 = (this->fields).renderTarget;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar9 = (void *)0x0;
  if (pRVar8 != (RenderTexture *)0x0) {
    pvVar9 = (pRVar8->fields)._._.m_CachedPtr;
  }
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pcRam_? = pcVar10;
  (*pcRam_?)(pvVar9);
  bVar5 = iRam_? != 0;
  (this->fields).renderTarget = (RenderTexture *)0x0;
  if (bVar5) {
    uVar1 = (uint)((ulonglong)&(this->fields).renderTarget >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_OnPostRender
               (ScreenSizeOptimizer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = (this->fields).cam;
  if (obj == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar2);
  pRVar4 = (this->fields).renderTarget;
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics,0,0,in_R9,unaff_RDI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Texture>_UnityEngine__Texture_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Texture>_UnityEngine__Texture_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar2 = (void *)0x0;
  if (pRVar4 != (RenderTexture *)0x0) {
    pvVar2 = (pRVar4->fields)._._.m_CachedPtr;
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void OnPreRender() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_OnPreRender
               (ScreenSizeOptimizer *this,MethodInfo *method)

{
  obj = (this->fields).cam;
  if (obj == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pRVar2 = (this->fields).renderTarget;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                  ,pRVar2,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar3 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  if (pRVar2 == (RenderTexture *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = (pRVar2->fields)._._.m_CachedPtr;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,pvVar4);
  return;
}


/* Void SetResolution(Int32, Int32) */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_SetResolution
               (ScreenSizeOptimizer *this,int32_t newWidth,int32_t newHeight,MethodInfo *method)

{
  aIStackX_10[0].m_value = newWidth;
  aIStackX_18[0].m_value = newHeight;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__h_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ScreenSizeOptimizer_SetResolutio);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  str1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  str3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_6
            (StringLiteral_ScreenSizeOptimizer_SetResolutio,str1,StringLiteral__h_,str3,
             (MethodInfo *)0x0);
  pRVar1 = (this->fields).renderTarget;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pRVar1 != (RenderTexture *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)();
    }
  }
  colorFormat = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                RenderTexture_GetCompatibleFormat
                          (RenderTextureFormat__Enum_ARGB32,RenderTextureReadWrite__Enum_Default,
                           (MethodInfo *)0x0);
  depthStencilFormat =
       UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
       RenderTexture_GetDepthStencilFormatLegacy_4(0x18,0,(MethodInfo *)0x0);
  RStack_4._memoryless_k__BackingField = 0;
  RStack_4._width_k__BackingField = 0;
  RStack_4._height_k__BackingField = 0;
  RStack_4._msaaSamples_k__BackingField = 0;
  RStack_4._volumeDepth_k__BackingField = 0;
  RStack_4._mipCount_k__BackingField = 0;
  RStack_4._graphicsFormat = 0;
  RStack_4._stencilFormat_k__BackingField = 0;
  RStack_4._depthStencilFormat_k__BackingField = 0;
  RStack_4._dimension_k__BackingField = 0;
  RStack_4._shadowSamplingMode_k__BackingField = 0;
  RStack_4._vrUsage_k__BackingField = 0;
  RStack_4._flags = 0;
  UnityEngine.CoreModule.dll::UnityEngine::RenderTextureDescriptor::RenderTextureDescriptor__ctor
            (&RStack_4,newWidth,newHeight,colorFormat,depthStencilFormat,(MethodInfo *)0x0);
  RStack_4._msaaSamples_k__BackingField = 1;
  RStack_4._shadowSamplingMode_k__BackingField = 2;
  RStack_4._vrUsage_k__BackingField = 0;
  iStack_5 = 0;
  auStack_6._0_4_ = RStack_4._width_k__BackingField;
  auStack_6._4_4_ = RStack_4._height_k__BackingField;
  auStack_6._8_4_ = 1;
  auStack_6._12_4_ = RStack_4._volumeDepth_k__BackingField;
  auStack_6._36_4_ = 2;
  auStack_6._32_4_ = RStack_4._dimension_k__BackingField;
  lStack_7 = ((ulonglong)(uint)RStack_4._flags & 0xfffffbff) << 0x20;
  auStack_6._16_4_ = RStack_4._mipCount_k__BackingField;
  auStack_6._20_4_ = RStack_4._graphicsFormat;
  auStack_6._24_4_ = RStack_4._stencilFormat_k__BackingField;
  auStack_6._28_4_ = RStack_4._depthStencilFormat_k__BackingField;
  RStack_4._flags = RStack_4._flags & 0xfffffbff;
  pRVar1 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_GetTemporary
                     ((RenderTextureDescriptor *)auStack_6,(MethodInfo *)0x0);
  bVar8 = iRam_? != 0;
  (this->fields).renderTarget = pRVar1;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&(this->fields).renderTarget >> 0xc);
    puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar11 = *puVar10;
      LOCK();
      uVar12 = *puVar10;
      if (uVar11 == uVar12) {
        *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (uVar11 != uVar12);
  }
  pRVar1 = (this->fields).renderTarget;
  if (pRVar1 != (RenderTexture *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
              ((Texture *)pRVar1,1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__FullScreenController);
    }
    bVar13 = TypeInfo__FullScreenController->static_fields->fullscreenSupported;
    pcVar2 = pcRam_?;
    if (pcRam_? == (code *)0x0) {
      auStack_6._24_8_ = &UNK_?;
      pcVar2 = (code *)FUN_?(&UNK_?,newHeight,bVar13,0);
      if (pcVar2 == (code *)0x0) {
        auStack_6._24_8_ = &UNK_?;
        uVar3 = func_?(&UNK_?);
        auStack_6._24_8_ = &UNK_?;
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pcRam_? = pcVar2;
    auStack_6._24_8_ = &UNK_?;
    (*pcRam_?)(newWidth,newHeight,(bVar13 ^ 1) * 2 + 1,&stack0xffffffffffffffe8);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateOriginalSizeIfNecessary() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer_UpdateOriginalSizeIfNecessary
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ScreenSizeOptimizer);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ScreenSizeOptimizer_UpdateOrigin);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(&stack0x00000010,0,0);
  pSVar2 = StringLiteral_ScreenSizeOptimizer_UpdateOrigin;
  if ((StringLiteral_ScreenSizeOptimizer_UpdateOrigin == (String *)0x0) ||
     ((StringLiteral_ScreenSizeOptimizer_UpdateOrigin->fields)._stringLength == 0)) {
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x10) != 0)) {
      return;
    }
    return;
  }
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x10) == 0)) {
    return;
  }
  iVar3 = (StringLiteral_ScreenSizeOptimizer_UpdateOrigin->fields)._stringLength;
  lVar4 = FUN_?(*(int *)(lVar1 + 0x10) + iVar3,lVar1,0);
  if (lVar4 == 0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pSVar2->fields)._stringLength <= *(int *)(lVar4 + 0x10)) {
    puVar6 = (uint8_t *)(lVar4 + 0x14);
    src = &(pSVar2->fields)._firstChar;
    uVar7 = (pSVar2->fields)._stringLength * 2;
    if (((ulonglong)((longlong)puVar6 - (longlong)src) < (ulonglong)uVar7) ||
       ((ulonglong)((longlong)src - (longlong)puVar6) < (ulonglong)uVar7)) {
      FUN_?();
    }
    else {
      mscorlib.dll::System::Buffer::Buffer_Memcpy_1(puVar6,(uint8_t *)src,uVar7,(MethodInfo *)0x0);
    }
    if (*(int *)(lVar1 + 0x10) <= *(int *)(lVar4 + 0x10) - iVar3) {
      dest = (uint8_t *)(lVar4 + ((longlong)iVar3 + 10) * 2);
      puVar6 = (uint8_t *)(lVar1 + 0x14);
      uVar7 = *(int *)(lVar1 + 0x10) * 2;
      if (((ulonglong)((longlong)dest - (longlong)puVar6) < (ulonglong)uVar7) ||
         ((ulonglong)((longlong)puVar6 - (longlong)dest) < (ulonglong)uVar7)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1(dest,puVar6,uVar7,(MethodInfo *)0x0);
      }
      return;
    }
    uVar8 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar9 = (IndexOutOfRangeException *)func_?(uVar8);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar9,(MethodInfo *)0x0);
    uVar8 = func_?(&
                                MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                               );
    FUN_?(pIVar9,uVar8);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  pIVar9 = (IndexOutOfRangeException *)func_?(uVar8);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
            (pIVar9,(MethodInfo *)0x0);
  uVar8 = func_?(&
                              MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                             );
  FUN_?(pIVar9,uVar8);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ScreenSizeOptimizer() */

void Assembly-CSharp.dll::ScreenSizeOptimizer::ScreenSizeOptimizer__ctor
               (ScreenSizeOptimizer *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).minWidthInPixels = 0x400;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052a1b1,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

