
/* Boolean Consume(GameCoinLogic) */

bool Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_Consume
               (MVGameCoinManager *this,GameCoinLogic *gameCoinLogic,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).gameCoins.currentCryptoKey;
  iVar2 = (this->fields).gameCoins.hiddenValue;
  iVar3 = (this->fields).gameCoins.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value_00.hiddenValue = iVar2;
  value_00.currentCryptoKey = iVar1;
  value_00.fakeValue = iVar3;
  value_00.inited = (this->fields).gameCoins.inited;
  value_00._13_3_ = *(undefined3 *)&(this->fields).gameCoins.field_0xd;
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value_00,(MethodInfo *)0x0);
  if (gameCoinLogic != (GameCoinLogic *)0x0) {
    if ((gameCoinLogic->fields).purchaseAmount <= iVar1) {
      iVar1 = (this->fields).gameCoins.currentCryptoKey;
      puVar4 = (undefined *)(this->fields).gameCoins.hiddenValue;
      pOVar5 = (ObscuredInt__Class *)(this->fields).gameCoins.fakeValue;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
          cctor_finished_or_no_cctor == 0) {
        puVar4 = &UNK_?;
        pOVar5 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
        func_?();
      }
      value_01.hiddenValue = (int32_t)puVar4;
      value_01.currentCryptoKey = iVar1;
      value_01.fakeValue = (int32_t)pOVar5;
      value_01.inited = (this->fields).gameCoins.inited;
      value_01._13_3_ = *(undefined3 *)&(this->fields).gameCoins.field_0xd;
      iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit_1(value_01,(MethodInfo *)0x0);
      pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
               ObscuredInt_op_Implicit
                         ((ObscuredInt *)&stack0xffffffec,
                          iVar1 - (gameCoinLogic->fields).purchaseAmount,(MethodInfo *)0x0);
      pMVar7 = (this->fields).OnGameCoinAmountChange;
      iVar1 = pOVar6->currentCryptoKey;
      iVar2 = pOVar6->hiddenValue;
      iVar3 = pOVar6->fakeValue;
      uVar8 = *(undefined4 *)&pOVar6->inited;
      (this->fields).gameCoins.currentCryptoKey = iVar1;
      (this->fields).gameCoins.hiddenValue = iVar2;
      (this->fields).gameCoins.fakeValue = iVar3;
      *(undefined4 *)&(this->fields).gameCoins.inited = uVar8;
      if (pMVar7 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
        pMVar7 = (this->fields).OnGameCoinAmountChange;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        value.hiddenValue = iVar2;
        value.currentCryptoKey = iVar1;
        value.fakeValue = iVar3;
        value._12_4_ = uVar8;
        puStack9 = (undefined *)uVar8;
        puStack9 =
             (undefined *)
             Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
        (*(pMVar7->fields)._._.invoke_impl)();
      }
      return 1;
    }
    return 0;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void Evaluate() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_Evaluate
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                       (pMVar1,WorldObjectType__Enum_GameCoin,(MethodInfo *)0x0);
    if (pLVar2 != (List_1_MVWorldObjectClient_ *)0x0) {
      iVar3 = (pLVar2->fields)._size;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                           (pMVar1,WorldObjectType__Enum_GameCoinChest,(MethodInfo *)0x0);
        if (pLVar2 != (List_1_MVWorldObjectClient_ *)0x0) {
          iVar4 = (pLVar2->fields)._size;
          iVar5 = (this->fields).totalPurchaseAmount.currentCryptoKey;
          iVar6 = (this->fields).totalPurchaseAmount.hiddenValue;
          iVar7 = (this->fields).totalPurchaseAmount.fakeValue;
          puVar8 = *(undefined **)&(this->fields).totalPurchaseAmount.inited;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
              cctor_finished_or_no_cctor == 0) {
            puVar8 = &UNK_?;
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          }
          value.hiddenValue = iVar6;
          value.currentCryptoKey = iVar5;
          value.fakeValue = iVar7;
          value._12_4_ = puVar8;
          iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                  ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
          if (((iVar5 < 1) && (iVar3 < 1)) && (iVar4 < 1)) {
            MVGameCoinManager_HandleActivationChange(this,0,(MethodInfo *)0x0);
            return;
          }
          MVGameCoinManager_HandleActivationChange(this,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void GameCoinChestCollect(Int32) */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_GameCoinChestCollect
               (MVGameCoinManager *this,int32_t amount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  auStack_1._0_4_ = (this->fields).gameCoins.currentCryptoKey;
  auStack_1._4_4_ = (this->fields).gameCoins.hiddenValue;
  uVar2._0_1_ = (this->fields).gameCoins.inited;
  uVar2._1_3_ = *(undefined3 *)&(this->fields).gameCoins.field_0xd;
  uVar3 = (this->fields).gameCoins.fakeValue;
  uVar4 = (this->fields).gameCoins.inited;
  uVar5 = *(undefined3 *)&(this->fields).gameCoins.field_0xd;
  auStack_1._13_3_ = uVar5;
  auStack_1[0xc] = uVar4;
  auStack_1._8_4_ = uVar3;
  stack0xfffffffc = unaff_EBP;
  iVar6 = (this->fields).gameCoins.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    iVar6 = auStack_1._8_4_;
    uVar2 = auStack_1._12_4_;
  }
  OVar7.hiddenValue = auStack_1._4_4_;
  OVar7.currentCryptoKey = auStack_1._0_4_;
  OVar7.fakeValue = iVar6;
  OVar7.inited = (bool)uVar2;
  OVar7._13_3_ = SUB43(uVar2,1);
  iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(OVar7,(MethodInfo *)0x0);
  pOVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit
                      ((ObscuredInt *)auStack_1,
                       (this->fields).currentBoostMultiplier * amount + iVar6,(MethodInfo *)0x0);
  auVar9 = stack0xfffffff4;
  pMVar10 = (this->fields).OnGameCoinAmountChange;
  auStack_1._0_4_ = pOVar8->currentCryptoKey;
  auStack_1._4_4_ = pOVar8->hiddenValue;
  iVar6 = pOVar8->fakeValue;
  uVar11._0_1_ = pOVar8->inited;
  uVar11._1_3_ = *(undefined3 *)&pOVar8->field_0xd;
  uVar12 = pOVar8->fakeValue;
  uVar13 = pOVar8->inited;
  uVar14 = *(undefined3 *)&pOVar8->field_0xd;
  auStack_1._13_3_ = uVar14;
  auStack_1[0xc] = uVar13;
  auStack_1._8_4_ = uVar12;
  stack0xfffffffc = auVar9._8_4_;
  (this->fields).gameCoins.currentCryptoKey = auStack_1._0_4_;
  (this->fields).gameCoins.hiddenValue = auStack_1._4_4_;
  (this->fields).gameCoins.fakeValue = iVar6;
  (this->fields).gameCoins.inited = (bool)uVar11;
  *(undefined3 *)&(this->fields).gameCoins.field_0xd = uVar11._1_3_;
  if (pMVar10 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
    pMVar10 = (this->fields).OnGameCoinAmountChange;
    iVar15 = auStack_1._4_4_;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
      iVar15 = auStack_1._4_4_;
      iVar6 = auStack_1._8_4_;
      uVar11 = auStack_1._12_4_;
    }
    auStack_1._12_4_ = iVar15;
    auStack_1._8_4_ = auStack_1._0_4_;
    stack0xfffffffc = iVar6;
    auVar9 = stack0xfffffff4;
    auStack_1._4_4_ = &UNK_?;
    OVar7 = (ObscuredInt)CONCAT412(CONCAT31(SUB43(uVar11,1),(bool)uVar11),stack0xfffffff4);
    unique0x10000495 = auVar9;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
    ObscuredInt_op_Implicit_1(OVar7,(MethodInfo *)0x0);
    auStack_1._12_4_ = &UNK_?;
    stack0xfffffffc = (int32_t)(pMVar10->fields)._._.method_code;
    (*(pMVar10->fields)._._.invoke_impl)();
  }
  return;
}


