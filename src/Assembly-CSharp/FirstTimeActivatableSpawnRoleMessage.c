
/* Boolean CheckItemAvailability(WorldObjectType) */

bool Assembly-CSharp.dll::FirstTimeActivatableSpawnRoleMessage::
     FirstTimeActivatableSpawnRoleMessage_CheckItemAvailability
               (FirstTimeActivatableSpawnRoleMessage *this,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  bStack_7 = 0;
  uStack_8 = 0;
  pDStack_9 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  pDStack_10 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_11 = 0;
  iStack_12 = 0;
  iStack_13 = 0;
  pSStack_14 = (ShopItem *)0x0;
  func_?();
  uStack_15 = 0xffffffff;
  puStack_16 = &stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_16 = &stack0xffffffa0, puStack_4 = &stack0xffffffa0,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_16 = &stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar17 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if ((((pIVar17 == (IEditModeUI *)0x0) ||
       (iVar18 = func_?(4,TypeInfo__IEditModeUI), iVar18 == 0)) ||
      (*(Dictionary_2_WinningConditionType_System_Object_ **)(iVar18 + 0xc) ==
       (Dictionary_2_WinningConditionType_System_Object_ *)0x0)) ||
     (this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                          (*(Dictionary_2_WinningConditionType_System_Object_ **)(iVar18 + 0xc),
                           MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                          ),
     this_00 == (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0))
  {
code_?:
    DStack_19.host_enumerator.dictionary =
         (Dictionary_2_WinningConditionType_System_Object_ *)func_?();
  }
  else {
    pDVar20 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_19,
                        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                       );
    pDStack_10 = (pDVar20->host_enumerator).dictionary;
    iStack_11 = (pDVar20->host_enumerator).next;
    iStack_12 = (pDVar20->host_enumerator).stamp;
    iStack_13 = (pDVar20->host_enumerator).current.key;
    pOStack_6 = (pDVar20->host_enumerator).current.value;
    uStack_1 = 0;
    do {
      DStack_19.host_enumerator.stamp =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
      ;
      DStack_19.host_enumerator.next = (int32_t)&pDStack_10;
      DStack_19.host_enumerator.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)&UNK_?;
      cVar21 = func_?();
      if (cVar21 == '\0') {
        iVar18 = 0x67;
        goto code_?;
      }
      DStack_19.host_enumerator.stamp =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__get_Current__
      ;
      DStack_19.host_enumerator.next = (int32_t)&pDStack_10;
      DStack_19.host_enumerator.dictionary =
           (Dictionary_2_WinningConditionType_System_Object_ *)&UNK_?;
      inventoryCategory = func_?();
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pIVar17 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if ((pIVar17 == (IEditModeUI *)0x0) ||
         (this_01 = (ClientShopRepository *)func_?(4,TypeInfo__IEditModeUI),
         this_01 == (ClientShopRepository *)0x0)) goto code_?;
      ClientShopRepository::ClientShopRepository_GetItemByWorldObjectTypeInCategory
                (this_01,inventoryCategory,worldObjectType,&pSStack_14,(MethodInfo *)0x0);
    } while (pSStack_14 == (ShopItem *)0x0);
    bStack_7 = 1;
    iVar18 = 0x69;
code_?:
    uStack_1 = 0xffffffff;
    DStack_19.host_enumerator.stamp =
         (int32_t)
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
    ;
    DStack_19.host_enumerator.next = (int32_t)&pDStack_10;
    DStack_19.host_enumerator.dictionary =
         (Dictionary_2_WinningConditionType_System_Object_ *)&UNK_?;
    func_?();
    DStack_19.host_enumerator.dictionary = pDStack_9;
    if (pDStack_9 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
      if (iVar18 == 0x69) {
        *unaff_FS_OFFSET = uStack_3;
        return bStack_7;
      }
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
  }
  DStack_19.host_enumerator.stamp = 0;
  DStack_19.host_enumerator.next = 0;
  func_?();
  pcVar22 = (code *)swi(3);
  bVar23 = (*pcVar22)();
  return bVar23;
}


/* Boolean IsItemInShop(WorldObjectType) */

bool Assembly-CSharp.dll::FirstTimeActivatableSpawnRoleMessage::
     FirstTimeActivatableSpawnRoleMessage_IsItemInShop
               (FirstTimeActivatableSpawnRoleMessage *this,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  if ((this->fields).haveCheckedItemAvailability == 0) {
    bVar1 = FirstTimeActivatableSpawnRoleMessage_CheckItemAvailability
                      (this,worldObjectType,(MethodInfo *)0x0);
    (this->fields).itemAvailable = bVar1;
    (this->fields).haveCheckedItemAvailability = 1;
    return bVar1;
  }
  return (this->fields).itemAvailable;
}


/* Void Register() */

void Assembly-CSharp.dll::FirstTimeActivatableSpawnRoleMessage::
     FirstTimeActivatableSpawnRoleMessage_Register
               (FirstTimeActivatableSpawnRoleMessage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__FirstTimeActivatableSpawnRoleMessage___Register_m__0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
            );
  (this->fields)._._.isRegistered = 1;
  return;
}


/* Void <Register>m__0(IFirstTimeElementActivator, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableSpawnRoleMessage::
     FirstTimeActivatableSpawnRoleMessage__Register_m__0
               (FirstTimeActivatableSpawnRoleMessage *this,IFirstTimeElementActivator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IFirstTimeElementActivator *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IFirstTimeElementActivator,x,this);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatableSpawnRoleMessage::
     FirstTimeActivatableSpawnRoleMessage_get_CanShow
               (FirstTimeActivatableSpawnRoleMessage *this,MethodInfo *method)

{
  if ((this->fields).haveCheckedItemAvailability == 0) {
    bVar1 = FirstTimeActivatableSpawnRoleMessage_CheckItemAvailability
                      (this,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0);
    (this->fields).itemAvailable = bVar1;
    (this->fields).haveCheckedItemAvailability = 1;
  }
  bVar1 = (this->fields).itemAvailable;
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__FirstTimeActivatableSpawnRoleMessage___Register_m__0_UnityEngine__EventSystems__IFirstTimeElementActivator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IFirstTimeElementActivator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IFirstTimeElementActivator>_
              );
    (this->fields)._._.isRegistered = 1;
  }
  bVar3 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar2 != (GameObject *)0x0) {
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar2,(MethodInfo *)0x0);
    if ((bVar3 == 0) && (bVar4 != 0)) {
      return bVar1 != 0;
    }
    return 0;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}

