
/* Void Awake() */

void Assembly-CSharp.dll::NotificationController::NotificationController_Awake
               (NotificationController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
  if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
    func_?(TypeInfo__NotificationController);
  }
  if (TypeInfo__NotificationController->static_fields->__f__mg_cache0 ==
      (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__NotificationController__OnNotificationReceived_MV__Common__NotificationType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?(TypeInfo__NotificationController);
    }
    TypeInfo__NotificationController->static_fields->__f__mg_cache0 =
         (MVGameControllerBase_OnReceivedNotificationEventDelegate *)this_00;
  }
  if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
    func_?(TypeInfo__NotificationController);
  }
  pMVar1 = (MVGameControllerBase_OnReceivedNotificationEventDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar1,
                      (Delegate *)TypeInfo__NotificationController->static_fields->__f__mg_cache0,
                      (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
  if (pMVar1 != (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    if (pMVar1->klass == TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate) {
      pMVar2 = pMVar1;
    }
    if (pMVar2 == (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
      func_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification = pMVar2;
  return;
}


/* Void FriendRequestAccepted(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationController::NotificationController_FriendRequestAccepted
               (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 == (Pool *)0x0) {
      pPVar2 = (Pool *)0x0;
    }
    else {
      bVar3 = (TypeInfo__Friend->_1).naturalAligment;
      if (((pPVar1->klass->_1).naturalAligment < bVar3) ||
         ((pPVar1->klass->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__Friend)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pPVar2 = (Pool *)0x0;
      if (bVar4) {
        pPVar2 = pPVar1;
      }
      if (pPVar2 == (Pool *)0x0) {
        func_?(pPVar1);
        goto code_?;
      }
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVAvatar *)0x0) {
      this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
      if ((pPVar2 != (Pool *)0x0) && (this_01 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
        this_02 = (MVPlayer *)(pPVar2->fields).prefab;
        MVPlayerContainer::MVPlayerContainer_TryGetPlayerByProfileId
                  ((MVPlayerContainer *)this_01,(int32_t)this_02,(MVPlayer **)&stack0xfffffff4,
                   (MethodInfo *)0x0);
        if (this_02 != (MVPlayer *)0x0) {
          iVar5 = GamePointGainEffect::GamePointGainEffect_get_ID
                            ((GamePointGainEffect *)this_02,(MethodInfo *)0x0);
          if (iVar5 != 0) {
            pSVar6 = *(String **)(iVar5 + 0xc);
            str1 = TM::TM__(StringLiteral__accepted_your_friend_request_,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            pCVar7 = (CrossPlatformInputManager_VirtualButton *)
                     mscorlib.dll::System::String::String_Concat_2(pSVar6,str1,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
              func_?();
            }
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            data_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            System.Core.dll::System::Collections::Generic::
            HashSet`1[AvatarModifierPackage+AvatarModifier]::
            HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                      ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data_00,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            pSVar6 = (String *)func_?();
            if (data_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)data_00,pSVar6,pCVar7,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              pSVar6 = (String *)func_?();
              pCVar7 = (CrossPlatformInputManager_VirtualButton *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)data_00,pSVar6,pCVar7,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        );
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)0x0,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar8 != 0) {
                pSVar6 = (String *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                String,UnityStandardAssets::CrossPlatformInput::
                CrossPlatformInputManager+VirtualButton]::
                Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                          ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                            *)data_00,pSVar6,(CrossPlatformInputManager_VirtualButton *)0x0,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
              }
              if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
                func_?();
              }
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              this = TypeInfo__NotificationsManager->static_fields->_ActiveInstance_k__BackingField;
              if (this != (NotificationsManager *)0x0) {
                NotificationsManager::NotificationsManager_InstantiateNotification
                          (this,NotificationType__Enum_ModalNotification,data_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::NotificationController::NotificationController_OnDestroy
               (NotificationController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
  if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
    func_?(TypeInfo__NotificationController);
  }
  if (TypeInfo__NotificationController->static_fields->__f__mg_cache1 ==
      (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__NotificationController__OnNotificationReceived_MV__Common__NotificationType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?(TypeInfo__NotificationController);
    }
    TypeInfo__NotificationController->static_fields->__f__mg_cache1 =
         (MVGameControllerBase_OnReceivedNotificationEventDelegate *)this_00;
  }
  if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
    func_?(TypeInfo__NotificationController);
  }
  pMVar1 = (MVGameControllerBase_OnReceivedNotificationEventDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pMVar1,
                      (Delegate *)TypeInfo__NotificationController->static_fields->__f__mg_cache1,
                      (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
  if (pMVar1 != (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    if (pMVar1->klass == TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate) {
      pMVar2 = pMVar1;
    }
    if (pMVar2 == (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
      func_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification = pMVar2;
  return;
}


/* Void OnNotificationReceived(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationController::NotificationController_OnNotificationReceived
               (NotificationType__Enum type,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (type == NotificationType__Enum_FriendRequest) {
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?(TypeInfo__NotificationController);
    }
    NotificationController_ReceivedFriendsRequest(data,(MethodInfo *)0x0);
    return;
  }
  if (type == NotificationType__Enum_FriendRequestAccepted) {
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?(TypeInfo__NotificationController);
    }
    NotificationController_FriendRequestAccepted(data,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
    func_?(TypeInfo__NotificationController);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = TypeInfo__NotificationsManager->static_fields->_ActiveInstance_k__BackingField;
  if (this != (NotificationsManager *)0x0) {
    NotificationsManager::NotificationsManager_InstantiateNotification
              (this,type,data,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PushNoticationInstruction(String, NotificationLifetime) */

void Assembly-CSharp.dll::NotificationController::NotificationController_PushNoticationInstruction
               (String *instruction,NotificationLifetime__Enum lifeTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  data = (Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  key = (String *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)data,key,(CrossPlatformInputManager_VirtualButton *)instruction,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?();
    }
    NotificationController_PushNotification_2
              (NotificationType__Enum_FirstTimeXPRewarded,data,0,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PushNotification(String, Sprite, Int32) */

void Assembly-CSharp.dll::NotificationController::NotificationController_PushNotification
               (String *text,Sprite *sprite,int32_t lifeTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  data = (Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStack_1 = 1;
  pSVar2 = (String *)func_?(TypeInfo__System__Byte,&uStack_1);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)data,pSVar2,(CrossPlatformInputManager_VirtualButton *)text,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    uStack_3 = 2;
    pSVar2 = (String *)func_?(TypeInfo__System__Byte,&uStack_3);
    value_00 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)data,pSVar2,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    value = sprite;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)sprite,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      text = (String *)CONCAT13(3,text._0_3_);
      pSVar2 = (String *)func_?(TypeInfo__System__Byte,(int)&text + 3);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)data,pSVar2,(CrossPlatformInputManager_VirtualButton *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this = TypeInfo__NotificationsManager->static_fields->_ActiveInstance_k__BackingField;
    if (this != (NotificationsManager *)0x0) {
      NotificationsManager::NotificationsManager_InstantiateNotification
                (this,NotificationType__Enum_ModalNotification,data,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PushNotification(NotificationType, NotificationLifetime) */

void Assembly-CSharp.dll::NotificationController::NotificationController_PushNotification_1
               (NotificationType__Enum notificationType,NotificationLifetime__Enum lifeTime,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  data = (Dictionary_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
    func_?(TypeInfo__NotificationController);
  }
  NotificationController_PushNotification_2(notificationType,data,lifeTime,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (String *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  value = (CrossPlatformInputManager_VirtualButton *)
          func_?(TypeInfo__NotificationLifetime,&stack0xfffffff4);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)data,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this = TypeInfo__NotificationsManager->static_fields->_ActiveInstance_k__BackingField;
    if (this != (NotificationsManager *)0x0) {
      NotificationsManager::NotificationsManager_InstantiateNotification
                (this,notificationType,data,(MethodInfo *)0x0);
      return;
    }
  }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_02 != (MVNetworkGame *)0x0) &&
      (this_03 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                           ((CloudyThemeBase *)this_02,(MethodInfo *)0x0),
      this_03 != (ThemeSkybox *)0x0)) &&
     (this_04 = (Dictionary_2_WinningConditionType_System_Object_ *)
                System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)this_03,(MethodInfo *)0x0),
     this_04 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0)) {
    collection = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[WinningConditionType,System::Object]::
                 Dictionary_2_WinningConditionType_System_Object__get_Values
                           (this_04,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Values__
                           );
    this_05 = (List_1_VoxelHit_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (this_05,(IEnumerable_1_VoxelHit_ *)collection,
               MethodInfo__System__Collections__Generic__List<Friend>__List_System__Collections__Generic__IEnumerable<Friend>_
              );
    if (this_05 != (List_1_VoxelHit_ *)0x0) {
      pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_05,
                          MethodInfo__System__Collections__Generic__List<Friend>__get_Count__);
      pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_05,
                          (int32_t)((int)&pOVar1[-1].monitor + 3),
                          MethodInfo__System__Collections__Generic__List<Friend>__get_Item_int_);
      if (pIVar2 != (IEventSystemHandler *)0x0) {
        if (pIVar2[2].klass == (IEventSystemHandler__Class *)0x1) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          MVar3 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
          if (MVar3 == MVJoinState__Enum_Playing) {
            if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
              func_?();
            }
            this = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)
                   TypeInfo__NotificationController->static_fields->incomingPlayerFriendRequests;
            if (this != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
              bVar4 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api
                      ::NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                                (this,(NativeAdType__Enum)pIVar2[1].klass,
                                 MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                );
              if (bVar4 != 0) {
                return;
              }
              if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
                func_?();
              }
              this_00 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
                        TypeInfo__NotificationController->static_fields->
                        incomingPlayerFriendRequests;
              if (this_00 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
                System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
                UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                          (this_00,(UnityWebRequest *)pIVar2[1].klass,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
                key = (String *)func_?();
                value = (CrossPlatformInputManager_VirtualButton *)func_?();
                if ((Dictionary_2_System_Object_System_Object_ *)&stack0xfffffffb !=
                    (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  String,UnityStandardAssets::CrossPlatformInput::
                  CrossPlatformInputManager+VirtualButton]::
                  Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                            ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                              *)&stack0xfffffffb,key,value,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                            );
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  this_01 = TypeInfo__NotificationsManager->static_fields->
                            _ActiveInstance_k__BackingField;
                  if (this_01 != (NotificationsManager *)0x0) {
                    NotificationsManager::NotificationsManager_InstantiateNotification
                              (this_01,NotificationType__Enum_FriendRequest,
                               (Dictionary_2_System_Object_System_Object_ *)&stack0xfffffffb,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
            goto code_?;
          }
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* NotificationController() */

void Assembly-CSharp.dll::NotificationController::NotificationController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  TypeInfo__NotificationController->static_fields->incomingPlayerFriendRequests =
       (HashSet_1_System_Int32_ *)this;
  return;
}

