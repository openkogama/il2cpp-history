
/* Void CacheSpriteUrl(String, Sprite) */

void Assembly-CSharp.dll::StreamedSpriteToImageManual+StreamedAssetSpriteHandler::
     StreamedSpriteToImageManual_StreamedAssetSpriteHandler_CacheSpriteUrl
               (String *url,Sprite *sprite,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->static_fields->sprites;
  if (this != (Dictionary_2_System_String_UnityEngine_Sprite_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)url,(Object *)sprite,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>__set_Item_System__String__UnityEngine__Sprite_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Sprite GetSprite(String) */

Sprite * Assembly-CSharp.dll::StreamedSpriteToImageManual+StreamedAssetSpriteHandler::
         StreamedSpriteToImageManual_StreamedAssetSpriteHandler_GetSprite
                   (String *url,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>__TryGetValue_System__String__UnityEngine__Sprite__
                   );
    func_?(&TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler);
    cRam_? = '\x01';
  }
  pSStack_1 = (Sprite *)0x0;
  if ((TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler);
  }
  this = TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->static_fields->sprites;
  if (this != (Dictionary_2_System_String_UnityEngine_Sprite_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)url,
                       (Object **)&pSStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>__TryGetValue_System__String__UnityEngine__Sprite__
                      );
    if (bVar2 == 0) {
      pSStack_1 = (Sprite *)0x0;
    }
    return pSStack_1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar4 = (Sprite *)(*pcVar3)();
  return pSVar4;
}


/* StreamedSpriteToImageManual+StreamedAssetSpriteHandler() */

void Assembly-CSharp.dll::StreamedSpriteToImageManual+StreamedAssetSpriteHandler::
     StreamedSpriteToImageManual_StreamedAssetSpriteHandler__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>
                   );
    func_?(&TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_String_UnityEngine_Sprite_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>
                        );
  if (this != (Dictionary_2_System_String_UnityEngine_Sprite_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>__Dictionary__
              );
    TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->static_fields->sprites = this
    ;
    func_?(TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->static_fields
                    ,this);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

