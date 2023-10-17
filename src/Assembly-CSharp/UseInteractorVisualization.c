
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
      cVar1 = (*(useRequirement->klass->vtable).get_IsInputBlocking.methodPtr)
                        (useRequirement,(useRequirement->klass->vtable).get_IsInputBlocking.method);
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
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
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
    in_stack_6 = &UNK_?;
    func_?();
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).useRequirements;
  (this->fields).active = 0;
  (this->fields).dist = 1.3;
  if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
    uVar8 = func_?();
    uVar8 = func_?(uVar8);
    func_?(uVar8);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar10 = ZEXT48(in_stack_6);
  pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                     (&LStack_12,pLVar7,
                      MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                     );
  uStack_13 = 0;
  RVar14 = pLVar11->_current;
  uStack_1 = 1;
  RStack_15 = (RegexCharClass_SingleRange)&stack0xffffffb8;
  while (bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb8,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                           ), bVar16 != 0) {
    if (RVar14 == (RegexCharClass_SingleRange)0x0) goto code_?;
    cVar17 = (**(code **)(*(int *)RVar14 + 0x114))(RVar14,*(undefined4 *)(*(int *)RVar14 + 0x118));
    if (cVar17 != '\0') {
      piVar18 = &(this->fields).active;
      *piVar18 = *piVar18 + 1;
    }
  }
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)&stack0xffffffb8,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
             ,(MethodInfo *)uVar10);
  uStack_1 = 0xffffffff;
  if ((this->fields).active == 1) {
    (this->fields).dist = 0.01;
  }
  bVar19 = (this->fields).active == 0;
  if (!bVar19) {
    (this->fields).spacing = (float)(int)(0x168 / (longlong)(this->fields).active);
    bVar19 = (this->fields).active == 0;
  }
  (this->fields)._HasUseRequirements_k__BackingField = !bVar19;
  pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).useRequirements;
  fStack_20 = 0.0;
  if (pLVar7 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
  goto code_?;
  pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                     (&LStack_12,pLVar7,
                      MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                     );
  RVar14 = pLVar11->_current;
  LStack_12._version = 0;
  uStack_1 = 4;
  LStack_12._current = (RegexCharClass_SingleRange)&stack0xffffffb8;
  while (bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffb8,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                           ), bVar16 != 0) {
    RStack_15 = RVar14;
    if (RVar14 == (RegexCharClass_SingleRange)0x0) goto code_?;
    cVar17 = (**(code **)(*(int *)RVar14 + 0x114))();
    if (cVar17 != '\0') {
      if (RStack_15 == (RegexCharClass_SingleRange)0x0) goto code_?;
      uVar21._0_4_ = (this->fields).pivot.x;
      uVar21._4_4_ = (this->fields).pivot.y;
      func_?(0xc,RStack_15,uVar21,(this->fields).pivot.z,fStack_20,(this->fields).dist);
      fStack_20 = fStack_20 + (this->fields).spacing;
    }
  }
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)&stack0xffffffb8,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
             ,unaff_EBX);
  uStack_1 = 0xffffffff;
  if ((this->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      UseInteractorVisualization_SetupCulling(this,(MethodInfo *)0x0);
      goto code_?;
    }
    if ((this->fields)._HasUseRequirements_k__BackingField != 0) goto code_?;
  }
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    UseInteractorVisualization_RemoveCulling(this,(MethodInfo *)0x0);
  }
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,(this->fields)._HasUseRequirements_k__BackingField,(MethodInfo *)0x0)
  ;
  *unaff_FS_OFFSET = uStack_3;
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
    if (this_00 != (UnityAction_1_System_Single_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
      UnityAction_1_System_Single___ctor
                (this_00,(Object *)this,MethodInfo__UseInteractorVisualization___Hide_b__32_0_float_
                 ,(MethodInfo *)0x0);
      routine = pTween::pTween_To(1.0,startValue,0.0,(Action_1_Single_ *)this_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
      (this->fields).visible = 0;
      return;
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).useRequirements;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      do {
        bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                          );
        pOVar10 = LStack_6._current;
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&LStack_6,
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
  if ((this->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CullingSubscriberBase);
        func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>)
        ;
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
      if (this_00 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
        UnityAction_1_UnityEngine_Vector2___ctor
                  (this_00,(Object *)this,
                   MethodInfo__UseInteractorVisualization__OnStateChanged_UnityEngine__CullingGroupEvent_
                   ,(MethodInfo *)0x0);
        unaff_EDI = (Delegate *)func_?(TypeInfo__CullingSubscriberBase);
        if (unaff_EDI != (Delegate *)0x0) {
          CullingSubscriberBase::CullingSubscriberBase__ctor_1
                    ((CullingSubscriberBase *)unaff_EDI,
                     (UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,(MethodInfo *)0x0);
          CullingSubscriberBase::CullingSubscriberBase_set_Radius
                    ((CullingSubscriberBase *)unaff_EDI,2.0,(MethodInfo *)0x0);
          (unaff_EDI->fields).invoke_impl = (void *)0x1;
          (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)unaff_EDI;
          func_?(&(this->fields).cullingSubscriberBase,unaff_EDI);
          pMVar1 = (this->fields).wo;
          if (pMVar1 != (MVWorldObjectClient *)0x0) {
            in_stack_2 =
                 (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                 (pMVar1->fields).PositionChanged;
            pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
                     func_?(
                                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                    );
            unaff_EDI = (Delegate *)0x0;
            if (pUVar3 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar3,(Object *)this,
                         MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                         ,(MethodInfo *)0x0);
              unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)in_stack_2,(Delegate *)pUVar3,
                                     (MethodInfo *)0x0);
              in_stack_2 =
                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
              ;
              if (unaff_EDI == (Delegate *)0x0) {
                (pMVar1->fields).PositionChanged =
                     (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
                iVar4 = 0;
              }
              else {
                uStack_5 = CONCAT44(uStack_5._4_4_,
                                     TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                    );
                pDStack_6 = unaff_EDI;
                pUVar7 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                         func_?();
                if (pUVar7 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
                goto code_?;
                (pMVar1->fields).PositionChanged = pUVar7;
                in_stack_2 =
                     TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                ;
                uStack_5 = CONCAT44(uStack_5._4_4_,
                                     TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                    );
                pDStack_6 = unaff_EDI;
                iVar4 = func_?();
                if (iVar4 == 0) goto code_?;
              }
              uStack_5 = CONCAT44(uStack_5._4_4_,iVar4);
              pDStack_6 = (Delegate *)&(pMVar1->fields).PositionChanged;
              func_?();
              pMVar1 = (this->fields).wo;
              if (pMVar1 != (MVWorldObjectClient *)0x0) {
                puVar8 = (undefined8 *)
                         (*(pMVar1->klass->vtable).get_WorldPosition_1.methodPtr)
                                   (&fStack_9,pMVar1,
                                    (pMVar1->klass->vtable).get_WorldPosition_1.method);
                pCVar10 = (this->fields).cullingSubscriberBase;
                uStack_5._0_4_ = (this->fields).pivot.x;
                uStack_5._4_4_ = (this->fields).pivot.y;
                fStack_9 = (float)(undefined4)uStack_5 + (float)*puVar8;
                puStack_11 = (undefined *)
                             ((float)uStack_5._4_4_ + (float)((ulonglong)*puVar8 >> 0x20));
                pDStack_6 = (Delegate *)(*(float *)(puVar8 + 1) + (this->fields).pivot.z);
                if (pCVar10 != (CullingSubscriberBase *)0x0) {
                  value.y = (float)puStack_11;
                  value.x = fStack_9;
                  value.z = (float)pDStack_6;
                  CullingSubscriberBase::CullingSubscriberBase_set_Position
                            (pCVar10,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      func_?();
code_?:
      uStack_5 = CONCAT44(uStack_5._4_4_,in_stack_2);
      pDStack_6 = unaff_EDI;
      func_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if ((this->fields)._HasUseRequirements_k__BackingField != 0) {
      return;
    }
  }
  if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) goto code_?;
  if ((this->fields).wo == (MVWorldObjectClient *)0x0) {
code_?:
    pCVar10 = (this->fields).cullingSubscriberBase;
    if (pCVar10 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar10,(MethodInfo *)0x0);
      (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
      func_?();
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pMVar1 = (this->fields).wo;
    pUVar7 = (pMVar1->fields).PositionChanged;
    pUVar3 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    if (pUVar3 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      uStack_5 = CONCAT44(&UNK_?,(undefined4)uStack_5);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar13 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar7,(Delegate *)pUVar3,(MethodInfo *)0x0);
      if (pDVar13 == (Delegate *)0x0) {
        (pMVar1->fields).PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar7 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
        if (pUVar7 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
        goto code_?;
        (pMVar1->fields).PositionChanged = pUVar7;
        iVar4 = func_?();
        if (iVar4 == 0) goto code_?;
      }
      func_?();
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  value = (Object *)func_?(TypeInfo__UseInteractorVisualization____c__DisplayClass42_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
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
      if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) goto code_?;
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                ((Func_2_Object_Boolean_ *)this_00,(Object *)object,
                 MethodInfo__UseInteractorVisualization____c___DestroyRequirementObjects_b__42_0_UseRequirement_
                 ,(MethodInfo *)0x0);
      TypeInfo__UseInteractorVisualization____c->static_fields->__9__42_0 = this_00;
      func_?(&TypeInfo__UseInteractorVisualization____c->static_fields->__9__42_0,this_00);
    }
    this_01 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    if (this_01 != (Func_2_Object_Boolean_ *)0x0) {
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
  }
code_?:
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
    if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) goto code_?;
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
    if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) goto code_?;
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
code_?:
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
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).useRequirements;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size == 0) {
      *unaff_FS_OFFSET = uStack_3;
      return UseGUIResult__Enum_NoCost;
    }
    UVar7 = 0;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
    LStack_6._index = pLVar8->_index;
    LStack_6._version = pLVar8->_version;
    LStack_6._current = *(Object **)&pLVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return UVar7;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      UVar11 = (**(code **)(*(int *)LStack_6._current + 0xdc))
                        (LStack_6._current,*(undefined4 *)(*(int *)LStack_6._current + 0xe0));
      UVar7 = UVar7 | UVar11;
    }
  }
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  UVar7 = (*pcVar13)();
  return UVar7;
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
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).useRequirements;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size == 0) {
      *unaff_FS_OFFSET = uStack_3;
      return ShowUseOption__Enum_Normal;
    }
    SVar7 = ShowUseOption__Enum_Normal;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
    LStack_6._index = pLVar8->_index;
    LStack_6._version = pLVar8->_version;
    LStack_6._current = *(Object **)&pLVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return SVar7;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      SVar11 = (**(code **)(*(int *)LStack_6._current + 0xfc))
                        (LStack_6._current,*(undefined4 *)(*(int *)LStack_6._current + 0x100));
      SVar7 = SVar7 | SVar11;
    }
  }
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  SVar7 = (*pcVar13)();
  return SVar7;
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
  if (this_00 != (UnityAction_1_System_Single_ *)0x0) {
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(Single, MVWorldObjectClient) */

void Assembly-CSharp.dll::UseInteractorVisualization::UseInteractorVisualization_Initialize
               (UseInteractorVisualization *this,float yOffset,MVWorldObjectClient *wo,
               MethodInfo *method)

{
  (this->fields).wo = wo;
  func_?(&(this->fields).wo,wo);
  (this->fields).pivot.y = yOffset;
  UseInteractorVisualization_CalculateSpacing(this,(MethodInfo *)0x0);
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
    fVar1 = _UNK_?;
  }
  (this->fields).scale = fVar1 + fVar1 + _UNK_?;
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
  if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) goto code_?;
  if ((this->fields).wo == (MVWorldObjectClient *)0x0) {
code_?:
    this_00 = (this->fields).cullingSubscriberBase;
    if (this_00 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
      (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
      func_?(&(this->fields).cullingSubscriberBase,0);
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pMVar1 = (this->fields).wo;
    pUVar2 = (pMVar1->fields).PositionChanged;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pMVar1->fields).PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
        if (pUVar2 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
        goto code_?;
        (pMVar1->fields).PositionChanged = pUVar2;
        iVar4 = func_?();
        if (iVar4 == 0) goto code_?;
      }
      func_?();
      goto code_?;
    }
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
  value = (Object *)func_?(TypeInfo__UseInteractorVisualization____c__DisplayClass34_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)0x0;
    value[1].monitor = (MonitorData *)0x0;
    value[2].klass = (Object__Class *)0x0;
    this_00 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    if (this_00 != (Func_2_Object_Boolean_ *)0x0) {
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_,
                 (MethodInfo *)0x0);
      this_01 = (Func_2_Object_Boolean_ *)
                func_?(TypeInfo__System__Func<UseRequirement,_bool>);
      if (this_01 != (Func_2_Object_Boolean_ *)0x0) {
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  (this_01,value,
                   MethodInfo__UseInteractorVisualization____c__DisplayClass34_0___OnDisable_b__0_UseRequirement_
                   ,(MethodInfo *)0x0);
        UseInteractorVisualization_ChangeUseRequirements
                  (this,(Func_2_UseRequirement_Boolean_ *)this_00,
                   (Func_2_UseRequirement_Boolean_ *)this_01,(MethodInfo *)0x0);
        return;
      }
    }
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
  value = (Object *)func_?(TypeInfo__UseInteractorVisualization____c__DisplayClass35_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)0x0;
    value[1].monitor = (MonitorData *)0x0;
    value[2].klass = (Object__Class *)0x0;
    this_00 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    if (this_00 != (Func_2_Object_Boolean_ *)0x0) {
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_,
                 (MethodInfo *)0x0);
      this_01 = (Func_2_Object_Boolean_ *)
                func_?(TypeInfo__System__Func<UseRequirement,_bool>);
      if (this_01 != (Func_2_Object_Boolean_ *)0x0) {
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
    }
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
  value = (Object *)func_?(TypeInfo__UseInteractorVisualization____c__DisplayClass21_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    pCVar1 = (this->fields).cullingSubscriberBase;
    if (pCVar1 != (CullingSubscriberBase *)0x0) {
      distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      bVar2 = CullingApiWrapper::CullingApiWrapper_Visible
                        (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
      *(bool *)&value[1].klass = bVar2;
      this_00 = (Func_2_Object_Boolean_ *)
                func_?(TypeInfo__System__Func<UseRequirement,_bool>);
      if (this_00 != (Func_2_Object_Boolean_ *)0x0) {
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  (this_00,(Object *)0x0,
                   MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_,
                   (MethodInfo *)0x0);
        this_01 = (Func_2_Object_Boolean_ *)
                  func_?(TypeInfo__System__Func<UseRequirement,_bool>);
        if (this_01 != (Func_2_Object_Boolean_ *)0x0) {
          mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                    (this_01,value,
                     MethodInfo__UseInteractorVisualization____c__DisplayClass21_0___OnStateChanged_b__0_UseRequirement_
                     ,(MethodInfo *)0x0);
          UseInteractorVisualization_ChangeUseRequirements
                    (this,(Func_2_UseRequirement_Boolean_ *)this_00,
                     (Func_2_UseRequirement_Boolean_ *)this_01,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this,*(bool *)&value[1].klass,(MethodInfo *)0x0);
          return;
        }
      }
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
    if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) goto code_?;
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
    if (this_01 == (Func_2_UseRequirement_Boolean_ *)0x0) goto code_?;
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
code_?:
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
  if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) goto code_?;
  if ((this->fields).wo == (MVWorldObjectClient *)0x0) {
code_?:
    this_00 = (this->fields).cullingSubscriberBase;
    if (this_00 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
      (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
      func_?(&(this->fields).cullingSubscriberBase,0);
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this,0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pMVar1 = (this->fields).wo;
    pUVar2 = (pMVar1->fields).PositionChanged;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pMVar1->fields).PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
        if (pUVar2 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
        goto code_?;
        (pMVar1->fields).PositionChanged = pUVar2;
        iVar4 = func_?();
        if (iVar4 == 0) goto code_?;
      }
      func_?();
      goto code_?;
    }
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
    this = (GameObject *)(*(useRequirement->klass->vtable).__unknown_10.methodPtr)();
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
    (*(useRequirement->klass->vtable).__unknown_9.methodPtr)
              (useRequirement,scale._0_8_,scale.z,(useRequirement->klass->vtable).__unknown_9.method
              );
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
  this_01 = (UnityAction_1_UnityEngine_Vector2_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                           );
  if (this_01 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_01,(Object *)this,
               MethodInfo__UseInteractorVisualization__OnStateChanged_UnityEngine__CullingGroupEvent_
               ,(MethodInfo *)0x0);
    unaff_EDI = (Delegate *)func_?(TypeInfo__CullingSubscriberBase);
    if (unaff_EDI != (Delegate *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase__ctor_1
                ((CullingSubscriberBase *)unaff_EDI,
                 (UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,(MethodInfo *)0x0);
      CullingSubscriberBase::CullingSubscriberBase_set_Radius
                ((CullingSubscriberBase *)unaff_EDI,2.0,(MethodInfo *)0x0);
      (unaff_EDI->fields).invoke_impl = (void *)0x1;
      (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)unaff_EDI;
      func_?(&(this->fields).cullingSubscriberBase,unaff_EDI);
      pMVar1 = (this->fields).wo;
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        pUStack_2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                    (pMVar1->fields).PositionChanged;
        this_02 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
        unaff_EDI = (Delegate *)0x0;
        if (this_02 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_02,(Object *)this,
                     MethodInfo__UseInteractorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                     ,(MethodInfo *)0x0);
          unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pUStack_2,(Delegate *)this_02,(MethodInfo *)0x0);
          pUStack_2 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
          if (unaff_EDI == (Delegate *)0x0) {
            (pMVar1->fields).PositionChanged =
                 (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
            iVar3 = 0;
          }
          else {
            uStack_4 = CONCAT44(uStack_4._4_4_,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                );
            pDStack_5 = unaff_EDI;
            pUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                     func_?();
            if (pUVar6 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
            goto code_?;
            (pMVar1->fields).PositionChanged = pUVar6;
            uStack_4 = CONCAT44(uStack_4._4_4_,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                );
            pUStack_2 = 
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
            ;
            pDStack_5 = unaff_EDI;
            iVar3 = func_?();
            if (iVar3 == 0) goto code_?;
          }
          uStack_4 = CONCAT44(uStack_4._4_4_,iVar3);
          pDStack_5 = (Delegate *)&(pMVar1->fields).PositionChanged;
          func_?();
          pMVar1 = (this->fields).wo;
          if (pMVar1 != (MVWorldObjectClient *)0x0) {
            puVar7 = (undefined8 *)
                     (*(pMVar1->klass->vtable).get_WorldPosition_1.methodPtr)
                               (&fStack_8,pMVar1,(pMVar1->klass->vtable).get_WorldPosition_1.method
                               );
            this_00 = (this->fields).cullingSubscriberBase;
            uVar9 = *puVar7;
            fStack_10 = *(float *)(puVar7 + 1);
            uStack_4._0_4_ = (this->fields).pivot.x;
            uStack_4._4_4_ = (this->fields).pivot.y;
            uStack_11._0_4_ = (float)uVar9;
            fStack_8 = (float)(undefined4)uStack_4 + (float)uStack_11;
            fStack_12 = (this->fields).pivot.z;
            uStack_11._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
            puStack_13 = (undefined *)((float)uStack_4._4_4_ + uStack_11._4_4_);
            pDStack_5 = (Delegate *)(fStack_10 + fStack_12);
            uStack_11 = uVar9;
            if (this_00 != (CullingSubscriberBase *)0x0) {
              value.y = (float)puStack_13;
              value.x = fStack_8;
              value.z = (float)pDStack_5;
              CullingSubscriberBase::CullingSubscriberBase_set_Position
                        (this_00,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  uStack_4 = CONCAT44(uStack_4._4_4_,pUStack_2);
  pDStack_5 = unaff_EDI;
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  if (this_00 != (UnityAction_1_System_Single_ *)0x0) {
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar4->upVector).x;
  uVar6 = (pVVar4->upVector).y;
  fVar7 = (pVVar4->upVector).z;
  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    axis.y = (float)uVar6;
    axis.x = (float)uVar5;
    axis.z = fVar7;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
              (this_01,axis,fVar8 * _UNK_?,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xffffffdc,this_01,(MethodInfo *)0x0);
    pSVar9 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar9 != (SpawnRoleDataMediator *)0x0) {
      pVVar10 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[UnityEngine::Vector3]::
                SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                          ((Vector3 *)&puStack_11,
                           (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar9->fields).position,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                          );
      method_00 = pVVar10->x;
      fVar12 = (float10)func_?();
      bVar13 = (this->fields).visible;
      if ((float)fVar12 < _UNK_?) {
        if (bVar13 == 0) {
          UseInteractorVisualization_Show(this,(MethodInfo *)0x0);
        }
      }
      else if (bVar13 != 0) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                  ((MonoBehaviour *)this,(MethodInfo *)0x0);
        fVar7 = (this->fields).scale;
        this_02 = (UnityAction_1_System_Single_ *)func_?();
        if (this_02 == (UnityAction_1_System_Single_ *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
        UnityAction_1_System_Single___ctor
                  (this_02,(Object *)this,
                   MethodInfo__UseInteractorVisualization___Hide_b__32_0_float_,(MethodInfo *)0x0);
        routine = pTween::pTween_To(1.0,fVar7,0.0,(Action_1_Single_ *)this_02,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
        (this->fields).visible = 0;
      }
      if ((this->fields).hasInputBlockingRequirement != 0) {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).useRequirements;
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                            ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                              *)&stack0xffffffbc,this_00,
                             MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                            );
        RVar15 = pLVar14->_current;
        uStack_1 = 1;
        while( true ) {
          bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffac,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            );
          if (bVar13 == 0) break;
          if (RVar15 == (RegexCharClass_SingleRange)0x0) goto code_?;
          cVar16 = (**(code **)(*(int *)RVar15 + 0x134))();
          if (cVar16 != '\0') {
            if (RVar15 == (RegexCharClass_SingleRange)0x0) goto code_?;
            cVar16 = func_?();
            if (cVar16 != '\0') {
              if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
            }
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffac,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                   ,(MethodInfo *)method_00);
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
  value = (Object *)func_?(TypeInfo__UseInteractorVisualization____c__DisplayClass36_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
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
      if (this_00 == (Func_2_UseRequirement_Boolean_ *)0x0) goto code_?;
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                ((Func_2_Object_Boolean_ *)this_00,(Object *)object,
                 MethodInfo__UseInteractorVisualization____c___UpdateData_b__36_0_UseRequirement_,
                 (MethodInfo *)0x0);
      TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0 = this_00;
      func_?(&TypeInfo__UseInteractorVisualization____c->static_fields->__9__36_0,this_00);
    }
    this_01 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    if (this_01 != (Func_2_Object_Boolean_ *)0x0) {
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
  }
code_?:
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
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  if (useRequirement != (UseRequirement *)0x0) {
    pMStack_1 = (useRequirement->klass->vtable).__unknown_7.method;
    pUStack_2 = useRequirement;
    bVar3 = (*(useRequirement->klass->vtable).__unknown_7.methodPtr)();
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
  value = (Object *)func_?(TypeInfo__UseInteractorVisualization____c__DisplayClass32_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    OVar1.monitor = (MonitorData *)t;
    OVar1.klass = (Object__Class *)t;
    value[1] = OVar1;
    value[2].klass = (Object__Class *)t;
    this_00 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    if (this_00 != (Func_2_Object_Boolean_ *)0x0) {
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_,
                 (MethodInfo *)0x0);
      this_01 = (Func_2_Object_Boolean_ *)
                func_?(TypeInfo__System__Func<UseRequirement,_bool>);
      if (this_01 != (Func_2_Object_Boolean_ *)0x0) {
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  (this_01,value,
                   MethodInfo__UseInteractorVisualization____c__DisplayClass32_0___Hide_b__1_UseRequirement_
                   ,(MethodInfo *)0x0);
        UseInteractorVisualization_ChangeUseRequirements
                  (this,(Func_2_UseRequirement_Boolean_ *)this_00,
                   (Func_2_UseRequirement_Boolean_ *)this_01,(MethodInfo *)0x0);
        return;
      }
    }
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
  value = (Object *)func_?(TypeInfo__UseInteractorVisualization____c__DisplayClass31_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    OVar1.monitor = (MonitorData *)t;
    OVar1.klass = (Object__Class *)t;
    value[1] = OVar1;
    value[2].klass = (Object__Class *)t;
    this_00 = (Func_2_Object_Boolean_ *)
              func_?(TypeInfo__System__Func<UseRequirement,_bool>);
    if (this_00 != (Func_2_Object_Boolean_ *)0x0) {
      mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__UseInteractorVisualization__UseRequirementActive_UseRequirement_,
                 (MethodInfo *)0x0);
      this_01 = (Func_2_Object_Boolean_ *)
                func_?(TypeInfo__System__Func<UseRequirement,_bool>);
      if (this_01 != (Func_2_Object_Boolean_ *)0x0) {
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  (this_01,value,
                   MethodInfo__UseInteractorVisualization____c__DisplayClass31_0___Show_b__1_UseRequirement_
                   ,(MethodInfo *)0x0);
        UseInteractorVisualization_ChangeUseRequirements
                  (this,(Func_2_UseRequirement_Boolean_ *)this_00,
                   (Func_2_UseRequirement_Boolean_ *)this_01,(MethodInfo *)0x0);
        return;
      }
    }
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
  if (this_00 != (List_1_UseRequirement_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<UseRequirement>__List__);
    (this->fields).useRequirements = this_00;
    func_?(&(this->fields).useRequirements,this_00);
    uVar1 = (ulonglong)_UNK_?;
    (this->fields).pivot.x = (float)(int)(uVar1 << 0x20);
    (this->fields).pivot.y = (float)(int)((uVar1 << 0x20) >> 0x20);
    (this->fields).pivot.z = 0.0;
    (this->fields).dist = 0.01;
    (this->fields).spacing = 120.0;
    (this->fields).scale = 1.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

