
/* Void AddRequirement(UseRequirement) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_AddRequirement
               (UseInteractor *this,UseRequirement *useRequirement,MethodInfo *method)

{
  this_00 = (this->fields).useInteractorVisuals;
  if (this_00 != (UseInteractorVisualization *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_
                     );
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).useRequirements;
    if (this_01 != (List_1_UseRequirement_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_01,(Object *)useRequirement,
                 MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_
                );
      if ((this_00->fields).hasInputBlockingRequirement == 0) {
        if (useRequirement == (UseRequirement *)0x0) goto code_?;
        cVar1 = (*(code *)(useRequirement->klass->vtable).get_IsInputBlocking.method)
                          (useRequirement,
                           (useRequirement->klass->vtable).get_IsInputBlockingNow.methodPtr);
      }
      else {
        cVar1 = '\x01';
      }
      (this_00->fields).hasInputBlockingRequirement = cVar1 != '\0';
      UseInteractorVisualization::UseInteractorVisualization_CalculateSpacing
                (this_00,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* UseGUIResult EvaluateRequirementsUsability() */

UseGUIResult__Enum
Assembly-CSharp.dll::UseInteractor::UseInteractor_EvaluateRequirementsUsability
          (UseInteractor *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractorVisuals;
  if (pUVar1 != (UseInteractorVisualization *)0x0) {
    uVar2 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &stack0xfffffff0;
    puStack_3 = &stack0xffffffbc;
    puVar4 = &stack0xffffffbc;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                     );
      func_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__);
      cRam_? = '\x01';
      puVar4 = puStack_3;
    }
    puStack_3 = puVar4;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pUVar1->fields).useRequirements;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((this_00->fields)._size == 0) {
        *unaff_FS_OFFSET = uVar2;
        return UseGUIResult__Enum_NoCost;
      }
      UVar5 = 0;
      pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_7,this_00,
                          MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                         );
      LStack_8._list = (List_1_System_Object_ *)pLVar6->_list;
      LStack_8._index = pLVar6->_index;
      LStack_8._version = pLVar6->_version;
      LStack_8._current = *(Object **)&pLVar6->_current;
      LStack_7._version = 0;
      LStack_7._current = (RegexCharClass_SingleRange)&LStack_8;
      while( true ) {
        this_01 = &LStack_8;
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (this_01,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                          );
        if (bVar9 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                     ,unaff_retaddr);
          *unaff_FS_OFFSET = this_01;
          return UVar5;
        }
        if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0)
        break;
        UVar10 = (**(code **)(*(int *)LStack_8._current + 0xe0))();
        UVar5 = UVar5 | UVar10;
      }
    }
  }
  puStack_3 = &stack0xfffffff0;
  puStack_3 = (undefined1 *)func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  UVar5 = (*pcVar11)();
  return UVar5;
}


/* ShowUseOption GetGUIShowOptions() */

ShowUseOption__Enum
Assembly-CSharp.dll::UseInteractor::UseInteractor_GetGUIShowOptions
          (UseInteractor *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractorVisuals;
  if (pUVar1 != (UseInteractorVisualization *)0x0) {
    uVar2 = *unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &stack0xfffffff0;
    puStack_3 = &stack0xffffffbc;
    puVar4 = &stack0xffffffbc;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                     );
      func_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__);
      cRam_? = '\x01';
      puVar4 = puStack_3;
    }
    puStack_3 = puVar4;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pUVar1->fields).useRequirements;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      if ((this_00->fields)._size == 0) {
        *unaff_FS_OFFSET = uVar2;
        return ShowUseOption__Enum_Normal;
      }
      SVar5 = ShowUseOption__Enum_Normal;
      pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_7,this_00,
                          MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                         );
      LStack_8._list = (List_1_System_Object_ *)pLVar6->_list;
      LStack_8._index = pLVar6->_index;
      LStack_8._version = pLVar6->_version;
      LStack_8._current = *(Object **)&pLVar6->_current;
      LStack_7._version = 0;
      LStack_7._current = (RegexCharClass_SingleRange)&LStack_8;
      while( true ) {
        this_01 = &LStack_8;
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (this_01,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                          );
        if (bVar9 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                     ,unaff_retaddr);
          *unaff_FS_OFFSET = this_01;
          return SVar5;
        }
        if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0)
        break;
        SVar10 = (**(code **)(*(int *)LStack_8._current + 0x100))();
        SVar5 = SVar5 | SVar10;
      }
    }
  }
  puStack_3 = &stack0xfffffff0;
  puStack_3 = (undefined1 *)func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  SVar5 = (*pcVar11)();
  return SVar5;
}


