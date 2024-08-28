
/* Void AddUseRequirement(UseRequirement) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_AddUseRequirement
               (UseInteractorVisualization *this,UseRequirement *useRequirement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).useRequirements;
  if (this_00 != (List_1_UseRequirement_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)useRequirement,
               MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_);
    if ((this->fields).hasInputBlockingRequirement == 0) {
      if (useRequirement == (UseRequirement *)0x0) goto code_?;
      cVar1 = (*(code *)(useRequirement->klass->vtable).get_IsInputBlocking.method)
                        (useRequirement,
                         (useRequirement->klass->vtable).get_IsInputBlockingNow.methodPtr);
    }
    else {
      cVar1 = '\x01';
    }
    (this->fields).hasInputBlockingRequirement = cVar1 != '\0';
    UseInteractorVisualization_CalculateSpacing(this,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CalculateScale() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_CalculateScale
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  fVar1 = (TypeInfo__MainCameraManager->static_fields->DistanceToAvatarBase - _UNK_?) /
          _UNK_?;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (_UNK_? < fVar1) {
    fVar1 = _UNK_?;
  }
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (_UNK_? < fVar1) {
    (this->fields).scale = _UNK_? + _UNK_? + _UNK_?;
    return;
  }
  (this->fields).scale = fVar1 + fVar1 + _UNK_?;
  return;
}


/* Void CalculateSpacing() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_CalculateSpacing
               (UseInteractorVisualization *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
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
    func_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).useRequirements;
  (this->fields).active = 0;
  (this->fields).dist = 1.3;
  if (pLVar6 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
  goto code_?;
  pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                      (&LStack_8,pLVar6,
                       MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                      );
  uStack_9 = 0;
  RVar10 = pLVar7->_current;
  uStack_1 = 1;
  RStack_11 = (RegexCharClass_SingleRange)&stack0xffffffb4;
  while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb4,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                           ), bVar12 != 0) {
    if (RVar10 == (RegexCharClass_SingleRange)0x0) goto code_?;
    cVar13 = (**(code **)(*(int *)RVar10 + 0x118))(RVar10,*(undefined4 *)(*(int *)RVar10 + 0x11c));
    if (cVar13 != '\0') {
      piVar14 = &(this->fields).active;
      *piVar14 = *piVar14 + 1;
    }
  }
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)&stack0xffffffb4,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
             ,(MethodInfo *)in_stack_15);
  uStack_1 = 0xffffffff;
  iVar16 = (this->fields).active;
  if (iVar16 == 1) {
    (this->fields).dist = 0.01;
code_?:
    (this->fields).spacing = (float)(int)(0x168 / (longlong)iVar16);
  }
  else if (iVar16 != 0) goto code_?;
  (this->fields)._HasUseRequirements_k__BackingField = iVar16 != 0;
  pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).useRequirements;
  fStack_17 = 0.0;
  if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        (&LStack_8,pLVar6,
                         MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                        );
    RVar10 = pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 4;
    LStack_8._current = (RegexCharClass_SingleRange)&stack0xffffffb4;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb4,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                        );
      if (bVar12 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffb4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                   ,unaff_EDI);
        uStack_1 = 0xffffffff;
        if ((this->fields)._HasUseRequirements_k__BackingField == 0) {
          if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
            UseInteractorVisualization_RemoveCulling(this,(MethodInfo *)0x0);
          }
        }
        else if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
          UseInteractorVisualization_SetupCulling(this,(MethodInfo *)0x0);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this,(this->fields)._HasUseRequirements_k__BackingField,
                   (MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      RStack_11 = RVar10;
      if (RVar10 == (RegexCharClass_SingleRange)0x0) break;
      cVar13 = (**(code **)(*(int *)RVar10 + 0x118))(RVar10,*(undefined4 *)(*(int *)RVar10 + 0x11c));
      if (cVar13 != '\0') {
        uVar18._0_4_ = (this->fields).pivot.x;
        uVar18._4_4_ = (this->fields).pivot.y;
        func_?(0xc,RStack_11,uVar18,(this->fields).pivot.z,fStack_17,(this->fields).dist);
        fStack_17 = (this->fields).spacing + fStack_17;
      }
    }
  }
code_?:
  uVar19 = func_?();
  uVar19 = func_?(uVar19);
  func_?(uVar19);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void ChangeLOD(Single) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_ChangeLOD
               (UseInteractorVisualization *this,float distance,MethodInfo *method)

{
  bVar1 = (this->fields).visible;
  if (distance < _UNK_?) {
    if (bVar1 == 0) {
      UseInteractorVisualization_Show(this,(MethodInfo *)0x0);
    }
  }
  else if (bVar1 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Action<float>);
      func_?(&MethodInfo__UseInteractorVisualization___Hide_b__32_0_float_);
      cRam_? = '\x01';
    }
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    startValue = (this->fields).scale;
    this_00 = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
    UnityAction_1_System_Single___ctor
              (this_00,(Object *)this,MethodInfo__UseInteractorVisualization___Hide_b__32_0_float_,
               (MethodInfo *)0x0);
    routine = pTween::pTween_To(1.0,startValue,0.0,(Action_1_Single_ *)this_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
    (this->fields).visible = 0;
    return;
  }
  return;
}


/* Void ChangeUseRequirements(Func`2[UseRequirement,Boolean], Func`2[UseRequirement,Boolean]) */

