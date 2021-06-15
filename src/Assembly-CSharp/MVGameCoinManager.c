
/* Boolean Consume(GameCoinLogic) */

bool Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_Consume
               (MVGameCoinManager *this,GameCoinLogic *gameCoinLogic,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).gameCoins.currentCryptoKey;
  iVar2 = (this->fields).gameCoins.hiddenValue;
  iVar3 = (this->fields).gameCoins.fakeValue;
  uVar4._0_1_ = (this->fields).gameCoins.inited;
  uVar4._1_3_ = *(undefined3 *)&(this->fields).gameCoins.field_0xd;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value_00.hiddenValue = iVar2;
  value_00.currentCryptoKey = iVar1;
  value_00.fakeValue = iVar3;
  value_00.inited = (bool)uVar4;
  value_00._13_3_ = SUB43(uVar4,1);
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value_00,(MethodInfo *)0x0);
  if (gameCoinLogic != (GameCoinLogic *)0x0) {
    pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)gameCoinLogic,(MethodInfo *)0x0);
    if (iVar1 < (int)pIVar5) {
      return 0;
    }
    iVar1 = (this->fields).gameCoins.currentCryptoKey;
    iVar2 = (this->fields).gameCoins.hiddenValue;
    puVar6 = (undefined *)(this->fields).gameCoins.fakeValue;
    pOVar7 = *(ObscuredInt__Class **)&(this->fields).gameCoins.inited;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      puVar6 = &UNK_?;
      pOVar7 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
      func_?();
    }
    value_01.hiddenValue = iVar2;
    value_01.currentCryptoKey = iVar1;
    value_01.fakeValue = (int32_t)puVar6;
    value_01._12_4_ = pOVar7;
    iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit_1(value_01,(MethodInfo *)0x0);
    pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)gameCoinLogic,(MethodInfo *)0x0);
    pOVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_op_Implicit
                       ((ObscuredInt *)&stack0xffffffec,iVar1 - (int)pIVar5,(MethodInfo *)0x0);
    this_00 = (this->fields).OnGameCoinAmountChange;
    iVar1 = pOVar8->currentCryptoKey;
    iVar2 = pOVar8->hiddenValue;
    iVar3 = pOVar8->fakeValue;
    uVar9._0_1_ = pOVar8->inited;
    uVar9._1_3_ = *(undefined3 *)&pOVar8->field_0xd;
    (this->fields).gameCoins.currentCryptoKey = iVar1;
    (this->fields).gameCoins.hiddenValue = iVar2;
    (this->fields).gameCoins.fakeValue = iVar3;
    (this->fields).gameCoins.inited = (bool)uVar9;
    *(undefined3 *)&(this->fields).gameCoins.field_0xd = uVar9._1_3_;
    if (this_00 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
        func_?();
      }
      value.hiddenValue = iVar2;
      value.currentCryptoKey = iVar1;
      value.fakeValue = iVar3;
      value.inited = (bool)uVar9;
      value._13_3_ = SUB43(uVar9,1);
      iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
      if (this_00 == (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) goto code_?;
      MVGameCoinManager+OnGameCoinAmountChangeDelegate::
      MVGameCoinManager_OnGameCoinAmountChangeDelegate_Invoke(this_00,iVar1,(MethodInfo *)0x0);
    }
    return 1;
  }
