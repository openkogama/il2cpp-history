
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddToMarketPlaceState::ESAddToMarketPlaceState_Enter
               (ESAddToMarketPlaceState *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_ESAddToMarketPlaceState,(MethodInfo *)0x0);
  if (e != (EditorStateMachine *)0x0) {
    this_00 = (Dictionary_2_System_Type_Pool_ *)
              System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
              ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]
              ::
              Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                        ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                          *)e,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         (this_00,(Type *)StringLiteral_ItemID,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar3 = CONCAT44(TypeInfo__System__Int32,pPVar2);
      if (pPVar2 != (Pool *)0x0) {
        if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        func_?(pPVar2);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_01 = (PrefabPool *)
                  MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_01 != (PrefabPool *)0x0) {
          this_02 = (KogamaSettingNumericBase_1_System_Single_ *)
                    PrefabPool::PrefabPool_get_MVNegatePrefab(this_01,(MethodInfo *)0x0);
          if (this_02 != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
            pIVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                     KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                     KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                               (this_02,(MethodInfo *)0x0);
            if (pIVar4 != (IKogamaSetting *)0x0) {
              pIVar5 = pIVar4->klass;
              uVar6 = 0;
              uVar7._0_1_ = (pIVar5->_1).rank;
              uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
              if (uVar7 != 0) {
                do {
                  if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
                      (Il2CppClass *)
                      TypeInfo__System__Collections__Generic__IDictionary<int,_MV::WorldObject::MVItem>
                     ) {
                    ppvVar8 = &pIVar4->klass[1]._0.gc_desc +
                              pIVar4->klass->interfaceOffsets[uVar6].offset * 2;
                    goto code_?;
                  }
                  uVar6 = uVar6 + 1;
                } while (uVar6 < uVar7);
              }
              ppvVar8 = (void **)func_?(pIVar4,
                                                 TypeInfo__System__Collections__Generic__IDictionary<int,_MV::WorldObject::MVItem>
                                                 ,3);
code_?:
              cVar9 = (**ppvVar8)(pIVar4,ppvVar8[1],&iStack_1);
              if (cVar9 == '\0') {
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                          ((Object *)StringLiteral_Item_not_found,(MethodInfo *)0x0);
                FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
                return;
              }
              if (iStack_1 != 0) {
                pOVar10 = *(Object **)(iStack_1 + 0x2c);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar11 != (MVNetworkGame *)0x0) {
                  this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar11,(MethodInfo *)0x0);
                  if (this_03 != (MVLocalPlayer *)0x0) {
                    pOVar12 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                              TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                              TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                        ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_03,
                                         (MethodInfo *)0x0);
                    if (pOVar10 == pOVar12) {
                      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                        func_?(TypeInfo__UnityEngine__Debug);
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                                ((Object *)StringLiteral_Is_already_authorprofile__Skip_t,
                                 (MethodInfo *)0x0);
                      FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
                      return;
                    }
                    if (iStack_1 != 0) {
                      if (*(char *)(iStack_1 + 0x28) == '\0') {
                        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                          func_?(TypeInfo__UnityEngine__Debug);
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                                  ((Object *)StringLiteral_Is_not_resellable,(MethodInfo *)0x0);
                        FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
                        return;
                      }
                      buffer = *(Byte__Array **)(iStack_1 + 0x24);
                      this_04 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker)
                      ;
                      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                                (this_04,buffer,(MethodInfo *)0x0);
                      (this->fields).inventoryItemData = this_04;
                      (this->fields).internalState = 1;
                      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                        func_?();
                      }
                      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game
                                         ((MethodInfo *)0x0);
                      this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                 *)func_?();
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                      SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                (this_05,(Object *)this,
                                 MethodInfo__ESAddToMarketPlaceState__WOCM_ReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
                                 ,
                                 MethodInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>__EventHandler_System__Object__void__
                                );
                      if (pMVar11 != (MVNetworkGame *)0x0) {
                        MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                                  (pMVar11,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_05,
                                   (MethodInfo *)0x0);
                        this_06 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                            ((MethodInfo *)0x0);
                        if (this_06 != (MVNetworkGame_OperationRequests *)0x0) {
                          MVNetworkGame+OperationRequests::
                          MVNetworkGame_OperationRequests_RequestMarketPlaceItem
                                    (this_06,0,(MethodInfo *)0x0);
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
  }
  uVar3 = func_?(0);
code_?:
  func_?(uVar3);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddToMarketPlaceState::ESAddToMarketPlaceState_Execute
               (ESAddToMarketPlaceState *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pEVar1 = this;
  pEVar2 = (ESAddToMarketPlaceState *)(this->fields).internalState;
  if (pEVar2 == (ESAddToMarketPlaceState *)0x1) {
    if ((this->fields).marketPlaceItemData != (BytePacker *)0x0) {
      (this->fields).internalState = 2;
      return;
    }
  }
  else {
    if (pEVar2 == (ESAddToMarketPlaceState *)0x2) {
      pBVar3 = (this->fields).inventoryItemData;
      this_00 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
      KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_00,pBVar3,0,(MethodInfo *)0x0);
      if (this_00 != (KoGaMaPackageClient *)0x0) {
        KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_00,(MethodInfo *)0x0);
        pBVar3 = (pEVar1->fields).marketPlaceItemData;
        pEVar2 = (ESAddToMarketPlaceState *)func_?(TypeInfo__KoGaMaPackageClient);
        this = pEVar2;
        KoGaMaPackageClient::KoGaMaPackageClient__ctor
                  ((KoGaMaPackageClient *)pEVar2,pBVar3,0,(MethodInfo *)0x0);
        if (pEVar2 != (ESAddToMarketPlaceState *)0x0) {
          KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize
                    ((KoGaMaPackageClient *)pEVar2,(MethodInfo *)0x0);
          pEVar4 = (EditorStateMachine__Class *)
                   KoGaMaPackageClient::KoGaMaPackageClient_Compare
                             ((KoGaMaPackageClient *)pEVar2,this_00,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MV__Common__CommonValues->vtable).Equals.methodPtr & 0x2000000) !=
               0) && ((TypeInfo__MV__Common__CommonValues->_1).cctor_started == 0)) {
            this = (ESAddToMarketPlaceState *)TypeInfo__MV__Common__CommonValues;
            func_?();
          }
          this = (ESAddToMarketPlaceState *)0x0;
          fVar5 = MVCommon.dll::MV::Common::CommonValues::CommonValues_get_CompareThreshold
                            ((MethodInfo *)0x0);
          e = (EditorStateMachine *)&this;
          this = (ESAddToMarketPlaceState *)TypeInfo__System__Single;
          if ((float)pEVar4 <= fVar5) {
            pOVar6 = (Object *)func_?();
            if ((((uint)(TypeInfo__MV__Common__CommonValues->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__MV__Common__CommonValues->_1).cctor_started == 0)) {
              e = (EditorStateMachine *)TypeInfo__MV__Common__CommonValues;
              this = (ESAddToMarketPlaceState *)&UNK_?;
              func_?();
            }
            e = (EditorStateMachine *)0x0;
            this = (ESAddToMarketPlaceState *)&UNK_?;
            MVCommon.dll::MV::Common::CommonValues::CommonValues_get_CompareThreshold
                      ((MethodInfo *)0x0);
            e = (EditorStateMachine *)&stack0xfffffff4;
            this = (ESAddToMarketPlaceState *)TypeInfo__System__Single;
            pEVar4 = (EditorStateMachine__Class *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            message_00 = (Debug_1__Class *)
                         mscorlib.dll::System::String::String_Format_1
                                   (StringLiteral_Compare_val__0_____threshold__1_,pOVar6,
                                    (Object *)pEVar4,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              message_00 = TypeInfo__UnityEngine__Debug;
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)message_00,(MethodInfo *)0x0);
            (pEVar1->fields).internalState = 3;
          }
          else {
            pEVar4 = (EditorStateMachine__Class *)func_?();
            if ((((uint)(TypeInfo__MV__Common__CommonValues->vtable).Equals.methodPtr & 0x2000000)
                 != 0) && ((TypeInfo__MV__Common__CommonValues->_1).cctor_started == 0)) {
              e = (EditorStateMachine *)TypeInfo__MV__Common__CommonValues;
              this = (ESAddToMarketPlaceState *)&UNK_?;
              func_?();
            }
            e = (EditorStateMachine *)0x0;
            this = (ESAddToMarketPlaceState *)&UNK_?;
            MVCommon.dll::MV::Common::CommonValues::CommonValues_get_CompareThreshold
                      ((MethodInfo *)0x0);
            e = (EditorStateMachine *)&stack0xfffffff8;
            this = (ESAddToMarketPlaceState *)TypeInfo__System__Single;
            pOVar6 = (Object *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            message = mscorlib.dll::System::String::String_Format_1
                                (StringLiteral_Compare_val__0____threshold__1__,(Object *)pEVar4,
                                 pOVar6,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)message,(MethodInfo *)0x0);
            if (e == (EditorStateMachine *)0x0) goto code_?;
            FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
          }
          KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_00,(MethodInfo *)0x0);
          KoGaMaPackageClient::KoGaMaPackageClient_Destroy
                    ((KoGaMaPackageClient *)pEVar2,(MethodInfo *)0x0);
          return;
        }
      }
code_?:
      func_?(0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (pEVar2 == (ESAddToMarketPlaceState *)0x3) {
      this = pEVar2;
      pOVar6 = (Object *)
               func_?(TypeInfo__ESAddToMarketPlaceState__AddToMarketPlaceInternalState,
                               &this);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar6,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void WOCM_ReceivedItemFromQuery(Object, ReceivedItemFromQueryEventArgs) */

void Assembly-CSharp.dll::ESAddToMarketPlaceState::
     ESAddToMarketPlaceState_WOCM_ReceivedItemFromQuery
               (ESAddToMarketPlaceState *this,Object *sender,ReceivedItemFromQueryEventArgs *e,
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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__ESAddToMarketPlaceState__WOCM_ReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
             ,
             MethodInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>__EventHandler_System__Object__void__
            );
  if (this_00 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
              (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,(MethodInfo *)0x0);
    if (e != (ReceivedItemFromQueryEventArgs *)0x0) {
      (this->fields).marketPlaceItemData = (e->fields).KoGaMaData;
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