/* Void GameCoinCollect() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_GameCoinCollect
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).gameCoinPickupValue.currentCryptoKey;
  iVar2 = (this->fields).gameCoinPickupValue.hiddenValue;
  iVar3 = (this->fields).gameCoinPickupValue.fakeValue;
  uVar4 = (this->fields).gameCoins.currentCryptoKey;
  uVar5 = (this->fields).gameCoins.hiddenValue;
  value.hiddenValue = uVar5;
  value.currentCryptoKey = uVar4;
  uVar6 = (this->fields).gameCoins.fakeValue;
  uVar7 = (this->fields).gameCoins.inited;
  uVar8 = *(undefined3 *)&(this->fields).gameCoins.field_0xd;
  uVar9 = CONCAT31(uVar8,uVar7);
  iVar10 = (this->fields).gameCoins.fakeValue;
  uVar11 = *(undefined4 *)&(this->fields).gameCoins.inited;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    iVar10 = uVar6;
    uVar11 = uVar9;
  }
  value.fakeValue = iVar10;
  value._12_4_ = uVar11;
  iVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  value_00.hiddenValue = iVar2;
  value_00.currentCryptoKey = iVar1;
  value_00.fakeValue = iVar3;
  value_00.inited = (this->fields).gameCoinPickupValue.inited;
  value_00._13_3_ = *(undefined3 *)&(this->fields).gameCoinPickupValue.field_0xd;
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value_00,(MethodInfo *)0x0);
  pOVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit
                      ((ObscuredInt *)&stack0xffffffdc,
                       (this->fields).currentBoostMultiplier * iVar1 + iVar10,(MethodInfo *)0x0);
  pMVar13 = (this->fields).OnGameCoinAmountChange;
  iVar1 = pOVar12->currentCryptoKey;
  iVar2 = pOVar12->hiddenValue;
  iVar3 = pOVar12->fakeValue;
  uVar11 = *(undefined4 *)&pOVar12->inited;
  (this->fields).gameCoins.currentCryptoKey = iVar1;
  (this->fields).gameCoins.hiddenValue = iVar2;
  (this->fields).gameCoins.fakeValue = iVar3;
  *(undefined4 *)&(this->fields).gameCoins.inited = uVar11;
  if (pMVar13 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
    pMVar13 = (this->fields).OnGameCoinAmountChange;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    value_01._12_4_ = uVar11;
    value_01.currentCryptoKey = iVar1;
    value_01.hiddenValue = iVar2;
    value_01.fakeValue = iVar3;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
    ObscuredInt_op_Implicit_1(value_01,(MethodInfo *)0x0);
    (*(pMVar13->fields)._._.invoke_impl)();
  }
  return;
}


/* Int32 GetBoostedGameCoinCount(Int32) */

int32_t Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_GetBoostedGameCoinCount
                  (MVGameCoinManager *this,int32_t defaultAmount,MethodInfo *method)

{
  return (this->fields).currentBoostMultiplier * defaultAmount;
}


