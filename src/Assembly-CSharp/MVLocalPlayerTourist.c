
/* MVLocalPlayerTourist(Int32, Int32, String, Int32, UserProfileData) */

void Assembly-CSharp.dll::MVLocalPlayerTourist::MVLocalPlayerTourist__ctor
               (MVLocalPlayerTourist *this,int32_t actorNumber,int32_t profileID,String *regionCode,
               int32_t planetOwnershipTypeID,UserProfileData *userProfileData,MethodInfo *method)

{
  this_00 = this;
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
  this_01 = (BoostController *)func_?(TypeInfo__BoostController);
  BoostController::BoostController__ctor(this_01,(MethodInfo *)0x0);
  ppBVar1 = &(this->fields)._.boostController;
  *ppBVar1 = this_01;
  func_?(ppBVar1,this_01);
  (this->fields)._.defaultBodyWoId = -1;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_3,-0xe91,(MethodInfo *)0x0);
  iVar4 = pOVar2->hiddenValue;
  iVar5 = pOVar2->fakeValue;
  bVar6 = pOVar2->inited;
  uVar7 = *(undefined3 *)&pOVar2->field_0xd;
  (this->fields)._.numberOfTimesDiedInRound.currentCryptoKey = pOVar2->currentCryptoKey;
  (this->fields)._.numberOfTimesDiedInRound.hiddenValue = iVar4;
  (this->fields)._.numberOfTimesDiedInRound.fakeValue = iVar5;
  (this->fields)._.numberOfTimesDiedInRound.inited = bVar6;
  *(undefined3 *)&(this->fields)._.numberOfTimesDiedInRound.field_0xd = uVar7;
  this_02 = (SpawnRoleDataMediator *)
            func_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                           );
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
  SpawnRoleDataMediator__ctor(this_02,(MethodInfo *)0x0);
  ppSVar8 = &(this->fields)._.spawnRoleDataMediator;
  *ppSVar8 = this_02;
  func_?(ppSVar8,this_02);
  this_03 = (WorldObjectUseRequirementTracker *)
            func_?(
                           TypeInfo__WorldObjectTypes__Avatar__Local__WorldObjectUseRequirementTracker
                           );
  WorldObjectTypes::Avatar::Local::WorldObjectUseRequirementTracker::
  WorldObjectUseRequirementTracker__ctor(this_03,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&(this->fields)._._WorldObjectUseRequirementTracker_k__BackingField;
  *(WorldObjectUseRequirementTracker **)method_00 = this_03;
  func_?(method_00,this_03);
  bVar6 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          VerticalVirtualizationController`1[System::Object]::
          VerticalVirtualizationController_1_System_Object__get_alwaysRebindOnRefresh
                    ((VerticalVirtualizationController_1_System_Object_ *)0x0,method_00);
  this = (MVLocalPlayerTourist *)CONCAT31(this._1_3_,bVar6);
  MVPlayer::MVPlayer__ctor
            ((MVPlayer *)this_00,actorNumber,profileID,regionCode,(BuildTarget__Enum)this,
             userProfileData,0,0,(MethodInfo *)0x0);
  pUVar9 = (this_00->fields)._._.OnLevelChanged;
  pUStack10 = TypeInfo__UnityEngine__Events__UnityAction<int>;
  this_04 = (UnityAction_1_System_Int32Enum_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_04,(Object *)this_00,MethodInfo__MVLocalPlayer__OnLevelChangedLocal_int_,
             (MethodInfo *)0x0);
  pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar9,(Delegate *)this_04,(MethodInfo *)0x0);
  pUVar12 = TypeInfo__UnityEngine__Events__UnityAction<int>;
  if (pDVar11 == (Delegate *)0x0) {
    (this_00->fields)._._.OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
    pUStack13 = (UnityAction_1_System_Int32___Class *)0x0;
code_?:
    pDStack14 = (Delegate *)&(this_00->fields)._._.OnLevelChanged;
    func_?();
    (this_00->fields)._.planetOwnershipTypeID = planetOwnershipTypeID;
    this_05 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_05 != (MVNetworkGame *)0x0) {
      iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_05,(MethodInfo *)0x0);
      (this_00->fields)._.joinTime = iVar4;
      return;
    }
  }
  else {
    pUStack13 = TypeInfo__UnityEngine__Events__UnityAction<int>;
    pDStack14 = pDVar11;
    pUVar9 = (UnityAction_1_System_Int32_ *)func_?();
    if (pUVar9 != (UnityAction_1_System_Int32_ *)0x0) {
      (this_00->fields)._._.OnLevelChanged = pUVar9;
      pUStack13 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      this = (MVLocalPlayerTourist *)TypeInfo__UnityEngine__Events__UnityAction<int>;
      pDStack14 = pDVar11;
      pUStack13 = (UnityAction_1_System_Int32___Class *)func_?();
      if (pUStack13 == (UnityAction_1_System_Int32___Class *)0x0) goto code_?;
      goto code_?;
    }
    pUStack13 = pUVar12;
    pDStack14 = pDVar11;
    func_?();
  }
  func_?();
code_?:
  pUStack13 = (UnityAction_1_System_Int32___Class *)this;
  pDStack14 = pDVar11;
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

