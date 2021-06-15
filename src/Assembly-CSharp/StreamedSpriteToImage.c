
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedSpriteToImage::StreamedSpriteToImage_OnAssetSet
               (StreamedSpriteToImage *this,MethodInfo *method)

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


/* Void Reset() */

void Assembly-CSharp.dll::StreamedSpriteToImage::StreamedSpriteToImage_Reset
               (StreamedSpriteToImage *this,MethodInfo *method)

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


/* StreamedSpriteToImage() */

void Assembly-CSharp.dll::StreamedSpriteToImage::StreamedSpriteToImage__ctor
               (StreamedSpriteToImage *this,MethodInfo *method)

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