/* Void HandleActivationChange(Boolean) */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_HandleActivationChange
               (MVGameCoinManager *this,bool active,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar2 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar2 != (MVLocalPlayer *)0x0) &&
       (this_01 = (pMVar2->fields).boostController, this_01 != (BoostController *)0x0)) {
      BoostController::BoostController_AllowBoost
                (this_01,BoostType__Enum_GameCoinsIntMultiplier,active,(MethodInfo *)0x0);
      uStack_3._0_1_ = (this->fields).isActive.currentCryptoKey;
      uStack_3._1_3_ = *(undefined3 *)&(this->fields).isActive.field_0x1;
      uStack_3._4_4_ = (this->fields).isActive.hiddenValue;
      uVar4 = (this->fields).isActive.fakeValue;
      uVar5 = (this->fields).isActive.fakeValueChanged;
      uVar6 = (this->fields).isActive.inited;
      uVar7 = (this->fields).isActive.field_0xb;
      OVar8._11_1_ = uVar7;
      OVar8.inited = uVar6;
      OVar8.fakeValueChanged = uVar5;
      OVar8.fakeValue = uVar4;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
          cctor_finished_or_no_cctor == 0) {
        uStack_3 = CONCAT44(uStack_3._4_4_,
                            TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        func_?();
      }
      OVar8.currentCryptoKey = (char)uStack_3;
      OVar8._1_3_ = (int3)((ulonglong)uStack_3 >> 8);
      OVar8.hiddenValue = (int)((ulonglong)uStack_3 >> 0x20);
      bVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
               ObscuredBool_op_Implicit_1(OVar8,(MethodInfo *)0x0);
      if (active != bVar9) {
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                  ObscuredBool_op_Implicit
                            ((ObscuredBool *)&stack0xffffffe8,active,(MethodInfo *)0x0);
        pMVar11 = (this->fields).OnActivationChange;
        uVar12 = *(undefined3 *)&pOVar10->field_0x1;
        iVar13 = pOVar10->hiddenValue;
        bVar9 = pOVar10->fakeValue;
        bVar14 = pOVar10->fakeValueChanged;
        bVar15 = pOVar10->inited;
        uVar16 = pOVar10->field_0xb;
        OVar8 = *pOVar10;
        (this->fields).isActive.currentCryptoKey = pOVar10->currentCryptoKey;
        *(undefined3 *)&(this->fields).isActive.field_0x1 = uVar12;
        (this->fields).isActive.hiddenValue = iVar13;
        (this->fields).isActive.fakeValue = bVar9;
        (this->fields).isActive.fakeValueChanged = bVar14;
        (this->fields).isActive.inited = bVar15;
        (this->fields).isActive.field_0xb = uVar16;
        if (pMVar11 != (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
          pMVar11 = (this->fields).OnActivationChange;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_op_Implicit_1(OVar8,(MethodInfo *)0x0);
          (*(pMVar11->fields)._._.invoke_impl)();
        }
      }
      return;
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_Initialize
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__MVGameCoinManager__OnGameCoinBoostChanged__);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
    if ((pMVar3 != (MVLocalPlayer *)0x0) &&
       (pSVar4 = (pMVar3->fields)._._SubscriptionRules_k__BackingField,
       pSVar4 != (SubscriptionRulesWrapper *)0x0)) {
      bVar5 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
               SubscriptionRulesWrapper_HasBenefit
                         (pSVar4,SubscriptionBenefit__Enum_GameCoinBoost,(MethodInfo *)0x0);
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                ObscuredBool_op_Implicit((ObscuredBool *)&stack0xffffffec,bVar5,(MethodInfo *)0x0);
      uVar7 = *(undefined3 *)&pOVar6->field_0x1;
      iVar8 = pOVar6->hiddenValue;
      bVar5 = pOVar6->fakeValue;
      bVar9 = pOVar6->fakeValueChanged;
      bVar10 = pOVar6->inited;
      uVar11 = pOVar6->field_0xb;
      value_00 = *pOVar6;
      (this->fields).boostEnabled.currentCryptoKey = pOVar6->currentCryptoKey;
      *(undefined3 *)&(this->fields).boostEnabled.field_0x1 = uVar7;
      (this->fields).boostEnabled.hiddenValue = iVar8;
      (this->fields).boostEnabled.fakeValue = bVar5;
      (this->fields).boostEnabled.fakeValueChanged = bVar9;
      (this->fields).boostEnabled.inited = bVar10;
      (this->fields).boostEnabled.field_0xb = uVar11;
      bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
               ObscuredBool_op_Implicit_1(value_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                ObscuredBool_op_Implicit((ObscuredBool *)&stack0xffffffec,bVar5,(MethodInfo *)0x0);
      uVar7 = *(undefined3 *)&pOVar6->field_0x1;
      iVar8 = pOVar6->hiddenValue;
      bVar9 = pOVar6->fakeValue;
      bVar10 = pOVar6->fakeValueChanged;
      bVar12 = pOVar6->inited;
      uVar11 = pOVar6->field_0xb;
      (this->fields).boostEnabled.currentCryptoKey = pOVar6->currentCryptoKey;
      *(undefined3 *)&(this->fields).boostEnabled.field_0x1 = uVar7;
      (this->fields).boostEnabled.hiddenValue = iVar8;
      (this->fields).boostEnabled.fakeValue = bVar9;
      (this->fields).boostEnabled.fakeValueChanged = bVar10;
      (this->fields).boostEnabled.inited = bVar12;
      (this->fields).boostEnabled.field_0xb = uVar11;
      AVar13 = (ACTkByte4)(this->fields).interval.currentCryptoKey;
      AVar14 = (this->fields).interval.hiddenValue;
      pBVar15 = (this->fields).interval.hiddenValueOld;
      fVar16 = (this->fields).interval.fakeValue;
      if (bVar5 == 0) {
        uVar17 = *(undefined4 *)&(this->fields).interval.inited;
      }
      else {
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        value.hiddenValue = AVar14;
        value.currentCryptoKey._0_1_ = AVar13.b1;
        value.currentCryptoKey._1_1_ = AVar13.b2;
        value.currentCryptoKey._2_1_ = AVar13.b3;
        value.currentCryptoKey._3_1_ = AVar13.b4;
        value.hiddenValueOld = pBVar15;
        value.fakeValue = fVar16;
        value.inited = (this->fields).interval.inited;
        value._17_3_ = *(undefined3 *)&(this->fields).interval.field_0x11;
        pBVar18 = (Boost *)Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                           ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 == (MVNetworkGame *)0x0) ||
           (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0))
        goto code_?;
        pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
        if ((pMVar3 == (MVLocalPlayer *)0x0) ||
           (pSVar4 = (pMVar3->fields)._._SubscriptionRules_k__BackingField,
           pSVar4 == (SubscriptionRulesWrapper *)0x0)) goto code_?;
        this_00 = (GameCoinBooster *)
                  MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                  SubscriptionRulesWrapper_GetRule
                            (pSVar4,SubscriptionBenefit__Enum_GameCoinBoost,
                             MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::GameCoinBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                            );
        if (this_00 == (GameCoinBooster *)0x0) goto code_?;
        iVar8 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::
                 GameCoinBooster::GameCoinBooster_GetBoostedGameCoins(this_00,1,(MethodInfo *)0x0);
        pOVar19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                  ::ObscuredFloat_op_Implicit
                            ((ObscuredFloat *)&stack0xffffffe4,(float)pBVar18 / (float)iVar8,
                             (MethodInfo *)0x0);
        AVar13 = (ACTkByte4)pOVar19->currentCryptoKey;
        AVar14 = pOVar19->hiddenValue;
        pBVar15 = pOVar19->hiddenValueOld;
        fVar16 = pOVar19->fakeValue;
        uVar17 = *(undefined4 *)&pOVar19->inited;
      }
      (this->fields).boostedInterval.currentCryptoKey = (int32_t)AVar13;
      (this->fields).boostedInterval.hiddenValue = AVar14;
      (this->fields).boostedInterval.hiddenValueOld = pBVar15;
      (this->fields).boostedInterval.fakeValue = fVar16;
      *(undefined4 *)&(this->fields).boostedInterval.inited = uVar17;
      func_?();
      if ((this->fields).BoostStateChanged != (Action_1_Boolean_ *)0x0) {
        (*(((this->fields).BoostStateChanged)->fields)._._.invoke_impl)();
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) {
        pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
        if (pMVar3 != (MVLocalPlayer *)0x0) {
          pBVar20 = (pMVar3->fields).boostController;
          this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_01,(Object *)this,MethodInfo__MVGameCoinManager__OnGameCoinBoostChanged__,
                     (MethodInfo *)0x0);
          if (pBVar20 != (BoostController *)0x0) {
            BoostController::BoostController_SubscribeToBoostChanged
                      (pBVar20,BoostType__Enum_GameCoinsIntMultiplier,(Action *)this_01,
                       (MethodInfo *)0x0);
            (this->fields).currentBoostMultiplier = 1;
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar1 != (MVNetworkGame *)0x0) &&
               (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) {
              pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar2,(MethodInfo *)0x0);
              if ((pMVar3 != (MVLocalPlayer *)0x0) &&
                 (pBVar20 = (pMVar3->fields).boostController, pBVar20 != (BoostController *)0x0)) {
                bVar5 = BoostController::BoostController_TryGetActiveBoost
                                   (pBVar20,BoostType__Enum_GameCoinsIntMultiplier,
                                    (Boost **)&stack0xfffffff8,(MethodInfo *)0x0);
                if (bVar5 != 0) {
                  (this->fields).currentBoostMultiplier = 2;
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void LateInitialize() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_LateInitialize
               (MVGameCoinManager *this,MethodInfo *method)

{
  object = _bStack00000024;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__MVGameCoinManager__LateInitialize__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields).playerContainer;
    if (pMVar2 != (MVPlayerContainer *)0x0) {
      source = (pMVar2->fields).OnLocalPlayerReady;
      pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar3,(Object *)this,MethodInfo__MVGameCoinManager__LateInitialize__,
                 (MethodInfo *)0x0);
      pOVar4 = (Object__Class *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)source,(Delegate *)pNVar3,(MethodInfo *)0x0);
      iVar5 = (int32_t)in_stack_6;
      pMVar7 = (MonitorData *)in_stack_8;
      uVar9._4_4_ = (int32_t)TypeInfo__System__Action;
      uVar9._0_4_ = (MonitorData *)pOVar4;
      in_stack_6 = (Object__Class *)0x0;
      if (pOVar4 == (Object__Class *)0x0) {
        (pMVar2->fields).OnLocalPlayerReady = (Action *)0x0;
      }
      else {
        if ((Action__Class *)(pOVar4->_0).image == TypeInfo__System__Action) {
          in_stack_6 = pOVar4;
        }
        if (in_stack_6 == (Object__Class *)0x0) goto code_?;
        (pMVar2->fields).OnLocalPlayerReady = (Action *)in_stack_6;
        uVar9._4_4_ = (int32_t)TypeInfo__System__Action;
        in_stack_6 = (Object__Class *)0x0;
        if ((Action__Class *)(pOVar4->_0).image == TypeInfo__System__Action) {
          in_stack_6 = pOVar4;
        }
        if (in_stack_6 == (Object__Class *)0x0) goto code_?;
      }
      in_stack_8 = (Object__Class *)&(pMVar2->fields).OnLocalPlayerReady;
      func_?();
      method = (MethodInfo *)0x0;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Action,pMVar7,iVar5);
        func_?(&MethodInfo__MVGameCoinManager__OnGameCoinBoostChanged__);
        func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        cRam_? = '\x01';
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) {
        pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
        if ((pMVar10 != (MVLocalPlayer *)0x0) &&
           (pSVar11 = (pMVar10->fields)._._SubscriptionRules_k__BackingField,
           pSVar11 != (SubscriptionRulesWrapper *)0x0)) {
          bVar12 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                  SubscriptionRulesWrapper_HasBenefit
                            (pSVar11,SubscriptionBenefit__Enum_GameCoinBoost,(MethodInfo *)0x0);
          uStack13 = bVar12;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
              cctor_finished_or_no_cctor == 0) {
            method = (MethodInfo *)&UNK_?;
            func_?();
          }
          method = (MethodInfo *)_uStack00000018;
          pMVar14 = method;
          this = (MVGameCoinManager *)&stack0x0000000c;
          method._0_1_ = uStack13;
          bVar12 = (bool)method;
          method = pMVar14;
          pOVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool
                    ::ObscuredBool_op_Implicit((ObscuredBool *)this,bVar12,(MethodInfo *)0x0);
          uVar16._0_1_ = pOVar15->currentCryptoKey;
          uVar16._1_3_ = *(undefined3 *)&pOVar15->field_0x1;
          uVar16._4_4_ = pOVar15->hiddenValue;
          in_stack_6 = *(Object__Class **)&pOVar15->fakeValue;
          value_00 = *pOVar15;
          uStack13 = 0;
          uStack17 = 0;
          uStack18 = 0;
          uStack19 = 0;
          *(undefined8 *)&_bStack00000024[8].monitor = uVar16;
          _bStack00000024[9].monitor = (MonitorData *)in_stack_6;
          method = (MethodInfo *)&UNK_?;
          in_stack_8 = (Object__Class *)uVar16._4_4_;
          bVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                  ObscuredBool_op_Implicit_1(value_00,(MethodInfo *)0x0);
          uStack13 = bVar12;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bStack20 = uStack13;
          pOVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool
                    ::ObscuredBool_op_Implicit
                              ((ObscuredBool *)&stack0x0000000c,bStack20,(MethodInfo *)0x0);
          pMVar7 = *(MonitorData **)&pOVar15->fakeValue;
          *(undefined8 *)&object[8].monitor = *(undefined8 *)pOVar15;
          object[9].monitor = pMVar7;
          pOVar4 = (Object__Class *)object[3].monitor;
          AVar21 = (ACTkByte4)object[4].klass;
          pOVar22 = (Object__Class *)object[4].monitor;
          pOVar23 = object[5].klass;
          if (bStack20 == 0) {
            pOVar24 = (Object__Class *)object[5].monitor;
          }
          else {
            pMVar7 = object[5].monitor;
            method = (MethodInfo *)pOVar4;
            in_stack_8 = pOVar22;
            in_stack_6 = pOVar23;
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            value.hiddenValue = AVar21;
            value.currentCryptoKey = (int32_t)method;
            value.hiddenValueOld = (Byte__Array *)in_stack_8;
            value.fakeValue = (float)in_stack_6;
            value._16_4_ = pMVar7;
            _uStack00000018 =
                 (ACTkByte4)
                 Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar1 == (MVNetworkGame *)0x0) ||
               (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 == (MVPlayerContainer *)0x0))
            goto code_?;
            pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
            if ((pMVar10 == (MVLocalPlayer *)0x0) ||
               (pSVar11 = (pMVar10->fields)._._SubscriptionRules_k__BackingField,
               pSVar11 == (SubscriptionRulesWrapper *)0x0)) goto code_?;
            this_00 = (GameCoinBooster *)
                      MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                      SubscriptionRulesWrapper_GetRule
                                (pSVar11,SubscriptionBenefit__Enum_GameCoinBoost,
                                 MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::GameCoinBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                                );
            if (this_00 == (GameCoinBooster *)0x0) goto code_?;
            iVar5 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::
                     GameCoinBooster::GameCoinBooster_GetBoostedGameCoins
                               (this_00,1,(MethodInfo *)0x0);
            pOVar25 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredFloat::ObscuredFloat_op_Implicit
                                ((ObscuredFloat *)&this,(float)_uStack00000018 / (float)iVar5,
                                 (MethodInfo *)0x0);
            pOVar4 = (Object__Class *)pOVar25->currentCryptoKey;
            AVar21 = pOVar25->hiddenValue;
            pOVar22 = (Object__Class *)pOVar25->hiddenValueOld;
            pOVar23 = (Object__Class *)pOVar25->fakeValue;
            pOVar24 = *(Object__Class **)&pOVar25->inited;
          }
          object[10].klass = pOVar4;
          object[10].monitor = (MonitorData *)AVar21;
          object[0xb].klass = pOVar22;
          object[0xb].monitor = (MonitorData *)pOVar23;
          object[0xc].klass = pOVar24;
          func_?();
          if (object[0x15].klass != (Object__Class *)0x0) {
            (*(code *)((object[0x15].klass)->_0).namespaze)();
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0)) {
            pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar2,(MethodInfo *)0x0);
            if (pMVar10 != (MVLocalPlayer *)0x0) {
              pBVar26 = (pMVar10->fields).boostController;
              pNVar3 = (NavMesh_OnNavMeshPreUpdate *)func_?();
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar3,object,MethodInfo__MVGameCoinManager__OnGameCoinBoostChanged__,
                         (MethodInfo *)0x0);
              if (pBVar26 != (BoostController *)0x0) {
                BoostController::BoostController_SubscribeToBoostChanged
                          (pBVar26,BoostType__Enum_GameCoinsIntMultiplier,(Action *)pNVar3,
                           (MethodInfo *)0x0);
                uStack13 = 0;
                uStack17 = 0;
                uStack18 = 0;
                uStack19 = 0;
                object[8].klass = (Object__Class *)0x1;
                pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar1 != (MVNetworkGame *)0x0) &&
                   (pMVar2 = (pMVar1->fields).playerContainer, pMVar2 != (MVPlayerContainer *)0x0))
                {
                  pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                     (pMVar2,(MethodInfo *)0x0);
                  if ((pMVar10 != (MVLocalPlayer *)0x0) &&
                     (pBVar26 = (pMVar10->fields).boostController, pBVar26 != (BoostController *)0x0))
                  {
                    bVar12 = BoostController::BoostController_TryGetActiveBoost
                                      (pBVar26,BoostType__Enum_GameCoinsIntMultiplier,
                                       (Boost **)&stack0x00000018,(MethodInfo *)0x0);
                    if (bVar12 != 0) {
                      object[8].klass = (Object__Class *)0x2;
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
code_?:
      func_?();
      pcVar27 = (code *)swi(3);
      (*pcVar27)();
      return;
    }
  }
  uVar9 = func_?();
code_?:
  uVar28 = uVar9;
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void OnGameBoostChanged(Boolean) */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged
               (MVGameCoinManager *this,bool boostEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&
                    MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::GameCoinBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
           ObscuredBool_op_Implicit((ObscuredBool *)(auStack_2 + 8),boostEnabled,(MethodInfo *)0x0)
  ;
  uVar3 = *(undefined3 *)&pOVar1->field_0x1;
  iVar4 = pOVar1->hiddenValue;
  bVar5 = pOVar1->fakeValue;
  bVar6 = pOVar1->fakeValueChanged;
  bVar7 = pOVar1->inited;
  uVar8 = pOVar1->field_0xb;
  (this->fields).boostEnabled.currentCryptoKey = pOVar1->currentCryptoKey;
  *(undefined3 *)&(this->fields).boostEnabled.field_0x1 = uVar3;
  (this->fields).boostEnabled.hiddenValue = iVar4;
  (this->fields).boostEnabled.fakeValue = bVar5;
  (this->fields).boostEnabled.fakeValueChanged = bVar6;
  (this->fields).boostEnabled.inited = bVar7;
  (this->fields).boostEnabled.field_0xb = uVar8;
  AVar9 = (ACTkByte4)(this->fields).interval.currentCryptoKey;
  AVar10 = (this->fields).interval.hiddenValue;
  pBVar11 = (this->fields).interval.hiddenValueOld;
  puVar12 = (undefined *)(this->fields).interval.fakeValue;
  if (boostEnabled == 0) {
    uVar13 = *(undefined4 *)&(this->fields).interval.inited;
code_?:
    (this->fields).boostedInterval.currentCryptoKey = (int32_t)AVar9;
    (this->fields).boostedInterval.hiddenValue = AVar10;
    (this->fields).boostedInterval.hiddenValueOld = pBVar11;
    (this->fields).boostedInterval.fakeValue = (float)puVar12;
    *(undefined4 *)&(this->fields).boostedInterval.inited = uVar13;
    func_?(&(this->fields).boostedInterval.hiddenValueOld,0);
    if ((this->fields).BoostStateChanged != (Action_1_Boolean_ *)0x0) {
      pAVar14 = (this->fields).BoostStateChanged;
      (*(pAVar14->fields)._._.invoke_impl)
                ((pAVar14->fields)._._.method_code,_boostEnabled,(pAVar14->fields)._._.method);
    }
    return;
  }
  auStack_2._4_4_ = AVar9;
  auStack_2._8_4_ = AVar10;
  pBStack_15 = pBVar11;
  puStack_16 = puVar12;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValue.b1 = auStack_2[8];
  value.hiddenValue.b2 = auStack_2[9];
  value.hiddenValue.b3 = auStack_2[10];
  value.hiddenValue.b4 = auStack_2[0xb];
  value.currentCryptoKey = auStack_2._4_4_;
  value.hiddenValueOld = pBStack_15;
  value.fakeValue = (float)puStack_16;
  value.inited = (this->fields).interval.inited;
  value._17_3_ = *(undefined3 *)&(this->fields).interval.field_0x11;
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  pMVar17 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar17 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar17->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar18 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar18 != (MVLocalPlayer *)0x0) &&
       (this_01 = (pMVar18->fields)._._SubscriptionRules_k__BackingField,
       this_01 != (SubscriptionRulesWrapper *)0x0)) {
      this_02 = (GameCoinBooster *)
                MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_GetRule
                          (this_01,SubscriptionBenefit__Enum_GameCoinBoost,
                           MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::GameCoinBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                          );
      if (this_02 != (GameCoinBooster *)0x0) {
        iVar4 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::
                 GameCoinBooster::GameCoinBooster_GetBoostedGameCoins(this_02,1,(MethodInfo *)0x0);
        pOVar19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                  ::ObscuredFloat_op_Implicit
                            ((ObscuredFloat *)auStack_2,4.4912647e-29 / (float)iVar4,
                             (MethodInfo *)0x0);
        AVar9 = (ACTkByte4)pOVar19->currentCryptoKey;
        AVar10 = pOVar19->hiddenValue;
        pBVar11 = pOVar19->hiddenValueOld;
        puVar12 = (undefined *)pOVar19->fakeValue;
        uVar13 = *(undefined4 *)&pOVar19->inited;
        goto code_?;
      }
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnGameCoinBoostChanged() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_OnGameCoinBoostChanged
               (MVGameCoinManager *this,MethodInfo *method)

{
  (this->fields).currentBoostMultiplier = 1;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar2 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar2 != (MVLocalPlayer *)0x0) &&
       (this_01 = (pMVar2->fields).boostController, this_01 != (BoostController *)0x0)) {
      bVar3 = BoostController::BoostController_TryGetActiveBoost
                        (this_01,BoostType__Enum_GameCoinsIntMultiplier,(Boost **)&stack0xfffffff8,
                         (MethodInfo *)0x0);
      if (bVar3 != 0) {
        (this->fields).currentBoostMultiplier = 2;
      }
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ReportPickupChangeInEditor() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_ReportPickupChangeInEditor
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                       (pMVar1,WorldObjectType__Enum_GameCoin,(MethodInfo *)0x0);
    if (pLVar2 != (List_1_MVWorldObjectClient_ *)0x0) {
      iVar3 = (pLVar2->fields)._size;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                           (pMVar1,WorldObjectType__Enum_GameCoinChest,(MethodInfo *)0x0);
        if (pLVar2 != (List_1_MVWorldObjectClient_ *)0x0) {
          iVar4 = (pLVar2->fields)._size;
          iVar5 = (this->fields).totalPurchaseAmount.currentCryptoKey;
          iVar6 = (this->fields).totalPurchaseAmount.hiddenValue;
          iVar7 = (this->fields).totalPurchaseAmount.fakeValue;
          puVar8 = *(undefined **)&(this->fields).totalPurchaseAmount.inited;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
              cctor_finished_or_no_cctor == 0) {
            puVar8 = &UNK_?;
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          }
          value.hiddenValue = iVar6;
          value.currentCryptoKey = iVar5;
          value.fakeValue = iVar7;
          value._12_4_ = puVar8;
          iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                  ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
          if (((iVar5 < 1) && (iVar3 < 1)) && (iVar4 < 1)) {
            MVGameCoinManager_HandleActivationChange(this,0,(MethodInfo *)0x0);
            return;
          }
          MVGameCoinManager_HandleActivationChange(this,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ReportPurchaseAmountInEditor(Int32) */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_ReportPurchaseAmountInEditor
               (MVGameCoinManager *this,int32_t amount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  OStack_1.currentCryptoKey = (this->fields).totalPurchaseAmount.currentCryptoKey;
  OStack_1.hiddenValue = (this->fields).totalPurchaseAmount.hiddenValue;
  OStack_1.fakeValue = (this->fields).totalPurchaseAmount.fakeValue;
  OStack_1.inited = (this->fields).totalPurchaseAmount.inited;
  OStack_1._13_3_ = *(undefined3 *)&(this->fields).totalPurchaseAmount.field_0xd;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.hiddenValue = OStack_1.hiddenValue;
  value.currentCryptoKey = OStack_1.currentCryptoKey;
  value.fakeValue = OStack_1.fakeValue;
  value.inited = OStack_1.inited;
  value._13_3_ = OStack_1._13_3_;
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_1,iVar2 + amount,(MethodInfo *)0x0);
  iVar2 = pOVar3->hiddenValue;
  iVar4 = pOVar3->fakeValue;
  bVar5 = pOVar3->inited;
  uVar6 = *(undefined3 *)&pOVar3->field_0xd;
  (this->fields).totalPurchaseAmount.currentCryptoKey = pOVar3->currentCryptoKey;
  (this->fields).totalPurchaseAmount.hiddenValue = iVar2;
  (this->fields).totalPurchaseAmount.fakeValue = iVar4;
  (this->fields).totalPurchaseAmount.inited = bVar5;
  *(undefined3 *)&(this->fields).totalPurchaseAmount.field_0xd = uVar6;
  MVGameCoinManager_Evaluate(this,(MethodInfo *)0x0);
  return;
}


/* Void Reset(MVNetworkGame) */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_Reset
               (MVGameCoinManager *this,MVNetworkGame *game,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,fVar1,(MethodInfo *)0x0);
  AVar3 = pOVar2->hiddenValue;
  pBVar4 = pOVar2->hiddenValueOld;
  fVar1 = pOVar2->fakeValue;
  bVar5 = pOVar2->inited;
  uVar6 = *(undefined3 *)&pOVar2->field_0x11;
  (this->fields).startTime.currentCryptoKey = pOVar2->currentCryptoKey;
  (this->fields).startTime.hiddenValue = AVar3;
  (this->fields).startTime.hiddenValueOld = pBVar4;
  (this->fields).startTime.fakeValue = fVar1;
  (this->fields).startTime.inited = bVar5;
  *(undefined3 *)&(this->fields).startTime.field_0x11 = uVar6;
  func_?(&(this->fields).startTime.hiddenValueOld,0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?();
  }
  pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,0,(MethodInfo *)0x0);
  pMVar8 = (this->fields).OnGameCoinAmountChange;
  AVar3 = (ACTkByte4)pOVar7->currentCryptoKey;
  pBVar4 = (Byte__Array *)pOVar7->hiddenValue;
  puVar9 = (undefined *)pOVar7->fakeValue;
  pOVar10 = *(ObscuredInt__Class **)&pOVar7->inited;
  (this->fields).gameCoins.currentCryptoKey = (int32_t)AVar3;
  (this->fields).gameCoins.hiddenValue = (int32_t)pBVar4;
  (this->fields).gameCoins.fakeValue = (int32_t)puVar9;
  *(ObscuredInt__Class **)&(this->fields).gameCoins.inited = pOVar10;
  if (pMVar8 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
    pMVar8 = (this->fields).OnGameCoinAmountChange;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      puVar9 = &UNK_?;
      pOVar10 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
      func_?();
    }
    value.hiddenValue = (int32_t)pBVar4;
    value.currentCryptoKey._0_1_ = AVar3.b1;
    value.currentCryptoKey._1_1_ = AVar3.b2;
    value.currentCryptoKey._2_1_ = AVar3.b3;
    value.currentCryptoKey._3_1_ = AVar3.b4;
    value.fakeValue = (int32_t)puVar9;
    value._12_4_ = pOVar10;
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
    ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
    (*(pMVar8->fields)._._.invoke_impl)();
  }
  if ((this->fields).OnActivationChange != (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
    uVar11._0_1_ = (this->fields).isActive.currentCryptoKey;
    uVar11._1_3_ = *(undefined3 *)&(this->fields).isActive.field_0x1;
    uVar11._4_4_ = (this->fields).isActive.hiddenValue;
    pMVar12 = (this->fields).OnActivationChange;
    uVar13 = (this->fields).isActive.fakeValue;
    uVar14 = (this->fields).isActive.fakeValueChanged;
    uVar15 = (this->fields).isActive.inited;
    uVar16 = (this->fields).isActive.field_0xb;
    value_00._11_1_ = uVar16;
    value_00.inited = uVar15;
    value_00.fakeValueChanged = uVar14;
    value_00.fakeValue = uVar13;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
        == 0) {
      puVar9 = &UNK_?;
      pOVar17 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
      func_?();
      uVar11 = CONCAT44(pOVar17,puVar9);
    }
    value_00.currentCryptoKey = (char)uVar11;
    value_00._1_3_ = (int3)((ulonglong)uVar11 >> 8);
    value_00.hiddenValue = (int)((ulonglong)uVar11 >> 0x20);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
    ObscuredBool_op_Implicit_1(value_00,(MethodInfo *)0x0);
    (*(pMVar12->fields)._._.invoke_impl)();
  }
  return;
}


