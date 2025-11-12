
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::GamePasses::GamePassesShopStatusFooter::
     GamePassesShopStatusFooter_Awake(GamePassesShopStatusFooter *this,MethodInfo *method)

{
  pEVar1 = (this->fields).embeddedPlayerConfig;
  if (pEVar1 == (EmbeddedPlayerConfig *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pEVar1->fields).initialized == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
    uVar3 = (pEVar1->fields).kogamaDefaultData.hideGoldShop;
    uVar4 = (pEVar1->fields).kogamaDefaultData.allowInHouseAds;
    uVar5 = (pEVar1->fields).kogamaDefaultData.removeFullscreenButton;
    uVar6 = (pEVar1->fields).kogamaDefaultData.hideSignUp;
    uVar7 = (pEVar1->fields).kogamaDefaultData.noPlayButtonVideoIcon;
    uVar8 = CONCAT11(uVar7,uVar6);
    uVar9 = CONCAT21(uVar8,uVar5);
    uVar10 = CONCAT31(uVar9,uVar4);
    uVar11 = CONCAT41(uVar10,uVar3);
    uVar12 = (undefined4)uVar11;
  }
  else {
    uVar13 = (pEVar1->fields).currentSite.hideGoldShop;
    uVar14 = (pEVar1->fields).currentSite.allowInHouseAds;
    uVar15 = (pEVar1->fields).currentSite.removeFullscreenButton;
    uVar16 = (pEVar1->fields).currentSite.hideSignUp;
    uVar17 = (pEVar1->fields).currentSite.noPlayButtonVideoIcon;
    uVar18 = CONCAT11(uVar17,uVar16);
    uVar19 = CONCAT21(uVar18,uVar15);
    uVar20 = CONCAT31(uVar19,uVar14);
    uVar21 = CONCAT41(uVar20,uVar13);
    uVar12 = (undefined4)uVar21;
  }
  if ((char)((uint)uVar12 >> 0x18) != '\0') {
    pGVar22 = (this->fields).levelBar;
    if (pGVar22 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar22,0,(MethodInfo *)0x0);
  }
  cStack_23 = (char)uVar12;
  if (cStack_23 != '\0') {
    pGVar22 = (this->fields).goldAmount;
    if (pGVar22 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar22,0,(MethodInfo *)0x0);
  }
  return;
}

