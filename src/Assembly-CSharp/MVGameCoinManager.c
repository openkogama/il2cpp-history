
/* Boolean Consume(GameCoinLogic) */

bool Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_Consume
               (MVGameCoinManager *this,GameCoinLogic *gameCoinLogic,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).gameCoins.currentCryptoKey;
  uVar1._4_4_ = (this->fields).gameCoins.hiddenValue;
  uVar2._0_4_ = (this->fields).gameCoins.fakeValue;
  uVar2._4_1_ = (this->fields).gameCoins.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).gameCoins.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  if (gameCoinLogic != (GameCoinLogic *)0x0) {
    if ((gameCoinLogic->fields).requirementType <= iVar4) {
      uVar5._0_4_ = (this->fields).gameCoins.currentCryptoKey;
      uVar5._4_4_ = (this->fields).gameCoins.hiddenValue;
      uVar6._0_4_ = (this->fields).gameCoins.fakeValue;
      uVar6._4_1_ = (this->fields).gameCoins.inited;
      uVar6._5_3_ = *(undefined3 *)&(this->fields).gameCoins.field_0xd;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      aOStack_3[0]._0_8_ = uVar5;
      aOStack_3[0]._8_8_ = uVar6;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
      value = iVar4 - (gameCoinLogic->fields).requirementType;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aOStack_3[0].currentCryptoKey = 0;
      aOStack_3[0].hiddenValue = 0;
      aOStack_3[0].fakeValue = 0;
      aOStack_3[0].inited = 0;
      aOStack_3[0]._13_3_ = 0;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      aOStack_3[0].inited = 1;
      aOStack_3[0].hiddenValue = iVar4;
      aOStack_3[0].currentCryptoKey =
           TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
      bVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
              ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
      uVar1 = aOStack_3[0]._0_8_;
      iVar8 = 0;
      if (bVar7 != 0) {
        iVar8 = value;
      }
      aOStack_3[0].fakeValue = iVar8;
      uVar2 = aOStack_3[0]._8_8_;
      (this->fields).gameCoins.currentCryptoKey = aOStack_3[0].currentCryptoKey;
      (this->fields).gameCoins.hiddenValue = aOStack_3[0].hiddenValue;
      (this->fields).gameCoins.fakeValue = iVar8;
      (this->fields).gameCoins.inited = aOStack_3[0].inited;
      *(undefined3 *)&(this->fields).gameCoins.field_0xd = aOStack_3[0]._13_3_;
      if ((this->fields).OnGameCoinAmountChange !=
          (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
        pMVar9 = (this->fields).OnGameCoinAmountChange;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          aOStack_3[0]._8_8_ = uVar2;
          FUN_?();
        }
        aOStack_3[0]._0_8_ = uVar1;
        aOStack_3[0]._8_8_ = uVar2;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
        (*(pMVar9->fields)._._.invoke_impl)
                  ((pMVar9->fields)._._.method_code,iVar4,(pMVar9->fields)._._.method);
      }
      return 1;
    }
    return 0;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  bVar7 = (*pcVar10)();
  return bVar7;
}


/* Void Evaluate() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_Evaluate
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
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
          uVar5._0_4_ = (this->fields).totalPurchaseAmount.currentCryptoKey;
          uVar5._4_4_ = (this->fields).totalPurchaseAmount.hiddenValue;
          uVar6._0_4_ = (this->fields).totalPurchaseAmount.fakeValue;
          uVar6._4_1_ = (this->fields).totalPurchaseAmount.inited;
          uVar6._5_3_ = *(undefined3 *)&(this->fields).totalPurchaseAmount.field_0xd;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          OStack_7._0_8_ = uVar5;
          OStack_7._8_8_ = uVar6;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          iVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                   ObscuredInt_InternalDecrypt(&OStack_7,(MethodInfo *)0x0);
          if (((iVar8 < 1) && (iVar3 < 1)) && (iVar4 < 1)) {
            bVar9 = 0;
          }
          else {
            bVar9 = 1;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool,bVar9,0);
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
          pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar10 != (MVGameControllerBase *)0x0) &&
              (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
             (this_00 = (pMVar11->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
            pMVar12 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                (this_00,(MethodInfo *)0x0);
            if ((pMVar12 != (MVLocalPlayer *)0x0) &&
               (this_01 = (pMVar12->fields).boostController, this_01 != (BoostController *)0x0)) {
              BoostController::BoostController_AllowBoost
                        (this_01,BoostType__Enum_GameCoinsIntMultiplier,bVar9,(MethodInfo *)0x0);
              OStack_13.currentCryptoKey = (this->fields).isActive.currentCryptoKey;
              OStack_13._1_3_ = *(undefined3 *)&(this->fields).isActive.field_0x1;
              OStack_13.hiddenValue = (this->fields).isActive.hiddenValue;
              OStack_13.fakeValue = (this->fields).isActive.fakeValue;
              OStack_13.fakeValueChanged = (this->fields).isActive.fakeValueChanged;
              OStack_13.inited = (this->fields).isActive.inited;
              OStack_13._11_1_ = (this->fields).isActive.field_0xb;
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              bVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredBool::ObscuredBool_InternalDecrypt(&OStack_13,(MethodInfo *)0x0);
              if (bVar9 != bVar14) {
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                OStack_13.currentCryptoKey = 0;
                OStack_13._1_3_ = 0;
                OStack_13.hiddenValue = 0;
                OStack_13.fakeValue = 0;
                OStack_13.fakeValueChanged = 0;
                OStack_13.inited = 0;
                OStack_13._11_1_ = 0;
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                iVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredBool::ObscuredBool_Encrypt(bVar9,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                             field_0x1c == 0) {
                  FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                }
                OStack_13.hiddenValue = iVar8;
                OStack_13._11_1_ = OStack_13._11_1_;
                OStack_13.fakeValue = 0;
                OStack_13.fakeValueChanged = 0;
                OStack_13.inited = 1;
                OStack_13.currentCryptoKey =
                     TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->
                     cryptoKey;
                bVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                         ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                                   ((MethodInfo *)0x0);
                if (bVar14 != 0) {
                  OStack_13.fakeValueChanged = 1;
                  OStack_13.fakeValue = bVar9;
                }
                uVar15 = OStack_13._8_4_;
                pMVar16 = (this->fields).OnActivationChange;
                (this->fields).isActive.currentCryptoKey = OStack_13.currentCryptoKey;
                *(undefined3 *)&(this->fields).isActive.field_0x1 = OStack_13._1_3_;
                (this->fields).isActive.hiddenValue = OStack_13.hiddenValue;
                (this->fields).isActive.fakeValue = OStack_13.fakeValue;
                (this->fields).isActive.fakeValueChanged = OStack_13.fakeValueChanged;
                (this->fields).isActive.inited = OStack_13.inited;
                (this->fields).isActive.field_0xb = OStack_13._11_1_;
                if (pMVar16 != (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
                  pMVar16 = (this->fields).OnActivationChange;
                  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                               field_0x1c == 0) {
                    FUN_?();
                  }
                  OStack_13._8_4_ = uVar15;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                               field_0x1c == 0) {
                    FUN_?();
                  }
                  bVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                           ObscuredBool::ObscuredBool_InternalDecrypt(&OStack_13,(MethodInfo *)0x0);
                  (*(pMVar16->fields)._._.invoke_impl)
                            ((pMVar16->fields)._._.method_code,bVar9,(pMVar16->fields)._._.method);
                }
              }
              return;
            }
          }
          FUN_?();
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void GameCoinChestCollect(Int32) */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_GameCoinChestCollect
               (MVGameCoinManager *this,int32_t amount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).gameCoins.currentCryptoKey;
  uVar1._4_4_ = (this->fields).gameCoins.hiddenValue;
  uVar2._0_4_ = (this->fields).gameCoins.fakeValue;
  uVar2._4_1_ = (this->fields).gameCoins.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).gameCoins.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  value = amount * (this->fields).currentBoostMultiplier + iVar4;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aOStack_3[0].currentCryptoKey = 0;
  aOStack_3[0].hiddenValue = 0;
  aOStack_3[0].fakeValue = 0;
  aOStack_3[0].inited = 0;
  aOStack_3[0]._13_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  aOStack_3[0].inited = 1;
  aOStack_3[0].hiddenValue = iVar4;
  aOStack_3[0].currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  uVar1 = aOStack_3[0]._0_8_;
  iVar6 = 0;
  if (bVar5 != 0) {
    iVar6 = value;
  }
  aOStack_3[0].fakeValue = iVar6;
  uVar2 = aOStack_3[0]._8_8_;
  (this->fields).gameCoins.currentCryptoKey = aOStack_3[0].currentCryptoKey;
  (this->fields).gameCoins.hiddenValue = aOStack_3[0].hiddenValue;
  (this->fields).gameCoins.fakeValue = iVar6;
  (this->fields).gameCoins.inited = aOStack_3[0].inited;
  *(undefined3 *)&(this->fields).gameCoins.field_0xd = aOStack_3[0]._13_3_;
  if ((this->fields).OnGameCoinAmountChange !=
      (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
    pMVar7 = (this->fields).OnGameCoinAmountChange;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      aOStack_3[0]._8_8_ = uVar2;
      FUN_?();
    }
    aOStack_3[0]._0_8_ = uVar1;
    aOStack_3[0]._8_8_ = uVar2;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
    (*(pMVar7->fields)._._.invoke_impl)
              ((pMVar7->fields)._._.method_code,iVar4,(pMVar7->fields)._._.method);
  }
  return;
}


