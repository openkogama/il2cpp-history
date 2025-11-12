
/* Byte[] CreatePostData() */

Byte__Array *
Assembly-CSharp.dll::StatHat::Post+FormPoster::Post_FormPoster_CreatePostData
          (Post_FormPoster *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::String,_System::String>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).Parameters;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Keys__
                            ),
        pDVar2 == (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    uVar3 = uStack_4;
code_?:
    uStack_4 = uVar3;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    uStack_5 = (pDVar2->fields)._dictionary;
    puStack_6 = (undefined4 *)0x0;
    uStack_7 = 0;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_5 >> 0xc);
      lVar8 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    if (uStack_5 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar12 = (code *)swi(3);
      pBVar13 = (Byte__Array *)(*pcVar12)();
      return pBVar13;
    }
    iStack_14 = (uStack_5->fields)._version;
    uStack_7 = 0;
    uStack_5._4_4_ = (undefined4)((ulonglong)uStack_5 >> 0x20);
    uStack_15 = (undefined4)uStack_5;
    uStack_16 = uStack_5._4_4_;
    uStack_4 = 0;
    apSStack_17[0] = (String *)0x0;
    uStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_6 = &uStack_15;
    while (lVar8 = CONCAT44(uStack_16,uStack_15), lVar8 != 0) {
      if (iStack_14 != *(int *)(lVar8 + 0x2c)) goto code_?;
      do {
        if (lVar8 == 0) goto code_?;
        if (*(uint *)(lVar8 + 0x20) <= uStack_4) {
          uStack_4 = *(int *)(lVar8 + 0x20) + 1;
          apSStack_17[0] = (String *)0x0;
          pEVar18 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
          if (pEVar18 != (Encoding *)0x0) {
            pBVar13 = (Byte__Array *)
                      (*(pEVar18->klass->vtable).GetBytes_1.methodPtr)
                                (pEVar18,pSVar1,(pEVar18->klass->vtable).GetBytes_1.method);
            return pBVar13;
          }
          goto code_?;
        }
        lVar19 = *(longlong *)(lVar8 + 0x18);
        lVar20 = (longlong)(int)uStack_4;
        uVar3 = uStack_4 + 1;
        if (lVar19 == 0) goto code_?;
        bVar11 = *(uint *)(lVar19 + 0x18) <= uStack_4;
        uStack_4 = uVar3;
        if (bVar11) goto code_?;
      } while (*(int *)(lVar19 + 0x20 + lVar20 * 0x18) < 0);
      apSStack_17[0] = *(String **)(lVar19 + 0x28 + lVar20 * 0x18);
      func_?(apSStack_17);
      this_02 = apSStack_17[0];
      values = (String__Array *)FUN_?(TypeInfo__System__String,5);
      if (values == (String__Array *)0x0) goto code_?;
      if ((int)values->max_length == 0) goto code_?;
      values->vector[0] = pSVar1;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)values->vector >> 0xc);
        lVar8 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral__20);
        LOCK();
        UNLOCK();
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral__26);
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_02 == (String *)0x0) goto code_?;
      pSVar1 = mscorlib.dll::System::String::String_Replace_1
                         (this_02,::StringLiteral__,StringLiteral__26,(MethodInfo *)0x0);
      if (pSVar1 == (String *)0x0) goto code_?;
      pSVar1 = mscorlib.dll::System::String::String_Replace_1
                         (pSVar1,::StringLiteral__,StringLiteral__20,(MethodInfo *)0x0);
      if ((uint)values->max_length < 2) goto code_?;
      values->vector[1] = pSVar1;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)(values->vector + 1) >> 0xc);
        lVar8 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      iVar21 = iRam_?;
      if ((uint)values->max_length < 3) goto code_?;
      values->vector[2] = ::StringLiteral__;
      if (iVar21 != 0) {
        uVar3 = (uint)((ulonglong)(values->vector + 2) >> 0xc);
        lVar8 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      this_01 = (this->fields).Parameters;
      if (this_01 == (Dictionary_2_System_String_System_String_ *)0x0) goto code_?;
      pSVar1 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)this_02,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                         );
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral__20);
        LOCK();
        UNLOCK();
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral__26);
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pSVar1 == (String *)0x0) goto code_?;
      pSVar1 = mscorlib.dll::System::String::String_Replace_1
                         (pSVar1,::StringLiteral__,StringLiteral__26,(MethodInfo *)0x0);
      if (pSVar1 == (String *)0x0) goto code_?;
      pSVar1 = mscorlib.dll::System::String::String_Replace_1
                         (pSVar1,::StringLiteral__,StringLiteral__20,(MethodInfo *)0x0);
      if ((uint)values->max_length < 4) goto code_?;
      values->vector[3] = pSVar1;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)(values->vector + 3) >> 0xc);
        lVar8 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      iVar21 = iRam_?;
      if ((uint)values->max_length < 5) goto code_?;
      values->vector[4] = ::StringLiteral__;
      if (iVar21 != 0) {
        uVar3 = (uint)((ulonglong)(values->vector + 4) >> 0xc);
        lVar8 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  pBVar13 = (Byte__Array *)(*pcVar12)();
  return pBVar13;
}


