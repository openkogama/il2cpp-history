
/* Byte[] CreatePostData() */

Byte__Array *
Assembly-CSharp.dll::StatHat::Post+FormPoster::Post_FormPoster_CreatePostData
          (Post_FormPoster *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::String,_System::String>__GetEnumerator__
                   );
    func_?(&TypeInfo__System__String);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pSVar6 = ::StringLiteral__;
  pSStack_7 = ::StringLiteral__;
  pSStack_8 = ::StringLiteral__;
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).Parameters;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Keys__
                        );
    if (this_02 !=
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_10,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::String,_System::String>__GetEnumerator__
                         );
      pSStack_11 = (String *)pDVar9->_currentValue;
      DStack_10._version = 0;
      uStack_1 = 1;
      DStack_10._currentValue = (Object *)&stack0xffffffbc;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                Object,UnityEngine::UIElements::TextureId]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                            *)&stack0xffffffbc,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                          );
        if (bVar12 == 0) break;
        pSStack_13 = pSStack_11;
        values = (String__Array *)func_?(TypeInfo__System__String,5);
        if (values == (String__Array *)0x0) goto code_?;
        if (values->max_length == 0) {
          func_?();
code_?:
          DStack_10._dictionary =
               (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)&UNK_?;
          func_?();
code_?:
          DStack_10._dictionary =
               (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)&UNK_?;
          func_?();
code_?:
          DStack_10._dictionary =
               (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)&UNK_?;
          func_?();
code_?:
          DStack_10._dictionary =
               (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)&UNK_?;
          func_?();
          goto code_?;
        }
        values->vector[0] = pSStack_7;
        func_?(values->vector,pSStack_7);
        if (cRam_? == '\0') {
          func_?(&StringLiteral__20);
          func_?(&::StringLiteral__);
          func_?(&StringLiteral__26);
          func_?(&::StringLiteral__);
          cRam_? = '\x01';
        }
        if (pSStack_13 == (String *)0x0) goto code_?;
        pSVar6 = mscorlib.dll::System::String::String_Replace_1
                           (pSStack_13,::StringLiteral__,StringLiteral__26,(MethodInfo *)0x0);
        if (pSVar6 == (String *)0x0) goto code_?;
        DStack_10._dictionary =
             (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)mscorlib.dll::System::String::String_Replace_1
                          (pSVar6,::StringLiteral__,StringLiteral__20,(MethodInfo *)0x0);
        if (values->max_length < 2) goto code_?;
        values->vector[1] = (String *)DStack_10._dictionary;
        func_?();
        DStack_10._dictionary =
             (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)::StringLiteral__;
        if (values->max_length < 3) goto code_?;
        values->vector[2] = ::StringLiteral__;
        func_?();
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (this->fields).Parameters;
        if (this_01 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        pSStack_7 = (String *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (this_01,(Object *)pSStack_13,
                                MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                               );
        if (cRam_? == '\0') {
          func_?(&StringLiteral__20);
          func_?(&::StringLiteral__);
          func_?(&StringLiteral__26);
          func_?(&::StringLiteral__);
          cRam_? = '\x01';
        }
        if (pSStack_7 == (String *)0x0) goto code_?;
        method_00 = (MethodInfo *)::StringLiteral__;
        pSVar6 = mscorlib.dll::System::String::String_Replace_1
                           (pSStack_7,::StringLiteral__,StringLiteral__26,(MethodInfo *)0x0);
        if (pSVar6 == (String *)0x0) goto code_?;
        DStack_10._dictionary =
             (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)mscorlib.dll::System::String::String_Replace_1
                          (pSVar6,::StringLiteral__,StringLiteral__20,(MethodInfo *)0x0);
        if (values->max_length < 4) goto code_?;
        values->vector[3] = (String *)DStack_10._dictionary;
        func_?();
        DStack_10._dictionary =
             (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)::StringLiteral__;
        if (values->max_length < 5) goto code_?;
        pSStack_11 = (String *)(values->vector + 4);
        pSStack_11->klass = (String__Class *)::StringLiteral__;
        func_?();
        pSVar6 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
        pSStack_8 = pSVar6;
        pSStack_7 = pSVar6;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&stack0xffffffbc,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      pEVar14 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
      if (pEVar14 != (Encoding *)0x0) {
        pBVar15 = (Byte__Array *)
                 (*(code *)(pEVar14->klass->vtable).GetBytes_1.method)
                           (pEVar14,pSVar6,(pEVar14->klass->vtable).GetBytes_2.methodPtr);
        *unaff_FS_OFFSET = uStack_3;
        return pBVar15;
      }
    }
  }
