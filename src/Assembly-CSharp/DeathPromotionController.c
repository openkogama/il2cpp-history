
/* Void Initialize() */

void Assembly-CSharp.dll::DeathPromotionController::DeathPromotionController_Initialize
               (DeathPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPromotionController);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  pTVar2 = (&(this->fields).touristAdController)[bVar1 ^ 1];
  (this->fields).adController =
       (IPromotionController *)(&(this->fields).touristAdController)[bVar1 ^ 1];
  func_?(&(this->fields).adController,pTVar2);
  if ((this->fields).adController != (IPromotionController *)0x0) {
    func_?(0,TypeInfo__IPromotionController,(this->fields).adController);
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
  if ((this->fields).adController != (IPromotionController *)0x0) {
    cVar1 = func_?(2,TypeInfo__IPromotionController,(this->fields).adController);
    if (cVar1 != '\0') {
      pIVar2 = (this->fields).adController;
      if (pIVar2 != (IPromotionController *)0x0) {
        func_?(3,TypeInfo__IPromotionController,pIVar2,onPromotionPopped);
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
  if ((this->fields).adController != (IPromotionController *)0x0) {
    bVar1 = func_?(1,TypeInfo__IPromotionController,(this->fields).adController);
    return bVar1;
  }
  return 0;
}

