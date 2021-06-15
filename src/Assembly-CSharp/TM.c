
/* Void Destroy() */

void Assembly-CSharp.dll::TM::TM_Destroy(MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (TypeInfo__TM->static_fields->instance != (TM *)0x0) {
    TypeInfo__TM->static_fields->instance = (TM *)0x0;
    uStack_1 = 0;
    if (TypeInfo__TM->static_fields->__f__mg_cache0 ==
        (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this,(Object *)0x0,
                 MethodInfo__TM__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_,
                 MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                );
      TypeInfo__TM->static_fields->__f__mg_cache0 =
           (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this;
    }
    callback = TypeInfo__TM->static_fields->__f__mg_cache0;
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AsyncWWWManager);
    }
    AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest(callback,(MethodInfo *)0x0);
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* String GetFilename(String) */

String * Assembly-CSharp.dll::TM::TM_GetFilename(String *languageName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (languageName == (String *)0x0) {
    return (String *)0x0;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (languageName,StringLiteral_en_GB,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
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


/* String[] GetTextAsArray(String) */

String__Array * Assembly-CSharp.dll::TM::TM_GetTextAsArray(String *toArrayString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  separator = (Char__Array *)func_?(TypeInfo__System__Char,2);
  if (separator == (Char__Array *)0x0) {
code_?:
    func_?(0);
  }
  else if (separator->max_length != 0) {
    separator->vector[0] = 0x7b;
    if (separator->max_length < 2) goto code_?;
    separator->vector[1] = 0x7d;
    if (toArrayString != (String *)0x0) {
      pSVar1 = mscorlib.dll::System::String::String_Split(toArrayString,separator,(MethodInfo *)0x0)
      ;
      return pSVar1;
    }
    goto code_?;
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pSVar1 = (String__Array *)(*pcVar3)();
  return pSVar1;
}


/* String GetTextWithValues(String, ValueInsert) */

String * Assembly-CSharp.dll::TM::TM_GetTextWithValues
                   (String *index,ValueInsert *values,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM__(index,(MethodInfo *)0x0);
  if (values != (ValueInsert *)0x0) {
    pTVar2 = TM_get_Instance((MethodInfo *)0x0);
    if (pTVar2 == (TM *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar3)();
      return pSVar1;
    }
    name = (pTVar2->fields).cultureName;
    this = (CultureInfo *)func_?(TypeInfo__System__Globalization__CultureInfo);
    mscorlib.dll::System::Globalization::CultureInfo::CultureInfo__ctor_3
              (this,name,(MethodInfo *)0x0);
    args = ValueInsert::ValueInsert_GetValueParams(values,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar1 = mscorlib.dll::System::String::String_Format_4
                       ((IFormatProvider *)this,pSVar1,args,(MethodInfo *)0x0);
  }
  return pSVar1;
}


/* Void LanguageChanged(Action) */

void Assembly-CSharp.dll::TM::TM_LanguageChanged
               (Action *onLanguageChangedCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = TM_get_Instance((MethodInfo *)0x0);
  if (pTVar1 != (TM *)0x0) {
    if ((pTVar1->fields).languageLoadingDone == 0) {
      pTVar1 = TM_get_Instance((MethodInfo *)0x0);
      if ((pTVar1 == (TM *)0x0) ||
         (this = (pTVar1->fields).languageChangedCallback, this == (List_1_System_Action_ *)0x0))
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this,(UIPushOption__Enum)onLanguageChangedCallback,
                 MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void LoadLanguage(String) */

void Assembly-CSharp.dll::TM::TM_LoadLanguage(String *languageName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (languageName != (String *)0x0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (languageName,StringLiteral_en_GB,(MethodInfo *)0x0);
    pSVar2 = StringLiteral_en_US;
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (languageName,StringLiteral_es,(MethodInfo *)0x0);
      pSVar2 = StringLiteral_es_ES;
      if (bVar1 == 0) {
        pSVar2 = languageName;
      }
    }
    if (pSVar2 != (String *)0x0) {
      pSVar3 = mscorlib.dll::System::String::String_Replace(pSVar2,0x5f,0x2d,(MethodInfo *)0x0);
      pTVar4 = TM_get_Instance((MethodInfo *)0x0);
      if (pTVar4 == (TM *)0x0) goto code_?;
      b = (pTVar4->fields).cultureName;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar1 = mscorlib.dll::System::String::String_op_Equality(pSVar3,b,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pTVar4 = TM_get_Instance((MethodInfo *)0x0);
        if (pTVar4 != (TM *)0x0) {
          (pTVar4->fields).fileName = pSVar2;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
          if (this != (KoGaMaSettingsContainer *)0x0) {
            pSVar3 = (String *)
                     System.Core.dll::System::Linq::
                     Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                     KeyValuePair`2[System::Object,System::Object],System::Object]::
                     Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                               ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                 *)this,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pSVar2 = mscorlib.dll::System::String::String_Concat_4
                               (StringLiteral_Languages_,pSVar2,StringLiteral__txt_,pSVar3,
                                (MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar3 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
            pSVar2 = mscorlib.dll::System::String::String_Concat_2(pSVar3,pSVar2,(MethodInfo *)0x0);
            if (TypeInfo__TM->static_fields->__f__mg_cache1 ==
                (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
              pAStack5 = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
              this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_00,(Object *)0x0,
                         MethodInfo__TM__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                         ,
                         MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                        );
              TypeInfo__TM->static_fields->__f__mg_cache1 =
                   (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00;
            }
            pAStack5 =
                 (Action_1_UnityEngine_Networking_UnityWebRequest___Class *)TypeInfo__GetRequest;
            callback = TypeInfo__TM->static_fields->__f__mg_cache1;
            this_01 = (GetRequest *)func_?();
            GetRequest::GetRequest__ctor
                      (this_01,pSVar2,callback,WWWRequestPriority__Enum_ExecuteWhileSyncronizing,
                       (MethodInfo *)0x0);
            if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
              func_?();
            }
            AsyncWWWManager::AsyncWWWManager_WWWRequest
                      ((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
            return;
          }
        }
        goto code_?;
      }
    }
  }
  pTVar4 = TM_get_Instance((MethodInfo *)0x0);
  if (pTVar4 != (TM *)0x0) {
    (pTVar4->fields).catalog = (Catalog *)0x0;
    TM_SetLanguageLoadingDone((MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetLanguageLoadingDone() */

void Assembly-CSharp.dll::TM::TM_SetLanguageLoadingDone(MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  puStack_4 = &stack0xffffffb8;
  pTVar7 = TM_get_Instance((MethodInfo *)0x0);
  if (pTVar7 != (TM *)0x0) {
    (pTVar7->fields).languageLoadingDone = 1;
    pTVar7 = TM_get_Instance((MethodInfo *)0x0);
    if ((pTVar7 != (TM *)0x0) &&
       (this = (List_1_UnityEngine_Color32_ *)(pTVar7->fields).languageChangedCallback,
       this != (List_1_UnityEngine_Color32_ *)0x0)) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,this,
                          MethodInfo__System__Collections__Generic__List<System::Action>__GetEnumerator__
                         );
      CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l
      ;
      CStack_6.monitor = (MonitorData *)pLVar8->next;
      CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
      CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
      uStack_1 = 0;
      while (cVar10 = func_?(), cVar10 != '\0') {
        this_01 = (JumpState_OnWallJumpDelegate *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__get_Current__
                            );
        if (this_01 == (JumpState_OnWallJumpDelegate *)0x0) goto code_?;
        JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_01,(MethodInfo *)0x0)
        ;
      }
      uStack_1 = 0xffffffff;
      func_?(&CStack_6,
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::Action>__Dispose__
                     );
      pTVar7 = TM_get_Instance((MethodInfo *)0x0);
      if ((pTVar7 != (TM *)0x0) &&
         (this_00 = (List_1_UnityEngine_UIVertex_ *)(pTVar7->fields).languageChangedCallback,
         this_00 != (List_1_UnityEngine_UIVertex_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (this_00,MethodInfo__System__Collections__Generic__List<System::Action>__Clear__);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  func_?();
  func_?(0,0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void StreamingAssetCallback(UnityWebRequest) */

void Assembly-CSharp.dll::TM::TM_StreamingAssetCallback(UnityWebRequest *www,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (www != (UnityWebRequest *)0x0) {
    pSVar3 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if (pSVar3 != (String *)0x0) {
      pSVar3 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
      arg1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral_Error_loading_text__0___1_,(Object *)pSVar3,(Object *)arg1,
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_2;
      return;
    }
    pTVar4 = TM_get_Instance((MethodInfo *)0x0);
    pCVar5 = (Catalog *)func_?();
    GNU::Gettext::Catalog::Catalog__ctor(pCVar5,(MethodInfo *)0x0);
    if (pTVar4 != (TM *)0x0) {
      (pTVar4->fields).catalog = pCVar5;
      pTVar4 = TM_get_Instance((MethodInfo *)0x0);
      if (pTVar4 != (TM *)0x0) {
        pCVar5 = (pTVar4->fields).catalog;
        this = (ActDetectorBase *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)www,
                          in_stack_6);
        if (this != (ActDetectorBase *)0x0) {
          Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
          ActDetectorBase_OnApplicationQuit(this,in_stack_7);
          pTVar4 = TM_get_Instance((MethodInfo *)0x0);
          if ((pTVar4 != (TM *)0x0) && (pCVar5 != (Catalog *)0x0)) {
            GNU::Gettext::Catalog::Catalog_Load
                      (pCVar5,text,(pTVar4->fields).fileName,in_stack_8);
            pTVar4 = TM_get_Instance((MethodInfo *)0x0);
            pTVar9 = TM_get_Instance((MethodInfo *)0x0);
            if ((pTVar9 != (TM *)0x0) &&
               ((pSVar3 = (pTVar9->fields).fileName, pSVar3 != (String *)0x0 &&
                (pSVar3 = mscorlib.dll::System::String::String_Replace
                                    (pSVar3,0x5f,0x2d,in_stack_10), pTVar4 != (TM *)0x0)))) {
              (pTVar4->fields).cultureName = pSVar3;
              TM_SetLanguageLoadingDone((MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_2;
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  func_?(&stack0xffffffe8,&UNK_?);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* String StripAssetStringFromFuncIdentifier(String) */

String * Assembly-CSharp.dll::TM::TM_StripAssetStringFromFuncIdentifier
                   (String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral___sPtr___sPtr_____________Ptr_________;
  if (key == (String *)0x0) {
    return (String *)0x0;
  }
  this = (Regex *)func_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1(this,pSVar1,(MethodInfo *)0x0);
  if ((this != (Regex *)0x0) &&
     (this_00 = System.dll::System::Text::RegularExpressions::Regex::Regex_Match
                          (this,key,(MethodInfo *)0x0), this_00 != (Match *)0x0)) {
    bVar2 = ThemeAttributes::ThemeAttribute`1[System::Boolean]::
            ThemeAttribute_1_System_Boolean__get_Value
                      ((ThemeAttribute_1_System_Boolean_ *)this_00,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return key;
    }
    this_01 = (GroupCollection *)(*(code *)(this_00->klass->vtable).get_Groups.method)();
    if (((this_01 != (GroupCollection *)0x0) &&
        (pGVar3 = System.dll::System::Text::RegularExpressions::GroupCollection::
                  GroupCollection_get_Item(this_01,1,(MethodInfo *)0x0), pGVar3 != (Group *)0x0)) &&
       (this_02 = (Collection_1_VoxelHit_ *)(*(code *)(pGVar3->klass->vtable).ToString.method)(),
       this_02 != (Collection_1_VoxelHit_ *)0x0)) {
      pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(this_02,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Substring_1
                         ((String *)this_02,1,(int32_t)((int)&pIVar4[-1].monitor + 2),
                          (MethodInfo *)0x0);
      pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                         (pSVar1,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* Void TryGetTextAsset(String) */

void Assembly-CSharp.dll::TM::TM_TryGetTextAsset(String *fileName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = TM_get_Instance((MethodInfo *)0x0);
  if (pTVar1 != (TM *)0x0) {
    (pTVar1->fields).fileName = fileName;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (this != (KoGaMaSettingsContainer *)0x0) {
      pSVar2 = (String *)
               System.Core.dll::System::Linq::
               Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
               KeyValuePair`2[System::Object,System::Object],System::Object]::
               Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                           *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Languages_,fileName,StringLiteral__txt_,pSVar2,
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
        func_?();
      }
      str0 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_2(str0,pSVar2,(MethodInfo *)0x0);
      if (TypeInfo__TM->static_fields->__f__mg_cache1 ==
          (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
        pAStack3 = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)0x0,
                   MethodInfo__TM__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_,
                   MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                  );
        TypeInfo__TM->static_fields->__f__mg_cache1 =
             (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00;
      }
      pAStack3 =
           (Action_1_UnityEngine_Networking_UnityWebRequest___Class *)TypeInfo__GetRequest;
      callback = TypeInfo__TM->static_fields->__f__mg_cache1;
      this_01 = (GetRequest *)func_?();
      GetRequest::GetRequest__ctor
                (this_01,pSVar2,callback,WWWRequestPriority__Enum_ExecuteWhileSyncronizing,
                 (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String _(String) */

String * Assembly-CSharp.dll::TM::TM__(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral___sPtr___sPtr_____________Ptr_________;
  if (key == (String *)0x0) {
    key = (String *)0x0;
  }
  else {
    this_00 = (Regex *)func_?(TypeInfo__System__Text__RegularExpressions__Regex);
    System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
              (this_00,pSVar1,(MethodInfo *)0x0);
    if ((this_00 == (Regex *)0x0) ||
       (this_01 = System.dll::System::Text::RegularExpressions::Regex::Regex_Match
                            (this_00,key,(MethodInfo *)0x0), this_01 == (Match *)0x0))
    goto code_?;
    bVar2 = ThemeAttributes::ThemeAttribute`1[System::Boolean]::
            ThemeAttribute_1_System_Boolean__get_Value
                      ((ThemeAttribute_1_System_Boolean_ *)this_01,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      this_02 = (GroupCollection *)(*(code *)(this_01->klass->vtable).get_Groups.method)();
      if (((this_02 == (GroupCollection *)0x0) ||
          (pGVar3 = System.dll::System::Text::RegularExpressions::GroupCollection::
                    GroupCollection_get_Item(this_02,1,(MethodInfo *)0x0), pGVar3 == (Group *)0x0))
         || (this_03 = (Collection_1_VoxelHit_ *)
                       (*(code *)(pGVar3->klass->vtable).ToString.method)(pGVar3),
            this_03 == (Collection_1_VoxelHit_ *)0x0)) goto code_?;
      pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(this_03,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Substring_1
                         ((String *)this_03,1,(int32_t)((int)&pIVar4[-1].monitor + 2),
                          (MethodInfo *)0x0);
      key = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat(pSVar1,(MethodInfo *)0x0)
      ;
    }
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return key;
  }
  pTVar5 = TM_get_Instance((MethodInfo *)0x0);
  if (pTVar5 != (TM *)0x0) {
    if ((pTVar5->fields).catalog == (Catalog *)0x0) {
      return key;
    }
    pTVar5 = TM_get_Instance((MethodInfo *)0x0);
    if (pTVar5 != (TM *)0x0) {
      this = (pTVar5->fields).catalog;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      if (this != (Catalog *)0x0) {
        this_04 = GNU::Gettext::Catalog::Catalog_FindItem
                            (this,key,TypeInfo__System__String->static_fields->Empty,
                             (MethodInfo *)0x0);
        if (this_04 == (CatalogEntry *)0x0) {
          return key;
        }
        pSVar1 = GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                           (this_04,0,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return key;
        }
        pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                           (pSVar1,(MethodInfo *)0x0);
        return pSVar1;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar6)();
  return pSVar1;
}


/* TM() */

void Assembly-CSharp.dll::TM::TM__ctor(TM *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Catalog *)func_?(TypeInfo__GNU__Gettext__Catalog);
  GNU::Gettext::Catalog::Catalog__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).catalog = this_00;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  (this->fields).fileName = TypeInfo__System__String->static_fields->Empty;
  method_00 = TypeInfo__System__Collections__Generic__List<System::Action>;
  this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<System::Action>__List__);
  (this->fields).languageChangedCallback = (List_1_System_Action_ *)this_01;
  (this->fields).cultureName = StringLiteral_en_US;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


/* TM get_Instance() */

TM * Assembly-CSharp.dll::TM::TM_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = TypeInfo__TM->static_fields;
  if (pTVar1->instance == (TM *)0x0) {
    this = (ScaleAnimationBase *)func_?(TypeInfo__TM);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (Catalog *)func_?(TypeInfo__GNU__Gettext__Catalog);
    GNU::Gettext::Catalog::Catalog__ctor(this_00,(MethodInfo *)0x0);
    (this->fields)._._._._.m_CachedPtr = this_00;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    (this->fields).state = (int32_t)TypeInfo__System__String->static_fields->Empty;
    method_00 = TypeInfo__System__Collections__Generic__List<System::Action>;
    this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_01,MethodInfo__System__Collections__Generic__List<System::Action>__List__);
    (this->fields).originalScale.y = (float)this_01;
    (this->fields).originalScale.z = (float)StringLiteral_en_US;
    ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
    TypeInfo__TM->static_fields->instance = (TM *)this;
    pTVar1 = TypeInfo__TM->static_fields;
  }
  return pTVar1->instance;
}

