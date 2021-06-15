
/* Void CacheSpriteUrl(String, Sprite) */

void Assembly-CSharp.dll::StreamedSpriteToImageManual+StreamedAssetSpriteHandler::
     StreamedSpriteToImageManual_StreamedAssetSpriteHandler_CacheSpriteUrl
               (String *url,Sprite *sprite,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler);
  }
  this = (Dictionary_2_System_String_Theme_ *)
         TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->static_fields->sprites;
  if (this != (Dictionary_2_System_String_Theme_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              (this,url,(Theme *)sprite,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>__set_Item_System__String__UnityEngine__Sprite_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Sprite GetSprite(String) */

Sprite * Assembly-CSharp.dll::StreamedSpriteToImageManual+StreamedAssetSpriteHandler::
         StreamedSpriteToImageManual_StreamedAssetSpriteHandler_GetSprite
                   (String *url,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_1 = (Sprite *)0x0;
  if ((((uint)(TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler);
  }
  this = TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->static_fields->sprites;
  if (this != (Dictionary_2_System_String_UnityEngine_Sprite_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityEngine::
            Sprite]::Dictionary_2_System_String_UnityEngine_Sprite__TryGetValue
                      (this,url,&pSStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>__TryGetValue_System__String__UnityEngine__Sprite__
                      );
    if (bVar2 == 0) {
      pSStack_1 = (Sprite *)0x0;
    }
    return pSStack_1;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar4 = (Sprite *)(*pcVar3)();
  return pSVar4;
}


/* StreamedSpriteToImageManual+StreamedAssetSpriteHandler() */

void Assembly-CSharp.dll::StreamedSpriteToImageManual+StreamedAssetSpriteHandler::
     StreamedSpriteToImageManual_StreamedAssetSpriteHandler__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_String_UnityEngine_Sprite_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>__Dictionary__
            );
  TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->static_fields->sprites = this;
  return;
}

