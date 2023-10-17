
/* Void AddMaterialsToAvatarFader() */

void Assembly-CSharp.dll::FadeableAvatarObject::FadeableAvatarObject_AddMaterialsToAvatarFader
               (FadeableAvatarObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>)
    ;
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IFadeParent>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                   );
    func_?(&
                    MethodInfo__FadeableAvatarObject____c__DisplayClass4_0___AddMaterialsToAvatarFader_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FadeableAvatarObject____c__DisplayClass4_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__FadeableAvatarObject____c__DisplayClass4_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    value[1].monitor = (MonitorData *)0x0;
    while (pLVar1 = (this->fields).materials, pLVar1 != (List_1_UnityEngine_Material_ *)0x0) {
      if ((pLVar1->fields)._size <= (int)value[1].monitor) {
        return;
      }
      callbackFunction = value[2].klass;
      root = (this->fields).avatarObject;
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
                   MethodInfo__FadeableAvatarObject____c__DisplayClass4_0___AddMaterialsToAvatarFader_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(GameObject) */

void Assembly-CSharp.dll::FadeableAvatarObject::FadeableAvatarObject_Initialize
               (FadeableAvatarObject *this,GameObject *avatarObject,MethodInfo *method)

{
  (this->fields).avatarObject = avatarObject;
  func_?(&(this->fields).avatarObject,avatarObject);
  FadeableAvatarObject_AddMaterialsToAvatarFader(this,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FadeableAvatarObject::FadeableAvatarObject_OnDestroy
               (FadeableAvatarObject *this,MethodInfo *method)

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
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__FadeableAvatarObject____c__DisplayClass5_0___OnDestroy_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FadeableAvatarObject____c__DisplayClass5_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__FadeableAvatarObject____c__DisplayClass5_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    pGVar1 = (this->fields).avatarObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
code_?:
      pLVar3 = (this->fields).materials;
      if (pLVar3 != (List_1_UnityEngine_Material_ *)0x0) {
        length = (pLVar3->fields)._size;
        piVar4 = &(pLVar3->fields)._version;
        *piVar4 = *piVar4 + 1;
        (pLVar3->fields)._size = 0;
        if (0 < length) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar3->fields)._items,0,length,(MethodInfo *)0x0);
        }
        return;
      }
    }
    else {
      value[1].monitor = (MonitorData *)0x0;
      while (pLVar3 = (this->fields).materials, pLVar3 != (List_1_UnityEngine_Material_ *)0x0) {
        if ((pLVar3->fields)._size <= (int)value[1].monitor) goto code_?;
        callbackFunction = value[2].klass;
        pGVar1 = (this->fields).avatarObject;
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
                     MethodInfo__FadeableAvatarObject____c__DisplayClass5_0___OnDestroy_b__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          value[2].klass = callbackFunction;
          func_?(value + 2,callbackFunction);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar1,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IFadeParent>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>_
                  );
        value[1].monitor = value[1].monitor + 1;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::FadeableAvatarObject::FadeableAvatarObject_Start
               (FadeableAvatarObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pIVar1 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                     ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this,
                      UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                     );
  pMVar2 = (MonitorData *)0x0;
  if (pIVar1 == (IEnumerable_1_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pIVar3 = pIVar1 + 2;
    while( true ) {
      if ((int)pIVar1[1].monitor <= (int)pMVar2) {
        x = (this->fields).avatarObject;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          FadeableAvatarObject_AddMaterialsToAvatarFader(this,(MethodInfo *)0x0);
        }
        return;
      }
      if (pIVar1[1].monitor <= pMVar2) break;
      if (pIVar3->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
      pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                         ((Renderer *)pIVar3->klass,(MethodInfo *)0x0);
      ppMVar6 = pMVar5->vector;
      uVar7 = 0;
      pIVar1 = unaff_ESI;
      if (pMVar5 == (Material__Array *)0x0) goto code_?;
      for (; (int)uVar7 < (int)pMVar5->max_length; uVar7 = uVar7 + 1) {
        if (pMVar5->max_length <= uVar7) goto code_?;
        this_00 = (this->fields).materials;
        if (this_00 == (List_1_UnityEngine_Material_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_00,(Object *)*ppMVar6,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                  );
        ppMVar6 = ppMVar6 + 1;
      }
      pMVar2 = pMVar2 + 1;
      pIVar3 = (IEnumerable_1_System_Object_ *)&pIVar3->monitor;
      unaff_ESI = pIVar1;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* FadeableAvatarObject() */

void Assembly-CSharp.dll::FadeableAvatarObject::FadeableAvatarObject__ctor
               (FadeableAvatarObject *this,MethodInfo *method)

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

