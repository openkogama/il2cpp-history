
/* Void AcceptFriendship() */

void Assembly-CSharp.dll::FriendRequestNotification::FriendRequestNotification_AcceptFriendship
               (FriendRequestNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Your_friendlist_is_full);
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
    if (pMVar3 != (MVLocalPlayer *)0x0) {
      iVar4 = (pMVar3->fields)._.level;
      if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar4 = BadgeManager::BadgeManager_GetFriendsLimit(iVar4,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         ((pFVar5 = (pMVar2->fields)._Friends_k__BackingField, pFVar5 != (FriendList *)0x0 &&
          (pDVar6 = (pFVar5->fields).friends, pDVar6 != (Dictionary_2_System_Int32_Friend_ *)0x0))))
      {
        if ((pDVar6->fields)._count - (pDVar6->fields)._freeCount < iVar4) {
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
        iVar7 = (*(this->klass->vtable).get_Lifetime.methodPtr)
                          (this,(this->klass->vtable).get_Lifetime.method);
        (this->fields)._.timeSinceStart = (float)(iVar7 + 1);
        return;
      }
    }
  }
code_?:
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Accept__0__as_friend_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.timeSinceStart = 0.0;
  auStackX_8[0] = 1;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_8);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pOVar1 = (Object *)0x0;
    if (pOVar2 != (Object *)0x0) {
      if (pOVar2->klass == pORam0000000182dc2f60) {
        pOVar1 = pOVar2;
      }
      if (pOVar1 == (Object *)0x0) {
        FUN_?(pOVar2);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    auStackX_8[0] = 0xf;
    pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar4 = (this->fields).label;
      (this->fields).friendId = *(int32_t *)&pOVar2[1].klass;
      pSVar5 = TM::TM__(StringLiteral__Accept__0__as_friend_,(MethodInfo *)0x0);
      PStack_6._arg0 = (Object *)0x0;
      PStack_6._arg1 = (Object *)0x0;
      PStack_6._arg2 = (Object *)0x0;
      PStack_6._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_6,pOVar1,(MethodInfo *)0x0);
      PStack_7._arg0 = PStack_6._arg0;
      PStack_7._arg1 = PStack_6._arg1;
      PStack_7._arg2 = PStack_6._arg2;
      PStack_7._args = PStack_6._args;
      pSVar5 = mscorlib.dll::System::String::String_FormatHelper
                         ((IFormatProvider *)0x0,pSVar5,&PStack_7,(MethodInfo *)0x0);
      if (pTVar4 != (Text *)0x0) {
        (*(pTVar4->klass->vtable).set_text.methodPtr)
                  (pTVar4,pSVar5,(pTVar4->klass->vtable).set_text.method);
        this_00 = (this->fields).tertiaryNotificationUI;
        l = (*(this->klass->vtable).get_Lifetime.methodPtr)
                      (this,(this->klass->vtable).get_Lifetime.method);
        if (this_00 != (TertiaryNotificationUI *)0x0) {
          TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                    (this_00,(Notification *)this,l,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FriendRequestNotification::FriendRequestNotification_Update
               (FriendRequestNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_NotificationAcceptFriendshipRequest,KeyState__Enum_Up,
                     (MethodInfo *)0x0);
  if ((bVar1 == 0) || ((this->fields).friendId == -1)) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Your_friendlist_is_full);
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
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar2 != (MVGameControllerBase *)0x0) &&
      (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar4 != (MVLocalPlayer *)0x0) {
      iVar5 = (pMVar4->fields)._.level;
      if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar5 = BadgeManager::BadgeManager_GetFriendsLimit(iVar5,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar2 != (MVGameControllerBase *)0x0) &&
          (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
         ((pFVar6 = (pMVar3->fields)._Friends_k__BackingField, pFVar6 != (FriendList *)0x0 &&
          (pDVar7 = (pFVar6->fields).friends, pDVar7 != (Dictionary_2_System_Int32_Friend_ *)0x0))))
      {
        if ((pDVar7->fields)._count - (pDVar7->fields)._freeCount < iVar5) {
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
        iVar8 = (*(this->klass->vtable).get_Lifetime.methodPtr)
                          (this,(this->klass->vtable).get_Lifetime.method);
        (this->fields)._.timeSinceStart = (float)(iVar8 + 1);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean ValidateFriendRequest() */

bool Assembly-CSharp.dll::FriendRequestNotification::FriendRequestNotification_ValidateFriendRequest
               (FriendRequestNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Your_friendlist_is_full);
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
    if (pMVar3 != (MVLocalPlayer *)0x0) {
      iVar4 = (pMVar3->fields)._.level;
      if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar4 = BadgeManager::BadgeManager_GetFriendsLimit(iVar4,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         ((pFVar5 = (pMVar2->fields)._Friends_k__BackingField, pFVar5 != (FriendList *)0x0 &&
          (pDVar6 = (pFVar5->fields).friends, pDVar6 != (Dictionary_2_System_Int32_Friend_ *)0x0))))
      {
        if (iVar4 <= (pDVar6->fields)._count - (pDVar6->fields)._freeCount) {
          message = TM::TM__(StringLiteral_Your_friendlist_is_full,(MethodInfo *)0x0);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,message,(MethodInfo *)0x0);
          return 0;
        }
        return 1;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}