code_?:
  uVar16 = func_?();
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  pBVar15 = (Byte__Array *)(*pcVar17)();
  return pBVar15;
}


/* Void PostForm() */

void Assembly-CSharp.dll::StatHat::Post+FormPoster::Post_FormPoster_PostForm
               (Post_FormPoster *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Value__
                   );
    func_?(&TypeInfo__UnityEngine__Networking__UnityWebRequest);
    func_?(&TypeInfo__UnityEngine__Networking__UploadHandlerRaw);
    func_?(&StringLiteral_application_x_www_form_urlencode);
    func_?(&StringLiteral_POST);
    func_?(&StringLiteral_Content_Type);
    cRam_? = '\x01';
  }
  data = Post_FormPoster_CreatePostData(this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_Content_Type,
               (Object *)StringLiteral_application_x_www_form_urlencode,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
              );
    url = mscorlib.dll::System::String::String_Concat_3
                    ((this->fields).BaseUrl,(this->fields).RelUrl,(MethodInfo *)0x0);
    this_01 = (UnityWebRequest *)func_?();
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
    UnityWebRequest__ctor_1(this_01,url,StringLiteral_POST,(MethodInfo *)0x0);
    this_02 = (UploadHandlerRaw *)func_?();
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UploadHandlerRaw::
    UploadHandlerRaw__ctor(this_02,data,(MethodInfo *)0x0);
    if (this_02 != (UploadHandlerRaw *)0x0) {
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UploadHandler::
      UploadHandler_set_contentType
                ((UploadHandler *)this_02,StringLiteral_application_x_www_form_urlencode,
                 (MethodInfo *)0x0);
      if (this_01 != (UnityWebRequest *)0x0) {
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
        UnityWebRequest_set_uploadHandler(this_01,(UploadHandler *)this_02,(MethodInfo *)0x0);
        pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffffa8,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__GetEnumerator__
                           );
        method_00 = (MethodInfo *)(pDVar4->_current).key;
        uVar5 = *(undefined8 *)&(pDVar4->_current).value;
        uStack_1 = 1;
        while( true ) {
          bVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                             &stack0xffffffc0,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                            );
          if (bVar6 == 0) break;
          UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
          UnityWebRequest_SetRequestHeader
                    (this_01,(String *)method_00,(String *)uVar5,(MethodInfo *)0x0);
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffc0,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                   ,method_00);
        uStack_1 = 0xffffffff;
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
        UnityWebRequest_SendWebRequest(this_01,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Post+FormPoster(String, String, Dictionary`2[System.String,System.String]) */

void Assembly-CSharp.dll::StatHat::Post+FormPoster::Post_FormPoster__ctor
               (Post_FormPoster *this,String *base_url,String *rel_url,
               Dictionary_2_System_String_System_String_ *parameters,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  ppSVar1 = &(this->fields).BaseUrl;
  *ppSVar1 = base_url;
  func_?(ppSVar1,base_url);
  (this->fields).Parameters = parameters;
  func_?(&this->fields,parameters);
  ppSVar1 = &(this->fields).RelUrl;
  *ppSVar1 = rel_url;
  func_?(ppSVar1,rel_url);
  Post_FormPoster_PostForm(this,(MethodInfo *)0x0);
  return;
}


/* String encodeUriComponent(String) */

String * Assembly-CSharp.dll::StatHat::Post+FormPoster::Post_FormPoster_encodeUriComponent
                   (Post_FormPoster *this,String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (s != (String *)0x0) {
    pSVar1 = mscorlib.dll::System::String::String_Replace_1
                       (s,::StringLiteral__,StringLiteral__26,(MethodInfo *)0x0);
    if (pSVar1 != (String *)0x0) {
      pSVar1 = mscorlib.dll::System::String::String_Replace_1
                         (pSVar1,::StringLiteral__,StringLiteral__20,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}