void Assembly-CSharp.dll::UseInteractorVisualization::
     UseInteractorVisualization_ChangeUseRequirements
               (UseInteractorVisualization *this,
               Func_2_UseRequirement_Boolean_ *includeUseRequirementInUpdate,
               Func_2_UseRequirement_Boolean_ *updateRequirement,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
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
    func_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).useRequirements;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
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
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&LStack_8;
    while( true ) {
      do {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                          );
        pOVar10 = LStack_8._current;
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&LStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                     ,unaff_EBX);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (includeUseRequirementInUpdate == (Func_2_UseRequirement_Boolean_ *)0x0)
        goto code_?;
        cVar11 = (*(includeUseRequirementInUpdate->fields)._._.invoke_impl)
                          ((includeUseRequirementInUpdate->fields)._._.method_code);
      } while (cVar11 == '\0');
      if (updateRequirement == (Func_2_UseRequirement_Boolean_ *)0x0) break;
      (*(updateRequirement->fields)._._.invoke_impl)
                ((updateRequirement->fields)._._.method_code,pOVar10,
                 (updateRequirement->fields)._._.method);
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void CheckCullingSetup() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_CheckCullingSetup
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if ((this->fields)._HasUseRequirements_k__BackingField == 0) {
    if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    ppCVar1 = &(this->fields).cullingSubscriberBase;
    if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) goto code_?;
    pMVar2 = (this->fields).wo;
    if (pMVar2 == (MVWorldObjectClient *)0x0) {
code_?:
      pCVar3 = *ppCVar1;
      if (pCVar3 != (CullingSubscriberBase *)0x0) {
        CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar3,(MethodInfo *)0x0);
        *ppCVar1 = (CullingSubscriberBase *)0x0;
        func_?();
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this,0,(MethodInfo *)0x0);
        return;
      }
      func_?();
    }
    else {
      pUVar4 = (pMVar2->fields).PositionChanged;
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar5,(Object *)this,
                 MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
      if (pDVar6 == (Delegate *)0x0) {
        (pMVar2->fields).PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
        this = (UseInteractorVisualization *)0x0;
code_?:
        func_?();
        goto code_?;
      }
      pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar4 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
      (pMVar2->fields).PositionChanged = pUVar4;
      this = (UseInteractorVisualization *)func_?();
      if (this != (UseInteractorVisualization *)0x0) goto code_?;
    }
    func_?();
