
/* Void Initialize(CubeModelingStateMachine, MaterialsController) */

void Assembly-CSharp.dll::FirstTimeSetupTerrainEditTutorial::
     FirstTimeSetupTerrainEditTutorial_Initialize
               (FirstTimeSetupTerrainEditTutorial *this,
               CubeModelingStateMachine *cubeModelingStateMachine,
               MaterialsController *materialsController,MethodInfo *method)

{
  (this->fields).cubeModelingStateMachine = cubeModelingStateMachine;
  (this->fields).materialsController = materialsController;
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeSetupTerrainEditTutorial::
     FirstTimeSetupTerrainEditTutorial_OnShow
               (FirstTimeSetupTerrainEditTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeSetupTerrainEditTutorial___OnShow_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).state = 0;
    index = 0;
    pLVar1 = (this->fields).pushOptions;
    while (pLVar1 != (List_1_UIPushOption_ *)0x0) {
      iVar2 = index;
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Count__)
      ;
      if ((int)pOVar3 <= iVar2) {
        pXVar4 = (XpBoostParticlePreviewer *)
                 (this->fields).terrainCubeModelingControllerTutorialPrefab;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           (pXVar4,
                            TerrainCubeModelingControllerTutorial_MethodInfo__UnityEngine__Object__Instantiate<TerrainCubeModelingControllerTutorial>_TerrainCubeModelingControllerTutorial_
                           );
        (this_00->fields)._._._._.m_CachedPtr = pXVar4;
        if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
          TerrainCubeModelingControllerTutorial::TerrainCubeModelingControllerTutorial_Initialize
                    ((TerrainCubeModelingControllerTutorial *)pXVar4,
                     (this->fields).cubeModelingStateMachine,(this->fields).materialsController,
                     (MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
          this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                      );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_01,(Object *)this_00,
                     MethodInfo__FirstTimeSetupTerrainEditTutorial___OnShow_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                    );
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          firstTimeEvent = (this->fields)._._.firstTimeEvent;
          if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
            func_?();
          }
          FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                    (firstTimeEvent,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      pLVar1 = (this->fields).pushOptions;
      if (pLVar1 == (List_1_UIPushOption_ *)0x0) break;
      pMVar5 = MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Item_int_;
      UVar6 = mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__get_Item
                        (pLVar1,index,
                         MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Item_int_
                        );
      index = index + 1;
      (this_00->fields).state = UVar6 | (uint)pMVar5;
      pLVar1 = (this->fields).pushOptions;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* FirstTimeSetupTerrainEditTutorial() */

void Assembly-CSharp.dll::FirstTimeSetupTerrainEditTutorial::FirstTimeSetupTerrainEditTutorial__ctor
               (FirstTimeSetupTerrainEditTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UIPushOption>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<UIPushOption>__List__);
  (this->fields).pushOptions = (List_1_UIPushOption_ *)this_00;
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

