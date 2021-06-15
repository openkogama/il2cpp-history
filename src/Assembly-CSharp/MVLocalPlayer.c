
/* Void AddXp(Int32, XPRewardType, Int32, Int32) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_AddXp
               (MVLocalPlayer *this,int32_t currentPlayerXP,XPRewardType__Enum typeId,
               int32_t xpDelta,int32_t memberCount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  bVar1 = LevelingManager::LevelingManager_get_IsInitialized((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((this->fields).xpProgress == (XPProgress *)0x0) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(int *)(currentPlayerXP + 0xc) != 0) {
      *(undefined1 *)(*(int *)(currentPlayerXP + 0xc) + 0x10) = (undefined1)xpDelta;
      if (*(int *)(currentPlayerXP + 0xc) != 0) {
        *(XPRewardType__Enum *)(*(int *)(currentPlayerXP + 0xc) + 0xc) = typeId;
        if (*(int *)(currentPlayerXP + 0xc) != 0) {
          *(int32_t *)(*(int *)(currentPlayerXP + 0xc) + 0x18) = memberCount;
          if (*(int *)(currentPlayerXP + 0xc) != 0) {
            *(undefined4 *)(*(int *)(currentPlayerXP + 0xc) + 0x14) = 0;
            if (*(XPProgress_OnXPProgressDataDelegate **)(currentPlayerXP + 8) !=
                (XPProgress_OnXPProgressDataDelegate *)0x0) {
              XPProgress+OnXPProgressDataDelegate::XPProgress_OnXPProgressDataDelegate_Invoke
                        (*(XPProgress_OnXPProgressDataDelegate **)(currentPlayerXP + 8),
                         *(XPProgressData **)(currentPlayerXP + 0xc),(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/* Void CreateSpawnRole(Int32) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_CreateSpawnRole
               (MVLocalPlayer *this,int32_t avatarSpawnerWoId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_If_this_fails_then_remember_to_u,(MethodInfo *)0x0);
  MVLocalPlayer_SuspendCurrentSpawnRole(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)func_?();
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x16,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar2 = (pMVar1->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?();
      }
      if (pPVar2 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar2->klass->vtable).SendOperation.method)(pPVar2,0x71,this_00);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_Destroy
               (MVLocalPlayer *this,MethodInfo *method)

{
  object = (this->fields).xpProgress;
  if (object != (XPProgress *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)object,
               MethodInfo__XPProgress__XPLimitsCallback_UnityEngine__Networking__UnityWebRequest_,
               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
              );
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InitializeLeveling(InitialLevelData) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_InitializeLeveling
               (MVLocalPlayer *this,InitialLevelData *initialLevelData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (initialLevelData != (InitialLevelData *)0x0) {
    (this->fields)._.level = (initialLevelData->fields).Level;
    this_01 = (XPProgress *)func_?(TypeInfo__XPProgress);
    XPProgress::XPProgress__ctor(this_01,this,initialLevelData,(MethodInfo *)0x0);
    this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).OnInitializeLeveling;
    (this->fields).xpProgress = this_01;
    if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
      JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnLevelChangedLocal(Int32) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_OnLevelChangedLocal
               (MVLocalPlayer *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    iVar2 = level;
    value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0xa9,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      pPVar3 = (pMVar1->fields).peer;
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      pSVar4 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      if (pPVar3 != (PhotonPeer *)0x0) {
        uVar5._0_1_ = (pSVar4->SendReliable).Encrypt;
        uVar5._1_1_ = (pSVar4->SendReliable).Channel;
        uVar5._2_2_ = *(undefined2 *)&(pSVar4->SendReliable).field_0x6;
        (*(code *)(pPVar3->klass->vtable).SendOperation.method)
                  (pPVar3,0x38,this_00,(pSVar4->SendReliable).DeliveryMode,uVar5,
                   pPVar3->klass[1]._0.image);
        if ((this->fields).oldLevel != 0) {
          data = (Dictionary_2_System_Object_System_Object_ *)
                 func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
          System.Core.dll::System::Collections::Generic::
          HashSet`1[AvatarModifierPackage+AvatarModifier]::
          HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                    ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          level = CONCAT13(4,(undefined3)level);
          key = (String *)func_?(TypeInfo__System__Byte,(int)&level + 3);
          value_00 = (CrossPlatformInputManager_VirtualButton *)
                     func_?(TypeInfo__System__Int32,&stack0xfffffff8);
          if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)data,key,value_00,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
            func_?();
          }
          NotificationController::NotificationController_OnNotificationReceived
                    (NotificationType__Enum_LevelUp,data,(MethodInfo *)0x0);
        }
        (this->fields).oldLevel = iVar2;
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SendXpProgressEvent(XPProgressData) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_SendXpProgressEvent
               (MVLocalPlayer *this,XPProgressData *xpProgressData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).OnXPProgressData;
  if (this_00 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
    XPProgress+OnXPProgressDataDelegate::XPProgress_OnXPProgressDataDelegate_Invoke
              (this_00,xpProgressData,(MethodInfo *)0x0);
  }
  pSVar1 = TM::TM__(StringLiteral_You_gained__0__XP_,(MethodInfo *)0x0);
  if (xpProgressData != (XPProgressData *)0x0) {
    System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
    Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
              ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)xpProgressData,
               (MethodInfo *)0x0);
    arg0 = (Object *)func_?(TypeInfo__System__Int32);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Format(pSVar1,arg0,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?(TypeInfo__NotificationController);
    }
    NotificationController::NotificationController_PushNotification
              (pSVar1,(Sprite *)0x0,5,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    xp = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]
         ::
         Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                   ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)xpProgressData,
                    (MethodInfo *)0x0);
    if (this_01 != (GameEventManager *)0x0) {
      GameEventManager::GameEventManager_NotifyXPDeltaAmount(this_01,xp,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetActiveSpawnRole(Int32) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole
               (MVLocalPlayer *this,int32_t existingAvatarWoId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (SpawnRolesManager *)
            UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
            TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
            TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                      ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)this,(MethodInfo *)0x0);
  if (this_00 != (SpawnRolesManager *)0x0) {
    iVar1 = SpawnRolesManager::SpawnRolesManager_get_SpawnRoleId(this_00,(MethodInfo *)0x0);
    iVar2 = existingAvatarWoId;
    if (existingAvatarWoId == iVar1) {
      this_02 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1
                (this_02,StringLiteral_Trying_to_set_active_spawn_role_,(MethodInfo *)0x0);
      existingAvatarWoId = (int32_t)MethodInfo__MVLocalPlayer__SetActiveSpawnRole_int_;
      func_?();
    }
    else {
      MVLocalPlayer_SuspendCurrentSpawnRole(this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        existingAvatarWoId = iVar2;
        value = (Object *)func_?(TypeInfo__System__Int32,&existingAvatarWoId);
        if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__Add
                    (this_01,0xbf,value,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    );
          pPVar4 = (pMVar3->fields).peer;
          if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
            func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          pSVar5 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
          if (pPVar4 != (PhotonPeer *)0x0) {
            uVar6._0_1_ = (pSVar5->SendReliable).Encrypt;
            uVar6._1_1_ = (pSVar5->SendReliable).Channel;
            uVar6._2_2_ = *(undefined2 *)&(pSVar5->SendReliable).field_0x6;
            (*(code *)(pPVar4->klass->vtable).SendOperation.method)
                      (pPVar4,0x6f,this_01,(pSVar5->SendReliable).DeliveryMode,uVar6,
                       pPVar4->klass[1]._0.image);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetupPlayerWorldObjects(Int32, SpawnRolesRuntimeData) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_SetupPlayerWorldObjects
               (MVLocalPlayer *this,int32_t defaultBodyWoId,
               SpawnRolesRuntimeData *spawnRolesRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRoleDataMediator;
  (this->fields).defaultBodyWoId = defaultBodyWoId;
  this_00 = (SpawnRoleChangeHandlerLocal *)func_?(TypeInfo__SpawnRoleChangeHandlerLocal);
  SpawnRoleChangeHandlerLocal::SpawnRoleChangeHandlerLocal__ctor(this_00,pSVar1,(MethodInfo *)0x0);
  MVPlayer::MVPlayer_SetupSpawnRoleManager
            ((MVPlayer *)this,(ISpawnRoleChangeHandler *)this_00,spawnRolesRuntimeData,
             (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
    this_01 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
              System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                          *)pSVar1,(MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__MVLocalPlayer__SpawnRoleModeOnOnChange_MV__Common__SpawnRoleModeType_,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>__SubDelegate_System__Object__void__
              );
    if (this_01 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[UnityEngine::Vector3]::
      SpawnRoleVariable_1_UnityEngine_Vector3__add_OnChange
                (this_01,(SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)this_02,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SpawnRoleModeOnOnChange(SpawnRoleModeType) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_SpawnRoleModeOnOnChange
               (MVLocalPlayer *this,SpawnRoleModeType__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (value != SpawnRoleModeType__Enum_Playing) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (this_00 != (SpawnRoleDataMediator *)0x0) {
    this_01 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
              System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                          *)this_00,(MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__MVLocalPlayer__SpawnRoleModeOnOnChange_MV__Common__SpawnRoleModeType_,
               MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>__SubDelegate_System__Object__void__
              );
    if (this_01 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0) {
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[UnityEngine::Vector3]::
      SpawnRoleVariable_1_UnityEngine_Vector3__remove_OnChange
                (this_01,(SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)this_02,
                 MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                );
      this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_IncrementStatRequest
                  (this_03,IncrementStatRequestType__Enum_PlayerHasEnteredWorldFirstTime,0,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SuspendCurrentSpawnRole() */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_SuspendCurrentSpawnRole
               (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (MVWorldObject *)MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_01 = (SpawnRolesManager *)
            UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
            TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
            TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                      ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)this,(MethodInfo *)0x0);
  if (this_01 != (SpawnRolesManager *)0x0) {
    id = SpawnRolesManager::SpawnRolesManager_get_SpawnRoleId(this_01,(MethodInfo *)0x0);
    if (this_00 != (MVWorldObject *)0x0) {
      this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          ((MVWorldObjectClientManager *)this_00,id,(MethodInfo *)0x0);
      unaff_EDI = TypeInfo__ISpawnRoleLocal;
      if (this_00 != (MVWorldObject *)0x0) {
        pIStack1 = TypeInfo__ISpawnRoleLocal;
        pIStack2 = (ISpawnRoleLocal__Class *)this_00;
        pIStack1 = (ISpawnRoleLocal__Class *)func_?();
        if (pIStack1 != (ISpawnRoleLocal__Class *)0x0) {
          pIStack2 = TypeInfo__ISpawnRoleLocal;
          func_?();
          return;
        }
        goto code_?;
      }
    }
  }
  pIStack1 = (ISpawnRoleLocal__Class *)0x0;
  func_?();
