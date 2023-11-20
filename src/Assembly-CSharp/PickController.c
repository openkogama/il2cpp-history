
/* Int32 FindParentID(Transform) */

int32_t Assembly-CSharp.dll::PickController::PickController_FindParentID
                  (PickController *this,Transform *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (t != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (t,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return -1;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (t,(MethodInfo *)0x0);
    if (((pTVar1 != (Transform *)0x0) &&
        (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar1,(MethodInfo *)0x0), this_01 != (GameObject *)0x0))
       && (iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                             ((Object_1 *)this_01,(MethodInfo *)0x0),
          this_00 != (MVWorldObjectClientManager *)0x0)) {
      pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                         (this_00,iVar3,(MethodInfo *)0x0);
      if (pMVar4 == (MVWorldObjectClient *)0x0) {
        return -1;
      }
      return (pMVar4->fields)._.id;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar3 = (*pcVar5)();
  return iVar3;
}


/* Void Initialize(UnityAction`1[System.Int32], Boolean) */

void Assembly-CSharp.dll::PickController::PickController_Initialize
               (PickController *this,UnityAction_1_System_Int32_ *onPickCallback,bool setText,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&PickHelper_MethodInfo__UnityEngine__Object__Instantiate<PickHelper>_PickHelper_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__PickController__SelectionChanged_MVWorldObjectClient__MVWorldObjectClient_
                   );
    func_?(&
                    MethodInfo__PickController____c__DisplayClass7_0___Initialize_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PickController____c__DisplayClass7_0);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_MVWorldObjectClient>
                   );
    func_?(&StringLiteral_Select_wo_);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PickController____c__DisplayClass7_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields).shouldSetText = setText;
  (this->fields).pickCallback = onPickCallback;
  func_?(&(this->fields).pickCallback,onPickCallback);
  original = (this->fields).pickHelperPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      PickHelper_MethodInfo__UnityEngine__Object__Instantiate<PickHelper>_PickHelper_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    pOVar1 = value[1].klass;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_MVWorldObjectClient>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__PickController__SelectionChanged_MVWorldObjectClient__MVWorldObjectClient_
               ,(MethodInfo *)0x0);
    if ((pOVar1 != (Object__Class *)0x0) &&
       (piVar2 = *(int **)&(pOVar1->_0).byval_arg.attrs, piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x318))
                (piVar2,StringLiteral_Select_wo_,*(undefined4 *)(*piVar2 + 0x31c));
      (pOVar1->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)this_00;
      func_?(&(pOVar1->_0).byval_arg,this_00);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__PickController____c__DisplayClass7_0___Initialize_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Refresh() */

