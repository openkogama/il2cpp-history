
/* Void AddPostProcessing(GameObject, MainCameraManager, LayerFlags) */

void Assembly-CSharp.dll::GenerateTextureData::GenerateTextureData_AddPostProcessing
               (GameObject *screenshotCamObject,MainCameraManager *mainCameraManager,
               LayerFlags__Enum layers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  PostProcessingManager_MethodInfo__UnityEngine__GameObject__AddComponent<PostProcessingManager>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostProcessingManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  cVar1 = FUN_?();
  if (cVar1 == '\0') {
    return;
  }
  if (screenshotCamObject != (GameObject *)0x0) {
    this = (PostProcessingManager *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                     (screenshotCamObject,
                      PostProcessingManager_MethodInfo__UnityEngine__GameObject__AddComponent<PostProcessingManager>__
                     );
    if (*(int *)&(TypeInfo__PostProcessingManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pPVar2 = TypeInfo__PostProcessingManager->static_fields;
    if (this != (PostProcessingManager *)0x0) {
      PStack_3.colorSettings.colors = (pPVar2->CurrentPostProcessingSettings).colorSettings.colors;
      PStack_3.colorSettings._1_3_ =
           *(undefined3 *)&(pPVar2->CurrentPostProcessingSettings).colorSettings.field_0x1;
      PStack_3.colorSettings.postExposure =
           (pPVar2->CurrentPostProcessingSettings).colorSettings.postExposure;
      PStack_3.colorSettings.temperature =
           (pPVar2->CurrentPostProcessingSettings).colorSettings.temperature;
      PStack_3.colorSettings.saturation =
           (pPVar2->CurrentPostProcessingSettings).colorSettings.saturation;
      PStack_3._16_8_ =
           *(undefined8 *)&(pPVar2->CurrentPostProcessingSettings).colorSettings.contrast;
      PStack_3.bloomSettings.intensity =
           (pPVar2->CurrentPostProcessingSettings).bloomSettings.intensity;
      PStack_3.bloomSettings.softKnee =
           (pPVar2->CurrentPostProcessingSettings).bloomSettings.softKnee;
      PStack_3.bloomSettings.diffusion =
           (pPVar2->CurrentPostProcessingSettings).bloomSettings.diffusion;
      PStack_3.bloomSettings.color.r =
           (pPVar2->CurrentPostProcessingSettings).bloomSettings.color.r;
      PStack_3.bloomSettings.color.g =
           (pPVar2->CurrentPostProcessingSettings).bloomSettings.color.g;
      PStack_3.bloomSettings.color.b =
           (pPVar2->CurrentPostProcessingSettings).bloomSettings.color.b;
      PStack_3._48_8_ =
           *(undefined8 *)&(pPVar2->CurrentPostProcessingSettings).bloomSettings.color.a;
      PStack_3.ambientOcclusionSettings.intensity =
           (pPVar2->CurrentPostProcessingSettings).ambientOcclusionSettings.intensity;
      PStack_3.ambientOcclusionSettings.thickness =
           (pPVar2->CurrentPostProcessingSettings).ambientOcclusionSettings.thickness;
      PStack_3.ambientOcclusionSettings.color.r =
           (pPVar2->CurrentPostProcessingSettings).ambientOcclusionSettings.color.r;
      PStack_3.ambientOcclusionSettings.color.g =
           (pPVar2->CurrentPostProcessingSettings).ambientOcclusionSettings.color.g;
      PStack_3.ambientOcclusionSettings.color.b =
           (pPVar2->CurrentPostProcessingSettings).ambientOcclusionSettings.color.b;
      PStack_3.ambientOcclusionSettings.color.a =
           (pPVar2->CurrentPostProcessingSettings).ambientOcclusionSettings.color.a;
      PStack_3.depthOfFieldSettings.depthOfField =
           (pPVar2->CurrentPostProcessingSettings).depthOfFieldSettings.depthOfField;
      PStack_3.depthOfFieldSettings._1_3_ =
           *(undefined3 *)&(pPVar2->CurrentPostProcessingSettings).depthOfFieldSettings.field_0x1;
      PStack_3.depthOfFieldSettings.focusDistance =
           (pPVar2->CurrentPostProcessingSettings).depthOfFieldSettings.focusDistance;
      PStack_3.depthOfFieldSettings.aperture =
           (pPVar2->CurrentPostProcessingSettings).depthOfFieldSettings.aperture;
      PStack_3.depthOfFieldSettings.focalLength =
           (pPVar2->CurrentPostProcessingSettings).depthOfFieldSettings.focalLength;
      PStack_3._96_8_ =
           *(undefined8 *)&(pPVar2->CurrentPostProcessingSettings).depthOfFieldSettings.maxBlurSize;
      PStack_3.vignetteSettings.intensity =
           (pPVar2->CurrentPostProcessingSettings).vignetteSettings.intensity;
      PStack_3.vignetteSettings.smoothness =
           (pPVar2->CurrentPostProcessingSettings).vignetteSettings.smoothness;
      PStack_3.vignetteSettings._28_8_ =
           *(undefined8 *)&(pPVar2->CurrentPostProcessingSettings).vignetteSettings.color.a;
      PStack_3.grainSettings.grain = (pPVar2->CurrentPostProcessingSettings).grainSettings.grain;
      PStack_3.grainSettings._1_3_ =
           *(undefined3 *)&(pPVar2->CurrentPostProcessingSettings).grainSettings.field_0x1;
      PStack_3.grainSettings.intensity =
           (pPVar2->CurrentPostProcessingSettings).grainSettings.intensity;
      PStack_3.vignetteSettings.roundness =
           (pPVar2->CurrentPostProcessingSettings).vignetteSettings.roundness;
      PStack_3.vignetteSettings.color.r =
           (pPVar2->CurrentPostProcessingSettings).vignetteSettings.color.r;
      PStack_3.vignetteSettings.color.g =
           (pPVar2->CurrentPostProcessingSettings).vignetteSettings.color.g;
      PStack_3.vignetteSettings.color.b =
           (pPVar2->CurrentPostProcessingSettings).vignetteSettings.color.b;
      PStack_3.grainSettings.size = (pPVar2->CurrentPostProcessingSettings).grainSettings.size;
      PStack_3.grainSettings.luminanceContribution =
           (pPVar2->CurrentPostProcessingSettings).grainSettings.luminanceContribution;
      PStack_3.lensDistortionSettings.lensDistortion =
           (pPVar2->CurrentPostProcessingSettings).lensDistortionSettings.lensDistortion;
      PStack_3.lensDistortionSettings._1_3_ =
           *(undefined3 *)&(pPVar2->CurrentPostProcessingSettings).lensDistortionSettings.field_0x1;
      PStack_3.lensDistortionSettings.intensity =
           (pPVar2->CurrentPostProcessingSettings).lensDistortionSettings.intensity;
      PStack_3.lensDistortionSettings.xMultiplier =
           (pPVar2->CurrentPostProcessingSettings).lensDistortionSettings.xMultiplier;
      PStack_3.lensDistortionSettings.yMultiplier =
           (pPVar2->CurrentPostProcessingSettings).lensDistortionSettings.yMultiplier;
      PostProcessingManager::PostProcessingManager_Initialize(this,&PStack_3,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* IEnumerator GenerateTexture(Action`1[Byte[]]) */

IEnumerator *
Assembly-CSharp.dll::GenerateTextureData::GenerateTextureData_GenerateTexture
          (GenerateTextureData *this,Action_1_Byte_ *textureDataCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GenerateTextureData___GenerateTexture_d__5);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__GenerateTextureData___GenerateTexture_d__5);
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].monitor = (MonitorData *)this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  pIVar1[2].klass = (IEnumerator__Class *)textureDataCallback;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return pIVar1;
}


/* Void GenerateTextureDataCameraView(Action`1[Byte[]]) */

void Assembly-CSharp.dll::GenerateTextureData::GenerateTextureData_GenerateTextureDataCameraView
               (GenerateTextureData *this,Action_1_Byte_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Texture_is_being_generated);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GenerateTextureData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField != 0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this,(MethodInfo *)0x0);
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
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
              ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_Texture_is_being_generated;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GenerateTextureData___GenerateTexture_d__5);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar4 = FUN_?(TypeInfo__GenerateTextureData___GenerateTexture_d__5);
  *(undefined4 *)(lVar4 + 0x10) = 0;
  *(GenerateTextureData **)(lVar4 + 0x28) = this;
  if (iRam_? != 0) {
    uVar5 = (uint)(lVar4 + 0x28U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  iVar10 = iRam_?;
  *(Action_1_Byte_ **)(lVar4 + 0x20) = callback;
  if (iVar10 != 0) {
    uVar5 = (uint)(lVar4 + 0x20U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (lVar4 == 0) {
    uVar11 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar11);
    pSVar1 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar1,(MethodInfo *)0x0);
    uVar11 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar11);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar12 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar12 == 0) {
    uVar11 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar11);
    pSVar1 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar1,(MethodInfo *)0x0);
    uVar11 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar11);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (GenerateTextureData *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pvVar13 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar13 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar13,lVar4);
  return;
}


/* Boolean get_IsCreatingScreenShot() */

bool Assembly-CSharp.dll::GenerateTextureData::GenerateTextureData_get_IsCreatingScreenShot
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GenerateTextureData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField;
}


/* Void set_IsCreatingScreenShot(Boolean) */

void Assembly-CSharp.dll::GenerateTextureData::GenerateTextureData_set_IsCreatingScreenShot
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GenerateTextureData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField = value;
  return;
}

