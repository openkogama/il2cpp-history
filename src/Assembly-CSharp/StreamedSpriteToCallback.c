
/* StreamedSpriteToCallback() */

void Assembly-CSharp.dll::StreamedSpriteToCallback::StreamedSpriteToCallback__ctor
               (StreamedSpriteToCallback *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__StreamedAssetToCallback<UnityEngine::Sprite,_UnityEngine::Texture2D>__StreamedAssetToCallback__
                   );
    cRam_? = '\x01';
  }
  StreamingAsset`2[System::Object,System::Object]::
  StreamingAsset_2_System_Object_System_Object___ctor
            ((StreamingAsset_2_System_Object_System_Object_ *)this,
             MethodInfo__StreamedAssetToCallback<UnityEngine::Sprite,_UnityEngine::Texture2D>__StreamedAssetToCallback__
            );
  return;
}