/* Void GameCoinCollect() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_GameCoinCollect
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).gameCoinPickupValue.currentCryptoKey;
  uVar1._4_4_ = (this->fields).gameCoinPickupValue.hiddenValue;
  uVar2._0_4_ = (this->fields).gameCoinPickupValue.fakeValue;
  uVar2._4_1_ = (this->fields).gameCoinPickupValue.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).gameCoinPickupValue.field_0xd;
  uVar3._0_4_ = (this->fields).gameCoins.currentCryptoKey;
  uVar3._4_4_ = (this->fields).gameCoins.hiddenValue;
  uVar4._0_4_ = (this->fields).gameCoins.fakeValue;
  uVar4._4_1_ = (this->fields).gameCoins.inited;
  uVar4._5_3_ = *(undefined3 *)&(this->fields).gameCoins.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_5[0]._0_8_ = uVar3;
  aOStack_5[0]._8_8_ = uVar4;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_5,(MethodInfo *)0x0);
  aOStack_5[0]._0_8_ = uVar1;
  aOStack_5[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_5,(MethodInfo *)0x0);
  value = iVar7 * (this->fields).currentBoostMultiplier + iVar6;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aOStack_5[0].currentCryptoKey = 0;
  aOStack_5[0].hiddenValue = 0;
  aOStack_5[0].fakeValue = 0;
  aOStack_5[0].inited = 0;
  aOStack_5[0]._13_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  aOStack_5[0].inited = 1;
  aOStack_5[0].hiddenValue = iVar6;
  aOStack_5[0].currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  uVar1 = aOStack_5[0]._0_8_;
  iVar9 = 0;
  if (bVar8 != 0) {
    iVar9 = value;
  }
  aOStack_5[0].fakeValue = iVar9;
  uVar2 = aOStack_5[0]._8_8_;
  (this->fields).gameCoins.currentCryptoKey = aOStack_5[0].currentCryptoKey;
  (this->fields).gameCoins.hiddenValue = aOStack_5[0].hiddenValue;
  (this->fields).gameCoins.fakeValue = iVar9;
  (this->fields).gameCoins.inited = aOStack_5[0].inited;
  *(undefined3 *)&(this->fields).gameCoins.field_0xd = aOStack_5[0]._13_3_;
  if ((this->fields).OnGameCoinAmountChange !=
      (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
    pMVar10 = (this->fields).OnGameCoinAmountChange;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      aOStack_5[0]._8_8_ = uVar2;
      FUN_?();
    }
    aOStack_5[0]._0_8_ = uVar1;
    aOStack_5[0]._8_8_ = uVar2;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_InternalDecrypt(aOStack_5,(MethodInfo *)0x0);
    (*(pMVar10->fields)._._.invoke_impl)
              ((pMVar10->fields)._._.method_code,iVar6,(pMVar10->fields)._._.method);
  }
  return;
}


/* Int32 GetBoostedGameCoinCount(Int32) */

int32_t Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_GetBoostedGameCoinCount
                  (MVGameCoinManager *this,int32_t defaultAmount,MethodInfo *method)

{
  return defaultAmount * (this->fields).currentBoostMultiplier;
}


