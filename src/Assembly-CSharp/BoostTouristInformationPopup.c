
/* Void SignUp() */

void Assembly-CSharp.dll::BoostTouristInformationPopup::BoostTouristInformationPopup_SignUp
               (BoostTouristInformationPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EmbeddedSite);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Signup_not_permitted_for_site_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).embeddedPlayerConfig;
  if (pEVar1 == (EmbeddedPlayerConfig *)0x0) {
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
    auVar3._0_8_ = (pEVar1->fields).kogamaDefaultData.sites;
    auVar3._8_4_ = (pEVar1->fields).kogamaDefaultData.siteEnum;
    auVar3[0xc] = (pEVar1->fields).kogamaDefaultData.showTouristPromotion;
    auVar3[0xd] = (pEVar1->fields).kogamaDefaultData.allowsOpenInNewTab;
    auVar3[0xe] = (pEVar1->fields).kogamaDefaultData.allowsRedirectToWebpage;
    auVar3[0xf] = (pEVar1->fields).kogamaDefaultData.allowsModals;
  }
  else {
    auVar3._0_8_ = (pEVar1->fields).currentSite.sites;
    auVar3._8_4_ = (pEVar1->fields).currentSite.siteEnum;
    auVar3[0xc] = (pEVar1->fields).currentSite.showTouristPromotion;
    auVar3[0xd] = (pEVar1->fields).currentSite.allowsOpenInNewTab;
    auVar3[0xe] = (pEVar1->fields).currentSite.allowsRedirectToWebpage;
    auVar3[0xf] = (pEVar1->fields).currentSite.allowsModals;
  }
  if (((auVar3[0xf] == '\0') && (auVar3[0xd] == '\0')) && (auVar3[0xe] == '\0')) {
    apuStackX_8[0] = (uint16_t *)CONCAT44(apuStackX_8[0]._4_4_,auVar3._8_4_);
    message = (Object *)FUN_?(TypeInfo__EmbeddedSite);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
    pSVar4 = StringLiteral_Signup_not_permitted_for_site_;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar5 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pSStack_6 = pSVar4;
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,0);
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm,auVar3._8_8_,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar7 == (GameSessionData *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar4 = (pGVar7->fields).signupURL;
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  if (TypeInfo__BrowserComm->static_fields->enableBrowserRequest == 0) {
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apuStackX_8[0] = (uint16_t *)0x0;
  puStack_8 = (uint16_t *)0x0;
  uStack_9 = 0;
  pSStack_6 = (String *)0x0;
  ppuStack_10 = apuStackX_8;
  if (pSVar4 != (String *)0x0) {
    if ((pSVar4->fields)._stringLength == 0) {
      puStack_8 = (uint16_t *)0x1;
      uStack_9 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar11 = (pSVar4->fields)._stringLength;
      apuStackX_8[0] = &(pSVar4->fields)._firstChar;
      if (iVar11 == 0) {
        apuStackX_8[0] = (uint16_t *)0x0;
      }
      uStack_9 = CONCAT44(uStack_9._4_4_,iVar11);
      puStack_8 = apuStackX_8[0];
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&puStack_8);
  return;
}

