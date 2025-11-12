
/* Void Awake() */

void Assembly-CSharp.dll::NotificationController::NotificationController_Awake
               (NotificationController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__NotificationController__OnNotificationReceived_MV__Common__NotificationType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
  this_00 = (Action_2_Int32Enum_Object_ *)
            FUN_?(TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate);
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_00,(Object *)0x0,
             MethodInfo__NotificationController__OnNotificationReceived_MV__Common__NotificationType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pMVar1 = (MVGameControllerBase_OnReceivedNotificationEventDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pMVar1 == (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification =
         (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
  }
  else {
    pMVar2 = (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
    if (pMVar1->klass == TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate) {
      pMVar2 = pMVar1;
    }
    if (pMVar2 == (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
      FUN_?(pMVar1,TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification = pMVar2;
    pMVar2 = (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
    if (pMVar1->klass == TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate) {
      pMVar2 = pMVar1;
    }
    if (pMVar2 == (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
      FUN_?(pMVar1,TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification
                  >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void FriendRequestAccepted(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationController::NotificationController_FriendRequestAccepted
               (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Friend);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__accepted_your_friend_request_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_8[0] = 10;
  apMStackX_18[0] = (MVPlayer *)0x0;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_8);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pOVar1 = (Object *)0x0;
    if (pOVar2 != (Object *)0x0) {
      bVar3 = (TypeInfo__Friend->_1).naturalAligment;
      if (((pOVar2->klass->_1).naturalAligment < bVar3) ||
         (pOVar1 = pOVar2,
         (pOVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] != (Il2CppClass *)TypeInfo__Friend)
         ) {
        FUN_?(pOVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar5 != (MVGameControllerBase *)0x0) &&
         (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
        (pOVar1 != (Object *)0x0)) &&
       (((this = (pMVar6->fields).playerContainer, this != (MVPlayerContainer *)0x0 &&
         (MVPlayerContainer::MVPlayerContainer_TryGetPlayerByProfileId
                    (this,*(int32_t *)&pOVar1[1].klass,apMStackX_18,(MethodInfo *)0x0),
         apMStackX_18[0] != (MVPlayer *)0x0)) &&
        (pUVar7 = (apMStackX_18[0]->fields)._UserProfileData_k__BackingField,
        pUVar7 != (UserProfileData *)0x0)))) {
      pSVar8 = (pUVar7->fields).UserName;
      str1 = TM::TM__(StringLiteral__accepted_your_friend_request_,(MethodInfo *)0x0);
      pSVar8 = mscorlib.dll::System::String::String_Concat_4(pSVar8,str1,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      NotificationController_PushNotification(pSVar8,(Sprite *)0x0,5,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::NotificationController::NotificationController_OnDestroy
               (NotificationController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__NotificationController__OnNotificationReceived_MV__Common__NotificationType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification;
  this_00 = (Action_2_Int32Enum_Object_ *)
            FUN_?(TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate);
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_00,(Object *)0x0,
             MethodInfo__NotificationController__OnNotificationReceived_MV__Common__NotificationType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pMVar1 = (MVGameControllerBase_OnReceivedNotificationEventDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pMVar1 == (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification =
         (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
  }
  else {
    pMVar2 = (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
    if (pMVar1->klass == TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate) {
      pMVar2 = pMVar1;
    }
    if (pMVar2 == (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
      FUN_?(pMVar1,TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification = pMVar2;
    pMVar2 = (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0;
    if (pMVar1->klass == TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate) {
      pMVar2 = pMVar1;
    }
    if (pMVar2 == (MVGameControllerBase_OnReceivedNotificationEventDelegate *)0x0) {
      FUN_?(pMVar1,TypeInfo__MVGameControllerBase__OnReceivedNotificationEventDelegate);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&TypeInfo__MVGameControllerBase->static_fields->OnReceivedNotification
                  >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void OnNotificationReceived(NotificationType, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationController::NotificationController_OnNotificationReceived
               (NotificationType__Enum type,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
    if (type != NotificationType__Enum_FriendRequest) {
      if (type == NotificationType__Enum_FriendRequestAccepted) {
        if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__Friend);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__NotificationController);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral__accepted_your_friend_request_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar1 = (Object *)FUN_?(uRam_?,&stack0x00000008);
        if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (data,pOVar1,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          pOVar1 = (Object *)0x0;
          if (pOVar2 != (Object *)0x0) {
            bVar3 = (TypeInfo__Friend->_1).naturalAligment;
            if (((pOVar2->klass->_1).naturalAligment < bVar3) ||
               (pOVar1 = pOVar2,
               (pOVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
               (Il2CppClass *)TypeInfo__Friend)) {
              FUN_?(pOVar2);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((((pMVar5 != (MVGameControllerBase *)0x0) &&
               (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
              (pOVar1 != (Object *)0x0)) &&
             (this = (pMVar6->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
            MVPlayerContainer::MVPlayerContainer_TryGetPlayerByProfileId
                      (this,*(int32_t *)&pOVar1[1].klass,(MVPlayer **)&stack0x00000018,
                       (MethodInfo *)0x0);
          }
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      pNVar7 = NotificationController_get_NotificationsManager((MethodInfo *)0x0);
      if (pNVar7 == (NotificationsManager *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,type,data,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__Common__NotificationType);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Could_not_find_a_notification_ar);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pNVar8 = (pNVar7->fields).notificationAreas;
      uVar9 = 0;
      if (pNVar8 != (NotificationArea__Array *)0x0) {
        lVar10 = 0x20;
        do {
          if ((int)pNVar8->max_length <= (int)uVar9) {
            EStack_11.klass = (Enum__Class *)TypeInfo__MV__Common__NotificationType;
            EStack_11.monitor = (MonitorData *)0xffffffffffffffff;
            NStack_12 = type;
            pSVar13 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_11,(MethodInfo *)0x0);
            pSVar13 = mscorlib.dll::System::String::String_Concat_4
                                (StringLiteral_Could_not_find_a_notification_ar,pSVar13,
                                 (MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)pSVar13,(MethodInfo *)0x0);
            return;
          }
          if (pNVar8 == (NotificationArea__Array *)0x0) break;
          if ((uint)pNVar8->max_length <= uVar9) {
code_?:
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pNVar14 = *(NotificationArea **)((longlong)pNVar8->vector + lVar10 + -0x20);
          if (pNVar14 == (NotificationArea *)0x0) break;
          bVar15 = NotificationArea::NotificationArea_CanInstantiateNotificationType
                            (pNVar14,type,(MethodInfo *)0x0);
          pNVar8 = (pNVar7->fields).notificationAreas;
          if (bVar15 != 0) {
            if (pNVar8 != (NotificationArea__Array *)0x0) {
              if ((uint)pNVar8->max_length <= uVar9) goto code_?;
              pNVar14 = pNVar8->vector[(int)uVar9];
              if (pNVar14 != (NotificationArea *)0x0) {
                (*(pNVar14->klass->vtable).InstantiateNotification.methodPtr)
                          (pNVar14,(ulonglong)type,data,
                           (pNVar14->klass->vtable).InstantiateNotification.method);
                return;
              }
            }
            break;
          }
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 8;
        } while (pNVar8 != (NotificationArea__Array *)0x0);
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
      FUN_?();
    }
    NotificationController_ReceivedFriendsRequest(data,(MethodInfo *)0x0);
  }
  return;
}


/* Void PushNoticationInstruction(String, NotificationLifetime) */

void Assembly-CSharp.dll::NotificationController::NotificationController_PushNoticationInstruction
               (String *instruction,NotificationLifetime__Enum lifeTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  auStackX_8[0] = 1;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_8);
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,(Object *)instruction,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,this_00,lifeTime,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(uRam_?,&stack0x00000018);
  value = (Object *)FUN_?(TypeInfo__NotificationLifetime,&stack0x00000018);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__NotificationsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__NotificationsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this = TypeInfo__NotificationsManager->static_fields->_activeInstance;
      if (this == (NotificationsManager *)0x0) goto code_?;
      NotificationsManager::NotificationsManager_InstantiateNotification
                (this,NotificationType__Enum_FirstTimeXPRewarded,
                 (Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PushNotification(String, Sprite, Int32) */

void Assembly-CSharp.dll::NotificationController::NotificationController_PushNotification
               (String *text,Sprite *sprite,int32_t lifeTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField == 0) {
    return;
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  auStack_1[0] = 1;
  pOVar2 = (Object *)FUN_?(uRam_?,auStack_1);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    uVar3 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,(Object *)text,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStack_1[0] = 2;
    pOVar2 = (Object *)FUN_?(uRam_?,auStack_1);
    aiStack_4[0] = lifeTime;
    value = (Object *)FUN_?(uRam_?,aiStack_4);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,value,
               (InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (sprite != (Sprite *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((sprite->fields)._.m_CachedPtr != (void *)0x0) {
        auStack_1[0] = 3;
        pOVar2 = (Object *)FUN_?(uRam_?,auStack_1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,(Object *)sprite,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
    }
    if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__NotificationsManager);
      LOCK();
      UNLOCK();
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
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,this_00,lifeTime,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aNStackX_18[0] = CONCAT31(aNStackX_18[0]._1_3_,2);
  key = (Object *)FUN_?(uRam_?,aNStackX_18);
  aNStackX_18[0] = lifeTime;
  value = (Object *)FUN_?(TypeInfo__NotificationLifetime,aNStackX_18);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,key,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__NotificationsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__NotificationsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this = TypeInfo__NotificationsManager->static_fields->_activeInstance;
      if (this == (NotificationsManager *)0x0) goto code_?;
      NotificationsManager::NotificationsManager_InstantiateNotification
                (this,notificationType,(Dictionary_2_System_Object_System_Object_ *)this_00,
                 (MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aNStackX_18[0] = CONCAT31(aNStackX_18[0]._1_3_,2);
  key = (Object *)FUN_?(uRam_?,aNStackX_18);
  aNStackX_18[0] = lifeTime;
  value = (Object *)FUN_?(TypeInfo__NotificationLifetime,aNStackX_18);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (data,key,value,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__NotificationsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__NotificationsManager);
        LOCK();
        UNLOCK();
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
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ReceivedFriendsRequest(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NotificationController::NotificationController_ReceivedFriendsRequest
               (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Values__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Friend>__List_System__Collections__Generic__IEnumerable<Friend>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Friend>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Friend>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<Friend>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
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
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pFVar3 = (pMVar2->fields)._Friends_k__BackingField, pFVar3 != (FriendList *)0x0)) &&
     (this = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)(pFVar3->fields).pending,
     this != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)0x0)) {
    collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 TypeConverterRegistry+ConverterKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                           (this,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Values__
                           );
    this_02 = (List_1_System_Object_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<Friend>);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              (this_02,(IEnumerable_1_System_Object_ *)collection,
               MethodInfo__System__Collections__Generic__List<Friend>__List_System__Collections__Generic__IEnumerable<Friend>_
              );
    if (this_02 != (List_1_System_Object_ *)0x0) {
      iVar4 = (this_02->fields)._size;
      if ((uint)(this_02->fields)._size <= iVar4 - 1U) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pOVar6 = (this_02->fields)._items;
      if (pOVar6 != (Object__Array *)0x0) {
        if ((uint)pOVar6->max_length <= iVar4 - 1U) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pOVar7 = pOVar6->vector[(longlong)iVar4 + -1];
        if (pOVar7 != (Object *)0x0) {
          if (*(int *)&pOVar7[1].monitor != 1) {
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar1 != (MVGameControllerBase *)0x0) {
            if ((pMVar1->fields)._joinState != 3) {
              return;
            }
            if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__NotificationController);
            }
            this_00 = (HashSet_1_System_Int32Enum_ *)
                      TypeInfo__NotificationController->static_fields->incomingPlayerFriendRequests;
            if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
              bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                      HashSet_1_System_Int32Enum__Contains
                                (this_00,*(Int32Enum__Enum *)&pOVar7[1].klass,
                                 MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                );
              if (bVar8 != 0) {
                return;
              }
              if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__NotificationController);
              }
              this_01 = TypeInfo__NotificationController->static_fields->
                        incomingPlayerFriendRequests;
              if (this_01 != (HashSet_1_System_Int32_ *)0x0) {
                System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                HashSet_1_System_Int32__AddIfNotPresent
                          (this_01,*(int32_t *)&pOVar7[1].klass,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                           rgctx_data[0x15].method);
                auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,0xf);
                key = (Object *)FUN_?(uRam_?,auStackX_18);
                auStackX_18[0] = *(undefined4 *)((longlong)&pOVar7[1].klass + 4);
                pOVar7 = (Object *)FUN_?(uRam_?,auStackX_18);
                if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            (data,key,pOVar7,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  this_03 = NotificationController_get_NotificationsManager((MethodInfo *)0x0);
                  if (this_03 != (NotificationsManager *)0x0) {
                    NotificationsManager::NotificationsManager_InstantiateNotification
                              (this_03,NotificationType__Enum_FriendRequest,data,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ToggleHDIsDeprecated() */

void Assembly-CSharp.dll::NotificationController::NotificationController_ToggleHDIsDeprecated
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Toggling_HD_is_deprecated__pleas);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = TM::TM__(StringLiteral_Toggling_HD_is_deprecated__pleas,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  pOVar1 = (Object *)FUN_?(uRam_?,&stack0x00000010);
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,(Object *)value,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,this_00,8,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,2);
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_18);
  auStackX_18[0] = 8;
  value_00 = (Object *)FUN_?(TypeInfo__NotificationLifetime,auStackX_18);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar1,value_00,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__NotificationsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__NotificationsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this = TypeInfo__NotificationsManager->static_fields->_activeInstance;
      if (this == (NotificationsManager *)0x0) goto code_?;
      NotificationsManager::NotificationsManager_InstantiateNotification
                (this,NotificationType__Enum_PlayerTip,
                 (Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* NotificationController() */

void Assembly-CSharp.dll::NotificationController::NotificationController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar2 = iRam_? != 0;
  TypeInfo__NotificationController->static_fields->incomingPlayerFriendRequests = pHVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)TypeInfo__NotificationController->static_fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* NotificationsManager get_NotificationsManager() */

NotificationsManager *
Assembly-CSharp.dll::NotificationController::NotificationController_get_NotificationsManager
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__NotificationsManager->static_fields->_activeInstance;
}

