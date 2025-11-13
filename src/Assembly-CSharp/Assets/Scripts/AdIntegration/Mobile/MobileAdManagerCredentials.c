
/* AdMobCredentials GetAdMobCredentials() */

AdMobCredentials *
Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManagerCredentials::
MobileAdManagerCredentials_GetAdMobCredentials(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AdMobCredentials_not_set_for_bui);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_AdMobCredentials_not_set_for_bui,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__AdMobCredentials);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AppId_not_set);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Reward_ad_unit_not_set);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Interstitial_ad_unit_not_set);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Banner_ad_unit_not);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AdMobCredentials *)
           FUN_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__AdMobCredentials);
  pSVar2 = StringLiteral_Interstitial_ad_unit_not_set;
  pSVar3 = StringLiteral_Banner_ad_unit_not;
  pSVar4 = StringLiteral_Reward_ad_unit_not_set;
  (pAVar1->fields).AppId = StringLiteral_AppId_not_set;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pAVar1->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  iVar10 = iRam_?;
  (pAVar1->fields).RewardedAdUnitId = pSVar4;
  if (iVar10 != 0) {
    uVar5 = (uint)((ulonglong)&(pAVar1->fields).RewardedAdUnitId >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar9);
  }
  (pAVar1->fields).InterstitialAdUnitId = pSVar2;
  iVar11 = 0;
  if (iVar10 != 0) {
    uVar5 = (uint)((ulonglong)&(pAVar1->fields).InterstitialAdUnitId >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar11 = iRam_?;
    } while (!bVar9);
  }
  (pAVar1->fields).BannerAdUnitId = pSVar3;
  if (iVar11 != 0) {
    uVar5 = (uint)((ulonglong)&(pAVar1->fields).BannerAdUnitId >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  return pAVar1;
}


/* AdMobCredentials GetDefault() */

AdMobCredentials *
Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManagerCredentials::
MobileAdManagerCredentials_GetDefault(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__AdMobCredentials);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AppId_not_set);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Reward_ad_unit_not_set);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Interstitial_ad_unit_not_set);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Banner_ad_unit_not);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (AdMobCredentials *)
           FUN_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__AdMobCredentials);
  pSVar2 = StringLiteral_Interstitial_ad_unit_not_set;
  pSVar3 = StringLiteral_Banner_ad_unit_not;
  pSVar4 = StringLiteral_Reward_ad_unit_not_set;
  (pAVar1->fields).AppId = StringLiteral_AppId_not_set;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pAVar1->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  iVar10 = iRam_?;
  (pAVar1->fields).RewardedAdUnitId = pSVar4;
  if (iVar10 != 0) {
    uVar5 = (uint)((ulonglong)&(pAVar1->fields).RewardedAdUnitId >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar9);
  }
  (pAVar1->fields).InterstitialAdUnitId = pSVar2;
  iVar11 = 0;
  if (iVar10 != 0) {
    uVar5 = (uint)((ulonglong)&(pAVar1->fields).InterstitialAdUnitId >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar11 = iRam_?;
    } while (!bVar9);
  }
  (pAVar1->fields).BannerAdUnitId = pSVar3;
  if (iVar11 != 0) {
    uVar5 = (uint)((ulonglong)&(pAVar1->fields).BannerAdUnitId >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  return pAVar1;
}

