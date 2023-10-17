
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedSpriteToImage::StreamedSpriteToImage_OnAssetSet
               (StreamedSpriteToImage *this,MethodInfo *method)

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


/* Void Reset() */

void Assembly-CSharp.dll::StreamedSpriteToImage::StreamedSpriteToImage_Reset
               (StreamedSpriteToImage *this,MethodInfo *method)

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


/* StreamedSpriteToImage() */

void Assembly-CSharp.dll::StreamedSpriteToImage::StreamedSpriteToImage__ctor
               (StreamedSpriteToImage *this,MethodInfo *method)

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

