
/* Void Activate() */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_Activate
               (MVCameraController_CameraStack *this,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pCStack_6 = (ChatCommand__Enum__Array *)0x0;
  pDStack_7 = (Dictionary_2_ChatCommand_System_Object___Class *)0x0;
  pMStack_8 = (MonitorData *)0x0;
  pIStack_9 = (Int32__Array *)0x0;
  pLStack_10 = (Link__Array *)0x0;
  func_?();
  this_00 = (this->fields).cameras;
  puStack_4 = &stack0xffffffb4;
  if ((this_00 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) &&
     (puStack_4 = &stack0xffffffb4,
     this_01 = (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                         ),
     this_01 != (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)0x0)) {
    pDVar11 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
                       (&DStack_12,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                       );
    pDStack_7 = (Dictionary_2_ChatCommand_System_Object___Class *)
                 (pDVar11->host_enumerator).dictionary;
    pMStack_8 = (MonitorData *)(pDVar11->host_enumerator).next;
    pIStack_9 = (Int32__Array *)(pDVar11->host_enumerator).stamp;
    pLStack_10 = (Link__Array *)(pDVar11->host_enumerator).current.key;
    pCStack_6 = (ChatCommand__Enum__Array *)(pDVar11->host_enumerator).current.value;
    iStack_1 = 0;
    while( true ) {
      DStack_12.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
      ;
      DStack_12.host_enumerator.dictionary = (Dictionary_2_ChatCommand_System_Object_ *)&pDStack_7;
      cVar13 = func_?();
      if (cVar13 == '\0') {
        iStack_1 = -1;
        DStack_12.host_enumerator.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
        ;
        DStack_12.host_enumerator.dictionary =
             (Dictionary_2_ChatCommand_System_Object_ *)&pDStack_7;
        func_?();
        *unaff_FS_OFFSET = iStack_3;
        return;
      }
      DStack_12.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__get_Current__
      ;
      DStack_12.host_enumerator.dictionary = (Dictionary_2_ChatCommand_System_Object_ *)&pDStack_7;
      piVar14 = (int *)func_?();
      if (piVar14 == (int *)0x0) break;
      (**(code **)(*piVar14 + 0x130))(piVar14,*(undefined4 *)(*piVar14 + 0x134));
    }
  }
  func_?(0);
  DStack_12.host_enumerator.next = 0;
  DStack_12.host_enumerator.dictionary = (Dictionary_2_ChatCommand_System_Object_ *)0x0;
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void ClearStack(MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_ClearStack
               (MVCameraController_CameraStack *this,MVCameraController *cameraController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activeCameras;
  if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    index = (undefined1 *)((int)&pOVar2[-1].monitor + 3);
    while( true ) {
      if ((int)index < 0) {
        return;
      }
      pLVar1 = (this->fields).activeCameras;
      if ((pLVar1 == (List_1_MVCameraBase_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                              (int32_t)index,
                              MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) break;
      (*(code *)pIVar3->klass[1]._0.methods)
                (pIVar3,cameraController,pIVar3->klass[1]._0.nestedTypes);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pLVar1 = (this->fields).activeCameras;
      if (pLVar1 == (List_1_MVCameraBase_ *)0x0) break;
      pOVar2 = (Object *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                          (int32_t)index,
                          MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                         );
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,pOVar2,
                 MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 ,
                 MethodInfo__System__EventHandler<OnIgnoreInputTypesArgs>__EventHandler_System__Object__void__
                );
      if (this_01 == (MainCameraManager *)0x0) break;
      MainCameraManager::MainCameraManager_remove_onIgnoreInputTypes
                (this_01,(EventHandler_1_OnIgnoreInputTypesArgs_ *)this_02,(MethodInfo *)0x0);
      this_00 = (List_1_MVPlayer_ *)(this->fields).activeCameras;
      if (this_00 == (List_1_MVPlayer_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                (this_00,(int32_t)index,
                 MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_);
      index = index + -1;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_Deactivate
               (MVCameraController_CameraStack *this,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pCStack_6 = (ChatCommand__Enum__Array *)0x0;
  pDStack_7 = (Dictionary_2_ChatCommand_System_Object___Class *)0x0;
  pMStack_8 = (MonitorData *)0x0;
  pIStack_9 = (Int32__Array *)0x0;
  pLStack_10 = (Link__Array *)0x0;
  func_?();
  this_00 = (this->fields).cameras;
  puStack_4 = &stack0xffffffb4;
  if ((this_00 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) &&
     (puStack_4 = &stack0xffffffb4,
     this_01 = (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                         ),
     this_01 != (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)0x0)) {
    pDVar11 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
                       (&DStack_12,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                       );
    pDStack_7 = (Dictionary_2_ChatCommand_System_Object___Class *)
                 (pDVar11->host_enumerator).dictionary;
    pMStack_8 = (MonitorData *)(pDVar11->host_enumerator).next;
    pIStack_9 = (Int32__Array *)(pDVar11->host_enumerator).stamp;
    pLStack_10 = (Link__Array *)(pDVar11->host_enumerator).current.key;
    pCStack_6 = (ChatCommand__Enum__Array *)(pDVar11->host_enumerator).current.value;
    iStack_1 = 0;
    while( true ) {
      DStack_12.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
      ;
      DStack_12.host_enumerator.dictionary = (Dictionary_2_ChatCommand_System_Object_ *)&pDStack_7;
      cVar13 = func_?();
      if (cVar13 == '\0') {
        iStack_1 = -1;
        DStack_12.host_enumerator.next =
             (int32_t)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
        ;
        DStack_12.host_enumerator.dictionary =
             (Dictionary_2_ChatCommand_System_Object_ *)&pDStack_7;
        func_?();
        *unaff_FS_OFFSET = iStack_3;
        return;
      }
      DStack_12.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__get_Current__
      ;
      DStack_12.host_enumerator.dictionary = (Dictionary_2_ChatCommand_System_Object_ *)&pDStack_7;
      piVar14 = (int *)func_?();
      if (piVar14 == (int *)0x0) break;
      (**(code **)(*piVar14 + 0x138))(piVar14,*(undefined4 *)(*piVar14 + 0x13c));
    }
  }
  func_?(0);
  DStack_12.host_enumerator.next = 0;
  DStack_12.host_enumerator.dictionary = (Dictionary_2_ChatCommand_System_Object_ *)0x0;
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void EnterCamera(MVCameraBase, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_EnterCamera
               (MVCameraController_CameraStack *this,MVCameraBase *newCamera,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activeCameras;
  if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    for (index = (undefined1 *)((int)&pOVar2[-1].monitor + 3); -1 < (int)index; index = index + -1)
    {
      pLVar1 = (this->fields).activeCameras;
      if ((pLVar1 == (List_1_MVCameraBase_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                              (int32_t)index,
                              MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) goto code_?;
      (*(code *)pIVar3->klass[1]._0.methods)
                (pIVar3,cameraController,pIVar3->klass[1]._0.nestedTypes);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pLVar1 = (this->fields).activeCameras;
      if (pLVar1 == (List_1_MVCameraBase_ *)0x0) goto code_?;
      pOVar2 = (Object *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                          (int32_t)index,
                          MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                         );
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,pOVar2,
                 MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 ,
                 MethodInfo__System__EventHandler<OnIgnoreInputTypesArgs>__EventHandler_System__Object__void__
                );
      if (pMVar4 == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_remove_onIgnoreInputTypes
                (pMVar4,(EventHandler_1_OnIgnoreInputTypesArgs_ *)pUVar5,(MethodInfo *)0x0);
      this_00 = (List_1_MVPlayer_ *)(this->fields).activeCameras;
      if (this_00 == (List_1_MVPlayer_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                (this_00,(int32_t)index,
                 MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_);
    }
    pLVar1 = (this->fields).activeCameras;
    if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)newCamera,
                 MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pMVar6 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)pMVar6,
                 MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 ,
                 MethodInfo__System__EventHandler<OnIgnoreInputTypesArgs>__EventHandler_System__Object__void__
                );
      if (pMVar4 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_add_onIgnoreInputTypes
                  (pMVar4,(EventHandler_1_OnIgnoreInputTypesArgs_ *)pUVar5,(MethodInfo *)0x0);
        pMVar6 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
        if (pMVar6 != (MVCameraBase *)0x0) {
          (*(code *)(pMVar6->klass->vtable).Enter.method)
                    (pMVar6,cameraController,(pMVar6->klass->vtable).Exit.methodPtr);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Object GetCamera[Object]() */

Object * Assembly-CSharp.dll::MVCameraController+CameraStack::
         MVCameraController_CameraStack_GetCamera
                   (MVCameraController_CameraStack *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff7c;
  puVar5 = &stack0xffffff7c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  pOStack_7 = (Object *)0x0;
  uStack_8 = 0;
  iStack_9 = 0;
  KStack_10.key = 0;
  KStack_10.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  uStack_11 = 0xffffffff;
  this_00 = (this->fields).cameras;
  piStack_12 = (int *)&stack0xffffff7c;
  puStack_4 = &stack0xffffff7c;
  if (this_00 == (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
code_?:
    func_?(0);
  }
  else {
    piStack_12 = (int *)&stack0xffffff7c;
    puStack_4 = &stack0xffffff7c;
    pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                        (&DStack_14,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__GetEnumerator__
                        );
    auStack_6._0_4_ = pDVar13->dictionary;
    auStack_6._4_4_ = pDVar13->next;
    auStack_6._8_4_ = pDVar13->stamp;
    auStack_6._12_4_ = (pDVar13->current).key;
    auStack_6._16_4_ = (pDVar13->current).value;
    uStack_1 = 0;
    do {
      cVar15 = func_?();
      if (cVar15 == '\0') {
        *piStack_12 = 0x65;
        goto code_?;
      }
      KStack_10 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__get_Current__
                            );
      pOVar16 = (Object *)func_?();
      if (pOVar16 == (Object *)0x0) goto code_?;
      pTVar17 = mscorlib.dll::System::Object::Object_GetType(pOVar16,(MethodInfo *)0x0);
      handle.value = *method->parameters;
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?();
      }
      pTVar18 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    } while (pTVar17 != pTVar18);
    func_?();
    func_?();
    pOStack_7 = (Object *)func_?();
    *piStack_12 = 0x6c;
code_?:
    uVar19 = auStack_6._16_4_;
    uVar20 = auStack_6._12_4_;
    uVar21 = auStack_6._8_4_;
    uVar22 = auStack_6._4_4_;
    uVar23 = auStack_6._0_4_;
    uStack_1 = 0xffffffff;
    uVar24 = 0;
    uVar25._0_1_ = (
                  TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>
                  ->_1).rank;
    uVar25._1_1_ = (
                  TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>
                  ->_1).minimumAlignment;
    if (uVar25 != 0) {
      do {
        if (TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>
            ->interfaceOffsets[uVar24].interfaceType == (Il2CppClass *)TypeInfo__System__IDisposable
           ) {
          ppMVar26 = &(&(
                        TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>
                        ->vtable).Equals)
                      [TypeInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>
                       ->interfaceOffsets[uVar24].offset].method;
          goto code_?;
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar25);
    }
    ppMVar26 = (MethodInfo **)func_?();
code_?:
    (*(code *)*ppMVar26)();
    auStack_6._0_4_ = uVar23;
    auStack_6._4_4_ = uVar22;
    auStack_6._8_4_ = uVar21;
    auStack_6._12_4_ = uVar20;
    auStack_6._16_4_ = uVar19;
    if (iStack_9 == 0) {
      if (*piStack_12 == 0x6c) {
        *unaff_FS_OFFSET = uStack_3;
        return pOStack_7;
      }
      if ((method->parameters[1][0x17].type & 1) == 0) {
        func_?();
      }
      *unaff_FS_OFFSET = uStack_3;
      return (Object *)0x0;
    }
  }
  func_?();
  pcVar27 = (code *)swi(3);
  pOVar16 = (Object *)(*pcVar27)();
  return pOVar16;
}


/* Void PushCamera(CameraType, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_PushCamera
               (MVCameraController_CameraStack *this,CameraType__Enum cameraType,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cameras;
  if (this_00 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
    cameraBase = (MVCameraBase *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[CameraType,System::Object]
                 ::Dictionary_2_CameraType_System_Object__get_Item
                           ((Dictionary_2_CameraType_System_Object_ *)this_00,cameraType,
                            MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                           );
    MVCameraController_CameraStack_PushCamera_1(this,cameraBase,cameraController,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PushCamera(MVCameraBase, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::
     MVCameraController_CameraStack_PushCamera_1
               (MVCameraController_CameraStack *this,MVCameraBase *cameraBase,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activeCameras;
  if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    if (0 < (int)pOVar2) {
      pLVar1 = (this->fields).activeCameras;
      if ((pLVar1 == (List_1_MVCameraBase_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                              (int32_t)((int)&pOVar2[-1].monitor + 3),
                              MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) goto code_?;
      (*(code *)pIVar3->klass[1]._0.implementedInterfaces)(pIVar3);
    }
    pLVar1 = (this->fields).activeCameras;
    if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)cameraBase,
                 MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pMVar4 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)pMVar4,
                 MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 ,
                 MethodInfo__System__EventHandler<OnIgnoreInputTypesArgs>__EventHandler_System__Object__void__
                );
      MainCameraManager::MainCameraManager_add_onIgnoreInputTypes
                ((MainCameraManager *)&UNK_?,
                 (EventHandler_1_OnIgnoreInputTypesArgs_ *)this_00,(MethodInfo *)0x0);
      pMVar4 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
      if (pMVar4 != (MVCameraBase *)0x0) {
        (*(code *)(pMVar4->klass->vtable).Enter.method)(pMVar4);
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


/* Void RemoveCamera(CameraType, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::
     MVCameraController_CameraStack_RemoveCamera
               (MVCameraController_CameraStack *this,CameraType__Enum cameraType,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cameras;
  if (this_00 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
    cameraBase = (MVCameraBase *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[CameraType,System::Object]
                 ::Dictionary_2_CameraType_System_Object__get_Item
                           ((Dictionary_2_CameraType_System_Object_ *)this_00,cameraType,
                            MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                           );
    MVCameraController_CameraStack_RemoveCamera_1
              (this,cameraBase,cameraController,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveCamera(MVCameraBase, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::
     MVCameraController_CameraStack_RemoveCamera_1
               (MVCameraController_CameraStack *this,MVCameraBase *cameraBase,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activeCameras;
  if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    index = (undefined *)((int)&pOVar2[-1].monitor + 3);
    puStack_3 = index;
    while( true ) {
      if ((int)index < 0) {
        return;
      }
      pLVar1 = (this->fields).activeCameras;
      if (pLVar1 == (List_1_MVCameraBase_ *)0x0) goto code_?;
      x = (Object_1 *)
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
          IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,(int32_t)index,
                     MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)cameraBase,(MethodInfo *)0x0);
      if (bVar4 != 0) break;
      index = index + -1;
    }
    pLVar1 = (this->fields).activeCameras;
    if ((pLVar1 != (List_1_MVCameraBase_ *)0x0) &&
       (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                            (int32_t)index,
                            MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                           ), pIVar5 != (IEventSystemHandler *)0x0)) {
      func_?(9,pIVar5,cameraController);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      object = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)object,
                 MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 ,
                 MethodInfo__System__EventHandler<OnIgnoreInputTypesArgs>__EventHandler_System__Object__void__
                );
      if (this_01 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_remove_onIgnoreInputTypes
                  (this_01,(EventHandler_1_OnIgnoreInputTypesArgs_ *)this_02,(MethodInfo *)0x0);
        this_00 = (List_1_MVPlayer_ *)(this->fields).activeCameras;
        if (this_00 != (List_1_MVPlayer_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                    (this_00,(int32_t)index,
                     MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_);
          if (index != puStack_3) {
            return;
          }
          if ((int)index < 1) {
            return;
          }
          pLVar1 = (this->fields).activeCameras;
          if ((pLVar1 != (List_1_MVCameraBase_ *)0x0) &&
             (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                  (int32_t)(index + -1),
                                  MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                                 ), pIVar5 != (IEventSystemHandler *)0x0)) {
            func_?(0xb,pIVar5,cameraController);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetCamera(CameraType, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_SetCamera
               (MVCameraController_CameraStack *this,CameraType__Enum cameraType,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cameras;
  if (this_00 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
    newCamera = (MVCameraBase *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[CameraType,System::Object]
                ::Dictionary_2_CameraType_System_Object__get_Item
                          ((Dictionary_2_CameraType_System_Object_ *)this_00,cameraType,
                           MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                          );
    MVCameraController_CameraStack_EnterCamera(this,newCamera,cameraController,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetCamera(MVCameraBase, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_SetCamera_1
               (MVCameraController_CameraStack *this,MVCameraBase *newCamera,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activeCameras;
  if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    for (index = (undefined1 *)((int)&pOVar2[-1].monitor + 3); -1 < (int)index; index = index + -1)
    {
      pLVar1 = (this->fields).activeCameras;
      if ((pLVar1 == (List_1_MVCameraBase_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                              (int32_t)index,
                              MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) goto code_?;
      (*(code *)pIVar3->klass[1]._0.methods)
                (pIVar3,cameraController,pIVar3->klass[1]._0.nestedTypes);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pLVar1 = (this->fields).activeCameras;
      if (pLVar1 == (List_1_MVCameraBase_ *)0x0) goto code_?;
      pOVar2 = (Object *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                          (int32_t)index,
                          MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                         );
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,pOVar2,
                 MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 ,
                 MethodInfo__System__EventHandler<OnIgnoreInputTypesArgs>__EventHandler_System__Object__void__
                );
      if (pMVar4 == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_remove_onIgnoreInputTypes
                (pMVar4,(EventHandler_1_OnIgnoreInputTypesArgs_ *)pUVar5,(MethodInfo *)0x0);
      this_00 = (List_1_MVPlayer_ *)(this->fields).activeCameras;
      if (this_00 == (List_1_MVPlayer_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                (this_00,(int32_t)index,
                 MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_);
    }
    pLVar1 = (this->fields).activeCameras;
    if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar1,(UIPushOption__Enum)newCamera,
                 MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pMVar6 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)pMVar6,
                 MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 ,
                 MethodInfo__System__EventHandler<OnIgnoreInputTypesArgs>__EventHandler_System__Object__void__
                );
      if (pMVar4 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_add_onIgnoreInputTypes
                  (pMVar4,(EventHandler_1_OnIgnoreInputTypesArgs_ *)pUVar5,(MethodInfo *)0x0);
        pMVar6 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
        if (pMVar6 != (MVCameraBase *)0x0) {
          (*(code *)(pMVar6->klass->vtable).Enter.method)
                    (pMVar6,cameraController,(pMVar6->klass->vtable).Exit.methodPtr);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::
     MVCameraController_CameraStack_UpdateCamera
               (MVCameraController_CameraStack *this,MVCameraController *cameraController,
               ProtectedTransform *protectedTransform,MethodInfo *method)

{
  pMVar1 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVCameraBase *)0x0) {
    (*(code *)(pMVar1->klass->vtable).UpdateCamera.method)
              (pMVar1,cameraController,protectedTransform);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVCameraController+CameraStack(List`1[MVCameraBase], MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack__ctor
               (MVCameraController_CameraStack *this,List_1_MVCameraBase_ *camerasList,
               MVCameraController *cameraController,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVCameraBase>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<MVCameraBase>__List__);
  (this->fields).activeCameras = (List_1_MVCameraBase_ *)this_00;
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>;
  pDVar8 = (Dictionary_2_CameraType_MVCameraBase_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar8,
             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Dictionary__
            );
  (this->fields).cameras = pDVar8;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  if (camerasList != (List_1_MVCameraBase_ *)0x0) {
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc4,
                        (List_1_UnityEngine_Color32_ *)camerasList,
                        MethodInfo__System__Collections__Generic__List<MVCameraBase>__GetEnumerator__
                       );
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar9->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar9->current).rgba;
    uStack_1 = 0;
    while( true ) {
      CStack_6.monitor =
           (MonitorData *)
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCameraBase>__MoveNext__
      ;
      CStack_6.klass =
           (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&CStack_6;
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puStack_7 = 0x61;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      value = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        (&CStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCameraBase>__get_Current__
                        );
      pDVar8 = (this->fields).cameras;
      if ((value == (Object *)0x0) ||
         (key = (*value->klass[1]._0.gc_desc)(),
         pDVar8 == (Dictionary_2_CameraType_MVCameraBase_ *)0x0)) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[CameraType,System::Object]::
      Dictionary_2_CameraType_System_Object__Add
                ((Dictionary_2_CameraType_System_Object_ *)pDVar8,key,value,
                 MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                );
    }
  }
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVCameraBase get_CurCamera() */

MVCameraBase *
Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
          (MVCameraController_CameraStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activeCameras;
  if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    if (pOVar2 == (Object *)0x0) {
      return (MVCameraBase *)0x0;
    }
    pLVar1 = (this->fields).activeCameras;
    if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__)
      ;
      pMVar3 = (MVCameraBase *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                          (int32_t)((int)&pOVar2[-1].monitor + 3),
                          MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                         );
      return pMVar3;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  pMVar3 = (MVCameraBase *)(*pcVar4)();
  return pMVar3;
}

