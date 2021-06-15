
/* Byte[] CreatePostData() */

Byte__Array *
Assembly-CSharp.dll::StatHat::Post+FormPoster::Post_FormPoster_CreatePostData
          (Post_FormPoster *this,MethodInfo *method)

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
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = TypeInfo__System__String->static_fields->Empty;
  pDVar5 = (this->fields).Parameters;
  if ((pDVar5 != (Dictionary_2_System_String_System_String_ *)0x0) &&
     (this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                          ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar5,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Keys__
                          ),
     this_00 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0))
  {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                *)&pDStack_6,
               (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
               this_00,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::String,_System::String>__GetEnumerator__
              );
    uStack_1 = 0;
    while (cVar7 = func_?(), cVar7 != '\0') {
      s = (String *)func_?();
      unaff_ESI = (String__Array *)func_?();
      if (unaff_ESI == (String__Array *)0x0) goto code_?;
      if ((pSVar4 != (String *)0x0) &&
         (iVar8 = func_?(pSVar4,(unaff_ESI->klass->_0).element_class), iVar8 == 0)) {
        uVar9 = func_?();
        func_?(uVar9,0,0);
code_?:
        uVar9 = func_?();
        func_?(uVar9,0,0);
code_?:
        uVar9 = func_?();
        func_?(uVar9,0,0);
code_?:
        uVar9 = func_?();
        func_?(uVar9,0,0);
code_?:
        uVar9 = func_?();
        func_?(uVar9,0,0);
code_?:
        uVar9 = func_?();
        func_?(uVar9,0,0);
code_?:
        pDStack_6 = (Dictionary_2_WinningConditionType_System_Object_ *)func_?();
        func_?();
code_?:
        pDStack_6 = (Dictionary_2_WinningConditionType_System_Object_ *)func_?();
        func_?();
code_?:
        pDStack_6 = (Dictionary_2_WinningConditionType_System_Object_ *)func_?();
        func_?();
code_?:
        pDStack_6 = (Dictionary_2_WinningConditionType_System_Object_ *)func_?();
        func_?();
        goto code_?;
      }
      if (unaff_ESI->max_length == 0) goto code_?;
      unaff_ESI->vector[0] = pSVar4;
      pSVar4 = Post_FormPoster_encodeUriComponent(this,s,(MethodInfo *)0x0);
      if ((pSVar4 != (String *)0x0) &&
         (iVar8 = func_?(pSVar4,(unaff_ESI->klass->_0).element_class), iVar8 == 0))
      goto code_?;
      if (unaff_ESI->max_length < 2) goto code_?;
      unaff_ESI->vector[1] = pSVar4;
      if ((::StringLiteral__ != (String *)0x0) &&
         (iVar8 = func_?(::StringLiteral__,(unaff_ESI->klass->_0).element_class),
         iVar8 == 0)) goto code_?;
      if (unaff_ESI->max_length < 3) goto code_?;
      unaff_ESI->vector[2] = ::StringLiteral__;
      pDVar5 = (this->fields).Parameters;
      if (pDVar5 == (Dictionary_2_System_String_System_String_ *)0x0) goto code_?;
      s_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar5,(Type *)s,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                       );
      pSVar4 = Post_FormPoster_encodeUriComponent(this,(String *)s_00,(MethodInfo *)0x0);
      if (pSVar4 != (String *)0x0) {
        iVar8 = func_?();
        if (iVar8 != 0) goto code_?;
        goto code_?;
      }
code_?:
      if (unaff_ESI->max_length < 4) goto code_?;
      unaff_ESI->vector[3] = pSVar4;
      if (::StringLiteral__ != (String *)0x0) {
        iVar8 = func_?();
        if (iVar8 != 0) goto code_?;
        goto code_?;
      }
code_?:
      if (unaff_ESI->max_length < 5) goto code_?;
      unaff_ESI->vector[4] = ::StringLiteral__;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat_6(unaff_ESI,(MethodInfo *)0x0);
    }
    unaff_ESI = (String__Array *)0x0;
    uStack_1 = 0xffffffff;
    func_?();
    if ((((uint)(TypeInfo__System__Text__Encoding->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Text__Encoding->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Text__Encoding);
    }
    pEVar10 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
    if (pEVar10 != (Encoding *)0x0) {
      pBVar11 = (Byte__Array *)
               (*(code *)(pEVar10->klass->vtable).GetBytes_1.method)
                         (pEVar10,pSVar4,(pEVar10->klass->vtable).GetBytes_2.methodPtr);
      *unaff_FS_OFFSET = uStack_3;
      return pBVar11;
    }
  }
code_?:
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar12 = (code *)swi(3);
  pBVar11 = (Byte__Array *)(*pcVar12)();
  return pBVar11;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  data = Post_FormPoster_CreatePostData(this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_String_Theme_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  if (this_00 != (Dictionary_2_System_String_Theme_ *)0x0) {
    method_00 = this_00;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              (this_00,StringLiteral_Content_Type,
               (Theme *)StringLiteral_application_x_www_form_urlencode,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__set_Item_System__String__System__String_
              );
    pSVar4 = (this->fields).BaseUrl;
    pSVar5 = (this->fields).RelUrl;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat_2(pSVar4,pSVar5,(MethodInfo *)0x0);
    this_01 = (UnityWebRequest *)func_?();
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
    UnityWebRequest__ctor_1(this_01,pSVar4,StringLiteral_POST,(MethodInfo *)0x0);
    this_02 = (UploadHandlerRaw *)func_?();
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UploadHandlerRaw::
    UploadHandlerRaw__ctor(this_02,data,(MethodInfo *)0x0);
    if ((this_02 != (UploadHandlerRaw *)0x0) &&
       (UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UploadHandler::
        UploadHandler_set_contentType
                  ((UploadHandler *)this_02,StringLiteral_application_x_www_form_urlencode,
                   (MethodInfo *)method_00), this_01 != (UnityWebRequest *)0x0)) {
      UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
      UnityWebRequest_set_uploadHandler(this_01,(UploadHandler *)this_02,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]
      ::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                 &stack0xffffffa8,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__GetEnumerator__
                );
      uStack_1 = 0;
      while (cVar6 = func_?(), cVar6 != '\0') {
        LevelRewardsManager::LevelRewardsManager_get_NextReward
                  ((LevelRewardsManager *)&stack0xffffffbc,
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_System::String>__get_Current__
                  );
        pSVar4 = (String *)func_?();
        pSVar5 = (String *)func_?();
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
        UnityWebRequest_SetRequestHeader(this_01,pSVar4,pSVar5,(MethodInfo *)0x0);
      }
      uStack_1 = 0xffffffff;
      func_?();
      if (this_01 != (UnityWebRequest *)0x0) {
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
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).BaseUrl = base_url;
  (this->fields).Parameters = parameters;
  (this->fields).RelUrl = rel_url;
  Post_FormPoster_PostForm(this,(MethodInfo *)0x0);
  return;
}


/* String encodeUriComponent(String) */

String * Assembly-CSharp.dll::StatHat::Post+FormPoster::Post_FormPoster_encodeUriComponent
                   (Post_FormPoster *this,String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}

