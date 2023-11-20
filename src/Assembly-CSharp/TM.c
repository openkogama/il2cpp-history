
/* Void Destroy() */

void Assembly-CSharp.dll::TM::TM_Destroy(MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__TM__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__TM);
    cRam_? = '\x01';
  }
  if (TypeInfo__TM->static_fields->instance != (TM *)0x0) {
    TypeInfo__TM->static_fields->instance = (TM *)0x0;
    func_?(TypeInfo__TM->static_fields,0);
    uStack_1 = 0;
    this = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
            *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this,(Object *)0x0,
               MethodInfo__TM__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_,
               (MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this,(MethodInfo *)0x0);
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* String GetFilename(String) */

String * Assembly-CSharp.dll::TM::TM_GetFilename(String *languageName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_es_ES);
    func_?(&StringLiteral_es);
    func_?(&StringLiteral_en_GB);
    func_?(&StringLiteral_en_US);
    cRam_? = '\x01';
  }
  if (languageName != (String *)0x0) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (languageName,StringLiteral_en_GB,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (languageName,StringLiteral_es,(MethodInfo *)0x0);
      pSVar2 = StringLiteral_es_ES;
      if (bVar1 == 0) {
        pSVar2 = languageName;
      }
      return pSVar2;
    }
    return StringLiteral_en_US;
  }
  return (String *)0x0;
}


/* String[] GetTextAsArray(String) */