/* Void PostForm() */

void Assembly-CSharp.dll::StatHat::Post+FormPoster::Post_FormPoster_PostForm
               (Post_FormPoster *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Networking__UnityWebRequest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Networking__UploadHandlerRaw);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_application_x_www_form_urlencode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_POST);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Content_Type);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  data = Post_FormPoster_CreatePostData(this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_Content_Type,
               (Object *)StringLiteral_application_x_www_form_urlencode,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    url = mscorlib.dll::System::String::String_Concat_4
                    ((this->fields).BaseUrl,(this->fields).RelUrl,(MethodInfo *)0x0);
    this_01 = (UnityWebRequest *)FUN_?(TypeInfo__UnityEngine__Networking__UnityWebRequest);
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
    UnityWebRequest__ctor_2(this_01,url,StringLiteral_POST,(MethodInfo *)0x0);
    this_02 = (UploadHandlerRaw *)FUN_?(TypeInfo__UnityEngine__Networking__UploadHandlerRaw)
    ;
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UploadHandlerRaw::
    UploadHandlerRaw__ctor(this_02,data,(MethodInfo *)0x0);
    if ((this_02 != (UploadHandlerRaw *)0x0) &&
       ((*(this_02->klass->vtable).SetContentType.methodPtr)
                  (this_02,StringLiteral_application_x_www_form_urlencode),
       this_01 != (UnityWebRequest *)0x0)) {
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
      UnityWebRequest_set_uploadHandler(this_01,(UploadHandler *)this_02,(MethodInfo *)0x0);
      uStack_1 = 0;
      uStack_2 = 0;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&pDStack_4 >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      uStack_8 = (ulonglong)(uint)(this_00->fields)._version;
      uStack_9 = 2;
      DStack_10._version = (undefined4)uStack_8;
      DStack_10._index = uStack_8._4_4_;
      DStack_10._current.key = (Object *)0x0;
      DStack_10._current.value = (Object *)0x0;
      DStack_10._getEnumeratorRetType = 2;
      DStack_10._36_4_ = 0;
      pDStack_4 = this_00;
      DStack_10._dictionary = (Dictionary_2_System_Object_System_Object_ *)this_00;
      while (bVar11 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                               (&DStack_10,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                               ), bVar11 != 0) {
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
        UnityWebRequest_SetRequestHeader
                  (this_01,(String *)DStack_10._current.key,(String *)DStack_10._current.value,
                   (MethodInfo *)0x0);
      }
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
      UnityWebRequest_SendWebRequest(this_01,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Post+FormPoster(String, String, Dictionary`2[System.String,System.String]) */

void Assembly-CSharp.dll::StatHat::Post+FormPoster::Post_FormPoster__ctor
               (Post_FormPoster *this,String *base_url,String *rel_url,
               Dictionary_2_System_String_System_String_ *parameters,MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields).BaseUrl = base_url;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).BaseUrl >> 0xc);
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
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).Parameters = parameters;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).RelUrl = rel_url;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).RelUrl >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_System::String>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Networking__UnityWebRequest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Networking__UploadHandlerRaw);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_application_x_www_form_urlencode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_POST);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Content_Type);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  data = Post_FormPoster_CreatePostData(this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_Content_Type,
               (Object *)StringLiteral_application_x_www_form_urlencode,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)parameters >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    url = mscorlib.dll::System::String::String_Concat_4
                    ((this->fields).BaseUrl,(this->fields).RelUrl,(MethodInfo *)0x0);
    this_01 = (UnityWebRequest *)FUN_?(TypeInfo__UnityEngine__Networking__UnityWebRequest);
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
    UnityWebRequest__ctor_2(this_01,url,StringLiteral_POST,(MethodInfo *)0x0);
    this_02 = (UploadHandlerRaw *)FUN_?(TypeInfo__UnityEngine__Networking__UploadHandlerRaw)
    ;
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UploadHandlerRaw::
    UploadHandlerRaw__ctor(this_02,data,(MethodInfo *)0x0);
    if ((this_02 != (UploadHandlerRaw *)0x0) &&
       ((*(this_02->klass->vtable).SetContentType.methodPtr)
                  (this_02,StringLiteral_application_x_www_form_urlencode),
       this_01 != (UnityWebRequest *)0x0)) {
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
      UnityWebRequest_set_uploadHandler(this_01,(UploadHandler *)this_02,(MethodInfo *)0x0);
      uStack_8 = 0;
      uStack_9 = 0;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&pDStack_10 >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar5;
          LOCK();
          uVar4 = *puVar5;
          if (uVar11 == uVar4) {
            *puVar5 = uVar11 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar4);
      }
      uStack_12 = (ulonglong)(uint)(this_00->fields)._version;
      uStack_13 = 2;
      DStack_14._version = (undefined4)uStack_12;
      DStack_14._index = uStack_12._4_4_;
      DStack_14._current.key = (Object *)0x0;
      DStack_14._current.value = (Object *)0x0;
      DStack_14._getEnumeratorRetType = 2;
      DStack_14._36_4_ = 0;
      pDStack_10 = this_00;
      DStack_14._dictionary = (Dictionary_2_System_Object_System_Object_ *)this_00;
      while (bVar15 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                               (&DStack_14,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__MoveNext__
                               ), bVar15 != 0) {
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
        UnityWebRequest_SetRequestHeader
                  (this_01,(String *)DStack_14._current.key,(String *)DStack_14._current.value,
                   (MethodInfo *)0x0);
      }
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
      UnityWebRequest_SendWebRequest(this_01,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* String encodeUriComponent(String) */

String * Assembly-CSharp.dll::StatHat::Post+FormPoster::Post_FormPoster_encodeUriComponent
                   (Post_FormPoster *this,String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__20);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__26);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (s != (String *)0x0) {
    this_00 = mscorlib.dll::System::String::String_Replace_1
                        (s,::StringLiteral__,StringLiteral__26,(MethodInfo *)0x0);
    pSVar1 = ::StringLiteral__;
    pSVar2 = StringLiteral__20;
    if (this_00 != (String *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Span<int>__Span_System__Void___int_);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__ValueListBuilder<int>__Append_int_)
        ;
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__ValueListBuilder<int>__AsSpan__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__ValueListBuilder<int>__Dispose__);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__ValueListBuilder<int>__ValueListBuilder_System__Span<int>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__ValueListBuilder<int>__get_Length__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      puStack_3 = (undefined *)((ulonglong)puStack_3 & 0xffffffff);
      if (pSVar1 == (String *)0x0) {
        uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
        this_01 = (ArgumentNullException *)func_?(uVar4);
        pSVar2 = (String *)func_?(&StringLiteral_oldValue);
        mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                  (this_01,pSVar2,(MethodInfo *)0x0);
        uVar4 = func_?(&
                                     MethodInfo__System__String__Replace_MethodInfo__System__String__MethodInfo__System__String_
                                    );
        FUN_?(this_01,uVar4);
        pcVar5 = (code *)swi(3);
        pSVar2 = (String *)(*pcVar5)();
        return pSVar2;
      }
      if ((pSVar1->fields)._stringLength == 0) {
        uVar4 = func_?(&TypeInfo__System__ArgumentException);
        this_02 = (ArgumentException *)func_?(uVar4);
        pSVar2 = (String *)func_?(&StringLiteral_oldValue);
        pSVar1 = (String *)func_?(&StringLiteral_String_cannot_be_of_zero_length_);
        mscorlib.dll::System::ArgumentException::ArgumentException__ctor_4
                  (this_02,pSVar1,pSVar2,(MethodInfo *)0x0);
        uVar4 = func_?(&
                                     MethodInfo__System__String__Replace_MethodInfo__System__String__MethodInfo__System__String_
                                    );
        FUN_?(this_02,uVar4);
        pcVar5 = (code *)swi(3);
        pSVar2 = (String *)(*pcVar5)();
        return pSVar2;
      }
      if (pSVar2 == (String *)0x0) {
        pSVar2 = (String *)**(undefined8 **)(lRam_? + 0xb8);
      }
      puVar6 = auStack_7;
      FUN_?(puVar6,0,0x200);
      RStack_8._length = 0x80;
      RStack_8._12_4_ = 0;
      iVar9 = (this_00->fields)._stringLength - (pSVar1->fields)._stringLength;
      lStack_10 = 0;
      puStack_3 = (undefined *)((ulonglong)puStack_3 & 0xffffffff00000000);
      uStack_11 = 0x80;
      uStack_12 = 0;
      if (-1 < iVar9) {
        iVar13 = (pSVar1->fields)._stringLength;
        uVar14 = 0;
        RStack_8._pointer._value = puVar6;
        do {
          iVar15 = (int)uVar14;
          puVar16 = &(this_00->fields)._firstChar + iVar15;
          puVar17 = puVar16;
          for (uVar18 = 0; puStack_19 = puVar6, (int)uVar18 < (pSVar1->fields)._stringLength;
              uVar18 = (ulonglong)((int)uVar18 + 1)) {
            if ((longlong)iVar13 <= (longlong)uVar18) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                        ((MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              pSVar2 = (String *)(*pcVar5)();
              return pSVar2;
            }
            if (*puVar17 !=
                *(uint16_t *)((longlong)pSVar1 + (0x14 - (longlong)puVar16) + (longlong)puVar17)) {
              iVar20 = 1;
              goto code_?;
            }
            puVar17 = puVar17 + 1;
          }
          FUN_?(&puStack_19,uVar14);
          iVar13 = (pSVar1->fields)._stringLength;
          iVar20 = iVar13;
          puVar6 = puStack_19;
code_?:
          uVar14 = (ulonglong)(uint)(iVar15 + iVar20);
        } while (iVar20 + iVar15 <= iVar9);
        if ((int)puStack_3 != 0) {
          iVar13 = (pSVar1->fields)._stringLength;
          puStack_19 = puVar6;
          puVar21 = (undefined8 *)FUN_?(&RStack_8,&puStack_19);
          RStack_8._pointer._value = (void *)*puVar21;
          RStack_8._8_8_ = puVar21[1];
          this_00 = mscorlib.dll::System::String::String_ReplaceHelper
                              (this_00,iVar13,pSVar2,&RStack_8,(MethodInfo *)0x0);
          lVar22 = lStack_10;
          pMVar23 = MethodInfo__System__Collections__Generic__ValueListBuilder<int>__Dispose__;
          if (lStack_10 != 0) {
            pIVar24 = MethodInfo__System__Collections__Generic__ValueListBuilder<int>__Dispose__->
                     klass;
            if ((pIVar24->field_0x135 & 1) == 0) {
              pIVar24 = (Il2CppClass *)FUN_?(pIVar24);
            }
            pvVar25 = pIVar24->rgctx_data[0xe].rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar25 + 0x135) & 1) == 0) {
              pvVar25 = (void *)FUN_?(pvVar25);
            }
            if (*(int *)((longlong)pvVar25 + 0xe4) == 0) {
              FUN_?(pvVar25);
            }
            pIVar24 = pMVar23->klass;
            if ((pIVar24->field_0x135 & 1) == 0) {
              pIVar24 = (Il2CppClass *)FUN_?(pIVar24);
            }
            plVar26 = (longlong *)FUN_?(pIVar24->rgctx_data[0xd].rgctxDataDummy);
            if (plVar26 == (longlong *)0x0) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              pSVar2 = (String *)(*pcVar5)();
              return pSVar2;
            }
            (**(code **)(*plVar26 + 0x188))(plVar26,lVar22,0,*(undefined8 *)(*plVar26 + 400));
          }
        }
      }
      return this_00;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar5)();
  return pSVar2;
}

