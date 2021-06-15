
/* Void DoCallBack() */

void Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::
     MobileAdManager+InterstitialAdResultHandler::
     MobileAdManager_InterstitialAdResultHandler_DoCallBack
               (MobileAdManager_InterstitialAdResultHandler *this,MethodInfo *method)

{
  ppMStack_1 = (MobileAdManager_InterstitialAdResultHandler **)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &ppMStack_1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  pMVar2 = this;
  this = (MobileAdManager_InterstitialAdResultHandler *)(this->fields).context;
  pOVar3 = (Object *)func_?(TypeInfo__Assets__Scripts__AdIntegration__AdContext,&this);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Ad_InterstitialFinished_,pOVar3,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0)) {
    func_?();
  }
  MobileAdManager::MobileAdManager_SendStat(pSVar4,(MethodInfo *)0x0);
  if ((pMVar2->fields).interstitialAdResult == 3) {
    if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0))
    {
      func_?();
    }
    MobileAdManager::MobileAdManager_SendStat(StringLiteral_Ad_InterstitialShown,(MethodInfo *)0x0);
    this = (MobileAdManager_InterstitialAdResultHandler *)(pMVar2->fields).context;
    ppMStack_1 = &this;
    pOVar3 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat_1
                       ((Object *)StringLiteral_Ad_InterstitialFinished_,pOVar3,
                        (Object *)StringLiteral__Success,(MethodInfo *)0x0);
  }
  else {
    this = (MobileAdManager_InterstitialAdResultHandler *)(pMVar2->fields).context;
    pOVar3 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar4 = mscorlib.dll::System::String::String_Concat_1
                       ((Object *)StringLiteral_Ad_InterstitialFinished_,pOVar3,
                        (Object *)StringLiteral__Failure,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Assets__Scripts__AdIntegration__Mobile__MobileAdManager->_1).cctor_started == 0))
    {
      func_?();
    }
  }
  MobileAdManager::MobileAdManager_SendStat(pSVar4,(MethodInfo *)0x0);
  if ((pMVar2->fields).adUIManager != (IAdUIManager *)0x0) {
    func_?();
    this_00 = (Action_1_UIPushOption_ *)(pMVar2->fields).interstitialCallback;
    if (this_00 != (Action_1_UIPushOption_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                (this_00,(pMVar2->fields).interstitialAdResult,
                 MethodInfo__System__Action<Assets::Scripts::AdIntegration::InterstitialAdResult>__Invoke_Assets__Scripts__AdIntegration__InterstitialAdResult_
                );
      *unaff_FS_OFFSET = ppMStack_1;
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

