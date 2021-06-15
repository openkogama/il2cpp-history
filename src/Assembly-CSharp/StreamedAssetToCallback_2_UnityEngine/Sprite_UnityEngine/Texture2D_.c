
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedAssetToCallback`2[UnityEngine::Sprite,UnityEngine::Texture2D]::
     StreamedAssetToCallback_2_UnityEngine_Sprite_UnityEngine_Texture2D__OnAssetSet
               (StreamedAssetToCallback_2_UnityEngine_Sprite_UnityEngine_Texture2D_ *this,
               MethodInfo *method)

{
  pAVar1 = (this->fields).onAssetSet;
  puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
  uVar3 = (*(code *)*puVar2)(this,puVar2);
  if (pAVar1 != (Action_1_UnityEngine_Sprite_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0xc);
    (*(code *)*puVar2)(pAVar1,uVar3,puVar2);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

