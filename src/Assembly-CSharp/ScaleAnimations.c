
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
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)auStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<ScaleAnimationBase>__GetEnumerator__
                       );
    uStack_9 = 0;
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    uStack_1 = 1;
    pLStack_10 = &LStack_6;
    while( true ) {
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScaleAnimationBase>__MoveNext__
                          );
        pOVar12 = LStack_6._current;
        if (bVar11 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScaleAnimationBase>__Dispose__
                     ,(MethodInfo *)unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        RStack_13 = (RegexCharClass_SingleRange)LStack_6._current;
        pDStack_14 = (Delegate *)(this->fields)._.target;
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Debug);
          func_?(&TypeInfo__UnityEngine__Object);
          func_?(&StringLiteral_Target_already_set);
          cRam_? = '\x01';
        }
        pMStack_15 = *(MethodInfo **)((int)pOVar12 + 0x20);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pMStack_15,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar11 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Target_already_set,(MethodInfo *)0x0);
        }
        else {
          *(Delegate **)((int)pOVar12 + 0x20) = pDStack_14;
          func_?((int)pOVar12 + 0x20);
          if (pDStack_14 == (Delegate *)0x0) goto code_?;
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                             ((Vector3 *)(auStack_8 + 4),(Transform *)pDStack_14,(MethodInfo *)0x0)
          ;
          fVar17 = pVVar16->z;
          *(undefined8 *)((int)pOVar12 + 0x14) = *(undefined8 *)pVVar16;
          *(float *)((int)pOVar12 + 0x1c) = fVar17;
        }
        pDStack_14 = *(Delegate **)((int)pOVar12 + 0x28);
        b = (Delegate *)func_?();
        pMStack_15 = MethodInfo__ScaleAnimations__OnScaleAnimationDone_float_;
        pIVar18 = MethodInfo__ScaleAnimations__OnScaleAnimationDone_float_->virtualMethodPointer;
        (b->fields).method = MethodInfo__ScaleAnimations__OnScaleAnimationDone_float_;
        (b->fields).m_target = (Object *)this;
        (b->fields).method_ptr = pIVar18;
        func_?();
        uStack_19 = pMStack_15->parameters_count;
        (b->fields).method_code = b;
        cVar20 = func_?();
        if ((cVar20 == '\0') || (uStack_19 != 1)) {
          (b->fields).method_code = (b->fields).m_target;
          puVar21 = (b->fields).method_ptr;
        }
        else {
          puVar21 = &UNK_?;
        }
        (b->fields).invoke_impl = puVar21;
        (b->fields).extra_arg = &UNK_?;
        unaff_EDI = pDStack_14;
        LStack_6._index =
             (int32_t)mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDStack_14,b,(MethodInfo *)0x0);
        if ((ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)LStack_6._index !=
            (ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)0x0) break;
        LStack_6._version = 0;
        *(undefined4 *)((int)RStack_13 + 0x28) = 0;
        LStack_6._index = (int)RStack_13 + 0x28;
        LStack_6._list = (List_1_System_Object_ *)&UNK_?;
        func_?();
      }
      pSVar22 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)0x0;
      if ((ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)
          (((ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)LStack_6._index)->_0).
          image == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
        pSVar22 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)LStack_6._index;
      }
      LStack_6._version = (int32_t)TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate;
      if (pSVar22 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)0x0) break;
      *(ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class **)((int)RStack_13 + 0x28) =
           pSVar22;
      LStack_6._version = (int32_t)(ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)0x0
      ;
      if ((ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)
          (((ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)LStack_6._index)->_0).
          image == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
        LStack_6._version = LStack_6._index;
      }
      if ((ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)LStack_6._version ==
          (ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)0x0) {
        LStack_6._version = (int32_t)TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate;
        LStack_6._list = (List_1_System_Object_ *)&UNK_?;
        LStack_6._version = func_?();
        LStack_6._index = (int32_t)extraout_ECX;
        break;
      }
      LStack_6._index = (int)RStack_13 + 0x28;
      LStack_6._list = (List_1_System_Object_ *)&UNK_?;
      func_?();
    }
    LStack_6._list = (List_1_System_Object_ *)&UNK_?;
    func_?();
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
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
      (*(code *)(this->klass->vtable).Play.method)(this,0,this->klass[1]._0.image);
      pSVar3 = (this->fields).OnIntermediateScaleAnimationStopped;
      if (pSVar3 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
        (*(pSVar3->fields)._._.invoke_impl)
                  ((pSVar3->fields)._._.method_code,extraTime,(pSVar3->fields)._._.method);
        return;
      }
    }
    else {
      pSVar3 = (this->fields)._.OnScaleAnimationStopped;
      if (pSVar3 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
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
    in_stack_6 =
         &MethodInfo__System__Collections__Generic__List<ScaleAnimationBase>__get_Item_int_;
    func_?();
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_7._list = (List_1_System_Object_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current = (Object *)0x0;
  pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).scaleAnimations;
  if (pLVar8 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_10,pLVar8,
                        MethodInfo__System__Collections__Generic__List<ScaleAnimationBase>__GetEnumerator__
                       );
    LStack_7._list = (List_1_System_Object_ *)pLVar9->_list;
    LStack_7._index = pLVar9->_index;
    LStack_7._version = pLVar9->_version;
    LStack_7._current = *(Object **)&pLVar9->_current;
    LStack_10._version = 0;
    uStack_1 = 1;
    LStack_10._current = (RegexCharClass_SingleRange)&LStack_7;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_7,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScaleAnimationBase>__MoveNext__
                        );
      if (bVar11 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_7._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if (*(int *)((int)LStack_7._current + 0x10) == 2) {
        func_?(4,LStack_7._current);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&LStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScaleAnimationBase>__Dispose__
               ,(MethodInfo *)in_stack_6);
    uStack_1 = 0xffffffff;
    pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).scaleAnimations;
    if (pLVar8 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar8,(this->fields).index,
                         MethodInfo__System__Collections__Generic__List<ScaleAnimationBase>__get_Item_int_
                        );
      if (RVar12 != (RegexCharClass_SingleRange)0x0) {
        (**(code **)(*(int *)RVar12 + 0xe8))(RVar12,0,*(undefined4 *)(*(int *)RVar12 + 0xec));
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  uVar13 = func_?();
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ScaleAnimations::ScaleAnimations_Update
               (ScaleAnimations *this,MethodInfo *method)

{
  if ((this->fields)._.testState == 2) {
    (*(code *)(this->klass->vtable).Play.method)(this,0,this->klass[1]._0.image);
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

