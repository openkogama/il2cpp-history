
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PlayerInventoryPreviewItem+<DownloadImage>d__22::
     PlayerInventoryPreviewItem_DownloadImage_d_22_MoveNext
               (PlayerInventoryPreviewItem_DownloadImage_d_22 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Networking__DownloadHandlerTexture);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_download_image__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pPVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    pUVar3 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
             UnityWebRequestTexture::UnityWebRequestTexture_GetTexture_1
                       ((this->fields).url,0,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (this->fields)._request_5__2 = pUVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields)._request_5__2 >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pUVar3 = (this->fields)._request_5__2;
    if (pUVar3 != (UnityWebRequest *)0x0) {
      pUVar9 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                UnityWebRequest_SendWebRequest(pUVar3,(MethodInfo *)0x0);
      bVar4 = iRam_? != 0;
      (this->fields).__2__current = (Object *)pUVar9;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
    goto code_?;
  }
  if (iVar1 != 1) {
    return 0;
  }
  pUVar3 = (this->fields)._request_5__2;
  (this->fields).__1__state = -1;
  if (pUVar3 == (UnityWebRequest *)0x0) goto code_?;
  pvVar10 = (pUVar3->fields).m_Ptr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pUVar3,(MethodInfo *)0x0);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  pcVar11 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar11 = (code *)swi(3);
    bVar12 = (*pcVar11)();
    return bVar12;
  }
  pcRam_? = pcVar11;
  iVar1 = (*pcRam_?)(pvVar10);
  if (iVar1 == 2) {
code_?:
    message = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_Could_not_download_image__,(this->fields).url,
                         (MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)message,(MethodInfo *)0x0);
    if ((pPVar2 == (PlayerInventoryPreviewItem *)0x0) ||
       (this_02 = (pPVar2->fields).previewImage, this_02 == (RawImage *)0x0))
    goto code_?;
    value = (Texture2D *)(pPVar2->fields).noImageTexture;
  }
  else {
    pUVar3 = (this->fields)._request_5__2;
    if (pUVar3 == (UnityWebRequest *)0x0) goto code_?;
    pvVar10 = (pUVar3->fields).m_Ptr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pUVar3,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pcRam_? = pcVar11;
    iVar1 = (*pcRam_?)(pvVar10);
    if (iVar1 == 3) goto code_?;
    if (pPVar2 == (PlayerInventoryPreviewItem *)0x0) goto code_?;
    pUVar3 = (this->fields)._request_5__2;
    this_02 = (pPVar2->fields).previewImage;
    if ((pUVar3 == (UnityWebRequest *)0x0) ||
       (pDVar14 = (DownloadHandlerTexture *)(pUVar3->fields).m_DownloadHandler,
       pDVar14 == (DownloadHandlerTexture *)0x0)) goto code_?;
    pDVar15 = (DownloadHandlerTexture *)0x0;
    if (pDVar14->klass == TypeInfo__UnityEngine__Networking__DownloadHandlerTexture) {
      pDVar15 = pDVar14;
    }
    if (pDVar15 == (DownloadHandlerTexture *)0x0) {
      FUN_?();
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    pDVar15 = (DownloadHandlerTexture *)0x0;
    if (pDVar14->klass == TypeInfo__UnityEngine__Networking__DownloadHandlerTexture) {
      pDVar15 = pDVar14;
    }
    value = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
            DownloadHandlerTexture::DownloadHandlerTexture_InternalGetTextureNative
                      (pDVar15,(MethodInfo *)0x0);
    if (this_02 == (RawImage *)0x0) goto code_?;
  }
  UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
            (this_02,(Texture *)value,(MethodInfo *)0x0);
  this_00 = (pPVar2->fields).loadingWheel;
  if ((this_00 != (Image *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,0,(MethodInfo *)0x0);
    return 0;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem+<DownloadImage>d__22::
     PlayerInventoryPreviewItem_DownloadImage_d_22_System_Collections_IEnumerator_Reset
               (PlayerInventoryPreviewItem_DownloadImage_d_22 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__PlayerInventoryPreviewItem___DownloadImage_d__22__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

