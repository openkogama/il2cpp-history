
/* Void Download(String, UnityAction) */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
               (StreamedSpriteToImageManual *this,String *url,UnityAction *onAssetSet,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields)._._.onAssetSetAction;
  (this->fields).onAssetSetManual = onAssetSet;
  (this->fields)._._.url = url;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__StreamedSpriteToImageManual__OnAssetSetCallback__,
             (MethodInfo *)0x0);
  pUVar2 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar2 != (UnityAction *)0x0) {
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar2;
    }
    if (pUVar1 == (UnityAction *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (this->fields)._._.onAssetSetAction = pUVar1;
  StreamingAsset`2[UnityEngine::Sprite,UnityEngine::Texture2D]::
  StreamingAsset_2_UnityEngine_Sprite_UnityEngine_Texture2D__DownloadWhenPossible
            ((StreamingAsset_2_UnityEngine_Sprite_UnityEngine_Texture2D_ *)this,
             MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__DownloadWhenPossible__
            );
  return;
}


/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::StreamedSpriteToImageManual_OnAssetSet
               (StreamedSpriteToImageManual *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).image;
  value = (Sprite *)
          System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
          Int32]::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                    ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                     MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__get_Asset__
                    );
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite(this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnAssetSetCallback() */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::
     StreamedSpriteToImageManual_OnAssetSetCallback
               (StreamedSpriteToImageManual *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields)._._.onAssetSetAction;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__StreamedSpriteToImageManual__OnAssetSetCallback__,
             (MethodInfo *)0x0);
  pUVar2 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar2 != (UnityAction *)0x0) {
    if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar2;
    }
    if (pUVar1 == (UnityAction *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (this->fields)._._.onAssetSetAction = pUVar1;
  if ((this->fields).onAssetSetManual == (UnityAction *)0x0) {
    return;
  }
  if (*(AvatarMotor_OnActiveBounceDelegate **)(in_stack_4 + 0x2c) !=
      (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (*(AvatarMotor_OnActiveBounceDelegate **)(in_stack_4 + 0x2c),in_stack_5)
    ;
  }
  pcVar3 = *(code **)(in_stack_4 + 8);
  method_00 = *(KeyValuePair_2_WinningConditionType_System_Object_ **)(in_stack_4 + 0x14);
  piVar6 = *(int **)(in_stack_4 + 0x10);
  if ((short)method_00[5].key == -1) {
    func_?();
  }
  cVar7 = func_?();
  if (cVar7 == '\0') {
    if (*(char *)((int)&method_00[5].key + 2) == '\0') {
      (*pcVar3)();
      return;
    }
  }
  else if (((short)method_00[5].key != -1) &&
          (((piVar6 == (int *)0x0 || ((*(uint *)(*piVar6 + 0xa0) & 0x100) == 0)) &&
           (*(int *)(in_stack_4 + 0xc) != 0)))) {
    cVar7 = func_?();
    if (cVar7 != '\0') {
      return;
    }
    cVar7 = func_?();
    mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::Object]
    ::KeyValuePair_2_WinningConditionType_System_Object__get_Value
              (method_00,(MethodInfo *)method_00);
    cVar8 = func_?();
    if (cVar7 != '\0') {
      if (cVar8 != '\0') {
        func_?();
        return;
      }
      func_?();
      return;
    }
    if (cVar8 != '\0') {
      mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
      Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                (method_00,in_stack_9);
      func_?();
      return;
    }
    func_?();
    return;
  }
  (*pcVar3)();
  return;
}


/* Void OnDownloadFinished(UnityWebRequest) */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::
     StreamedSpriteToImageManual_OnDownloadFinished
               (StreamedSpriteToImageManual *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
        func_?();
      }
      value_00 = StreamingAsset::StreamingAsset_UnpackBundle_Cached_3
                           (www,
                            UnityEngine__Sprite_MethodInfo__StreamingAsset__UnpackBundle_Cached<UnityEngine::Sprite>_UnityEngine__Networking__UnityWebRequest_
                           );
      StreamingAsset`2[UnityEngine::Sprite,UnityEngine::Texture2D]::
      StreamingAsset_2_UnityEngine_Sprite_UnityEngine_Texture2D__set_Asset
                ((StreamingAsset_2_UnityEngine_Sprite_UnityEngine_Texture2D_ *)this,value_00,
                 MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__set_Asset_UnityEngine__Sprite_
                );
      if ((this->fields)._.useCache == 0) {
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_1
                  ((MonoBehaviour *)this,StringLiteral_DelayedUnload,(Object *)www,(MethodInfo *)0x0
                  );
      }
    }
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::StreamedSpriteToImageManual_Reset
               (StreamedSpriteToImageManual *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).image;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pIVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pIVar1 = (Image *)UnityEngine.CoreModule.dll::UnityEngine::Component::
                      Component_1_GetComponent_58
                                ((Component_1 *)this,
                                 UnityEngine__UI__Image_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Image>__
                                );
    (this->fields).image = pIVar1;
  }
  return;
}


/* StreamedSpriteToImageManual() */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::StreamedSpriteToImageManual__ctor
               (StreamedSpriteToImageManual *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  StreamingAsset`2[UnityEngine::Texture2D,UnityEngine::Texture2D]::
  StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D___ctor
            ((StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D_ *)this,
             MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__StreamingAsset__
            );
  return;
}