code_?:
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                       (pMVar1,WorldObjectType__Enum_GameCoin,(MethodInfo *)0x0);
    if (pLVar2 != (List_1_MVWorldObjectClient_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                           (pMVar1,WorldObjectType__Enum_GameCoinChest,(MethodInfo *)0x0);
        this_00 = MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__;
        if (pLVar2 != (List_1_MVWorldObjectClient_ *)0x0) {
          pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                             );
          pIVar5 = this_00[3].methodPointer;
          pIVar6 = this_00[3].virtualMethodPointer;
          this = (MVGameCoinManager *)this_00[3].invoker_method;
          method = (MethodInfo *)this_00[3].name;
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0))
          {
            pOStack7 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
            func_?();
          }
          pOStack7 = (ObscuredInt__Class *)0x0;
          iVar8 = (int32_t)pIVar6;
          value.currentCryptoKey = (int32_t)pIVar5;
          value = (ObscuredInt)CONCAT124(auVar9,value.currentCryptoKey);
          iVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                  ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
          if (((iVar10 < 1) && ((int)pOVar3 < 1)) && ((int)pOVar4 < 1)) {
            MVGameCoinManager_HandleActivationChange
                      ((MVGameCoinManager *)this_00,0,(MethodInfo *)0x0);
            return;
          }
          MVGameCoinManager_HandleActivationChange((MVGameCoinManager *)this_00,1,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void GameCoinChestCollect(Int32) */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_GameCoinChestCollect
               (MVGameCoinManager *this,int32_t amount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  OStack_1.currentCryptoKey = (this->fields).gameCoins.currentCryptoKey;
  OStack_1.hiddenValue = (this->fields).gameCoins.hiddenValue;
  iVar2 = (this->fields).gameCoins.fakeValue;
  uVar3._0_1_ = (this->fields).gameCoins.inited;
  uVar3._1_3_ = *(undefined3 *)&(this->fields).gameCoins.field_0xd;
  uVar4 = (this->fields).gameCoins.fakeValue;
  uVar5 = (this->fields).gameCoins.inited;
  uVar6 = *(undefined3 *)&(this->fields).gameCoins.field_0xd;
  OStack_1._13_3_ = uVar6;
  OStack_1.inited = uVar5;
  OStack_1.fakeValue = uVar4;
  stack0xfffffffc = unaff_EBP;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    iVar2 = OStack_1.fakeValue;
    uVar3 = OStack_1._12_4_;
  }
  OVar7.hiddenValue = OStack_1.hiddenValue;
  OVar7.currentCryptoKey = OStack_1.currentCryptoKey;
  OVar7.fakeValue = iVar2;
  OVar7.inited = (bool)uVar3;
  OVar7._13_3_ = SUB43(uVar3,1);
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(OVar7,(MethodInfo *)0x0);
  pOVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit
                      (&OStack_1,(this->fields).currentBoostMultiplier * amount + iVar2,
                       (MethodInfo *)0x0);
  auVar9 = stack0xfffffff4;
  OStack_1.currentCryptoKey = pOVar8->currentCryptoKey;
  OStack_1.hiddenValue = pOVar8->hiddenValue;
  iVar2 = pOVar8->fakeValue;
  uVar10._0_1_ = pOVar8->inited;
  uVar10._1_3_ = *(undefined3 *)&pOVar8->field_0xd;
  uVar11 = pOVar8->fakeValue;
  uVar12 = pOVar8->inited;
  uVar13 = *(undefined3 *)&pOVar8->field_0xd;
  OStack_1._13_3_ = uVar13;
  OStack_1.inited = uVar12;
  OStack_1.fakeValue = uVar11;
  (this->fields).gameCoins.currentCryptoKey = OStack_1.currentCryptoKey;
  (this->fields).gameCoins.hiddenValue = OStack_1.hiddenValue;
  (this->fields).gameCoins.fakeValue = iVar2;
  (this->fields).gameCoins.inited = (bool)uVar10;
  *(undefined3 *)&(this->fields).gameCoins.field_0xd = uVar10._1_3_;
  this_00 = (this->fields).OnGameCoinAmountChange;
  stack0xfffffffc = auVar9._8_4_;
  if (this_00 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
    iVar14 = OStack_1.hiddenValue;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      func_?();
      iVar14 = OStack_1.hiddenValue;
      iVar2 = OStack_1.fakeValue;
      uVar10 = OStack_1._12_4_;
    }
    OStack_1._12_4_ = iVar14;
    OStack_1.fakeValue = OStack_1.currentCryptoKey;
    stack0xfffffffc = iVar2;
    auVar9 = stack0xfffffff4;
    OStack_1.hiddenValue = (int32_t)&UNK_?;
    OVar7 = (ObscuredInt)CONCAT412(CONCAT31(SUB43(uVar10,1),(bool)uVar10),stack0xfffffff4);
    unique0x100004b4 = auVar9;
    iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit_1(OVar7,(MethodInfo *)0x0);
    if (this_00 == (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
      func_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    MVGameCoinManager+OnGameCoinAmountChangeDelegate::
    MVGameCoinManager_OnGameCoinAmountChangeDelegate_Invoke(this_00,iVar2,(MethodInfo *)0x0);
  }
  return;
}


/* Void GameCoinCollect() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_GameCoinCollect
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).gameCoinPickupValue.currentCryptoKey;
  iVar2 = (this->fields).gameCoinPickupValue.hiddenValue;
  iVar3 = (this->fields).gameCoinPickupValue.fakeValue;
  uVar4 = (this->fields).gameCoins.currentCryptoKey;
  uVar5 = (this->fields).gameCoins.hiddenValue;
  value.hiddenValue = uVar5;
  value.currentCryptoKey = uVar4;
  iVar6 = (this->fields).gameCoins.fakeValue;
  uVar7 = *(undefined4 *)&(this->fields).gameCoins.inited;
  uVar8 = (this->fields).gameCoins.fakeValue;
  uVar9 = (this->fields).gameCoins.inited;
  uVar10 = *(undefined3 *)&(this->fields).gameCoins.field_0xd;
  uVar11 = CONCAT31(uVar10,uVar9);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    iVar6 = uVar8;
    uVar7 = uVar11;
  }
  value.fakeValue = iVar6;
  value._12_4_ = uVar7;
  iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
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
                       (this->fields).currentBoostMultiplier * iVar1 + iVar6,(MethodInfo *)0x0);
  this_00 = (this->fields).OnGameCoinAmountChange;
  iVar6 = pOVar12->currentCryptoKey;
  iVar1 = pOVar12->hiddenValue;
  iVar2 = pOVar12->fakeValue;
  uVar7 = *(undefined4 *)&pOVar12->inited;
  (this->fields).gameCoins.currentCryptoKey = iVar6;
  (this->fields).gameCoins.hiddenValue = iVar1;
  (this->fields).gameCoins.fakeValue = iVar2;
  *(undefined4 *)&(this->fields).gameCoins.inited = uVar7;
  if (this_00 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      func_?();
    }
    value_01._12_4_ = uVar7;
    value_01.currentCryptoKey = iVar6;
    value_01.hiddenValue = iVar1;
    value_01.fakeValue = iVar2;
    iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit_1(value_01,(MethodInfo *)0x0);
    if (this_00 == (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
      func_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    MVGameCoinManager+OnGameCoinAmountChangeDelegate::
    MVGameCoinManager_OnGameCoinAmountChangeDelegate_Invoke(this_00,iVar6,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (PrefabPool *)0x0) {
      this_03 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                          (this_02,(MethodInfo *)0x0);
      if (this_03 != (ObjectiveArrow *)0x0) {
        BoostController::BoostController_AllowBoost
                  ((BoostController *)this_03,BoostType__Enum_GameCoinsIntMultiplier,active,
                   (MethodInfo *)0x0);
        uVar1._0_1_ = (this->fields).isActive.currentCryptoKey;
        uVar1._1_3_ = *(undefined3 *)&(this->fields).isActive.field_0x1;
        uVar1._4_4_ = (this->fields).isActive.hiddenValue;
        uVar2 = (this->fields).isActive.fakeValue;
        uVar3 = (this->fields).isActive.fakeValueChanged;
        uVar4 = (this->fields).isActive.inited;
        uVar5 = (this->fields).isActive.field_0xb;
        value_00._11_1_ = uVar5;
        value_00.inited = uVar4;
        value_00.fakeValueChanged = uVar3;
        value_00.fakeValue = uVar2;
        uVar6._4_4_ = (undefined4)uVar1;
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
          puVar7 = &UNK_?;
          func_?();
          uVar1 = CONCAT44(puVar7,uVar6._4_4_);
        }
        value_00.currentCryptoKey = (char)uVar1;
        value_00._1_3_ = (int3)((ulonglong)uVar1 >> 8);
        value_00.hiddenValue = (int)((ulonglong)uVar1 >> 0x20);
        bVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                 ObscuredBool_op_Implicit_1(value_00,(MethodInfo *)0x0);
        if (active != bVar8) {
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0))
          {
            func_?();
          }
          pOVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool
                    ::ObscuredBool_op_Implicit
                              ((ObscuredBool *)&stack0xffffffe8,active,(MethodInfo *)0x0);
          uVar6._0_1_ = pOVar9->currentCryptoKey;
          uVar6._1_3_ = *(undefined3 *)&pOVar9->field_0x1;
          uVar6._4_4_ = pOVar9->hiddenValue;
          uVar10 = pOVar9->fakeValue;
          uVar11 = pOVar9->fakeValueChanged;
          uVar12 = pOVar9->inited;
          uVar13 = pOVar9->field_0xb;
          value._11_1_ = uVar13;
          value.inited = uVar12;
          value.fakeValueChanged = uVar11;
          value.fakeValue = uVar10;
          (this->fields).isActive.currentCryptoKey = (undefined1)uVar6;
          *(undefined3 *)&(this->fields).isActive.field_0x1 = uVar6._1_3_;
          (this->fields).isActive.hiddenValue = uVar6._4_4_;
          (this->fields).isActive.fakeValue = uVar10;
          (this->fields).isActive.fakeValueChanged = uVar11;
          (this->fields).isActive.inited = uVar12;
          (this->fields).isActive.field_0xb = uVar13;
          this_00 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                    (this->fields).OnActivationChange;
          uVar14 = (undefined4)uVar6;
          if (this_00 != (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
            if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals
                        .methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0
               )) {
              func_?();
              uVar6 = CONCAT44(uVar6._4_4_,uVar14);
            }
            value.currentCryptoKey = (char)uVar6;
            value._1_3_ = (int3)((ulonglong)uVar6 >> 8);
            value.hiddenValue = (int)((ulonglong)uVar6 >> 0x20);
            bVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredBool::ObscuredBool_op_Implicit_1(value,(MethodInfo *)0x0);
            if (this_00 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0)
            goto code_?;
            MVNetworkGame+OnMarketPlaceActionCompleteDelegate::
            MVNetworkGame_OnMarketPlaceActionCompleteDelegate_Invoke
                      (this_00,bVar8,(MethodInfo *)0x0);
          }
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_Initialize
               (MVGameCoinManager *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      this_02 = (SubscriptionRulesWrapper *)
                PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                          ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_01,
                           (MethodInfo *)0x0);
      if (this_02 != (SubscriptionRulesWrapper *)0x0) {
        bVar2 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_HasBenefit
                          (this_02,SubscriptionBenefit__Enum_GameCoinBoost,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
          bVar2 = 0x16;
          func_?();
        }
        pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                 ObscuredBool_op_Implicit((ObscuredBool *)&stack0xffffffec,bVar2,(MethodInfo *)0x0);
        uVar4._0_1_ = pOVar3->currentCryptoKey;
        uVar4._1_3_ = *(undefined3 *)&pOVar3->field_0x1;
        uVar4._4_4_ = pOVar3->hiddenValue;
        uVar5 = pOVar3->fakeValue;
        uVar6 = pOVar3->fakeValueChanged;
        uVar7 = pOVar3->inited;
        uVar8 = pOVar3->field_0xb;
        this._3_1_ = uVar8;
        this._2_1_ = uVar7;
        this._1_1_ = uVar6;
        this._0_1_ = uVar5;
        (this_00->fields).boostEnabled.currentCryptoKey = (undefined1)uVar4;
        *(undefined3 *)&(this_00->fields).boostEnabled.field_0x1 = uVar4._1_3_;
        (this_00->fields).boostEnabled.hiddenValue = uVar4._4_4_;
        (this_00->fields).boostEnabled.fakeValue = uVar5;
        (this_00->fields).boostEnabled.fakeValueChanged = uVar6;
        (this_00->fields).boostEnabled.inited = uVar7;
        (this_00->fields).boostEnabled.field_0xb = uVar8;
        uVar9 = (undefined4)uVar4;
        iVar10 = uVar4._4_4_;
        value = (ObscuredBool)CONCAT84(uVar11,uVar9);
        bVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
                ObscuredBool_op_Implicit_1(value,(MethodInfo *)0x0);
        MVGameCoinManager_OnGameBoostChanged(this_00,bVar2,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pPVar12 = (PrefabPool *)
                    MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if (pPVar12 != (PrefabPool *)0x0) {
            pOVar13 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                (pPVar12,(MethodInfo *)0x0);
            this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_03,(Object *)this_00,
                       MethodInfo__MVGameCoinManager__OnGameCoinBoostChanged__,(MethodInfo *)0x0);
            if (pOVar13 != (ObjectiveArrow *)0x0) {
              BoostController::BoostController_SubscribeToBoostChanged
                        ((BoostController *)pOVar13,BoostType__Enum_GameCoinsIntMultiplier,
                         (Action *)this_03,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              (this_00->fields).currentBoostMultiplier = 1;
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar1 != (MVNetworkGame *)0x0) {
                pPVar12 = (PrefabPool *)
                          MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
                if (pPVar12 != (PrefabPool *)0x0) {
                  pOVar13 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                      (pPVar12,(MethodInfo *)0x0);
                  if (pOVar13 != (ObjectiveArrow *)0x0) {
                    bVar2 = BoostController::BoostController_TryGetActiveBoost
                                      ((BoostController *)pOVar13,
                                       BoostType__Enum_GameCoinsIntMultiplier,
                                       (Boost **)&stack0xfffffff8,(MethodInfo *)0x0);
                    if (bVar2 != 0) {
                      (this_00->fields).currentBoostMultiplier = 2;
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void LateInitialize() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_LateInitialize
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (MVAvatar *)0x0) {
    pMVar1 = MVAvatar::MVAvatar_get_Shield(this_02,(MethodInfo *)0x0);
    if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      pDVar2 = *(Delegate **)&(pMVar1->fields)._._.writeThrough;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,MethodInfo__MVGameCoinManager__LateInitialize__,
                 (MethodInfo *)0x0);
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                          (pDVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pDVar4 = (Delegate *)0x0;
      if (pDVar2 == (Delegate *)0x0) {
code_?:
        *(Delegate **)&(pMVar1->fields)._._.writeThrough = pDVar4;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar5 != (MVNetworkGame *)0x0) {
          this_00 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
          if (this_00 != (MVLocalPlayer *)0x0) {
            this_01 = (SubscriptionRulesWrapper *)
                      PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                      PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_00,
                                 (MethodInfo *)0x0);
            if (this_01 != (SubscriptionRulesWrapper *)0x0) {
              in_stack_6 = (Delegate *)0x0;
              in_stack_7 = (MethodInfo *)0x2;
              bVar8 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                      SubscriptionRulesWrapper_HasBenefit
                                (this_01,SubscriptionBenefit__Enum_GameCoinBoost,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).
                          Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started ==
                  0)) {
                bVar8 = 0x16;
                func_?();
              }
              in_stack_9 = (Action__Class *)&stack0x00000014;
              in_stack_6 = (Delegate *)&UNK_?;
              pOVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredBool::ObscuredBool_op_Implicit
                                 ((ObscuredBool *)in_stack_9,bVar8,(MethodInfo *)0x0);
              uVar11 = *(undefined3 *)&pOVar10->field_0x1;
              iVar12 = pOVar10->hiddenValue;
              bVar8 = pOVar10->fakeValue;
              bVar13 = pOVar10->fakeValueChanged;
              bVar14 = pOVar10->inited;
              uVar15 = pOVar10->field_0xb;
              value = *pOVar10;
              (in_stack_16->fields).boostEnabled.currentCryptoKey = pOVar10->currentCryptoKey;
              *(undefined3 *)&(in_stack_16->fields).boostEnabled.field_0x1 = uVar11;
              (in_stack_16->fields).boostEnabled.hiddenValue = iVar12;
              (in_stack_16->fields).boostEnabled.fakeValue = bVar8;
              (in_stack_16->fields).boostEnabled.fakeValueChanged = bVar13;
              (in_stack_16->fields).boostEnabled.inited = bVar14;
              (in_stack_16->fields).boostEnabled.field_0xb = uVar15;
              bVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredBool::ObscuredBool_op_Implicit_1(value,(MethodInfo *)0x0);
              MVGameCoinManager_OnGameBoostChanged(in_stack_16,bVar8,(MethodInfo *)0x0);
              pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar5 != (MVNetworkGame *)0x0) {
                pPVar17 = (PrefabPool *)
                          MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
                if (pPVar17 != (PrefabPool *)0x0) {
                  pOVar18 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                      (pPVar17,(MethodInfo *)0x0);
                  pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?();
                  in_stack_6 = (Delegate *)0x0;
                  in_stack_7 = MethodInfo__MVGameCoinManager__OnGameCoinBoostChanged__;
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar3,(Object *)in_stack_16,
                             MethodInfo__MVGameCoinManager__OnGameCoinBoostChanged__,
                             (MethodInfo *)0x0);
                  if (pOVar18 != (ObjectiveArrow *)0x0) {
                    BoostController::BoostController_SubscribeToBoostChanged
                              ((BoostController *)pOVar18,BoostType__Enum_GameCoinsIntMultiplier,
                               (Action *)pUVar3,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    (in_stack_16->fields).currentBoostMultiplier = 1;
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      func_?();
                    }
                    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                    if (pMVar5 != (MVNetworkGame *)0x0) {
                      pPVar17 = (PrefabPool *)
                                MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar5,(MethodInfo *)0x0);
                      if (pPVar17 != (PrefabPool *)0x0) {
                        pOVar18 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                            (pPVar17,(MethodInfo *)0x0);
                        if (pOVar18 != (ObjectiveArrow *)0x0) {
                          bVar8 = BoostController::BoostController_TryGetActiveBoost
                                            ((BoostController *)pOVar18,
                                             BoostType__Enum_GameCoinsIntMultiplier,
                                             (Boost **)&stack0x00000020,(MethodInfo *)0x0);
                          if (bVar8 != 0) {
                            (in_stack_16->fields).currentBoostMultiplier = 2;
                          }
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        func_?();
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
        pDVar4 = pDVar2;
      }
      pAVar20 = TypeInfo__System__Action;
      if (pDVar4 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
  pDVar2 = extraout_ECX;
  pAVar20 = extraout_EDX;
code_?:
  in_stack_7 = (MethodInfo *)&UNK_?;
  in_stack_6 = pDVar2;
  in_stack_9 = pAVar20;
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnGameBoostChanged(Boolean) */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_OnGameBoostChanged
               (MVGameCoinManager *this,bool boostEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
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
    this_00 = (Action_1_UIPushOption_ *)(this->fields).BoostStateChanged;
    if (this_00 != (Action_1_UIPushOption_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                (this_00,_boostEnabled,MethodInfo__System__Action<bool>__Invoke_bool_);
    }
    return;
  }
  auStack_2._4_4_ = AVar9;
  auStack_2._8_4_ = AVar10;
  pBStack_14 = pBVar11;
  puStack_15 = puVar12;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValue.b1 = auStack_2[8];
  value.hiddenValue.b2 = auStack_2[9];
  value.hiddenValue.b3 = auStack_2[10];
  value.hiddenValue.b4 = auStack_2[0xb];
  value.currentCryptoKey = auStack_2._4_4_;
  value.hiddenValueOld = pBStack_14;
  value.fakeValue = (float)puStack_15;
  value.inited = (this->fields).interval.inited;
  value._17_3_ = *(undefined3 *)&(this->fields).interval.field_0x11;
  fVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      this_03 = (SubscriptionRulesWrapper *)
                PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                          ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_02,
                           (MethodInfo *)0x0);
      if (this_03 != (SubscriptionRulesWrapper *)0x0) {
        this_04 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                  SubscriptionRulesWrapper_GetRule_2
                            (this_03,SubscriptionBenefit__Enum_GameCoinBoost,
                             MV__WorldObject__Subscription__SubscriptionRules__GameCoinBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::GameCoinBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                            );
        if (this_04 != (XpBooster *)0x0) {
          iVar4 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::
                  GameCoinBooster::GameCoinBooster_GetBoostedGameCoins
                            ((GameCoinBooster *)this_04,1,(MethodInfo *)0x0);
          pOVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                   ::ObscuredFloat_op_Implicit
                             ((ObscuredFloat *)auStack_2,fVar16 / (float)iVar4,(MethodInfo *)0x0);
          AVar9 = (ACTkByte4)pOVar17->currentCryptoKey;
          AVar10 = pOVar17->hiddenValue;
          pBVar11 = pOVar17->hiddenValueOld;
          puVar12 = (undefined *)pOVar17->fakeValue;
          uVar13 = *(undefined4 *)&pOVar17->inited;
          goto code_?;
        }
      }
    }
  }
  func_?(0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnGameCoinBoostChanged() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_OnGameCoinBoostChanged
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).currentBoostMultiplier = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (PrefabPool *)0x0) {
      this_02 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                          (this_01,(MethodInfo *)0x0);
      if (this_02 != (ObjectiveArrow *)0x0) {
        bVar1 = BoostController::BoostController_TryGetActiveBoost
                          ((BoostController *)this_02,BoostType__Enum_GameCoinsIntMultiplier,
                           (Boost **)&stack0xfffffff8,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          (this->fields).currentBoostMultiplier = 2;
        }
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReportPickupChangeInEditor() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_ReportPickupChangeInEditor
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                       (pMVar1,WorldObjectType__Enum_GameCoin,(MethodInfo *)0x0);
    if (pLVar2 != (List_1_MVWorldObjectClient_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                           (pMVar1,WorldObjectType__Enum_GameCoinChest,(MethodInfo *)0x0);
        this_00 = MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__;
        if (pLVar2 != (List_1_MVWorldObjectClient_ *)0x0) {
          pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                             );
          pIVar5 = this_00[3].methodPointer;
          pIVar6 = this_00[3].virtualMethodPointer;
          this = (MVGameCoinManager *)this_00[3].invoker_method;
          method = (MethodInfo *)this_00[3].name;
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0))
          {
            pOStack7 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
            func_?();
          }
          pOStack7 = (ObscuredInt__Class *)0x0;
          iVar8 = (int32_t)pIVar6;
          value.currentCryptoKey = (int32_t)pIVar5;
          value = (ObscuredInt)CONCAT124(auVar9,value.currentCryptoKey);
          iVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                  ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
          if (((iVar10 < 1) && ((int)pOVar3 < 1)) && ((int)pOVar4 < 1)) {
            MVGameCoinManager_HandleActivationChange
                      ((MVGameCoinManager *)this_00,0,(MethodInfo *)0x0);
            return;
          }
          MVGameCoinManager_HandleActivationChange((MVGameCoinManager *)this_00,1,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ReportPurchaseAmountInEditor(Int32) */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_ReportPurchaseAmountInEditor
               (MVGameCoinManager *this,int32_t amount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  OStack_1.currentCryptoKey = (this->fields).totalPurchaseAmount.currentCryptoKey;
  OStack_1.hiddenValue = (this->fields).totalPurchaseAmount.hiddenValue;
  OStack_1.fakeValue = (this->fields).totalPurchaseAmount.fakeValue;
  OStack_1.inited = (this->fields).totalPurchaseAmount.inited;
  OStack_1._13_3_ = *(undefined3 *)&(this->fields).totalPurchaseAmount.field_0xd;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
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
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?();
  }
  pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,0,(MethodInfo *)0x0);
  this_00 = (this->fields).OnGameCoinAmountChange;
  AVar3 = (ACTkByte4)pOVar7->currentCryptoKey;
  pBVar4 = (Byte__Array *)pOVar7->hiddenValue;
  puVar8 = (undefined *)pOVar7->fakeValue;
  pOVar9 = *(ObscuredInt__Class **)&pOVar7->inited;
  (this->fields).gameCoins.currentCryptoKey = (int32_t)AVar3;
  (this->fields).gameCoins.hiddenValue = (int32_t)pBVar4;
  (this->fields).gameCoins.fakeValue = (int32_t)puVar8;
  *(ObscuredInt__Class **)&(this->fields).gameCoins.inited = pOVar9;
  if (this_00 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      puVar8 = &UNK_?;
      pOVar9 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
      func_?();
    }
    value.hiddenValue = (int32_t)pBVar4;
    value.currentCryptoKey._0_1_ = AVar3.b1;
    value.currentCryptoKey._1_1_ = AVar3.b2;
    value.currentCryptoKey._2_1_ = AVar3.b3;
    value.currentCryptoKey._3_1_ = AVar3.b4;
    value.fakeValue = (int32_t)puVar8;
    value._12_4_ = pOVar9;
    amount = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
    if (this_00 == (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) goto code_?;
    MVGameCoinManager+OnGameCoinAmountChangeDelegate::
    MVGameCoinManager_OnGameCoinAmountChangeDelegate_Invoke(this_00,amount,(MethodInfo *)0x0);
  }
  this_01 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)(this->fields).OnActivationChange;
  if (this_01 != (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
    uVar10._0_1_ = (this->fields).isActive.currentCryptoKey;
    uVar10._1_3_ = *(undefined3 *)&(this->fields).isActive.field_0x1;
    uVar10._4_4_ = (this->fields).isActive.hiddenValue;
    uVar11 = (this->fields).isActive.fakeValue;
    uVar12 = (this->fields).isActive.fakeValueChanged;
    uVar13 = (this->fields).isActive.inited;
    uVar14 = (this->fields).isActive.field_0xb;
    value_00._11_1_ = uVar14;
    value_00.inited = uVar13;
    value_00.fakeValueChanged = uVar12;
    value_00.fakeValue = uVar11;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
      puVar8 = &UNK_?;
      pOVar15 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
      func_?();
      uVar10 = CONCAT44(pOVar15,puVar8);
    }
    value_00.currentCryptoKey = (char)uVar10;
    value_00._1_3_ = (int3)((ulonglong)uVar10 >> 8);
    value_00.hiddenValue = (int)((ulonglong)uVar10 >> 0x20);
    bVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_op_Implicit_1(value_00,(MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
code_?:
      func_?();
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    MVNetworkGame+OnMarketPlaceActionCompleteDelegate::
    MVNetworkGame_OnMarketPlaceActionCompleteDelegate_Invoke(this_01,bVar5,(MethodInfo *)0x0);
  }
  return;
}


/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager_Update
               (MVGameCoinManager *this,MVNetworkGame *game,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = *(undefined8 *)&(this->fields).isActive;
  uVar3 = (this->fields).isActive.fakeValue;
  uVar4 = (this->fields).isActive.fakeValueChanged;
  uVar5 = (this->fields).isActive.inited;
  uVar6 = (this->fields).isActive.field_0xb;
  value_01._11_1_ = uVar6;
  value_01.inited = uVar5;
  value_01.fakeValueChanged = uVar4;
  value_01.fakeValue = uVar3;
  auVar7._8_4_ = unaff_EBP;
  auVar7._0_4_ = (int32_t)uVar2;
  auVar7[4] = SUB81(uVar2,4);
  auVar7._5_3_ = SUB83(uVar2,5);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    uVar2 = auVar7._0_8_;
  }
  value_01._0_8_ = uVar2;
  bVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
           ObscuredBool_op_Implicit_1(value_01,(MethodInfo *)0x0);
  if (bVar8 != 0) {
    if (game == (MVNetworkGame *)0x0) {
code_?:
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    bVar8 = MVNetworkGame::MVNetworkGame_get_IsPlaying(game,(MethodInfo *)0x0);
    if (bVar8 != 0) {
      this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)game,(MethodInfo *)0x0);
      if (this_01 ==
          (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
           *)0x0) goto code_?;
      auVar10._4_8_ = 0;
      auVar10._0_4_ = this_01;
      auVar10 = auVar10 << 0x20;
      pOVar11 = System.dll::System::Collections::Generic::
                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                ::Single,System::Object]::
                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                          (this_01,(MethodInfo *)0x0);
      if (pOVar11 == (Object *)0x1) {
        UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        AVar12 = (ACTkByte4)(this->fields).startTime.currentCryptoKey;
        AVar13 = (this->fields).startTime.hiddenValue;
        pBVar14 = (this->fields).startTime.hiddenValueOld;
        fVar15 = (this->fields).startTime.fakeValue;
        uVar16 = (this->fields).startTime.hiddenValueOld;
        uVar17 = (this->fields).startTime.fakeValue;
        auVar18._4_4_ = uVar17;
        auVar18._0_4_ = uVar16;
        this = *(MVGameCoinManager **)&(this->fields).startTime.inited;
        auVar18._8_4_ = auVar10._8_4_;
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0))
        {
          func_?();
          pBVar14 = auVar18._0_4_;
          fVar15 = auVar18._4_4_;
        }
        auVar19[4] = AVar13.b1;
        auVar19[5] = AVar13.b2;
        auVar19[6] = AVar13.b3;
        auVar19[7] = AVar13.b4;
        auVar19[0] = AVar12.b1;
        auVar19[1] = AVar12.b2;
        auVar19[2] = AVar12.b3;
        auVar19[3] = AVar12.b4;
        auVar19._8_4_ = pBVar14;
        fVar20 = fVar15;
        iVar21 = auVar19._0_4_;
        stack0xfffffff8 = AVar13.b1;
        stack0xfffffff9 = AVar13.b2;
        stack0xfffffffa = AVar13.b3;
        stack0xfffffffb = AVar13.b4;
        stack0xfffffffc = pBVar14;
        value_02 = (ObscuredFloat)CONCAT812(uVar22,auVar23);
        fVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_op_Implicit_1(value_02,(MethodInfo *)0x0);
        uVar24 = auVar19._8_4_;
        fVar25 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_op_Implicit_1((pMVar1->fields).boostedInterval,(MethodInfo *)0x0);
        if ((float)this - fVar15 <= fVar25) {
          return;
        }
        AVar12 = (ACTkByte4)(pMVar1->fields).gameCoins.currentCryptoKey;
        pBVar14 = (Byte__Array *)(pMVar1->fields).gameCoins.hiddenValue;
        fVar15 = (float)(pMVar1->fields).gameCoins.fakeValue;
        uVar26._0_1_ = (pMVar1->fields).gameCoins.inited;
        uVar26._1_3_ = *(undefined3 *)&(pMVar1->fields).gameCoins.field_0xd;
        uVar27 = (pMVar1->fields).gameCoins.fakeValue;
        uVar28 = (pMVar1->fields).gameCoins.inited;
        uVar29 = *(undefined3 *)&(pMVar1->fields).gameCoins.field_0xd;
        auVar30._5_3_ = uVar29;
        auVar30[4] = uVar28;
        auVar30._0_4_ = uVar27;
        auVar30._8_4_ = uVar24;
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
          func_?();
          fVar15 = auVar30._0_4_;
          uVar26 = auVar30._4_4_;
        }
        value.hiddenValue = (int32_t)pBVar14;
        value.currentCryptoKey._0_1_ = AVar12.b1;
        value.currentCryptoKey._1_1_ = AVar12.b2;
        value.currentCryptoKey._2_1_ = AVar12.b3;
        value.currentCryptoKey._3_1_ = AVar12.b4;
        value.fakeValue = (int32_t)fVar15;
        value.inited = (bool)uVar26;
        value._13_3_ = SUB43(uVar26,1);
        iVar31 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                 ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
        iVar32 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                 ObscuredInt_op_Implicit_1((pMVar1->fields).intervalAmount,(MethodInfo *)0x0);
        pOVar33 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                  ObscuredInt_op_Implicit
                            ((ObscuredInt *)&stack0xffffffec,
                             (pMVar1->fields).currentBoostMultiplier * iVar32 + iVar31,
                             (MethodInfo *)0x0);
        this_00 = (pMVar1->fields).OnGameCoinAmountChange;
        AVar12 = (ACTkByte4)pOVar33->currentCryptoKey;
        pBVar14 = (Byte__Array *)pOVar33->hiddenValue;
        fVar15 = (float)pOVar33->fakeValue;
        uVar24._0_1_ = pOVar33->inited;
        uVar24._1_3_ = *(undefined3 *)&pOVar33->field_0xd;
        uVar34 = pOVar33->fakeValue;
        uVar35 = pOVar33->inited;
        uVar36 = *(undefined3 *)&pOVar33->field_0xd;
        auVar37._5_3_ = uVar36;
        auVar37[4] = uVar35;
        auVar37._0_4_ = uVar34;
        auVar37._8_4_ = auVar30._8_4_;
        (pMVar1->fields).gameCoins.currentCryptoKey = (int32_t)AVar12;
        (pMVar1->fields).gameCoins.hiddenValue = (int32_t)pBVar14;
        (pMVar1->fields).gameCoins.fakeValue = (int32_t)fVar15;
        (pMVar1->fields).gameCoins.inited = (bool)uVar24;
        *(undefined3 *)&(pMVar1->fields).gameCoins.field_0xd = uVar24._1_3_;
        if (this_00 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0))
          {
            func_?();
            fVar15 = auVar37._0_4_;
            uVar24 = auVar37._4_4_;
          }
          value_00.hiddenValue = (int32_t)pBVar14;
          value_00.currentCryptoKey._0_1_ = AVar12.b1;
          value_00.currentCryptoKey._1_1_ = AVar12.b2;
          value_00.currentCryptoKey._2_1_ = AVar12.b3;
          value_00.currentCryptoKey._3_1_ = AVar12.b4;
          value_00.fakeValue = (int32_t)fVar15;
          value_00.inited = (bool)uVar24;
          value_00._13_3_ = SUB43(uVar24,1);
          iVar31 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                   ObscuredInt_op_Implicit_1(value_00,(MethodInfo *)0x0);
          if (this_00 == (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0)
          goto code_?;
          MVGameCoinManager+OnGameCoinAmountChangeDelegate::
          MVGameCoinManager_OnGameCoinAmountChangeDelegate_Invoke(this_00,iVar31,(MethodInfo *)0x0);
        }
      }
    }
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?();
    }
    pOVar38 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,fVar15,(MethodInfo *)0x0);
    AVar12 = pOVar38->hiddenValue;
    pBVar14 = pOVar38->hiddenValueOld;
    fVar15 = pOVar38->fakeValue;
    bVar8 = pOVar38->inited;
    uVar39 = *(undefined3 *)&pOVar38->field_0x11;
    (pMVar1->fields).startTime.currentCryptoKey = pOVar38->currentCryptoKey;
    (pMVar1->fields).startTime.hiddenValue = AVar12;
    (pMVar1->fields).startTime.hiddenValueOld = pBVar14;
    (pMVar1->fields).startTime.fakeValue = fVar15;
    (pMVar1->fields).startTime.inited = bVar8;
    *(undefined3 *)&(pMVar1->fields).startTime.field_0x11 = uVar39;
  }
  return;
}


