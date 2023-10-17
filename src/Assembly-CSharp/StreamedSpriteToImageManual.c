
/* Void Download(String, UnityAction) */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::StreamedSpriteToImageManual_Download
               (StreamedSpriteToImageManual *this,String *url,UnityAction *onAssetSet,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__StreamedSpriteToImageManual__OnAssetSetCallback__);
    func_?(&
                    MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__DownloadWhenPossible__
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  (this->fields).onAssetSetManual = onAssetSet;
  func_?(&(this->fields).onAssetSetManual,onAssetSet);
  (this->fields)._._.url = url;
  func_?(&(this->fields)._._.url,url);
  pUVar1 = (this->fields)._._.onAssetSetAction;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  if (this_00 == (NavMesh_OnNavMeshPreUpdate *)0x0) {
    func_?();
  }
  else {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__StreamedSpriteToImageManual__OnAssetSetCallback__,
               (MethodInfo *)0x0);
    pUVar1 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pUVar1 == (UnityAction *)0x0) {
      (this->fields)._._.onAssetSetAction = (UnityAction *)0x0;
code_?:
      func_?();
      StreamingAsset`2[System::Object,System::Object]::
      StreamingAsset_2_System_Object_System_Object__DownloadWhenPossible
                ((StreamingAsset_2_System_Object_System_Object_ *)this,
                 MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__DownloadWhenPossible__
                );
      return;
    }
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 != (UnityAction *)0x0) {
      (this->fields)._._.onAssetSetAction = pUVar2;
      pUVar2 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar2 = pUVar1;
      }
      if (pUVar2 != (UnityAction *)0x0) goto code_?;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::StreamedSpriteToImageManual_OnAssetSet
               (StreamedSpriteToImageManual *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).image;
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (this_00,(this->fields)._.asset,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnAssetSetCallback() */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::
     StreamedSpriteToImageManual_OnAssetSetCallback
               (StreamedSpriteToImageManual *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__StreamedSpriteToImageManual__OnAssetSetCallback__);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields)._._.onAssetSetAction;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  if (this_00 == (NavMesh_OnNavMeshPreUpdate *)0x0) {
    uVar2 = func_?();
  }
  else {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__StreamedSpriteToImageManual__OnAssetSetCallback__,
               (MethodInfo *)0x0);
    pUVar1 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    uVar2 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pUVar1);
    pUStack3 = (UnityAction *)0x0;
    if (pUVar1 == (UnityAction *)0x0) {
      (this->fields)._._.onAssetSetAction = (UnityAction *)0x0;
code_?:
      ppUStack4 = &(this->fields)._._.onAssetSetAction;
      func_?();
      if ((this->fields).onAssetSetManual != (UnityAction *)0x0) {
        pUVar1 = (this->fields).onAssetSetManual;
        pUStack3 = (pUVar1->fields)._._.method;
        ppUStack4 = (pUVar1->fields)._._.method_code;
        (*(pUVar1->fields)._._.invoke_impl)();
      }
      return;
    }
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUStack3 = pUVar1;
    }
    if (pUStack3 != (UnityAction *)0x0) {
      (this->fields)._._.onAssetSetAction = pUStack3;
      uVar2 = CONCAT44(TypeInfo__UnityEngine__Events__UnityAction,pUVar1);
      pUStack3 = (UnityAction *)0x0;
      if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUStack3 = pUVar1;
      }
      if (pUStack3 != (UnityAction *)0x0) goto code_?;
    }
  }
  _ppUStack0000000c = uVar2;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDownloadFinished(UnityWebRequest) */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::
     StreamedSpriteToImageManual_OnDownloadFinished
               (StreamedSpriteToImageManual *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__set_Asset_UnityEngine__Sprite_
                   );
    func_?(&
                    UnityEngine__Sprite_MethodInfo__StreamingAsset__UnpackBundle_Cached<UnityEngine::Sprite>_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__StreamingAsset);
    func_?(&StringLiteral_DelayedUnload);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value_00 = StreamingAsset::StreamingAsset_UnpackBundle_Cached
                           (www,
                            UnityEngine__Sprite_MethodInfo__StreamingAsset__UnpackBundle_Cached<UnityEngine::Sprite>_UnityEngine__Networking__UnityWebRequest_
                           );
      StreamingAsset`2[System::Object,System::Object]::
      StreamingAsset_2_System_Object_System_Object__set_Asset
                ((StreamingAsset_2_System_Object_System_Object_ *)this,value_00,
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
    func_?(&
                    UnityEngine__UI__Image_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Image>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).image;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pIVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pIVar1 = (Image *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                ((Component *)this,
                                 UnityEngine__UI__Image_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Image>__
                                );
    (this->fields).image = pIVar1;
    func_?(&(this->fields).image,pIVar1);
  }
  return;
}


/* StreamedSpriteToImageManual() */

void Assembly-CSharp.dll::StreamedSpriteToImageManual::StreamedSpriteToImageManual__ctor
               (StreamedSpriteToImageManual *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__StreamingAsset__
                   );
    cRam_? = '\x01';
  }
  StreamingAsset`2[System::Object,System::Object]::
  StreamingAsset_2_System_Object_System_Object___ctor
            ((StreamingAsset_2_System_Object_System_Object_ *)this,
             MethodInfo__StreamingAsset<UnityEngine::Sprite,_UnityEngine::Texture2D>__StreamingAsset__
            );
  return;
}