/* Boolean GetInteractorCanBeUsed(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::UseInteractor::UseInteractor_GetInteractorCanBeUsed
               (UseInteractor *this,int32_t woId,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  pFVar1 = (this->fields).checkCanUseFunction;
  if (pFVar1 == (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0) {
    return 1;
  }
  bVar2 = (*(pFVar1->fields)._._.invoke_impl)
                    ((pFVar1->fields)._._.method_code,woId,avatarInteractable,
                     (pFVar1->fields)._._.method);
  return bVar2;
}


/* UseInteractorHandler GetUseInteractorHandler(Int32) */

UseInteractorHandler *
Assembly-CSharp.dll::UseInteractor::UseInteractor_GetUseInteractorHandler
          (UseInteractor *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UseInteractorHandler_MethodInfo__UnityEngine__GameObject__GetComponent<UseInteractorHandler>__
                   );
    func_?(&TypeInfo__MVVehicleBase);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    this_02 = (MVAvatar *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_01,woID,(MethodInfo *)0x0);
    if (this_02 == (MVAvatar *)0x0) {
      return (UseInteractorHandler *)0x0;
    }
    if ((this->fields)._UsedInVehicles_k__BackingField != 0) {
      bVar1 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
      if ((bVar1 <= (this_02->klass->_1).naturalAligment) &&
         ((MVVehicleBase__Class *)(this_02->klass->_1).typeHierarchy[bVar1 - 1] ==
          TypeInfo__MVVehicleBase)) {
        pMVar2 = MVVehicleBase::MVVehicleBase_GetDriver((MVVehicleBase *)this_02,(MethodInfo *)0x0);
        if (pMVar2 != (MVAvatar *)0x0) {
          this_02 = pMVar2;
        }
      }
    }
    this_00 = (((MVBlueprintBase__Fields *)&(this_02->fields)._)->_)._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      pUVar3 = (UseInteractorHandler *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this_00,
                          UseInteractorHandler_MethodInfo__UnityEngine__GameObject__GetComponent<UseInteractorHandler>__
                         );
      return pUVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pUVar3 = (UseInteractorHandler *)(*pcVar4)();
  return pUVar3;
}


/* Boolean HasUseRequirements() */

