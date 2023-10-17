
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PlayerInventoryPreviewItem+<DownloadImage>d__22::
     PlayerInventoryPreviewItem_DownloadImage_d_22_MoveNext
               (PlayerInventoryPreviewItem_DownloadImage_d_22 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Networking__DownloadHandlerTexture);
    func_?(&StringLiteral_Could_not_download_image__);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pPVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    pUVar3 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
             UnityWebRequestTexture::UnityWebRequestTexture_GetTexture
                       ((this->fields).url,(MethodInfo *)0x0);
    (this->fields)._request_5__2 = pUVar3;
    func_?(&(this->fields)._request_5__2,pUVar3);
    pUVar3 = (this->fields)._request_5__2;
    if (pUVar3 != (UnityWebRequest *)0x0) {
      pUVar4 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_SendWebRequest(pUVar3,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)pUVar4;
      func_?();
      (this->fields).__1__state = 1;
      return 1;
    }
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    pUVar3 = (this->fields)._request_5__2;
    (this->fields).__1__state = -1;
    if (pUVar3 != (UnityWebRequest *)0x0) {
      UVar5 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
              UnityWebRequest_get_result(pUVar3,(MethodInfo *)0x0);
      if (UVar5 == UnityWebRequest_Result__Enum_ConnectionError) {
code_?:
        message = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Could_not_download_image__,(this->fields).url,
                             (MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)message,(MethodInfo *)0x0);
        if ((pPVar2 != (PlayerInventoryPreviewItem *)0x0) &&
           (this_02 = (pPVar2->fields).previewImage, this_02 != (RawImage *)0x0)) {
          value = (Texture2D *)(pPVar2->fields).noImageTexture;
code_?:
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (this_02,(Texture *)value,(MethodInfo *)0x0);
          this_00 = (pPVar2->fields).loadingWheel;
          if ((this_00 != (Image *)0x0) &&
             (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)this_00,(MethodInfo *)0x0),
             this_01 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,0,(MethodInfo *)0x0);
            return 0;
          }
        }
      }
      else {
        pUVar3 = (this->fields)._request_5__2;
        if (pUVar3 != (UnityWebRequest *)0x0) {
          UVar5 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                  UnityWebRequest_get_result(pUVar3,(MethodInfo *)0x0);
          if (UVar5 == UnityWebRequest_Result__Enum_ProtocolError) goto code_?;
          if (pPVar2 != (PlayerInventoryPreviewItem *)0x0) {
            pUVar3 = (this->fields)._request_5__2;
            this_02 = (pPVar2->fields).previewImage;
            if ((pUVar3 != (UnityWebRequest *)0x0) &&
               (pDVar6 = (DownloadHandlerTexture *)
                         mscorlib.dll::System::Collections::Generic::ValueListBuilder`1[System::
                         Object]::ValueListBuilder_1_System_Object__1_get_Length
                                   ((ValueListBuilder_1_System_Object__1 *)pUVar3,(MethodInfo *)0x0)
               , pDVar6 != (DownloadHandlerTexture *)0x0)) {
              pDVar7 = (DownloadHandlerTexture *)0x0;
              if (pDVar6->klass == TypeInfo__UnityEngine__Networking__DownloadHandlerTexture) {
                pDVar7 = pDVar6;
              }
              if (pDVar7 == (DownloadHandlerTexture *)0x0) goto code_?;
              pDVar7 = (DownloadHandlerTexture *)0x0;
              if (pDVar6->klass == TypeInfo__UnityEngine__Networking__DownloadHandlerTexture) {
                pDVar7 = pDVar6;
              }
              value = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
                      DownloadHandlerTexture::DownloadHandlerTexture_InternalGetTexture
                                (pDVar7,(MethodInfo *)0x0);
              if (this_02 == (RawImage *)0x0) goto code_?;
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem+<DownloadImage>d__22::
     PlayerInventoryPreviewItem_DownloadImage_d_22_System_Collections_IEnumerator_Reset
               (PlayerInventoryPreviewItem_DownloadImage_d_22 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__PlayerInventoryPreviewItem___DownloadImage_d__22__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

