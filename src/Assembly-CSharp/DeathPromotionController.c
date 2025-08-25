
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
      if (pIVar2 == (IPromotionController *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar4 = pIVar2->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pIVar4->_1).rank;
      uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)TypeInfo__IPromotionController) {
            pIVar4 = pIVar2->klass;
            iVar7 = pIVar4->interfaceOffsets[uVar5].offset;
            (*(code *)(&(pIVar4->vtable).ShowPromotion)[iVar7].method)
                      (pIVar2,onPromotionPopped,(&pIVar4[1]._0.image)[iVar7 * 2]);
            return;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      puVar8 = (undefined4 *)func_?(pIVar2,TypeInfo__IPromotionController,3);
      (*(code *)*puVar8)(pIVar2,onPromotionPopped,puVar8[1]);
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

