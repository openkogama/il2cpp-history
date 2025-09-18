
/* Void AcceptFriendship() */

void Assembly-CSharp.dll::FriendRequestNotification::FriendRequestNotification_AcceptFriendship
               (FriendRequestNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BadgeManager);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__)
    ;
    func_?(&StringLiteral_Your_friendlist_is_full);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      iVar3 = (pMVar2->fields)._.level;
      if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar3 = BadgeManager::BadgeManager_GetFriendsLimit(iVar3,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar1 != (MVNetworkGame *)0x0) &&
          (pFVar4 = (pMVar1->fields)._Friends_k__BackingField, pFVar4 != (FriendList *)0x0)) &&
         (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)(pFVar4->fields).friends,
         this_00 !=
         (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0)) {
        iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__
                          );
        if (iVar5 < iVar3) {
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAcceptFriendShip
                    (this_01,_UNK_?,(MethodInfo *)0x0);
        }
        else {
          message = TM::TM__(StringLiteral_Your_friendlist_is_full,(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,message,(MethodInfo *)0x0);
        }
        uStack6 = *(undefined4 *)(_UNK_? + 0xe4);
        iVar7 = (**(code **)(_UNK_? + 0xe0))();
        _UNK_? = (float)(iVar7 + 1);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::FriendRequestNotification::FriendRequestNotification_Initialize
               (FriendRequestNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral__Accept__0__as_friend_);
    cRam_? = '\x01';
  }
  n = this;
  this = (FriendRequestNotification *)CONCAT13(1,this._0_3_);
  (n->fields)._.timeSinceStart = 0.0;
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_01 = data;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    uVar2 = func_?();
  }
  else {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    arg0.m_Index = 0;
    if (TVar3.m_Index != 0) {
      if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
        arg0 = TVar3;
      }
      pSVar4 = TypeInfo__System__String;
      if ((Object *)arg0.m_Index == (Object *)0x0) goto code_?;
    }
    uStack_5 = CONCAT13(0xf,(undefined3)uStack_5);
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_5 + 3);
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar2 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
    if (TVar3.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar6 = (int32_t *)func_?(TVar3.m_Index);
      pTVar7 = (n->fields).label;
      (n->fields).friendId = *piVar6;
      pSVar8 = TM::TM__(StringLiteral__Accept__0__as_friend_,(MethodInfo *)0x0);
      pSVar8 = mscorlib.dll::System::String::String_Format
                         (pSVar8,(Object *)arg0.m_Index,(MethodInfo *)0x0);
      if (pTVar7 != (Text *)0x0) {
        (*(code *)(pTVar7->klass->vtable).set_text.method)
                  (pTVar7,pSVar8,(pTVar7->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        this_00 = (n->fields).tertiaryNotificationUI;
        l = (*(code *)(n->klass->vtable).get_Lifetime.method)
                      (n,(n->klass->vtable).Initialize.methodPtr);
        if (this_00 != (TertiaryNotificationUI *)0x0) {
          TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                    (this_00,(Notification *)n,l,0,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  TVar3.m_Index = func_?(uVar2);
  pSVar4 = extraout_ECX;
code_?:
  func_?(TVar3.m_Index,pSVar4);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FriendRequestNotification::FriendRequestNotification_Update
               (FriendRequestNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                    (KogamaControls__Enum_NotificationAcceptFriendshipRequest,(MethodInfo *)0x0);
  if ((bVar1 == 0) || ((this->fields).friendId == -1)) {
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?(&StringLiteral_Your_friendlist_is_full);
    cRam_? = '\x01';
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    iVar4 = (pMVar3->fields)._.level;
    if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVar4 = BadgeManager::BadgeManager_GetFriendsLimit(iVar4,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar2 != (MVNetworkGame *)0x0) &&
        (pFVar5 = (pMVar2->fields)._Friends_k__BackingField, pFVar5 != (FriendList *)0x0)) &&
       (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)(pFVar5->fields).friends,
       this_00 !=
       (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0)) {
      iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__
                        );
      if (iVar6 < iVar4) {
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAcceptFriendShip
                  (this_01,(this->fields).friendId,(MethodInfo *)0x0);
      }
      else {
        message = TM::TM__(StringLiteral_Your_friendlist_is_full,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,message,(MethodInfo *)0x0);
      }
      pIStack7 = (this->klass->vtable).Initialize.methodPtr;
      pFStack8 = this;
      iVar9 = (*(code *)(this->klass->vtable).get_Lifetime.method)();
      (this->fields)._.timeSinceStart = (float)(iVar9 + 1);
      return;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean ValidateFriendRequest() */

bool Assembly-CSharp.dll::FriendRequestNotification::FriendRequestNotification_ValidateFriendRequest
               (FriendRequestNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BadgeManager);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__)
    ;
    func_?(&StringLiteral_Your_friendlist_is_full);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      iVar3 = (pMVar2->fields)._.level;
      if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar3 = BadgeManager::BadgeManager_GetFriendsLimit(iVar3,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar1 != (MVNetworkGame *)0x0) &&
          (pFVar4 = (pMVar1->fields)._Friends_k__BackingField, pFVar4 != (FriendList *)0x0)) &&
         (this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)(pFVar4->fields).friends,
         this_00 !=
         (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0)) {
        iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__
                          );
        if (iVar3 <= iVar5) {
          message = TM::TM__(StringLiteral_Your_friendlist_is_full,(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,message,(MethodInfo *)0x0);
          return 0;
        }
        return 1;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}