code_?:
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    func_?(&
                    MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractorVisualization__OnStateChanged_UnityEngine__CullingGroupEvent_
                   );
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_UnityEngine_Vector2_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
  UnityAction_1_UnityEngine_Vector2___ctor
            (this_00,(Object *)this,
             MethodInfo__UseInteractorVisualization__OnStateChanged_UnityEngine__CullingGroupEvent_,
             (MethodInfo *)0x0);
  pCVar3 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1
            (pCVar3,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,(MethodInfo *)0x0);
  if (pCVar3 == (CullingSubscriberBase *)0x0) {
code_?:
    func_?();
  }
  else {
    CullingSubscriberBase::CullingSubscriberBase_set_Radius(pCVar3,2.0,(MethodInfo *)0x0);
    (pCVar3->fields)._DistanceBandIndex_k__BackingField = 1;
    (this->fields).cullingSubscriberBase = pCVar3;
    func_?();
    pMVar2 = (this->fields).wo;
    if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
    pUVar4 = (pMVar2->fields).PositionChanged;
    pUVar5 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar5,(Object *)this,
               MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
    if (pDVar6 == (Delegate *)0x0) {
      (pMVar2->fields).PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
      func_?();
      pMVar2 = (this->fields).wo;
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        puVar8 = (undefined8 *)(*(code *)(pMVar2->klass->vtable).get_WorldPosition_1.method)();
        pCVar3 = (this->fields).cullingSubscriberBase;
        uVar9 = (this->fields).pivot.x;
        uVar10 = (this->fields).pivot.y;
        if (pCVar3 != (CullingSubscriberBase *)0x0) {
          value.y = (float)uVar10 + (float)((ulonglong)*puVar8 >> 0x20);
          value.x = (float)uVar9 + (float)*puVar8;
          value.z = *(float *)(puVar8 + 1) + (this->fields).pivot.z;
          CullingSubscriberBase::CullingSubscriberBase_set_Position(pCVar3,value,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    pMVar11 = (MethodInfo_1 *)func_?();
    if (pMVar11 == (MethodInfo_1 *)0x0) goto code_?;
    pDVar6[1].fields.original_method_info = pMVar11;
    iVar12 = func_?();
    if (iVar12 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void DestroyRequirementObjects(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UseInteractorVisualization::
     UseInteractorVisualization_DestroyRequirementObjects
               (UseInteractorVisualization *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
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
  method_00 = TypeInfo__UseInteractorVisualization____c__DisplayClass42_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)data;
    func_?(value + 1,data);
    if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UseInteractorVisualization____c);
    }
    this_00 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__42_0;
    if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) {
      if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UseInteractorVisualization____c);
      }
      object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
      this_00 = (Func_2_UseRequirement_Boolean_ *)
                func_?(TypeInfo__System__Func<UseRequirement,_bool>);
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                ((Func_2_Object_Boolean_ *)this_00,(Object *)object,
                 MethodInfo__UseInteractorVisualization____c___DestroyRequirementObjects_b__42_0_UseRequirement_
                 ,(MethodInfo *)0x0);
      TypeInfo__UseInteractorVisualization____c->static_fields->__9__42_0 = this_00;
      func_?(&TypeInfo__UseInteractorVisualization____c->static_fields->__9__42_0,this_00);
    }
    this_01 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (this_01,value,
               MethodInfo__UseInteractorVisualization____c__DisplayClass42_0___DestroyRequirementObjects_b__1_UseRequirement_
               ,(MethodInfo *)0x0);
    if (this != (UseInteractorVisualization *)0x0) {
      UseInteractorVisualization_ChangeUseRequirements
                (this,this_00,(Func_2_UseRequirement_Boolean_ *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Disable() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_Disable
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    func_?(&MethodInfo__UseInteractorVisualization____c___Disable_b__33_0_UseRequirement_);
    func_?(&MethodInfo__UseInteractorVisualization____c___Disable_b__33_1_UseRequirement_);
    func_?(&TypeInfo__UseInteractorVisualization____c);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UseInteractorVisualization____c);
  }
  this_00 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__33_0;
  if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UseInteractorVisualization____c);
    }
    pUVar1 = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    this_00 = (Func_2_UseRequirement_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)this_00,(Object *)pUVar1,
               MethodInfo__UseInteractorVisualization____c___Disable_b__33_0_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__33_0 = this_00;
    func_?(&TypeInfo__UseInteractorVisualization____c->static_fields->__9__33_0,this_00);
  }
  if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UseInteractorVisualization____c);
  }
  this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__33_1;
  if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UseInteractorVisualization____c);
    }
    pUVar1 = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    this_01 = (Func_2_UseRequirement_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)this_01,(Object *)pUVar1,
               MethodInfo__UseInteractorVisualization____c___Disable_b__33_1_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__33_1 = this_01;
    func_?(&TypeInfo__UseInteractorVisualization____c->static_fields->__9__33_1,this_01);
  }
  if (this != (UseInteractorVisualization *)0x0) {
    UseInteractorVisualization_ChangeUseRequirements(this,this_00,this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* UseGUIResult EvaluateUsability() */

UseGUIResult__Enum
Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
          (UseInteractorVisualization *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
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
    func_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).useRequirements;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size == 0) {
      *unaff_FS_OFFSET = uStack_3;
      return UseGUIResult__Enum_NoCost;
    }
    UVar6 = 0;
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                       );
    LStack_9._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_9._index = pLVar7->_index;
    LStack_9._version = pLVar7->_version;
    LStack_9._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_9;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return UVar6;
      }
      if ((RegexCharClass_SingleRange)LStack_9._current == (RegexCharClass_SingleRange)0x0) break;
      UVar11 = (**(code **)(*(int *)LStack_9._current + 0xe0))
                        (LStack_9._current,*(undefined4 *)(*(int *)LStack_9._current + 0xe4));
      UVar6 = UVar6 | UVar11;
    }
  }
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  UVar6 = (*pcVar13)();
  return UVar6;
}


