
/* Void OnDestroy() */

void Assembly-CSharp.dll::FadeableObject::FadeableObject_OnDestroy
               (FadeableObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>)
    ;
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IFadeParent>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Clear__)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                   );
    func_?(&
                    MethodInfo__FadeableObject____c__DisplayClass2_0___OnDestroy_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FadeableObject____c__DisplayClass2_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__FadeableObject____c__DisplayClass2_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    value[1].monitor = (MonitorData *)0x0;
    while( true ) {
      pLVar1 = (this->fields).materials;
      if (pLVar1 == (List_1_UnityEngine_Material_ *)0x0) break;
      if ((pLVar1->fields)._size <= (int)value[1].monitor) {
        if (pLVar1 != (List_1_UnityEngine_Material_ *)0x0) {
          length = (pLVar1->fields)._size;
          piVar2 = &(pLVar1->fields)._version;
          *piVar2 = *piVar2 + 1;
          (pLVar1->fields)._size = 0;
          if (0 < length) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pLVar1->fields)._items,0,length,(MethodInfo *)0x0);
          }
          return;
        }
        break;
      }
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction = value[2].klass;
      if (callbackFunction == (Object__Class *)0x0) {
        callbackFunction =
             (Object__Class *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>
                            );
        if (callbackFunction == (Object__Class *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__FadeableObject____c__DisplayClass2_0___OnDestroy_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        value[2].klass = callbackFunction;
        func_?(value + 2,callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IFadeParent>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>_
                );
      value[1].monitor = value[1].monitor + 1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::FadeableObject::FadeableObject_Start
               (FadeableObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>)
    ;
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IFadeParent>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                   );
    func_?(&
                    MethodInfo__FadeableObject____c__DisplayClass1_0___Start_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FadeableObject____c__DisplayClass1_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__FadeableObject____c__DisplayClass1_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    pIVar1 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    pMStack_2 = (MonitorData *)0x0;
    if (pIVar1 != (IEnumerable_1_System_Object_ *)0x0) {
      pIVar3 = pIVar1 + 2;
      for (; (int)pMStack_2 < (int)pIVar1[1].monitor; pMStack_2 = pMStack_2 + 1) {
        if (pIVar1[1].monitor <= pMStack_2) {
code_?:
          func_?();
          goto code_?;
        }
        if (pIVar3->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
        pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                           ((Renderer *)pIVar3->klass,(MethodInfo *)0x0);
        ppMVar5 = pMVar4->vector;
        uVar6 = 0;
        if (pMVar4 == (Material__Array *)0x0) goto code_?;
        for (; (int)uVar6 < (int)pMVar4->max_length; uVar6 = uVar6 + 1) {
          if (pMVar4->max_length <= uVar6) goto code_?;
          pLVar7 = (this->fields).materials;
          if (pLVar7 == (List_1_UnityEngine_Material_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar7,(Object *)*ppMVar5,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                    );
          ppMVar5 = ppMVar5 + 1;
        }
        pIVar3 = (IEnumerable_1_System_Object_ *)&pIVar3->monitor;
      }
      value[1].monitor = (MonitorData *)0x0;
      while( true ) {
        pLVar7 = (this->fields).materials;
        if (pLVar7 == (List_1_UnityEngine_Material_ *)0x0) break;
        if ((pLVar7->fields)._size <= (int)value[1].monitor) {
          return;
        }
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction = value[2].klass;
        if (callbackFunction == (Object__Class *)0x0) {
          callbackFunction =
               (Object__Class *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>
                              );
          if (callbackFunction == (Object__Class *)0x0) break;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                     MethodInfo__FadeableObject____c__DisplayClass1_0___Start_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          value[2].klass = callbackFunction;
          func_?(value + 2,callbackFunction);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IFadeParent>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>_
                  );
        value[1].monitor = value[1].monitor + 1;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* FadeableObject() */

void Assembly-CSharp.dll::FadeableObject::FadeableObject__ctor
               (FadeableObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Material>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Material_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Material>);
  if (this_00 != (List_1_UnityEngine_Material_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__List__);
    (this->fields).materials = this_00;
    func_?(&(this->fields).materials,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

