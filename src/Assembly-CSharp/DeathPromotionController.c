
/* Void Initialize() */

void Assembly-CSharp.dll::DeathPromotionController::DeathPromotionController_Initialize
               (DeathPromotionController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPromotionController);
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
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields).profileID < 1) {
    bVar3 = iRam_? != 0;
    (this->fields).adController = (IPromotionController *)(this->fields).touristAdController;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).adController >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
  }
  else {
    bVar3 = iRam_? != 0;
    (this->fields).adController = (IPromotionController *)(this->fields).registeredAdController;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).adController >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
  }
  pIVar8 = (this->fields).adController;
  if (pIVar8 == (IPromotionController *)0x0) {
    return;
  }
  uVar9 = 0;
  pIVar10 = pIVar8->klass;
  uVar11._0_1_ = (pIVar10->_1).rank;
  uVar11._1_1_ = (pIVar10->_1).minimumAlignment;
  if (uVar11 != 0) {
    do {
      if (pIVar10->interfaceOffsets[uVar9].interfaceType ==
          (Il2CppClass *)TypeInfo__IPromotionController) {
        pVVar12 = &(pIVar10->vtable).get_IsPromotionOrAdWithoutPromotionAvailable +
                  (pIVar10->interfaceOffsets[uVar9].offset + 1);
        UNRECOVERED_JUMPTABLE = pVVar12->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(pIVar8,pVVar12->method,UNRECOVERED_JUMPTABLE);
        return;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar11);
  }
  puVar13 = (undefined8 *)FUN_?(pIVar8);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar13)(pIVar8,puVar13[1],(code *)*puVar13);
  return;
}


/* Void TryShowPromotionOrAd(UnityAction`2[System.Boolean,System.Boolean]) */

void Assembly-CSharp.dll::DeathPromotionController::DeathPromotionController_TryShowPromotionOrAd
               (DeathPromotionController *this,
               UnityAction_2_System_Boolean_System_Boolean_ *onPromotionPopped,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPromotionController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).adController != (IPromotionController *)0x0) {
    cVar1 = FUN_?(0,TypeInfo__IPromotionController,(this->fields).adController);
    if (cVar1 != '\0') {
      pIVar2 = (this->fields).adController;
      if (pIVar2 == (IPromotionController *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar4 = 0;
      pIVar5 = pIVar2->klass;
      uVar6._0_1_ = (pIVar5->_1).rank;
      uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pIVar5->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__IPromotionController) {
            pVVar7 = &(pIVar5->vtable).get_IsPromotionOrAdWithoutPromotionAvailable +
                     (pIVar5->interfaceOffsets[uVar4].offset + 2);
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar6);
      }
      pVVar7 = (VirtualInvokeData *)FUN_?(pIVar2);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar7->methodPtr)(pIVar2,onPromotionPopped,pVVar7->method,pVVar7->methodPtr);
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

