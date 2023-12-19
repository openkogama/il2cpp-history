
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::GamePasses::GamePassesShopStatusFooter::
     GamePassesShopStatusFooter_Awake(GamePassesShopStatusFooter *this,MethodInfo *method)

{
  this_00 = (this->fields).embeddedPlayerConfig;
  if (this_00 != (EmbeddedPlayerConfig *)0x0) {
    pEVar1 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                       ((EmbeddedSiteConfigData *)&stack0xffffffd4,this_00,(MethodInfo *)0x0);
    uVar2 = pEVar1->hideSignUp;
    uVar3 = pEVar1->hideGoldShop;
    if (uVar2 != '\0') {
      pGVar4 = (this->fields).levelBar;
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
    }
    if (uVar3 != '\0') {
      pGVar4 = (this->fields).goldAmount;
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

