
/* Void Awake() */

void Assembly-CSharp.dll::PreviewObject::PreviewObject_Awake(PreviewObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RenderTexture);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  width = (this->fields).width;
  height = (this->fields).height;
  depth = (this->fields).depth;
  pRVar1 = (RenderTexture *)FUN_?(TypeInfo__UnityEngine__RenderTexture);
  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_9
            (pRVar1,width,height,depth,RenderTextureFormat__Enum_Default,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).renderTexture = pRVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).renderTexture >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pRVar1 = (this->fields).renderTexture;
  if (pRVar1 != (RenderTexture *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_antiAliasing
              (pRVar1,(this->fields).antiAliasing,(MethodInfo *)0x0);
    pRVar1 = (this->fields).renderTexture;
    if (pRVar1 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                ((Texture *)pRVar1,(this->fields).filterMode,(MethodInfo *)0x0);
      pRVar1 = (this->fields).renderTexture;
      if (pRVar1 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                  ((Object_1 *)pRVar1,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
        obj = (this->fields).previewCamera;
        if (obj != (Camera *)0x0) {
          pRVar1 = (this->fields).renderTexture;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                          ,pRVar1,0);
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
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pvVar8 = (obj->fields)._._._.m_CachedPtr;
          if (pvVar8 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          if (pRVar1 == (RenderTexture *)0x0) {
            pvVar9 = (void *)0x0;
          }
          else {
            pvVar9 = (pRVar1->fields)._._.m_CachedPtr;
          }
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar8,pvVar9);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PreviewObject::PreviewObject_OnDestroy
               (PreviewObject *this,MethodInfo *method)

{
  obj = (this->fields).previewCamera;
  if (obj != (Camera *)0x0) {
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
    pvVar1 = (obj->fields)._._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
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
    (*pcRam_?)(pvVar1);
    obj_00 = (this->fields).renderTexture;
    if (obj_00 != (RenderTexture *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar1 = (obj_00->fields)._._.m_CachedPtr;
      if (pvVar1 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar1);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

