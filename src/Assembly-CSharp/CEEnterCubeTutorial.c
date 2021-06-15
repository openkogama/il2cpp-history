
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CEEnterCubeTutorial::CEEnterCubeTutorial_Enter
               (CEEnterCubeTutorial *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = e;
  (this->fields).esm = e;
  if (e != (EditorStateMachine *)0x0) {
    while( true ) {
      bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                        (this_00,(MethodInfo *)0x0);
      if (bVar1 != 0) break;
      pMVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroup(this_00,(MethodInfo *)0x0);
      if (pMVar2 == (MVGroup *)0x0) goto code_?;
      fStack_3 = 0.0;
      bVar1 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        ((MVWorldObjectClient *)pMVar2,InteractionFlags__Enum_CantAddChildren,
                         (MethodInfo *)0x0);
      if (bVar1 == 0) break;
      EditorStateMachine::EditorStateMachine_ExitGroup(this_00,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar4 != (MVNetworkGame *)0x0) {
      pSStack_5 = CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)pMVar4,(MethodInfo *)0x0);
      if (pSStack_5 != (String *)0x0) {
        pDVar6 = (Delegate *)pSStack_5[1].monitor;
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>
                                    );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)this,
                   MethodInfo__CEEnterCubeTutorial__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                   ,
                   MethodInfo__System__EventHandler<InitializedGameQueryDataEventArgs>__EventHandler_System__Object__void__
                  );
        pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar6,(Delegate *)this_01,(MethodInfo *)0x0);
        pDVar6 = (Delegate *)0x0;
        if (pDVar7 != (Delegate *)0x0) {
          if ((EventHandler_1_InitializedGameQueryDataEventArgs___Class *)pDVar7->klass ==
              TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>) {
            pDVar6 = pDVar7;
          }
          pEVar8 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
          if (pDVar6 == (Delegate *)0x0) goto code_?;
        }
        pSStack_5[1].monitor = (MonitorData *)pDVar6;
        this_02 = (PrefabPool *)
                  EditorStateMachine::EditorStateMachine_get_ParentGroup(this_00,(MethodInfo *)0x0);
        if (this_02 != (PrefabPool *)0x0) {
          t = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_02,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
            func_?(TypeInfo__SharedCubeFunctions);
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                    ((Transform *)t,0,(MethodInfo *)0x0);
          customData = (Dictionary_2_System_Object_System_Object_ *)
                       func_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
          System.Core.dll::System::Collections::Generic::
          HashSet`1[AvatarModifierPackage+AvatarModifier]::
          HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                    ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)customData,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          e = (EditorStateMachine *)CONCAT13(1,e._0_3_);
          pSVar9 = (String *)func_?(TypeInfo__System__Byte,(int)&e + 3);
          fStack_10 = (this->fields).cubeSize;
          pCVar11 = (CrossPlatformInputManager_VirtualButton *)
                   func_?(TypeInfo__System__Single,&fStack_10);
          if (customData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                        *)customData,pSVar9,pCVar11,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            uStack_12 = 2;
            pSVar9 = (String *)func_?(TypeInfo__System__Byte,&uStack_12);
            uStack_13 = 0x15;
            pCVar11 = (CrossPlatformInputManager_VirtualButton *)
                     func_?(TypeInfo__System__Byte,&uStack_13);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                        *)customData,pSVar9,pCVar11,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            uStack_14 = 3;
            pSVar9 = (String *)func_?(TypeInfo__System__Byte,&uStack_14);
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar4 != (MVNetworkGame *)0x0) {
              this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
              if (this_03 != (MVLocalPlayer *)0x0) {
                pOStack_15 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_03,
                                        (MethodInfo *)0x0);
                pCVar11 = (CrossPlatformInputManager_VirtualButton *)
                         func_?(TypeInfo__System__Int32,&pOStack_15);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                String,UnityStandardAssets::CrossPlatformInput::
                CrossPlatformInputManager+VirtualButton]::
                Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                          ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                            *)customData,pSVar9,pCVar11,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                this_04 = (Dictionary_2_System_String_Theme_ *)
                          System.Core.dll::System::Linq::
                          Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::
                          Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
                          Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                    ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                      *)this_00,(MethodInfo *)0x0);
                uStack_16 = 1;
                value = (Theme *)func_?(TypeInfo__System__Boolean,&uStack_16);
                if (this_04 != (Dictionary_2_System_String_Theme_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
                  Dictionary_2_System_String_Theme__set_Item
                            (this_04,StringLiteral_IsNewPrototype,value,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                      ((MethodInfo *)0x0);
                  this_06 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  if (this_06 != (MVWorldObjectClientManager *)0x0) {
                    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                                       (this_06,(MethodInfo *)0x0);
                    if (pMVar2 != (MVGroup *)0x0) {
                      groupId = mscorlib.dll::System::Collections::ObjectModel::
                                Collection`1[VoxelHit]::Collection_1_VoxelHit__get_Items
                                          ((Collection_1_VoxelHit_ *)pMVar2,(MethodInfo *)0x0);
                      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                        func_?(TypeInfo__UnityEngine__Vector3);
                      }
                      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                         (&VStack_18,(MethodInfo *)0x0);
                      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                         (&VStack_19,*pVVar17,10.0,(MethodInfo *)0x0);
                      VStack_18.y = pVVar17->x;
                      VStack_18.z = pVVar17->y;
                      pSStack_5 = (String *)pVVar17->z;
                      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                        func_?(TypeInfo__UnityEngine__Quaternion);
                      }
                      pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                Quaternion_get_identity((Quaternion *)&fStack_3,(MethodInfo *)0x0);
                      fStack_3 = pQVar20->x;
                      puStack_21 = (undefined *)pQVar20->y;
                      fVar22 = pQVar20->z;
                      fVar23 = pQVar20->w;
                      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                                         (&VStack_19,(MethodInfo *)0x0);
                      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                         (&VStack_19,*pVVar17,(this->fields).cubeSize,
                                          (MethodInfo *)0x0);
                      if (this_05 != (MVNetworkGame_OperationRequests *)0x0) {
                        position.z = (float)pSStack_5;
                        position.x = VStack_18.y;
                        position.y = VStack_18.z;
                        rotation.y = (float)puStack_21;
                        rotation.x = fStack_3;
                        rotation.z = fVar22;
                        rotation.w = fVar23;
                        MVNetworkGame+OperationRequests::
                        MVNetworkGame_OperationRequests_RequestBuiltInItem
                                  (this_05,BuiltInItem__Enum_CubeModel,(int32_t)groupId,customData,
                                   position,rotation,*pVVar17,1,0,(MethodInfo *)0x0);
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
    }
  }
