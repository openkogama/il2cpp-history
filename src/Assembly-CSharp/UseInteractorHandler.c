
/* Void AddUseInteractor(UseInteractor) */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_AddUseInteractor
               (UseInteractorHandler *this,UseInteractor *useInteractor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((useInteractor != (UseInteractor *)0x0) &&
     (this_00 = (this->fields).useInteractors,
     this_00 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,(useInteractor->fields).woOwnerID
               ,(Object *)useInteractor,
               MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Add_int__UseInteractor_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Init(Int32, Collider) */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_Init
               (UseInteractorHandler *this,int32_t ownerWoId,Collider *triggingCollider,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).ownerWoId = ownerWoId;
  (this->fields).triggingCollider = triggingCollider;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                       (this_00,
                        MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                       );
    (this->fields).interactionBase = (MVInteractableBase *)pUVar1;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveUseInteractor(UseInteractor) */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_RemoveUseInteractor
               (UseInteractorHandler *this,UseInteractor *useInteractor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((useInteractor != (UseInteractor *)0x0) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).useInteractors,
     this_00 !=
     (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)0x0
     )) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
              (this_00,(useInteractor->fields).woOwnerID,
               MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Remove_int_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_Reset
               (UseInteractorHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).useInteractors;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Clear__);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* List`1[UseInteractor] SortByDistance() */

List_1_UseInteractor_ *
Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_SortByDistance
          (UseInteractorHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UseInteractorHandler___SortByDistance_c__AnonStorey0;
  this_02 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_00);
  this_00 = (this->fields).useInteractors;
  if (this_00 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                       ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Values__
                       );
    pLVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                       ((IEnumerable_1_UseInteractor_ *)source,
                        System__Collections__Generic__List<UseInteractor>_MethodInfo__System__Linq__Enumerable__ToList<UseInteractor>_System__Collections__Generic__IEnumerable<UseInteractor>_
                       );
    this_01 = (this->fields).triggingCollider;
    if (this_01 != (Collider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                (&BStack_2,this_01,(MethodInfo *)0x0);
      puVar3 = (undefined8 *)func_?();
      uVar4 = *puVar3;
      fVar5 = *(float *)(puVar3 + 1);
      if (this_02 != (ScaleAnimationBase *)0x0) {
        (this_02->fields)._ = (MonoBehaviour__Fields)(int)uVar4;
        (this_02->fields).state = (int)((ulonglong)uVar4 >> 0x20);
        (this_02->fields).originalScale.x = fVar5;
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this_02,
                   MethodInfo__UseInteractorHandler___SortByDistance_c__AnonStorey0____m__0_UseInteractor_
                   ,MethodInfo__System__Func<UseInteractor,_float>__Func_System__Object__void__);
        source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                              ((IOrderedEnumerable_1_System_Object_ *)pLVar1,
                               (Func_2_Object_Int64_ *)this_03,
                               System__Linq__IOrderedEnumerable<UseInteractor>_MethodInfo__System__Linq__Enumerable__OrderBy<UseInteractor,_float>_System__Collections__Generic__IEnumerable<UseInteractor>__System__Func<UseInteractor,_float>_
                              );
        pLVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                           ((IEnumerable_1_UseInteractor_ *)source_00,
                            System__Collections__Generic__List<UseInteractor>_MethodInfo__System__Linq__Enumerable__ToList<UseInteractor>_System__Collections__Generic__IEnumerable<UseInteractor>_
                           );
        return pLVar1;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pLVar1 = (List_1_UseInteractor_ *)(*pcVar6)();
  return pLVar1;
}


/* Void Update() */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_Update
               (UseInteractorHandler *this,MethodInfo *method)

{
  UseInteractorHandler_UpdateInteractorsWOID(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
     (this_00 = (pSVar1->fields).SpawnRoleModeTypeWrapper,
     this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
    bVar2 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                      (this_00,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    this_01 = (in_stack_3->fields).useInteractors;
    if (this_01 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0) {
      pOVar4 = System.Core.dll::System::Linq::
               Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
               KeyValuePair`2[System::Object,System::Object],System::Object]::
               Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                           *)this_01,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                         );
      if (0 < (int)pOVar4) {
        this_04 = UseInteractorHandler_SortByDistance(in_stack_3,(MethodInfo *)0x0);
        if (this_04 == (List_1_UseInteractor_ *)0x0) goto code_?;
        this_05 = (UseInteractor *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,0,
                             MethodInfo__System__Collections__Generic__List<UseInteractor>__get_Item_int_
                            );
        arg1 = (in_stack_3->fields).ownerWoId;
        arg2 = (in_stack_3->fields).interactionBase;
        if (this_05 == (UseInteractor *)0x0) goto code_?;
        pUVar5 = this_05;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_02 = (Func_3_Int32_Object_Boolean_ *)(this_05->fields).checkCanUseFunction;
        if ((this_02 == (Func_3_Int32_Object_Boolean_ *)0x0) ||
           (bVar2 = System.Core.dll::System::Func`3[Int32,Object,Boolean]::
                    Func_3_Int32_Object_Boolean__Invoke
                              (this_02,arg1,(Object *)arg2,
                               MethodInfo__System__Func<int,_MVInteractableBase,_bool>__Invoke_int__MVInteractableBase_
                              ), bVar2 != 0)) {
          pUVar6 = (this_05->fields).useInteractorVisuals;
          if (pUVar6 == (UseInteratorVisualization *)0x0) goto code_?;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pLVar7 = (pUVar6->fields).useRequirements;
          if (pLVar7 == (List_1_UseRequirement_ *)0x0) goto code_?;
          pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar7,
                              MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__
                             );
          if (pOVar4 != (Object *)0x0) {
            index = 0;
            pLVar7 = (pUVar6->fields).useRequirements;
            this_05 = pUVar5;
            while (pLVar7 != (List_1_UseRequirement_ *)0x0) {
              pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar7
                                  ,
                                  MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__
                                 );
              if ((int)pOVar4 <= index) goto code_?;
              this_03 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                        (pUVar6->fields).useRequirements;
              if ((this_03 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
                 (pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           EventSystems::IEventSystemHandler]::
                           List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                     (this_03,index,
                                      MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                                     ), pIVar8 == (IEventSystemHandler *)0x0)) break;
              (*(code *)pIVar8->klass[1]._0.events)();
              index = index + 1;
              pLVar7 = (pUVar6->fields).useRequirements;
            }
            goto code_?;
          }
code_?:
          UVar9 = UseInteractor::UseInteractor_EvaluateRequirementsUsability
                             (this_05,(MethodInfo *)0x0);
          if (1 < ((byte)UVar9 & 0xf)) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pIVar10 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
            if (pIVar10 != (IPlayModeUI *)0x0) {
              pIVar11 = pIVar10->klass;
              uVar12 = 0;
              uVar13._0_1_ = (pIVar11->_1).rank;
              uVar13._1_1_ = (pIVar11->_1).minimumAlignment;
              if (uVar13 != 0) {
                do {
                  if (pIVar11->interfaceOffsets[uVar12].interfaceType ==
                      (Il2CppClass *)TypeInfo__IPlayModeUI) {
                    ppMVar14 = &(&(pIVar10->klass->vtable).ShowEUseIcon)
                                [pIVar11->interfaceOffsets[uVar12].offset].method;
                    goto code_?;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar13);
              }
              ppMVar14 = (MethodInfo **)func_?();
code_?:
              (*(code *)*ppMVar14)();
              return;
            }
            goto code_?;
          }
        }
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar10 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
      if (pIVar10 != (IPlayModeUI *)0x0) {
        func_?();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void UpdateInteractorsWOID() */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_UpdateInteractorsWOID
               (UseInteractorHandler *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff70;
  puVar5 = &stack0xffffff70;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  pMStack_8 = (MVWorldObjectClientManager *)0x0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  puStack_9 = (undefined *)0x0;
  CStack_10.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_10.monitor = (MonitorData *)0x0;
  CStack_10.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_10.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_11 = 0xffffffff;
  this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).removeList;
  piStack_12 = (int *)&stack0xffffff70;
  puStack_4 = &stack0xffffff70;
  if (this_00 == (List_1_UnityEngine_UIVertex_ *)0x0) {
code_?:
    pMVar13 = (MVWorldObjectClientManager *)func_?(0);
    pMVar14 = unaff_ESI;
  }
  else {
    piStack_12 = (int *)&stack0xffffff70;
    puStack_4 = &stack0xffffff70;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,MethodInfo__System__Collections__Generic__List<int>__Clear__);
    this_01 = (this->fields).useInteractors;
    if (this_01 == (Dictionary_2_System_Int32_UseInteractor_ *)0x0) goto code_?;
    pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        auStack_16,(Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar15->dictionary;
    auStack_6._4_4_ = pDVar15->next;
    auStack_6._8_4_ = pDVar15->stamp;
    auStack_6._12_4_ = (pDVar15->current).key;
    auStack_6._16_4_ = (pDVar15->current).value;
    uStack_1 = 0;
code_?:
    cVar17 = func_?();
    if (cVar17 != '\0') {
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_UseInteractor>__get_Current__
                            );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      unaff_ESI = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      id = func_?();
      if (unaff_ESI != (MVWorldObjectClientManager *)0x0) {
        pMVar18 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (unaff_ESI,id,(MethodInfo *)0x0);
        if ((pMVar18 == (MVWorldObject *)0x0) || (iVar19 = func_?(), iVar19 == 0)) {
          this_05 = (List_1_UIPushOption_ *)(this->fields).removeList;
          item = func_?();
          unaff_ESI = (MVWorldObjectClientManager *)0x0;
          if (this_05 != (List_1_UIPushOption_ *)0x0) goto code_?;
        }
        else {
          iVar19 = func_?();
          if (iVar19 != 0) {
            unaff_ESI = *(MVWorldObjectClientManager **)(iVar19 + 0x10);
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            method_00 = (MethodInfo *)&UNK_?;
            bVar20 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)unaff_ESI,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar20 != 0) {
              this_05 = (List_1_UIPushOption_ *)(this->fields).removeList;
              goto code_?;
            }
            iVar19 = func_?();
            if ((iVar19 != 0) && (*(Collider **)(iVar19 + 0x10) != (Collider *)0x0)) {
              pBVar21 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                                 ((Bounds *)(auStack_6 + 0x14),*(Collider **)(iVar19 + 0x10),
                                  method_00);
              puStack_9 = (undefined *)(pBVar21->m_Center).x;
              this_02 = (this->fields).triggingCollider;
              if (this_02 != (Collider *)0x0) goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
    unaff_ESI = (MVWorldObjectClientManager *)0x0;
    *piStack_12 = 0xef;
    uStack_1 = 0xffffffff;
    func_?();
    pMVar13 = pMStack_8;
    pMVar14 = unaff_ESI;
    if (pMStack_8 == (MVWorldObjectClientManager *)0x0) {
      if (*piStack_12 == 0xef) {
        unaff_ESI = (MVWorldObjectClientManager *)0xffffffff;
      }
      this_03 = (List_1_UnityEngine_Color32_ *)(this->fields).removeList;
      if (this_03 != (List_1_UnityEngine_Color32_ *)0x0) {
        pLVar22 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                 List_1_UnityEngine_Color32__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_Color32_ *)(auStack_16 + 4),this_03,
                            MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
        CStack_10.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar22->l;
        CStack_10.monitor = (MonitorData *)pLVar22->next;
        CStack_10.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar22->ver;
        CStack_10.fields.syncRoot = (Object *)(pLVar22->current).rgba;
        uStack_1 = 2;
        while (cVar17 = func_?(), pMVar14 = pMStack_8, cVar17 != '\0') {
          key = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_10,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                          );
          this_04 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(this->fields).useInteractors;
          if (this_04 ==
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                    (this_04,(int32_t)key,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Remove_int_
                    );
        }
        piStack_12[(int)((int)&unaff_ESI->klass + 1)] = 0x137;
        uStack_1 = 0xffffffff;
        func_?(&CStack_10,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                       );
        if (pMVar14 == (MVWorldObjectClientManager *)0x0) {
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(pMVar13,0,0);
code_?:
  func_?(pMVar14,0,0);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
code_?:
  pBVar21 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                     ((Bounds *)(auStack_6 + 0x14),this_02,(MethodInfo *)0x0);
  cVar17 = func_?(&puStack_9,(pBVar21->m_Center).x,(pBVar21->m_Center).y,(pBVar21->m_Center).z
                          ,(pBVar21->m_Extents).x);
  if (cVar17 == '\0') {
    this_05 = (List_1_UIPushOption_ *)(this->fields).removeList;
code_?:
    item = func_?();
    unaff_ESI = (MVWorldObjectClientManager *)0x0;
    if (this_05 == (List_1_UIPushOption_ *)0x0) goto code_?;
code_?:
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              (this_05,item,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
  }
  goto code_?;
}


/* Void UpdateUseVisuals() */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_UpdateUseVisuals
               (UseInteractorHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
     (this_00 = (pSVar1->fields).SpawnRoleModeTypeWrapper,
     this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
    bVar2 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                      (this_00,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    this_01 = (this->fields).useInteractors;
    if (this_01 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0) {
      pOVar3 = System.Core.dll::System::Linq::
               Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
               KeyValuePair`2[System::Object,System::Object],System::Object]::
               Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                           *)this_01,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                         );
      if (0 < (int)pOVar3) {
        this_04 = UseInteractorHandler_SortByDistance(this,(MethodInfo *)0x0);
        if (this_04 == (List_1_UseInteractor_ *)0x0) goto code_?;
        this_05 = (UseInteractor *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,0,
                             MethodInfo__System__Collections__Generic__List<UseInteractor>__get_Item_int_
                            );
        arg1 = (this->fields).ownerWoId;
        arg2 = (this->fields).interactionBase;
        if (this_05 == (UseInteractor *)0x0) goto code_?;
        pUVar4 = this_05;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_02 = (Func_3_Int32_Object_Boolean_ *)(this_05->fields).checkCanUseFunction;
        if ((this_02 == (Func_3_Int32_Object_Boolean_ *)0x0) ||
           (bVar2 = System.Core.dll::System::Func`3[Int32,Object,Boolean]::
                    Func_3_Int32_Object_Boolean__Invoke
                              (this_02,arg1,(Object *)arg2,
                               MethodInfo__System__Func<int,_MVInteractableBase,_bool>__Invoke_int__MVInteractableBase_
                              ), bVar2 != 0)) {
          pUVar5 = (this_05->fields).useInteractorVisuals;
          if (pUVar5 == (UseInteratorVisualization *)0x0) goto code_?;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pLVar6 = (pUVar5->fields).useRequirements;
          if (pLVar6 == (List_1_UseRequirement_ *)0x0) goto code_?;
          pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar6,
                              MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__
                             );
          if (pOVar3 != (Object *)0x0) {
            index = 0;
            pLVar6 = (pUVar5->fields).useRequirements;
            this_05 = pUVar4;
            while (pLVar6 != (List_1_UseRequirement_ *)0x0) {
              pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar6
                                  ,
                                  MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__
                                 );
              if ((int)pOVar3 <= index) goto code_?;
              this_03 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                        (pUVar5->fields).useRequirements;
              if ((this_03 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
                 (pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           EventSystems::IEventSystemHandler]::
                           List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                     (this_03,index,
                                      MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                                     ), pIVar7 == (IEventSystemHandler *)0x0)) break;
              (*(code *)pIVar7->klass[1]._0.events)();
              index = index + 1;
              pLVar6 = (pUVar5->fields).useRequirements;
            }
            goto code_?;
          }
code_?:
          UVar8 = UseInteractor::UseInteractor_EvaluateRequirementsUsability
                             (this_05,(MethodInfo *)0x0);
          if (1 < ((byte)UVar8 & 0xf)) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pIVar9 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
            if (pIVar9 != (IPlayModeUI *)0x0) {
              pIVar10 = pIVar9->klass;
              uVar11 = 0;
              uVar12._0_1_ = (pIVar10->_1).rank;
              uVar12._1_1_ = (pIVar10->_1).minimumAlignment;
              if (uVar12 != 0) {
                do {
                  if (pIVar10->interfaceOffsets[uVar11].interfaceType ==
                      (Il2CppClass *)TypeInfo__IPlayModeUI) {
                    ppMVar13 = &(&(pIVar9->klass->vtable).ShowEUseIcon)
                                [pIVar10->interfaceOffsets[uVar11].offset].method;
                    goto code_?;
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar12);
              }
              ppMVar13 = (MethodInfo **)func_?();
code_?:
              (*(code *)*ppMVar13)();
              return;
            }
            goto code_?;
          }
        }
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar9 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
      if (pIVar9 != (IPlayModeUI *)0x0) {
        func_?();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Boolean Use() */

bool Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_Use
               (UseInteractorHandler *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  UseInteractorHandler_UpdateInteractorsWOID(this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractors;
  if (this_00 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0) {
    pOVar4 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                       );
    if (pOVar4 != (Object *)0x0) {
      this_04 = (List_1_UnityEngine_Color32_ *)
                UseInteractorHandler_SortByDistance(this,(MethodInfo *)0x0);
      if (this_04 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
      List_1_UnityEngine_Color32__GetEnumerator
                ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffb4,this_04,
                 MethodInfo__System__Collections__Generic__List<UseInteractor>__GetEnumerator__);
      uStack_1 = 0;
      do {
        do {
          cVar5 = func_?();
          if (cVar5 == '\0') {
            this_05 = (UseInteractor *)0x0;
            goto code_?;
          }
          this_05 = (UseInteractor *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                               &stack0xffffffc4,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__get_Current__
                              );
          arg1 = (this->fields).ownerWoId;
          arg2 = (this->fields).interactionBase;
          if (this_05 == (UseInteractor *)0x0) goto code_?;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (Func_3_Int32_Object_Boolean_ *)(this_05->fields).checkCanUseFunction;
        } while ((this_01 != (Func_3_Int32_Object_Boolean_ *)0x0) &&
                (bVar6 = System.Core.dll::System::Func`3[Int32,Object,Boolean]::
                         Func_3_Int32_Object_Boolean__Invoke
                                   (this_01,arg1,(Object *)arg2,
                                    MethodInfo__System__Func<int,_MVInteractableBase,_bool>__Invoke_int__MVInteractableBase_
                                   ), bVar6 == 0));
        this_02 = (this->fields)._.worldObjectParent;
        if (this_02 == (MVWorldObjectClient *)0x0) goto code_?;
        userWoID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
        bVar6 = UseInteractor::UseInteractor_Use(this_05,(int32_t)userWoID,(MethodInfo *)0x0);
      } while (bVar6 == 0);
      UseInteractor::UseInteractor_PayUseCost(this_05,(MethodInfo *)0x0);
code_?:
      uStack_1 = 0xffffffff;
      func_?();
      if (this_05 != (UseInteractor *)0x0) {
        if ((this_05->fields).reset != 0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_03 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(this->fields).useInteractors;
          if (this_03 ==
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                    (this_03,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Clear__
                    );
        }
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
    }
    *unaff_FS_OFFSET = uStack_3;
    return 0;
  }
code_?:
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* UseInteractorHandler() */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler__ctor
               (UseInteractorHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UseInteractor_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Dictionary__)
  ;
  (this->fields).useInteractors = this_00;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).removeList = (List_1_System_Int32_ *)this_01;
  (this->fields).ownerWoId = -1;
  MVComponent::MVComponent__ctor((MVComponent *)this,(MethodInfo *)0x0);
  return;
}