/* Void HandleActivationChange(Boolean) */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_HandleActivationChange
               (MVGameCoinManager *this,bool active,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar3 != (MVLocalPlayer *)0x0) &&
       (this_01 = (pMVar3->fields).boostController, this_01 != (BoostController *)0x0)) {
      BoostController::BoostController_AllowBoost
                (this_01,BoostType__Enum_GameCoinsIntMultiplier,active,(MethodInfo *)0x0);
      OStack_4.currentCryptoKey = (this->fields).isActive.currentCryptoKey;
      OStack_4._1_3_ = *(undefined3 *)&(this->fields).isActive.field_0x1;
      OStack_4.hiddenValue = (this->fields).isActive.hiddenValue;
      OStack_4.fakeValue = (this->fields).isActive.fakeValue;
      OStack_4.fakeValueChanged = (this->fields).isActive.fakeValueChanged;
      OStack_4.inited = (this->fields).isActive.inited;
      OStack_4._11_1_ = (this->fields).isActive.field_0xb;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
              ObscuredBool_InternalDecrypt(&OStack_4,(MethodInfo *)0x0);
      if (active != bVar5) {
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        OStack_4.currentCryptoKey = 0;
        OStack_4._1_3_ = 0;
        OStack_4.hiddenValue = 0;
        OStack_4.fakeValue = 0;
        OStack_4.fakeValueChanged = 0;
        OStack_4.inited = 0;
        OStack_4._11_1_ = 0;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                ObscuredBool_Encrypt(active,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c ==
            0) {
          FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        }
        OStack_4.hiddenValue = iVar6;
        OStack_4._11_1_ = OStack_4._11_1_;
        OStack_4.fakeValue = 0;
        OStack_4.fakeValueChanged = 0;
        OStack_4.inited = 1;
        OStack_4.currentCryptoKey =
             TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
        bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
        if (bVar5 != 0) {
          OStack_4.fakeValueChanged = 1;
          OStack_4.fakeValue = active;
        }
        uVar7 = OStack_4._8_4_;
        pMVar8 = (this->fields).OnActivationChange;
        (this->fields).isActive.currentCryptoKey = OStack_4.currentCryptoKey;
        *(undefined3 *)&(this->fields).isActive.field_0x1 = OStack_4._1_3_;
        (this->fields).isActive.hiddenValue = OStack_4.hiddenValue;
        (this->fields).isActive.fakeValue = OStack_4.fakeValue;
        (this->fields).isActive.fakeValueChanged = OStack_4.fakeValueChanged;
        (this->fields).isActive.inited = OStack_4.inited;
        (this->fields).isActive.field_0xb = OStack_4._11_1_;
        if (pMVar8 != (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
          pMVar8 = (this->fields).OnActivationChange;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          OStack_4._8_4_ = uVar7;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                  ObscuredBool_InternalDecrypt(&OStack_4,(MethodInfo *)0x0);
          (*(pMVar8->fields)._._.invoke_impl)
                    ((pMVar8->fields)._._.method_code,bVar5,(pMVar8->fields)._._.method);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_Initialize
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGameCoinManager__OnGameCoinBoostChanged__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
    pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
    if ((pMVar4 != (MVLocalPlayer *)0x0) &&
       (this_00 = (pMVar4->fields)._._SubscriptionRules_k__BackingField,
       this_00 != (SubscriptionRulesWrapper *)0x0)) {
      bVar5 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
              SubscriptionRulesWrapper_HasBenefit
                        (this_00,SubscriptionBenefit__Enum_GameCoinBoost,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      OStack_6.currentCryptoKey = 0;
      OStack_6._1_3_ = 0;
      OStack_6.hiddenValue = 0;
      OStack_6.fakeValue = 0;
      OStack_6.fakeValueChanged = 0;
      OStack_6.inited = 0;
      OStack_6._11_1_ = 0;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      iVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
              ObscuredBool_Encrypt(bVar5,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0
         ) {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      }
      OStack_6.hiddenValue = iVar7;
      OStack_6._11_1_ = OStack_6._11_1_;
      OStack_6.fakeValue = 0;
      OStack_6.fakeValueChanged = 0;
      OStack_6.inited = 1;
      OStack_6.currentCryptoKey =
           TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
      bVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
              ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
      if (bVar8 != 0) {
        OStack_6.fakeValueChanged = 1;
        OStack_6.fakeValue = bVar5;
      }
      bVar9 = cRam_? == '\0';
      (this->fields).boostEnabled.currentCryptoKey = OStack_6.currentCryptoKey;
      *(undefined3 *)&(this->fields).boostEnabled.field_0x1 = OStack_6._1_3_;
      (this->fields).boostEnabled.hiddenValue = OStack_6.hiddenValue;
      (this->fields).boostEnabled.fakeValue = OStack_6.fakeValue;
      (this->fields).boostEnabled.fakeValueChanged = OStack_6.fakeValueChanged;
      (this->fields).boostEnabled.inited = OStack_6.inited;
      (this->fields).boostEnabled.field_0xb = OStack_6._11_1_;
      if (bVar9) {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0
         ) {
        FUN_?();
      }
      bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
              ObscuredBool_InternalDecrypt(&OStack_6,(MethodInfo *)0x0);
      MVGameCoinManager_OnGameBoostChanged(this,bVar5,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
        pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0);
        if (pMVar4 != (MVLocalPlayer *)0x0) {
          pBVar10 = (pMVar4->fields).boostController;
          this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_01,(Object *)this,MethodInfo__MVGameCoinManager__OnGameCoinBoostChanged__,
                     (MethodInfo *)0x0);
          if (pBVar10 != (BoostController *)0x0) {
            BoostController::BoostController_SubscribeToBoostChanged
                      (pBVar10,BoostType__Enum_GameCoinsIntMultiplier,(Action *)this_01,
                       (MethodInfo *)0x0);
            bVar9 = cRam_? == '\0';
            apBStackX_18[0] = (Boost *)0x0;
            (this->fields).currentBoostMultiplier = 1;
            if (bVar9) {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar1 != (MVGameControllerBase *)0x0) &&
                (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
               (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
              pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (pMVar3,(MethodInfo *)0x0);
              if ((pMVar4 != (MVLocalPlayer *)0x0) &&
                 (pBVar10 = (pMVar4->fields).boostController, pBVar10 != (BoostController *)0x0)) {
                bVar5 = BoostController::BoostController_TryGetActiveBoost
                                  (pBVar10,BoostType__Enum_GameCoinsIntMultiplier,apBStackX_18,
                                   (MethodInfo *)0x0);
                if (bVar5 != 0) {
                  (this->fields).currentBoostMultiplier = 2;
                }
                return;
              }
            }
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void LateInitialize() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_LateInitialize
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGameCoinManager__LateInitialize__);
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pAVar5 = (pMVar3->fields).OnLocalPlayerReady;
  pNVar6 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar6,(Object *)this,MethodInfo__MVGameCoinManager__LateInitialize__,
             (MethodInfo *)0x0);
  pAVar5 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar5,(Delegate *)pNVar6,(MethodInfo *)0x0);
  if (pAVar5 == (Action *)0x0) {
    (pMVar3->fields).OnLocalPlayerReady = (Action *)0x0;
  }
  else {
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 == (Action *)0x0) {
      FUN_?(pAVar5,TypeInfo__System__Action);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (pMVar3->fields).OnLocalPlayerReady = pAVar7;
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 == (Action *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&(pMVar3->fields).OnLocalPlayerReady >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (ulonglong)(uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGameCoinManager__OnGameCoinBoostChanged__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
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
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0 &&
      ((pMVar12 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
       pMVar12 != (MVLocalPlayer *)0x0 &&
       (this_00 = (pMVar12->fields)._._SubscriptionRules_k__BackingField,
       this_00 != (SubscriptionRulesWrapper *)0x0)))))) {
    bVar13 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
            SubscriptionRulesWrapper_HasBenefit
                      (this_00,SubscriptionBenefit__Enum_GameCoinBoost,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    OStack_14.currentCryptoKey = 0;
    OStack_14._1_3_ = 0;
    OStack_14.hiddenValue = 0;
    OStack_14.fakeValue = 0;
    OStack_14.fakeValueChanged = 0;
    OStack_14.inited = 0;
    OStack_14._11_1_ = 0;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
             ObscuredBool_Encrypt(bVar13,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    OStack_14.hiddenValue = iVar15;
    OStack_14._11_1_ = OStack_14._11_1_;
    OStack_14.fakeValue = 0;
    OStack_14.fakeValueChanged = 0;
    OStack_14.inited = 1;
    OStack_14.currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
    bVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
             ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    if (bVar16 != 0) {
      OStack_14.fakeValueChanged = 1;
      OStack_14.fakeValue = bVar13;
    }
    bVar17 = cRam_? == '\0';
    (this->fields).boostEnabled.currentCryptoKey = OStack_14.currentCryptoKey;
    *(undefined3 *)&(this->fields).boostEnabled.field_0x1 = OStack_14._1_3_;
    (this->fields).boostEnabled.hiddenValue = OStack_14.hiddenValue;
    (this->fields).boostEnabled.fakeValue = OStack_14.fakeValue;
    (this->fields).boostEnabled.fakeValueChanged = OStack_14.fakeValueChanged;
    (this->fields).boostEnabled.inited = OStack_14.inited;
    (this->fields).boostEnabled.field_0xb = OStack_14._11_1_;
    if (bVar17) {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    bVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_InternalDecrypt(&OStack_14,(MethodInfo *)0x0);
    MVGameCoinManager_OnGameBoostChanged(this,bVar13,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
        (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
       (pMVar12 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
       pMVar12 != (MVLocalPlayer *)0x0)) {
      pBVar18 = (pMVar12->fields).boostController;
      pNVar6 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar6,(Object *)this,MethodInfo__MVGameCoinManager__OnGameCoinBoostChanged__,
                 (MethodInfo *)0x0);
      if (pBVar18 != (BoostController *)0x0) {
        BoostController::BoostController_SubscribeToBoostChanged
                  (pBVar18,BoostType__Enum_GameCoinsIntMultiplier,(Action *)pNVar6,(MethodInfo *)0x0
                  );
        bVar17 = cRam_? == '\0';
        (this->fields).currentBoostMultiplier = 1;
        if (bVar17) {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar1 != (MVGameControllerBase *)0x0) &&
            (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
           ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0 &&
            ((pMVar12 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                  (pMVar3,(MethodInfo *)0x0), pMVar12 != (MVLocalPlayer *)0x0 &&
             (pBVar18 = (pMVar12->fields).boostController, pBVar18 != (BoostController *)0x0)))))) {
          bVar13 = BoostController::BoostController_TryGetActiveBoost
                            (pBVar18,BoostType__Enum_GameCoinsIntMultiplier,
                             (Boost **)&stack0x00000018,(MethodInfo *)0x0);
          if (bVar13 != 0) {
            (this->fields).currentBoostMultiplier = 2;
          }
          return;
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGameBoostChanged(Boolean) */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged
               (MVGameCoinManager *this,bool boostEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::GameCoinBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aOStack_1[0].currentCryptoKey = 0;
  aOStack_1[0].hiddenValue.b1 = 0;
  aOStack_1[0].hiddenValue.b2 = 0;
  aOStack_1[0].hiddenValue.b3 = 0;
  aOStack_1[0].hiddenValue.b4 = 0;
  aOStack_1[0].hiddenValueOld =
       (Byte__Array *)((ulonglong)aOStack_1[0].hiddenValueOld._4_4_ << 0x20);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar2 = (ACTkByte4)
           Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
           ObscuredBool_Encrypt(boostEnabled,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  aOStack_1[0].hiddenValue = AVar2;
  aOStack_1[0].hiddenValueOld =
       (Byte__Array *)CONCAT53((int5)((ulonglong)aOStack_1[0].hiddenValueOld >> 0x18),0x10000);
  aOStack_1[0].currentCryptoKey._0_1_ =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    aOStack_1[0].hiddenValueOld._0_2_ = CONCAT11(1,boostEnabled);
  }
  pBVar4 = aOStack_1[0].hiddenValueOld;
  *(undefined8 *)&(this->fields).boostEnabled = aOStack_1[0]._0_8_;
  (this->fields).boostEnabled.fakeValue = aOStack_1[0].hiddenValueOld._0_1_;
  (this->fields).boostEnabled.fakeValueChanged = aOStack_1[0].hiddenValueOld._1_1_;
  (this->fields).boostEnabled.inited = aOStack_1[0].hiddenValueOld._2_1_;
  (this->fields).boostEnabled.field_0xb = aOStack_1[0].hiddenValueOld._3_1_;
  aOStack_1[0].hiddenValueOld = pBVar4;
  if (boostEnabled == 0) {
    bVar5 = iRam_? != 0;
    AVar2 = (this->fields).interval.hiddenValue;
    pBVar4 = (this->fields).interval.hiddenValueOld;
    fVar6 = (this->fields).interval.fakeValue;
    bVar3 = (this->fields).interval.inited;
    uVar7 = *(undefined3 *)&(this->fields).interval.field_0x15;
    (this->fields).boostedInterval.currentCryptoKey = (this->fields).interval.currentCryptoKey;
    (this->fields).boostedInterval.hiddenValue = AVar2;
    (this->fields).boostedInterval.hiddenValueOld = pBVar4;
    (this->fields).boostedInterval.fakeValue = fVar6;
    (this->fields).boostedInterval.inited = bVar3;
    *(undefined3 *)&(this->fields).boostedInterval.field_0x15 = uVar7;
    if (bVar5) {
      uVar8 = (uint)((ulonglong)&(this->fields).boostedInterval.hiddenValueOld >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar10 == *puVar11;
        if (bVar5) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  else {
    uVar12._0_4_ = (this->fields).interval.currentCryptoKey;
    uVar12._4_4_ = (this->fields).interval.hiddenValue;
    pBVar4 = (this->fields).interval.hiddenValueOld;
    uVar13._0_4_ = (this->fields).interval.fakeValue;
    uVar13._4_1_ = (this->fields).interval.inited;
    uVar13._5_3_ = *(undefined3 *)&(this->fields).interval.field_0x15;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    aOStack_1[0]._0_8_ = uVar12;
    aOStack_1[0].hiddenValueOld = pBVar4;
    aOStack_1[0]._16_8_ = uVar13;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    fVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalDecrypt(aOStack_1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar14 == (MVGameControllerBase *)0x0) ||
         (pMVar15 = (pMVar14->fields).game, pMVar15 == (MVNetworkGame *)0x0)) ||
        (this_00 = (pMVar15->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
       (((pMVar16 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         pMVar16 == (MVLocalPlayer *)0x0 ||
         (this_01 = (pMVar16->fields)._._SubscriptionRules_k__BackingField,
         this_01 == (SubscriptionRulesWrapper *)0x0)) ||
        (pOVar17 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                   SubscriptionRulesWrapper_GetRule
                             (this_01,SubscriptionBenefit__Enum_GameCoinBoost,
                              MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::GameCoinBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                             ), pOVar17 == (Object *)0x0)))) {
      FUN_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    fVar6 = fVar6 / (float)((int)((float)*(int *)&pOVar17[1].klass / _UNK_?) + 1);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aOStack_1[0].fakeValue = 0.0;
    aOStack_1[0].inited = 0;
    aOStack_1[0]._21_3_ = 0;
    aOStack_1[0].currentCryptoKey = 0;
    aOStack_1[0].hiddenValue.b1 = 0;
    aOStack_1[0].hiddenValue.b2 = 0;
    aOStack_1[0].hiddenValue.b3 = 0;
    aOStack_1[0].hiddenValue.b4 = 0;
    aOStack_1[0].hiddenValueOld = (Byte__Array *)0x0;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    AVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalEncrypt(fVar6,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
    ObscuredFloat__ctor(aOStack_1,AVar2,(MethodInfo *)0x0);
    bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
             ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    if (bVar3 != 0) {
      aOStack_1[0].fakeValue = fVar6;
    }
    bVar5 = iRam_? != 0;
    (this->fields).boostedInterval.currentCryptoKey = aOStack_1[0].currentCryptoKey;
    (this->fields).boostedInterval.hiddenValue = aOStack_1[0].hiddenValue;
    (this->fields).boostedInterval.hiddenValueOld = aOStack_1[0].hiddenValueOld;
    (this->fields).boostedInterval.fakeValue = aOStack_1[0].fakeValue;
    (this->fields).boostedInterval.inited = aOStack_1[0].inited;
    *(undefined3 *)&(this->fields).boostedInterval.field_0x15 = aOStack_1[0]._21_3_;
    if (bVar5) {
      uVar8 = (uint)((ulonglong)&(this->fields).boostedInterval.hiddenValueOld >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar10 == *puVar11;
        if (bVar5) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  if ((this->fields).BoostStateChanged != (Action_1_Boolean_ *)0x0) {
    pAVar19 = (this->fields).BoostStateChanged;
    (*(pAVar19->fields)._._.invoke_impl)
              ((pAVar19->fields)._._.method_code,boostEnabled,(pAVar19->fields)._._.method);
  }
  return;
}


/* Void OnGameCoinBoostChanged() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_OnGameCoinBoostChanged
               (MVGameCoinManager *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  apBStackX_8[0] = (Boost *)0x0;
  (this->fields).currentBoostMultiplier = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar4 != (MVLocalPlayer *)0x0) &&
       (this_01 = (pMVar4->fields).boostController, this_01 != (BoostController *)0x0)) {
      bVar5 = BoostController::BoostController_TryGetActiveBoost
                        (this_01,BoostType__Enum_GameCoinsIntMultiplier,apBStackX_8,
                         (MethodInfo *)0x0);
      if (bVar5 != 0) {
        (this->fields).currentBoostMultiplier = 2;
      }
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ReportPickupChangeInEditor() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_ReportPickupChangeInEditor
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__,
                  0);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
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
          uVar5._0_4_ = (this->fields).totalPurchaseAmount.currentCryptoKey;
          uVar5._4_4_ = (this->fields).totalPurchaseAmount.hiddenValue;
          uVar6._0_4_ = (this->fields).totalPurchaseAmount.fakeValue;
          uVar6._4_1_ = (this->fields).totalPurchaseAmount.inited;
          uVar6._5_3_ = *(undefined3 *)&(this->fields).totalPurchaseAmount.field_0xd;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          OStack_7._0_8_ = uVar5;
          OStack_7._8_8_ = uVar6;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          iVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                   ObscuredInt_InternalDecrypt(&OStack_7,(MethodInfo *)0x0);
          if (((iVar8 < 1) && (iVar3 < 1)) && (iVar4 < 1)) {
            bVar9 = 0;
          }
          else {
            bVar9 = 1;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool,bVar9,0);
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
          pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar10 != (MVGameControllerBase *)0x0) &&
              (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
             (this_00 = (pMVar11->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
            pMVar12 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                (this_00,(MethodInfo *)0x0);
            if ((pMVar12 != (MVLocalPlayer *)0x0) &&
               (this_01 = (pMVar12->fields).boostController, this_01 != (BoostController *)0x0)) {
              BoostController::BoostController_AllowBoost
                        (this_01,BoostType__Enum_GameCoinsIntMultiplier,bVar9,(MethodInfo *)0x0);
              OStack_13.currentCryptoKey = (this->fields).isActive.currentCryptoKey;
              OStack_13._1_3_ = *(undefined3 *)&(this->fields).isActive.field_0x1;
              OStack_13.hiddenValue = (this->fields).isActive.hiddenValue;
              OStack_13.fakeValue = (this->fields).isActive.fakeValue;
              OStack_13.fakeValueChanged = (this->fields).isActive.fakeValueChanged;
              OStack_13.inited = (this->fields).isActive.inited;
              OStack_13._11_1_ = (this->fields).isActive.field_0xb;
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              bVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredBool::ObscuredBool_InternalDecrypt(&OStack_13,(MethodInfo *)0x0);
              if (bVar9 != bVar14) {
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                OStack_13.currentCryptoKey = 0;
                OStack_13._1_3_ = 0;
                OStack_13.hiddenValue = 0;
                OStack_13.fakeValue = 0;
                OStack_13.fakeValueChanged = 0;
                OStack_13.inited = 0;
                OStack_13._11_1_ = 0;
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                iVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredBool::ObscuredBool_Encrypt(bVar9,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                             field_0x1c == 0) {
                  FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                }
                OStack_13.hiddenValue = iVar8;
                OStack_13._11_1_ = OStack_13._11_1_;
                OStack_13.fakeValue = 0;
                OStack_13.fakeValueChanged = 0;
                OStack_13.inited = 1;
                OStack_13.currentCryptoKey =
                     TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->
                     cryptoKey;
                bVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                         ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                                   ((MethodInfo *)0x0);
                if (bVar14 != 0) {
                  OStack_13.fakeValueChanged = 1;
                  OStack_13.fakeValue = bVar9;
                }
                uVar15 = OStack_13._8_4_;
                pMVar16 = (this->fields).OnActivationChange;
                (this->fields).isActive.currentCryptoKey = OStack_13.currentCryptoKey;
                *(undefined3 *)&(this->fields).isActive.field_0x1 = OStack_13._1_3_;
                (this->fields).isActive.hiddenValue = OStack_13.hiddenValue;
                (this->fields).isActive.fakeValue = OStack_13.fakeValue;
                (this->fields).isActive.fakeValueChanged = OStack_13.fakeValueChanged;
                (this->fields).isActive.inited = OStack_13.inited;
                (this->fields).isActive.field_0xb = OStack_13._11_1_;
                if (pMVar16 != (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
                  pMVar16 = (this->fields).OnActivationChange;
                  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                               field_0x1c == 0) {
                    FUN_?();
                  }
                  OStack_13._8_4_ = uVar15;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                               field_0x1c == 0) {
                    FUN_?();
                  }
                  bVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                           ObscuredBool::ObscuredBool_InternalDecrypt(&OStack_13,(MethodInfo *)0x0);
                  (*(pMVar16->fields)._._.invoke_impl)
                            ((pMVar16->fields)._._.method_code,bVar9,(pMVar16->fields)._._.method);
                }
              }
              return;
            }
          }
          FUN_?();
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void ReportPurchaseAmountInEditor(Int32) */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_ReportPurchaseAmountInEditor
               (MVGameCoinManager *this,int32_t amount,MethodInfo *method)

{
  uStack_1 = unaff_XMM6_Dd;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar2._0_4_ = (this->fields).totalPurchaseAmount.currentCryptoKey;
  uVar2._4_4_ = (this->fields).totalPurchaseAmount.hiddenValue;
  uVar3._0_4_ = (this->fields).totalPurchaseAmount.fakeValue;
  uVar3._4_1_ = (this->fields).totalPurchaseAmount.inited;
  uVar3._5_3_ = *(undefined3 *)&(this->fields).totalPurchaseAmount.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStack_4._0_8_ = uVar2;
  OStack_4._8_8_ = uVar3;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_InternalDecrypt(&OStack_4,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OStack_4.currentCryptoKey = 0;
  OStack_4.hiddenValue = 0;
  OStack_4.fakeValue = 0;
  OStack_4.inited = 0;
  OStack_4._13_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_Encrypt(amount + iVar5,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  OStack_4.inited = 1;
  OStack_4.currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  OStack_4.hiddenValue = iVar6;
  bVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  iVar8 = 0;
  if (bVar7 != 0) {
    iVar8 = amount + iVar5;
  }
  OStack_4.fakeValue = iVar8;
  uVar2 = OStack_4._8_8_;
  (this->fields).totalPurchaseAmount.currentCryptoKey = OStack_4.currentCryptoKey;
  (this->fields).totalPurchaseAmount.hiddenValue = OStack_4.hiddenValue;
  (this->fields).totalPurchaseAmount.fakeValue = iVar8;
  (this->fields).totalPurchaseAmount.inited = OStack_4.inited;
  *(undefined3 *)&(this->fields).totalPurchaseAmount.field_0xd = OStack_4._13_3_;
  OStack_4._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__,
                  0);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
    pLVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                        (pMVar9,WorldObjectType__Enum_GameCoin,(MethodInfo *)0x0);
    if (pLVar10 != (List_1_MVWorldObjectClient_ *)0x0) {
      iVar8 = (pLVar10->fields)._size;
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar9 != (MVWorldObjectClientManager *)0x0) {
        pLVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                            (pMVar9,WorldObjectType__Enum_GameCoinChest,(MethodInfo *)0x0);
        if (pLVar10 != (List_1_MVWorldObjectClient_ *)0x0) {
          iVar11 = (pLVar10->fields)._size;
          uVar12._0_4_ = (this->fields).totalPurchaseAmount.currentCryptoKey;
          uVar12._4_4_ = (this->fields).totalPurchaseAmount.hiddenValue;
          uVar13._0_4_ = (this->fields).totalPurchaseAmount.fakeValue;
          uVar13._4_1_ = (this->fields).totalPurchaseAmount.inited;
          uVar13._5_3_ = *(undefined3 *)&(this->fields).totalPurchaseAmount.field_0xd;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          OStack_4._0_8_ = uVar12;
          OStack_4._8_8_ = uVar13;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                   ObscuredInt_InternalDecrypt(&OStack_4,(MethodInfo *)0x0);
          if (((iVar5 < 1) && (iVar8 < 1)) && (iVar11 < 1)) {
            bVar7 = 0;
          }
          else {
            bVar7 = 1;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool,bVar7,0);
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
          pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar14 != (MVGameControllerBase *)0x0) &&
              (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) &&
             (this_00 = (pMVar15->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
            pMVar16 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                (this_00,(MethodInfo *)0x0);
            if ((pMVar16 != (MVLocalPlayer *)0x0) &&
               (this_01 = (pMVar16->fields).boostController, this_01 != (BoostController *)0x0)) {
              BoostController::BoostController_AllowBoost
                        (this_01,BoostType__Enum_GameCoinsIntMultiplier,bVar7,(MethodInfo *)0x0);
              auStack_17[0] = (this->fields).isActive.currentCryptoKey;
              auStack_17._1_3_ = *(undefined3 *)&(this->fields).isActive.field_0x1;
              auStack_17._4_4_ = (this->fields).isActive.hiddenValue;
              uVar18._0_1_ = (this->fields).isActive.fakeValue;
              uVar18._1_1_ = (this->fields).isActive.fakeValueChanged;
              uVar18._2_1_ = (this->fields).isActive.inited;
              uVar18._3_1_ = (this->fields).isActive.field_0xb;
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              stack0xfffffffffffffff0 = CONCAT44(uStack_1,uVar18);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              bVar19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredBool::ObscuredBool_InternalDecrypt
                                 ((ObscuredBool *)auStack_17,(MethodInfo *)0x0);
              if (bVar7 != bVar19) {
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                auStack_17[0] = 0;
                auStack_17._1_3_ = 0;
                auStack_17._4_4_ = 0;
                stack0xfffffffffffffff0 = stack0xfffffffffffffff0 & 0xffffffff00000000;
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredBool::ObscuredBool_Encrypt(bVar7,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                             field_0x1c == 0) {
                  FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                }
                auStack_17._4_4_ = iVar5;
                unique0x10000685 = CONCAT53((int5)(stack0xfffffffffffffff0 >> 0x18),0x10000);
                auStack_17[0] =
                     TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->
                     cryptoKey;
                bVar19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                         ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                                   ((MethodInfo *)0x0);
                if (bVar19 != 0) {
                  stack0xfffffffffffffff0 = CONCAT11(1,bVar7);
                }
                uVar2 = stack0xfffffffffffffff0;
                pMVar20 = (this->fields).OnActivationChange;
                uVar18 = stack0xfffffffffffffff0;
                (this->fields).isActive.currentCryptoKey = auStack_17[0];
                *(undefined3 *)&(this->fields).isActive.field_0x1 = auStack_17._1_3_;
                (this->fields).isActive.hiddenValue = auStack_17._4_4_;
                (this->fields).isActive.fakeValue = auStack_17[8];
                (this->fields).isActive.fakeValueChanged = bStack_21;
                (this->fields).isActive.inited = bStack_22;
                (this->fields).isActive.field_0xb = uStack_23;
                if (pMVar20 != (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
                  pMVar20 = (this->fields).OnActivationChange;
                  unique0x10000e49 = uVar2;
                  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                               field_0x1c == 0) {
                    FUN_?();
                  }
                  stack0xfffffffffffffff0 = CONCAT44(uStack_1,uVar18);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).
                               field_0x1c == 0) {
                    FUN_?();
                  }
                  bVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                           ObscuredBool::ObscuredBool_InternalDecrypt
                                     ((ObscuredBool *)auStack_17,(MethodInfo *)0x0);
                  (*(pMVar20->fields)._._.invoke_impl)
                            ((pMVar20->fields)._._.method_code,bVar7,(pMVar20->fields)._._.method);
                }
              }
              return;
            }
          }
          FUN_?();
          pcVar24 = (code *)swi(3);
          (*pcVar24)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void Reset(MVNetworkGame) */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_Reset
               (MVGameCoinManager *this,MVNetworkGame *game,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  value = (float)(*pcRam_?)();
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aOStack_3[0].fakeValue = 0.0;
  aOStack_3[0].inited = 0;
  aOStack_3[0]._21_3_ = 0;
  aOStack_3[0].currentCryptoKey = 0;
  aOStack_3[0].hiddenValue.b1 = 0;
  aOStack_3[0].hiddenValue.b2 = 0;
  aOStack_3[0].hiddenValue.b3 = 0;
  aOStack_3[0].hiddenValue.b4 = 0;
  aOStack_3[0].hiddenValueOld = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(value,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(aOStack_3,AVar4,(MethodInfo *)0x0);
  bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar5 != 0) {
    aOStack_3[0].fakeValue = value;
  }
  bVar6 = iRam_? != 0;
  (this->fields).startTime.currentCryptoKey = aOStack_3[0].currentCryptoKey;
  (this->fields).startTime.hiddenValue = aOStack_3[0].hiddenValue;
  *(undefined4 *)&(this->fields).startTime.hiddenValueOld = aOStack_3[0].hiddenValueOld._0_4_;
  *(undefined4 *)((longlong)&(this->fields).startTime.hiddenValueOld + 4) =
       aOStack_3[0].hiddenValueOld._4_4_;
  (this->fields).startTime.fakeValue = aOStack_3[0].fakeValue;
  (this->fields).startTime.inited = aOStack_3[0].inited;
  *(undefined3 *)&(this->fields).startTime.field_0x15 = aOStack_3[0]._21_3_;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).startTime.hiddenValueOld >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aOStack_3[0].currentCryptoKey = 0;
  aOStack_3[0].hiddenValue.b1 = 0;
  aOStack_3[0].hiddenValue.b2 = 0;
  aOStack_3[0].hiddenValue.b3 = 0;
  aOStack_3[0].hiddenValue.b4 = 0;
  aOStack_3[0].hiddenValueOld = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar4 = (ACTkByte4)
          Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  aOStack_3[0].hiddenValue = AVar4;
  aOStack_3[0].currentCryptoKey =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  aOStack_3[0].hiddenValueOld =
       (Byte__Array *)CONCAT35((int3)((ulonglong)aOStack_3[0].hiddenValueOld >> 0x28),0x100000000);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
  ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  pBVar11 = aOStack_3[0].hiddenValueOld;
  uVar2 = aOStack_3[0]._0_8_;
  (this->fields).gameCoins.currentCryptoKey = aOStack_3[0].currentCryptoKey;
  (this->fields).gameCoins.hiddenValue = (int32_t)aOStack_3[0].hiddenValue;
  *(Byte__Array **)&(this->fields).gameCoins.fakeValue = aOStack_3[0].hiddenValueOld;
  if ((this->fields).OnGameCoinAmountChange !=
      (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
    pMVar12 = (this->fields).OnGameCoinAmountChange;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    aOStack_3[0]._0_8_ = uVar2;
    aOStack_3[0].hiddenValueOld = pBVar11;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_InternalDecrypt((ObscuredInt *)aOStack_3,(MethodInfo *)0x0);
    (*(pMVar12->fields)._._.invoke_impl)
              ((pMVar12->fields)._._.method_code,iVar13,(pMVar12->fields)._._.method);
  }
  if ((this->fields).OnActivationChange != (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
    pMVar14 = (this->fields).OnActivationChange;
    uVar2 = *(undefined8 *)&(this->fields).isActive;
    uVar15._0_1_ = (this->fields).isActive.fakeValue;
    uVar15._1_1_ = (this->fields).isActive.fakeValueChanged;
    uVar15._2_1_ = (this->fields).isActive.inited;
    uVar15._3_1_ = (this->fields).isActive.field_0xb;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    aOStack_3[0].hiddenValueOld = (Byte__Array *)CONCAT44(aOStack_3[0].hiddenValueOld._4_4_,uVar15)
    ;
    aOStack_3[0]._0_8_ = uVar2;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_InternalDecrypt((ObscuredBool *)aOStack_3,(MethodInfo *)0x0);
    (*(pMVar14->fields)._._.invoke_impl)
              ((pMVar14->fields)._._.method_code,bVar5,(pMVar14->fields)._._.method);
  }
  return;
}


/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_Update
               (MVGameCoinManager *this,MVNetworkGame *game,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = *(undefined8 *)&(this->fields).isActive;
  uVar2._0_1_ = (this->fields).isActive.fakeValue;
  uVar2._1_1_ = (this->fields).isActive.fakeValueChanged;
  uVar2._2_1_ = (this->fields).isActive.inited;
  uVar2._3_1_ = (this->fields).isActive.field_0xb;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0].hiddenValueOld = (Byte__Array *)CONCAT44(aOStack_3[0].hiddenValueOld._4_4_,uVar2);
  aOStack_3[0]._0_8_ = uVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
           ObscuredBool_InternalDecrypt((ObscuredBool *)aOStack_3,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    return;
  }
  if (game != (MVNetworkGame *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar5 != (MVGameControllerBase *)0x0) {
      cVar6 = (*(pMVar5->klass->vtable).__unknown_1.methodPtr)();
      if (cVar6 != '\0') {
        pMVar7 = (game->fields)._NetworkGameStateListener_k__BackingField;
        if (pMVar7 == (MVNetworkGameStateListener *)0x0) goto code_?;
        if ((pMVar7->fields).currentGameState == 1) {
          fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          uVar1._0_4_ = (this->fields).startTime.currentCryptoKey;
          uVar1._4_4_ = (this->fields).startTime.hiddenValue;
          pBVar9 = (this->fields).startTime.hiddenValueOld;
          aOStack_3[0].fakeValue = (this->fields).startTime.fakeValue;
          aOStack_3[0].inited = (this->fields).startTime.inited;
          aOStack_3[0]._21_3_ = *(undefined3 *)&(this->fields).startTime.field_0x15;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          aOStack_3[0]._0_8_ = uVar1;
          aOStack_3[0].hiddenValueOld = pBVar9;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                   ::ObscuredFloat_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
          aOStack_3[0].currentCryptoKey = (this->fields).boostedInterval.currentCryptoKey;
          aOStack_3[0].hiddenValue = (this->fields).boostedInterval.hiddenValue;
          aOStack_3[0].hiddenValueOld = (this->fields).boostedInterval.hiddenValueOld;
          aOStack_3[0].fakeValue = (this->fields).boostedInterval.fakeValue;
          aOStack_3[0].inited = (this->fields).boostedInterval.inited;
          aOStack_3[0]._21_3_ = *(undefined3 *)&(this->fields).boostedInterval.field_0x15;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          fVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                   ::ObscuredFloat_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
          if (fVar8 - fVar10 <= fVar11) {
            return;
          }
          uVar12._0_4_ = (this->fields).gameCoins.currentCryptoKey;
          uVar12._4_4_ = (ACTkByte4)(this->fields).gameCoins.hiddenValue;
          pBVar9 = *(Byte__Array **)&(this->fields).gameCoins.fakeValue;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          aOStack_3[0]._0_8_ = uVar12;
          aOStack_3[0].hiddenValueOld = pBVar9;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          iVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                   ObscuredInt_InternalDecrypt((ObscuredInt *)aOStack_3,(MethodInfo *)0x0);
          aOStack_3[0].currentCryptoKey = (this->fields).intervalAmount.currentCryptoKey;
          aOStack_3[0].hiddenValue = (ACTkByte4)(this->fields).intervalAmount.hiddenValue;
          aOStack_3[0].hiddenValueOld = *(Byte__Array **)&(this->fields).intervalAmount.fakeValue;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          iVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                   ObscuredInt_InternalDecrypt((ObscuredInt *)aOStack_3,(MethodInfo *)0x0);
          pOVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                    ::ObscuredInt_op_Implicit
                              ((ObscuredInt *)aOStack_3,
                               iVar13 + iVar14 * (this->fields).currentBoostMultiplier,
                               (MethodInfo *)0x0);
          pMVar16 = (this->fields).OnGameCoinAmountChange;
          uVar17._0_4_ = pOVar15->currentCryptoKey;
          uVar17._4_4_ = (ACTkByte4)pOVar15->hiddenValue;
          pBVar9 = *(Byte__Array **)&pOVar15->fakeValue;
          (this->fields).gameCoins.currentCryptoKey = (int32_t)uVar17;
          (this->fields).gameCoins.hiddenValue = (int32_t)uVar17._4_4_;
          *(Byte__Array **)&(this->fields).gameCoins.fakeValue = pBVar9;
          if (pMVar16 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
            pMVar16 = (this->fields).OnGameCoinAmountChange;
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
                == 0) {
              FUN_?();
            }
            aOStack_3[0]._0_8_ = uVar17;
            aOStack_3[0].hiddenValueOld = pBVar9;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
                == 0) {
              FUN_?();
            }
            iVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                     ::ObscuredInt_InternalDecrypt((ObscuredInt *)aOStack_3,(MethodInfo *)0x0);
            (*(pMVar16->fields)._._.invoke_impl)((pMVar16->fields)._._.method_code,iVar13);
          }
          fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          pOVar18 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredFloat::ObscuredFloat_op_Implicit(aOStack_3,fVar8,(MethodInfo *)0x0);
          AVar19 = pOVar18->hiddenValue;
          uVar2 = *(undefined4 *)&pOVar18->hiddenValueOld;
          uVar20 = *(undefined4 *)((longlong)&pOVar18->hiddenValueOld + 4);
          fVar8 = pOVar18->fakeValue;
          bVar4 = pOVar18->inited;
          uVar21 = *(undefined3 *)&pOVar18->field_0x15;
          (this->fields).startTime.currentCryptoKey = pOVar18->currentCryptoKey;
          (this->fields).startTime.hiddenValue = AVar19;
          *(undefined4 *)&(this->fields).startTime.hiddenValueOld = uVar2;
          *(undefined4 *)((longlong)&(this->fields).startTime.hiddenValueOld + 4) = uVar20;
          (this->fields).startTime.fakeValue = fVar8;
          (this->fields).startTime.inited = bVar4;
          *(undefined3 *)&(this->fields).startTime.field_0x15 = uVar21;
          func_?(&(this->fields).startTime.hiddenValueOld);
          return;
        }
      }
      pcVar22 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
        uVar1 = func_?(&UNK_?);
        FUN_?(uVar1,0);
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      pcRam_? = pcVar22;
      fVar8 = (float)(*pcRam_?)();
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aOStack_3[0].fakeValue = 0.0;
      aOStack_3[0].inited = 0;
      aOStack_3[0]._21_3_ = 0;
      aOStack_3[0].currentCryptoKey = 0;
      aOStack_3[0].hiddenValue.b1 = 0;
      aOStack_3[0].hiddenValue.b2 = 0;
      aOStack_3[0].hiddenValue.b3 = 0;
      aOStack_3[0].hiddenValue.b4 = 0;
      aOStack_3[0].hiddenValueOld = (Byte__Array *)0x0;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      AVar19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalEncrypt(fVar8,(MethodInfo *)0x0);
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat__ctor(aOStack_3,AVar19,(MethodInfo *)0x0);
      bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
               ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
      if (bVar4 != 0) {
        aOStack_3[0].fakeValue = fVar8;
      }
      bVar23 = iRam_? == 0;
      (this->fields).startTime.currentCryptoKey = aOStack_3[0].currentCryptoKey;
      (this->fields).startTime.hiddenValue = aOStack_3[0].hiddenValue;
      (this->fields).startTime.hiddenValueOld = aOStack_3[0].hiddenValueOld;
      (this->fields).startTime.fakeValue = aOStack_3[0].fakeValue;
      (this->fields).startTime.inited = aOStack_3[0].inited;
      *(undefined3 *)&(this->fields).startTime.field_0x15 = aOStack_3[0]._21_3_;
      if (bVar23) {
        return;
      }
      uVar24 = (uint)((ulonglong)&(this->fields).startTime.hiddenValueOld >> 0xc);
      uVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
      do {
        uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
        puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
        LOCK();
        bVar23 = uVar26 == *puVar27;
        if (bVar23) {
          *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
        }
        UNLOCK();
      } while (!bVar23);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* MVGameCoinManager() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager__ctor
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGameCoinManager__LateInitialize__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  auStack_2._0_4_ = 0;
  auStack_2[4] = 0;
  auStack_2[5] = 0;
  auStack_2[6] = 0;
  auStack_2[7] = 0;
  stack0xffffffffffffffc0 = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalEncrypt(0.0,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)auStack_2,AVar3,(MethodInfo *)0x0);
  bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  uVar5 = auStack_2._0_8_;
  if (bVar4 != 0) {
    uStack_1 = uStack_1 & 0xffffffff00000000;
  }
  bVar6 = iRam_? != 0;
  (this->fields).startTime.currentCryptoKey = auStack_2._0_4_;
  (this->fields).startTime.hiddenValue.b1 = auStack_2[4];
  (this->fields).startTime.hiddenValue.b2 = auStack_2[5];
  (this->fields).startTime.hiddenValue.b3 = auStack_2[6];
  (this->fields).startTime.hiddenValue.b4 = auStack_2[7];
  *(int32_t *)&(this->fields).startTime.hiddenValueOld = stack0xffffffffffffffc0;
  *(undefined4 *)((longlong)&(this->fields).startTime.hiddenValueOld + 4) = uStack_7;
  (this->fields).startTime.fakeValue = (float)(undefined4)uStack_1;
  (this->fields).startTime.inited = uStack_1._4_1_;
  *(undefined3 *)&(this->fields).startTime.field_0x15 = uStack_1._5_3_;
  if (bVar6) {
    uVar8 = (uint)((ulonglong)&(this->fields).startTime.hiddenValueOld >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar10 == *puVar11;
      if (bVar6) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (cRam_? == '\0') {
    auStack_2._0_8_ = uVar5;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = 0.0;
  uStack_1._4_1_ = 0;
  uStack_1._5_3_ = 0;
  auStack_2._0_4_ = 0;
  auStack_2[4] = 0;
  auStack_2[5] = 0;
  auStack_2[6] = 0;
  auStack_2[7] = 0;
  stack0xffffffffffffffc0 = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalEncrypt(TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)auStack_2,AVar3,(MethodInfo *)0x0);
  bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  uVar5 = auStack_2._0_8_;
  if (bVar4 != 0) {
    uStack_1 = CONCAT44(uStack_1._4_4_,2.0);
  }
  bVar6 = iRam_? != 0;
  (this->fields).interval.currentCryptoKey = auStack_2._0_4_;
  (this->fields).interval.hiddenValue.b1 = auStack_2[4];
  (this->fields).interval.hiddenValue.b2 = auStack_2[5];
  (this->fields).interval.hiddenValue.b3 = auStack_2[6];
  (this->fields).interval.hiddenValue.b4 = auStack_2[7];
  *(int32_t *)&(this->fields).interval.hiddenValueOld = stack0xffffffffffffffc0;
  *(undefined4 *)((longlong)&(this->fields).interval.hiddenValueOld + 4) = uStack_7;
  (this->fields).interval.fakeValue = (float)(undefined4)uStack_1;
  (this->fields).interval.inited = uStack_1._4_1_;
  *(undefined3 *)&(this->fields).interval.field_0x15 = uStack_1._5_3_;
  if (bVar6) {
    uVar8 = (uint)((ulonglong)&(this->fields).interval.hiddenValueOld >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar10 == *puVar11;
      if (bVar6) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  auStack_2._0_8_ = uVar5;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_2._0_4_ = 0;
  auStack_2[4] = 0;
  auStack_2[5] = 0;
  auStack_2[6] = 0;
  auStack_2[7] = 0;
  stack0xffffffffffffffc0 = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar3 = (ACTkByte4)
           Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_Encrypt(1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  stack0xffffffffffffffc0 = CONCAT14(1,stack0xffffffffffffffc0);
  auStack_2._0_4_ =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  auStack_2._4_4_ = AVar3;
  bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  iVar12 = 0;
  stack0xffffffffffffffc0 = (Byte__Array *)CONCAT44(uStack_7,(uint)(bVar4 != 0));
  bVar6 = cRam_? == '\0';
  (this->fields).currentBoostMultiplier = 1;
  (this->fields).intervalAmount.currentCryptoKey = auStack_2._0_4_;
  (this->fields).intervalAmount.hiddenValue = auStack_2._4_4_;
  (this->fields).intervalAmount.fakeValue = (uint)(bVar4 != 0);
  *(undefined4 *)&(this->fields).intervalAmount.inited = uStack_7;
  if (bVar6) {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = 0.0;
  uStack_1._4_1_ = 0;
  uStack_1._5_3_ = 0;
  auStack_2._0_4_ = 0;
  auStack_2[4] = 0;
  auStack_2[5] = 0;
  auStack_2[6] = 0;
  auStack_2[7] = 0;
  stack0xffffffffffffffc0 = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalEncrypt(TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)auStack_2,AVar3,(MethodInfo *)0x0);
  bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  uVar5 = auStack_2._0_8_;
  if (bVar4 != 0) {
    uStack_1 = CONCAT44(uStack_1._4_4_,2.0);
  }
  bVar6 = iRam_? != 0;
  (this->fields).boostedInterval.currentCryptoKey = auStack_2._0_4_;
  (this->fields).boostedInterval.hiddenValue.b1 = auStack_2[4];
  (this->fields).boostedInterval.hiddenValue.b2 = auStack_2[5];
  (this->fields).boostedInterval.hiddenValue.b3 = auStack_2[6];
  (this->fields).boostedInterval.hiddenValue.b4 = auStack_2[7];
  *(int32_t *)&(this->fields).boostedInterval.hiddenValueOld = stack0xffffffffffffffc0;
  *(undefined4 *)((longlong)&(this->fields).boostedInterval.hiddenValueOld + 4) = uStack_7;
  (this->fields).boostedInterval.fakeValue = (float)(undefined4)uStack_1;
  (this->fields).boostedInterval.inited = uStack_1._4_1_;
  *(undefined3 *)&(this->fields).boostedInterval.field_0x15 = uStack_1._5_3_;
  if (bVar6) {
    uVar8 = (uint)((ulonglong)&(this->fields).boostedInterval.hiddenValueOld >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar10 == *puVar11;
      if (bVar6) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (cRam_? == '\0') {
    auStack_2._0_8_ = uVar5;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_2._0_4_ = 0;
  auStack_2[4] = 0;
  auStack_2[5] = 0;
  auStack_2[6] = 0;
  auStack_2[7] = 0;
  stack0xffffffffffffffc0 = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar3 = (ACTkByte4)
           Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_Encrypt(0x19,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  stack0xffffffffffffffc0 = CONCAT14(1,stack0xffffffffffffffc0);
  auStack_2._0_4_ =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  auStack_2._4_4_ = AVar3;
  bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar4 != 0) {
    iVar12 = 0x19;
  }
  stack0xffffffffffffffc0 = (Byte__Array *)CONCAT44(uStack_7,iVar12);
  bVar6 = cRam_? == '\0';
  (this->fields).gameCoinPickupValue.currentCryptoKey = auStack_2._0_4_;
  (this->fields).gameCoinPickupValue.hiddenValue = auStack_2._4_4_;
  (this->fields).gameCoinPickupValue.fakeValue = iVar12;
  *(undefined4 *)&(this->fields).gameCoinPickupValue.inited = uStack_7;
  if (bVar6) {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_2._0_4_ = 0;
  auStack_2[4] = 0;
  auStack_2[5] = 0;
  auStack_2[6] = 0;
  auStack_2[7] = 0;
  stack0xffffffffffffffc0 = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar3 = (ACTkByte4)
           Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_Encrypt(0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  unique0x10000ba2 =
       (Byte__Array *)CONCAT35((int3)((ulonglong)stack0xffffffffffffffc0 >> 0x28),0x100000000);
  auStack_2._0_4_ =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  auStack_2._4_4_ = AVar3;
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
  ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  (this->fields).gameCoins.currentCryptoKey = auStack_2._0_4_;
  (this->fields).gameCoins.hiddenValue = auStack_2._4_4_;
  (this->fields).gameCoins.fakeValue = stack0xffffffffffffffc0;
  *(undefined4 *)&(this->fields).gameCoins.inited = uStack_7;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_2._0_4_ = 0;
  auStack_2[4] = 0;
  auStack_2[5] = 0;
  auStack_2[6] = 0;
  auStack_2[7] = 0;
  stack0xffffffffffffffc0 = (Byte__Array *)((ulonglong)stack0xffffffffffffffc0 & 0xffffffff00000000)
  ;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar3 = (ACTkByte4)
           Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
           ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  auStack_2[4] = AVar3.b1;
  auStack_2[5] = AVar3.b2;
  auStack_2[6] = AVar3.b3;
  auStack_2[7] = AVar3.b4;
  uVar9 = (ulonglong)stack0xffffffffffffffc0 >> 0x18;
  auStack_2._8_2_ = (ushort)stack0xffffffffffffffc0 & 0xff00;
  stack0xffffffffffffffc0 = CONCAT12(1,auStack_2._8_2_);
  unique0x10000bae = (Byte__Array *)CONCAT53((int5)uVar9,stack0xffffffffffffffc0);
  auStack_2[0] =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
  bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  auStack_2._8_2_ = CONCAT11(bVar4 != 0,auStack_2[8]);
  pBVar13 = stack0xffffffffffffffc0;
  bVar6 = cRam_? == '\0';
  (this->fields).isActive.currentCryptoKey = auStack_2[0];
  *(undefined3 *)&(this->fields).isActive.field_0x1 = auStack_2._1_3_;
  (this->fields).isActive.hiddenValue = auStack_2._4_4_;
  (this->fields).isActive.fakeValue = auStack_2[8];
  (this->fields).isActive.fakeValueChanged = auStack_2[9];
  (this->fields).isActive.inited = uStack_14;
  (this->fields).isActive.field_0xb = uStack_15;
  if (bVar6) {
    unique0x100018ed = pBVar13;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_2._0_4_ = 0;
  auStack_2[4] = 0;
  auStack_2[5] = 0;
  auStack_2[6] = 0;
  auStack_2[7] = 0;
  stack0xffffffffffffffc0 = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar3 = (ACTkByte4)
           Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_Encrypt(0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  unique0x10000bbb =
       (Byte__Array *)CONCAT35((int3)((ulonglong)stack0xffffffffffffffc0 >> 0x28),0x100000000);
  auStack_2._0_4_ =
       TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  auStack_2._4_4_ = AVar3;
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
  ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  cVar16 = cRam_?;
  (this->fields).totalPurchaseAmount.currentCryptoKey = auStack_2._0_4_;
  (this->fields).totalPurchaseAmount.hiddenValue = auStack_2._4_4_;
  (this->fields).totalPurchaseAmount.fakeValue = stack0xffffffffffffffc0;
  *(undefined4 *)&(this->fields).totalPurchaseAmount.inited = uStack_7;
  if (cVar16 == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cVar16 = '\x01';
    cRam_? = '\x01';
  }
  pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar17 != (MVGameControllerBase *)0x0) &&
      (pMVar18 = (pMVar17->fields).game, pMVar18 != (MVNetworkGame *)0x0)) &&
     (pMVar19 = (pMVar18->fields).playerContainer, pMVar19 != (MVPlayerContainer *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      cVar16 = cRam_?;
    }
    pDVar20 = (pMVar19->fields).players;
    if (pDVar20 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
      if ((pDVar20->fields)._count != (pDVar20->fields)._freeCount) {
        if (cVar16 == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar17 == (MVGameControllerBase *)0x0) ||
            (pMVar18 = (pMVar17->fields).game, pMVar18 == (MVNetworkGame *)0x0)) ||
           ((pMVar19 = (pMVar18->fields).playerContainer, pMVar19 == (MVPlayerContainer *)0x0 ||
            (pMVar21 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (pMVar19,(MethodInfo *)0x0), pMVar21 == (MVLocalPlayer *)0x0))))
        goto code_?;
        cVar16 = cRam_?;
        if ((pMVar21->fields)._.playerState == 1) {
          MVGameCoinManager_Initialize(this,(MethodInfo *)0x0);
          return;
        }
      }
      if (cVar16 == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar17 != (MVGameControllerBase *)0x0) &&
          (pMVar18 = (pMVar17->fields).game, pMVar18 != (MVNetworkGame *)0x0)) &&
         (pMVar19 = (pMVar18->fields).playerContainer, pMVar19 != (MVPlayerContainer *)0x0)) {
        pAVar22 = (pMVar19->fields).OnLocalPlayerReady;
        this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_00,(Object *)this,MethodInfo__MVGameCoinManager__LateInitialize__,
                   (MethodInfo *)0x0);
        pAVar22 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar22,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pAVar22 == (Action *)0x0) {
          (pMVar19->fields).OnLocalPlayerReady = (Action *)0x0;
        }
        else {
          pAVar23 = (Action *)0x0;
          if (pAVar22->klass == TypeInfo__System__Action) {
            pAVar23 = pAVar22;
          }
          if (pAVar23 == (Action *)0x0) {
            FUN_?(pAVar22);
            pcVar24 = (code *)swi(3);
            (*pcVar24)();
            return;
          }
          (pMVar19->fields).OnLocalPlayerReady = pAVar23;
          pAVar23 = (Action *)0x0;
          if (pAVar22->klass == TypeInfo__System__Action) {
            pAVar23 = pAVar22;
          }
          if (pAVar23 == (Action *)0x0) {
            FUN_?(pAVar22);
            pcVar24 = (code *)swi(3);
            (*pcVar24)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)&(pMVar19->fields).OnLocalPlayerReady >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar10 == *puVar11;
            if (bVar6) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Boolean get_Active() */

bool Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_get_Active
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_1_ = (this->fields).isActive.currentCryptoKey;
  uVar1._1_3_ = *(undefined3 *)&(this->fields).isActive.field_0x1;
  uVar1._4_4_ = (this->fields).isActive.hiddenValue;
  uVar2._0_1_ = (this->fields).isActive.fakeValue;
  uVar2._1_1_ = (this->fields).isActive.fakeValueChanged;
  uVar2._2_1_ = (this->fields).isActive.inited;
  uVar2._3_1_ = (this->fields).isActive.field_0xb;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStack_3._0_8_ = uVar1;
  OStack_3._8_4_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_InternalDecrypt(&OStack_3,(MethodInfo *)0x0);
  return bVar4;
}


/* Boolean get_BoostEnabled() */

bool Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_get_BoostEnabled
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_1_ = (this->fields).boostEnabled.currentCryptoKey;
  uVar1._1_3_ = *(undefined3 *)&(this->fields).boostEnabled.field_0x1;
  uVar1._4_4_ = (this->fields).boostEnabled.hiddenValue;
  uVar2._0_1_ = (this->fields).boostEnabled.fakeValue;
  uVar2._1_1_ = (this->fields).boostEnabled.fakeValueChanged;
  uVar2._2_1_ = (this->fields).boostEnabled.inited;
  uVar2._3_1_ = (this->fields).boostEnabled.field_0xb;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStack_3._0_8_ = uVar1;
  OStack_3._8_4_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_InternalDecrypt(&OStack_3,(MethodInfo *)0x0);
  return bVar4;
}


/* Int32 get_GameCoinAmount() */

int32_t Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount
                  (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).gameCoins.currentCryptoKey;
  uVar1._4_4_ = (this->fields).gameCoins.hiddenValue;
  uVar2._0_4_ = (this->fields).gameCoins.fakeValue;
  uVar2._4_1_ = (this->fields).gameCoins.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).gameCoins.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  return iVar4;
}


/* Int32 get_TotalPurchaseAmount() */

int32_t Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_get_TotalPurchaseAmount
                  (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).totalPurchaseAmount.currentCryptoKey;
  uVar1._4_4_ = (this->fields).totalPurchaseAmount.hiddenValue;
  uVar2._0_4_ = (this->fields).totalPurchaseAmount.fakeValue;
  uVar2._4_1_ = (this->fields).totalPurchaseAmount.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).totalPurchaseAmount.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  return iVar4;
}