/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_Update
               (MVGameCoinManager *this,MVNetworkGame *game,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  uVar1._0_1_ = (this->fields).isActive.currentCryptoKey;
  uVar1._1_3_ = *(undefined3 *)&(this->fields).isActive.field_0x1;
  uVar1._4_4_ = (this->fields).isActive.hiddenValue;
  uVar2 = (this->fields).isActive.fakeValue;
  uVar3 = (this->fields).isActive.fakeValueChanged;
  uVar4 = (this->fields).isActive.inited;
  uVar5 = (this->fields).isActive.field_0xb;
  value_01._11_1_ = uVar5;
  value_01.inited = uVar4;
  value_01.fakeValueChanged = uVar3;
  value_01.fakeValue = uVar2;
  fVar6 = (float)uVar1;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    uVar1 = CONCAT44(uVar1._4_4_,fVar6);
  }
  value_01.currentCryptoKey = (char)uVar1;
  value_01._1_3_ = (int3)((ulonglong)uVar1 >> 8);
  value_01.hiddenValue = (int)((ulonglong)uVar1 >> 0x20);
  bVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
           ObscuredBool_op_Implicit_1(value_01,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    if (game == (MVNetworkGame *)0x0) {
code_?:
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar7 = MVGameControllerBase::MVGameControllerBase_get_IsPlaying((MethodInfo *)0x0);
    if (bVar7 != 0) {
      pMVar9 = (game->fields)._NetworkGameStateListener_k__BackingField;
      if (pMVar9 == (MVNetworkGameStateListener *)0x0) goto code_?;
      if ((pMVar9->fields).currentGameState == 1) {
        UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        AVar10 = (ACTkByte4)(this->fields).startTime.currentCryptoKey;
        AVar11 = (this->fields).startTime.hiddenValue;
        pOVar12 = (ObscuredFloat__Class *)(this->fields).startTime.hiddenValueOld;
        fVar6 = (this->fields).startTime.fakeValue;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
            cctor_finished_or_no_cctor == 0) {
          AVar11 = (ACTkByte4)&UNK_?;
          pOVar12 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
          func_?();
        }
        value_02.hiddenValue = AVar11;
        value_02.currentCryptoKey._0_1_ = AVar10.b1;
        value_02.currentCryptoKey._1_1_ = AVar10.b2;
        value_02.currentCryptoKey._2_1_ = AVar10.b3;
        value_02.currentCryptoKey._3_1_ = AVar10.b4;
        value_02.hiddenValueOld = (Byte__Array *)pOVar12;
        value_02.fakeValue = fVar6;
        value_02.inited = (this->fields).startTime.inited;
        value_02._17_3_ = *(undefined3 *)&(this->fields).startTime.field_0x11;
        Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
        ObscuredFloat_op_Implicit_1(value_02,(MethodInfo *)0x0);
        uVar13 = (this->fields).boostedInterval.fakeValue;
        fVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_op_Implicit_1((this->fields).boostedInterval,(MethodInfo *)0x0);
        if ((float)uVar13 <= fVar6) {
          return;
        }
        AVar10 = (ACTkByte4)(this->fields).gameCoins.currentCryptoKey;
        pBVar14 = (Byte__Array *)(this->fields).gameCoins.hiddenValue;
        fVar6 = (float)(this->fields).gameCoins.fakeValue;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        value.hiddenValue = (int32_t)pBVar14;
        value.currentCryptoKey._0_1_ = AVar10.b1;
        value.currentCryptoKey._1_1_ = AVar10.b2;
        value.currentCryptoKey._2_1_ = AVar10.b3;
        value.currentCryptoKey._3_1_ = AVar10.b4;
        value.fakeValue = (int32_t)fVar6;
        value.inited = (this->fields).gameCoins.inited;
        value._13_3_ = *(undefined3 *)&(this->fields).gameCoins.field_0xd;
        iVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                 ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
        iVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                 ObscuredInt_op_Implicit_1((this->fields).intervalAmount,(MethodInfo *)0x0);
        pOVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                  ObscuredInt_op_Implicit
                            ((ObscuredInt *)&stack0xffffffec,
                             (this->fields).currentBoostMultiplier * iVar16 + iVar15,
                             (MethodInfo *)0x0);
        pMVar18 = (this->fields).OnGameCoinAmountChange;
        AVar10 = (ACTkByte4)pOVar17->currentCryptoKey;
        pBVar14 = (Byte__Array *)pOVar17->hiddenValue;
        fVar6 = (float)pOVar17->fakeValue;
        uVar19 = *(undefined4 *)&pOVar17->inited;
        (this->fields).gameCoins.currentCryptoKey = (int32_t)AVar10;
        (this->fields).gameCoins.hiddenValue = (int32_t)pBVar14;
        (this->fields).gameCoins.fakeValue = (int32_t)fVar6;
        *(undefined4 *)&(this->fields).gameCoins.inited = uVar19;
        if (pMVar18 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
          pMVar18 = (this->fields).OnGameCoinAmountChange;
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          value_00.hiddenValue = (int32_t)pBVar14;
          value_00.currentCryptoKey._0_1_ = AVar10.b1;
          value_00.currentCryptoKey._1_1_ = AVar10.b2;
          value_00.currentCryptoKey._2_1_ = AVar10.b3;
          value_00.currentCryptoKey._3_1_ = AVar10.b4;
          value_00.fakeValue = (int32_t)fVar6;
          value_00._12_4_ = uVar19;
          Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value_00,(MethodInfo *)0x0);
          (*(pMVar18->fields)._._.invoke_impl)();
        }
      }
    }
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,fVar6,(MethodInfo *)0x0);
    AVar10 = pOVar20->hiddenValue;
    pBVar14 = pOVar20->hiddenValueOld;
    fVar6 = pOVar20->fakeValue;
    bVar7 = pOVar20->inited;
    uVar21 = *(undefined3 *)&pOVar20->field_0x11;
    (this->fields).startTime.currentCryptoKey = pOVar20->currentCryptoKey;
    (this->fields).startTime.hiddenValue = AVar10;
    (this->fields).startTime.hiddenValueOld = pBVar14;
    (this->fields).startTime.fakeValue = fVar6;
    (this->fields).startTime.inited = bVar7;
    *(undefined3 *)&(this->fields).startTime.field_0x11 = uVar21;
    func_?();
  }
  return;
}