code_?:
  func_?(0);
  pDVar7 = extraout_ECX;
  pEVar8 = extraout_EDX;
code_?:
  func_?(pDVar7,pEVar8);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::CEEnterCubeTutorial::CEEnterCubeTutorial_Execute
               (CEEnterCubeTutorial *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,(float)e,(MethodInfo *)0x0)
  ;
  if (e != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      value = (Object *)func_?();
      FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void WOCM_InitializedGameQueryData(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::CEEnterCubeTutorial::CEEnterCubeTutorial_WOCM_InitializedGameQueryData
               (CEEnterCubeTutorial *this,Object *sender,InitializedGameQueryDataEventArgs *e,
               MethodInfo *method)

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
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pSVar2 = CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)pMVar1,(MethodInfo *)0x0),
     pSVar2 != (String *)0x0)) {
    pDVar3 = (Delegate *)pSVar2[1].monitor;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__CEEnterCubeTutorial__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
               ,
               MethodInfo__System__EventHandler<InitializedGameQueryDataEventArgs>__EventHandler_System__Object__void__
              );
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar3,(Delegate *)this_02,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar4 != (Delegate *)0x0) {
      if ((EventHandler_1_InitializedGameQueryDataEventArgs___Class *)pDVar4->klass ==
          TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>) {
        pDVar3 = pDVar4;
      }
      pEVar5 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
      if (pDVar3 == (Delegate *)0x0) goto code_?;
    }
    pSVar2[1].monitor = (MonitorData *)pDVar3;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 != (MVNetworkGame *)0x0) &&
        (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
        this_03 != (MVLocalPlayer *)0x0)) &&
       (pSVar2 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                 NamedThemeAttribute_1_UnityEngine_Color__get_Name
                           ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_03,(MethodInfo *)0x0),
       e != (InitializedGameQueryDataEventArgs *)0x0)) {
      if (pSVar2 != (String *)(e->fields).InstigatorActorNumber) {
        return;
      }
      this_00 = (this->fields).esm;
      this_01 = (e->fields).RootWO;
      if ((this_01 != (MVWorldObjectClient *)0x0) &&
         (id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0)
         , this_00 != (EditorStateMachine *)0x0)) {
        EditorStateMachine::EditorStateMachine_SelectWO(this_00,(int32_t)id,0,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pDVar4 = extraout_ECX;
  pEVar5 = extraout_EDX;
code_?:
  func_?(pDVar4,pEVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* CEEnterCubeTutorial() */

void Assembly-CSharp.dll::CEEnterCubeTutorial::CEEnterCubeTutorial__ctor
               (CEEnterCubeTutorial *this,MethodInfo *method)

{
  (this->fields).cubeSize = 1.0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  (this->fields)._.tintedWo = pWVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LoggerManager);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (this_00 != (LoggerManager *)0x0) {
    pIVar2 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
    (this->fields)._.logger = pIVar2;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

