
/* Void Awake() */

void Assembly-CSharp.dll::NotificationController::NotificationController_Awake
               (NotificationController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&
                    MethodInfo__NotificationController__OnNotificationReceived_MV__Common__NotificationType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)0x0,
             MethodInfo__NotificationController__OnNotificationReceived_MV__Common__NotificationType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pMStack2 =
       (MVGameControllerBase_OnReceivedNotificationEventDelegate *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pMStack2 == (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification =
         (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
    pMVar1 = (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
code_?:
    pMStack2 =
         (MVGameControllerBase_OnReceivedNotificationEventDelegate *)
         &TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
    pMStack3 = (MVGameControllerBase_OnReceivedNotificationEventDelegate__Class *)pMVar1;
    func_?();
    return;
  }
  pMVar1 = (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
  if (pMStack2->klass == TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate)
  {
    pMVar1 = pMStack2;
  }
  if (pMVar1 == (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    pMStack3 = TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate;
    func_?();
    pMStack2 = extraout_ECX;
    pMStack3 = extraout_EDX;
  }
  else {
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification = pMVar1;
    pMVar1 = (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
    if (pMStack2->klass ==
        TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate) {
      pMVar1 = pMStack2;
    }
    pMStack3 = TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate;
    if (pMVar1 != (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0)
    goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void FriendRequestAccepted(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationController::NotificationController_FriendRequestAccepted
               (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__Friend);
    func_?(&TypeInfo__NotificationController);
    func_?(&StringLiteral__accepted_your_friend_request_);
    cRam_? = '\x01';
  }
  key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (unaff_ESI.m_Index != 0) {
      if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) < (TypeInfo__Friend->_1).naturalAligment) ||
         (*(Friend__Class **)
           (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
           (uint)(TypeInfo__Friend->_1).naturalAligment * 4) != TypeInfo__Friend))
      goto code_?;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       ((unaff_ESI.m_Index != 0 &&
        (this = (pMVar1->fields).playerContainer, this != (MVPlayerContainer *)0x0)))) {
      profileId = *(MVPlayer **)(unaff_ESI.m_Index + 8);
      MVPlayerContainer::MVPlayerContainer_TryGetPlayerByProfileId
                (this,(int32_t)profileId,(MVPlayer **)&stack0xfffffff4,(MethodInfo *)0x0);
      if ((profileId != (MVPlayer *)0x0) &&
         (pUVar2 = (profileId->fields)._UserProfileData_k__BackingField, unaff_ESI.m_Index = 0,
         pUVar2 != (UserProfileData *)0x0)) {
        pSVar3 = (pUVar2->fields).UserName;
        str1 = TM::TM__(StringLiteral__accepted_your_friend_request_,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Concat_3(pSVar3,str1,(MethodInfo *)0x0);
        if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        NotificationController_PushNotification(pSVar3,(Sprite *)0x0,5,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI.m_Index);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::NotificationController::NotificationController_OnDestroy
               (NotificationController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&
                    MethodInfo__NotificationController__OnNotificationReceived_MV__Common__NotificationType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)0x0,
             MethodInfo__NotificationController__OnNotificationReceived_MV__Common__NotificationType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pMStack2 =
       (MVGameControllerBase_OnReceivedNotificationEventDelegate *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pMStack2 == (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification =
         (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
    pMVar1 = (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
code_?:
    pMStack2 =
         (MVGameControllerBase_OnReceivedNotificationEventDelegate *)
         &TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
    pMStack3 = (MVGameControllerBase_OnReceivedNotificationEventDelegate__Class *)pMVar1;
    func_?();
    return;
  }
  pMVar1 = (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
  if (pMStack2->klass == TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate)
  {
    pMVar1 = pMStack2;
  }
  if (pMVar1 == (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    pMStack3 = TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate;
    func_?();
    pMStack2 = extraout_ECX;
    pMStack3 = extraout_EDX;
  }
  else {
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification = pMVar1;
    pMVar1 = (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
    if (pMStack2->klass ==
        TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate) {
      pMVar1 = pMStack2;
    }
    pMStack3 = TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate;
    if (pMVar1 != (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0)
    goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnNotificationReceived(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationController::NotificationController_OnNotificationReceived
               (NotificationType__Enum type,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationsManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField == 0) {
    return;
  }
  if (type == NotificationType__Enum_FriendRequest) {
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__NotificationController);
    }
    NotificationController_ReceivedFriendsRequest(data,(MethodInfo *)0x0);
    return;
  }
  if (type == NotificationType__Enum_FriendRequestAccepted) {
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__NotificationController);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Byte);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__Friend);
      func_?(&TypeInfo__NotificationController);
      func_?(&StringLiteral__accepted_your_friend_request_);
      cRam_? = '\x01';
    }
    pMVar1 = (MVPlayer *)0x0;
    key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if ((TVar2.m_Index == 0) ||
         (((TypeInfo__Friend->_1).naturalAligment <= *(byte *)(*(int *)TVar2.m_Index + 0xb8) &&
          (*(Friend__Class **)
            (*(int *)(*(int *)TVar2.m_Index + 100) + -4 +
            (uint)(TypeInfo__Friend->_1).naturalAligment * 4) == TypeInfo__Friend)))) {
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((((pMVar3 != (MVNetworkGame *)0x0) && (TVar2.m_Index != 0)) &&
            (this = (pMVar3->fields).playerContainer, this != (MVPlayerContainer *)0x0)) &&
           ((MVPlayerContainer::MVPlayerContainer_TryGetPlayerByProfileId
                       (this,*(int32_t *)(TVar2.m_Index + 8),(MVPlayer **)&stack0xfffffff4,
                        (MethodInfo *)0x0), pMVar1 != (MVPlayer *)0x0 &&
            (pUVar4 = (pMVar1->fields)._UserProfileData_k__BackingField,
            pUVar4 != (UserProfileData *)0x0)))) {
          pSVar5 = (pUVar4->fields).UserName;
          str1 = TM::TM__(StringLiteral__accepted_your_friend_request_,(MethodInfo *)0x0);
          pSVar5 = mscorlib.dll::System::String::String_Concat_3(pSVar5,str1,(MethodInfo *)0x0);
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          NotificationController_PushNotification(pSVar5,(Sprite *)0x0,5,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        func_?(TVar2.m_Index,TypeInfo__Friend);
      }
    }
  }
  else {
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__NotificationController);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__NotificationsManager);
      cRam_? = '\x01';
    }
    this_00 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
    if (this_00 != (NotificationsManager *)0x0) {
      NotificationsManager::NotificationsManager_InstantiateNotification
                (this_00,type,data,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PushNoticationInstruction(String, NotificationLifetime) */

void Assembly-CSharp.dll::NotificationController::NotificationController_PushNoticationInstruction
               (String *instruction,NotificationLifetime__Enum lifeTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this,key,(Object *)instruction,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    NotificationController_PushNotification_2
              (NotificationType__Enum_FirstTimeXPRewarded,
               (Dictionary_2_System_Object_System_Object_ *)this,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PushNotification(String, Sprite, Int32) */

void Assembly-CSharp.dll::NotificationController::NotificationController_PushNotification
               (String *text,Sprite *sprite,int32_t lifeTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__NotificationController);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationsManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField == 0) {
    return;
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStack_1 = 1;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_1);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,(Object *)text,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    uStack_3 = 2;
    pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_3);
    value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)sprite,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      uStack_5 = 3;
      pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_5);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,(Object *)sprite,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this = TypeInfo__NotificationsManager->static_fields->_activeInstance;
    if (this != (NotificationsManager *)0x0) {
      NotificationsManager::NotificationsManager_InstantiateNotification
                (this,NotificationType__Enum_ModalNotification,
                 (Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PushNotification(NotificationType, NotificationLifetime) */

void Assembly-CSharp.dll::NotificationController::NotificationController_PushNotification_1
               (NotificationType__Enum notificationType,NotificationLifetime__Enum lifeTime,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__NotificationController);
  }
  NotificationController_PushNotification_2
            (notificationType,(Dictionary_2_System_Object_System_Object_ *)this,lifeTime,
             (MethodInfo *)0x0);
  return;
}


/* Void PushNotification(NotificationType, Dictionary`2[System.Object,System.Object],
   NotificationLifetime) */

void Assembly-CSharp.dll::NotificationController::NotificationController_PushNotification_2
               (NotificationType__Enum notificationType,
               Dictionary_2_System_Object_System_Object_ *data,NotificationLifetime__Enum lifeTime,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&TypeInfo__NotificationController);
    func_?(&TypeInfo__NotificationLifetime);
    cRam_? = '\x01';
  }
  key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  value = (Object *)func_?(TypeInfo__NotificationLifetime,&stack0xfffffff4);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (data,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this = TypeInfo__NotificationsManager->static_fields->_activeInstance;
      if (this == (NotificationsManager *)0x0) goto code_?;
      NotificationsManager::NotificationsManager_InstantiateNotification
                (this,notificationType,data,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ReceivedFriendsRequest(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationController::NotificationController_ReceivedFriendsRequest
               (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Values__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Friend>__List_System__Collections__Generic__IEnumerable<Friend>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<Friend>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<Friend>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<Friend>);
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar1 != (MVNetworkGame *)0x0) &&
      (pFVar2 = (pMVar1->fields)._Friends_k__BackingField, pFVar2 != (FriendList *)0x0)) &&
     (this = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)(pFVar2->fields).pending,
     this != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0)) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                           (this,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Values__
                           );
    this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              func_?(TypeInfo__System__Collections__Generic__List<Friend>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)this_03,(IEnumerable_1_System_Object_ *)collection,
               MethodInfo__System__Collections__Generic__List<Friend>__List_System__Collections__Generic__IEnumerable<Friend>_
              );
    if ((this_03 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
       (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_03,(this_03->fields)._size + -1,
                           MethodInfo__System__Collections__Generic__List<Friend>__get_Item_int_),
       RVar3 != (RegexCharClass_SingleRange)0x0)) {
      if ((*(int *)((int)RVar3 + 0x10) != 1) ||
         (MVar4 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0),
         MVar4 != MVJoinState__Enum_Playing)) {
        return;
      }
      if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_00 = (HashSet_1_System_UInt32_ *)
                TypeInfo__NotificationController->static_fields->incomingPlayerFriendRequests;
      if (this_00 != (HashSet_1_System_UInt32_ *)0x0) {
        bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                HashSet_1_System_UInt32__Contains
                          (this_00,*(uint32_t *)((int)RVar3 + 8),
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar5 != 0) {
          return;
        }
        if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_01 = TypeInfo__NotificationController->static_fields->incomingPlayerFriendRequests;
        if (this_01 != (HashSet_1_System_Int32_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                    (this_01,*(int32_t *)((int)RVar3 + 8),
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          key = (Object *)func_?(TypeInfo__System__Byte);
          value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
          if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (data,key,value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            this_02 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
            if (this_02 != (NotificationsManager *)0x0) {
              NotificationsManager::NotificationsManager_InstantiateNotification
                        (this_02,NotificationType__Enum_FriendRequest,data,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ToggleHDIsDeprecated() */

void Assembly-CSharp.dll::NotificationController::NotificationController_ToggleHDIsDeprecated
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__NotificationController);
    func_?(&StringLiteral_Toggling_HD_is_deprecated__pleas);
    cRam_? = '\x01';
  }
  value = TM::TM__(StringLiteral_Toggling_HD_is_deprecated__pleas,(MethodInfo *)0x0);
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this,key,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    NotificationController_PushNotification_2
              (NotificationType__Enum_PlayerTip,(Dictionary_2_System_Object_System_Object_ *)this,
               NotificationLifetime__Enum_High,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* NotificationController() */

void Assembly-CSharp.dll::NotificationController::NotificationController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  this = (HashSet_1_System_Int32_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  TypeInfo__NotificationController->static_fields->incomingPlayerFriendRequests = this;
  func_?(TypeInfo__NotificationController->static_fields,this);
  return;
}


/* NotificationsManager get_NotificationsManager() */

NotificationsManager *
Assembly-CSharp.dll::NotificationController::NotificationController_get_NotificationsManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationsManager);
    cRam_? = '\x01';
  }
  return TypeInfo__NotificationsManager->static_fields->_activeInstance;
}