code_?:
  pIStack2 = (ISpawnRoleLocal__Class *)this_00;
  pIStack1 = unaff_EDI;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UnSuspendCurrentSpawnRole() */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole
               (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (MVWorldObject *)MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_01 = (SpawnRolesManager *)
            UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
            TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
            TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                      ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)this,(MethodInfo *)0x0);
  if (this_01 != (SpawnRolesManager *)0x0) {
    id = SpawnRolesManager::SpawnRolesManager_get_SpawnRoleId(this_01,(MethodInfo *)0x0);
    if (this_00 != (MVWorldObject *)0x0) {
      this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          ((MVWorldObjectClientManager *)this_00,id,(MethodInfo *)0x0);
      unaff_EDI = TypeInfo__ISpawnRoleLocal;
      if (this_00 != (MVWorldObject *)0x0) {
        pIStack1 = TypeInfo__ISpawnRoleLocal;
        pIStack2 = (ISpawnRoleLocal__Class *)this_00;
        pIStack1 = (ISpawnRoleLocal__Class *)func_?();
        if (pIStack1 != (ISpawnRoleLocal__Class *)0x0) {
          pIStack2 = TypeInfo__ISpawnRoleLocal;
          func_?();
          return;
        }
        goto code_?;
      }
    }
  }
  pIStack1 = (ISpawnRoleLocal__Class *)0x0;
  func_?();
