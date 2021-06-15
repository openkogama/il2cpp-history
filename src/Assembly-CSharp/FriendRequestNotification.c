
/* Void AcceptFriendship() */

void Assembly-CSharp.dll::FriendRequestNotification::FriendRequestNotification_AcceptFriendship
               (FriendRequestNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
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
      pOVar2 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
        func_?();
      }
      iVar3 = BadgeManager::BadgeManager_GetFriendsLimit((int32_t)pOVar2,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pTVar4 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                           ((CloudyThemeBase *)pMVar1,(MethodInfo *)0x0);
        if ((pTVar4 != (ThemeSkybox *)0x0) &&
           (this_00 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                       *)(pTVar4->fields)._topColor.g,
           this_00 !=
           (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
            *)0x0)) {
          pOVar2 = System.Core.dll::System::Linq::
                   Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                   KeyValuePair`2[System::Object,System::Object],System::Object]::
                   Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                             (this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__
                             );
          if (iVar3 <= (int)pOVar2) {
            message = TM::TM__(StringLiteral_Your_friendlist_is_full,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                      (MVGameMsgType__Enum_AdminMsg,message,(MethodInfo *)0x0);
            Notification::Notification_Close((Notification *)&UNK_?,(MethodInfo *)0x0);
            return;
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAcceptFriendShip
                      (this_02,_UNK_?,(MethodInfo *)0x0);
            Notification::Notification_Close((Notification *)&UNK_?,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::FriendRequestNotification::FriendRequestNotification_Initialize
               (FriendRequestNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(1,data._0_3_);
  pTVar1 = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    uVar2 = func_?(0);
  }
  else {
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    arg0 = (Pool *)0x0;
    if (pPVar3 != (Pool *)0x0) {
      if ((String__Class *)pPVar3->klass == TypeInfo__System__String) {
        arg0 = pPVar3;
      }
      pSVar4 = TypeInfo__System__String;
      if (arg0 == (Pool *)0x0) goto code_?;
    }
    pTVar1 = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
    pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Int32,pPVar3);
    if (pPVar3 == (Pool *)0x0) goto code_?;
    if ((pPVar3->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar5 = (int32_t *)func_?(pPVar3);
      pTVar6 = (this->fields).label;
      (this->fields).friendId = *piVar5;
      pSVar7 = TM::TM__(StringLiteral__Accept__0__as_friend_,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar7 = mscorlib.dll::System::String::String_Format(pSVar7,(Object *)arg0,(MethodInfo *)0x0);
      if (pTVar6 != (Text *)0x0) {
        (*(code *)(pTVar6->klass->vtable).set_text.method)
                  (pTVar6,pSVar7,(pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr)
        ;
        pTVar6 = (this->fields).label;
        if (pTVar6 != (Text *)0x0) {
          pSVar7 = (String *)
                   (*(code *)(pTVar6->klass->vtable).get_text.method)
                             (pTVar6,(pTVar6->klass->vtable).set_text.methodPtr);
          pSVar7 = mscorlib.dll::System::String::String_Concat_2
                             (pSVar7,StringLiteral___R_,(MethodInfo *)0x0);
          (*(code *)(pTVar6->klass->vtable).set_text.method)
                    (pTVar6,pSVar7,
                     (pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          return;
        }
      }
      goto code_?;
    }
  }
  pPVar3 = (Pool *)func_?(uVar2);
  pSVar4 = extraout_ECX;
code_?:
  func_?(pPVar3,pSVar4);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FriendRequestNotification::FriendRequestNotification_Update
               (FriendRequestNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                    (KogamaControls__Enum_NotificationAcceptFriendshipRequest,(MethodInfo *)0x0);
  if ((bVar1 != 0) && ((this->fields).friendId != -1)) {
    FriendRequestNotification_AcceptFriendship(this,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean ValidateFriendRequest() */

bool Assembly-CSharp.dll::FriendRequestNotification::FriendRequestNotification_ValidateFriendRequest
               (FriendRequestNotification *this,MethodInfo *method)

{
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
      pOVar2 = System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)this_01,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
        func_?();
      }
      iVar3 = BadgeManager::BadgeManager_GetFriendsLimit((int32_t)pOVar2,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pTVar4 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                           ((CloudyThemeBase *)pMVar1,(MethodInfo *)0x0);
        if ((pTVar4 != (ThemeSkybox *)0x0) &&
           (this_00 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                       *)(pTVar4->fields)._topColor.g,
           this_00 !=
           (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
            *)0x0)) {
          pOVar2 = System.Core.dll::System::Linq::
                   Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                   KeyValuePair`2[System::Object,System::Object],System::Object]::
                   Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                             (this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__
                             );
          if (iVar3 <= (int)pOVar2) {
            message = TM::TM__(StringLiteral_Your_friendlist_is_full,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                      (MVGameMsgType__Enum_AdminMsg,message,(MethodInfo *)0x0);
            return 0;
          }
          return 1;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}