/* MVGameCoinManager() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager__ctor
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__MVGameCoinManager__LateInitialize__);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,0.0,(MethodInfo *)0x0);
  AVar2 = pOVar1->hiddenValue;
  pBVar3 = pOVar1->hiddenValueOld;
  fVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0x11;
  (this->fields).startTime.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).startTime.hiddenValue = AVar2;
  (this->fields).startTime.hiddenValueOld = pBVar3;
  (this->fields).startTime.fakeValue = fVar4;
  (this->fields).startTime.inited = bVar5;
  *(undefined3 *)&(this->fields).startTime.field_0x11 = uVar6;
  func_?(&(this->fields).startTime.hiddenValueOld,0);
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,2.0,(MethodInfo *)0x0);
  AVar2 = pOVar1->hiddenValue;
  pBVar3 = pOVar1->hiddenValueOld;
  fVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0x11;
  (this->fields).interval.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).interval.hiddenValue = AVar2;
  (this->fields).interval.hiddenValueOld = pBVar3;
  (this->fields).interval.fakeValue = fVar4;
  (this->fields).interval.inited = bVar5;
  *(undefined3 *)&(this->fields).interval.field_0x11 = uVar6;
  func_?();
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?();
  }
  pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,1,(MethodInfo *)0x0);
  iVar8 = pOVar7->hiddenValue;
  iVar9 = pOVar7->fakeValue;
  bVar5 = pOVar7->inited;
  uVar6 = *(undefined3 *)&pOVar7->field_0xd;
  (this->fields).intervalAmount.currentCryptoKey = pOVar7->currentCryptoKey;
  (this->fields).intervalAmount.hiddenValue = iVar8;
  (this->fields).intervalAmount.fakeValue = iVar9;
  (this->fields).intervalAmount.inited = bVar5;
  *(undefined3 *)&(this->fields).intervalAmount.field_0xd = uVar6;
  (this->fields).currentBoostMultiplier = 1;
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,2.0,(MethodInfo *)0x0);
  AVar2 = pOVar1->hiddenValue;
  pBVar3 = pOVar1->hiddenValueOld;
  fVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0x11;
  (this->fields).boostedInterval.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).boostedInterval.hiddenValue = AVar2;
  (this->fields).boostedInterval.hiddenValueOld = pBVar3;
  (this->fields).boostedInterval.fakeValue = fVar4;
  (this->fields).boostedInterval.inited = bVar5;
  *(undefined3 *)&(this->fields).boostedInterval.field_0x11 = uVar6;
  func_?();
  pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,0x19,(MethodInfo *)0x0);
  iVar8 = pOVar7->hiddenValue;
  iVar9 = pOVar7->fakeValue;
  bVar5 = pOVar7->inited;
  uVar6 = *(undefined3 *)&pOVar7->field_0xd;
  (this->fields).gameCoinPickupValue.currentCryptoKey = pOVar7->currentCryptoKey;
  (this->fields).gameCoinPickupValue.hiddenValue = iVar8;
  (this->fields).gameCoinPickupValue.fakeValue = iVar9;
  (this->fields).gameCoinPickupValue.inited = bVar5;
  *(undefined3 *)&(this->fields).gameCoinPickupValue.field_0xd = uVar6;
  pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,0,(MethodInfo *)0x0);
  iVar8 = pOVar7->hiddenValue;
  iVar9 = pOVar7->fakeValue;
  bVar5 = pOVar7->inited;
  uVar6 = *(undefined3 *)&pOVar7->field_0xd;
  (this->fields).gameCoins.currentCryptoKey = pOVar7->currentCryptoKey;
  (this->fields).gameCoins.hiddenValue = iVar8;
  (this->fields).gameCoins.fakeValue = iVar9;
  (this->fields).gameCoins.inited = bVar5;
  *(undefined3 *)&(this->fields).gameCoins.field_0xd = uVar6;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  pOVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_op_Implicit((ObscuredBool *)&stack0xfffffff0,0,(MethodInfo *)0x0);
  uVar6 = *(undefined3 *)&pOVar10->field_0x1;
  iVar8 = pOVar10->hiddenValue;
  bVar5 = pOVar10->fakeValue;
  bVar11 = pOVar10->fakeValueChanged;
  bVar12 = pOVar10->inited;
  uVar13 = pOVar10->field_0xb;
  (this->fields).isActive.currentCryptoKey = pOVar10->currentCryptoKey;
  *(undefined3 *)&(this->fields).isActive.field_0x1 = uVar6;
  (this->fields).isActive.hiddenValue = iVar8;
  (this->fields).isActive.fakeValue = bVar5;
  (this->fields).isActive.fakeValueChanged = bVar11;
  (this->fields).isActive.inited = bVar12;
  (this->fields).isActive.field_0xb = uVar13;
  pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,0,(MethodInfo *)0x0);
  iVar8 = pOVar7->hiddenValue;
  iVar9 = pOVar7->fakeValue;
  bVar5 = pOVar7->inited;
  uVar6 = *(undefined3 *)&pOVar7->field_0xd;
  (this->fields).totalPurchaseAmount.currentCryptoKey = pOVar7->currentCryptoKey;
  (this->fields).totalPurchaseAmount.hiddenValue = iVar8;
  (this->fields).totalPurchaseAmount.fakeValue = iVar9;
  (this->fields).totalPurchaseAmount.inited = bVar5;
  *(undefined3 *)&(this->fields).totalPurchaseAmount.field_0xd = uVar6;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,in_stack_14);
  pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar15 == (MVNetworkGame *)0x0) ||
     (pMVar16 = (pMVar15->fields).playerContainer, pMVar16 == (MVPlayerContainer *)0x0)) {
code_?:
    pAStack17 = (Action *)func_?();
    pAStack18 = unaff_ESI;
  }
  else {
    iVar8 = MVPlayerContainer::MVPlayerContainer_get_Count(pMVar16,(MethodInfo *)0x0);
    if (iVar8 != 0) {
      pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar15 != (MVNetworkGame *)0x0) &&
         (pMVar16 = (pMVar15->fields).playerContainer, pMVar16 != (MVPlayerContainer *)0x0)) {
        this_00 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar16,(MethodInfo *)0x0);
        if (this_00 != (MVLocalPlayer *)0x0) {
          bVar5 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_00,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            MVGameCoinManager_Initialize(this,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
code_?:
    pMVar15 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
    pMVar16 = (pMVar15->fields).playerContainer;
    if (pMVar16 == (MVPlayerContainer *)0x0) goto code_?;
    pAVar19 = (pMVar16->fields).OnLocalPlayerReady;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__MVGameCoinManager__LateInitialize__,
               (MethodInfo *)0x0);
    pAStack17 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar19,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAStack17 == (Action *)0x0) {
      pAStack18 = (Action__Class *)0x0;
      (pMVar16->fields).OnLocalPlayerReady = (Action *)0x0;
      pAStack17 = (Action *)&(pMVar16->fields).OnLocalPlayerReady;
      func_?();
      return;
    }
    pAVar19 = (Action *)0x0;
    if (pAStack17->klass == TypeInfo__System__Action) {
      pAVar19 = pAStack17;
    }
    pAStack18 = TypeInfo__System__Action;
    if (pAVar19 == (Action *)0x0) goto code_?;
    (pMVar16->fields).OnLocalPlayerReady = pAVar19;
    pAVar19 = (Action *)0x0;
    if (pAStack17->klass == TypeInfo__System__Action) {
      pAVar19 = pAStack17;
    }
    pAStack18 = TypeInfo__System__Action;
    if (pAVar19 != (Action *)0x0) {
      pAStack17 = (Action *)&(pMVar16->fields).OnLocalPlayerReady;
      pAStack18 = (Action__Class *)pAVar19;
      func_?();
      return;
    }
  }
  pAStack17 = (Action *)func_?();
  pAStack18 = extraout_ECX;
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Boolean get_Active() */

bool Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_get_Active
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    cRam_? = '\x01';
  }
  value = (this->fields).isActive;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  bVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_op_Implicit_1(value,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean get_BoostEnabled() */

bool Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_get_BoostEnabled
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    cRam_? = '\x01';
  }
  value = (this->fields).boostEnabled;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  bVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_op_Implicit_1(value,(MethodInfo *)0x0);
  return bVar1;
}


/* Int32 get_GameCoinAmount() */

int32_t Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount
                  (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  value = (this->fields).gameCoins;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  return iVar1;
}


/* Int32 get_TotalPurchaseAmount() */

int32_t Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_get_TotalPurchaseAmount
                  (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  value = (this->fields).totalPurchaseAmount;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  return iVar1;
}

