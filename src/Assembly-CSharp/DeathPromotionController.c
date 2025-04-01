
/* Void Initialize() */

void Assembly-CSharp.dll::DeathPromotionController::DeathPromotionController_Initialize
               (DeathPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPromotionController);
    cRam_? = '\x01';
  }
  ppIVar1 = &(this->fields).adController;
  bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar2 == 0) {
    pRVar3 = (this->fields).registeredAdController;
  }
  else {
    pRVar3 = (RegisteredPromotionController *)(this->fields).touristAdController;
  }
  *ppIVar1 = (IPromotionController *)pRVar3;
  func_?(ppIVar1,pRVar3);
  if (*ppIVar1 != (IPromotionController *)0x0) {
    func_?(0,TypeInfo__IPromotionController,*ppIVar1);
  }
  return;
}


/* Void TryShowPromotion(UnityAction`2[System.Boolean,System.Boolean]) */

void Assembly-CSharp.dll::DeathPromotionController::DeathPromotionController_TryShowPromotion
               (DeathPromotionController *this,
               UnityAction_2_System_Boolean_System_Boolean_ *onPromotionPopped,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPromotionController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).adController;
  if (pIVar1 != (IPromotionController *)0x0) {
    cVar2 = func_?(2,TypeInfo__IPromotionController,pIVar1);
    if (cVar2 != '\0') {
      pIVar1 = (this->fields).adController;
      if (pIVar1 != (IPromotionController *)0x0) {
        func_?(3,TypeInfo__IPromotionController,pIVar1,onPromotionPopped);
        return;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (onPromotionPopped != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
    (*(onPromotionPopped->fields)._._.invoke_impl)
              ((onPromotionPopped->fields)._._.method_code,0,0,
               (onPromotionPopped->fields)._._.method);
  }
  return;
}


/* Boolean get_ReadyForAd() */

bool Assembly-CSharp.dll::DeathPromotionController::DeathPromotionController_get_ReadyForAd
               (DeathPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPromotionController);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).adController;
  if (pIVar1 != (IPromotionController *)0x0) {
    bVar2 = func_?(1,TypeInfo__IPromotionController,pIVar1);
    return bVar2;
  }
  return 0;
}

