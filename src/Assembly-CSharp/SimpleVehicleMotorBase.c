
/* Void Init(SmoothCharacterController, VehicleInteractable) */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_Init
               (SimpleVehicleMotorBase *this,SmoothCharacterController *smoothController,
               VehicleInteractable *interactableLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).smoothController = smoothController;
  if (smoothController != (SmoothCharacterController *)0x0) {
    pMVar1 = (smoothController->fields).controller;
    if (pMVar1 != (MvCharacterController *)0x0) {
      pAVar2 = (pMVar1->fields).OnControllerColliderHit;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<MVControllerColliderHit>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)interactableLocal,
                 MethodInfo__VehicleInteractable__HandleMoveHit_MVControllerColliderHit_,
                 MethodInfo__System__Action<MVControllerColliderHit>__Action_System__Object__void__)
      ;
      pAVar4 = (Action_1_MVControllerColliderHit_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pAVar2 = (Action_1_MVControllerColliderHit_ *)0x0;
      if (pAVar4 != (Action_1_MVControllerColliderHit_ *)0x0) {
        if (pAVar4->klass == TypeInfo__System__Action<MVControllerColliderHit>) {
          pAVar2 = pAVar4;
        }
        if (pAVar2 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
      }
      (pMVar1->fields).OnControllerColliderHit = pAVar2;
      this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
      WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
      (this->fields).movableMotorState = (MVMovableMotorState *)this_00;
      pSVar5 = (this->fields).smoothController;
      if (pSVar5 != (SmoothCharacterController *)0x0) {
        pMVar1 = (pSVar5->fields).controller;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)pMVar1,
                   MethodInfo__MvCharacterController__GetOverlappingObjects__,
                   MethodInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>__Func_System__Object__void__
                  );
        this_01 = (MVRigidBody_StuckEvaluator *)
                  func_?(TypeInfo__MVRigidBody__StuckEvaluator);
        MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator__ctor
                  (this_01,(Func_1_System_Collections_Generic_List_1_MVOverlapResult_ *)pUVar3,
                   (MethodInfo *)0x0);
        (this->fields).stuckEvaluator = this_01;
        (this->fields).interactableLocal = (MVInteractableBase *)&UNK_?;
        return;
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean IsStuck() */

bool Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_IsStuck
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  this_00 = (this->fields).stuckEvaluator;
  if (this_00 == (MVRigidBody_StuckEvaluator *)0x0) {
    uStack_1 = 0;
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  uStack_1 = 0xffffffff;
  puStack_4 = &DAT_?;
  uStack_5 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_5;
  puStack_6 = &stack0xffffff38;
  puVar7 = &stack0xffffff38;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar7 = puStack_6;
  }
  puStack_6 = puVar7;
  pOStack_8 = (Object *)0x0;
  uStack_9 = 0;
  iStack_10 = 0;
  pDStack_11 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_12 = 0;
  iStack_13 = 0;
  iStack_14 = 0;
  fStack_15 = 0.0;
  CStack_16.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_16.monitor = (MonitorData *)0x0;
  CStack_16.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_16.fields.syncRoot = (Object *)0x0;
  pOStack_17 = (Object *)0x0;
  IStack_18.klass = (InputToPlayerMovementAndroid__Class *)0x0;
  IStack_18.monitor = (MonitorData *)0x0;
  IStack_18.fields.jump = 0;
  IStack_18.fields.jumpFrameUpdate = 0;
  IStack_18.fields.jumpFixedUpdate = 0;
  IStack_18.fields._3_1_ = 0;
  IStack_18.fields.direction.x = 0.0;
  bStack_19 = 0;
  IStack_18.fields.direction.y = 0.0;
  IStack_18.fields.direction.z = 0.0;
  pDStack_20 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_21 = 0;
  iStack_22 = 0;
  iStack_23 = 0;
  func_?();
  pDStack_24 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0xffffffff;
  piStack_25 = (int *)&stack0xffffff38;
  puStack_6 = &stack0xffffff38;
  pDStack_26 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((float)pDStack_26 - (this_00->fields).updateTime < (this_00->fields).updateInterval) {
    pDVar27 = (this_00->fields).stuckObjects;
    if (pDVar27 != (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0) {
      pOVar28 = System.Core.dll::System::Linq::
               Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
               KeyValuePair`2[System::Object,System::Object],System::Object]::
               Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                           *)pDVar27,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                         );
      if (pOVar28 != (Object *)0x0) goto code_?;
code_?:
      bStack_19 = 0;
code_?:
      *unaff_FS_OFFSET = uStack_5;
      return bStack_19;
    }
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
code_?:
    fVar29 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this_00->fields).updateTime = fVar29;
    pDStack_26 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_GetOverlapDictionary
                              (this_00,(MethodInfo *)0x0);
    if (pDStack_26 ==
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      pDVar30 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this_00->fields).stuckObjects;
      if (pDVar30 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                  (pDVar30,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                  );
        goto code_?;
      }
      goto code_?;
    }
    pDVar31 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)func_?();
    pDStack_32 = pDVar31;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)pDVar31,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    pDVar27 = (this_00->fields).stuckObjects;
    pDStack_33 = pDVar31;
    if ((pDVar27 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0) ||
       (this_01 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[WinningConditionType,System::Object]::
                  Dictionary_2_WinningConditionType_System_Object__get_Keys
                            ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar27,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                            ),
       this_01 == (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0)
       ) goto code_?;
    pDVar34 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                         *)&stack0xffffff48,
                        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                         *)this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                       );
    pDStack_11 = (pDVar34->host_enumerator).dictionary;
    iStack_12 = (pDVar34->host_enumerator).next;
    iStack_13 = (pDVar34->host_enumerator).stamp;
    iStack_14 = (pDVar34->host_enumerator).current.key;
    pOStack_8 = (pDVar34->host_enumerator).current.value;
    uStack_1 = 0;
    while (cVar35 = func_?(), cVar35 != '\0') {
      pMStack_36 = (MVRigidBody_StuckEvaluator_StuckObject *)func_?();
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32,MVOverlapResult]::Dictionary_2_System_Int32_MVOverlapResult__ContainsKey
                        ((Dictionary_2_System_Int32_MVOverlapResult_ *)pDStack_26,
                         (int32_t)pMStack_36,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                        );
      if (bVar3 == 0) {
        if (pDVar31 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pDVar31,(UIPushOption__Enum)pMStack_36,
                   MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
    }
    pDVar27 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0;
    pDStack_24 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0;
    *piStack_25 = 0xa4;
    uStack_1 = 0xffffffff;
    func_?();
    if (iStack_10 != 0) goto code_?;
    if (*piStack_25 == 0xa4) {
      pDVar27 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0xffffffff;
      pDStack_24 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0xffffffff;
    }
    if (pDStack_32 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
    goto code_?;
    pLVar37 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffff4c,
                        (List_1_UnityEngine_Color32_ *)pDStack_32,
                        MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    CStack_16.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar37->l;
    CStack_16.monitor = (MonitorData *)pLVar37->next;
    CStack_16.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar37->ver;
    CStack_16.fields.syncRoot = (Object *)(pLVar37->current).rgba;
    uStack_1 = 2;
    while (cVar35 = func_?(), piVar38 = piStack_25, cVar35 != '\0') {
      pOVar28 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_16,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                         );
      pDVar30 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this_00->fields).stuckObjects;
      if (pDVar30 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                (pDVar30,(int32_t)pOVar28,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                );
    }
    pDVar31 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)
             ((int)&pDVar27->klass + 1);
    piStack_25[(int)pDVar31] = 0xe7;
    uStack_1 = 0xffffffff;
    pDStack_32 = pDVar31;
    pDStack_24 = pDVar31;
    func_?();
    if (iStack_10 != 0) goto code_?;
    if (((pDVar31 != (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0xffffffff)
        && (piVar38[(int)pDVar31] == 0xe7)) && (-1 < (int)pDVar31)) {
      pDStack_32 = pDVar27;
      pDStack_24 = pDVar27;
    }
    if (pDStack_26 ==
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) goto code_?;
    pDVar39 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Experimental::
              TerrainAPI::TerrainUtility+TerrainMap+TileCoord,System::Object]::
              Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object__GetEnumerator
                        ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                          *)&stack0xffffff44,
                         (Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_System_Object_
                          *)pDStack_26,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                        );
    IStack_18.klass = (InputToPlayerMovementAndroid__Class *)pDVar39->dictionary;
    IStack_18.monitor = (MonitorData *)pDVar39->next;
    IStack_18.fields._0_4_ = pDVar39->stamp;
    IStack_18.fields.direction.x = (float)(pDVar39->current).key.tileX;
    IStack_18.fields.direction._4_8_ = *(undefined8 *)&(pDVar39->current).key.tileZ;
    uStack_1 = 4;
    while (cVar35 = func_?(), piVar38 = piStack_25, pDVar27 = pDStack_32, cVar35 != '\0') {
      pVVar40 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                          ((Vector3 *)&stack0xffffff50,&IStack_18,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__get_Current__
                          );
      pDVar27 = (this_00->fields).stuckObjects;
      uStack_9._0_4_ = pVVar40->x;
      uStack_9._4_4_ = pVVar40->y;
      fStack_15 = pVVar40->z;
      iVar41 = func_?();
      if (pDVar27 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
      goto code_?;
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar27,iVar41,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                        );
      if (bVar3 == 0) {
        pDStack_33 = (this_00->fields).stuckObjects;
        iStack_42 = func_?();
        overlapResult = (MVOverlapResult)func_?();
        pMStack_36 = (MVRigidBody_StuckEvaluator_StuckObject *)func_?();
        MVRigidBody+StuckEvaluator+StuckObject::MVRigidBody_StuckEvaluator_StuckObject__ctor
                  (pMStack_36,overlapResult,(MethodInfo *)0x0);
        if (pDStack_33 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDStack_33,iStack_42,
                   (Object *)pMStack_36,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                  );
      }
      else {
        pDVar30 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this_00->fields).stuckObjects;
        iVar41 = func_?();
        if (pDVar30 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) goto code_?;
        pTVar43 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                            (pDVar30,iVar41,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                            );
        uVar44 = func_?();
        if (pTVar43 == (TerrainUtility_TerrainMap *)0x0) goto code_?;
        (pTVar43->fields).m_patchSize.y = (float)(int)uVar44;
        (pTVar43->fields).m_patchSize.z = (float)(int)((ulonglong)uVar44 >> 0x20);
      }
    }
    pDVar31 = (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)
             ((int)&pDStack_32->klass + 1);
    piStack_25[(int)pDVar31] = 0x174;
    uStack_1 = 0xffffffff;
    pDStack_24 = pDVar31;
    func_?();
    if (iStack_10 == 0) {
      if (((pDVar31 != (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)
                      0xffffffff) && (piVar38[(int)pDVar31] == 0x174)) && (-1 < (int)pDVar31)) {
        pDStack_24 = pDVar27;
        pDVar31 = pDVar27;
      }
      if (pDStack_26 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                  (pDStack_26,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                  );
        pDVar27 = (this_00->fields).stuckObjects;
        if ((pDVar27 != (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0) &&
           (this_02 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[WinningConditionType,System::Object]::
                      Dictionary_2_WinningConditionType_System_Object__get_Values
                                ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar27,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                                ),
           this_02 !=
           (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)) {
          pDVar34 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                               *)&stack0xffffff48,this_02,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                             );
          pDStack_20 = (pDVar34->host_enumerator).dictionary;
          iStack_21 = (pDVar34->host_enumerator).next;
          iStack_22 = (pDVar34->host_enumerator).stamp;
          iStack_23 = (pDVar34->host_enumerator).current.key;
          pOStack_17 = (pDVar34->host_enumerator).current.value;
          uStack_1 = 6;
          do {
            cVar35 = func_?();
            if (cVar35 == '\0') {
              piStack_25[(int)((int)&pDVar31->klass + 1)] = 0x1cd;
              goto code_?;
            }
            this_03 = (MVRigidBody_StuckEvaluator_StuckObject *)func_?();
            if (this_03 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0) goto code_?;
            fVar29 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
          } while ((fVar29 - (this_03->fields).stuckTime < _UNK_?) ||
                  (bVar3 = MVRigidBody+StuckEvaluator+StuckObject::
                           MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                     (this_03,(MethodInfo *)0x0), bVar3 != 0));
          bStack_19 = 1;
          piStack_25[(int)((int)&pDVar31->klass + 1)] = 0x1cf;
code_?:
          piVar38 = piStack_25;
          puVar7 = (undefined1 *)((int)&pDVar31->klass + 1);
          uStack_1 = 0xffffffff;
          func_?();
          if (iStack_10 != 0) goto code_?;
          if ((puVar7 != (undefined1 *)0xffffffff) && (piVar38[(int)puVar7] == 0x1cf))
          goto code_?;
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void OnLocalVehicleLeave() */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_OnLocalVehicleLeave
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).DirectInputMoveMap.x = pVVar1->x;
  (this->fields).DirectInputMoveMap.y = fVar3;
  (this->fields).DirectInputMoveMap.z = fVar4;
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_Reset
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  MVRigidBody::MVRigidBody_Reset((MVRigidBody *)this,(MethodInfo *)0x0);
  pSVar1 = (this->fields).smoothController;
  if (pSVar1 != (SmoothCharacterController *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (pSVar1->fields).controller;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    if (this_00 != (MvCharacterController *)0x0) {
      MvCharacterController::MvCharacterController_set_Velocity(this_00,*pVVar2,(MethodInfo *)0x0);
      this_01 = (pSVar1->fields).smoothPhysicsMovement;
      if (this_01 != (SmoothPhysicsMovement *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        this_02 = (this_01->fields).packages;
        if (this_02 != (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) {
          System.dll::System::Collections::Generic::Queue`1[System::Int32]::
          Queue_1_System_Int32__Clear
                    ((Queue_1_System_Int32_ *)this_02,
                     MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                    );
          pTVar3 = (this_01->fields).targetTransform;
          (this_01->fields).current = (SmoothPhysicsMovement_Package *)0x0;
          (this_01->fields).next = (SmoothPhysicsMovement_Package *)0x0;
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this_01,(MethodInfo *)0x0);
          if (pTVar4 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xfffffff0,pTVar4,(MethodInfo *)0x0);
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar3,*pVVar2,(MethodInfo *)0x0);
              pTVar3 = (this_01->fields).targetTransform;
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this_01,(MethodInfo *)0x0);
              if (pTVar4 != (Transform *)0x0) {
                pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                   ((Quaternion *)&puStack_6,pTVar4,(MethodInfo *)0x0);
                if (pTVar3 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (pTVar3,*pQVar5,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateFunction() */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_UpdateFunction
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothController;
  if ((pSVar1 == (SmoothCharacterController *)0x0) ||
     (this_00 = (pSVar1->fields).smoothPhysicsMovement, this_00 == (SmoothPhysicsMovement *)0x0)) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar5 = (this_00->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    pIVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
              KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
              KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                        ((KogamaSettingNumericBase_1_System_Single_ *)pQVar5,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                        );
    if (0 < (int)pIVar6) {
      pQVar5 = (this_00->fields).packages;
      if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      pSVar7 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                Queue_1_SmoothPhysicsMovement_Package__Dequeue
                          (pQVar5,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (this_00->fields).current = pSVar7;
    }
    if ((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  if ((this_00->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar5 = (this_00->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    pIVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
              KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
              KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                        ((KogamaSettingNumericBase_1_System_Single_ *)pQVar5,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                        );
    if (0 < (int)pIVar6) {
      pQVar5 = (this_00->fields).packages;
      if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      pSVar7 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                Queue_1_SmoothPhysicsMovement_Package__Dequeue
                          (pQVar5,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (this_00->fields).next = pSVar7;
    }
  }
  if (((this_00->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
     (pSVar7 = (this_00->fields).next, pSVar7 == (SmoothPhysicsMovement_Package *)0x0)) {
    return;
  }
  do {
    if (fVar3 - fVar4 < (pSVar7->fields).time) {
code_?:
      pSVar7 = (this_00->fields).current;
      if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar8 = (pSVar7->fields).time;
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      fVar9 = ((fVar3 - fVar4) - fVar8) / fVar9;
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      pSVar7 = (this_00->fields).current;
      if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
      pSVar11 = (this_00->fields).next;
      VVar12 = (pSVar7->fields).position;
      if (pSVar11 == (SmoothPhysicsMovement_Package *)0x0) break;
      uVar13._0_4_ = (pSVar11->fields).position.x;
      uVar13._4_4_ = (pSVar11->fields).position.y;
      fVar3 = (pSVar11->fields).position.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      b_01.z = fVar3;
      b_01.x = (float)uVar13;
      b_01.y = SUB84(uVar13,4);
      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                          ((Vector3 *)&stack0xffffffdc,VVar12,b_01,fVar9,(MethodInfo *)0x0);
      if (pTVar10 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar10,*pVVar14,(MethodInfo *)0x0);
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      pSVar7 = (this_00->fields).current;
      if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar3 = (pSVar7->fields).rotation.x;
      fVar4 = (pSVar7->fields).rotation.y;
      fVar8 = (pSVar7->fields).rotation.z;
      fVar15 = (pSVar7->fields).rotation.w;
      pSVar7 = (this_00->fields).next;
      if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar16 = (pSVar7->fields).rotation.x;
      puVar17 = (undefined *)(pSVar7->fields).rotation.y;
      pQVar18 = (Quaternion__Class *)(pSVar7->fields).rotation.z;
      fVar19 = (pSVar7->fields).rotation.w;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        puVar17 = &UNK_?;
        pQVar18 = TypeInfo__UnityEngine__Quaternion;
        func_?();
      }
      a_00.y = fVar4;
      a_00.x = fVar3;
      a_00.z = fVar8;
      a_00.w = fVar15;
      b_00.y = (float)puVar17;
      b_00.x = fVar16;
      b_00.z = (float)pQVar18;
      b_00.w = fVar19;
      pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                          ((Quaternion *)&stack0xffffffd8,a_00,b_00,fVar9,(MethodInfo *)0x0);
      if (pTVar10 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar10,*pQVar20,(MethodInfo *)0x0);
      pMVar21 = (this_00->fields).worldObjectOwner;
      if (pMVar21 != (MVWorldObjectClient *)0x0) {
        pSVar7 = (this_00->fields).current;
        if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
        VVar12 = (pSVar7->fields).position;
        pSVar7 = (this_00->fields).next;
        if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
        uVar22._0_4_ = (pSVar7->fields).position.x;
        uVar22._4_4_ = (pSVar7->fields).position.y;
        fVar3 = (pSVar7->fields).position.z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          uVar22._0_4_ = (float)TypeInfo__UnityEngine__Vector3;
          func_?();
        }
        b_02.z = fVar3;
        b_02.x = (float)uVar22;
        b_02.y = SUB84(uVar22,4);
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                            ((Vector3 *)&stack0xffffffdc,VVar12,b_02,fVar9,(MethodInfo *)0x0);
        if (pMVar21 == (MVWorldObjectClient *)0x0) break;
        uVar23 = pVVar14->x;
        (*(code *)(pMVar21->klass->vtable).set_WorldPosition.method)(pMVar21,uVar23);
        pSVar7 = (this_00->fields).current;
        pMVar21 = (this_00->fields).worldObjectOwner;
        if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar3 = (pSVar7->fields).rotation.x;
        fVar4 = (pSVar7->fields).rotation.y;
        fVar8 = (pSVar7->fields).rotation.z;
        fVar15 = (pSVar7->fields).rotation.w;
        pSVar7 = (this_00->fields).next;
        if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar16 = (pSVar7->fields).rotation.x;
        puVar17 = (undefined *)(pSVar7->fields).rotation.y;
        pQVar18 = (Quaternion__Class *)(pSVar7->fields).rotation.z;
        fVar19 = (pSVar7->fields).rotation.w;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          puVar17 = &UNK_?;
          pQVar18 = TypeInfo__UnityEngine__Quaternion;
          func_?();
        }
        a.y = fVar4;
        a.x = fVar3;
        a.z = fVar8;
        a.w = fVar15;
        b.y = (float)puVar17;
        b.x = fVar16;
        b.z = (float)pQVar18;
        b.w = fVar19;
        pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                            ((Quaternion *)&stack0xffffffd8,a,b,fVar9,(MethodInfo *)0x0);
        if (pMVar21 == (MVWorldObjectClient *)0x0) break;
        MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(pMVar21,*pQVar20,(MethodInfo *)0x0);
      }
      this_01 = (this_00->fields).cullingSubscriberBase;
      if (this_01 == (CullingSubscriberBase *)0x0) {
        return;
      }
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      if ((pTVar10 != (Transform *)0x0) &&
         (pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffdc,pTVar10,(MethodInfo *)0x0),
         this_01 != (CullingSubscriberBase *)0x0)) {
        CullingSubscriberBase::CullingSubscriberBase_set_Position
                  (this_01,*pVVar14,(MethodInfo *)0x0);
        return;
      }
      break;
    }
    pQVar5 = (this_00->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pIVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
              KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
              KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                        ((KogamaSettingNumericBase_1_System_Single_ *)pQVar5,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                        );
    if ((int)pIVar6 < 1) goto code_?;
    (this_00->fields).current = (this_00->fields).next;
    pQVar5 = (this_00->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pSVar7 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
              Queue_1_SmoothPhysicsMovement_Package__Dequeue
                        (pQVar5,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                        );
    (this_00->fields).next = pSVar7;
  } while (pSVar7 != (SmoothPhysicsMovement_Package *)0x0);
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* SimpleVehicleMotorBase() */

void Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase__ctor
               (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (MVGroundState *)func_?(TypeInfo__MVGroundState);
  MVGroundState::MVGroundState__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._.groundState = this_00;
  (this->fields)._.weight = 1.0;
  (this->fields)._.density = 1.0;
  (this->fields)._.isPlayerControlled = 1;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  (this->fields)._.impulseVectors = (List_1_UnityEngine_Vector3_ *)this_01;
  MVComponent::MVComponent__ctor((MVComponent *)this,(MethodInfo *)0x0);
  return;
}


/* MvCharacterController get_Controller() */

MvCharacterController *
Assembly-CSharp.dll::SimpleVehicleMotorBase::SimpleVehicleMotorBase_get_Controller
          (SimpleVehicleMotorBase *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothController;
  if (pSVar1 != (SmoothCharacterController *)0x0) {
    return (pSVar1->fields).controller;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pMVar3 = (MvCharacterController *)(*pcVar2)();
  return pMVar3;
}