code_?:
  pIStack2 = (ISpawnRoleLocal__Class *)this_00;
  pIStack1 = unaff_EDI;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVLocalPlayer(Int32, Int32, String, Int32, UserProfileData) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer__ctor
               (MVLocalPlayer *this,int32_t actorNumber,int32_t profileID,String *regionCode,
               int32_t planetOwnershipTypeID,UserProfileData *userProfileData,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_02 = (BoostController *)func_?(TypeInfo__BoostController);
  BoostController::BoostController__ctor(this_02,(MethodInfo *)0x0);
  (this->fields).boostController = this_02;
  (this->fields).defaultBodyWoId = -1;
  this_03 = (SpawnRoleDataMediator *)
            func_?(
                           TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__Mediator__SpawnRoleDataMediator
                           );
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::SpawnRoleDataMediator::
  SpawnRoleDataMediator__ctor(this_03,(MethodInfo *)0x0);
  (this->fields).spawnRoleDataMediator = this_03;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[VoxelHit]::
          ReadOnlyCollection_1_VoxelHit__System_Collections_IList_get_IsReadOnly
                    ((ReadOnlyCollection_1_VoxelHit_ *)0x0,unaff_retaddr);
  this = (MVLocalPlayer *)CONCAT31(this._1_3_,bVar1);
  MVPlayer::MVPlayer__ctor
            ((MVPlayer *)this_01,actorNumber,profileID,regionCode,(BuildTarget__Enum)this,
             userProfileData,0,(MethodInfo *)0x0);
  pUVar2 = (this_01->fields)._.OnLevelChanged;
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
  (this_01->fields)._.OnLevelChanged = pUVar2;
  (this_01->fields).planetOwnershipTypeID = planetOwnershipTypeID;
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
    (this_01->fields).joinTime = (pMVar4->fields).serverTimeInMilliseconds;
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVBody get_Body() */

MVBody * Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_Body
                   (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_2
                       (this_00,(this->fields).defaultBodyWoId,
                        MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                       );
    return pMVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVBody *)(*pcVar2)();
  return pMVar1;
}


