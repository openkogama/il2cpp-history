
/* Void CacheSpriteUrl(String, Sprite) */

void Assembly-CSharp.dll::StreamedSpriteToImageManual+StreamedAssetSpriteHandler::
     StreamedSpriteToImageManual_StreamedAssetSpriteHandler_CacheSpriteUrl
               (String *url,Sprite *sprite,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>__set_Item_System__String__UnityEngine__Sprite_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->_1).field_0x1c ==
      0) {
    FUN_?(TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler);
  }
  this = TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->static_fields->sprites;
  if (this != (Dictionary_2_System_String_UnityEngine_Sprite_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)url,(Object *)sprite,
               CONCAT31((int3)((uint)in_R9D >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>__set_Item_System__String__UnityEngine__Sprite_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>__TryGetValue_System__String__UnityEngine__Sprite__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSStackX_8 = (Sprite *)0x0;
  if (*(int *)&(TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->_1).field_0x1c ==
      0) {
    FUN_?(TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler);
  }
  this = TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->static_fields->sprites;
  if (this != (Dictionary_2_System_String_UnityEngine_Sprite_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)url,
                       (Object **)&pSStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>__TryGetValue_System__String__UnityEngine__Sprite__
                      );
    if (bVar1 == 0) {
      pSStackX_8 = (Sprite *)0x0;
    }
    return pSStackX_8;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (Sprite *)(*pcVar2)();
  return pSVar3;
}


/* StreamedSpriteToImageManual+StreamedAssetSpriteHandler() */

void Assembly-CSharp.dll::StreamedSpriteToImageManual+StreamedAssetSpriteHandler::
     StreamedSpriteToImageManual_StreamedAssetSpriteHandler__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Sprite>__Dictionary__
            );
  TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->static_fields->sprites =
       (Dictionary_2_System_String_UnityEngine_Sprite_ *)this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   TypeInfo__StreamedSpriteToImageManual__StreamedAssetSpriteHandler->static_fields
                  >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}