/* ShowUseOption GetShowOptions() */

ShowUseOption__Enum
Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_GetShowOptions
          (UseInteractorVisualization *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
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
    func_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).useRequirements;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size == 0) {
      *unaff_FS_OFFSET = uStack_3;
      return ShowUseOption__Enum_Normal;
    }
    SVar6 = ShowUseOption__Enum_Normal;
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                       );
    LStack_9._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_9._index = pLVar7->_index;
    LStack_9._version = pLVar7->_version;
    LStack_9._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_9;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_9,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return SVar6;
      }
      if ((RegexCharClass_SingleRange)LStack_9._current == (RegexCharClass_SingleRange)0x0) break;
      SVar11 = (**(code **)(*(int *)LStack_9._current + 0x100))
                        (LStack_9._current,*(undefined4 *)(*(int *)LStack_9._current + 0x104));
      SVar6 = SVar6 | SVar11;
    }
  }
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  SVar6 = (*pcVar13)();
  return SVar6;
}


/* Void Hide() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_Hide
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<float>);
    func_?(&MethodInfo__UseInteractorVisualization___Hide_b__32_0_float_);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  startValue = (this->fields).scale;
  this_00 = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
  UnityAction_1_System_Single___ctor
            (this_00,(Object *)this,MethodInfo__UseInteractorVisualization___Hide_b__32_0_float_,
             (MethodInfo *)0x0);
  routine = pTween::pTween_To(1.0,startValue,0.0,(Action_1_Single_ *)this_00,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  (this->fields).visible = 0;
  return;
}


/* Void Initialize(Single, MVWorldObjectClient) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_Initialize
               (UseInteractorVisualization *this,float yOffset,MVWorldObjectClient *wo,
               MethodInfo *method)

{
  ppMVar1 = &(this->fields).wo;
  *ppMVar1 = wo;
  func_?(ppMVar1,wo);
  (this->fields).pivot.y = yOffset;
  UseInteractorVisualization_CalculateSpacing(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  fVar2 = (TypeInfo__MainCameraManager->static_fields->DistanceToAvatarBase - _UNK_?) /
          _UNK_?;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (_UNK_? < fVar2) {
    fVar2 = _UNK_?;
  }
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (_UNK_? < fVar2) {
    fVar2 = _UNK_?;
  }
  (this->fields).scale = fVar2 + fVar2 + _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_OnDestroy
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    func_?(&
                    MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).cullingSubscriberBase;
  if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) goto code_?;
  pMVar2 = (this->fields).wo;
  if (pMVar2 == (MVWorldObjectClient *)0x0) {
code_?:
    if (*ppCVar1 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy(*ppCVar1,(MethodInfo *)0x0);
      *ppCVar1 = (CullingSubscriberBase *)0x0;
      func_?(ppCVar1,0);
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,0,(MethodInfo *)0x0);
      return;
    }
    func_?();
  }
  else {
    pUVar3 = (pMVar2->fields).PositionChanged;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pMVar2->fields).PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      this = (UseInteractorVisualization *)0x0;
code_?:
      func_?();
      goto code_?;
    }
    pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar3 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
    goto code_?;
    (pMVar2->fields).PositionChanged = pUVar3;
    this = (UseInteractorVisualization *)func_?();
    if (this != (UseInteractorVisualization *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_OnDisable
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    func_?(&
                    MethodInfo__UseInteractorVisualization____c__DisplayClass34_0___OnDisable_b__0_UseRequirement_
                   );
    func_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass34_0);
    func_?(&MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UseInteractorVisualization____c__DisplayClass34_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)0x0;
    value[1].monitor = (MonitorData *)0x0;
    value[2].klass = (Object__Class *)0x0;
    this_00 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (this_00,(Object *)0x0,
               MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_,
               (MethodInfo *)0x0);
    this_01 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (this_01,value,
               MethodInfo__UseInteractorVisualization____c__DisplayClass34_0___OnDisable_b__0_UseRequirement_
               ,(MethodInfo *)0x0);
    UseInteractorVisualization_ChangeUseRequirements
              (this,(Func_2_UseRequirement_Boolean_ *)this_00,
               (Func_2_UseRequirement_Boolean_ *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_OnEnable
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    func_?(&
                    MethodInfo__UseInteractorVisualization____c__DisplayClass35_0___OnEnable_b__0_UseRequirement_
                   );
    func_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass35_0);
    func_?(&MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UseInteractorVisualization____c__DisplayClass35_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)0x0;
    value[1].monitor = (MonitorData *)0x0;
    value[2].klass = (Object__Class *)0x0;
    this_00 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (this_00,(Object *)0x0,
               MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_,
               (MethodInfo *)0x0);
    this_01 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (this_01,value,
               MethodInfo__UseInteractorVisualization____c__DisplayClass35_0___OnEnable_b__0_UseRequirement_
               ,(MethodInfo *)0x0);
    UseInteractorVisualization_ChangeUseRequirements
              (this,(Func_2_UseRequirement_Boolean_ *)this_00,
               (Func_2_UseRequirement_Boolean_ *)this_01,(MethodInfo *)0x0);
    UseInteractorVisualization_Show(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_OnPositionChanged
               (UseInteractorVisualization *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if (positionChangedEventArgs != (PositionChangedEventArgs *)0x0) {
    uVar1 = (positionChangedEventArgs->fields).NewPos.x;
    uVar2 = (positionChangedEventArgs->fields).NewPos.y;
    uVar3 = (this->fields).pivot.x;
    uVar4 = (this->fields).pivot.y;
    this_00 = (this->fields).cullingSubscriberBase;
    if (this_00 != (CullingSubscriberBase *)0x0) {
      value.y = (float)uVar4 + (float)uVar2;
      value.x = (float)uVar3 + (float)uVar1;
      value.z = (positionChangedEventArgs->fields).NewPos.z + (this->fields).pivot.z;
      CullingSubscriberBase::CullingSubscriberBase_set_Position(this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_OnStateChanged
               (UseInteractorVisualization *this,CullingGroupEvent cullingGroupEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    func_?(&
                    MethodInfo__UseInteractorVisualization____c__DisplayClass21_0___OnStateChanged_b__0_UseRequirement_
                   );
    func_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass21_0);
    func_?(&MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UseInteractorVisualization____c__DisplayClass21_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    bVar2 = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
    if (value != (Object *)0x0) {
      *(bool *)&value[1].klass = bVar2;
      this_00 = TypeInfo__System__Func<UseRequirement,_bool>;
      this_01 = (Func_2_Object_Boolean_ *)func_?();
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_,
                 (MethodInfo *)0x0);
      this_02 = (Func_2_Object_Boolean_ *)func_?();
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                (this_02,value,
                 MethodInfo__UseInteractorVisualization____c__DisplayClass21_0___OnStateChanged_b__0_UseRequirement_
                 ,(MethodInfo *)0x0);
      UseInteractorVisualization_ChangeUseRequirements
                ((UseInteractorVisualization *)this_00,(Func_2_UseRequirement_Boolean_ *)this_01,
                 (Func_2_UseRequirement_Boolean_ *)this_02,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_00,*(bool *)&value[1].klass,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PayUseCost() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_PayUseCost
               (UseInteractorVisualization *this,MethodInfo *method)

{
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
  this_00 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_0;
  if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UseInteractorVisualization____c);
    }
    pUVar1 = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    this_00 = (Func_2_UseRequirement_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)this_00,(Object *)pUVar1,
               MethodInfo__UseInteractorVisualization____c___PayUseCost_b__41_0_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_0 = this_00;
    func_?(&TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_0,this_00);
  }
  if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UseInteractorVisualization____c);
  }
  this_01 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_1;
  if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) {
    if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UseInteractorVisualization____c);
    }
    pUVar1 = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
    this_01 = (Func_2_UseRequirement_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)this_01,(Object *)pUVar1,
               MethodInfo__UseInteractorVisualization____c___PayUseCost_b__41_1_UseRequirement_,
               (MethodInfo *)0x0);
    TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_1 = this_01;
    func_?(&TypeInfo__UseInteractorVisualization____c->static_fields->__9__41_1,this_01);
  }
  if (this != (UseInteractorVisualization *)0x0) {
    UseInteractorVisualization_ChangeUseRequirements(this,this_00,this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveCulling() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_RemoveCulling
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    func_?(&
                    MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).cullingSubscriberBase;
  if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) goto code_?;
  pMVar2 = (this->fields).wo;
  if (pMVar2 == (MVWorldObjectClient *)0x0) {
code_?:
    if (*ppCVar1 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy(*ppCVar1,(MethodInfo *)0x0);
      *ppCVar1 = (CullingSubscriberBase *)0x0;
      func_?(ppCVar1,0);
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,0,(MethodInfo *)0x0);
      return;
    }
    func_?();
  }
  else {
    pUVar3 = (pMVar2->fields).PositionChanged;
    this_00 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pMVar2->fields).PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      this = (UseInteractorVisualization *)0x0;
code_?:
      func_?();
      goto code_?;
    }
    pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar3 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
    goto code_?;
    (pMVar2->fields).PositionChanged = pUVar3;
    this = (UseInteractorVisualization *)func_?();
    if (this != (UseInteractorVisualization *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean SetUseRequirementActive(UseRequirement, Boolean) */