/* MVGameCoinManager() */

void Assembly-CSharp.dll::MVGameCoinManager::MVGameCoinManager__ctor
               (MVGameCoinManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
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
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
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
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
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
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,in_stack_14);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar15 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar15 != (MVAvatar *)0x0) {
    pMVar16 = MVAvatar::MVAvatar_get_Shield(pMVar15,(MethodInfo *)0x0);
    if (pMVar16 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      iVar8 = MVPlayerContainer::MVPlayerContainer_get_Count
                         ((MVPlayerContainer *)pMVar16,(MethodInfo *)0x0);
      if (iVar8 == 0) {
code_?:
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar15 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
        ;
        if (pMVar15 != (MVAvatar *)0x0) {
          pMVar16 = MVAvatar::MVAvatar_get_Shield(pMVar15,(MethodInfo *)0x0);
          if (pMVar16 != (MVRuntimeDataVariableClampedFloat *)0x0) {
            pDVar17 = *(Delegate **)&(pMVar16->fields)._._.writeThrough;
            this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_02,(Object *)this,MethodInfo__MVGameCoinManager__LateInitialize__,
                       (MethodInfo *)0x0);
            pDStack18 =
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar17,(Delegate *)this_02,(MethodInfo *)0x0);
            pDVar17 = (Delegate *)0x0;
            if (pDStack18 == (Delegate *)0x0) {
code_?:
              *(Delegate **)&(pMVar16->fields)._._.writeThrough = pDVar17;
              return;
            }
            if ((Action__Class *)pDStack18->klass == TypeInfo__System__Action) {
              pDVar17 = pDStack18;
            }
            pAStack19 = TypeInfo__System__Action;
            if (pDVar17 != (Delegate *)0x0) goto code_?;
            goto code_?;
          }
        }
      }
      else {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_00 != (MVNetworkGame *)0x0) {
          this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
          if (this_01 != (MVLocalPlayer *)0x0) {
            bVar5 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_01,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              MVGameCoinManager_Initialize(this,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
  pDStack18 = extraout_ECX;
  pAStack19 = extraout_EDX;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = (this->fields).isActive;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = (this->fields).boostEnabled;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = (this->fields).gameCoins;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = (this->fields).totalPurchaseAmount;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  return iVar1;
}

