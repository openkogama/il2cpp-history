
/* MVLocalPlayerTourist(Int32, Int32, String, Int32, UserProfileData) */

void Assembly-CSharp.dll::MVLocalPlayerTourist::MVLocalPlayerTourist__ctor
               (MVLocalPlayerTourist *this,int32_t actorNumber,int32_t profileID,String *regionCode,
               int32_t planetOwnershipTypeID,UserProfileData *userProfileData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BoostController);
    func_?(&MethodInfo__MVLocalPlayer__OnLevelChangedLocal_int_);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&
                    TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&TypeInfo__WorldObjectTypes__Avatar__Local__WorldObjectUseRequirementTracker);
    cRam_? = '\x01';
  }
  this_00 = (BoostController *)func_?(TypeInfo__BoostController);
  this_03 = (UnityAction_1_System_Int32Enum_ *)0x0;
  if (this_00 != (BoostController *)0x0) {
    BoostController::BoostController__ctor(this_00,(MethodInfo *)0x0);
    (this->fields)._.boostController = this_00;
    func_?(&(this->fields)._.boostController,this_00);
    (this->fields)._.defaultBodyWoId = -1;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_op_Implicit((ObscuredInt *)auStack_2,-0xe91,(MethodInfo *)0x0);
    iVar3 = pOVar1->hiddenValue;
    iVar4 = pOVar1->fakeValue;
    bVar5 = pOVar1->inited;
    uVar6 = *(undefined3 *)&pOVar1->field_0xd;
    (this->fields)._.numberOfTimesDiedInRound.currentCryptoKey = pOVar1->currentCryptoKey;
    (this->fields)._.numberOfTimesDiedInRound.hiddenValue = iVar3;
    (this->fields)._.numberOfTimesDiedInRound.fakeValue = iVar4;
    (this->fields)._.numberOfTimesDiedInRound.inited = bVar5;
    *(undefined3 *)&(this->fields)._.numberOfTimesDiedInRound.field_0xd = uVar6;
    this_01 = (SpawnRoleDataMediator *)
              func_?(
                             TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                             );
    this_03 = (UnityAction_1_System_Int32Enum_ *)0x0;
    if (this_01 != (SpawnRoleDataMediator *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
      SpawnRoleDataMediator__ctor(this_01,(MethodInfo *)0x0);
      (this->fields)._.spawnRoleDataMediator = this_01;
      func_?(&(this->fields)._.spawnRoleDataMediator,this_01);
      this_02 = (WorldObjectUseRequirementTracker *)
                func_?(
                               TypeInfo__WorldObjectTypes__Avatar__Local__WorldObjectUseRequirementTracker
                               );
      this_03 = (UnityAction_1_System_Int32Enum_ *)0x0;
      if (this_02 != (WorldObjectUseRequirementTracker *)0x0) {
        WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
        WorldObjectUseRequirementTracker__ctor(this_02,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)
                    &(this->fields)._._WorldObjectUseRequirementTracker_k__BackingField;
        (this->fields)._._WorldObjectUseRequirementTracker_k__BackingField = this_02;
        func_?(method_00,this_02);
        bVar5 = System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[System
                ::Single,System::Object]::
                SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__get_IsReadOnly
                          ((SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ *)0x0,
                           method_00);
        BStack_7 = CONCAT31(BStack_7._1_3_,bVar5);
        MVPlayer::MVPlayer__ctor
                  ((MVPlayer *)this,actorNumber,profileID,regionCode,BStack_7,userProfileData,0,0,
                   (MethodInfo *)0x0);
        unaff_EBX = (UnityAction_1_System_Int32___Class *)(this->fields)._._.OnLevelChanged;
        this_03 = (UnityAction_1_System_Int32Enum_ *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
        if (this_03 != (UnityAction_1_System_Int32Enum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_03,(Object *)this,MethodInfo__MVLocalPlayer__OnLevelChangedLocal_int_,
                     (MethodInfo *)0x0);
          pUVar8 = (UnityAction_1_System_Int32___Class *)0x0;
          pUVar9 = this_03;
          this_03 = (UnityAction_1_System_Int32Enum_ *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)unaff_EBX,(Delegate *)this_03,(MethodInfo *)0x0);
          unaff_EBX = TypeInfo__UnityEngine__Events__UnityAction<int>;
          if (this_03 == (UnityAction_1_System_Int32Enum_ *)0x0) {
            (this->fields)._._.OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
            auStack_2._12_4_ = 0;
          }
          else {
            auStack_2._12_4_ = TypeInfo__UnityEngine__Events__UnityAction<int>;
            auStack_2._4_4_ = &UNK_?;
            auStack_2._8_4_ = this_03;
            pUVar10 = (UnityAction_1_System_Int32_ *)func_?();
            if (pUVar10 == (UnityAction_1_System_Int32_ *)0x0) goto code_?;
            (this->fields)._._.OnLevelChanged = pUVar10;
            unaff_EBX = TypeInfo__UnityEngine__Events__UnityAction<int>;
            auStack_2._12_4_ = TypeInfo__UnityEngine__Events__UnityAction<int>;
            auStack_2._4_4_ = &UNK_?;
            auStack_2._8_4_ = this_03;
            auStack_2._12_4_ = func_?();
            if (auStack_2._12_4_ == 0) goto code_?;
          }
          unaff_EBX = pUVar8;
          this_03 = pUVar9;
          auStack_2._8_4_ = &(this->fields)._._.OnLevelChanged;
          auStack_2._4_4_ = &UNK_?;
          func_?();
          (this->fields)._.planetOwnershipTypeID = planetOwnershipTypeID;
          this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_04 != (MVNetworkGame *)0x0) {
            iVar3 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                              (this_04,(MethodInfo *)0x0);
            (this->fields)._.joinTime = iVar3;
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  auStack_2._4_4_ = &UNK_?;
  auStack_2._8_4_ = this_03;
  auStack_2._12_4_ = unaff_EBX;
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