bool Assembly-CSharp.dll::UseInteractorVisualization::
     UseInteractorVisualization_SetUseRequirementActive
               (UseRequirement *useRequirement,bool b,MethodInfo *method)

{
  if (useRequirement != (UseRequirement *)0x0) {
    this = (GameObject *)(*(code *)(useRequirement->klass->vtable).__unknown_10.method)();
    if (this != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this,b,(MethodInfo *)0x0);
      return 1;
    }
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean SetUseRequirementScale(UseRequirement, Vector3) */

bool Assembly-CSharp.dll::UseInteractorVisualization::
     UseInteractorVisualization_SetUseRequirementScale
               (UseRequirement *useRequirement,Vector3 scale,MethodInfo *method)

{
  if (useRequirement != (UseRequirement *)0x0) {
    (*(code *)(useRequirement->klass->vtable).__unknown_9.method)
              (useRequirement,scale._0_8_,scale.z,
               (useRequirement->klass->vtable).__unknown_10.methodPtr);
    return 1;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_SetupCulling
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    func_?(&
                    MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractorVisualization__OnStateChanged_UnityEngine__CullingGroupEvent_
                   );
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_UnityEngine_Vector2_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
  UnityAction_1_UnityEngine_Vector2___ctor
            (this_00,(Object *)this,
             MethodInfo__UseInteractorVisualization__OnStateChanged_UnityEngine__CullingGroupEvent_,
             (MethodInfo *)0x0);
  pCVar1 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1
            (pCVar1,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,(MethodInfo *)0x0);
  if (pCVar1 == (CullingSubscriberBase *)0x0) {
code_?:
    func_?();
  }
  else {
    CullingSubscriberBase::CullingSubscriberBase_set_Radius(pCVar1,2.0,(MethodInfo *)0x0);
    (pCVar1->fields)._DistanceBandIndex_k__BackingField = 1;
    (this->fields).cullingSubscriberBase = pCVar1;
    func_?();
    pMVar2 = (this->fields).wo;
    if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
    a = (pMVar2->fields).PositionChanged;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar2->fields).PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
      func_?();
      pMVar2 = (this->fields).wo;
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        puVar4 = (undefined8 *)(*(code *)(pMVar2->klass->vtable).get_WorldPosition_1.method)();
        pCVar1 = (this->fields).cullingSubscriberBase;
        uVar5 = (this->fields).pivot.x;
        uVar6 = (this->fields).pivot.y;
        fStack_7 = (float)*puVar4;
        fStack_8 = (float)((ulonglong)*puVar4 >> 0x20);
        if (pCVar1 != (CullingSubscriberBase *)0x0) {
          value.y = (float)uVar6 + fStack_8;
          value.x = (float)uVar5 + fStack_7;
          value.z = *(float *)(puVar4 + 1) + (this->fields).pivot.z;
          CullingSubscriberBase::CullingSubscriberBase_set_Position(pCVar1,value,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    pMVar9 = (MethodInfo_1 *)func_?();
    if (pMVar9 == (MethodInfo_1 *)0x0) goto code_?;
    pDVar3[1].fields.original_method_info = pMVar9;
    iVar10 = func_?();
    if (iVar10 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Show() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_Show
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<float>);
    func_?(&MethodInfo__UseInteractorVisualization___Show_b__31_0_float_);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  endValue = (this->fields).scale;
  this_00 = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
  UnityAction_1_System_Single___ctor
            (this_00,(Object *)this,MethodInfo__UseInteractorVisualization___Show_b__31_0_float_,
             (MethodInfo *)0x0);
  routine = pTween::pTween_To(1.0,0.0,endValue,(Action_1_Single_ *)this_00,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  (this->fields).visible = 1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_Update
               (UseInteractorVisualization *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
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
    func_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                   );
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
    cRam_? = '\x01';
  }
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  axis = TypeInfo__UnityEngine__Vector3->static_fields->upVector;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
              (this_01,axis,fVar4 * _UNK_?,(MethodInfo *)0x0);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffa8,this_01,(MethodInfo *)0x0);
    uVar6 = pVVar5->x;
    uVar7 = pVVar5->y;
    fVar4 = pVVar5->z;
    pSVar8 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar8 != (SpawnRoleDataMediator *)0x0) {
      pVVar5 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
               SpawnRoleVariable`1[UnityEngine::Vector3]::
               SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                         ((Vector3 *)&stack0xffffff98,
                          (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar8->fields).position,
                          MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                         );
      uVar9 = pVVar5->x;
      uVar10 = pVVar5->y;
      fVar4 = fVar4 - pVVar5->z;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      dVar11 = (double)(((float)uVar7 - (float)uVar10) * ((float)uVar7 - (float)uVar10) +
                        ((float)uVar6 - (float)uVar9) * ((float)uVar6 - (float)uVar9) +
                       fVar4 * fVar4);
      if (dVar11 < 0.0) {
        func_?();
      }
      else {
        dVar11 = SQRT(dVar11);
      }
      bVar12 = (this->fields).visible;
      if ((float)dVar11 < _UNK_?) {
        if (bVar12 == 0) {
          UseInteractorVisualization_Show(this,(MethodInfo *)0x0);
        }
      }
      else if (bVar12 != 0) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                  ((MonoBehaviour *)this,(MethodInfo *)0x0);
        fVar4 = (this->fields).scale;
        this_02 = (UnityAction_1_System_Single_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
        UnityAction_1_System_Single___ctor
                  (this_02,(Object *)this,
                   MethodInfo__UseInteractorVisualization___Hide_b__32_0_float_,(MethodInfo *)0x0);
        routine = pTween::pTween_To(1.0,fVar4,0.0,(Action_1_Single_ *)this_02,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
        (this->fields).visible = 0;
      }
      if ((this->fields).hasInputBlockingRequirement != 0) {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).useRequirements;
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                            ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                              *)&stack0xffffff98,this_00,
                             MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                            );
        RVar14 = pLVar13->_current;
        uStack_1 = 1;
        while( true ) {
          bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff88,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            );
          if (bVar12 == 0) break;
          if (RVar14 == (RegexCharClass_SingleRange)0x0) goto code_?;
          cVar15 = (**(code **)(*(int *)RVar14 + 0x138))();
          if (cVar15 != '\0') {
            cVar15 = func_?();
            if (cVar15 != '\0') {
              if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
            }
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffff88,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                   ,in_stack_16);
      }
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void UpdateData(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_UpdateData
               (UseInteractorVisualization *this,Dictionary_2_System_Object_System_Object_ *data,
               int32_t ownerID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    func_?(&
                    MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_
                   );
    func_?(&
                    MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
                   );
    func_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
    func_?(&TypeInfo__UseInteractorVisualization____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UseInteractorVisualization____c__DisplayClass36_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)data;
    func_?(value + 1,data);
    value[1].monitor = (MonitorData *)ownerID;
    if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UseInteractorVisualization____c);
    }
    this_00 = TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0;
    if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) {
      if ((TypeInfo__UseInteractorVisualization____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UseInteractorVisualization____c);
      }
      object = TypeInfo__UseInteractorVisualization____c->static_fields->__9;
      this_00 = (Func_2_UseRequirement_Boolean_ *)
                func_?(TypeInfo__System__Func<UseRequirement,_bool>);
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                ((Func_2_Object_Boolean_ *)this_00,(Object *)object,
                 MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_,
                 (MethodInfo *)0x0);
      TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 = this_00;
      func_?(&TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0,this_00);
    }
    this_01 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (this_01,value,
               MethodInfo__UseInteractorVisualization____c__DisplayClass36_0___UpdateData_b__1_UseRequirement_
               ,(MethodInfo *)0x0);
    if (this != (UseInteractorVisualization *)0x0) {
      UseInteractorVisualization_ChangeUseRequirements
                (this,this_00,(Func_2_UseRequirement_Boolean_ *)this_01,(MethodInfo *)0x0);
      UseInteractorVisualization_CalculateSpacing(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdatePosition(Vector3) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_UpdatePosition
               (UseInteractorVisualization *this,Vector3 pos,MethodInfo *method)

{
  uVar1 = (this->fields).pivot.x;
  uVar2 = (this->fields).pivot.y;
  this_00 = (this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    value.y = pos.y + (float)uVar2;
    value.x = pos.x + (float)uVar1;
    value.z = pos.z + (this->fields).pivot.z;
    CullingSubscriberBase::CullingSubscriberBase_set_Position(this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean UseRequirementActive(UseRequirement) */

bool Assembly-CSharp.dll::UseInteractorVisualization::
     UseInteractorVisualization_UseRequirementActive
               (UseRequirement *useRequirement,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  if (useRequirement != (UseRequirement *)0x0) {
    pIStack_1 = (useRequirement->klass->vtable).__unknown_8.methodPtr;
    pUStack_2 = useRequirement;
    bVar3 = (*(code *)(useRequirement->klass->vtable).__unknown_7.method)();
    return bVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* Void <Hide>b__32_0(Single) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization__Hide_b__32_0
               (UseInteractorVisualization *this,float t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    func_?(&
                    MethodInfo__UseInteractorVisualization____c__DisplayClass32_0___Hide_b__1_UseRequirement_
                   );
    func_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass32_0);
    func_?(&MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UseInteractorVisualization____c__DisplayClass32_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    OVar1.monitor = (MonitorData *)t;
    OVar1.klass = (Object__Class *)t;
    value[1] = OVar1;
    value[2].klass = (Object__Class *)t;
    this_00 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (this_00,(Object *)0x0,
               MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_,
               (MethodInfo *)0x0);
    this_01 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (this_01,value,
               MethodInfo__UseInteractorVisualization____c__DisplayClass32_0___Hide_b__1_UseRequirement_
               ,(MethodInfo *)0x0);
    UseInteractorVisualization_ChangeUseRequirements
              (this,(Func_2_UseRequirement_Boolean_ *)this_00,
               (Func_2_UseRequirement_Boolean_ *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <Show>b__31_0(Single) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization__Show_b__31_0
               (UseInteractorVisualization *this,float t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<UseRequirement,_bool>);
    func_?(&
                    MethodInfo__UseInteractorVisualization____c__DisplayClass31_0___Show_b__1_UseRequirement_
                   );
    func_?(&TypeInfo__UseInteractorVisualization____c__DisplayClass31_0);
    func_?(&MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UseInteractorVisualization____c__DisplayClass31_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    OVar1.monitor = (MonitorData *)t;
    OVar1.klass = (Object__Class *)t;
    value[1] = OVar1;
    value[2].klass = (Object__Class *)t;
    this_00 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (this_00,(Object *)0x0,
               MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_,
               (MethodInfo *)0x0);
    this_01 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              (this_01,value,
               MethodInfo__UseInteractorVisualization____c__DisplayClass31_0___Show_b__1_UseRequirement_
               ,(MethodInfo *)0x0);
    UseInteractorVisualization_ChangeUseRequirements
              (this,(Func_2_UseRequirement_Boolean_ *)this_00,
               (Func_2_UseRequirement_Boolean_ *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* UseInteractorVisualization() */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization__ctor
               (UseInteractorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UseRequirement>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UseRequirement_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UseRequirement>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UseRequirement>__List__);
  ppLVar1 = &(this->fields).useRequirements;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  uVar2 = (ulonglong)_UNK_?;
  (this->fields).pivot.x = (float)(int)(uVar2 << 0x20);
  (this->fields).pivot.y = (float)(int)((uVar2 << 0x20) >> 0x20);
  (this->fields).pivot.z = 0.0;
  (this->fields).dist = 0.01;
  (this->fields).spacing = 120.0;
  (this->fields).scale = 1.0;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