bool Assembly-CSharp.dll::UseInteractor::UseInteractor_HasUseRequirements
               (UseInteractor *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pUVar2 = (this->fields).useInteractorVisuals;
  if (pUVar2 != (UseInteractorVisualization *)0x0) {
    return (pUVar2->fields)._HasUseRequirements_k__BackingField;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void OnDestroy(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_OnDestroy
               (UseInteractor *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  this_00 = (this->fields).useInteractorVisuals;
  if (this_00 != (UseInteractorVisualization *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Func<UseRequirement,_bool>);
      func_?(&
                      MethodInfo__UseInteractorVisualization____c___DestroyRequirementObjects_b__42_0_UseRequirement_
                     );
      func_?(&
                      MethodInfo__UseInteractorVisualization____c__DisplayClass42_0___DestroyRequirementObjects_b__1_UseRequirement_
                     );
      func_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass42_0);
      func_?(&TypeInfo__UseInteractorVisualization____c);
      cRam_? = '\x01';
    }
    value = (Object *)func_?(TypeInfo__UseInteractorVisualization____c__DisplayClass42_0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    if (value != (Object *)0x0) {
      value[1].klass = (Object__Class *)data;
      func_?(value + 1,data);
      if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UseInteractorVisualization____c);
      }
      this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__42_0;
      if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
        if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UseInteractorVisualization____c);
        }
        object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
        this_01 = (Func_2_UseRequirement_Boolean_ *)
                  func_?(TypeInfo__System__Func<UseRequirement,_bool>);
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  ((Func_2_Object_Boolean_ *)this_01,(Object *)object,
                   MethodInfo__UseInteractorVisualization____c___DestroyRequirementObjects_b__42_0_UseRequirement_
                   ,(MethodInfo *)0x0);
        TypeInfo__UseInteractorVisualization____c->static_fields->__9__42_0 = this_01;
        func_?(&TypeInfo__UseInteractorVisualization____c->static_fields->__9__42_0,this_01
                       );
      }
      this_02 = (Func_2_Object_Boolean_ *)
                func_?(TypeInfo__System__Func<UseRequirement,_bool>);
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                (this_02,value,
                 MethodInfo__UseInteractorVisualization____c__DisplayClass42_0___DestroyRequirementObjects_b__1_UseRequirement_
                 ,(MethodInfo *)0x0);
      UseInteractorVisualization::UseInteractorVisualization_ChangeUseRequirements
                (this_00,this_01,(Func_2_UseRequirement_Boolean_ *)this_02,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PayUseCost() */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_PayUseCost
               (UseInteractor *this,MethodInfo *method)

{
  this_00 = (this->fields).useInteractorVisuals;
  if (this_00 != (UseInteractorVisualization *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Func<UseRequirement,_bool>);
      func_?(&
                      MethodInfo__UseInteractorVisualization____c___PayUseCost_b__41_0_UseRequirement_
                     );
      func_?(&
                      MethodInfo__UseInteractorVisualization____c___PayUseCost_b__41_1_UseRequirement_
                     );
      func_?(&TypeInfo__UseInteractorVisualization____c);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UseInteractorVisualization____c);
    }
    this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_0;
    if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
      if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UseInteractorVisualization____c);
      }
      pUVar1 = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
      this_01 = (Func_2_UseRequirement_Boolean_ *)
                func_?(TypeInfo__System__Func<UseRequirement,_bool>);
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                ((Func_2_Object_Boolean_ *)this_01,(Object *)pUVar1,
                 MethodInfo__UseInteractorVisualization____c___PayUseCost_b__41_0_UseRequirement_,
                 (MethodInfo *)0x0);
      TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_0 = this_01;
      func_?(&TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_0,this_01);
    }
    if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UseInteractorVisualization____c);
    }
    this_02 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_1;
    if (this_02 == (Func_2_UseRequirement_Boolean_ *)0x0) {
      if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UseInteractorVisualization____c);
      }
      pUVar1 = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
      this_02 = (Func_2_UseRequirement_Boolean_ *)
                func_?(TypeInfo__System__Func<UseRequirement,_bool>);
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                ((Func_2_Object_Boolean_ *)this_02,(Object *)pUVar1,
                 MethodInfo__UseInteractorVisualization____c___PayUseCost_b__41_1_UseRequirement_,
                 (MethodInfo *)0x0);
      TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_1 = this_02;
      func_?(&TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_1,this_02);
    }
    UseInteractorVisualization::UseInteractorVisualization_ChangeUseRequirements
              (this_00,this_01,this_02,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_UpdateData
               (UseInteractor *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  this_01 = (this->fields).useInteractorVisuals;
  pMVar1 = (MonitorData *)(this->fields).woOwnerID;
  if (this_01 != (UseInteractorVisualization *)0x0) {
    pUVar2 = this_01;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Func<UseRequirement,_bool>);
      func_?(&
                      MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_
                     );
      in_stack_3 =
           &
           MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
      ;
      func_?();
      func_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
      func_?(&TypeInfo__UseInteractorVisualization____c);
      cRam_? = '\x01';
    }
    value = (Object *)func_?(TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_3);
    if (value != (Object *)0x0) {
      value[1].klass = (Object__Class *)data;
      func_?(value + 1,data);
      value[1].monitor = pMVar1;
      if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UseInteractorVisualization____c);
      }
      this_00 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0;
      if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) {
        this_01 = pUVar2;
        if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UseInteractorVisualization____c);
          this_01 = pUVar2;
        }
        object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
        this_00 = (Func_2_UseRequirement_Boolean_ *)
                  func_?(TypeInfo__System__Func<UseRequirement,_bool>);
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  ((Func_2_Object_Boolean_ *)this_00,(Object *)object,
                   MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_,
                   (MethodInfo *)0x0);
        TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 = this_00;
        func_?(&TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0,this_00
                       );
        this = (UseInteractor *)func_?(TypeInfo__System__Func<UseRequirement,_bool>);
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  ((Func_2_Object_Boolean_ *)this,value,
                   MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                   ,(MethodInfo *)0x0);
      }
      else {
        this = (UseInteractor *)func_?(TypeInfo__System__Func<UseRequirement,_bool>);
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  ((Func_2_Object_Boolean_ *)this,value,
                   MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                   ,(MethodInfo *)0x0);
      }
      UseInteractorVisualization::UseInteractorVisualization_ChangeUseRequirements
                (this_01,this_00,(Func_2_UseRequirement_Boolean_ *)this,(MethodInfo *)0x0);
      UseInteractorVisualization::UseInteractorVisualization_CalculateSpacing
                (this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean Use(Int32) */

bool Assembly-CSharp.dll::UseInteractor::UseInteractor_Use
               (UseInteractor *this,int32_t userWoID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  pUVar1 = this;
  pUVar2 = (this->fields).useInteractorVisuals;
  if (pUVar2 != (UseInteractorVisualization *)0x0) {
    UVar3 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                      (pUVar2,(MethodInfo *)0x0);
    if ((UVar3 & UseGUIResult__Enum_CannotAfford) == 0) {
      pFVar4 = (pUVar1->fields).useFunction;
      if (pFVar4 != (Func_2_Int32_Boolean_ *)0x0) {
        bVar5 = (*(pFVar4->fields)._._.invoke_impl)((pFVar4->fields)._._.method_code,userWoID);
        return bVar5;
      }
    }
    else {
      pUVar2 = (pUVar1->fields).useInteractorVisuals;
      if (pUVar2 != (UseInteractorVisualization *)0x0) {
        UVar3 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                          (pUVar2,(MethodInfo *)0x0);
        if ((UVar3 & UseGUIResult__Enum_CannotAfford) != 0) {
          this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                    (this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          this = (UseInteractor *)CONCAT13(10,this._0_3_);
          key = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
          value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
          if (this_00 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            userWoID = (int32_t)TypeInfo__NotificationController;
            this = (UseInteractor *)&UNK_?;
            func_?();
          }
          userWoID = 0;
          this = (UseInteractor *)this_00;
          NotificationController::NotificationController_OnNotificationReceived
                    (NotificationType__Enum_Requirement,
                     (Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
        }
        return 0;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* UseInteractor(MVWorldObjectClient, GameObject, Boolean, Collider, Func`2[Int32,Boolean],
   Func`3[Int32,MVInteractableBase,Boolean], Single, Boolean) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor__ctor
               (UseInteractor *this,MVWorldObjectClient *wo,GameObject *owner,bool reset,
               Collider *triggerCollider,Func_2_Int32_Boolean_ *useFunction,
               Func_3_Int32_MVInteractableBase_Boolean_ *checkCanUseFunction,float yOffset,
               bool usedInVehicles,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UseInteractorVisualization_MethodInfo__UnityEngine__GameObject__AddComponent<UseInteractorVisualization>__
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (owner != (GameObject *)0x0) {
    pUVar1 = (UseInteractorVisualization *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (owner,
                        UseInteractorVisualization_MethodInfo__UnityEngine__GameObject__AddComponent<UseInteractorVisualization>__
                       );
    ppUVar2 = &(this->fields).useInteractorVisuals;
    *ppUVar2 = pUVar1;
    func_?(ppUVar2,pUVar1);
    pUVar1 = *ppUVar2;
    if (pUVar1 != (UseInteractorVisualization *)0x0) {
      ppMVar3 = &(pUVar1->fields).wo;
      *ppMVar3 = wo;
      func_?(ppMVar3,wo);
      (pUVar1->fields).pivot.y = yOffset;
      UseInteractorVisualization::UseInteractorVisualization_CalculateSpacing
                (pUVar1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MainCameraManager);
        cRam_? = '\x01';
      }
      if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MainCameraManager);
      }
      fVar4 = (TypeInfo__MainCameraManager->static_fields->DistanceToAvatarBase - _UNK_?) /
              _UNK_?;
      if (fVar4 < 0.0) {
        fVar4 = 0.0;
      }
      else if (_UNK_? < fVar4) {
        fVar4 = _UNK_?;
      }
      if (fVar4 < 0.0) {
        fVar4 = 0.0;
      }
      else if (_UNK_? < fVar4) {
        fVar4 = _UNK_?;
      }
      (pUVar1->fields).scale = fVar4 + fVar4 + _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pUVar1,0,(MethodInfo *)0x0);
      if (wo != (MVWorldObjectClient *)0x0) {
        (this->fields).woOwnerID = (wo->fields)._.id;
        (this->fields).useFunction = useFunction;
        func_?(&this->fields,useFunction);
        ppCVar5 = &(this->fields).triggerCollider;
        *ppCVar5 = triggerCollider;
        func_?(ppCVar5,triggerCollider);
        ppFVar6 = &(this->fields).checkCanUseFunction;
        (this->fields).reset = reset;
        (this->fields)._UsedInVehicles_k__BackingField = usedInVehicles;
        *ppFVar6 = checkCanUseFunction;
        func_?(ppFVar6,checkCanUseFunction);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_triggerBoxEvents_TriggerEnter
               (UseInteractor *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (e != (TriggerEventArgs *)0x0) {
    x = UseInteractor_GetUseInteractorHandler(this,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if (x != (UseInteractorHandler *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((this != (UseInteractor *)0x0) &&
         (this_00 = (x->fields).useInteractors,
         this_00 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(this->fields).woOwnerID,
                   (Object *)this,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Add_int__UseInteractor_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_triggerBoxEvents_TriggerExit
               (UseInteractor *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (e != (TriggerEventArgs *)0x0) {
    x = UseInteractor_GetUseInteractorHandler(this,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if (x != (UseInteractorHandler *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((this != (UseInteractor *)0x0) &&
         (this_00 = (x->fields).useInteractors,
         this_00 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(this->fields).woOwnerID,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Remove_int_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