/* Boolean get_CanGetXPProgressData() */

bool Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_CanGetXPProgressData
               (MVLocalPlayer *this,MethodInfo *method)

{
  return (this->fields).xpProgress != (XPProgress *)0x0;
}


/* Int32 get_DefaultSpawnRoleId() */

int32_t Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId
                  (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).spawnRolesMetaData;
  if ((pSVar1 != (SpawnRolesMetaData *)0x0) &&
     (this_00 = (pSVar1->fields).spawnRolesDefaultTypeWoIDMap,
     this_00 != (Dictionary_2_MV_WorldObject_SpawnRoles_DefaultSpawnRoleType_System_Int32_ *)0x0)) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::SpawnRoles::
            DefaultSpawnRoleType,System::Int32]::
            Dictionary_2_MV_WorldObject_SpawnRoles_DefaultSpawnRoleType_System_Int32__get_Item
                      (this_00,DefaultSpawnRoleType__Enum_DefaultPlayModeSpawnRole,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                      );
    return iVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* MVLocalPlayer+PlanetOwnershipType get_PlanetOwnership() */

MVLocalPlayer_PlanetOwnershipType__Enum
Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership
          (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    return (this->fields).planetOwnershipTypeID;
  }
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral_There_are_currently_no_way_to_ac,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  MVar3 = (*pcVar2)();
  return MVar3;
}


/* Int32 get_PlanetOwnershipTypeID() */

int32_t Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_PlanetOwnershipTypeID
                  (MVLocalPlayer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    return (this->fields).planetOwnershipTypeID;
  }
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral_There_are_currently_no_way_to_ac,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Single get_RespawnDuration() */

float Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_RespawnDuration
                (MVLocalPlayer *this,MethodInfo *method)

{
  return _UNK_?;
}


/* Single get_RespawnTime() */

float Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_RespawnTime
                (MVLocalPlayer *this,MethodInfo *method)

{
  return (this->fields).respawnTime;
}


/* Single get_ReviveTimeout() */

float Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_get_ReviveTimeout
                (MVLocalPlayer *this,MethodInfo *method)

{
  return _UNK_?;
}


/* Void set_PlanetOwnershipTypeID(Int32) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_set_PlanetOwnershipTypeID
               (MVLocalPlayer *this,int32_t value,MethodInfo *method)

{
  (this->fields).planetOwnershipTypeID = value;
  return;
}


/* Void set_PlayerPlanetData(PlayerPlanetData) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_set_PlayerPlanetData
               (MVLocalPlayer *this,PlayerPlanetData *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).playerPlanetData = value;
  if (value != (PlayerPlanetData *)0x0) {
    highScoreGamePoints = (value->fields).highScoreGamePoints;
    value = (PlayerPlanetData *)CONCAT31(value._1_3_,(value->fields).gamePassTier);
    this_00 = (PlayerPlanetDataRemote *)
              func_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerPlanetDataRemote);
    MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetDataRemote::
    PlayerPlanetDataRemote__ctor_1
              (this_00,highScoreGamePoints,(GamePassTier__Enum)value,(MethodInfo *)0x0);
    (this->fields)._.playerPlanetDataRemote = this_00;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_RespawnTime(Single) */

void Assembly-CSharp.dll::MVLocalPlayer::MVLocalPlayer_set_RespawnTime
               (MVLocalPlayer *this,float value,MethodInfo *method)

{
  (this->fields).respawnTime = value;
  return;
}