String__Array * Assembly-CSharp.dll::TM::TM_GetTextAsArray(String *toArrayString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  separator = (Char__Array *)func_?();
  if (separator != (Char__Array *)0x0) {
    if ((separator->max_length == 0) || (separator->vector[0] = 0x7b, separator->max_length < 2)) {
      func_?();
      func_?();
      pcVar1 = (code *)swi(3);
      pSVar2 = (String__Array *)(*pcVar1)();
      return pSVar2;
    }
    separator->vector[1] = 0x7d;
    if (toArrayString != (String *)0x0) {
      pSVar2 = mscorlib.dll::System::String::String_Split_1
                         (toArrayString,separator,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar1 = (code *)swi(3);
  pSVar2 = (String__Array *)(*pcVar1)();
  return pSVar2;
}


/* String GetTextWithValues(String, ValueInsert) */

String * Assembly-CSharp.dll::TM::TM_GetTextWithValues
                   (String *index,ValueInsert *values,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    cRam_? = '\x01';
  }
  pSVar1 = TM__(index,(MethodInfo *)0x0);
  if (values == (ValueInsert *)0x0) {
    return pSVar1;
  }
  pTVar2 = TM_get_Instance((MethodInfo *)0x0);
  if (pTVar2 != (TM *)0x0) {
    name = (pTVar2->fields).cultureName;
    this_00 = (CultureInfo *)func_?(TypeInfo__System__Globalization__CultureInfo);
    mscorlib.dll::System::Globalization::CultureInfo::CultureInfo__ctor_3
              (this_00,name,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__);
      cRam_? = '\x01';
    }
    this = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
            *)(values->fields).values;
    if (this != (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) {
      args = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
             MultiColumnCollectionHeader+ViewState+ColumnState]::
             List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                       (this,
                        MethodInfo__System__Collections__Generic__List<System::Object>__ToArray__);
      pSVar1 = mscorlib.dll::System::String::String_Format_7
                         ((IFormatProvider *)this_00,pSVar1,(Object__Array *)args,(MethodInfo *)0x0)
      ;
      return pSVar1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* Void LanguageChanged(Action) */

void Assembly-CSharp.dll::TM::TM_LanguageChanged
               (Action *onLanguageChangedCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pTVar1 = TM_get_Instance((MethodInfo *)0x0);
  if (pTVar1 != (TM *)0x0) {
    if ((pTVar1->fields).languageLoadingDone == 0) {
      pTVar1 = TM_get_Instance((MethodInfo *)0x0);
      if ((pTVar1 == (TM *)0x0) ||
         (this = (pTVar1->fields).languageChangedCallback, this == (List_1_System_Action_ *)0x0))
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this,(Object *)onLanguageChangedCallback,
                 MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_
                );
    }
    return;
  }
code_?:
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void LoadLanguage(String) */

void Assembly-CSharp.dll::TM::TM_LoadLanguage(String *languageName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_es_ES);
    func_?(&StringLiteral_es);
    func_?(&StringLiteral_en_GB);
    func_?(&StringLiteral_en_US);
    cRam_? = '\x01';
  }
  if ((languageName != (String *)0x0) &&
     (((bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (languageName,StringLiteral_en_GB,(MethodInfo *)0x0),
       pSVar2 = StringLiteral_en_US, bVar1 == 0 &&
       (bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (languageName,StringLiteral_es,(MethodInfo *)0x0),
       pSVar2 = StringLiteral_es_ES, bVar1 == 0)) ||
      (languageName = pSVar2, pSVar2 != (String *)0x0)))) {
    pSVar2 = mscorlib.dll::System::String::String_Replace(languageName,0x5f,0x2d,(MethodInfo *)0x0);
    pTVar3 = TM_get_Instance((MethodInfo *)0x0);
    if (pTVar3 == (TM *)0x0) goto code_?;
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (pSVar2,(pTVar3->fields).cultureName,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pTVar3 = TM_get_Instance((MethodInfo *)0x0);
      if (pTVar3 != (TM *)0x0) {
        (pTVar3->fields).fileName = languageName;
        func_?();
        pKVar4 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
        if (pKVar4 != (KoGaMaSettingsContainer *)0x0) {
          pSVar2 = mscorlib.dll::System::String::String_Concat_5
                             (StringLiteral_Languages_,languageName,StringLiteral__txt_,
                              (pKVar4->fields).versionGuid,(MethodInfo *)0x0);
          if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          str0 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar2,(MethodInfo *)0x0);
          this = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                  *)func_?();
          DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
          Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    (this,(Object *)0x0,
                     MethodInfo__TM__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                     ,(MethodInfo *)0x0);
          this_00 = (AssetBundleRequest *)func_?();
          AssetBundleRequest::AssetBundleRequest__ctor
                    (this_00,pSVar2,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this,
                     WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
          if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  pTVar3 = TM_get_Instance((MethodInfo *)0x0);
  if (pTVar3 != (TM *)0x0) {
    (pTVar3->fields).catalog = (Catalog *)0x0;
    func_?();
    TM_SetLanguageLoadingDone((MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetLanguageLoadingDone() */

void Assembly-CSharp.dll::TM::TM_SetLanguageLoadingDone(MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::Action>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Action>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  pTVar4 = TM_get_Instance((MethodInfo *)0x0);
  if (pTVar4 != (TM *)0x0) {
    (pTVar4->fields).languageLoadingDone = 1;
    pTVar4 = TM_get_Instance((MethodInfo *)0x0);
    if ((pTVar4 != (TM *)0x0) &&
       (this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pTVar4->fields).languageChangedCallback,
       this != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
      pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffd8,this,
                          MethodInfo__System__Collections__Generic__List<System::Action>__GetEnumerator__
                         );
      uStack_1 = 1;
      RVar6 = pLVar5->_current;
      while( true ) {
        bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__MoveNext__
                          );
        if (bVar7 == 0) break;
        if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
        RVar8 = *(RegexCharClass_SingleRange *)((int)RVar6 + 0x14);
        (**(code **)((int)RVar6 + 0xc))();
        RVar6 = RVar8;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&stack0xffffffc8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__Dispose__
                 ,in_stack_9);
      uStack_1 = 0xffffffff;
      pTVar4 = TM_get_Instance((MethodInfo *)0x0);
      if ((pTVar4 != (TM *)0x0) &&
         (pLVar10 = (pTVar4->fields).languageChangedCallback, pLVar10 != (List_1_System_Action_ *)0x0)
         ) {
        length = (pLVar10->fields)._size;
        piVar11 = &(pLVar10->fields)._version;
        *piVar11 = *piVar11 + 1;
        (pLVar10->fields)._size = 0;
        if (0 < length) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar10->fields)._items,0,length,(MethodInfo *)0x0);
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void StreamingAssetCallback(UnityWebRequest) */

void Assembly-CSharp.dll::TM::TM_StreamingAssetCallback(UnityWebRequest *www,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  puStack_3 = &stack0xffffffd8;
  puVar4 = &stack0xffffffd8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__Catalog);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Error_loading_text__0___1_);
    cRam_? = '\x01';
    puVar4 = puStack_3;
  }
  puStack_3 = puVar4;
  if (www != (UnityWebRequest *)0x0) {
    pSVar5 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if (pSVar5 != (String *)0x0) {
      pSVar5 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
      arg1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral_Error_loading_text__0___1_,(Object *)pSVar5,(Object *)arg1,
                          (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar5,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_2;
      return;
    }
    pTVar6 = TM_get_Instance((MethodInfo *)0x0);
    pCVar7 = (Catalog *)func_?();
    GNU::Gettext::Catalog::Catalog__ctor(pCVar7,(MethodInfo *)0x0);
    if (pTVar6 != (TM *)0x0) {
      (pTVar6->fields).catalog = pCVar7;
      func_?(&pTVar6->fields,pCVar7);
      pTVar6 = TM_get_Instance((MethodInfo *)0x0);
      if (pTVar6 != (TM *)0x0) {
        pCVar7 = (pTVar6->fields).catalog;
        this = System.dll::System::Net::WebCompletionSource`1[Unity::IL2CPP::Metadata::
               __Il2CppFullySharedGenericType]::
               WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_CurrentResult
                         ((WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                           *)www,(MethodInfo *)0x0);
        if (this != (WebCompletionSource_1_T_Result_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                     *)0x0) {
          pSVar5 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
                   DownloadHandler_get_text((DownloadHandler *)this,(MethodInfo *)0x0);
          pTVar6 = TM_get_Instance((MethodInfo *)0x0);
          if ((pTVar6 != (TM *)0x0) && (pCVar7 != (Catalog *)0x0)) {
            GNU::Gettext::Catalog::Catalog_Load
                      (pCVar7,pSVar5,(pTVar6->fields).fileName,(MethodInfo *)0x0);
            pTVar6 = TM_get_Instance((MethodInfo *)0x0);
            pTVar8 = TM_get_Instance((MethodInfo *)0x0);
            if ((pTVar8 != (TM *)0x0) &&
               (pSVar5 = (pTVar8->fields).fileName, pSVar5 != (String *)0x0)) {
              pSVar5 = mscorlib.dll::System::String::String_Replace
                                 (pSVar5,0x5f,0x2d,(MethodInfo *)0x0);
              if (pTVar6 != (TM *)0x0) {
                (pTVar6->fields).cultureName = pSVar5;
                func_?(&(pTVar6->fields).cultureName,pSVar5);
                TM_SetLanguageLoadingDone((MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_2;
                return;
              }
            }
          }
        }
      }
    }
  }
  uStack_9 = func_?();
  func_?(&uStack_9,&UNK_?);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* String StripAssetStringFromFuncIdentifier(String) */

String * Assembly-CSharp.dll::TM::TM_StripAssetStringFromFuncIdentifier
                   (String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    func_?(&StringLiteral___sPtr___sPtr_____________Ptr_________);
    cRam_? = '\x01';
  }
  if (key == (String *)0x0) {
    return (String *)0x0;
  }
  this = (Regex *)func_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor
            (this,StringLiteral___sPtr___sPtr_____________Ptr_________,(MethodInfo *)0x0);
  if ((this != (Regex *)0x0) &&
     (this_00 = System.dll::System::Text::RegularExpressions::Regex::Regex_Match
                          (this,key,(MethodInfo *)0x0), this_00 != (Match *)0x0)) {
    bVar1 = System.dll::System::Text::RegularExpressions::Group::Group_get_Success
                      ((Group *)this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return key;
    }
    this_01 = (GroupCollection *)(*(code *)(this_00->klass->vtable).get_Groups.method)();
    if (((this_01 != (GroupCollection *)0x0) &&
        (pOVar2 = System.dll::System::Text::RegularExpressions::GroupCollection::
                  GroupCollection_System_Collections_IList_get_Item(this_01,1,(MethodInfo *)0x0),
        pOVar2 != (Object *)0x0)) &&
       (pSVar3 = (String *)(*(code *)(pOVar2->klass->vtable).ToString.method)(),
       pSVar3 != (String *)0x0)) {
      pSVar3 = mscorlib.dll::System::String::String_Substring_1
                         (pSVar3,1,(pSVar3->fields)._stringLength + -2,(MethodInfo *)0x0);
      pSVar3 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                         (pSVar3,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* Void TryGetTextAsset(String) */

void Assembly-CSharp.dll::TM::TM_TryGetTextAsset(String *fileName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__GetRequest);
    func_?(&
                    MethodInfo__TM__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__MV__Common__Urls);
    func_?(&StringLiteral__txt_);
    func_?(&StringLiteral_Languages_);
    cRam_? = '\x01';
  }
  pTVar1 = TM_get_Instance((MethodInfo *)0x0);
  if (pTVar1 != (TM *)0x0) {
    (pTVar1->fields).fileName = fileName;
    func_?(&(pTVar1->fields).fileName,fileName);
    pKVar2 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (pKVar2 != (KoGaMaSettingsContainer *)0x0) {
      pSVar3 = mscorlib.dll::System::String::String_Concat_5
                         (StringLiteral_Languages_,fileName,StringLiteral__txt_,
                          (pKVar2->fields).versionGuid,(MethodInfo *)0x0);
      if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      str0 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3(str0,pSVar3,(MethodInfo *)0x0);
      this = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this,(Object *)0x0,
                 MethodInfo__TM__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_,
                 (MethodInfo *)0x0);
      this_00 = (AssetBundleRequest *)func_?();
      AssetBundleRequest::AssetBundleRequest__ctor
                (this_00,pSVar3,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this,
                 WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String _(String) */

String * Assembly-CSharp.dll::TM::TM__(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    func_?(&StringLiteral___sPtr___sPtr_____________Ptr_________);
    cRam_? = '\x01';
  }
  if (key == (String *)0x0) {
    key = (String *)0x0;
  }
  else {
    this_00 = (Regex *)func_?(TypeInfo__System__Text__RegularExpressions__Regex);
    System.dll::System::Text::RegularExpressions::Regex::Regex__ctor
              (this_00,StringLiteral___sPtr___sPtr_____________Ptr_________,(MethodInfo *)0x0);
    if (this_00 == (Regex *)0x0) goto code_?;
    this_01 = System.dll::System::Text::RegularExpressions::Regex::Regex_Match
                        (this_00,key,(MethodInfo *)0x0);
    if (this_01 == (Match *)0x0) goto code_?;
    bVar1 = System.dll::System::Text::RegularExpressions::Group::Group_get_Success
                      ((Group *)this_01,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      this_02 = (GroupCollection *)(*(code *)(this_01->klass->vtable).get_Groups.method)();
      if (this_02 == (GroupCollection *)0x0) goto code_?;
      pOVar2 = System.dll::System::Text::RegularExpressions::GroupCollection::
               GroupCollection_System_Collections_IList_get_Item(this_02,1,(MethodInfo *)0x0);
      if (pOVar2 == (Object *)0x0) goto code_?;
      pSVar3 = (String *)(*(code *)(pOVar2->klass->vtable).ToString.method)(pOVar2);
      if (pSVar3 == (String *)0x0) goto code_?;
      pSVar3 = mscorlib.dll::System::String::String_Substring_1
                         (pSVar3,1,(pSVar3->fields)._stringLength + -2,(MethodInfo *)0x0);
      key = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat(pSVar3,(MethodInfo *)0x0)
      ;
    }
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pTVar4 = TM_get_Instance((MethodInfo *)0x0);
    if (pTVar4 == (TM *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar5)();
      return pSVar3;
    }
    if ((pTVar4->fields).catalog != (Catalog *)0x0) {
      pTVar4 = TM_get_Instance((MethodInfo *)0x0);
      if ((pTVar4 == (TM *)0x0) || (this = (pTVar4->fields).catalog, this == (Catalog *)0x0))
      goto code_?;
      this_03 = GNU::Gettext::Catalog::Catalog_FindItem
                          (this,key,::StringLiteral__,(MethodInfo *)0x0);
      if (this_03 != (CatalogEntry *)0x0) {
        pSVar3 = GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                           (this_03,0,(MethodInfo *)0x0);
        bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          key = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                          (pSVar3,(MethodInfo *)0x0);
        }
      }
    }
  }
  return key;
}


/* TM() */

void Assembly-CSharp.dll::TM::TM__ctor(TM *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__Catalog);
    func_?(&MethodInfo__System__Collections__Generic__List<System::Action>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::Action>);
    func_?(&StringLiteral_en_US);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_00 = (Catalog *)func_?(TypeInfo__GNU__Gettext__Catalog);
  GNU::Gettext::Catalog::Catalog__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).catalog = this_00;
  func_?(&this->fields,this_00);
  (this->fields).fileName = ::StringLiteral__;
  func_?(&(this->fields).fileName,::StringLiteral__);
  this_01 = (List_1_System_Action_ *)
            func_?(TypeInfo__System__Collections__Generic__List<System::Action>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<System::Action>__List__);
  (this->fields).languageChangedCallback = this_01;
  func_?(&(this->fields).languageChangedCallback,this_01);
  (this->fields).cultureName = StringLiteral_en_US;
  method_00 = (MethodInfo *)&(this->fields).cultureName;
  func_?(method_00,StringLiteral_en_US);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* TM get_Instance() */

TM * Assembly-CSharp.dll::TM::TM_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TM);
    cRam_? = '\x01';
  }
  pTVar1 = TypeInfo__TM->static_fields;
  if (pTVar1->instance == (TM *)0x0) {
    value = (TM *)func_?(TypeInfo__TM);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GNU__Gettext__Catalog);
      func_?(&MethodInfo__System__Collections__Generic__List<System::Action>__List__);
      func_?(&TypeInfo__System__Collections__Generic__List<System::Action>);
      func_?(&StringLiteral_en_US);
      func_?(&::StringLiteral__);
      cRam_? = '\x01';
    }
    this = (Catalog *)func_?(TypeInfo__GNU__Gettext__Catalog);
    GNU::Gettext::Catalog::Catalog__ctor(this,(MethodInfo *)0x0);
    (value->fields).catalog = this;
    func_?(&value->fields,this);
    (value->fields).fileName = ::StringLiteral__;
    func_?(&(value->fields).fileName,::StringLiteral__);
    this_00 = (List_1_System_Action_ *)
              func_?(TypeInfo__System__Collections__Generic__List<System::Action>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
               MethodInfo__System__Collections__Generic__List<System::Action>__List__);
    (value->fields).languageChangedCallback = this_00;
    func_?(&(value->fields).languageChangedCallback,this_00);
    (value->fields).cultureName = StringLiteral_en_US;
    method_00 = (MethodInfo *)&(value->fields).cultureName;
    func_?(method_00,StringLiteral_en_US);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)value,ExceptionArgument__Enum_obj,method_00);
    TypeInfo__TM->static_fields->instance = value;
    pTStack2 = TypeInfo__TM->static_fields;
    pTStack3 = value;
    func_?();
    pTVar1 = TypeInfo__TM->static_fields;
  }
  return pTVar1->instance;
}

