
/* Void Initialize(CubeModelingStateMachine, MaterialsController) */

void Assembly-CSharp.dll::FirstTimeSetupTerrainEditTutorial::
     FirstTimeSetupTerrainEditTutorial_Initialize
               (FirstTimeSetupTerrainEditTutorial *this,
               CubeModelingStateMachine *cubeModelingStateMachine,
               MaterialsController *materialsController,MethodInfo *method)

{
  (this->fields).cubeModelingStateMachine = cubeModelingStateMachine;
  func_?(&(this->fields).cubeModelingStateMachine,cubeModelingStateMachine);
  (this->fields).materialsController = materialsController;
  func_?(&(this->fields).materialsController,materialsController);
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeSetupTerrainEditTutorial::
     FirstTimeSetupTerrainEditTutorial_OnShow
               (FirstTimeSetupTerrainEditTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Item_int_);
    func_?(&
                    TerrainCubeModelingControllerTutorial_MethodInfo__UnityEngine__Object__Instantiate<TerrainCubeModelingControllerTutorial>_TerrainCubeModelingControllerTutorial_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__FirstTimeSetupTerrainEditTutorial____c__DisplayClass4_0___OnShow_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FirstTimeSetupTerrainEditTutorial____c__DisplayClass4_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FirstTimeSetupTerrainEditTutorial____c__DisplayClass4_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    index = 0;
    value[1].monitor = (MonitorData *)0x0;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).pushOptions;
    while (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((this_00->fields)._size <= index) {
        original = (this->fields).terrainCubeModelingControllerTutorialPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar1 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original,
                            TerrainCubeModelingControllerTutorial_MethodInfo__UnityEngine__Object__Instantiate<TerrainCubeModelingControllerTutorial>_TerrainCubeModelingControllerTutorial_
                           );
        value[1].klass = pOVar1;
        func_?(value + 1,pOVar1);
        if (value[1].klass != (Object__Class *)0x0) {
          TerrainCubeModelingControllerTutorial::TerrainCubeModelingControllerTutorial_Initialize
                    ((TerrainCubeModelingControllerTutorial *)value[1].klass,
                     (this->fields).cubeModelingStateMachine,(this->fields).materialsController,
                     (MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__FirstTimeSetupTerrainEditTutorial____c__DisplayClass4_0___OnShow_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                    ((this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      pMVar2 = value[1].monitor;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Item_int_
                        );
      index = index + 1;
      value[1].monitor = (MonitorData *)((uint)RVar3 | (uint)pMVar2);
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).pushOptions;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* FirstTimeSetupTerrainEditTutorial() */

void Assembly-CSharp.dll::FirstTimeSetupTerrainEditTutorial::FirstTimeSetupTerrainEditTutorial__ctor
               (FirstTimeSetupTerrainEditTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UIPushOption>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UIPushOption>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UIPushOption_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UIPushOption>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UIPushOption>__List__);
  (this->fields).pushOptions = this_00;
  func_?(&(this->fields).pushOptions,this_00);
  FirstTimeActivatableMessage::FirstTimeActivatableMessage__ctor
            ((FirstTimeActivatableMessage *)this,(MethodInfo *)0x0);
  return;
}

