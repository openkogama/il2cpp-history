
/* Void InterstitialCallback(InterstitialAdResult) */

void Assembly-CSharp.dll::TouristAdStateHandler::TouristAdStateHandler_InterstitialCallback
               (TouristAdStateHandler *this,InterstitialAdResult__Enum obj,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?,CONCAT44(in_register_00000014,obj)),
     pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  pAVar4 = (this->fields).OnAdShown;
  (this->fields).adRateLimitCurrentTime = fVar3;
  if (pAVar4 == (Action *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar4->fields)._._.invoke_impl)((pAVar4->fields)._._.method_code,(pAVar4->fields)._._.method);
  return;
}


/* Void ShowAd(Action) */

void Assembly-CSharp.dll::TouristAdStateHandler::TouristAdStateHandler_ShowAd
               (TouristAdStateHandler *this,Action *OnAdFinished,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TouristAdStateHandler__InterstitialCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TouristAdStateHandler);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_showVideoAd);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).OnAdShown = OnAdFinished;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).OnAdShown >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar6 == (MVGameControllerBase *)0x0) ||
     (lVar7 = (*(pMVar6->klass->vtable).__unknown.methodPtr)
                        (pMVar6,(pMVar6->klass->vtable).__unknown.method), lVar7 == 0)) {
code_?:
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  cVar9 = FUN_?(5,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,lVar7);
  if (cVar9 != '\0') {
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    fVar11 = (float)(*pcRam_?)();
    fVar12 = (this->fields).adRateLimitCurrentTime;
    if (*(int *)&(TypeInfo__TouristAdStateHandler->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TouristAdStateHandler);
    }
    if (TypeInfo__TouristAdStateHandler->static_fields->adRateLimitTimer <= fVar11 - fVar12) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_showVideoAd,(MethodInfo *)0x0);
      pIVar13 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
      this_00 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_00,(Object *)this,
                 MethodInfo__TouristAdStateHandler__InterstitialCallback_Assets__Scripts__AdIntegration__InterstitialAdResult_
                 ,(MethodInfo *)0x0);
      if (pIVar13 != (IAdManager *)0x0) {
        FUN_?();
        return;
      }
      goto code_?;
    }
  }
  pAVar14 = (this->fields).OnAdShown;
  if (pAVar14 == (Action *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar14->fields)._._.invoke_impl)((pAVar14->fields)._._.method_code,(pAVar14->fields)._._.method);
  return;
}


/* TouristAdStateHandler() */

void Assembly-CSharp.dll::TouristAdStateHandler::TouristAdStateHandler__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TouristAdStateHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__TouristAdStateHandler->static_fields->adRateLimitTimer = 120.0;
  return;
}

