
/* MVLocalPlayerTourist(Int32, Int32, String, Int32, UserProfileData) */

void Assembly-CSharp.dll::MVLocalPlayerTourist::MVLocalPlayerTourist__ctor
               (MVLocalPlayerTourist *this,int32_t actorNumber,int32_t profileID,String *regionCode,
               int32_t planetOwnershipTypeID,UserProfileData *userProfileData,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_02 = (BoostController *)func_?(TypeInfo__BoostController);
  BoostController::BoostController__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._.boostController = this_02;
  (this->fields)._.defaultBodyWoId = -1;
  this_03 = (SpawnRoleDataMediator *)
            func_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                           );
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
  SpawnRoleDataMediator__ctor(this_03,(MethodInfo *)0x0);
  (this->fields)._.spawnRoleDataMediator = this_03;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[VoxelHit]::
          ReadOnlyCollection_1_VoxelHit__System_Collections_IList_get_IsReadOnly
                    ((ReadOnlyCollection_1_VoxelHit_ *)0x0,unaff_retaddr);
  this = (MVLocalPlayerTourist *)CONCAT31(this._1_3_,bVar1);
  MVPlayer::MVPlayer__ctor
            ((MVPlayer *)this_01,actorNumber,profileID,regionCode,(BuildTarget__Enum)this,
             userProfileData,0,(MethodInfo *)0x0);
  pUVar2 = (this_01->fields)._._.OnLevelChanged;
  this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_04,(Object *)this_01,MethodInfo__MVLocalPlayer__OnLevelChangedLocal_int_,
             MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__);
  pUStack3 =
       (UnityAction_1_System_Int32_ *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)pUVar2,(Delegate *)this_04,(MethodInfo *)0x0);
  pUVar2 = (UnityAction_1_System_Int32_ *)0x0;
  if (pUStack3 != (UnityAction_1_System_Int32_ *)0x0) {
    if (pUStack3->klass == TypeInfo__UnityEngine__Events__UnityAction<int>) {
      pUVar2 = pUStack3;
    }
    if (pUVar2 == (UnityAction_1_System_Int32_ *)0x0) {
      func_?();
      goto code_?;
    }
  }
  (this_01->fields)._._.OnLevelChanged = pUVar2;
  (this_01->fields)._.planetOwnershipTypeID = planetOwnershipTypeID;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar4 != (MVNetworkGame *)0x0) {
    iVar5 = (pMVar4->fields).lastFrameServerTimeUpdate;
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
    if (iVar5 != iVar6) {
      this_00 = (pMVar4->fields)._Peer_k__BackingField;
      if (this_00 == (PhotonPeer *)0x0) goto code_?;
      iVar6 = Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
              PhotonPeer_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
      (pMVar4->fields).serverTimeInMilliseconds = iVar6;
      iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount
                        ((MethodInfo *)0x0);
      (pMVar4->fields).lastFrameServerTimeUpdate = iVar6;
    }
    (this_01->fields)._.joinTime = (pMVar4->fields).serverTimeInMilliseconds;
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

