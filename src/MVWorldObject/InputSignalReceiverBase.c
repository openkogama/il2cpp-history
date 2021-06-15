
/* Void HandleInputLinkChanged(List`1[MV.WorldObject.Link]) */

void MVWorldObject.dll::InputSignalReceiverBase::InputSignalReceiverBase_HandleInputLinkChanged
               (InputSignalReceiverBase *this,List_1_MV_WorldObject_Link_ *inputLinkRefs,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (inputLinkRefs == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
  pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)inputLinkRefs,
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                     );
  pLVar2 = (this->fields).logicEvaluateSignalComponentBase;
  if (pLVar2 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
  if ((pLVar2->fields).signalsToEvaluate == 0) {
    if (pOVar1 != (Object *)0x0) {
      pLVar3 = (this->fields).logicObjectManager;
      key = (this->fields).woID;
      if (pLVar3 == (LogicObjectManager *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_00 = (pLVar3->fields).logicWorldObjects;
      if (this_00 == (Dictionary_2_System_Int32_IInputSignalReceiver_ *)0x0) goto code_?;
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__ContainsKey_int_
                        );
      if (bVar4 != 0) {
        this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(pLVar3->fields).logicWorldObjects;
        if (this_01 ==
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (this_01,key,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Remove_int_
                  );
      }
      goto code_?;
    }
code_?:
    pLVar2 = (this->fields).logicEvaluateSignalComponentBase;
    if (pLVar2 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
    if ((pLVar2->fields).signalsToEvaluate != 0) {
      pLVar3 = (this->fields).logicObjectManager;
      if (pLVar3 == (LogicObjectManager *)0x0) goto code_?;
      LogicObjectManager::LogicObjectManager_AddLogicObjectToUpdate
                (pLVar3,(this->fields).woID,(IInputSignalReceiver *)this,(MethodInfo *)0x0);
    }
  }
  else {
code_?:
    if (pOVar1 == (Object *)0x0) goto code_?;
  }
  pLVar2 = (this->fields).logicEvaluateSignalComponentBase;
  if (pLVar2 != (LogicEvaluateSignalComponentBase *)0x0) {
    (pLVar2->fields).signalsToEvaluate = (int32_t)pOVar1;
    return;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleSignalToEvaluateChange(Int32) */

void MVWorldObject.dll::InputSignalReceiverBase::
     InputSignalReceiverBase_HandleSignalToEvaluateChange
               (InputSignalReceiverBase *this,int32_t newNumberOfSignals,MethodInfo *method)

{
  pLVar1 = (this->fields).logicEvaluateSignalComponentBase;
  if (pLVar1 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
  if ((pLVar1->fields).signalsToEvaluate == 0) {
    if (newNumberOfSignals != 0) {
      pLVar2 = (this->fields).logicObjectManager;
      key = (this->fields).woID;
      if (pLVar2 == (LogicObjectManager *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_00 = (pLVar2->fields).logicWorldObjects;
      if (this_00 == (Dictionary_2_System_Int32_IInputSignalReceiver_ *)0x0) goto code_?;
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__ContainsKey_int_
                        );
      if (bVar3 != 0) {
        this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(pLVar2->fields).logicWorldObjects;
        if (this_01 ==
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (this_01,key,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Remove_int_
                  );
      }
      goto code_?;
    }
code_?:
    pLVar1 = (this->fields).logicEvaluateSignalComponentBase;
    if (pLVar1 == (LogicEvaluateSignalComponentBase *)0x0) goto code_?;
    if ((pLVar1->fields).signalsToEvaluate != 0) {
      pLVar2 = (this->fields).logicObjectManager;
      if (pLVar2 == (LogicObjectManager *)0x0) goto code_?;
      LogicObjectManager::LogicObjectManager_AddLogicObjectToUpdate
                (pLVar2,(this->fields).woID,(IInputSignalReceiver *)this,(MethodInfo *)0x0);
    }
  }
  else {
code_?:
    if (newNumberOfSignals == 0) goto code_?;
  }
  pLVar1 = (this->fields).logicEvaluateSignalComponentBase;
  if (pLVar1 != (LogicEvaluateSignalComponentBase *)0x0) {
    (pLVar1->fields).signalsToEvaluate = newNumberOfSignals;
    return;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SendSignal(Boolean) */

void MVWorldObject.dll::InputSignalReceiverBase::InputSignalReceiverBase_SendSignal
               (InputSignalReceiverBase *this,bool isHot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).logicObjectManager;
  if (pLVar1 != (LogicObjectManager *)0x0) {
    if ((pLVar1->fields).trackLoops == 0) {
code_?:
      arg2 = (*(code *)(this->klass->vtable).__unknown.method)
                       (this,(this->klass->vtable).__unknown_1.methodPtr);
      (*(code *)(this->klass->vtable).__unknown_1.method)(this,_isHot,this->klass[1]._0.image);
      bVar2 = (this->fields).firstFrame;
      if (bVar2 != 0) {
        arg2 = isHot ^ 1;
      }
      this_02 = (Action_3_Boolean_Boolean_Object_ *)(this->fields).OnSignal;
      if (this_02 != (Action_3_Boolean_Boolean_Object_ *)0x0) {
        System.Core.dll::System::Action`3[Boolean,Boolean,Object]::
        Action_3_Boolean_Boolean_Object__Invoke
                  (this_02,isHot,arg2,(Object *)(this->fields).logicObjectManager,
                   MethodInfo__System__Action<bool,_bool,_LogicObjectManager>__Invoke_bool__bool__LogicObjectManager_
                  );
        bVar2 = (this->fields).firstFrame;
      }
      if (bVar2 != 0) {
        (this->fields).firstFrame = 0;
      }
      return;
    }
    item = (UnityWebRequest *)(this->fields).woID;
    if (pLVar1 != (LogicObjectManager *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(pLVar1->fields).updatedIds;
      if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
        bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
                NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                          (this_00,(NativeAdType__Enum)item,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar2 != 0) goto code_?;
        this_01 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)(pLVar1->fields).updatedIds;
        if (this_01 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
          UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                    (this_01,item,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          goto code_?;
        }
      }
    }
  }
  func_?(0);
code_?:
  this_03 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_03,StringLiteral_Id_already_evaluated__This_is_a_,(MethodInfo *)0x0);
  func_?(this_03,0,MethodInfo__LogicObjectManager__DebugAddId_int_);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateSignal(Boolean) */

void MVWorldObject.dll::InputSignalReceiverBase::InputSignalReceiverBase_UpdateSignal
               (InputSignalReceiverBase *this,bool isHot,MethodInfo *method)

{
  pLVar1 = (this->fields).logicEvaluateSignalComponentBase;
  if (pLVar1 != (LogicEvaluateSignalComponentBase *)0x0) {
    if ((pLVar1->fields).signalsToEvaluate == 0) {
      InputSignalReceiverBase_SendSignal(this,isHot,(MethodInfo *)0x0);
      return;
    }
    if (pLVar1 != (LogicEvaluateSignalComponentBase *)0x0) {
      (*(code *)(pLVar1->klass->vtable).__unknown_1.method)(pLVar1,_isHot,pLVar1->klass[1]._0.image)
      ;
      pLVar1 = (this->fields).logicEvaluateSignalComponentBase;
      if (pLVar1 != (LogicEvaluateSignalComponentBase *)0x0) {
        pLVar2 = &pLVar1->fields;
        pLVar2->evaluatedSignals = pLVar2->evaluatedSignals + 1;
        pLVar1 = (this->fields).logicEvaluateSignalComponentBase;
        if (pLVar1 != (LogicEvaluateSignalComponentBase *)0x0) {
          if ((pLVar1->fields).evaluatedSignals != (pLVar1->fields).signalsToEvaluate) {
            return;
          }
          if (pLVar1 != (LogicEvaluateSignalComponentBase *)0x0) {
            (pLVar1->fields).evaluatedSignals = 0;
            pLVar1 = (this->fields).logicEvaluateSignalComponentBase;
            if (pLVar1 != (LogicEvaluateSignalComponentBase *)0x0) {
              isHot_00 = (*(code *)(pLVar1->klass->vtable).__unknown.method)
                                   (pLVar1,(pLVar1->klass->vtable).__unknown_1.methodPtr);
              InputSignalReceiverBase_SendSignal(this,isHot_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* InputSignalReceiverBase(MVWorldObject, LogicEvaluateSignalComponentBase, Boolean,
   LogicObjectManager) */

void MVWorldObject.dll::InputSignalReceiverBase::InputSignalReceiverBase__ctor
               (InputSignalReceiverBase *this,MVWorldObject *worldObject,
               LogicEvaluateSignalComponentBase *logicEvaluateSignalComponentBase,bool defaultInput,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).woID = -1;
  (this->fields).firstFrame = 1;
  (this->fields).trackloops = 1;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if (worldObject != (MVWorldObject *)0x0) {
    pAVar1 = (worldObject->fields).OnInputLinkChanged;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__System__Action<System::Collections::Generic::List<MV::WorldObject::Link>_>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__InputSignalReceiverBase__HandleInputLinkChanged_System__Collections__Generic__List<MV::WorldObject::Link>_
               ,
               MethodInfo__System__Action<System::Collections::Generic::List<MV::WorldObject::Link>_>__Action_System__Object__void__
              );
    pAVar2 = (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar1 = (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0;
    if (pAVar2 != (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
      if (pAVar2->klass ==
          TypeInfo__System__Action<System::Collections::Generic::List<MV::WorldObject::Link>_>) {
        pAVar1 = pAVar2;
      }
      pAVar3 = TypeInfo__System__Action<System::Collections::Generic::List<MV::WorldObject::Link>_>;
      if (pAVar1 == (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0)
      goto code_?;
    }
    (worldObject->fields).OnInputLinkChanged = pAVar1;
    pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)worldObject,(MethodInfo *)0x0);
    (this->fields).woID = (int32_t)pIVar4;
    (this->fields).logicObjectManager = logicObjectManager;
    (this->fields).logicEvaluateSignalComponentBase = logicEvaluateSignalComponentBase;
    this_02 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
              System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                          *)worldObject,(MethodInfo *)0x0);
    if (this_02 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0) {
      pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (this_02,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__get_Count__
                         );
      if (logicEvaluateSignalComponentBase != (LogicEvaluateSignalComponentBase *)0x0) {
        (logicEvaluateSignalComponentBase->fields).signalsToEvaluate = (int32_t)pOVar5;
        if (pOVar5 != (Object *)0x0) {
code_?:
          (this->fields)._DefaultInput_k__BackingField = defaultInput;
          return;
        }
        key = (this->fields).woID;
        if (logicObjectManager != (LogicObjectManager *)0x0) {
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          this_00 = (logicObjectManager->fields).logicWorldObjects;
          if (this_00 != (Dictionary_2_System_Int32_IInputSignalReceiver_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,(Object *)this,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Add_int__IInputSignalReceiver_
                      );
            goto code_?;
          }
        }
      }
    }
  }
  func_?(0);
  pAVar2 = extraout_ECX;
  pAVar3 = extraout_EDX;
code_?:
  func_?(pAVar2,pAVar3);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