void Assembly-CSharp.dll::PickController::PickController_Refresh
               (PickController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Failed_to_parse_woid);
    func_?(&StringLiteral_No_wo_with_id__);
    func_?(&StringLiteral_Parent_is_not_valid_wo);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_WO_Root_Group);
    func_?(&StringLiteral_Can_t_choose_WO_Root_Group);
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  pTVar2 = (this->fields).woIDText;
  IStack_3.m_value = 0;
  if (pTVar2 == (Text *)0x0) goto code_?;
  pSVar4 = (String *)
           (*(code *)(pTVar2->klass->vtable).get_text.method)
                     (pTVar2,(pTVar2->klass->vtable).set_text.methodPtr);
  bVar5 = mscorlib.dll::System::Int32::Int32_TryParse(pSVar4,&IStack_3.m_value,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_Failed_to_parse_woid;
  if (bVar5 != 0) {
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar6 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar6,IStack_3.m_value,(MethodInfo *)0x0);
    if (pMVar7 == (MVWorldObject *)0x0) {
      pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_No_wo_with_id__,pSVar4,(MethodInfo *)0x0);
    }
    else {
      if ((pMVar7->fields).groupId == -1) {
        pTVar2 = (this->fields).woIDText;
        if (pTVar2 != (Text *)0x0) {
          (*(code *)(pTVar2->klass->vtable).set_text.method)
                    (pTVar2,::StringLiteral__,
                     (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          pTVar2 = (this->fields).woType;
          if (pTVar2 != (Text *)0x0) {
            (*(code *)(pTVar2->klass->vtable).set_text.method)
                      (pTVar2,StringLiteral_Can_t_choose_WO_Root_Group,
                       (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            return;
          }
        }
        goto code_?;
      }
      pTVar8 = mscorlib.dll::System::Object::Object_GetType((Object *)pMVar7,(MethodInfo *)0x0);
      if (pTVar8 == (Type *)0x0) goto code_?;
      pSVar4 = (String *)
               (*(code *)(pTVar8->klass->vtable).ToString.method)
                         (pTVar8,(pTVar8->klass->vtable).GetCustomAttributes.methodPtr);
      pTVar9 = (Transform *)pMVar7[1].fields.ownerActorNr;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Object);
        cRam_? = '\x01';
      }
      if (pTVar9 == (Transform *)0x0) goto code_?;
      x = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                    (pTVar9,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      pSVar1 = StringLiteral_Parent_is_not_valid_wo;
      if (bVar5 != 0) {
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar9,(MethodInfo *)0x0);
        if (((pTVar9 == (Transform *)0x0) ||
            (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pTVar9,(MethodInfo *)0x0),
            this_00 == (GameObject *)0x0)) ||
           (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                             ((Object_1 *)this_00,(MethodInfo *)0x0),
           pMVar6 == (MVWorldObjectClientManager *)0x0)) goto code_?;
        pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                           (pMVar6,goId,(MethodInfo *)0x0);
        pSVar1 = StringLiteral_Parent_is_not_valid_wo;
        if ((pMVar10 != (MVWorldObjectClient *)0x0) && (id = (pMVar10->fields)._.id, id != -1)) {
          pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((pMVar6 == (MVWorldObjectClientManager *)0x0) ||
             (pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMVar6,id,(MethodInfo *)0x0), pMVar7 == (MVWorldObject *)0x0))
          goto code_?;
          pSVar1 = StringLiteral_WO_Root_Group;
          if ((pMVar7->fields).groupId != -1) {
            pTVar8 = mscorlib.dll::System::Object::Object_GetType
                               ((Object *)pMVar7,(MethodInfo *)0x0);
            if (pTVar8 == (Type *)0x0) goto code_?;
            pSVar1 = (String *)func_?(3,pTVar8);
          }
        }
      }
    }
  }
  pTVar2 = (this->fields).woType;
  if (pTVar2 != (Text *)0x0) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,pSVar4,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar2 = (this->fields).parentType;
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)
                (pTVar2,pSVar1,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      return;
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SelectionChanged(MVWorldObjectClient, MVWorldObjectClient) */

void Assembly-CSharp.dll::PickController::PickController_SelectionChanged
               (PickController *this,MVWorldObjectClient *wo,MVWorldObjectClient *parent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__PickController____c___SelectionChanged_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PickController____c);
    func_?(&StringLiteral_WO_Root_Group);
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) goto code_?;
  (this->fields).pickedWoId = (wo->fields)._.id;
  if ((this->fields).shouldSetText != 0) {
    pTVar1 = (this->fields).woIDText;
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields).pickedWoId,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar1 = (this->fields).parentType;
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)
                  (pTVar1,StringLiteral_WO_Root_Group,
                   (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        if (parent != (MVWorldObjectClient *)0x0) {
          pTVar1 = (this->fields).parentType;
          pTVar3 = mscorlib.dll::System::Object::Object_GetType((Object *)parent,(MethodInfo *)0x0);
          if (pTVar3 == (Type *)0x0) goto code_?;
          uVar4 = (*(code *)(pTVar3->klass->vtable).ToString.method)
                            (pTVar3,(pTVar3->klass->vtable).GetCustomAttributes.methodPtr);
          if (pTVar1 == (Text *)0x0) goto code_?;
          (*(code *)(pTVar1->klass->vtable).set_text.method)
                    (pTVar1,uVar4,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
                    );
        }
        pTVar1 = (this->fields).woType;
        pTVar3 = mscorlib.dll::System::Object::Object_GetType((Object *)wo,(MethodInfo *)0x0);
        if (pTVar3 != (Type *)0x0) {
          uVar4 = (*(code *)(pTVar3->klass->vtable).ToString.method)
                            (pTVar3,(pTVar3->klass->vtable).GetCustomAttributes.methodPtr);
          if (pTVar1 != (Text *)0x0) {
            (*(code *)(pTVar1->klass->vtable).set_text.method)
                      (pTVar1,uVar4,
                       (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            PickController_Refresh(this,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
code_?:
  if ((this->fields).pickCallback != (UnityAction_1_System_Int32_ *)0x0) {
    pUVar6 = (this->fields).pickCallback;
    (*(pUVar6->fields)._._.invoke_impl)
              ((pUVar6->fields)._._.method_code,(this->fields).pickedWoId,
               (pUVar6->fields)._._.method);
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__PickController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__PickController____c);
  }
  callbackFunction = TypeInfo__PickController____c->static_fields->__9__8_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__PickController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__PickController____c);
    }
    object = TypeInfo__PickController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__PickController____c___SelectionChanged_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__PickController____c->static_fields->__9__8_0 = callbackFunction;
    func_?(&TypeInfo__PickController____c->static_fields->__9__8_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}

