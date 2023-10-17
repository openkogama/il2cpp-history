
/* Void Awake() */

void Assembly-CSharp.dll::ScaleAnimations::ScaleAnimations_Awake
               (ScaleAnimations *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScaleAnimationBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScaleAnimationBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScaleAnimationBase>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScaleAnimationBase>__GetEnumerator__
                   );
    func_?(&TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
    func_?(&MethodInfo__ScaleAnimations__OnScaleAnimationDone_float_);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).scaleAnimations;
  if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                     ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                       *)auStack_9,this_00,
                      MethodInfo__System__Collections__Generic__List<ScaleAnimationBase>__GetEnumerator__
                     );
  uStack_10 = 0;
  LStack_6._list = (List_1_System_Object_ *)pLVar8->_list;
  LStack_6._index = pLVar8->_index;
  LStack_6._version = pLVar8->_version;
  LStack_6._current = *(Object **)&pLVar8->_current;
  uStack_1 = 1;
  pLStack_11 = &LStack_6;
code_?:
  do {
    bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_6,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScaleAnimationBase>__MoveNext__
                      );
    pOVar13 = LStack_6._current;
    if (bVar12 == 0) {
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&LStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScaleAnimationBase>__Dispose__
                 ,unaff_EDI);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    RStack_14 = (RegexCharClass_SingleRange)LStack_6._current;
    pMStack_15 = (MethodInfo *)(this->fields)._.target;
    if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
    goto code_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&StringLiteral_Target_already_set);
      cRam_? = '\x01';
    }
    pDStack_16 = *(Delegate **)((int)pOVar13 + 0x1c);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pDStack_16,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar12 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Target_already_set,(MethodInfo *)0x0);
    }
    else {
      *(MethodInfo **)((int)pOVar13 + 0x1c) = pMStack_15;
      func_?((int)pOVar13 + 0x1c);
      if (pMStack_15 == (MethodInfo *)0x0) goto code_?;
      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                         ((Vector3 *)(auStack_9 + 4),(Transform *)pMStack_15,(MethodInfo *)0x0);
      fVar18 = pVVar17->z;
      *(undefined8 *)((int)pOVar13 + 0x10) = *(undefined8 *)pVVar17;
      *(float *)((int)pOVar13 + 0x18) = fVar18;
    }
    pDStack_16 = *(Delegate **)((int)pOVar13 + 0x24);
    pDVar19 = (Delegate *)func_?();
    if (pDVar19 == (Delegate *)0x0) goto code_?;
    pMStack_15 = MethodInfo__ScaleAnimations__OnScaleAnimationDone_float_;
    pvVar20 = (void *)func_?(MethodInfo__ScaleAnimations__OnScaleAnimationDone_float_);
    (pDVar19->fields).method_ptr = pvVar20;
    (pDVar19->fields).method = pMStack_15;
    (pDVar19->fields).m_target = (Object *)this;
    func_?(&(pDVar19->fields).m_target,this);
    uStack_21 = pMStack_15->parameters_count;
    (pDVar19->fields).method_code = pDVar19;
    cVar22 = func_?(pMStack_15);
    if (cVar22 == '\0') {
code_?:
      (pDVar19->fields).method_code = (pDVar19->fields).m_target;
      puVar23 = (pDVar19->fields).method_ptr;
    }
    else if (pMStack_15->indirect_call_via_invokers == 0) {
      if (uStack_21 != 1) goto code_?;
      puVar23 = &UNK_?;
    }
    else {
      puVar23 = &UNK_?;
      if (uStack_21 != 1) {
        puVar23 = &UNK_?;
      }
    }
    (pDVar19->fields).invoke_impl = puVar23;
    (pDVar19->fields).extra_arg = &UNK_?;
    pDVar19 = mscorlib.dll::System::Delegate::Delegate_Combine(pDStack_16,pDVar19,(MethodInfo *)0x0);
    if (pDVar19 != (Delegate *)0x0) {
      pDVar24 = (Delegate *)0x0;
      if ((ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)pDVar19->klass ==
          TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
        pDVar24 = pDVar19;
      }
      if (pDVar24 != (Delegate *)0x0) {
        *(Delegate **)((int)RStack_14 + 0x24) = pDVar24;
        pDVar24 = (Delegate *)0x0;
        if ((ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)pDVar19->klass ==
            TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
          pDVar24 = pDVar19;
        }
        if (pDVar24 != (Delegate *)0x0) {
          unaff_EDI = (MethodInfo *)&UNK_?;
          func_?();
          goto code_?;
        }
        func_?();
      }
      func_?();
      goto code_?;
    }
    *(undefined4 *)((int)RStack_14 + 0x24) = 0;
    unaff_EDI = (MethodInfo *)&UNK_?;
    func_?();
  } while( true );
}


/* Void OnScaleAnimationDone(Single) */

void Assembly-CSharp.dll::ScaleAnimations::ScaleAnimations_OnScaleAnimationDone
               (ScaleAnimations *this,float extraTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<ScaleAnimationBase>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).scaleAnimations;
  iVar2 = (this->fields).index + 1;
  (this->fields).index = iVar2;
  if (pLVar1 != (List_1_ScaleAnimationBase_ *)0x0) {
    if (iVar2 < (pLVar1->fields)._size) {
      (*(this->klass->vtable).Play.methodPtr)(this,0,(this->klass->vtable).Play.method);
      if ((this->fields).OnIntermediateScaleAnimationStopped !=
          (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
        pSVar3 = (this->fields).OnIntermediateScaleAnimationStopped;
        (*(pSVar3->fields)._._.invoke_impl)
                  ((pSVar3->fields)._._.method_code,extraTime,(pSVar3->fields)._._.method);
        return;
      }
    }
    else {
      if ((this->fields)._.OnScaleAnimationStopped !=
          (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
        pSVar3 = (this->fields)._.OnScaleAnimationStopped;
        (*(pSVar3->fields)._._.invoke_impl)
                  ((pSVar3->fields)._._.method_code,extraTime,(pSVar3->fields)._._.method);
      }
      (this->fields).index = 0;
    }
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Play(Single) */

void Assembly-CSharp.dll::ScaleAnimations::ScaleAnimations_Play
               (ScaleAnimations *this,float offsetTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).scaleAnimations;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,(this->fields).index,
                       MethodInfo__System__Collections__Generic__List<ScaleAnimationBase>__get_Item_int_
                      );
    if (RVar1 != (RegexCharClass_SingleRange)0x0) {
      (**(code **)(*(int *)RVar1 + 0xdc))();
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ScaleAnimations::ScaleAnimations_Update
               (ScaleAnimations *this,MethodInfo *method)

{
  if ((this->fields)._.testState == 2) {
    (*(this->klass->vtable).Play.methodPtr)(this,0,(this->klass->vtable).Play.method);
    (this->fields)._.testState = 0;
  }
  return;
}


/* ScaleAnimations() */

void Assembly-CSharp.dll::ScaleAnimations::ScaleAnimations__ctor
               (ScaleAnimations *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  (this->fields)._.originalScale.x = (pVVar1->oneVector).x;
  (this->fields)._.originalScale.y = fVar2;
  (this->fields)._.originalScale.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

