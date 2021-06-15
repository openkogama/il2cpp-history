
/* Void Initialize() */

void Assembly-CSharp.dll::DeathPromotionController::DeathPromotionController_Initialize
               (DeathPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 == 0) {
    pRVar2 = (this->fields).registeredAdController;
  }
  else {
    pRVar2 = (RegisteredPromotionController *)(this->fields).touristAdController;
  }
  (this->fields).adController = (IPromotionController *)pRVar2;
  if (pRVar2 != (RegisteredPromotionController *)0x0) {
    func_?(0,TypeInfo__IPromotionController,pRVar2);
  }
  return;
}


/* Void TryShowPromotion(UnityAction`2[System.Boolean,System.Boolean]) */

void Assembly-CSharp.dll::DeathPromotionController::DeathPromotionController_TryShowPromotion
               (DeathPromotionController *this,
               UnityAction_2_System_Boolean_System_Boolean_ *onPromotionPopped,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (onPromotionPopped != (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
    System.Core.dll::System::Action`2[Int32,Boolean]::Action_2_Int32_Boolean__Invoke
              ((Action_2_Int32_Boolean_ *)onPromotionPopped,0,0,
               MethodInfo__UnityEngine__Events__UnityAction<bool,_bool>__Invoke_bool__bool_);
  }
  return;
}


/* Boolean get_ReadyForAd() */

bool Assembly-CSharp.dll::DeathPromotionController::DeathPromotionController_get_ReadyForAd
               (DeathPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).adController;
  if (pIVar1 != (IPromotionController *)0x0) {
    bVar2 = func_?(1,TypeInfo__IPromotionController,pIVar1);
    return bVar2;
  }
  return 0;
}

