
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).scaleAnimations;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)auStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<ScaleAnimationBase>__GetEnumerator__
                       );
    LStack_8._list = (List_1_System_Object_ *)pLVar6->_list;
    LStack_8._index = pLVar6->_index;
    LStack_8._version = pLVar6->_version;
    LStack_8._current = *(Object **)&pLVar6->_current;
    uStack_9 = 0;
    uStack_1 = 1;
    pLStack_10 = &LStack_8;
    while( true ) {
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScaleAnimationBase>__MoveNext__
                          );
        if (bVar11 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&LStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScaleAnimationBase>__Dispose__
                     ,(MethodInfo *)unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        this_01 = (this->fields)._.target;
        RStack_12 = (RegexCharClass_SingleRange)LStack_8._current;
        if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Debug);
          func_?(&TypeInfo__UnityEngine__Object);
          func_?(&StringLiteral_Target_already_set);
          cRam_? = '\x01';
        }
        pMStack_13 = (MethodInfo *)((int)RStack_12 + 0x20);
        pDStack_14 = (Delegate *)pMStack_13->methodPointer;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pDStack_14,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar11 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Target_already_set,(MethodInfo *)0x0);
        }
        else {
          pMStack_13->methodPointer = (Il2CppMethodPointer)this_01;
          func_?(pMStack_13);
          if (this_01 == (Transform *)0x0) goto code_?;
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                             ((Vector3 *)(auStack_7 + 4),this_01,(MethodInfo *)0x0);
          fVar16 = pVVar15->z;
          *(undefined8 *)((int)RStack_12 + 0x14) = *(undefined8 *)pVVar15;
          *(float *)((int)RStack_12 + 0x1c) = fVar16;
        }
        RStack_12 = (RegexCharClass_SingleRange)((int)RStack_12 + 0x28);
        pDStack_14 = *(Delegate **)RStack_12;
        pDVar17 = (Delegate *)func_?();
        pMVar18 = MethodInfo__ScaleAnimations__OnScaleAnimationDone_float_;
        pMStack_13 = MethodInfo__ScaleAnimations__OnScaleAnimationDone_float_;
        (pDVar17->fields).method_ptr =
             MethodInfo__ScaleAnimations__OnScaleAnimationDone_float_->virtualMethodPointer;
        (pDVar17->fields).method = pMVar18;
        (pDVar17->fields).m_target = (Object *)this;
        func_?();
        uStack_19 = pMStack_13->parameters_count;
        (pDVar17->fields).method_code = pDVar17;
        cVar20 = func_?();
        if ((cVar20 == '\0') || (uStack_19 != 1)) {
          (pDVar17->fields).method_code = (pDVar17->fields).m_target;
          puVar21 = (pDVar17->fields).method_ptr;
        }
        else {
          puVar21 = &UNK_?;
        }
        (pDVar17->fields).invoke_impl = puVar21;
        (pDVar17->fields).extra_arg = &UNK_?;
        unaff_EDI = pDStack_14;
        LStack_8._index =
             (int32_t)mscorlib.dll::System::Delegate::Delegate_Combine
                                (pDStack_14,pDVar17,(MethodInfo *)0x0);
        LStack_8._version = (int32_t)TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate;
        if ((Delegate *)LStack_8._index != (Delegate *)0x0) break;
        LStack_8._version = 0;
        LStack_8._index._0_2_ = RStack_12.First;
        LStack_8._index._2_2_ = RStack_12.Last;
        *(undefined4 *)RStack_12 = 0;
        LStack_8._list = (List_1_System_Object_ *)&UNK_?;
        func_?();
      }
      pDVar17 = (Delegate *)0x0;
      if ((ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)
          ((Delegate *)LStack_8._index)->klass ==
          TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
        pDVar17 = (Delegate *)LStack_8._index;
      }
      if (pDVar17 == (Delegate *)0x0) break;
      *(Delegate **)RStack_12 = pDVar17;
      LStack_8._version = (int32_t)(Delegate *)0x0;
      if ((ScaleAnimationBase_OnScaleAnimationStoppedDelegate__Class *)
          ((Delegate *)LStack_8._index)->klass ==
          TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
        LStack_8._version = LStack_8._index;
      }
      if ((Delegate *)LStack_8._version == (Delegate *)0x0) {
        LStack_8._version = (int32_t)TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate;
        LStack_8._list = (List_1_System_Object_ *)&UNK_?;
        LStack_8._4_8_ = func_?();
        break;
      }
      LStack_8._index._0_2_ = RStack_12.First;
      LStack_8._index._2_2_ = RStack_12.Last;
      LStack_8._list = (List_1_System_Object_ *)&UNK_?;
      func_?();
    }
    LStack_8._list = (List_1_System_Object_ *)&UNK_?;
    func_?();
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
  piVar1 = &(this->fields).index;
  *piVar1 = *piVar1 + 1;
  pLVar2 = (this->fields).scaleAnimations;
  if (pLVar2 != (List_1_ScaleAnimationBase_ *)0x0) {
    if ((this->fields).index < (pLVar2->fields)._size) {
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
  pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).scaleAnimations;
  if (pLVar7 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_9,pLVar7,
                        MethodInfo__System__Collections__Generic__List<ScaleAnimationBase>__GetEnumerator__
                       );
    LStack_10._list = (List_1_System_Object_ *)pLVar8->_list;
    LStack_10._index = pLVar8->_index;
    LStack_10._version = pLVar8->_version;
    LStack_10._current = *(Object **)&pLVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&LStack_10;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_10,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScaleAnimationBase>__MoveNext__
                        );
      if (bVar11 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_10._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      if (*(int *)((int)LStack_10._current + 0x10) == 2) {
        func_?(4,LStack_10._current);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&LStack_10,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScaleAnimationBase>__Dispose__
               ,(MethodInfo *)in_stack_6);
    uStack_1 = 0xffffffff;
    pLVar7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).scaleAnimations;
    if (pLVar7 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar7,(this->fields).index,
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

